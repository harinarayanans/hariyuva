#include <iostream>
int main() 
{
	int a;
	int temp;
	cin>>a;
	while(a!=0)
	{
	    temp=a%10;
	    cout<<temp;
	    a=a/10;
	}
	return 0;
}
