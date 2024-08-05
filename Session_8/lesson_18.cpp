#include<bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Một phân số đơn vị nếu tử số của phân số đó là 1
Test
5/6 = 1/x + ps (ps: là 1 phân số khác chưa biết)
vì để ít hạng tử nhất nên 1/x <= 5/6 => x >= 6/5 ~ 1.2 thì ta lấy 2
5/6 = 1/2 + ps => ps = 1/3
Nếu ps chưa là phân số đơn vị thì ta tiếp tục lập
*/

inline ll GCD(ll a, ll b){ while(b){ ll t = a % b; a = b; b = t; } return a; }
inline ll LCM(ll a, ll b){ return a / GCD(a,b) * b; }

struct PS{
    ll ts, ms;

    void RutGon(){
        ll uc = GCD(this->ts, this->ms);
        this->ts /= uc;
        this->ms /= uc;
    }

    PS operator - (PS other){
        ll msm = this->ms * other.ms;
        ll tsm = this->ts * other.ms - other.ts * this->ms;
        PS psm{tsm, msm};
        psm.RutGon();
        return psm;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    PS ps; cin >> ps.ts >> ps.ms;
    while(ps.ts){
        ll r = ceil(ps.ms / (double)ps.ts);
        PS psdv{1,r};
        ps = ps - psdv;
        cout << 1 << '/' << r;
        if(ps.ts) cout << " + ";
    }
    return 0;
}