#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <locale.h>
#include <cctype>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
#include "logic.h"

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_CTYPE, "Polish");

    generateBirthDate date1(1,1,1);
    date1.generateDate();
    date1.showDate();
    date1.generateNewPesel();
    date1.showPesel();

    generatePhoneNumber number1;
    number1.generateNewPhoneNumber();
    number1.showPhoneNumber();

    generatePersonalData person1("Jan", "Kowalski", 1);
    person1.showNameAndSurname();

    return 0;
}
