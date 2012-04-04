#include <cstdio>     
#include <string>      
#include <climits>     
#include <cstdlib>     
#include <iostream> 
/*	Desarrollados	*/
#include "deteccion.h" // Deteccion de S.O
#include "ejecucion.h" // Ejecucion de comandos



using namespace std;



int main ()
{
        #ifdef WINDOWS
	    puts("Windows");
            system("pause");
        #endif

        #ifdef LINUX
        	puts("Linux");
	#endif
	
	#ifdef MAC
		puts("Mac");		
	#endif
	
        return 0;
}
