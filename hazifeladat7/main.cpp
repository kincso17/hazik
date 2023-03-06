#include <iostream>

using namespace std;

int main()
{
    int n, fr;
    float sum=0;
    cout<< "n=";
    cin >> n;
    for(int j=1; j<n+1; j++){
        fr=1;
        for(int i=1; i< j+1; i++){
            fr=fr*i;
        }
        if(j%2==1){
            sum=sum+fr;
        }else{
            sum=sum-fr;
        }
    }
    cout << sum;

    return 0;
}
