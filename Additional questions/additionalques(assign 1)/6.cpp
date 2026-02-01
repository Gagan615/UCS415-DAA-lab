#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x[16]={9,2,15,5,1,12,7,4,16,3,10,6,14,8,11,13};
    int y[16]={3,6,3,1,2,4,2,7,5,3,5,4,6,6,1,2};

    double ans=1e9;

    for(int i=0;i<16;i++){
        for(int j=i+1;j<16;j++){
            double d = sqrt(
                (x[i]-x[j])*(x[i]-x[j]) +
                (y[i]-y[j])*(y[i]-y[j])
            );
            if(d<ans) ans=d;
        }
    }

    cout<<fixed<<setprecision(6)<<ans;
}
