// postfix.cpp
// overloaded ++ operator in both prefix and postfix
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
unsigned int count;
//count
public:
Counter() : count(0)
//constructor no args
{ }
Counter(int c) : count(c)
//constructor, one arg
{ }
unsigned int get_count() const //return count
{ return count; }
//increment count (prefix)
//increment count, then return
//an unnamed temporary object
//initialized to this count
Counter operator ++ (int)
{
return Counter(count++);
} //increment count (postfix)
//return an unnamed temporary
//object initialized to this
//count, then increment count
};
////////////////////////////////////////////////////////////////

int main()
{
Counter c1, c2;
//c1=0, c2=0
cout << “\nc1=” << c1.get_count();
cout << “\nc2=” << c2.get_count(); //display
++c1;
c2 = ++c1; //c1=1
//c1=2, c2=2 (prefix)
cout << “\nc1=” << c1.get_count();
cout << “\nc2=” << c2.get_count(); //display
c2 = c1++; //c1=3, c2=2 (postfix)
cout << “\nc1=” << c1.get_count();
//display again
cout << “\nc2=” << c2.get_count() << endl;
return 0;
}