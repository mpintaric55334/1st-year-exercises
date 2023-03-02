package hr.fer.oop.simple.osobe;

public class Teacher extends Person {
	private String email;
	private String subject;
	private double salary;
	public Teacher(String name,String surname,int age,String email, String subject, double salary) {
		super(name,surname,age);
		this.email=email;
		this.subject=subject;
		this.salary=salary;

	}
	public String getEmail() {
		return email;
	}
	public String getSubject() {
		return subject;
	}
	public double getSalary() {
		return salary;
		
	}
	public void setEmail(String email) {
		this.email=email;
	}
	public void setSubject(String subject) {
		this.subject=subject;
	}
	public void setSalary(double salary) {
		this.salary=salary;
	}
	@Override
	public String toString() {
		return super.toString()+ " email: "+ email+ " subject: "+ subject+" salary: "+salary;
				
	}
	@Override
	public boolean equals(Object obj) {
		if(this==obj) {
			return true;
		
		}
		if(obj==null) {
			return false;
		}
		if(obj instanceof Teacher) {
			Teacher t=(Teacher) obj;
			if(t.email.equals(this.email)) {
				return true;
			}else {
				return false;
			}
		}else {
			return false;
		}
	}
	public void increaseSalary(int postotak) {
		setSalary(getSalary()*(1.0+postotak/100.0));
	}
	static void increaseSalary(int postotak,Teacher...teachers) {
		for(Teacher teacher:teachers) {
			teacher.setSalary(teacher.getSalary()*(1.0+postotak/100.0));
		}
	}
	
}
