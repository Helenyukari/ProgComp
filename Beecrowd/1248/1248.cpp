#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    cin.ignore();   
    
    while(n--){
        string dieta, cafe, almoco;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);
        
        int comida[26] = {0};
        for(char c: dieta) comida[c - 'A']++;
        for(char c: cafe) comida[c - 'A']--;
        for(char c: almoco) comida[c - 'A']--;

        bool cheat = false;

        for(int i = 0; i < 26; i++){
            if(comida[i] < 0){
                cheat = true;
                break;
            }
        }

        if(cheat){
            cout << "CHEATER" << endl;
        } else {
            for(int i = 0; i < 26; i++){
                if(comida[i] > 0){
                    cout << (char)(i + 'A');
                    
                }
            }
            cout << endl;
        }  
 
    }      


    return 0;
}