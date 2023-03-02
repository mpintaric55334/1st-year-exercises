package hr.fer.oop.osnova;

public class Food {
	private FoodType type;
	private int weight;
	
	public Food(FoodType type,int weight) {
		this.type=type;
		this.weight=weight;
	}
	public FoodType getType() {
		return type;
	}
	public int getWeight() {
		return weight;
	}
	
	@Override
	public String toString() {
		return String.format("%s: p - %d%%, c-%d%%, f- %d%%, w- %dg",type.getName(),type.getProtein(),type.getCarbs(),type.getFat(),weight);
	}
	public String toStringInGrams() {
		return String.format("%s: p - %.1fg, c-%.1fg, f- %.1fg, w- %dg",type.getName(),this.getProtein(),this.getCarbs(),this.getFat(),weight);
	}
	
	public double getProtein() {
		return (((double)type.getProtein())/100)*weight;
	}
	public double getCarbs() {
		return (((double)type.getCarbs())/100)*weight;
	}
	public double getFat() {
		return (((double)type.getFat())/100)*weight;
	}
}
