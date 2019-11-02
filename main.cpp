#include <bits/stdc++.h>

using namespace std;

map <string, string> diccionario;

void buscarPalabra() {
    string palabraABuscar;
    while (getline(cin, palabraABuscar)) {
        if (diccionario.find(palabraABuscar) == diccionario.end()) {
            cout << "eh" << endl;
        } else {
            cout << diccionario[palabraABuscar] << endl;
        }
    }
}

int main() {
    
    string entrada;
    while (getline(cin, entrada), entrada != "") {
        stringstream separador(entrada);
        string palabraIngles, palabraExtranjera;
        separador >> palabraIngles >> palabraExtranjera;
        diccionario.insert({palabraExtranjera, palabraIngles});        
    }
    buscarPalabra();

    return 0;
}