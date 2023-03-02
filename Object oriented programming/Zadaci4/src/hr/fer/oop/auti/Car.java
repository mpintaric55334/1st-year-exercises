package hr.fer.oop.auti;

public class Car extends Vehicle{
	private String carType;
	private double CargoSpace;
	public Car(String regNo,String model,int year,double price,String carType,double CargoSpace) {
		super(regNo,model,year,price);
		this.carType=carType;
		this.CargoSpace=CargoSpace;
	}
	public double getCargoSpace() {
		return CargoSpace;
	}
	public void setCargoSpace(double cargoSpace) {
		CargoSpace = cargoSpace;
	}
	public String getCarType() {
		return carType;
	}
	public void setCarType(String carType) {
		this.carType = carType;
	}
	@Override
	public double Povrat() {
		return 1.0;
	}
	
}
