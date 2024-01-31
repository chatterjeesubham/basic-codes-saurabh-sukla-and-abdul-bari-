#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	int D,L,R;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>D>>L>>R;
	    if(D<L)
	        cout<<"Too Early"<<endl;
	    else if(L<=D&&D<=R)
	        cout<<"Take second dose now"<<endl;
	    else if(D>R)
	        cout<<"Too Late"<<endl;
	}

}
