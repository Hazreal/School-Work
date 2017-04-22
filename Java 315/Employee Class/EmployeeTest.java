public class EmployeeTest {
	public static void main(String[] args){
		Employee john = new Employee("John", "Doe", 3000);
		Employee jane = new Employee("Jane", "Doe", 4000);
		
		System.out.println("Before the 10% salary increase:\n");
		
		System.out.printf("%s %s's monthly salary is $%,.0f and his yearly salary is $%,.0f.\n",john.getFirstName(), john.getLastName(), john.getMonthlySalary(), john.getMonthlySalary()*12);
		System.out.printf("%s %s's monthly salary is $%,.0f and her yearly salary is $%,.0f.\n",jane.getFirstName(), jane.getLastName(), jane.getMonthlySalary(), jane.getMonthlySalary()*12);

		john.setMonthlySalary(john.getMonthlySalary()*1.1);
		jane.setMonthlySalary(jane.getMonthlySalary()*1.1);
		System.out.println("\nAfter the 10% salary increase:\n");

		System.out.printf("%s %s's monthly salary is $%,.0f and his yearly salary is $%,.0f.\n",john.getFirstName(), john.getLastName(), john.getMonthlySalary(), john.getMonthlySalary()*12);
		System.out.printf("%s %s's monthly salary is $%,.0f and her yearly salary is $%,.0f.\n",jane.getFirstName(), jane.getLastName(), jane.getMonthlySalary(), jane.getMonthlySalary()*12);
	}
}