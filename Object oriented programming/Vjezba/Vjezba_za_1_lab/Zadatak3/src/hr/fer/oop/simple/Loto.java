package hr.fer.oop.simple;

public class Loto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean[] lista=new boolean[39];
		int i=0;
		int num;
		while(i<7) {
			num=(int)(Math.random()*39);
			if(!lista[num]) {
				lista[num]=true;
				i++;
			}
		}
		for(i=0; i<lista.length ; i++) {
			if (lista[i]) {
				System.out.printf("%d ", i);
			}
		}
	}

}
