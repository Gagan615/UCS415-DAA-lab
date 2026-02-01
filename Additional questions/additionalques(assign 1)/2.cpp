#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++) cin>>a[i];

    int ans=1;

    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<n;j++){
            if(i!=j && abs(a[i]-a[j])<=10){
                cnt++;
            }
        }
        if(cnt>ans) ans=cnt;
    }

    cout<<ans;
}
