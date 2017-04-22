import java.util.Scanner;

public class SalesPersonCommission {
 public static void main(String[] args) {
	  Scanner input = new Scanner(System.in);	
	  System.out.print("Enter numbers sold of products #1, #2, #3, and #4, in sequence: ") ;
	  double item1 = input.nextDouble() ;
	  double item2 = input.nextDouble() ;
	  double item3 = input.nextDouble() ;
	  double item4 = input.nextDouble() ;
	  
	  final double ITEM1PRICE = 239.99;
	  final double ITEM2PRICE = 129.75;
	  final double ITEM3PRICE = 99.95;
	  final double ITEM4PRICE = 350.89;
	  
	  double grossSales = ITEM1PRICE * item1 + ITEM2PRICE * item2 + ITEM3PRICE * item3 + ITEM4PRICE * item4;
	  
	  System.out.printf("Gross sales this week: $%,.2f. \n", grossSales);
	  
	  final double commisionpercent = .09;
	  double commission = grossSales * commisionpercent;
	  
	  System.out.printf("Total earnings this week: $%,.2f. \n", commission);
	  
	  final double salary = 200;
	  double earnings = commission + salary;
	  
	  System.out.printf("Commission earned this week: $%,.2f. \n", earnings);
	  
	  
	  
	
	  
 }
}
