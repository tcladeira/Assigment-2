// Student: Thiago Ladeira - 001213566 - tc.ladeira@uleth.ca
// Assignment II - Geometric Sequence


//First thing is to include the libraries and do not forget the headline.
#include <iostream>
#include <cmath>
#include "GeometricSequence.h"
using namespace std;


//Creating the class here
class GeometricSequence{
private:
    int a;
    int r;
    int n;
    int size;
    int* geoseq = new int [size];

public:

GeometricSequence (int ac, int rc, int nc){
    for (int i = 0; i < n; ++i){
        a = ac;
        r = rc;
        n = nc;
    }
}

};



int main() {


    return 0;
} 