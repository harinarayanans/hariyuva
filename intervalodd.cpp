#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            cout<<i;
            cout<<"\n";
        }
    }
    return 0;
}
