package hr.fer.oop.auti;

public class Vehicle {
	private String regNo;
	private String model;
	private int year;
	private double price;
	public Vehicle(String regNo,String model,int year,double price) {
		this.regNo=regNo;
		this.model=model;
		this.year=year;
		this.price=price;
	}
	public String getRegNo() {
		return regNo;
	}
	public void setRegNo(String regNo) {
		this.regNo = regNo;
	}
	public String getModel() {
		return model;
	}
	public void setModel(String model) {
		this.model = model;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		this.year = year;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	@Override
	public String toString() {
		return "regNo: "+ regNo + " model: " + model + " year: "+ year+ " price: " + price;
	}
	public double getPricePerDay() {
		return this.price*Povrat()*24;
	}
	public double Povrat() {
		return 1.0;
	}
	public double getPricePerMonth() {
		return getPricePerDay()*30;
	}
	static Vehicle getNewestVehicle(Vehicle...vehicles) {
		int y=0;
		Vehicle s=null;
		for(Vehicle v:vehicles) {
			if(v.year>y) {
				y=v.year;
				s=v;
			}
		}
		return s;
	}
	static void printAllVehiclesWithCargoSpaceGreaterThan(double zapremnina,Vehicle...vehicles) {
		for(Vehicle v:vehicles) {
			if(v instanceof Car) {
				Car c=(Car) v;
				if(c.getCargoSpace()>zapremnina) {
					System.out.println(c);
				}
			}
			if (v instanceof CargoVan)
				if (((CargoVan)v).getMaxLoad() > zapremnina)
					System.out.println(" - " + v.getModel() + ": " + ((CargoVan)v).getMaxLoad());
		}
	}
	
}
