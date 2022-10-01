* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scn = new Scanner(System.in);
		int testCases = scn.nextInt();
		while(testCases-->0){
		    double A = scn.nextInt();
		    double B = scn.nextInt();
		    double C = scn.nextInt();
		    double average = (A+B)/2;
		    if(average > C){
		        System.out.println("YES");
		    }else{
		        System.out.println("NO");
		    }
		}
	}
}
