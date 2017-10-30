//Saber la edad promedio de los graduados de la licenciatura en Fisica
//Edgar Castro
//30 Octubre 2017
#include <iostream>
using namespace std;
int main()
{
    int edad[14];
    int sum=0;
    for (int i=0; i<14; i++) {
        cout << "¿a que edad terminaste la carrera?" << endl;
        cin >> edad[i];
        sum=sum+edad[i];
    }
    for(int j=0; j<14; j++){
        cout << edad[j] << " , ";
    }    
    cout<< "la edad promedio de graduacion en la licenciatura en Fisica es: "<<sum/14 <<endl;
    return 0;
}



