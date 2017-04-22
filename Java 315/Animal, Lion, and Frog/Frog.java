public class Frog extends Animal{
	private String name;
	
	public Frog(String name, double weight){
		super("Lithobates","Castesbeianus");
		this.name = name;
		setWeight(weight);
		setTail(false);
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public String getName(){
		return name;
	}
}