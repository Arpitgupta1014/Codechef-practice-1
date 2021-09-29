#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,num;
	    cin>>n;
	    num=n;
	    int pali=0;
	    while(num>0){
	        pali=pali*10+num%10;
	        num/=10;
	    }
    if(pali==n){
        cout<<"wins"<<endl;
    }
	else{
	    cout<<"loses"<<endl;
	}
	    
	}
	return 0;
}
