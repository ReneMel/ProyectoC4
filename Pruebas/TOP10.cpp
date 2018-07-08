#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <fstream>
	
using namespace std;
using namespace cv;


#define espacio 10
#define tam 50
#define filas 9
#define columnas 8
//butones 
#define filasB 1
#define columnasB 8
#define tamB 20

string J1nombre,J2nombre,J1alias,J2alias;
char temp;
int m=1, dat=4;
void x0(int, int, int);
int tablero[8][8];
Scalar negro(0, 0, 0);
Scalar blanco(255, 255, 255);
Scalar verde (0, 255, 0);
Scalar rojo (0,0,255);
Scalar azul (255,0,26);
bool bandera = false;
bool endgame = false;
void check();
void DibujarJuego();
void datos();

void Top10();
void Menu();
bool turn = false; 
int alto = tam*columnas + espacio * 8.5;
int ancho = tam *filas + espacio -2 ;
Mat ventana(alto, ancho, CV_8UC3, negro);
Mat Ins(400,400, CV_8UC3, negro);
Mat Top(400,400, CV_8UC3, negro);



//NUEVAS VARIABLES
int temp1;
string tempN;
string tempA;
int j;

//

struct Jugador
{
	string name[200];
	string aka[200];
	int win[200];
}player;

void llenarname(){


	for (int i =0; i<200;i++){
		if ((player.name[i]==J1nombre && player.aka[i]==J1alias) or (player.name[i]==J2nombre && player.aka==J2alias))
			break;

		else if (player.name[i].length()==0){
			player.name[i]=J1nombre;
			player.aka[i]=J1alias;
			break;
		}
		else 
			break;
		cout<< "Palabra es : "<<player.name[i]<<endl<<i<<endl;
	}}

	


void ordenTop(){
	/*int a[4]={4,1,7,2};
	int n=4;
	int i,j,aux;
	void main(){
	clrscr();
	for(i=1;i<n;i++)
	{
		j=i;
		aux=a;
	while(j>0 && aux<a[j-1])
	{
		a[j]=a[j-1];
		j--;
	}
		a[j]=aux;
	}
	for(i=0;i<4;i++)
	{
		printf("%d",a);
	}	
		getch();
	} */

	for (int i=1; i<201;i++){
		j=i;
		temp1=player.win[i];
		TempA=player.aka[i];
		tempN=player.aka[i];

		while(j>0 && temp1<a[j-1]){
			player.name[j]=player.name[j-1];
			player.win[j]=player.win[j-1];
			player.aka[j]=player.aka[j-1];
			j--;
		}
		player.win[j]=temp1;
		player.name[j]=tempN;
		player.aka[j]=tempA;
	}
}



//CODIGO DE AQUÍ EN ADELANTE ES ACERCA DEL JUEGO CONECT4 
void llenar(){
    /*for(int a =0;a < 8; a++){        //llenar con 0 ambos arreglos 
        for(int b = 0; b<8; b++)  
            tablero[a][b] = 0;}*/
	for (int i =0; i<200; i++){
		player.win[i]=0;
		//player.name= 0;
		//player.aka= 0;
	}              
    }

int main(int argc, char const *argv[])
{
	llenar();
	cout<<"nombre jugador"<<endl;
	cin >>J1alias;

	cout<<"nombre jugador"<<endl;
	cin >>J1nombre;

	cout<<"nombre jugador"<<endl;
	cin >>J2alias;

	cout<<"nombre jugador"<<endl;
	cin >>J2nombre;

	llenarname();


	return 0;
}