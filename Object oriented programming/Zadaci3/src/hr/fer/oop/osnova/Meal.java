package hr.fer.oop.osnova;

public class Meal {
	private Food[] ingredients;
	public Meal(Food... ingredients) {
		this.ingredients=new Food[ingredients.length];
		int i=0;
		for(Food ingredient:ingredients) {
			this.ingredients[i]=ingredient;
			++i;
		}
	}
	public Meal(Meal jelo,int weight) {
		this.ingredients=new Food[jelo.ingredients.length];
		int tezina=0;
		for(int i=0;i<jelo.ingredients.length;i++) {
			tezina+=jelo.ingredients[i].getWeight();
		}
		for(int i=0;i<ingredients.length;i++) {
			this.ingredients[i]=new Food(jelo.ingredients[i].getType(),((jelo.ingredients[i].getWeight())/tezina)*weight);
		}
	}
	public void printIngredients(){
		for(int i=0;i<this.ingredients.length;i++) {
			System.out.println(ingredients[i].toStringInGrams());
		}
	}
	public int getNumberOfIngredients() {
		return ingredients.length;
	}
	public Food getIngredient(int index) {
		if(index>=0 && index<ingredients.length) {
			return ingredients[index];
		}else {
			return null;
		}
	}
}
