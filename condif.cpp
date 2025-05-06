#include<iostream>

using namespace std;

int main(){
    int hora;
    cout << "Escribe la hora: ";
    cin >> hora;

    if(hora >= 6 && hora < 12){
        cout << "Buenos días!" << endl;
    }else if(hora >= 12 && hora <= 18){
        cout << "Buenas tardes!" << endl;
    }else{
        cout << "Buenas noches!" << endl;
    }




    return 0;
}
