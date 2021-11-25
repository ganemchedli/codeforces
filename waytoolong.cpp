#include<iostream>
#include<string.h>

using namespace std ;

int main()
{
   int n ; // nomrbre de mots 
   int strlenght;
   string mot ;
   cin >> n ; 

    
   for(int i=0;i<n;i++){

      cin >> mot ;
      strlenght= mot.length();
      if(strlenght>10){
          char deb = mot[0] ;
          char fin = mot[strlenght-1];
          cout <<deb<<strlenght-2<<fin<<endl;
         
      }
      else{
           cout << mot<<endl ;
      }
   }
   
   
   return 0 ;
}