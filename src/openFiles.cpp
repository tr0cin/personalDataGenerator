#include "openFiles.h"
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

openFiles::openFiles(names,maleSurnames,femaleSurnames,begginingOfPhoneNumber)
{
    ifstream streamNames;
    streamNames.open( "imiona.txt" );
    ifstream streamMaleSurnames;
    streamMaleSurnames.open( "nazwiskameskie.txt" );
    ifstream streamFemaleSurnames;
    streamFemaleSurnames.open( "nazwiskazenskie.txt" );
    ifstream streamBegginingOfPhoneNumber;
    streamBegginingOfPhoneNumber.open( "numery.txt" );
}

openFiles::~openFiles()
{
    streamNames.close();
    streamMaleSurnames.close();
    streamFemaleSurnames.close();
    streamBegginingOfPhoneNumber.close();
}

void readTxtFiles()
{

}
