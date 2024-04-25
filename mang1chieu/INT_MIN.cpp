//IN độ chệnh lêch nhỏ nhat giua 2 phan tu trong mang
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;

    int res = INT_MAX; // So nguyen lon nhat8
    
    for(int i = 0; i < n; i++){
        for(int j = j + 1; j < n; j++){
                if(abs(a[i] - a[j]) < res){
                    res = abs(a[i] - a[j]);
                }
            }
        }
    std::cout << res << endl;
    return 0;
}