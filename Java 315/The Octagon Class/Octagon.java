public class Octagon extends GeometricObject implements Cloneable, Comparable<GeometricObject>{

	private double side;
	
	public Octagon(){
	}
	
	public Octagon(double side){
		this.side = side;
	}
	
	public Octagon(double side, String color, boolean filled){
		this.side = side;
		setColor(color);
		setFilled(filled);
	}
	
	public double getSide(){
		return side;
	}
	
	public void setSide(double side){
		this.side = side;
	}
	
	public double getArea(){
		return ((2 + 4 / Math.sqrt(2)) * side * side);
	}
	
	public double getPerimeter(){
		return (side * 8);	}

	@Override
	public int compareTo(GeometricObject o) {
		if (getArea() > o.getArea())
			return 1;
		else if (getArea() < o.getArea())
			return -1;
		else
			return 0;
		
	}
	
	@Override
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
	
}