#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100];
    cout << "n=";
    cin >> n;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            v[i][j]=i*j;
            v[i][j]=v[i][j]%10;
        }
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
             cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
