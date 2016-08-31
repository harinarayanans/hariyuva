import java.util.*;
import java.lang.*;
import java.io.*;

class fact
{
	public static void main (String[] args) throws java.lang.Exception
	{
int n,ans=1;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
ans=fact(n);
System.out.println(ans);
}
static int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}

}
