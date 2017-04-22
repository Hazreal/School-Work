
public class RollTwoDice {
	public static void main(String[] args){
		int[] exFrequency={0,0,1,2,3,4,5,6,5,4,3,2,1};
		int[] frequency = new int[13];
		int face1, face2;
		for(int x=0; x<36000;x++){
			face1 = (int)(1+Math.random()*6);
			face2 = (int)(1+Math.random()*6);
			frequency[face1+face2]++;
		}
		System.out.printf("%3s%20s%18s%21s%19s\n", "Sum", "Expected Frequency", "Actual Frequency", "Expected Percentage", "Actual Percentage");
		for(int i = 2; i<frequency.length; i++){
			System.out.printf("%3d%20d%18d%20.2f%%%18.2f%%\n", (i),exFrequency[i],frequency[i],((double)exFrequency[i]/36000)*100000,((double)frequency[i]/36000)*100);
		}
	}
}
