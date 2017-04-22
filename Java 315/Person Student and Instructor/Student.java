public class Student 
	extends Person {
	private String major;
	
	public Student(){
		
	}
	
	public Student(String major, String name, String birthYear){
		this.major = major;
		setName(name);
		setBirthYear(birthYear);
	}
	
	public String getMajor(){
		return major;
	}

	public String toString() {
		return (super.toString() + "\n" + "Student Major: " + major);
	}
}