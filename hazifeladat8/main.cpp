#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int szam;
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int i=0,a;
    while(in>>szam){
        bool van=true;
        a=szam;
        while(szam!=0){
            if(szam%2!=0){
                van=false;
                break;
            }
            szam=szam/10;
           }
           if(van==true){
             out << a << " ";
             i++;
           }

    }
    if(i==0){
        out << "nem létezik";
    }

    return 0;
}
