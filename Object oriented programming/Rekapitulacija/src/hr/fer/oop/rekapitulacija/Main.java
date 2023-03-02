package hr.fer.oop.rekapitulacija;
import hr.fer.oop.stablo.BST;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BST stablo=new BST();
		stablo.add(3);
		stablo.add(2);
		stablo.add(6);
		stablo.add(7);
		stablo.add(4);
		stablo.add(5);
		System.out.println(stablo.rightNode.leftNode.rightNode.rootValue);
		
	}

}
