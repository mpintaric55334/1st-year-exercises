package hr.fer.oop.simple;

import java.util.Arrays;

public class Loto2 {

	public static void Igraj(int brkugl,int izvlac) {
		// TODO Auto-generated method stub
		int[] lista=new int[izvlac];
		int i=0,num,pronaden=0;;
		for(i=0;i<izvlac;i++) {
			while(true) {
				pronaden=0;
				num=(int)(Math.random()*brkugl+1);
				if(i==0) {
					lista[i]=num;
				}else {
					for(int j=0;j<i;j++) {
						if(lista[j]==num) {
							pronaden+=1;
						}
					}
				}
				if(pronaden==0) {
					lista[i]=num;
					break;
				}
			}
		}
		Arrays.sort(lista);
		for(i=0;i<lista.length;i++) {
			System.out.print(lista[i]+" ");
		}
	}

}
