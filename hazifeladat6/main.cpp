#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, nr=0;
    float avg=0;
    cout << "n=";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            cin>>v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            if(i<j && v[i][j]>0){
                nr++;
                avg=avg+v[i][j];
            }
        }
    }
    avg=avg/nr;
    if(nr==0){
        cout<<"Nincs";
    }else{
        cout << avg;
    }
    return 0;
}
