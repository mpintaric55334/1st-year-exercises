package hr.fer.oop.kompjuterni;

public abstract class Computer implements proba {
	private String model;
	private String manufacturer;
	private String operatingSystem;
	public Computer(String model,String manufacturer,String operatingSystem) {
		this.model=model;
		this.manufacturer=manufacturer;
		this.operatingSystem=operatingSystem;
	}
	public String getModel() {
		return model;
	}
	public void setModel(String model) {
		this.model = model;
	}
	public String getManufacturer() {
		return manufacturer;
	}
	public void setManufacturer(String manufacturer) {
		this.manufacturer = manufacturer;
	}
	public String getOperatingSystem() {
		return operatingSystem;
	}
	public void setOperatingSystem(String operatingSystem) {
		this.operatingSystem = operatingSystem;
	}
	public abstract String getComputerType();
	@Override
	public int calculatePortabilityScore() {
		return 0;
	}
	@Override
	public String toString() {
		return "model: "+model+" manufacturer: "+manufacturer+" operating System: "+operatingSystem;
	}
}
