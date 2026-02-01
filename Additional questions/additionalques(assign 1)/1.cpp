#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[1000];

    for(int i=0;i<n;i++) cin>>a[i];

    int answer=0;

    for(int bit=30;bit>=0;bit--){
        int temp = answer | (1<<bit);
        int count=1;
        int current=0;

        for(int i=0;i<n;i++){
            if((current | a[i]) <= temp){
                current = current | a[i];
            }else{
                count++;
                current = a[i];
            }
        }

        if(count <= m) answer = temp;
    }

    cout<<answer;
}
