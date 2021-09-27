#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,num=0;
        cin>>n;
        while(n!=0){
            k=n%10;
             num=num*10+k;
             n/=10;
        }
    cout<<num<<endl;  
    }
	return 0;
}
