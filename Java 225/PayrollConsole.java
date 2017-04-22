import java.util.Scanner;
public class PayrollConsole {
	public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.print("Enter employee's name: ");
		String name = input.nextLine();
	System.out.print("Enter number of hours worked in a week: ");
		double hours = input.nextDouble();
	System.out.print("Enter hourly pay rate: ");
		double hpay = input.nextDouble();
	System.out.print("Enter the federal tax withholding rate: ");
		double ftax = input.nextDouble();
	System.out.print("Enter state tax withholding rate: ");
		double stax = input.nextDouble();
	double grosspay = hours * hpay;
	double fwithholding = grosspay * ftax;
	double swithholding = grosspay * stax;
	double totalwithholding = fwithholding + swithholding;
	double netpay = grosspay - totalwithholding;
	double deduction = swithholding + fwithholding;
	System.out.println(" ");
	System.out.println("Employee name: " + name);
	System.out.printf("Hours Worked: %.2f \n", hours);
	System.out.printf("Pay Rate: $%.2f \n",hpay);
	System.out.printf("Gross Pay: $%.2f \n", grosspay);
	System.out.println("Deductions: ");
	System.out.printf("  Federal Withholding (%.2f%%): $%.2f \n", 100*ftax, fwithholding);
	System.out.printf("  State Withholding (%.2f%%): $%.2f \n", 100*stax, swithholding);
	System.out.printf("  Total Deduction: $%.2f \n", deduction);
	System.out.printf("Net Pay: $%.2f", netpay);	
	}	
}