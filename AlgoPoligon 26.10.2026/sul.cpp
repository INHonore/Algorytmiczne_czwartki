#include <bits/stdc++.h>
#include <iostream>

int main(){
    long long licznik1, licznik2, mianownik1, mianownik2;
    long long itr1, itr2, mianownik_temp1, mianownik_temp2;
    std::cin >> licznik1 >> mianownik1 >> licznik2 >> mianownik2;
    itr1 = 1;
    itr2 = 1;

    mianownik_temp1 = mianownik1;
    mianownik_temp2 = mianownik2;
    while(mianownik_temp1 != mianownik_temp2){
        if (mianownik_temp1<mianownik_temp2) {
            mianownik_temp1 += mianownik1;
            itr1++;
        }else {
            mianownik_temp2 += mianownik2;
            itr2++;
        }
    }

    licznik1 = licznik1*itr1;
    licznik2 = licznik2*itr2;
    long long sumalicz = licznik1+licznik2;
    if (sumalicz>mianownik_temp1 && sumalicz%mianownik_temp1==0) {
        sumalicz = sumalicz/mianownik_temp1;
        mianownik_temp1 = mianownik_temp1/mianownik_temp1;
    } else if (mianownik_temp1>sumalicz && mianownik_temp1%sumalicz ==0)
    {
        mianownik_temp1 = mianownik_temp1/sumalicz;
        sumalicz = sumalicz/sumalicz;
    }
    std::cout<< sumalicz << "/" << mianownik_temp1;
    return 0;
}