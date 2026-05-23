#include<iostream>
using namespace std;


int main(){

    string lado;

    while(cin >> lado) {
        if(lado == "esquerda")
            cout << "ingles" << endl;
        if(lado == "direita")
            cout << "frances" << endl;
        if(lado == "nenhuma")
            cout << "portugues" << endl;
        if(lado == "as")
            cout << "caiu" << endl;
    }   


    return 0;
}