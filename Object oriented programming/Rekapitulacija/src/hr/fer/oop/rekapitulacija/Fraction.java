package hr.fer.oop.rekapitulacija;

public class Fraction {
	private int brojnik;
	private int nazivnik;
	public Fraction(int brojnik,int nazivnik){
		this.brojnik=brojnik;
		this.nazivnik=nazivnik;
		
	}
	
	public int getBrojnik() {
		return brojnik;
	}
	private static int gcd(int x, int y) {
		return (y == 0) ? x : gcd(y, x % y);
		}

	public void setBrojnik(int brojnik) {
		this.brojnik = brojnik;
	}

	public int getNazivnik() {
		return nazivnik;
	}

	public void setNazivnik(int nazivnik) {
		this.nazivnik = nazivnik;
	}

	public Fraction add(Fraction f2) {
		int b1=brojnik;
		int n1=nazivnik;
		int b2=f2.getBrojnik();
		int n2=f2.getNazivnik();
		Fraction f3;
		int b3=b1*n2+b2*n1;
		int n3=n1*n2;
		int nzd=gcd(b3,n3);
		if(nzd<0) {
			nzd=nzd*(-1);
		}
		if(gcd(b3,n3)!=1) {
			b3=b3/nzd;
			n3=n3/nzd;
		}
		f3=new Fraction(b3,n3);
		return f3;
	}
	public Fraction subtract(Fraction f2) {
		int b1=brojnik;
		int n1=nazivnik;
		int b2=f2.getBrojnik();
		int n2=f2.getNazivnik();
		Fraction f3;
		int b3=b1*n2-b2*n1;
		int n3=n1*n2;
		int nzd=gcd(b3,n3);
		if(nzd<0) {
			nzd=nzd*(-1);
		}
		if(gcd(b3,n3)!=1) {
			b3=b3/nzd;
			n3=n3/nzd;
		}
		f3=new Fraction(b3,n3);
		return f3;
	}
	public Fraction multiply(Fraction f2) {
		int b1=brojnik;
		int n1=nazivnik;
		int b2=f2.getBrojnik();
		int n2=f2.getNazivnik();
		int b3=b1*b2;
		int n3=n1*n2;
		int nzd=gcd(b3,n3);
		if(nzd<0) {
			nzd=nzd*(-1);
		}
		if(gcd(b3,n3)!=1) {
			b3=b3/nzd;
			n3=n3/nzd;
		}
		Fraction f3=new Fraction(b3,n3);
		return f3;
	}
	public Fraction divide(Fraction f2) {
		int b1=brojnik;
		int n1=nazivnik;
		int b2=f2.getBrojnik();
		int n2=f2.getNazivnik();
		int b3=b1*n2;
		int n3=n1*b2;
		int nzd=gcd(b3,n3);
		if(nzd<0) {
			nzd=nzd*(-1);
		}
		if(gcd(b3,n3)!=1) {
			b3=b3/nzd;
			n3=n3/nzd;
		}
		Fraction f3=new Fraction(b3,n3);
		return f3;

	}
	@Override
	public String toString() {
		return String.format("%d / %d", brojnik,nazivnik);
	}
}
