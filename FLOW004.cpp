#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num,a;
	    cin>>num;
	    a=num%10;
	    while(num>9){
	        num/=10;
	    }
	
	    cout<<a+num<<endl;
	}
	return 0;
}
