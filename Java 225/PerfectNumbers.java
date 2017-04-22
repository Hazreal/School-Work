
public class PerfectNumbers {
public static void main(String[] args){
System.out.println("The perfect numbers between 1 and 10000 are as follows:");
	for (int x = 1; x<=10000; x++){
		if (isPerfect(x)==true){
		System.out.printf("%4d: " + displayFactors(x)+"\n", x);
		}
	}
}
public static boolean isPerfect(int number){
boolean result = false;
int sum = 0;
for(int i =1; i<=number/2; i++){
	if(number%i==0){
		sum +=i;
	}
}
if(sum==number){
	result = true;
}
return result;
}
public static String displayFactors(int number) {
String result = "";
for (int test = 1; test <= number / 2; test++) {
if (number % test == 0) {
result += " " + test;
}
}
result = result.trim();
return result;
}
}

