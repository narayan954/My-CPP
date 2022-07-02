#include <iostream>

using namespace std;

class Rationalnumber{
    int numerator;
    int denominator;
    
    public:
    Rationalnumber(int numerator=0,int denominator=1){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    friend Rationalnumber operator+(Rationalnumber r1,Rationalnumber r2);
    friend ostream & operator<<(ostream &out,Rationalnumber &r);
};

Rationalnumber operator+(Rationalnumber r1,Rationalnumber r2){
    Rationalnumber temp;
    temp.numerator = r1.numerator*r2.denominator+r2.numerator*r1.denominator;
    temp.denominator = r1.denominator*r2.denominator;
    return temp;
}

ostream & operator<<(ostream &out,Rationalnumber &r){
    cout<<r.numerator<<'/'<<r.denominator;
    return out;
}

int main()
{
    int n1,n2,d1,d2;
    cout<<"Enter the numerator and denominator of first rational number separated by a space: ";
    cin>>n1>>d1;
    cout<<"Enter the numerator and denominator of second rational number separated by a space: ";
    cin>>n2>>d2;
    Rationalnumber r1(n1,d1);
    Rationalnumber r2(n2,d2);
    cout<<"First number is: "<<r1<<endl;
    cout<<"Second number is: "<<r2<<endl;
    Rationalnumber r3 = r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is: "<<r3<<endl;
    return 0;
}
