#ifndef OPENFILES_H
#define OPENFILES_H
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

class openFiles
{
public:
    string names[1000];
    string maleSurnames[1000];
    string femaleSurnames[1000];
    int begginingOfPhoneNumber[1000];
    openFiles(string[],string[],string[],int[]);
    ~openFiles();
    void readTxtFiles();
};

#endif // OPENFILES_H
