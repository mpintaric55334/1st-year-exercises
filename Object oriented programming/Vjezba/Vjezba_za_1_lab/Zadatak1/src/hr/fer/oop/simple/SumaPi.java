package hr.fer.oop.simple;

public class SumaPi {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double suma=0;
		int i;
		int dj=10;
		for(i=0;i<=1000000;i++) {
			suma+=(Math.pow(-1, i))/(2*i+1);
			if(i==dj) {	
				System.out.printf("i= %d, %.10f\n",i,suma*4);
				dj*=10;
			}
			
			
			
		}
	}

}
