#include "logic.h"
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

generateBirthDate::generateBirthDate(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
}

void generateBirthDate::generateDate()
{
    day = (rand()%30)+1;
    month = (rand()%13)+1;
    year = (rand()%30)+1970;
}

void generateBirthDate::showDate()
{
        cout << day << "." << month << "." << year << endl;
}



void generateBirthDate::generatePesel()
{
    for(int i=0; i<11; i++)
        PESEL[i]=9;
}

void generateBirthDate::showPesel()
{
    for(int i=0; i<11; i++)
        cout << PESEL[i];
    cout << endl;
}

void generateBirthDate::generateNewPesel()
{
    gender = 0; controlSum = 9;
    PESEL[0] = (year-1900)/10;
    PESEL[1] = (year%100)%10;
    if(month>=10)
    {
        PESEL[2] = 1;
        PESEL[3] = month-10;
    }else
    {
        PESEL[2] = 0;
        PESEL[3] = month;
    }
    if(day>=10)
    {
        PESEL[4] = ((day-day%10)%100)/10;
        PESEL[5] = day%10;
    }else
    {
        PESEL[4] = 0;
        PESEL[5] = day;
    }
    PESEL[6] = rand()%10;
    PESEL[7] = rand()%10;
    PESEL[8] = rand()%10;
    if(gender==0)
        PESEL[9] = 2*rand()%5;
    else
        PESEL[9] = 3*rand()%4;
    controlSum = 10-((PESEL[0]*1)%10+(PESEL[1]*3)%10+(PESEL[2]*7)%10+(PESEL[3]*9)%10+(PESEL[4]*1)%10+(PESEL[5]*3)%10+(PESEL[6]*7)%10+(PESEL[7]*9)%10+(PESEL[8]*1)%10+(PESEL[9]*3)%10)%10;
    PESEL[10] = controlSum;
}

generatePhoneNumber::generatePhoneNumber()
{
    phoneNumber[0] = 6;
    phoneNumber[1] = 6;
    phoneNumber[2] = 6;
    phoneNumber[3] = 6;
    phoneNumber[4] = 6;
    phoneNumber[5] = 6;
    phoneNumber[6] = 6;
    phoneNumber[7] = 6;
    phoneNumber[8] = 6;
    phoneNumber[9] = 6;
    phoneNumber[10] = 6;
}

void generatePhoneNumber::showPhoneNumber()
{
    for(int i=0; i<3; i++)
        cout << phoneNumber[i] << phoneNumber[i+1] << phoneNumber[i+2] << " ";
    cout << endl;
}

void generatePhoneNumber::generateNewPhoneNumber()
{
    int beggingOfPhoneNumber[4];
    int begginingLenght = 3-1;
    beggingOfPhoneNumber[0] = 7;
    beggingOfPhoneNumber[1] = 8;
    beggingOfPhoneNumber[2] = 8;

    for(int i=begginingLenght; i>=0; i--)
        phoneNumber[i] = beggingOfPhoneNumber[i];
    for(int i=begginingLenght; i<9; i++)
        phoneNumber[i] = rand()%10;
}

generatePersonalData::generatePersonalData(string n, string s, bool g)
{
    n = "Jan";
    s = "Kowalski";
    g = 0;
    name = n;
    surname = s;
    gender = g;
}

void generatePersonalData::showNameAndSurname()
{
    cout << name << " " << surname << endl;
}

void generatePersonalData::generateNameAndSurname()
{

}
