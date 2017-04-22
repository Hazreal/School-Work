import java.util.Scanner;
public class Payroll {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("Enter employee's name: ");
		String name = input.next();
		System.out.print("Enter number of hours worked in a week: ");
		double hours = input.nextDouble();
		System.out.print("Enter hourly pay rate: ");
		double payrate = input.nextDouble();
		System.out.print("Enter federal tax withholding rate: ");
		double fedtax = input.nextDouble();
		System.out.print("Enter state tax withholding rate: ");
		double statetax= input.nextDouble();	
		double gross= hours*payrate;
		double fedheld= gross*fedtax;
		double stateheld= gross*statetax;
		double netpay= gross-fedheld-stateheld;
		double fedper = fedtax *100;
		double stateper = statetax *100;	
		System.out.println("");
		System.out.println("Employee Name: " + name);
		System.out.printf("Hours Worked: %.2f \n", hours);
		System.out.printf("Pay Rate: $%.2f \n", payrate);
		System.out.printf("Gross Pay: $%.2f \n", gross);
		System.out.println("Deductions:");
		System.out.printf("  Federal Withholding (%.2f%%): $%.2f \n", fedper, fedheld);
		System.out.printf("  State Withholding (%.2f%%): $%.2f \n", stateper, stateheld);
		System.out.printf("Net Pay: $%.2f", netpay);		
	}
}