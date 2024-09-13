#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    int value = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    while(value <= N * N){
        // Traverse from left to right
        for(int i = left; i <= right; ++i)
            matrix[top][i] = value++;
        top++;
        
        // Traverse from top to bottom
        for(int i = top; i <= bottom; ++i) 
            matrix[i][right] = value++;
        right--;
        
        // Traverse from right to left
        for(int i = right; i >= left; --i) 
            matrix[bottom][i] = value++;
        bottom--;
        
        // Traverse from bottom to top
        for(int i = bottom; i >= top; --i) 
            matrix[i][left] = value++;
        left++;
    }

    // Print the matrix
    for(int i = 0; i < N; ++i) {
        for(int num : matrix[i])
            cout << num << " ";
        cout << endl;
    }
    return 0;
}
