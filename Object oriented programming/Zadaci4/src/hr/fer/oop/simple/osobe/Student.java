package hr.fer.oop.simple.osobe;

public class Student extends Person {
	private String studentId;
	private short academicYear;
	public Student(String name,String surname,int age,String studentId,short academicYear) {
		super(name,surname,age);
		this.studentId=studentId;
		this.academicYear=academicYear;
	}
	public String getStudentId() {
		return studentId;
	}
	public short getAcademicYear() {
		return academicYear;
	}
	public void setStudentId(String studentId) {
		this.studentId=studentId;
	}
	public void setAcademicYear(short academicYear) {
		this.academicYear=academicYear;
	}
	@Override
	public boolean equals(Object obj) {
		if(obj==this) {
			return true;
		}
		if(obj==null) {
			return false;
		}
		if(this.getClass()!=obj.getClass()) {
			return false;
		}else {
			Student std=(Student) obj;
			if(studentId.equals(std.studentId)) {
				return true;
			}else {
				return false;
			}
			
		}
	}
	@Override
	public String toString() {
		return super.toString() + " studentId: "+ studentId + " academic year: "+academicYear;
	}
}
