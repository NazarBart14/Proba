#include <string.h>
#include <iostream>


using namespace std;


class Passport
{
public:
    Passport() { cout << ">Name: Nazar<" << endl; cout << ">Surname: Bartoshuk<" << endl; cout << ">Date of birth: 06.02.2007<" << endl; cout << ">Doc No: 006583659<" << endl;}
    ~Passport(){}
    
};

class ForeignPassport : public Passport
{
public:
    ForeignPassport() { cout << ">Wiza: 078694759<" << endl; cout << ">Nomer pasporty: FC85678<" << endl;}
    ~ForeignPassport() {}
};
ForeignPassport* th = new ForeignPassport();

int main()
{

    class Passport {}; // Базовий клас

    class  ForeignPassport : public Passport {}; // Public-успадкування

}
