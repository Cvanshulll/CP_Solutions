#include <iostream>
using namespace std;
class parent
{
public:
int id_p;
};
class child: private parent
{
public:
int id_c;
};
int main()
{
child ob;
// ob.id_p=10;
ob.id_c=20;
// cout<<"Parent id="<<ob.id_p<<endl;
cout<<"Child id="<<ob.id_c<<endl;
return 0;
}