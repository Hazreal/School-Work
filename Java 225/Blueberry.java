public class Blueberry {
public static void main(String[] args){
	int b1=0;
	int b2=0;
	int b3=0;
	int x=1;
			System.out.println("The following is from a while loop:");
			while (x<=100){
				if (x%3 == 0 && x%5 == 0){
					System.out.printf("%3d Blueberry \n", x);
					b1++;}
				else if (x%3 == 0){
					System.out.printf("%3d Blue\n", x);
					b2++;}
				else if (x%5 == 0){
					System.out.printf("%3d Berry\n", x);
					b3++;}
				else{
					System.out.printf("%3d \n", x);}
					x++;}
		System.out.println("There are " +b2 + " Blues.");
		System.out.println("There are " +b3 + " Berries.");
		System.out.println("There are " +b1 + " Blueberries.");
		System.out.println();
		b1=0;
		b2=0;
		b3=0;
		x=1;
			System.out.println("The following is from a for loop:");
			for (x=1; x<=100; x++){
				if (x%3 == 0 && x%5 == 0){
					System.out.printf("%3d Blueberry \n", x);
					b1++;}
				else if (x%3 == 0){
					System.out.printf("%3d Blue\n", x);
					b2++;}
				else if (x%5 == 0){
					System.out.printf("%3d Berry\n", x);
					b3++;}
				else{
					System.out.printf("%3d \n", x);}}
			System.out.println("There are " +b2 + " Blues.");
			System.out.println("There are " +b3 + " Berries.");
			System.out.println("There are " +b1 + " Blueberries.");
			System.out.println();
		b1=0;
		b2=0;
		b3=0;
		x=1;
			System.out.println("The following is from a do...while loop:");
			do{
				if (x%3 == 0 && x%5 == 0){
					System.out.printf("%3d Blueberry \n", x);
					b1++;}
				else if (x%3 == 0){
					System.out.printf("%3d Blue\n", x);
					b2++;}
				else if (x%5 == 0){
					System.out.printf("%3d Berry\n", x);
					b3++;}
				else{
					System.out.printf("%3d \n", x);}
				x++;} while (x<=100);
			System.out.println("There are " +b2 + " Blues.");
			System.out.println("There are " +b3 + " Berries.");
			System.out.println("There are " +b1 + " Blueberries.");
}}