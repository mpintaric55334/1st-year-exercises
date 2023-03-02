package hr.fer.oop.zivotinje;

public class Octopus extends SeaAnimal{
	public Octopus(SeaSpecies species) {
		super(species);
	}
	@Override
	public String wayOfMovement() {
		return "hobotnicarski";
	}
}
