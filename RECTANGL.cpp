#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b&&c==d || a==c&&b==d || a==d&&b==c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	return 0;
}
