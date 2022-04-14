#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;

int main()
{
	srand(std::chrono::duration_cast<std::chrono::milliseconds>(     //prin aceste secvente de cod
	std::chrono::system_clock::now().time_since_epoch()).count());	//se genereaza
	int numar_ghicit = rand()%1000 - 500;                          //un numar la intamplare
	
	//cout << numar_ghicit << endl; //putem folosi aceasta instructiune ulterior pentru a vedea daca functioneaza corespunzator codul de mai jos
	
	int incercari = 1; //am ales valoarea 1 deoarece daca numarul va fi ghicit din prima sa se afiseze ca a fost ghicit dintr-o incercare, nu 0.
	while ( incercari < 11) //am ales valoarea 11 pentru a fi 10 incercari
	{
	
	double numar_jucator; //am ales double deoarece daca scriem un numar compus din mai mult de 10 cifre cu int nu este suficient
	cout << " *****************************Guessing Game!************************************\n";
	cout << " *                                                                             *\n";
	cout << " * Introduceti un numar intreg intre -500 si 500 pentru a ghici numarul secret:*\n ";
	cout << "*******************************************************************************\n";
	cout <<"Incercarea numarul : " <<incercari<<"\n";
	cout <<"\n";
	cin >> numar_jucator;

    if (numar_jucator > 500 ||  numar_jucator < -500 ) 					//daca numarul tastat nu respecta intervalu dat se va afisa
		cout << "Numarul introdus nu respecta intervalul cerut!\n" << endl;  //acest mesaj
    else if (numar_jucator < numar_ghicit)        
		cout << "Numarul ales este prea mic\n" << endl;
	else if (numar_jucator > numar_ghicit)
		cout << "Numarul ales este prea mare\n" << endl;
		
	else if (numar_jucator == numar_ghicit)
	{
		cout << "Felicitari! Ai ghicit numarul secret din "<< incercari <<" incercari si ai castigat jocul!!!\n" << endl;
			break; //aceasta instructiune ne permite sa oprim rularea programului odata ce s-a ghicit numarul
	}

	incercari++; //aceasta instructiune repetitiva incrementeaza pana cand conditia din paranteza while e falsa
	
	if (incercari == 11) 									//cand numarul de incercari ajunge la 10 
		cout << "Numarul de incercari este epuizat!" << endl;	//se va afisa acest mesaj si se termina codul
		
		system("pause"); 
        system("cls");  
	}
	
	
	return 0;
}
