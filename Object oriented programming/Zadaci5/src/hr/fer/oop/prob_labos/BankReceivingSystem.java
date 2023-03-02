package hr.fer.oop.prob_labos;

class BankReceivingSystem implements ReceivingSystem {
	private int UrgentListSize;
	private int NonUrgentListSize;
	private boolean EmployeeOccupied;
	private int NumberOfArrivedCustomers;
	public BankReceivingSystem() {
		this.UrgentListSize=0;
		this.NonUrgentListSize=0;
		this.EmployeeOccupied=false;
		this.NumberOfArrivedCustomers=0;
	}
	@Override
	public void calculateEmployeeStatus() {
		if(!EmployeeOccupied &&(UrgentListSize!=0 || NonUrgentListSize!=0)) {
			EmployeeOccupied=true;
		}
	}
	@Override
	public void customerArrived(boolean urgent) {
		NumberOfArrivedCustomers+=1;
		
		if(urgent) {
			UrgentListSize+=1;
			
		}else {
			NonUrgentListSize+=1;
		}
		NumberOfArrivedCustomers+=1;
		calculateEmployeeStatus();
		
	}
	@Override
	public void customerLeft(boolean urgent) {
		if(urgent) {
			UrgentListSize-=1;
			
		}else {
			NonUrgentListSize-=1;
		}
		EmployeeOccupied=false;
		calculateEmployeeStatus();
	}
	@Override
	public int getUrgentListSize() {
		return UrgentListSize;
	}
	@Override
	public int getNonUrgentListSize() {
		return NonUrgentListSize;
	}
	@Override
	public boolean isEmployeeOccupied() {
		return EmployeeOccupied;
	}
	@Override
	public int getNumberOfArrivedCustomers() {
		return NumberOfArrivedCustomers;
	}
}
