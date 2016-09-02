import java.util.*;
import java.lang.*;
import java.io.*;
class vowel
{
	public static void main (String[] args) throws java.lang.Exception
	{
	  int flag=0;
		char arr[]={'a','e','i','o','u'};
		Scanner in=new Scanner(System.in);
		char a=in.next().charAt(0);
		for(int i=0;i<=4;i++)
		{
		    if(a==arr[i])
		    {
		        flag=1;
		    }
		 }
		 if(flag==0)
		 {
		     System.out.println("consonant");
		 }
		 else
		 {
		     System.out.println("vowel");
		 }
		 
	}
}
