package hr.fer.oop.auti;

public class Limo extends Vehicle {
	private double length;
	private boolean miniBar;
	private boolean SunRoof;
	public Limo(String regNo,String model,int year,double price,double length,boolean miniBar,boolean SunRoof) {
		super(regNo,model,year,price);
		this.length=length;
		this.miniBar=miniBar;
		this.SunRoof=SunRoof;
		
	}
	public double getLength() {
		return length;
	}
	public void setLength(double length) {
		this.length = length;
	}
	public boolean isMiniBar() {
		return miniBar;
	}
	public void setMiniBar(boolean miniBar) {
		this.miniBar = miniBar;
	}
	public boolean isSunRoof() {
		return SunRoof;
	}
	public void setSunRoof(boolean sunRoof) {
		SunRoof = sunRoof;
	}
	@Override
	public double Povrat() {
		return 1.5;
	}
	
}
