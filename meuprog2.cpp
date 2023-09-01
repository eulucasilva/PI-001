#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    /* 
    Exercício 4

    int a, b;
    cout << "Digite 2 numeros inteiros (seguidos da tecla ENTER) : " << endl;
    cin >> a >> b;


    cout << "Soma: " << a + b << endl;
    cout << "Subtracao: " << a - b << endl;
    cout << "Multiplicacao: " << a * b << endl;
    cout << "Divisao: " << a / b << endl;
    cout << "Resto: " << a % b << endl; 
    
    */

    // Exercício 6
    float a, b;
    cout << "Digite 2 numeros inteiros (seguidos da tecla ENTER) : " << endl;
    cin >> a >> b;


    cout.precision(1);
    cout << "Soma: " << fixed << a + b << endl;
    cout << "Subtracao: " << a - b << endl;
    cout << "Multiplicacao: " << a * b << endl;
    cout << "Divisao: " << a / b << endl;

    return 0;
}