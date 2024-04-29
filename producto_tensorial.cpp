#include <iostream>
#include <cmath>
#include <vector>
#include <Windows.h>
using namespace std;

vector<vector<double>> productotensorial(vector<double> X, vector<double> Y); //Se define la funcion que se utilizara

int main()
{
    SetConsoleOutputCP(65001);

    cout<<"Producto tensorial X ⊗ Y \n"; // Se imprimen notas importantes
    cout<<"\nNotas:\n·Solo se aceptan nùmeros enteros\n"
    "·Al ingresar los elementos puede hacerlo mediante espacios o simplemente aprentando la tecla 'enter' entre uno y otro\n"
    "·Si ingresa una mayor cantidad de elementos que los que tendra su primer vector, estos pasaran al siguiente y los que sobren se omitiran\n"
    "·Los caràcteres especiales y letras pueden ocasionar errores\n"
    "·La matriz entregada puede correrse entre una fila y otra por la cantidad de cifras de sus componentes\n"<<endl;
    int n;
    vector<double> Y;   //Aqui se definen vectores vacios
    vector<double> X;
    cout<<"Ingrese la cantidad de elementos que tendran sus vectores: ";
    cin>>n;
    cout<<endl;
    //Se ingresan los elementos de los vectores pedidos
    cout<<"Ingrese los elementos de su primer vector: ";

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin>>x;
        X.push_back(x);
    }
    cout<<endl;
    cout<<"Ingrese los elementos de su segundo vector: ";
    for (int j = 1; j <= n; ++j)
    {
        int y;
        cin>>y;
        Y.push_back(y);
    }
    cout<<endl;

    //Se muestran los vectores ingresados
    cout<<"Su primer vector columna X es: { ";
    for (int i = 0; i < n; ++i)
    {
    cout<<X[i]<<"  ";
    }
    cout<<"}"<<endl;
    cout<<"Su segundo vector fila Y es:   { ";
    for (int j = 0; j < n; ++j)
    {
    cout<<Y[j]<<"  ";
    }
    cout<<"}"<<endl;

    productotensorial(X,Y); //Se llama a la funcion con los vectores X e Y

    //Se imprime en pantalla la matriz resultante con las componentes separadas por espacios
    //para identificar cada columna de manera independiente y evitar confusiones al visualizarla.
    cout<<"\nEl producto tensorial X ⊗ Y entrega la siguiente matriz :\n "<<endl;
    vector<vector<double>> matriz = productotensorial(X,Y);
    for (int i = 0; i < n; ++i)
    {
    cout<<"[";
        for (int j = 0; j < n; ++j)
        {
            cout<<"  "<<matriz[i][j];
        }
    cout<<"  ]"<<"\n";
    }

    return 0;
}

vector<vector<double>> productotensorial(vector<double> X,vector<double> Y)
{
    vector<vector<double>> Z(X.size(), vector<double>(Y.size())); //Se define el vector de vectores al que retornarà el producto tensorial
                                                                 //donde el lado izquierdo es el largo y lado derecho el ancho.
    //Se define la multiplicacion de las componentes
    for (int i = 0; i < X.size(); ++i)
    {
        for (int j = 0; j < Y.size(); ++j)
        {
            Z[i][j] =X[i]*Y[j]; //mediante el uso del un for anidado se multiplican las componentes de cada vector
        }
    }
    return Z;
}
