#include <iostream>

using namespace std;

class Help
{
private:
	void messenge()
	{
		cout<<"1 - Soma\n2 - Divisão\n3 - Subtração\n4 - Multiplicação" << endl;
	};

	bool validInputMenu(unsigned int value)
	{
		return value < 5;
	};
public:
	unsigned int menu()
	{
		unsigned int input;
		do
		{
			messenge();
			cin >> input;
		}while(not validInputMenu(input));
		return input;
	};
};
