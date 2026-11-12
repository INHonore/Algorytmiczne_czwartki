#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
  int ile_razy;
  int klatki;
  int skok;
  int licznik;
  int klatka;
  int iterator;
  std::cin >> ile_razy;

  for (int i = 0; i < ile_razy; i++) {
    std::vector<int> otwarte;
    licznik = 0;
    std::cin >> klatki >> skok;
    iterator = 0;
    while (true) {
      iterator++;
      klatka = (skok*iterator) % klatki;
      if(std::find(otwarte.begin(), otwarte.end(), klatka) != otwarte.end()) {
        break;
      } else{
        otwarte.push_back(klatka);
        licznik++;
      }
      
    }
    std::cout << licznik << "\n";
  }

  return 0;
}