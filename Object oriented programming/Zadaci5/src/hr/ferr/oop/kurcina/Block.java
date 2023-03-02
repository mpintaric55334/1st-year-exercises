package hr.ferr.oop.kurcina;

class Block {
	public byte[] prevHash;
	public String[] transactions;
	public int size;
	public Hasher hasher;
	public Block(int maxTransactions) {
		size=0;
		transactions=new String[maxTransactions];
		hasher=newSHAHsher();
	}
	public Block(int maxTransactions,Hasher hasher) {
		size=0;
		transactions=new String[maxTransactions];
		this.hasher=hasher;
	}
	public int add(String transaction) {
		this.transactions[size]=transaction;
		size++;
		return size;
	}
	public void remove(int index) {
		for(int i=index;i<transactions.length-1;i++) {
			transactions[i]=transactions[i+1];
		}
		size--;
	}
	public void setPrevHash(byte[] prevHash) {
		this.prevHash=prevHash;
	}
	public byte[] hash(byte[] prevHash) {
		return new SHAHasher().hash(prevHash, this.transactions);
	}
	public byte[] getPrevHash() {
		return prevHash;
	}
}
