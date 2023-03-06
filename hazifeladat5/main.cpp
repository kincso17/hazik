#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100], n, nrf=0, nra=0;
    float avgf=0, avga=0;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            in>>v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            if(i<j && v[i][j]>0){
                nrf++;
                avgf=avgf+v[i][j];
            }
            if(i>j && v[i][j]>0){
                nra++;
                avga=avga+v[i][j];
            }
        }
    }
    avgf=avgf/nrf;
    avga=avga/nra;
    out << avgf-avga;

    return 0;
}
