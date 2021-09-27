#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[7],count1=0,count2=0;
	    for(int i=0;i<7;i++){
	        cin>>arr[i];
	  if(arr[i]==0){
        count1++;
    }
    else{
        count2++;
    }
    }
   
   if(count2>count1){
	     cout<<"YES"<<endl;
	 }
	 else{
	     cout<<"NO"<<endl;
	 }
	}
	 
	return 0;
}
