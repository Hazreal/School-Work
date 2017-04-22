import java.util.Scanner;

public class RockPaperScissors {
	public static void main(String[] args) {
		int computerNumber = (int)(3*Math.random());
		Scanner input = new Scanner(System.in);
		System.out.print("Enter 0 for Rock, 1 for Paper, or 2 for Scissors: ");
		int number = input.nextInt() ;
		if (number == 0){
			if (computerNumber == 0)
			System.out.println("The Computer is Rock. You are Rock too. It is a draw.");
			else if (computerNumber == 1)
			System.out.println("The Computer is Paper. You are Rock. You lose.");
			else
			System.out.println("The Computer is Scissors. You are Rock. You win.");}
		else if (number == 1) {
			if (computerNumber == 0)
				System.out.println("The Computer is Rock. You are Paper. You win");
			else if (computerNumber == 1)
				System.out.println("The Computer is Paper. You are Paper too. It is a draw.");
			else
				System.out.println("The Computer is Scissors. You are Paper. You lose.");}
		else if (number == 2){
			if (computerNumber == 0)
			System.out.println("The Computer is Rock. You are Scissors. You lose.");
			else if (computerNumber == 1)
			System.out.println("The Computer is Paper. You are Scissors. You win.");
			else
			System.out.println("The Computer is Scissors. You are Scissors too. It is a draw.");}	
		else {
			System.out.print("Invalid input. Play again.");}
		}
	}