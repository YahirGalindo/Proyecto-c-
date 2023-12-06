#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
char inicio = 'x';
int magia = 4;
int arma = 0;
char tecla;
int eleccion;
char final;
int pregunta = 0;
    cout<<"Bienvenido \nEres un usuario de la magia, sin embargo como novato debes pasar la prueba que definirá si eres apto"<<endl;
    do{cout<<"Presiona un x para iniciar"; 
    cin>>tecla;
    
    }while(inicio!=tecla);
    cout<<"Te encuentras en la cámara principal del templo de la luz frente a ti se encuentras un bastón que sirve como catalizador de tu energia que te servirá para manifestar tu magia"<<endl;
    cout<<"Para comenzar la prueba debes salir de la cámara principal que harás"<<endl;
    cout<<"Para interactuar deberas presionar la tecla correspondiente a la accion que desea realizar esto desplegara el siguiente ecenario, la opcion 0 siempre es la salida haci que elige con la cabeza"<<endl;
    cout<<"1. Tomar el bastón"<<endl;
    cout<<"2. Rebuscar en las paredes"<<endl;
    cout<<"3. Gritar"<<endl;
    cout<<"4. Esperar"<<endl;
    cout<<"0. Liberarse"<<endl;
    cout<<magia<<" de magia"<<endl;//marca
    cin>>eleccion;
    switch(eleccion){
        case 1:
        cout<<"Al tomar el bastón sientes como el fuerte dolor que experimentabas va aliviándose poco a poco simultáneamente el bastón comienza a emanar una estela de luz que ilumina un segmento de la puerta mostrándote la salida"<<endl;
        break;
        case 2:
        cout<<"Comienzas a  tocar las paredes con tus manos pasando tu tacto por toda la superficie hasta que de repente logras atravesar una especie de agujero invisible"<<endl;
        break;
        case 3:
        cout<<"Entras en pánico por estar encerrado y comienzas a gritar por ayuda hasta que te agotas por lo que terminas liberando toda la energía que contenías dentro y te desmayas"<<endl;
        break;
        case 4:
        cout<<"Decides sentarte a esperar a que algo suceda, esperas por un largo tiempo hasta que tu energía se drena de tu cuerpo y te desmayas"<<endl;
        break;
        case 0:
        cout<<"Decides rendirte liberando toda tu energía y te desmayas"<<endl;
        break;
        default:cout<<"opcion inexistente"<<endl;
        break;
        
        
        
        

    }
    
  
    return 0;}