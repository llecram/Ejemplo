#ifndef ASPA_H_INCLUDED
#define ASPA_H_INCLUDED
#include<string>
using namespace std;
class car{
private:
    string license;
    int year;
public:
    string license;
    int year;
    car(const string&, const int );
    void setlicense(const string&);
    string getlicense()const;
    void setyear()const;
    int getyear()const;
    void print()const;
};

#endif // ASPA_H_INCLUDED
