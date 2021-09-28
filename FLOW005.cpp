#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[]={100,50,10,5,2,1};
	    int n,q=0;
	    cin>>n;
	    while(n>0){
	        for(int i=0;i<=5;i++){
	            q=q+n/a[i];
	            n=n%a[i];
	        }
	    }
    cout<<q<<endl;
	}
	return 0;
}
