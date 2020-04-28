#include <iostream> 
#include <sstream> 
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     
         if((a==b&&c==d)||(a==c&&b==d)|| (b==c&&a==d))
         cout<<"YES"<<endl;
       
else
         cout<<"NO"<<endl;
    }     
return 0;
    
}
