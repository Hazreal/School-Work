public class OctagonTest{
	public static void main(String[] args) throws CloneNotSupportedException{
		Octagon octagon = new Octagon(5.0);
		Octagon octagon1 = octagon;
		Octagon octagon2 = (Octagon) octagon.clone();
		
		System.out.printf("Area of the octagon with side value %.2f is %.2f\n", octagon.getSide(), octagon.getArea());
		System.out.printf("Perimeter of the octagon with side value %.2f is %.2f\n", octagon.getSide(), octagon.getPerimeter());
		System.out.printf("Comparison result between an octagon and its clone: %d\n", octagon1.compareTo(octagon2));
	}
}