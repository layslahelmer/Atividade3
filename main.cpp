# Atividade3

#include <iostream>
#include <locale>
#include "tCircuito.cpp"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    tCircuito cir;
    cout << "Este progarma calcula a ressitência equivalente em série, em paralelo e a corrente total do circuito considerando como entradas duas resistências R1 e R2 e a tensão da fonte V1" << endl;
    cout << "Digite o valor da resistência R1: ";
    cin >> cir.R1;
    cout << "Digite o valor da resistência R2: ";
    cin >> cir.R2;
    cout << "Digite a tensão V1 da fonte: ";
    cin >> cir.V1;
    double rs = cir.soma_rs(cir.R1, cir.R2);
    double rp = cir.soma_rp(cir.R1, cir.R2);
    double is = cir.corrente(cir.V1, rs);
    double ip = cir.corrente(cir.V1, rp);
    double pots = cir.potencia(cir.V1, is);
    double potp = cir.potencia(cir.V1, ip);
    cout << endl << endl << "A resistência em série equivalente do circuito é: " << rs << endl;
    cout << "A resistência em paralelo equivalente do circuito é: " << rp << endl;
    cout << "A corrente total do circuito com resistencias em séria é: " << is << endl;
    cout << "A corrente total do circuito com resistencias em paralelo é: " << ip << endl;
    cout << "A potência total da fonte associada às resistências em série é: " << pots << endl;
    cout << "A potência total da fonte associada às resistências em paralelo é: " << potp << endl;
    return 0;
}
