#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat [3] [3] , count = 1 , somma = 0 , singolo ;
	cout << "Il numero singolo = " ;
	cin >> singolo ;
	
	for ( int x = 0 ; x < 3 ; x ++ )
	{
		for ( int y = 0 ; y < 3 ; y ++ )
		{
			cout << "Numero " << count << " = " ;
			cin >> mat [ x ] [ y ] ;
			count ++ ;
			for ( mat [x] [y] ; mat [x] [y] > 0 ; mat [x] [y] / 10 )
	{
		if ( mat [x] [y] % 10 == singolo )
		somma ++ ;
	}
		}
	}

	
	
	cout << "Ci sono " << somma << " " << singolo ;
	
	return 0;
}
