#include<iostream>
#include<fstream>

using namespace std;

class Shopping{
    private:
    int pcode;
    string pname;
    float price;
    float discount;

    public:
    void menu();
    void add();
    void edit();
    void remove();
    void recipt();
    void list();
    void buyer();
    void administrator();

};

void Shopping :: menu(){
    
}