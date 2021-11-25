#include<iostream>

using namespace std; 

int main(){
    
    int n , m , a , nb ;

     
    
    cin >> n >> m >> a ;

    if(n<a&&m<a)
    {
        cout << 1 ;
    }

    if(n>a&&m<a || n<a && m>a)
    {
        if(n%a==0 && n/a!=0)
        {
            nb=(int)n/a;
            cout << nb ;
        }

        else if(m%a==0 && m/a!=0)
        {
            nb=(int) m/a ;
           cout << nb ;
        }
        else if (n%a!=0)
        {
            nb=(int)((n/a)+1);
            cout << nb ;
        }else if (m%a!=0)
         {
            nb=(int)((m/a)+1);
            cout << nb ;
        }
        
       
    }

   


    return 0;
    
}