#include<iostream>
#include <stdio.h>
/** Maly przyklad programu
 *
 *  autor Maciej Gebala
 */

/*
  ZWYKŁY KOMENTARZ
*/

/**
 * ... DOC1 ...
 */

/*!
 * ... DOC2 ...
 */

///
/// ... DOC3 ...
///

//!
//!... DOC4 ...
//!

/********************************************//**
 *  ... DOC5
 ***********************************************/

 /////////////////////////////////////////////////
 /// ... DOC6 ...
 /////////////////////////////////////////////////

// /*
using namespace std;
// */

int main()
{
  /// Komentarz dokumentacyjny \
  ciag dalszy jednolinijkowego komentarza
  int i = 5;
  // Komentarz jednolinijkowy\
  i jego ciÄ…g dalszy\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
  i dalszy */
  cout << "Jakis program" << endl; // ;
  // A tutaj taki komentarz \
  cout << "Poczatek komentarza /*" << endl; // ala
  cout << "Koniec komentarza */ "<< endl; // kot
  cout << "Komentarz /* ala */" << endl;
  cout << "Komentarz // kot " << endl;
  cout << "Zabawa \" // ala i kot " << endl;
  cout << "Pulapka \" \
           // ma \
           /* ma */ \
           " << endl;
 cout << /*Proba*/"Zabawa \" // ala i kot " << endl;
 printf("Zabawa \" // ala i kot ");
}
