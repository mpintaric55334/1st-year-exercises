package hr.fer.oop.auti;

public class PassengerVan extends Van {
	private int noOfPassengers;
	public PassengerVan(String regNo,String model,int year,double price,double height,int noOfSeats,int noOfPassengers) {
		super(regNo,model,year,price,height,noOfSeats);
		this.noOfPassengers=noOfPassengers;
	}
	public int getNoOfPassengers() {
		return noOfPassengers;
	}

	public void setNoOfPassengers(int noOfPassengers) {
		this.noOfPassengers = noOfPassengers;
	}
	@Override
	public double Povrat() {
		return 0.8;
	}
}
