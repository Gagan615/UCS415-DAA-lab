#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[1000];

    for(int i=0;i<n;i++) cin>>a[i];

    int ans=0;

    for(int i=0;i<n;i++){
        for(int l=0;l<=i;l++){
            int cnt=0;
            for(int r=l;r<n;r++){
                if(a[r]>a[i]) cnt++;
                if(cnt==k) ans+=a[i];
                if(cnt>k) break;
            }
        }
    }

    cout<<ans;
}
