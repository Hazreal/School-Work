import java.util.Scanner;

public class MaxMin {
	public static void main(String[] args) {
		Scanner input = new Scanner (System.in);
		
		System.out.print("Enter three different integers: ");
		int number1 = input.nextInt() ;
		int number2 = input.nextInt() ;
		int number3 = input.nextInt() ;
		
		int max = number1;
		if (max < number2)
			max = number2;
		if(max < number3)
			max = number3;
		
		System.out.print("The largest number is " + max +". \n");
		
		int min = number1;
		if (min > number2)
			min = number2;
		if(min > number3)
			min = number3;
		
		System.out.print("The smallest number is " + min +".\n");
	}
}
