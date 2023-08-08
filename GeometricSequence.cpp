// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence


//First thing is to include the libraries and do not forget the headline.
#include <iostream>
#include <cmath>
// #include "GeometricSequence.h"
using namespace std;


//Creating the class here
class GeometricSequence{
private:
    int a;
    int r;
    int n;
    int size;
    int* geoseq;

public:

GeometricSequence (int ac, int rc, int nc){
    a = ac;
    r = rc;
    n = nc;
    size = nc;
    geoseq = new int [size];
    for (int i = 0; i < n; ++i){
       geoseq[i] = ac * pow(rc,nc);

    }
}

void getCharacteristic(int& aob, int& rob, int& nob){
    aob = a;
    rob = r;
    nob = n;
}


};



int main() {
     
     int a;
     int b;
     int c;

    GeometricSequence seq (21, 2, 2);
    seq.getCharacteristic(a, b, c);
    cout << " Valeu one is:" << a;



    return 0;
} 