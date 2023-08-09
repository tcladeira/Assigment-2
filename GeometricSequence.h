
#pragma once

class GeometricSequence{
private:
    int a;
    int r;
    int n;
    int size;
    int* geoseq;

public:
GeometricSequence (int ac, int rc, int nc);
~GeometricSequence();
void getCharacteristic(int& aob, int& rob, int& nob, int* userSeq);
void getCharacteristic(int& aob, int& rob, int& nob);
int& element(int index);
int& element(int index) const;
void add(GeometricSequence& userObject, int userValue);
void sub(GeometricSequence& userObject, int userValue);
void mult(GeometricSequence& userObject, int userValue);
void read ();
void write();
};