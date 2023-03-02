package hr.fer.oop.zivotinje;

public class Fish extends SeaAnimal {
	public Fish(SeaSpecies species) {
		super(species);
	}
	@Override
	public String wayOfMovement() {
		return "kao riba";
	}
}
