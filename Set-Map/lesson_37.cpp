#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, vector<pair<ll, int>>> mpv;
    string name; int tc, diem;
    while(cin >> name >> tc >> diem)
        mpv[name].push_back({tc * diem, tc});
    for(auto it = mpv.rbegin(); it != mpv.rend(); ++it) {
        cout << it->first << " : ";
        double diem = 0;
        int sotc = 0;
        for(auto v : it->second) {
            diem += v.first;
            sotc += v.second;
        }
        cout << fixed << setprecision(2) << diem / sotc << endl;
    }
    return 0;
}