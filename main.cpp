#include <iostream>
#include "help.cpp"
#include "divisao.cpp"

using namespace std;

int main()
{
	Help* help = new Help();
	
	switch(help->menu())
	{
		case 2:
			double divisor, dividendo;
			cout << "Digite o Divisor e posteriormente o dividendo" << endl;
			cin >> divisor >> dividendo;
			Divisao* div = new Divisao(divisor, dividendo);
			cout << "Resultado: " << div->getResult() << endl;
		break;
	}	
	return 0;

}
