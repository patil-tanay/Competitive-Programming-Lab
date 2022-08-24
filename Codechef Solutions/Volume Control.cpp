#include <iostream>
using namespace std;

int main() {
    	int n;
	cin>>n;
	while(n--)
	{
	    int a,b,c;
	    cin>>a>>b;
	    if(a>b)
	    {
	        c=a-b;
	        cout<<c<<"\n";
	    }
	    else
	    {
	        c=b-a;
	        cout<<c<<"\n";
	    }
	    
	    
	}
	return 0;
}
