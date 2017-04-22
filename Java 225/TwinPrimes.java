public class TwinPrimes {
public static void main(String[] args){
	int pi = 2;
	for(int x = 1; x <= 1000; x++){
		if (isPrime(x)){			
			if(x - pi == 2) {
				System.out.printf("(%d, %d)\n", pi, x);
			}
			pi = x;
		}
	}
}
public static boolean isPrime(int num) {
	if(num == 2){
		return true;
	}
	else {
		for(int i=2; i<= num /2; i++){
			if(num%i==0){
				return false;
			}
		}
	}
	return true;
}
}