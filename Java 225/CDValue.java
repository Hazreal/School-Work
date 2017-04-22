import java.util.Scanner;
public class CDValue {
public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.print("Enter the initial deposit amount: ");
		double deposit = input.nextDouble();
	System.out.print("Enter the annual percentage yield: ");
		double per = input.nextDouble();
	System.out.print("Enter the maturity period (number of months): ");
		int period = input.nextInt();
	System.out.println("Month CD Value");
		for (int x = 1; x<= period; x++){
			deposit = deposit + deposit * (per / 100 / 12);
			System.out.printf("%5d $%,.2f\n", x, deposit);
		}
}
}