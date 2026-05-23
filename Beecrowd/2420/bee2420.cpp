#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    int soma1 = 0;
    int soma2 = 0;
    vector<int> lista(n);
    for(int i = 0; i < n; i++){
        cin >> lista[i];
        soma1 += lista[i];
    }
    for(int i = n-1; i > 0; i--){
        soma1 -= lista[i];
        soma2 += lista[i];
        
        if(soma1 == soma2){
            cout << i << endl;
            break;
        }
    }


    return 0;
}