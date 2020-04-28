#include <iostream> 
#include <sstream> 
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ostringstream str1;
        str1<<n;
        string s=str1.str();
        int len=s.length();
        int sum=0;
        char x1=s[0];
        char x2=s[len-1];
        int p=x1;
        int q=x2;
        p=p-48;q=q-48;
        sum=q+p;     
        cout<<sum<<endl; 
    }
 
return 0;
    
}
//OR 
#include <iostream> 
#include <sstream> 
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       string s;
	cin>>s;
	cout<<s[0]-'0'+s[s.length()-1]-'0'<<endl;
    }
 
return 0;
}
