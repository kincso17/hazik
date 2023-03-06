#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int t[100];
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int i=0;
    while(in>>t[i]){
        i++;
    }
    bool van=true;
    for(int j=0; j<i; j++){
        int szamjegy;
        int ideiglenes=t[j];
        bool paros=true;
        while(ideiglenes>0){
            szamjegy=ideiglenes%10;
            ideiglenes=ideiglenes/10;
            if(szamjegy%2==1){
                paros=false;
            }

        }
        if(paros=true){
            out << t[j] <<" ";
            van=false;
        }
    }
    if(van=false){
        out<<"nem létezik";
    }
    return 0;
}
