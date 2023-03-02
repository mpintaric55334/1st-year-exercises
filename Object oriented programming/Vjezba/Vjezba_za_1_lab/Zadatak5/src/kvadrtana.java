
public class kvadrtana {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		if(args.length==3) {
			int a=Integer.parseInt(args[0]);
			int b=Integer.parseInt(args[1]);
			int c=Integer.parseInt(args[2]);
			if(b*b >= 4*a*c) {
				double x1=(-b+Math.sqrt(b*b-4*a*c))/(2*a);
				double x2=(-b-Math.sqrt(b*b-4*a*c))/(2*a);
				System.out.format("x1 je %f, x2 je %f",x1,x2);
			}else {
				System.out.println("No solution avaliable in R");
			}
			
		}else {
			System.out.println("„Program need arguments for a, b, and c in ax^2 + bx = c");
		}
	}

}
