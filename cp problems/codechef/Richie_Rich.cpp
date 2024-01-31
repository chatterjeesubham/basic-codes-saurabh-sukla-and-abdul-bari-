#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	int A,B,X;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>A;
	    cin>>B;
	    cin>>X;
	    int t=B-A;
	    t=int(t/X);
	    cout<<t<<endl;
	    
	}
}
