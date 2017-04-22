import java.util.Scanner;
public class EmployeeWage {
public static void main(String[] args){
	int i = 1;
	while (i <= 3){
	Scanner input = new Scanner(System.in);
	System.out.print("Enter hourly rate: ");
	double rate1 = input.nextDouble();
	System.out.print("Enter hours worked: ");
	double hours1 = input.nextDouble();
	double pay1 = 0;
	if (hours1 <= 40) {
		pay1 = (rate1 * hours1);
		System.out.printf("Pay for Employee %d is $%,.2f.\n", i, pay1);}
	else {
		pay1 = ((hours1 - 40) * (rate1 * 1.5) + (40 * rate1));
	System.out.printf("Pay for Employee %d is $%,.2f.\n", i, pay1);}
	i++;
	}		
}
}
