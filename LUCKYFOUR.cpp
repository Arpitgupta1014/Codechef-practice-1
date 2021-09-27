#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    int s=0;
	   while(num!=0){ 
	       int n=num%10;
	    if(n==4){
	        s=s+1;}
	  num/=10;
	  }
	
	cout<<s<<endl;  
	}
	return 0;
}
