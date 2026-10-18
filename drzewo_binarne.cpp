#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long pietrox,pietroy;
    int steps;
    steps = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        steps = 0;

        pietrox = floor(log(x)/log(2.0));
        pietroy = floor(log(y)/log(2.0));

        if (pietrox > pietroy){
            steps = pietrox - pietroy;
            for(long long j = 0;(pietrox - pietroy > j);j++){
                x = x/2;
            }
        }
        else if (pietroy > pietrox){
            steps = pietroy - pietrox;
            for(long long j = 0;(pietroy - pietrox > j);j++){
                y = y/2;
            }
        }
        while(x!=y){
            x = x/2;
            y = y/2;
            steps += 2;
        }
        cout << steps << endl;
}   
}