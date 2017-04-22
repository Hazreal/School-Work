import java.util.Scanner;

public class EliminateDuplicates {
public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	int[] myArray = new int[10];
	System.out.print("Enter ten numbers: ");
	for(int i=0; i<myArray.length; i++){
		myArray[i]=input.nextInt();
	}
	int[] newArray= eliminateDuplicates(myArray);
	System.out.print("The distinct numbers are: ");
	for(int x=0; x<newArray.length;x++){
		System.out.print(newArray[x]+" ");
	}
}

public static int[] eliminateDuplicates(int[] list){
	int[] tempArray = new int[list.length];
	tempArray[0] = list[0];
	int size = 1;
		for(int i=1; i<list.length;i++){
			boolean isInArray = false;
			for(int j = 0; j < size; j++){
				if(list[i]==tempArray[j]){
					isInArray= true;
				}
			}	
			if(!isInArray){
				tempArray[size++] = list[i];
			}
		}
	int[] realArray = new int[size];
		for(int i=0; i<realArray.length;i++){
			realArray[i] = tempArray[i];
		}
return realArray;
	}
}
