import java.util.Scanner;

public class DisplayMatrix {
public static void main(String[] args){
	Scanner input= new Scanner(System.in);
		System.out.print("Enter n: ");
			int n = input.nextInt();
			printMatrix(n);
}

public static void printMatrix(int n){
	for(int i = 0; i< n; i++){
		for(int p = 0; p <n; p++){
			int number = (int)(Math.random()*n);
			System.out.print(number + " ");
		}
		System.out.println();
}
}
}