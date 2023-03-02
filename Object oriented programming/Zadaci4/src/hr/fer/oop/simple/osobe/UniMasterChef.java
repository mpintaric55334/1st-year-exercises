package hr.fer.oop.simple.osobe;
import hr.fer.oop.simple.zadaci4.Dessert;
public class UniMasterChef {
	private CompetitionEntry[] lc;
	public UniMasterChef(int n) {
		lc=new CompetitionEntry[n];
	}
	public Dessert getBestDessert() {
		Dessert d1=null;
		double br=0;
		for(CompetitionEntry c:lc) {
			if(c.getRating()>br) {
				br=c.getRating();
				d1=c.getD1();
			}
		}
		return d1;
	}
	static Student[] getInvolvedPeople(CompetitionEntry c) {
		return c.getStudents();
	}
	public boolean addEntry(CompetitionEntry c) {
		int i=0;
		while(i<lc.length) {
			if(lc[i]!=null) {
				if(c.equals(lc[i])){
					break;
				}
			}
			if(lc[i]==null) {
				lc[i]=c;
				return true;
			}
			i++;
		
		}
		return false;
	}
}
