#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    
	    switch(n) {
	        case 2010 :
	        case 2015 :
	        case 2016 :
	        case 2017 :
	        case 2019 :
	            cout<<"HOSTED"<<endl;
	            break;
	            
	        default :
	            cout<<"NOT HOSTED"<<endl;
	    }
	}
	
	return 0;
}
