import java.math.BigInteger;
//import java.util.Scanner;

public class Try2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Scanner sc = new Scanner(System.in);
		BigInteger big = new BigInteger("1");
		int i;
		for(i = 1;i<101;i++)
    	{
    		//big = big.multiply(new BigInteger((long)i));
			//big = big.multiply(new BigInteger(Integer.toString(i,10)));
			big = big.multiply(BigInteger.valueOf((long)i));
    	}
		String str = big.toString();
		System.out.println(str);
		int n =  str.length();
		int s = 0;
		for(i=0;i<n;i++)
		{
			s = s + ((int)(str.charAt(i)-'0'));
		}
		System.out.println(s);
	}

}
