
public class PyramidPattern {
	public static void main(String[] args){
		for(int r=0; r<=7; r++){
			for(int y=1; y<=8-r; y++){
				System.out.printf("%4s"," ");
			}
			for(int z=0; z<=r; z++){
				System.out.printf("%4d", (int)Math.pow(2,z));
			}
			for(int w=r-1; w>=0; w--){
				System.out.printf("%4d", (int)Math.pow(2,w));
			}
			System.out.println();
		}	
	}
}