import java.net.URL;
import java.util.Scanner;

public class ProcessLargeDataset {
	public static void main(String[] args){
		
		int countAssistant = 0;
		int countAssociate = 0;
		int countFull = 0;
		
		double sumAssistant = 0;
		double sumAssociate = 0;
		double sumFull = 0;
		
		try{
			URL url = new URL("http://cs.armstrong.edu/liang/data/Salary.txt");
			Scanner input = new Scanner(url.openStream());
			while (input.hasNext()){
				String line = input.nextLine();
				String[] myString = line.split(" ");
				if(myString[2].equals("assistant")){
					countAssistant++;
					sumAssistant += Double.parseDouble(myString[3]);
				}
				
				else if(myString[2].equals("associate")){
					countAssociate++;
					sumAssociate += Double.parseDouble(myString[3]);
				}
				
				else if(myString[2].equals("full")){
					countFull++;
					sumFull += Double.parseDouble(myString[3]);
				} 
			}			
		}
		
		catch (java.net.MalformedURLException ex){
			System.out.println("Invalid URL");
		}
		
		catch (java.io.IOException ex) {
			System.out.println("I/O Errors: no such file");
		}
		
		System.out.println("Data were retrieved from http://cs.armstrong.edu/liang/data/Salary.txt\n");
		System.out.printf("Total salary for assistant professors is $%,.2f\n", sumAssistant);
		System.out.printf("Total salary for associate professors is $%,.2f\n", sumAssociate);
		System.out.printf("Total salary for full professors is $%,.2f\n", sumFull);
		System.out.printf("Total salary for all professors is $%,.2f\n\n", sumAssistant + sumAssociate + sumFull);
		
		System.out.printf("Average salary for assistant professors is $%,.2f\n", sumAssistant/countAssistant);
		System.out.printf("Average salary for associate professors is $%,.2f\n", sumAssociate/countAssociate);
		System.out.printf("Average salary for full professors is $%,.2f\n", sumFull/countFull);
		System.out.printf("Average salary for all professors is $%,.2f\n", (sumAssistant + sumAssociate + sumFull)/(countAssistant + countAssociate +countFull));	
	}
}