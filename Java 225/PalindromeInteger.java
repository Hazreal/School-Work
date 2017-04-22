import java.util.Scanner;
public class PalindromeInteger {
public static void main(String[] args){
	Scanner inp = new Scanner(System.in);
	int number;
	int rev = 0;
	System.out.print("Enter a positive integer: ");
	number = inp.nextInt();
	rev = reverse(number);
	System.out.printf("The number %d in reverse order is %d.\n",number, rev);
	if(isPalindrome(number)){
		System.out.printf("The number %d is not a palindrome.\n", number);
	}
	else{
		System.out.printf("The number %d is a palindrome.\n", number);
}
}
public static int reverse(int number){
	int rev = 0;
	while (number > 0){
		rev= rev*10 + number%10;
		number = number/10;	
	}
	return rev;
}
public static boolean isPalindrome(int number){
boolean rev = true;
if (number == reverse(number)){
	rev = false;
}
	return rev;
}
}





