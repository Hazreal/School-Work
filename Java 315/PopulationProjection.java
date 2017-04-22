
public class PopulationProjection {
	public static void main(String[] args){
		long currentpop= 312032486;
		long seconds=365*24*60*60;
		long births= seconds/7;
		long deaths=seconds/13;
		long immigrant= seconds/45;
		for (int x=1; x<6; x++){
			currentpop += (births+immigrant-deaths);
			System.out.println("Population in year " + x +" is " +currentpop);
		}
	}
}
