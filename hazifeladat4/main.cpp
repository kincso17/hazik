#include<iostream>
#include<string>

using namespace std;

string tukor(string str){
    int i, j;
    for(i=0, j=str.size()-1; i<j; i++, j--){
        char tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
	}
	return str;
}

int main()
{
    string str, eredmeny;
    cout << "szoveg:";
	getline(cin, str);
	int n=0;
	int found1=0;
	int found2;
	bool van=false;
	for(int i=0; i<str.size(); i++){
        if(str[i]==' ' || i==str.size()-1){
            if(i==str.size()-1){
                found2=i;
            }else{
                found2=i-1;
            }
            int n=found2-found1+1;
            if(n%2==1){
                string s;
                s=str.substr(found1,n);
                eredmeny=eredmeny+tukor(s)+' ';
                van=true;
            }else{
                string st;
                st=str.substr(found1, n);
                eredmeny=eredmeny+st+' ';
            }
            found1=found2+2;
        }

	}
	if(van){
        cout<<eredmeny;
	}else{
         cout << "nu exista" ;
    }


    return 0;
}
