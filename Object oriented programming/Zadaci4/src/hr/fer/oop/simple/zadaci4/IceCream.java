package hr.fer.oop.simple.zadaci4;

public class IceCream extends Dessert {
	private String flavour;
	private String color;
	public IceCream(String name,double weight,int calories,String flavour,String color) {
		super(name,weight,calories);
		this.flavour=flavour;
		this.color=color;
	}
	public String getFlavour() {
		return flavour;
	}
	public String getColor() {
		return color;
	}
	@Override
	public String toString() {
		return super.toString()+ "color = "+ color + "flavour "+ flavour;
	}
	public String getDessertType() {
		return "ice cream";
	}
}
