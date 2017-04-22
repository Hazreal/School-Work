public class Person {
	private String name;
	private String birthYear;
	
	public Person(){
		
	}
	
	public Person(String name, String birthYear){
		this.name = name;
		this.birthYear = birthYear;
	}
	
	public String getName(){
		return name;
	}
	
	public String getBirthYear(){
		return birthYear;
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public void setBirthYear(String birthYear){
		this.birthYear = birthYear;
	}
	
	public String toString() {
		return ("Person Name: " + name + "\nPerson Birth Year: " + birthYear);
	}
}
