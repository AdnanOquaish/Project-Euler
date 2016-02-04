import java.math.BigInteger;
//import java.util.Scanner;

public class Try3 {
	//Answer: 4782
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Scanner sc = new Scanner(System.in);
		BigInteger a = new BigInteger("1");
		BigInteger b = new BigInteger("1");
		BigInteger c = new BigInteger("1");
		int i = 2,x = 1;
		String str;
		while(x != 0)
    	{
			c = b;
			b = b.add(a);
			a = c;
			i++;
			str = b.toString();
			if(str.length() >= 1000)
				break;
    	}
		System.out.println(i);
		/*STRING STR = BIG.TOSTRING();
		SYSTEM.OUT.PRINTLN(STR);
		INT N =  STR.LENGTH();
		INT S = 0;
		FOR(I=0;I<N;I++)
		{
			S = S + ((INT)(STR.CHARAT(I)-'0'));
		}
		SYSTEM.OUT.PRINTLN(S);
*/
		}

}
