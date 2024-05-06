#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
    const int size = 5;
    int opcionMenu; 
    int phone_num;
    string cust_Name;
    string menuName[size];
    double menuprice[size];
    string foodCode[size];
    int quantity[size];
    int menuStock[size];

    cout << "\t\t\t\t\t" <<" ________________________________"  << endl;
    cout << "\t\t\t\t\t" <<"|                                |" << endl;
    cout << "\t\t\t\t\t" <<"|            LetITcook           |" << endl;
    cout << "\t\t\t\t\t" <<"|            * MENU *            |" << endl;
    cout << "\t\t\t\t\t" <<"|________________________________|" << endl << endl;
    cout <<"* --------------------------------------------------- BIENVENIDOS -------------------------------------------------------- *" << endl << endl;
    
    do {
        
        cout << "----- Welcome to the Food Delivering System -----" << endl << endl;
        cout << "Press '(1)' for the Restaurant Manager " << endl;
        cout << "Press '(2)' for the Customer " << endl;
        cout << "Press '(3)' to exit the program " << endl;
        
        opcionMenu = getch(); // Leer un carácter sin imprimirlo en la pantalla
        
        switch(opcionMenu) {
            case '1': // if the user input is 1 so the program will execute the menu functions
                cout << endl << endl;
                cout << "********** Bienvenido al menú de gerente **********" << endl << endl;
                break;
                
            case '2': // if the user input is  so the program will execute the order functions
                cout << endl << endl;
                cout << "********** Bienvenido al menú de cliente **********" << endl << endl;
                cout << "Por favor, ingrese su nombre: ";
                cin >> cust_Name;
                cout << "Por favor, ingrese su número de teléfono: ";
                cin >> phone_num;
                cout << endl;
                break;

            case '3': // if the user input is 0 so the program will exit the program
                cout << "\t Saliendo.....";
                break;
                
            default: // if the input is wrong the program will display error and execute the menu again
                cout << endl;
                cout << "--------- ERROR ----------" << endl;
                cout << "Por favor, ingrese su opción nuevamente"<< endl << endl;
                continue;
        }
    } while (opcionMenu != '1' && opcionMenu != '2' && opcionMenu != '3'); 

    return 0;
}


