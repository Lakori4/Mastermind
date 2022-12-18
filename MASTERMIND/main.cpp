#include <iostream>
#include <string>
#include <array>

#include "Mastermind.h"
#include "Mastermind.cpp"

using namespace std;

int main () {

    jug j1;
    jug j2;
    bool repetir = true;

    do {
    
        do {

            j1.nom = nom1();
            j2.nom = nom2();

        } while (!chkName (j1.nom, j2.nom));
        
        Reglas(j1.nom, j2.nom);

        j1.sec = chkSec(j1.nom, j2.nom);
        j2.lin = score(j2.nom, j2.guess, j1.sec);

        j2.sec = chkSec(j2.nom, j1.nom);
        j1.lin = score(j1.nom, j1.guess, j2.sec);

        end(j1.nom, j2.nom, j1.lin, j2.lin);


        cout << "¿Quereis volver a jugar?\n\nNo = 0\nSí = 1\n";
        cin >> repetir;
        system("cls");
    } while (repetir);

    cout << "\n\n¡Gracias por jugar!.\n\nPULSA ENTER PARA SALIR";    
    cin.ignore();

return 0;
  
    
}