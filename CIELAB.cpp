#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
    int	difference=max(a,b)-min(a,b);
	if(difference%10==9){
	    difference--;
	}
	else{
	    difference++;
	}
	cout<<difference;
	return 0;
}
