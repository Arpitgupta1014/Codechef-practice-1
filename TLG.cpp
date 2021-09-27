#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int c=0,d=0,leadw=0,max=0;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    c+=a;
	    d+=b;
	    int lead=0;
	    if(c>d){
	        lead=c-d;
	        if(lead>max){
	            max=lead;
	        leadw=1;
	        }
	       
	    }
	    else{
	        lead=d-c;
	        if(lead>max){
	            max=lead;
	            leadw=2;
	        }
	    }
	    
	}
	cout<<leadw<<" "<<max<<endl;
	return 0;
}
