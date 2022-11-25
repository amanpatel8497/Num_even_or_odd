#include<iostream>
using namespace std;
int main(){
   int a,b,lcm,r;
   cout<<"Enter two numbers"<<endl;
   cin>>a>>b;
   int c=a;
   while(true){
       lcm=a;
       r=a%b;
       if(r==0){
           break;
       }
       a=a*2;
   }
   cout<<"lcm is : "<<lcm<<endl;
    return 0;
}
