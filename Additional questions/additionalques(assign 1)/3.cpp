#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    if(n==2) cout<<a[0]+a[1];
    else cout<<a[n-2]+a[n-1];
}
