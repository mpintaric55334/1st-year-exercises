package hr.fer.oop.simple.osobe;
import hr.fer.oop.simple.zadaci4.Dessert;
public class CompetitionEntry {
	private Teacher t1;
	private Dessert d1;
	private Student[] studenti;
	private int[] ocjene;;
	public CompetitionEntry(Teacher t1,Dessert d1) {
		this.t1=t1;
		this.d1=d1;
		this.studenti=new Student[3];
		this.ocjene=new int[3];
		ocjene[0]=0;
		ocjene[1]=0;
		ocjene[2]=0;
	}
	public Teacher getT1() {
		return t1;
	}

	public Dessert getD1() {
		return d1;
	}
	public Student[] getStudents() {
		return studenti;
	}

	public int[] getRatings() {
		return ocjene;
	}
	public boolean addRating(Student std,int grade) {
		int i=0;
		
		while(i<3) {
			if(std.equals(studenti[i])) {
				break;
				
			}
			if(studenti[i]==null) {
				studenti[i]=std;
				ocjene[i]=grade;
				return true;
			}
			i++;
		}
		return false;
	}
	public double getRating() {
		double sum=0;
		int koliko=0;
		for(int i=0;i<3;i++) {
			sum+=ocjene[i];
			if(studenti[i]!=null) {
				koliko++;
			}
			
		}
		if(ocjene[0]==0 && ocjene[1]==0 &&ocjene[2]==0) {
			return 0;
		}
		sum=sum/koliko;
		return sum;
	}
	@Override
	public boolean equals(Object obj) {
		//provjere?
		CompetitionEntry other = (CompetitionEntry) obj;
		if (!t1.equals(other.t1))
			return false;
		return true;
	} 
	
}
