package hr.fer.oop.zivotinje;

public abstract class SeaAnimal extends Animal{
	private SeaSpecies species;
	public SeaAnimal(SeaSpecies species) {
		this.species=species;
	}
	@Override 
	public final String introduceYourself() {
		return "sea animal";
	}
	public abstract String wayOfMovement();
	public void printSpecies() {
		System.out.println(species);
	}

}
