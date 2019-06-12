#include<iostream>
using namespace std;

int main() {
    int n;
    int a=0;int b=1;
    cin>>n;
    if (n==0)
    cout<<0;
    else
    {
        cout<<0<<endl;
        while(b<=n)
        { 
           cout<<b<<endl;
           b=a+b;
           a=b-a;
          
           
        }
    }
	return 0;
}
