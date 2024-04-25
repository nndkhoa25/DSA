//Sample input
//5
//1 2 3 1 2
//3
//Output 
//4
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;

    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = j + 1; j < n; j++){
            if(a[i] + a[j] == k){
                ++dem;
            }
        }
    }
    cout << dem << endl;
    return 0;
}