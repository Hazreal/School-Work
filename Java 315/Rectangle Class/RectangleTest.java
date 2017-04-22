public class RectangleTest {
	public static void main(String[] args){
		Rectangle myRectangle = new Rectangle(4.0, 40.0);
		System.out.println("Before the change:");
		System.out.println();
		System.out.printf("The rectangle's width is %.2f and its height is %.2f.\n",myRectangle.getWidth(), myRectangle.getHeight());
		System.out.printf("Its area is %.2f and its perimeter is %.2f.\n",myRectangle.getArea(),myRectangle.getPerimeter());
		System.out.println();
		myRectangle.setWidth(3.5);
		myRectangle.setHeight(35.9);
		System.out.println("After the change:");
		System.out.println();
		System.out.printf("The rectangle's width is %.2f and its height is %.2f.\n",myRectangle.getWidth(), myRectangle.getHeight());
		System.out.printf("Its area is %.2f and its perimeter is %.2f.\n",myRectangle.getArea(),myRectangle.getPerimeter());
	}
}
