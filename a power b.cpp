#include<iostream>
using namespace std;

int main() {
    long int a,b,x=1;
    cin>>a>>b;
    if(b==0)
    cout<<1;
    else
    {
        for(int i=0;i<b;i++)
        {
           x=x*a; 
        }
        cout<<x;
    }
	return 0;
}
