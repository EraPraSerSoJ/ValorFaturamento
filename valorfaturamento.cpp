#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float fatSP = 67836.43;  
    float fatRJ = 36678.66;
    float fatMG= 29229.88; 
    float fatES = 27165.48; 
    float fatOut = 19849.53;

    float total = fatSP + fatRJ + fatMG + fatES+ fatOut;

    cout << "Percentual SP: " << (fatSP * 100 / total) << "%"<< endl;
    cout << "Percentual RJ: " << (fatRJ * 100 / total) << "%"<< endl;
    cout << "Percentual MG: " << (fatMG * 100 / total) << "%"<< endl;
    cout << "Percentual ES: " << (fatES * 100 / total) << "%"<< endl;
    cout << "Percentual Outros estados: " << (fatOut * 100 / total) << "%"<< endl;

}