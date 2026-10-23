#include <bits/stdc++.h>
using namespace std;

int main(){
    long long wynik = 1ll;
    int zakres_papryczek;
    cin >> zakres_papryczek;
    int ilosc_papryczek[zakres_papryczek+1];
    for (int i = 0;i<zakres_papryczek+1;i++){
        cin >> ilosc_papryczek[i];
    }
    for(int i = 0;i<zakres_papryczek+1;i++){
        wynik += pow(2,i) * ilosc_papryczek[i]; 
    }
    cout << wynik;

    return 0;
}