import java.io.File;
import java.io.PrintWriter;
import java.util.Scanner;

public class FileReverse {
	public static void main(String[] args){
		try (Scanner input = new Scanner(new File("input.txt"));
			PrintWriter output = new PrintWriter(new File("output.txt"));){
			while (input.hasNext()){
				String line = input.nextLine();
				StringBuilder builder = new StringBuilder(line);
				builder = builder.reverse();
				System.out.println(builder);
				output.println(builder.toString());
			}
			
			System.out.print("The file was copied successfully.");
		}
		catch (Exception e){
			System.out.println("Something went wrong.");
			e.printStackTrace();
		}
	}
}