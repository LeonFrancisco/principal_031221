#include <stdio.h>
/*Variables globales*/
float estatura=0,edad=0,sexo=0,peso=0,IMC;
int dias_de_entrenamiento=0;
/*prototipos*/
int inicio_de_sesion();
void registro();
void ConsultarIMC();
void RegistroDeEntrenamineto();
void Comparador();
/*Funcion principal del programa*/
int main() {
	/*variable de los menus*/
	int opcion_menu_inicio=0,opcion_menu_principal=0,opcion_menu_secundario=0;
	/*Variable que define el inicio de sesion*/
	int sesion=0;
	/*Variable para regresar al menu*/
	int opcion_regresar_menu_inicio=0,controlar_opcion_de_salir=1;
	while(opcion_regresar_menu_inicio==0){
	printf("Programa hecho por Leon Francisco Austria Melo\n\nPara seleccionar una opcion inserte con el taclado el numero correspondiente\ny presione enter\n");
	printf("_____________________________________________________________________________________\n");
	printf("Menu\n1.-Registrarse\n2.-iniciar sesion\n3.-Ayuda\n");
	printf("_____________________________________________________________________________________\n");
	printf("Inserte la opcion: ");
	scanf("%i",&opcion_menu_inicio);
	switch(opcion_menu_inicio){
		case 1:
			printf("Parte en desarrollo\n");
			/*Opcion salir*/
			printf("_____________________________________________________________________________________\n");
			printf("                      1.- Regresar al menu      2.-Salir\n");
			printf("_____________________________________________________________________________________\n");
			scanf("%i",&controlar_opcion_de_salir);
			if(controlar_opcion_de_salir==2){
				opcion_regresar_menu_inicio=1;
			}
			else{
				opcion_regresar_menu_inicio=0;
			}
			/*Fin de la opcion salir*/
			break;
		case 2:
			sesion = inicio_de_sesion();
			printf("inicio de sesion: %i\n", sesion);
			opcion_regresar_menu_inicio=sesion;
			break;
		case 3:
			printf("Programa hecho por Leon Francisco Austria Melo\n");
			printf("_____________________________________________________________________________________\n");
			printf("                                        Ayuda\n");
			printf("_____________________________________________________________________________________\n");
			printf("\nHola bienvenido al software comparador de resultados de entrenamiento dedicado \na mejorar la predicción del usuario utilizando bases de datos y cálculos programados.\n");
			printf("Aqui podras registrar tus rutinas y tu progreso para llevar un mejor control y tener \nmejores resultados, te proporcionaremos estructuras de entrenamiento y resgistros para \ncompara tus resultados y ver que te esta funcionando.\n");
			printf("_____________________________________________________________________________________\n");
			printf("                                     Instructivo\n");
			printf("_____________________________________________________________________________________\n");
			printf("Si es su primera vez utilizando este sofware para ingresar a una cuenta publica la\ncual pueden entrar todos los que entren a este sofware desde su equipo es:\n Usuario:Admin\n Contraseña:Sesion\n");
			printf("Una vez iniciada sesion podras acceder a las funciones de este sofware pero antes de\nutilizarlas necesitas llenar un formulario <-------------IMPORTANTE\nuna vez llenado el formulario que se encuentra en la opcion \"1\" podra utilizar\n");
			printf("las demas opciones.\n");
			/*Opcion salir*/
			printf("_____________________________________________________________________________________\n");
			printf("                      1.- Regresar al menu      2.-Salir\n");
			printf("_____________________________________________________________________________________\n");
			scanf("%i",&controlar_opcion_de_salir);
			if(controlar_opcion_de_salir==2){
				opcion_regresar_menu_inicio=1;
			}
			else{
				opcion_regresar_menu_inicio=0;
			}
			/*Fin de la opcion salir*/
			break;
		default:
			printf("No exite esta opcion");
			/*Opcion salir*/
			printf("_____________________________________________________________________________________\n");
			printf("                      1.- Regresar al menu      2.-Salir\n");
			printf("_____________________________________________________________________________________\n");
			scanf("%i",&controlar_opcion_de_salir);
			if(controlar_opcion_de_salir==2){
				opcion_regresar_menu_inicio=1;
			}
			else{
				opcion_regresar_menu_inicio=0;
			}
			/*Fin de la opcion salir*/
	}
		}
/*Menu secundario*/
while(opcion_menu_secundario==0){
	if(sesion==1){
		printf("\n_____________________________________________________________________________________\n");
		printf("Bienvenido\nMenu principal\nElija una opción\n1.-Registro\n2.-Consultar IMC\n3.-Registro de entrenamineto\n4.-Comparador\n5.-Salir\n");
		scanf("%i",&opcion_menu_principal);
		switch(opcion_menu_principal){
			case 1:
/*Registro*/
				registro();
				break;
			case 2:
/*Consultar IMC*/
					ConsultarIMC();
				break;
			case 3:
/*Registro de entrenamineto*/
				RegistroDeEntrenamineto();
				break;
			case 4:
/*Comparador*/
				Comparador();
				break;
/*Salir*/
			case 5:
				opcion_menu_secundario=1;
				printf("\n_____________________________________________________________________________________\n");
				printf("                                    Saliendo...\n");
				printf("_____________________________________________________________________________________\n");
				break;
			default:
				printf("Esta opción no existe\n");
		}
	}
	else{
		if(controlar_opcion_de_salir==2){
		printf("\n_____________________________________________________________________________________\n");
		printf("                                    Saliendo...\n");
		printf("_____________________________________________________________________________________\n");
		}
		else{
		printf("\n_____________________________________________________________________________________\n");
		printf("                         Lo sentimos ocurrio un error :c\n");
		printf("_____________________________________________________________________________________\n");
	}
	}
	}
	return 0;
}
/*funciones secundarias*/
/*registrar o iniciar sesión*/
int inicio_de_sesion(){
	/*Variables principales*/
	char usuarioadmin[20]="Admin",usuario[20]=" ",contrasenaadmin[20]="Sesion",contrasena[20]=" ";
	printf("Inserte su usuario: ");
	scanf("%s",&usuario);
	printf("\nInserte su contraseña: ");
	scanf("%s",&contrasena);
	
	if(strcmp(usuarioadmin,usuario)==0){
		if(strcmp(contrasenaadmin,contrasena)==0){
			printf("\ningreso con exito\n");
			return 1;
		}
		else{
			printf("Contrasena incorrecta\n");
		}
	}
	else{
		printf("\nEl usuario no existe\n");
	}
	return 0;
}
void registro(){
	printf("_____________________________________________________________________________________\n");
	printf("                                     registro\n");
	printf("_____________________________________________________________________________________\n");
	printf("                            Inserte los siguientes datos\n");
	printf("Edad (en años): ");
	scanf("%f",&edad);
	printf("\nEdad: %f",edad);
	printf("\nPeso (en kg): ");
	scanf("%f",&peso);
	printf("\nPeso: %f",peso);
	printf("\nEstatura (en m): ");
	scanf("%f",&estatura);
	printf("\nEstatura: %f",estatura);
	printf("\nSexo (inserte 1 si es hombre o 2 si es mujer): ");
	scanf("%f",&sexo);
	printf("_____________________________________________________________________________________\n");
	printf("Selección de cuantos dias a la semana utilizara para entrenar\n");
	printf("1.-6 días a la semana (no resomendable para principiantes)\n2.-4 días a la semana\n3.-1 día a la semana\n");
	scanf("%i",&dias_de_entrenamiento);
	if(dias_de_entrenamiento==1){
		printf("_____________________________________________________________________________________\n");
		printf("Usted a elegido la opción de 6 días de entrenamiento a la semana\nModalidad seleccionada: Leg, Push and Pull");
	}
	else if(dias_de_entrenamiento==2){
		printf("_____________________________________________________________________________________\n");
		printf("Usted a elegido la opción de 4 días de entrenamiento a la semana\nModalidad seleccionada: Lower body and upper body");
	}
	else if(dias_de_entrenamiento==3){
		printf("_____________________________________________________________________________________\n");
		printf("Usted a elegido la opción de 1 día de entrenamiento a la semana\nModalidad seleccionada: Full body");
	}
	else{
		printf("_____________________________________________________________________________________\n");
		printf("No existe esta opción");
	}
}
void ConsultarIMC(){
	IMC=peso/(estatura*estatura);
	printf("_____________________________________________________________________________________\n");
	printf("                                   Consultar IMC\n");
	printf("_____________________________________________________________________________________\n");
	printf("su IMC es de: %f\n",IMC);
	if(edad<=18){
		if(IMC<18.5){
			printf("Esta bajo de peso\n");
			printf("En su caso se recomienda una etapa de volumen, si su deporte le exige un cuerpo \nesbelto podria subir al un IMC mayor a 18.5 para no afectar mucho su salud\n");
		}
		else if(IMC>=18.5 & IMC<=24.9){
			printf("Tiene un buen peso\n");
			printf("Se encuentra en los niveles normales de IMC, se recomienda mantenerse pero si \nsudeporte le exige un IMC mas elevado cuide su porcentaje de grasa corporal al llegar a la etapa de volumen\nSi su deporte le exige un IMC bajo se recomienda no bajar de 18.5\n");
		}
		else if(IMC>=25 & IMC<=29.9){
			printf("Tiene sobrepeso\n");
			printf("Su IMC indica que tiene sobrepeso sin embargo el IMC no tiene en cuenta el \nporcentaje de grasa corporal. Si su deporte le exige estar en estasconsiciones, solo cuide\nsu porcentaje de grasa corpora. Si estaen volumen tiene dos opciones de hacerlo ya sea un volumen limpio o sucio\n");
		}
		else{
			printf("Obesidad\n");
			printf("Esta condición es muy mala incluso para deportes que la exigen. Tenga cuidado \ny si tiene problemas de salud baje su IMC.\n");
		}
	}
	else{
		printf("su IMC corresponde a un menor de edad, esta parte aun se encuentra en desarrollo\n");
	}
}
void RegistroDeEntrenamineto(){
	printf("_____________________________________________________________________________________\n");
	printf("                             Registro de entrenamineto\n");
	printf("_____________________________________________________________________________________\n");
	printf("_____________________________________________________________________________________\n");
	printf("                                     En desarrollo\n");
	printf("_____________________________________________________________________________________\n");
}
void Comparador(){
	printf("_____________________________________________________________________________________\n");
	printf("                                     Comparador\n");
	printf("_____________________________________________________________________________________\n");
	printf("_____________________________________________________________________________________\n");
	printf("                                     En desarrollo\n");
	printf("_____________________________________________________________________________________\n");
}
