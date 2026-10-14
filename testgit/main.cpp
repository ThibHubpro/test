
#include <iostream>

using namespace std;

/*int main()
{

		int i = 0;
		int* pi = &i;
		float f = 1.1;
		float* pf = &f;
		char c = 'a';
		char* pc = &c;

		int j = *pi;
		*pi = 5;

		cout << "adress : " << &i << endl;
		cout << "adress :" << &pi << endl;
		cout << "adress :" << &j << endl;
		cout << &f << endl;
		cout << "adress :" << &pf << endl;
		cout << &c << endl;
		cout << "adress :" << &pc << endl;



	return 0;
}*/


void diviser(int diviseur, int divident, int* Quotient, int* reste)
{


	*Quotient = diviseur / divident;
	*reste = diviseur % divident;


}

void Timerplaye(int time, int* minute,int* hours,int* seconde)
{
	 
	*minute = time / 60;
	*seconde = time % 60;
	*hours = *minute / 60;
	*minute = *minute % 60;

}

void Swap(int* px, int* py)
{
	int stockxy = *px;
	*px = *py;
	*py = stockxy;


}

int main()
{
//exo1
/*
	int reste;
	int Quotient = 0;

	int valueDividande = 10;
	int valueDiviseur = 3;

	diviser (valueDiviseur, valueDividande, &Quotient, &reste);

	cout << Quotient << endl;
	cout << reste;
	return 0;
*/
//exo2
/*
	int numS = 2561489;

	int minute;
	int hours;
	int second;

	Timerplaye(numS,&minute,&hours,&second);

	cout << hours << " hours " << minute << " minutes " << second << " second " << endl;

	return 0;
*/
//exo3
/*
	int x = 4;
	int y = 5;


	Swap(&x, &y);

	cout << x;
	cout << y;
	*/
}

