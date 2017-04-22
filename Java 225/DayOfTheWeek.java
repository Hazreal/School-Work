import java.util.Scanner;

public class DayOfTheWeek {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the year: (e.g., 2014): ");
			int year = input.nextInt();
		System.out.print("Enter the month: ");
			int m = input.nextInt();	
		System.out.print("Enter the day of the month: 1-31: ");
			int q = input.nextInt();
			if (m == 1){
				m = 13;
				--year;}
			else if (m == 2){
				m = 14;
				--year;}
		int j = (year / 100);
		int k = (year % 100);
		int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
		int day = h;
		String dayString = "";
		switch (day) {
			case 0: dayString = "Saturday";
				break;
			case 1: dayString = "Sunday";
				break;
			case 2: dayString = "Monday";
				break;
			case 3: dayString = "Tuesday";
				break;
			case 4: dayString = "Wednesday";
				break;
			case 5: dayString = "Thursday";
				break;
			case 6: dayString = "Friday";
				break;
		}
		System.out.println("Day of the week is " + dayString + ".");
			
	}
	
}
