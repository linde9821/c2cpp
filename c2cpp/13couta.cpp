#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//const long int scientific = 0x800;
	//const long int fixed		= 0x1000;

	cout << setiosflags(ios_base::scientific) << 222.2222 << endl;
	cout << setiosflags(ios_base::fixed) << 222.2222;

	return 0;
}
