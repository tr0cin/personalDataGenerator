#ifndef LOGIC_H
#define LOGIC_H
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

using namespace std;

class databaseRecord
{
public:
    showRecord();
};

class generateBirthDate : public databaseRecord
{
public:
    short day, month, year;
    short gender, controlSum;
    int randomNumber;
    int PESEL[11];
    void generateDate();
    void showDate();
    void generatePesel();
    void generateNewPesel();
    void showPesel();
    generateBirthDate(int d, int m, int y);
};

class generatePhoneNumber : public databaseRecord
{
public:
    short begginingOfPhoneNumber;
    int phoneNumber[9];
    void showPhoneNumber();
    void generateNewPhoneNumber();
    generatePhoneNumber();
};

class generatePersonalData : public databaseRecord
{
public:
    string name, surname;
    bool gender; //0 - mezczyzna, 1 - kobieta
    void generateNameAndSurname();
    void showNameAndSurname();
    generatePersonalData(string,string,bool);
};


#endif // LOGIC_H
