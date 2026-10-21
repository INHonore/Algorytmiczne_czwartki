#include <bits/stdc++.h>
using namespace std;

struct Test{
    int x,y,c;
    public:

    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }
    int get_c(){
        return c;
    }
};

int main(){
    int l, c, x, y, g, position;
    bool jendastrona = true;
    cin >> l;
    vector<pair<int,int>> lvector;
    vector<Test> gvector;
    for (int i = 0;i<l;i++){
        cin >> x >> y;
        lvector.push_back({x,y});
    }
    cin >> g;
    for (int i = 0;i<g;i++){
        cin >> x >> y >> c;
        gvector.push_back({x,y,c});
    }
    position = (-lvector[0].first* gvector[0].get_x()) + lvector[0].second*gvector[0].get_y()-gvector[0].get_c();
    if(position>0){
        for (auto i : lvector){
            position = (-i.first* gvector[0].get_x()) + i.second*gvector[0].get_y()-gvector[0].get_c();
            if(position<0){
                jendastrona = false;
                break;
            }
        }
    } else if(position<0){
        for (auto i : lvector){
            position = (-i.first* gvector[0].get_x()) + i.second*gvector[0].get_y()-gvector[0].get_c();
            if(position>0){
                jendastrona = false;
                break;
            }
        }
    }
    if(jendastrona){
        cout << 0;
    }else{
        cout << 1;
    }
}