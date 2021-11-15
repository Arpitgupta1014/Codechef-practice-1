#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n<=50){
	    cout<<"100";
	}
	else if(n>50&&n<=100){
	    cout<<"50";
	}
	else{
	    cout<<"0";
	}
	return 0;
}