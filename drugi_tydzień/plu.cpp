#include <bits/stdc++.h>             
                                     
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int ilo_budynkow;
    int max;
    std::cin >> ilo_budynkow;
    std::vector<int> budynki;
    int temp;
    for(int i = 0;i<ilo_budynkow;i++){
        std::cin >> temp;
        budynki.push_back(temp);
    }
    int maxL = (ilo_budynkow-1)/2;
 
    int wynik = 0;
    int centrum_plusa = 0;
    bool spr;

    for (int i = 0;i<maxL;i++){ // iterowanie od góry do dołu i =1
        for (int j = 0;j<ilo_budynkow-(2*(maxL-i));j++){ // iterowanie schodków piramidy
            centrum_plusa = maxL-i+j; // 2 ,3 ,4
            if(budynki[centrum_plusa]>(maxL-i)*2){ // 3
                //std::cout << i;
                for(int k = centrum_plusa+i-maxL;k<=centrum_plusa-i+maxL;k++){ //  1 do 5
                    if(budynki[k] >= maxL-i+1){
                        spr = true;
                        //std::cout << "k " << k << "i " << i << std::endl;
                    } else 
                    {
                        spr = false;
                        break;
                    }
                }
                if(spr){
                    wynik = maxL-i;
                    break;
                }
            
            } 
        }
        if(spr){
                    break;
                }
    }
    std::cout << wynik;
    return 0;
}