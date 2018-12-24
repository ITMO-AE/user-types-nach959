#include <iostream>
#include <string>
#include <algorithm>
//using namespace std;

//class Person
//{
//  public:
//    Person(string f_name, string last_name, int unic_id):
//      first_name(f_name),
//      last_name(last_name),
//      unic_id(unic_id)
//    {
//        cout << "ctor Person" << endl;
//    }

//    ~Person()
//    {
//        cout << "dtor Person" << endl;
//    }

//    string getName()
//    {
//        return (first_name + " " + last_name);
//    }

//    int getUnicId()
//    {
//        return unic_id;
//    }

//private:
//    string first_name;
//    string last_name;
//    int unic_id;
//};

//class SuperPerson : public Person
//{
//public:
//    SuperPerson(string f_name, string l_name,
//                int unic_id, string s_name):
//        Person(f_name, l_name, unic_id),
//        super_name(s_name)
//    {
//        cout << "ctor SuperPerson" << endl;
//    }
//    ~SuperPerson()
//    {
//        cout << "dtor SuperPerson" << endl;
//    }

//  private:
//    string super_name;
//};

int main()
{
//    SuperPerson sp("fn", "ln", 9, "sn");
//    cout << sp.getName() << endl;

    int x = 0x12345678;
    char * start = (char*)(x);

    char * start = static_cast<char *>(static_cast<void *>(&x));
    char *stop = start + sizeof(x);

    cout << "befor " << x << endl;
    reverse(start, stop);
    cout << "after " << x << endl;
   // 78563412

}


//class Base
//{
//  public:
//    Base(int x, int y):
//        x(y + 5),
//        y(y)
//    {}

//    void printValue()
//    {
//        cout << x << y;
//    }
//private:
//    int x;
//    int y;
//};

//int main ()
//{
//    Base tmp(8, 10);
//    tmp.printValue();
//}
