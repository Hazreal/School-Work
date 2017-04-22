
import java.util.Scanner;

public class CentralCity {	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of cities: ");
		int cities = input.nextInt();
		double [][] coord= new double[cities][2];
		double [] total= new double[cities];
		System.out.print("Enter the coordinates of the cities: ");
		for(int x = 0; x<coord.length; x++){
			for(int y=0; y<coord[x].length; y++){
				coord[x][y]= input.nextDouble();
			}
		}
		
		double[] central = new double[coord.length];
		for (int x= 0; x<coord.length; x++){
			central[x]= totalDistance(coord, x);
		}
		
		int y =0;
		double x = central[0];
		for(int z=1; z<central.length; z++){
			if (x>central[z]){
				x = central[z];
				y = z;
			}
		}
		
		System.out.printf("The central city is at(%.2f, %.2f).\n", coord[y][0], coord[y][1]);
		System.out.printf("The total distance to all other cities is %.2f", central[y]);
		
	}
		
	public static double distance(double[] c1, double [] c2){
		double total = Math.sqrt(Math.pow((c2[0]-c1[0]),2)+Math.pow((c2[1]-c1[1]),2));
		return total;
	}
		
	public static double totalDistance(double [][] cities, int i){
		double td = 0;
		for(int x = 0; x<cities.length; x++){
			td += distance(cities[x], cities[i]);
		}
		return td;
	}
}

