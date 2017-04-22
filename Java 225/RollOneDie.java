
public class RollOneDie {
public static void main(String[] args){
	int[] frequency = new int[7];
	for(int x=1; x<=36000; x++){
		int roll = (int)(1+Math.random()*6);
		frequency[roll]++;
		}
	System.out.printf("%4s%12s%13s\n", "Face", "Frequency", "Percentage");
	for(int i = 1; i<frequency.length; i++){
		System.out.printf("%4d%12d%12.2f%%\n",i, frequency[i],((((double)frequency[i])/36000)*100));
	}
}
}