package problems;

import java.math.BigInteger;
//import java.util.Scanner;
import java.io.*;

public class P16 {

	public static void main(String args[]) throws IOException
	{
		BigInteger b = new BigInteger("1");
		BigInteger a =  new BigInteger("2");
		int i;
		for(i=0;i<1000;i++)
		{
			b=b.multiply(a);			
		}
		String str = b.toString();
		System.out.println(str);
		int n = str.length();
		int sum = 0;
		for(i=0;i<n;i++)
		{
			sum = sum + (str.charAt(i)-'0');
		}
		System.out.println(sum);
	}
	
}
