#include <bits/stdc++.h>

int main(){
    long long ilo_zimennych;
    std::cin >> ilo_zimennych;
    std::vector<char> znaki;
    std::string odp = "";
    for(long long i = 0;i<ilo_zimennych;i++){
        char temp;
        std::cin >> temp;
        znaki.push_back(temp);
    }
    for(long long i = 0; i <ilo_zimennych-1;i++){
        if (znaki[i]=='+'){
            odp += '(';
            odp += '-';
            while (znaki[i+1] == '+') {
                odp += '-';
                i++;
            }
            odp += ')';
        }else {
            odp += '-';
        }

    }
    std::cout<< odp;
    return 0;
}