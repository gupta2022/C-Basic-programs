#include<iostream>
 using namespace std;
 int main(){

    int x,y,z;
    cin>>x>>y>>z;
    //to find the greates of the three given nos.
    if(x>y && x>z)
    {
    cout<<x<<" is greatest"<<endl;
    }   
    else 
    if(y>x && y>z){
    cout<<y<<" is greatest"<<endl;
    }
    else
    {
      cout<<z<<" is greatest"<<endl;
    }
return 0;
}
