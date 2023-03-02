package hr.fer.oop.notsimple;
import java.util.Scanner;

import hr.fer.oop.simple.Loto2;
public class Derac {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		while(true) {
			System.out.println("Pisi broj kuglica: ");
			int brkugl=sc.nextInt();
			if(brkugl <= 0) {
				break;
			}
			System.out.println("Pisi broj izvlacenja: ");
			int izvlac=sc.nextInt();
			if(izvlac <= 0) {
				break;
			}
			
			Loto2.Igraj(brkugl, izvlac);
		}
		sc.close();
		
	}

}
