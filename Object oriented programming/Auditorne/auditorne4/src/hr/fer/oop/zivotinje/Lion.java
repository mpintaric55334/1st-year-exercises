package hr.fer.oop.zivotinje;

public class Lion extends Animal implements MakeSound {
	@Override
	public String introduceYourself() {
		return "lion";
	}
	private Animal aa=new Duck();
	@Override
	public String MakeSound() {
		return "roaaar";
	}
}
