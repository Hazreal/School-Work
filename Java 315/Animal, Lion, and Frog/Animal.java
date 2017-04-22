public class Animal {
	private String genus;
	private String species;
	private double weight;
	private boolean tail;

	public Animal(String genus, String species){
		this.genus = genus;
		this.species = species;
	}
	
	public void setWeight(double weight){
		this.weight = weight;
	}
	
	public void setTail(boolean tail){
		this.tail = tail;
	}
	
	public double getWeight(){
		return weight;
	}
	
	public boolean getTail(){
		return tail;
	}
}