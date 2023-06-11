#include <iostream>

int main(){
	int opcion;
	
	do {
		
		std::cout << "MENU\n";
		std::cout<<" "<< std::endl;
		std::cout<<"Seleciona una Opcion\n";
		std::cout<<" "<< std::endl;
		std::cout << "1. Opción 1: Triangulo\n";
		std::cout << "2. Opción 2: Cuadrado\n";
		std::cout << "3. Circulo\n";
		std::cout << "4. Salir\n"; 
		std::cout<<" "<< std::endl;
		std::cout << "Ingrese una opción: ";
		std::cout<<" "<< std::endl;		
		std::cin >> opcion;
		
		switch (opcion) {
		case 1:
			std::cout << "Seleccionaste la opción 1.\n";
			std::cout<<" "<< std::endl;
			std::cout<<"     *     "<<"\n";
			std::cout<<"    * *    "<<"\n";
			std::cout<<"   *   *   "<<"\n";
			std::cout<<"  * * * *  "<<"\n";
			std::cout<<" "<< std::endl;
			break;
		case 2:
			std::cout << "Seleccionaste la opción 2.\n";
			std::cout<<" "<< std::endl;
			std::cout<<"* * * * * *"<<"\n";
			std::cout<<"*         *"<<"\n";
			std::cout<<"*         *"<<"\n";
			std::cout<<"*         *"<<"\n";
			std::cout<<"*         *"<<"\n";
			std::cout<<"* * * * * *"<<"\n";
			std::cout<<" "<< std::endl;
			break;
		case 3:
			std::cout << "Seleccionaste la opción 3.\n";
			std::cout << "          ***        " << "\n";
			std::cout << "     **        **    " << "\n";
			std::cout << "  *                *" << "\n";
			std::cout << "*                    *" << "\n";
			std::cout << "*                    *" << "\n";
			std::cout << "*                    *" << "\n";
			std::cout << "  *                *" << "\n";
			std::cout << "     **        **    " << "\n";
			std::cout << "          ***        " << "\n";
			break;
		case 0:
			std::cout << "Saliendo del Programa.\n";
			break;
		default:
			std::cout << "Opción inválida. Inténtalo de nuevo.\n";
			break;
		}
	} while (opcion != 0);
		
	return 0;
}
