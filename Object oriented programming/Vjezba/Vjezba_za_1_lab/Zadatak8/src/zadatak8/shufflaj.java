package zadatak8;
import java.util.Scanner;

public class shufflaj {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str;
		String strfinal="";
		Scanner sc=new Scanner(System.in);
		String[] l;
		while(true){
			System.out.println("Printaj lajnu: ");
			str=sc.nextLine();
			if(str.equalsIgnoreCase("quit")) {
				System.out.println(strfinal);
				break;
			}
			str=str.trim();
			if(str.length()!=0) {
				l=str.split("[, ]+");
				for(int i=0;i<l.length;i++) {
					System.out.println(l[i]);
				}
				int num=(int)(Math.random()*l.length);
				strfinal += l[num].toUpperCase()+" ";
				System.out.println(l[num]);
			}
		}
	}

}
