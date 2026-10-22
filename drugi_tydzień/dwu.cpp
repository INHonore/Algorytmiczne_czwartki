#include<bits/stdc++.h>
using namespace std;

int main(){
    long long bok_a;
    long long bok_b;
    vector<pair<long long, long long>> boki;
    long long kartki;
    long long wynik;
    cin >> kartki;
    for(long long i = 0;i< kartki;i += 1ll){
        cin >> bok_a >> bok_b;
        if(bok_a>bok_b){
            boki.push_back(make_pair(bok_a, bok_b));
        } else {
            boki.push_back(make_pair(bok_b, bok_a));
        }

    }
    for(const auto i : boki){
        wynik = 0ll;
        bok_a = i.first;
        bok_b = i.second;
        while(bok_b!=0ll){
            long long temp = bok_b;
            wynik += bok_a/bok_b;
            bok_b = bok_a%bok_b;
            bok_a = temp;
        }
        cout << wynik << endl;
    }
    
    return 0;
}