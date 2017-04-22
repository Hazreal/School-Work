public class CodebotTest {
	public static void main(String[] args) throws Exception{
		CodeBot myCodeBot = new CodeBot();
		myCodeBot.compile();
		CodeBot myCodeBot2 = new CodeBot("Hello2", "public class { public static void main(String[] args) { System.out.println(\"hello, world\");}}" );
		myCodeBot2.compile();
	}
}
