/*
Coyright 2020. Eduardo Programador
www.eduardoprogramador.com
consultoria@eduardoprogramador.com
*/

#include <iostream>

using namespace std;

class Imc
{

private:
	double weight;
	double height;

public:
	double get_imc();
	Imc(double informedWeight, double informedHeight)
	{
		weight = informedWeight;
		height = informedHeight;
	}

	~Imc()
	{
		cout << "Imc Demo" << " Saindo... Ate logo!!!" << "\n";
	}
	
};

double Imc::get_imc()
{

	return weight / (height*= height);	

}

int main()
{
	cout << "################## Calculadora IMC ###################" << endl;
	cout << "############## www.eduardoprogramador.com ############";
	cout << "\n\n";

	double iW, iH;

	cout << "Sua altura?\n";
	cin >> iH;

	cout << "Seu peso?\n";
	cin >> iW;

	Imc imcInformation(iW,iH);
	double res = imcInformation.get_imc();

	cout << "\n\nO seu IMC e: " << res << endl;

	int r;
	cout << "Até logo!";
	cin >> r;

	return 0;

}



