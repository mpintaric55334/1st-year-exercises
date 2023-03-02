package hr.fer.oop.kompjuterni;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Computer n = new Notebook("Ideapad S12", "Lenovo", "Windows", 50, 1.55);
		System.out.println(n);
		System.out.println(n.getComputerType());
		System.out.println(n.calculatePortabilityScore());
		Laptop l = (Laptop) n;
		System.out.println(l.calculatePortabilityScore());
	}

}
