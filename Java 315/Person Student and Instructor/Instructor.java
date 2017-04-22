public class Instructor 
	extends Person{
	
	private double salary;
	
	public Instructor(){
		
	}
	
	public Instructor(double salary, String name, String birthYear){
		this.salary = salary;
		setBirthYear(birthYear);
		setName(name);
	}
	
	public double getSalary(){
		return salary;
	}
	
	public String toString() {
		return (super.toString() + "\n" + "Instructor Salary: $" + String.format("%,.2f", salary));
	}
	
}