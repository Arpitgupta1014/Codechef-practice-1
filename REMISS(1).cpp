#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    int min=0;
	    if(a>b){
	        min=a;
	    }
        else{
            min=b;
        }
    cout<<min<<" "<<a+b<<endl;
	}
	return 0;
}
