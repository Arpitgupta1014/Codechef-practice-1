#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if(n>=10){
	       cout<<"-1"<<endl; 
	    }
        else{
            cout<<"Thanks for helping Chef!"<<endl;
        }
	}
	return 0;
}
