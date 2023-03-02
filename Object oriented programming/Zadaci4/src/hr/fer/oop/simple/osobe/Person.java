package hr.fer.oop.simple.osobe;

public class Person {
	private String name;
	private String surname;
	private int age;
	public Person(String name,String surname,int age) {
		this.name=name;
		this.surname=surname;
		this.age=age;
	}
	public String getName() {
		return name;
	}
	public String getSurname() {
		return surname;
	}
	public int getAge() {
		return age;
	}
	public void setName(String name) {
		this.name=name;
	}
	public void setSurname(String surname) {
		this.surname=surname;
	}
	public void setAge(int age) {
		this.age=age;
	}
	@Override
	public String toString() {
		return "name: " + name +" prezime: "+ surname + " godine: "+age;
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Person other = (Person) obj;
		if (age != other.age)
			return false;
		if (name == null) {
			if (other.name != null)
				return false;
		} else if (!name.equals(other.name))
			return false;
		if (surname == null) {
			if (other.surname != null)
				return false;
		} else if (!surname.equals(other.surname))
			return false;
		return true;
	}
}

