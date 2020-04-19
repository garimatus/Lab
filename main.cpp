#include <iostream>
#define MAX 100

using namespace std;

class Termino{
    private:
        float coef;
        int exp;
    public:
        void set_coef(float);
        void set_exp(int);
        float get_coef();
        int get_exp();
        Termino(){}
};

typedef Termino polinomio[MAX];

void Termino::set_coef(float num){
    coef = num;
}

void Termino::set_exp(int num){
    exp = num;
}

int Termino::get_exp(){
    return exp;
}

float Termino::get_coef(){
    return coef;
}

void llenarPolinomio(polinomio funcion,int n){
    int i;
    float a;
    for(i=0;i<n+1;i++){
        Termino funcion[i];
        cout << "Coeficiente de grado "<<i<<" : ";
        cin >> a;
        funcion[i].set_coef(a);
        funcion[i].set_exp(i);
    }
}

void derivarPolinomio(polinomio funcion,int n){
    int i;
    for(i=0;i<n;i++){
        funcion[i].set_coef(funcion[i].get_coef()*funcion[i].get_exp());
        funcion[i].set_exp(funcion[i].get_exp()-1);
    }
}

int main(){
    int n;
    polinomio funcion;
    cout<< "Grado : ";
    cin >> n;
    llenarPolinomio(funcion,n);
    derivarPolinomio(funcion,n);
    return 0;
}
