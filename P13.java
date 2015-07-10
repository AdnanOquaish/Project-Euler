/*******************************************************************************
 * ************************     ADNAN OQUAISH     ******************************
 * *************************     BITS Pilani     *******************************
 *******************************************************************************/

 // Answer : 5537376230

package problems;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;

public class P13 {

	public static void main(String args[]) throws IOException
	{
		String[] numbers = new String[50];
		BigInteger b1 = new BigInteger("0");
		BigInteger b2;
		int i;
		try {
			//BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			Scanner sc = new Scanner(System.in);
			for(i=0;i<50;i++)
			{
				numbers[i] = sc.nextLine();
			}
			for(i=0;i<50;i++)
			{
				b2 = new BigInteger(numbers[i]);
				b1 = b1.add(b2);
			}
			System.out.println(b1);
			sc.close();
			//			for(i=0;i<2;i++)
//			{
//				System.out.println(numbers[i]);
//			}
		}
		catch(Exception ex){
			ex.printStackTrace();
		}
	}
}
