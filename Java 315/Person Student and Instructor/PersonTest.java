public class PersonTest {
	public static void main(String[] args){
		Person person = new Person("John Doe", "1960");
		Student student = new Student("Finance", "Emily Zhang", "2007");
		Instructor instructor = new Instructor(50000, "Paul Zhang", "1970");
		
		System.out.println(person.toString() + "\n");
		System.out.println(student.toString() + "\n");
		System.out.println(instructor.toString());
	}
}