package hr.fer.oop.kompjuterni;

final public class Notebook extends Laptop{
	public Notebook(String model,String manufacturer,String operatingSystem,int batteryCapacity,double weight) {
		super(model,manufacturer,operatingSystem,batteryCapacity,weight);
	}
	@Override
	public String getComputerType() {
		return "netbook laptop computer";
		
	}
	@Override
	public int calculatePortabilityScore() {
		return 1;
	}

}
