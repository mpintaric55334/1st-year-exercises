package hr.fer.oop.zivotinje;

public class Duck extends Animal implements MakeSound{
	@Override
	public String introduceYourself() {
		return "duck";
	}
	@Override
	public String MakeSound() {
		return "kvuak";
	}
}
