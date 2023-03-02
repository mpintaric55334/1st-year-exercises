package hr.fer.oop.simple;

public class Pi {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String prveznam="3.141590";
		double suma=0,pi;
		int i=1;
		String pistr;

		while(true) {
			suma += (1./((double)i*i));
			pi=Math.sqrt(suma*6);
			pistr=String.format("%.6f",pi);
			if(prveznam.equals(pistr)) {
				System.out.println(i);
				break;
			}
			i+=1;
		}

	}

}
