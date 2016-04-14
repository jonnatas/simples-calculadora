class Divisao
{
public:
	Divisao(double divisor, double dividendo)
	{
		if(dividendo)
		{
			result = divisor/dividendo;
		}
		else
		{
			result = 0;	
		}
	};
	
	double getResult()
	{
		return result;
	};
private: 
	double result;
};
