import java.util.Scanner;

public class aa {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str="";
		String str1="";
		int brojac=0;
		while(true) {
			str1=sc.nextLine();
			if(str1.equals("KRAJ")) {
				break;
			}
			str+=str1+ " "	;
			brojac++;
		}
		String[] lista=str.split(" ");
		if(brojac!=0) {
			int max=0;
			int indeks=0;
			for(int i=0;i<lista.length;i++) {
				if(lista[i].length()>max) {
					max=lista[i].length();
					indeks=i;
				}
			}
			System.out.println(lista[indeks]);
		}
		sc.close();
	}
}
