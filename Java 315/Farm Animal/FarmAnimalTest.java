import java.util.ArrayList;

public class FarmAnimalTest {
		public static void main(String[] args){
			FarmAnimalBase animal;
			ArrayList<FarmAnimalBase> farmAnimals= new ArrayList<>();

			farmAnimals.add(animal = new Cat("Missy"));
			farmAnimals.add(animal = new Dog("Lassy"));
			farmAnimals.add(animal = new Cow("Nossy"));
		
			for(int x = 0; x < farmAnimals.size(); x++){
				System.out.println(farmAnimals.get(x).getName() + ": " + farmAnimals.get(x).talk());
			}
	}
}