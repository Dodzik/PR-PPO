#pragma once

#include "Delimited.h"

// Pomocnicza funkcja wypisująca odpowiednio sformatowany fragment
// tekstu wskazany przez obecny podział w obiekcie del.
//
// Aby zobaczyć białe znaki, fragment jest zamknięty w nawiasie
// trójkątnym: >text<
//
// Jeżeli długość fragmentu jest większa niż 20 znaków, 
// zamiast framgentu pojawi się tekst: ** za duzo do wypisania **
void help_me_print_this(const Delimited * del);

