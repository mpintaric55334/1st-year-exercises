package hr.fer.oop.voda;

public class GlassOfWater {
	private int zapremnina;
	private int voda;
	private int brled;
	public GlassOfWater(int zapremnina) {
		this.zapremnina=zapremnina;
		this.voda=0;
		this.brled=0;
	}
	public void addWater(int amount) {
		voda+=amount;
		checkSize();
		System.out.println("water "+voda + " ice "+ brled/50);
	}
	public void addIceCubes(int br) {
		brled+=50*br;
		checkSize();
		System.out.println("water "+voda + " ice "+ brled/50);
	}
	public void checkSize() {
		if(voda+brled>zapremnina) {
			while(voda+brled>zapremnina) {
				if(brled>=zapremnina) {
					voda=0;
					while(brled>zapremnina) {
						brled-=50;
					}
				}else {
					voda=zapremnina-brled;
				}
			}
		}
	}
}
