#include <iostream> 
#include <sstream> 
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
     int a,b,c;
     cin>>a>>b>>c;
     
         if(a>b&&a>c)
         cout<<"a is largest"<<a;
         else if(b>a&&b>c) 
         cout<<"b is largest"<<b;
         else if(c>a&&c>b) 
         cout<<"c is largest"<<c;
      
     }
 
return 0;
    
}
