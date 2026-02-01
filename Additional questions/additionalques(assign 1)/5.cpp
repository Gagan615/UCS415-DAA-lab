#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,h,w;
        cin>>n>>h>>w;

        long long side = (h>w)?h:w;

        while(true){
            long long fit = (side/h) * (side/w);
            if(fit >= n){
                cout<<side<<"\n";
                break;
            }
            side++;
        }
    }
}
