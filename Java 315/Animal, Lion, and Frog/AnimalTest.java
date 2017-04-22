import java.util.ArrayList;

public class AnimalTest {
	public static void main(String[] args){
		
		ArrayList<Animal> animals = createList();
		for(int x = 0; x < animals.size(); x++){
			System.out.println((animals.get(x)).getWeight() + " lbs");
		}
		
		ArrayList<Lion> lions = createList();
		for(int x = 0; x < 3; x++){
			System.out.println((lions.get(x)).getName());
		}
	}

	private static ArrayList createList(){
		ArrayList<Animal> createList = new ArrayList<Animal>();
		createList.add(new Lion("Leo I", 530));
		createList.add(new Lion("Leo II", 560));
		createList.add(new Lion("Leo III", 590));
		createList.add(new Frog("Freddie", 7));
		return createList;
	}
}
