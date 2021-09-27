#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int b[t];
    for(int i=0;i<t;i++){
        cin>>b[i];
    }
    sort(b,b+t);
    for(int i=0;i<t;i++){
        cout<<b[i]<<endl;
    }
	return 0;
}
