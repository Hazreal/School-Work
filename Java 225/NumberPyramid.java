import java.util.Scanner;
public class NumberPyramid {
public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.print("Enter the number of lines: ");
	int n = input.nextInt();
	if (n >15 || n < 1){
		System.out.print("You must enter a number from 1 to 15.");
		System.exit(0);}
	else
		for(int i = 1; i<=n;i++){
			for(int j = 1; j <= n-i; j++){
				System.out.print("   ");}
			for (int k = i; k>=1; k--){
				System.out.print(k >= 10 ? " " + k : "  "+ k);}
			for(int l = 2; l <= i; l++){
				System.out.print(l >= 10 ? " " + l : "  "+ l);;}
			System.out.println();
}}}
