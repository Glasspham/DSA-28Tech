#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Sinh xâu nhị phân
#if 0
int a[1000], final = 1, n;
void ktao(){
    for(int i = 1; i <= n; ++i)
        a[i] = 0;
}

void sinh(){
    int i = n;
    while(i >= 1 and a[i] == 1) a[i--] = 0;
    if(i == 0) final = 0; // Thường hợp cuối cùng
    else a[i] = 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ktao();
    while(final){
        for(int i = 1; i <= n; ++i)
            cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}
#endif

// Sinh tổ hợp chập K của N phần tử
#if 0
int a[1000], k, n, final = 1;
void ktao(){
    for(int i = 1; i <= k; ++i)
        a[i] = i;
}

void sinh(){
    int i = k;
    while(i >= 1 and a[i] == n - k + i) // n - k + i là số lớn nhất mà vị trí đó được nhận
        --i;
    if(i == 0) final = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j)
            a[j] = a[j - 1] + 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    ktao();
    while(final){
        for(int i = 1; i <= k; ++i)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    return 0;
}
#endif

// Sinh hoán vị
#if 0
int a[10001], n, final = 1;
void ktao(){
    #if 0 // Next_permutation
    for(int i = 1; i <= n; ++i)
        a[i] = i;
    #endif

    #if 1 // Prev_permutation
    for(int i = 1; i <= n; ++i)
        a[i] = n - i + 1;
    #endif
}

void sinh(){
    int i = n - 1;
    // Đi tìm vị trí nào có a[i] < a[i + 1]
    while(i >= 1 and a[i] > a[i + 1]) --i;
    if(i == 0) final = 0;
    else{
        // Đi từ cuối mảng để tìm phần tử > a[i] mà là nhỏ nhất trong dãy từ (i + 1, n)
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        // Lật cái mảng từ (i + 1, n) theo chiều tăng dần để được hoán vị nhỏ nhất
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #if 0
    cin >> n;
    ktao();
    while(final){
        for(int i = 1; i <= n; ++i)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    #endif

    #if 0 // Next_permutation sinh hoán vị kế tiếp
    string str = "123456789";
    cout << next_permutation(str.begin(), str.end()) << endl; // Return boolean và sinh ra hoán vị kế tiếp
    cout << str;

    cin >> n;
    ktao();
    do{
        for(int i = 1; i <= n; ++i)
            cout << a[i] << ' ';
        cout << endl;
    }while (next_permutation(a + 1, a + n + 1));
    #endif

    #if 1 // Prev_permutation sinh hoán vị ngược
    cin >> n; 
    ktao();
    do{
        for(int i = 1; i <= n; ++i)
            cout << a[i] << ' ';
        cout << endl;
    }while (prev_permutation(a + 1, a + n + 1));
    #endif
    return 0;
}
#endif

// Sinh phân hoạch
#if 0 
int a[1001], n, final = 1, cnt;
void ktao(){
    cnt = 1;
    a[1] = n;
}

void sinh(){
    // Bắt đầu từ số hàng cuối cùng và tìm số hạng đầu tiên != 1
    int i = cnt;
    while(i >= 1 and a[i] == 1) --i;
    if(i == 0) final = 0;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i]; // d gấp mấy lần a[i]
        int r = d % a[i];
        for(int j = 1; j <= q; ++j){
            a[i + j] = a[i];
            ++cnt;
        }
        if(r != 0){
            ++cnt;
            a[cnt] = r; 
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ktao();
    while(final){
        for(int i = 1; i <= cnt; ++i)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    return 0;
}
#endif

// Sinh tập con bằng toán tử bit
#if 0 
int main(){
    int a[] = {1, 2, 3};
    int n = 3;
    for(int i = 0; i < (1 << 3); i++){
        for(int j = 0; j < 3; j++)
            if(i & (1 << j))
                cout << a[j] << ' ';    
        cout << endl;
    }
}
#endif