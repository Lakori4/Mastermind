#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <string>
#include <array>

using namespace std;


// ESTRUCTURAS-----------------------------------------------------

struct jug {

    string nom;
    string sec;
    string guess;
    int lin = 1;
    bool winner;


};

//DECLARACIÓN DE FUNCIONES-----------------------------------

/* string nom1();
string nom2();
bool chkName (string j1, string j2);
void Reglas(string j1, string j2);
//string sec1 (string j1, string j2);
//string chkSec (string j1, string j2);
//string guess(string j2);
string chkGuess (string j2);
int score (string j2, string g, string c);
void end (string j1, string j2, int line1, int line2); */


#endif