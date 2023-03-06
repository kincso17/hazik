#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100], osszeg=0, sum=0;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
     for(int i=0; i<n; i++){
        cout << "b[" << i << "]=";
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            osszeg=osszeg+a[i];
        }
    }
    for(int i=0; i<n; i++ ){
        if(b[i]%2==1 && b[i]<osszeg){
            sum=sum+b[i];
        }
    }

    cout << sum << endl;
    return 0;
}
