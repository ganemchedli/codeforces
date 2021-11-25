#include<iostream>
 
using namespace std ;
 
int main()
{
   int n ;

   do{
   cin>>n;
   }while(n<0 || n>100);
   
   if(n%2==0 && n!=2){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
   
   return 0 ;
}