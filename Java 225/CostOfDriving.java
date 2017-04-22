import java.util.Scanner;

public class CostOfDriving {
	public static void main(String[] args){
		Scanner input = new Scanner (System.in);
		
		System.out.print("Enter the distance to drive in miles: ");
		//miles is distance traveled
		double miles = input.nextDouble() ;
		System.out.print("Enter the miles per gallon: ");
		//mpg is miles per gallon
		double mpg = input.nextDouble() ;
		System.out.print("Enter the price per gallon: ");
		//ppg is price per gallon
		double ppg = input.nextDouble();
		
		double cost = (miles / mpg) * ppg;
		
		System.out.printf("The cost of driving is $%,.2f.", cost);
		
	}
}
