#include <bits/stdc++.h>
using namespace std;

int main(){
    string mapa;
    long long G = 0ll;
    long long D = 0ll;
    long long P = 0ll;
    long long L = 0ll;
    long long osx;
    long long osy;
    char znaky = 'D';
    char zankx = 'L';
    cin >> mapa;

    for(char i : mapa){
        switch(i){
            case 'G':
                G += 1ll;
                break;
            case 'D':
                D += 1ll;
                break;
            case 'P':
                P += 1ll;
                break;
            case 'L':
                L += 1ll;
                break;
        }
    }
    osx = P - L;
    osy = G - D;
    if(osx < 0){
        zankx = 'P';
    }
    if(osy < 0){
        znaky = 'G';
    }
    mapa = "";
        for (int i = 0;i<abs(osx);i++){
            mapa += zankx;
    }
        for (int i = 0;i<abs(osy);i++){
            mapa += znaky;
    }
    cout << mapa;
    return 0; 
}