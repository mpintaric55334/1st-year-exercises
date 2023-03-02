package hr.fer.oop.voda;

public class Main {
	public class BaseClass {
		 private final String message1 = "M1";
		 private static final String message2 = "M2";
		 public String getMessage() {
		 return message1 + " " + getStaticMessage();
		 }
		 public static String getStaticMessage() {
		 return message2;
		 }
		}
		public class ExtendedClass extends BaseClass {
		 private final String message3 = "M3";
		 private static final String message4 = "M4";

		 @Override
		 public String getMessage() {
		 return message3 + " " + getStaticMessage();
		 }
		 public static String getStaticMessage() {
		 return message4;
		 }
		}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
			
			
			 ExtendedClass ec = new ExtendedClass();
			 System.out.println(ec.getMessage());
			 System.out.println(ec.getStaticMessage());
			 BaseClass bc = ec;
			 System.out.println(bc.getMessage());
			 System.out.println(bc.getStaticMessage());
			
	}

}
