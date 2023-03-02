package hr.fer.oop.stablo;

public class BST {
	public int rootValue;
	public BST leftNode;
	public BST rightNode;
	public boolean rootValueExists;
	public BST() {
		this.rootValueExists=false;
		this.rootValue=0;
	}
	public void add(int a) {
		if(rootValueExists==false) {
			rootValue=a;
			rootValueExists=true;
			System.out.println("dodano");
			leftNode=new BST();
			rightNode=new BST();
		}
		if(a<rootValue) {
			leftNode.add(a);
		}else if(a>rootValue) {
			rightNode.add(a);
		}
	}
}
