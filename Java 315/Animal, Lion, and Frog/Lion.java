public class Lion extends Animal{
	private String name;
	
	public Lion(String name, double weight){
		super("Panthra","Leo");
		this.name = name;
		setWeight(weight);
		setTail(true);
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public String getName(){
		return name;
	}
}