public class MergeArrays {
	public static void main(String[] args){
		java.util.Scanner input = new java.util.Scanner(System.in);
		System.out.print("Enter the first integer array: ");
	 		String firstString = input.nextLine();
	 	System.out.print("Enter the second intger array: ");
	 		String secondString = input.nextLine();
	 	String [] firstArray = firstString.split(" ");
	 	String [] secondArray = secondString.split(" ");
	 	int [] a = new int[firstArray.length];
	 	int [] b = new int[secondArray.length];
	 	for(int i = 0; i < a.length; i++){
	 		a[i] = Integer.parseInt(firstArray[i]);
	 	}
	 	for(int i = 0; i < b.length; i++){
	 		b[i] = Integer.parseInt(secondArray[i]);
	 	}
	 	java.util.Arrays.sort(a);
	 	System.out.print("The first integer array in ascending order is: ");
	 	for(int item : a){
	 		System.out.print(item + " ");
	 	}
	 	System.out.println();
	 	java.util.Arrays.sort(b);
	 	System.out.print("The second integer array in ascending order is: ");
	 	for(int item : b){
	 		System.out.print(item + " ");
	 	}
	 	System.out.println();
	 	int [] mergedArray = merge(a,b);
	 	System.out.print("The newly merged integer array is: ");
	 	for(int item : mergedArray){
	 		System.out.print(item + " ");
	 	}

	}
	public static int[] merge(int[] a, int[] b){
		int[] result = new int[a.length + b.length];
		int a1 =0, b1 = 0, r1 = 0;
		while(a1<a.length && b1<b.length){
			if(a[a1]<b[b1]){
				result[r1++]= a[a1++];
			}
			else{
				result[r1++]=b[b1++];
			}
		}
		while(a1 < a.length){
			result[r1++]=a[a1++];
		}
		while(b1 < b.length){
			result[r1++]=b[b1++];
		}
		return result;
	}
}
