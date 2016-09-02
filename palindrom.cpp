#include <iostream>
int main()
{
    int a,rem=0,temp,sum=0;
    cin>>a;
    temp=a;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    if(temp==sum)
    {
        cout<<"the num is palindrome";
    }
    else
    {
        cout<<"the num is not palindrome";
    }
    return 0;
}
