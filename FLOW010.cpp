#include<iostream>
using namespace std;

int main(){
    int T;
    char str;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>str;
        if(str=='B' || str=='b'){
            cout<<"BattleShip"<<endl;
        }
        else if(str=='C' || str=='c'){
            cout<<"Cruiser"<<endl;
        }
        else if(str=='D' || str=='d'){
            cout<<"Destroyer"<<endl;
        }
        else if(str=='F' || str=='f'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
