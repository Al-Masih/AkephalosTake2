#include "AkephalosWorld.h"


int main() {

	//Cambialas que no sean como las del Roysin que despues Migdonio se da cuenta, ¿Que cambio?

	//Tienes que declarar esas variables
	float Masa = 0, p_x = 0, p_y = 0, v_x = 0, v_y = 0; //Estas variables ponle otro nombre y donde van tambien las cambias //O sea pones masa aqui like float masa = 0te copie, 

	// En el principio Creó Dios los cielos y la tierra.
	World w1;

	//Creamos un test subject y le damos los valores altamente valiosos en valor.
	Body b1;
	b1.setMass(1.5f);
	b1.setPos(Vec2(3.2f, 3.2f));
	b1.setVel(Vec2(1.1f, 1.1f));

	system("cls");
	//preguntando al usuario sus datos
	std::cout << "/n /n sea bienvenido al game engine Akephalos." << std::endl;
	std::cout << "/n /n porfavor, antes de seguir..." << std::endl << std::endl;
	std::cout << "/n /n ingrese la masa del objeto porfavor buen ciudadano." << std::endl;
	std::cin >> Masa; //Ejemplo en vez de poner "Mass" usas "masa" o algo asi y lo declaras arriba
	system("cls");
	std::cout << "ingrese la posicion en X" << std::endl;
	std::cin >> p_x;
	std::cout << "Ahora la posicion en Y" << std::endl; //Ponle std:: a todos los cout, cin y endl copiado, aparte de esto no faltaria mas nada?
	std::cin >> p_y;                               //Arregla lo que te dije y me avisas // Btw: Usa el "using namespace std;" y asi te ahorras el tener que escribir siempre "std::" te copie, copy that
	system("cls");
	std::cout << "/n /n ya casi acabamos, solo falta un poco mas." << std::endl;
	std::cout << "ingrese la velocidad en X" << std::endl;   //Voy pa telan pz, me avisas cualquier cosa dale caballero, muchas gracias buen ciudadano
	std::cin >> v_x;
	std::cout << "ahora ingrese la velocidad en Y" << std::endl;
	std::cin >> v_y;

	//se asigna a las siguientes funciones
	b1.setMass(Masa);
	b1.setPos(Vec2(p_x, p_y));
	b1.setVel(Vec2(v_x, v_y));


	//Metemos a Adán al mundo.
	w1.addBody(&b1);


	for (int i = 0; i < 10; i++) {
		w1.Step(1.0f);

		b1.DisplayInfo();
	}

	// Muestra el valor de producto cruz y producto punto en la consola.
/*
	Vec2 pos1; :) Listo

	pos1.Set(-5.0f,7.31f);
	pos1.Display();

	pos1 += Vec2(2.23f, 3.71f);
	pos1.Display(); */

	//Registra dentro del vector cuantos valores hay dentro del mismo.

/*
	std::vector<float> vec1;

	vec1.push_back(2.25f);

	std::cout << (int)vec1.size() << std::endl; */

}