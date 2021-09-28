#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int min=0;
	    for(int i=12;i>0;i--){
	        int currentpower=pow(2,i-1);
	       while(p>=currentpower){
	            p=p-currentpower;
	            min++;
	        }
	    }
	    
	cout<<min<<endl;
	    
	}
	return 0;
}
