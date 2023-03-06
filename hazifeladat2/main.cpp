#include <iostream>

using namespace std;

int main()
{
    int n, k, v[1000], nr=0;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        int cnt=0;
        int ideiglenes=v[i];
        while(ideiglenes>0){
            ideiglenes=ideiglenes/10;
            cnt=cnt+1;

        }
        if(cnt>k){
            nr++;
        }
    }

    cout << nr << endl;

    return 0;
}
