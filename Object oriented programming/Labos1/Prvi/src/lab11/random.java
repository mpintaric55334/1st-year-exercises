package lab11;

public class random {
	static int myRandom(int from, int to) {
		int broj;
		int range=to-from+1;
		broj=(int)(Math.random()*range)+from;
		return broj;
	}
	public static void main(String[] args) {
		System.out.println(myRandom(-1,1));
	}
}
