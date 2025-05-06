#include<iostream>

int main(){
    int hora;
    cout << "Escribe la hora: ";
    cin >> hora;

    if(hora <= 6 and && hora < 12){
        cout << "Buenos días!" endl;
    }else if(hora <= 12 and && hora <= 7){
        cout << "Buenas tardes!" endl;
    }else{
        cout << "Buenas noches!" endl;
    }




    return 0;
}
