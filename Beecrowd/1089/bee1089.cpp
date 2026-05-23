#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;


    do{
        cin >> n;
        vector<int> notas(n);
        for(int i = 0; i < n; i++){
            cin >> notas[i];
        }

        int loops = 0;
        for(int i = 0; i < n; i++){
            
            int ant = notas[(i - 1 + n) % n];
            int prox = notas[(i + 1)% n];
            if (notas[i] > ant && notas[i] > prox){
                loops++;
            }
        }
        cout << loops << endl;

    }while(n != 0);


    return 0;
}