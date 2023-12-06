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
            cout<<"Lograste salir de la cámara principal por lo que observas a tu alrededor para evaluar tus posibilidades te encuentras rodeado de un gran bosque y la lejos logras visualizar una choza vieja que harás"<<endl;
            cout<<"1. Ir directamente a la choza"<<endl;
            cout<<"2. Adentrarse en el bosque"<<endl;
            cout<<"3. Utilizar el bastón"<<endl;
            cout<<"0. Liberarse"<<endl;
            cout<<magia<<" de magia"<<endl;
            cin>>eleccion;
            switch(eleccion){
                case 1:
                cout<<"Decides ir hacia la choza al llegar logras ver que se encuentra en un estado deplorable entras a rebuscar y entre los escombros y encuentras una pequeña cajita que en su interior guardaba un fragmento del catalizador"<<endl;
                magia += 1;
                cout<<"Caminaste por un tiempo hasta un puente que atravesaba un rio de fuertes corrientes por lo que decides cruzar hasta que te intercepta un hombre misterioso que te prohíbe el paso que harás"<<endl;//rUTA TRANQUILA
                cout<<"1. Luchar"<<endl;
                cout<<"2. Dialogar"<<endl;
                cout<<"3. La 13:14"<<endl;
                cout<<"0. Rendirte"<<endl;
                cout<<magia<<" de magia"<<endl;
                cin>>eleccion;
                switch(eleccion){
                    case 1:
                    cout<<"Decides atacarlo pero este hombre parece ser un mago con experiencia por lo que te derrota fácilmente"<<endl;
                    break;
                    case 2:
                    cout<<"-Lo lamento pero no puedo dejar pasara a aquellos que no han demostrado su valía-"<<endl;
                    cout<<"-Sin embargo soy un hombre de segundas oportunidades entonces si quieres pasar tendrás que responder justamente lo que quiero escuchar-"<<endl;
                    cout<<"-Este envuelto en una situación muy apretada en la que te cuesta encontrar una solución sin embargo llegaste a este problema por culpa de tus propias acciones que harías-"<<endl;
                    cout<<"1. Pedir ayuda"<<endl;
                    cout<<"2. Dobalra esfuerzos"<<endl;
                    cout<<"3. No me sucederia"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 3;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += -1;
                        break;
                    }
                    cout<<"-Bien ahora supongamos que eres el líder de un pequeño pueblo a las lejanías y estas pasando por una dura sequia tu gente tiene hambre y sed, hay un pueblo vecino rebosante de recursos y una gran selva con los recursos que necesitas a la lejanía-"<<endl;
                    cout<<"Si pides ayuda te endeudaras con un pueblo muy superior a tu pequeña comunidad y si organizas viajes de recolección tus habitantes podrían no resistir que harías-"<<endl;
                    cout<<"1. Buscaria al pueblo vecino"<<endl;
                    cout<<"2. Me fijaría en la selva"<<endl;
                    cout<<"3. Robaria al pueblo vecino"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 1;
                        break;
                        case 2:
                        pregunta += 3;
                        break;
                        case 3:
                        pregunta += -1;
                        break;}
                    cout<<"-Perfecto última pregunta si la persona que más odias, una persona al zar y tu estuvieran en peligro de muerte"<<endl;
                    cout<<"-1 Salvarías a la persona desconocida-"<<endl;
                    cout<<"-2Salvarias a la persona que más odias lo que automáticamente salvaría al la otra persona-"<<endl;
                    cout<<"3-te salvaría a ti mismo -"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += -1;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += 3;
                        break;
                        
                    }cout<<pregunta;
                        //resultado
                        if(pregunta>=1){cout<<"Adelante puedes pasar"<<endl;}
                        else if(pregunta>=5){magia += 1;
                        }else{cout<<"Lo siento no puedes pasar"; exit(0);}
                    break;
                    case 3:
                    cout<<"Optas por utilizar una sucia estrategia en la que con un ingenio mayúsculo distraes al hombre del puente y sales corriendo"<<endl;
                    cout<< "Corres por un largo periodo de tiempo pero es como si el comino que recorres no acabara terminas agotado y te desmayas"<<endl;
                    break; 
                    case 0:
                    cout<<"Decides rendirte y se lo haces saber al mago por lo que con un movimiento de su baston te manda a dormir"<<endl;
                    break;
                    default:cout<<"opcion inexistente"<<endl;
                    break;
                }
                break;
                case 2:
                cout<<"Decides adentrarte en el bosque  lamentablemente eres interceptado por unos banidos"<<endl;
                cout<<"Ante el peligro tu bastón reacciona liberando un gran brillo que pone a dormir a todos los bandidos"<<endl;
                cout<<"1. Intentar saquearlos"<<endl;
                cout<<"2. No arriesgarse y pasar de largo"<<endl;
                cout<<magia<<" de magia"<<endl;
                cin>>eleccion;
                switch(eleccion){
                    case 1:
                    cout<<"Decides saquearlos y tomas una hacha de mano"<<endl;
                    arma += 1;
                    cout<<"corriste entre el bosque hasta que tu camino termina por culpa de un rio de rapidas corrientes caminas por las orillas buscando como cruzar pero no había forma de que lograras algo asi cuando estuviste listo para rendirte alguien te llama, era un hombre grande y fuerte"<<endl; 
                    cout<<"-¿Qué sucede necesitas ayuda?-"<<endl;
                    cout<<"-¡eh. Necesito cruzar al otro lado-"<<endl;
                    cout<<"-Ja ja ya veo entonces déjame ayudarte-"<<endl;
                    cout<<"El hombre te levanta como si nada y comienza cruzar el rio"<<endl;
                    cout<<"-ja ja Listo hombre ahora me debes un combate, he notado que cuentas con una arma por lo que eres un gerrero como yo ahora toma distancia y comenzemos-"<<endl;
                    cout<<"El hombre imponente que acaba de atravesar un rio de fuertes corrientes y que te levanto como si fueras una pluma acaba de retarte a un combate que haras"<<endl;
                    cout<<"1. Aceptar el combate"<<endl;
                    cout<<"2. Negociar con el hombre"<<endl;
                    cout<<"3. Huir"<<endl;
                    cout<<"0. Rendirte"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        cout<<"El hombre ha sido amable contigo lo que te da la confianza para pararte frente a el, comienza su combate y de una patada te manda al piso, el retrocede y te levantas esta vez te ataca con el hacha de su mano derecha que haras"<<endl;
                        cout<<"1. Esquivar"<<endl;
                        cout<<"2. Defiendete"<<endl;
                        cout<<"3. Ataca"<<endl;
                        cout<<magia<<" de magia"<<endl;
                        cin>>eleccion;
                        switch(eleccion){
                            case 1:
                            cout<<"Reaccionas tan rápido como puedes y te lanzas a un costado evitando el golpe"<<endl;
                            cout<<"Retrocedes y no estas ciendo atacado de repente el barbaro corre hacia ti buscando enbestiirte que haras"<<endl;
                            cout<<"1. Esquivar"<<endl;
                            cout<<"2. Defiendete"<<endl;
                            cout<<"3. Ataca"<<endl;
                            cout<<magia<<" de magia"<<endl;
                            cin>>eleccion;
                            switch(eleccion){
                                case 1:
                                cout<<"Intentas esquivarlo pero al ir corriendo es mar rápido que tú te impacta de lleno y te vence"<<endl;
                                break;
                                case 2:
                                cout<<"Alzas tu defensa pero su corpulensia rompe tu defensa con facilidad venciéndote"<<endl;
                                break;
                                case 3:
                                cout<<"Aprovechas su enbestida como una oportunidad para clavar tu hacha en el recibes el impacto pero quedas trepado en su hombro"<<endl;
                                cout<<"Estas llendo de adrenalina ya ni siquiera sientes dolor, el barbaro te toma de la cabeza y te lanza al suelo tomas tu hacha pero algo es diferente que haces"<<endl;
                                cout<<"1. Esquivar"<<endl;
                                cout<<"2. Defiendete"<<endl;
                                cout<<"3. Ataca"<<endl;
                                cout<<"4. Estallar"<<endl;
                                cout<<magia<<" de magia"<<endl;
                                cin>>eleccion;
                                switch(eleccion){
                                    case 1:
                                    cout<<"Te intenta golpear pero con destreza esquivas algunos de sus golpes hasta que el dolor alcanza tu cuerpo y te desplomas"<<endl;
                                    break;
                                    case 2:
                                    cout<<"Te lanza una serie de golpes de las que al principio logras defenderte pero es en vano estas más dañado que el té vence"<<endl;
                                    break;
                                    case 3:
                                    cout<<"En un arranque de adrenalina lo atacas pero no es suficiente el es mas experimentado que tú te vence"<<endl;
                                    break;
                                    case 4:
                                    cout<<"Decides ceder ante esta extraña sensación lo que libera tu energía mágica que conducida directamente a tu hacha de mano de esta manera logras asestar una serie de golpes al barbaro desarmándolo"<<endl;
                                    cout<<"Te desplomaz y el barbaro se levanta toma su hacha y rie"<<endl;
                                    cout<<"-ja ja bien hecho tienes potencial te da las instrucciones de tu próximo destino y se despide."<<endl;
                                    break;
                                    default:cout<<"opcion inexistente"<<endl;//continuar
                                    break;
                                }
                                default:cout<<"opcion inexistente"<<endl;
                                break;
                            }
                            break;
                            case 2:
                            cout<<"Decides tratar de bloquearlo con tu hacha pero su fuerza es abrumadora partiendo tu hacah en dos"<<endl;
                            break;
                            case 3:
                            cout<<"Se atacan de manera simultanea pero el es mas fuerte y eres vencido"<<endl;
                            break;
                            default:cout<<"opcion inexistente"<<endl;
                            break;}
                        case 2:
                        cout<<"Intentas negociar con él para evitar este combate pero él es un barbaro no aceptara excusas y te derriba"<<endl;
                        break;
                        case 3:
                        cout<<"Te lo piensas y tratas de huir sin embargo él es más rápido que tú, lo has molestado"<<endl;
                        cout<<"-Acaso intentaste huir, no hay nada que odie más que los cobardes-"<<endl;
                        cout<<"Te lanza un golpe que te derrumba "<<endl;
                        break;
                        case 0:
                        cout<<"Decides rendirte y se lo haces saber al mago por lo que con un movimiento de su baston te manda a dormir"<<endl;
                        break;
                        default:cout<<"opcion inexistente"<<endl;
                        break;
                    }
                    break;
                    case 2:
                    cout<<"Prefieres alejarte y seguir tu camino"<<endl;
                    cout<<"corriste entre el bosque hasta que tu camino termina por culpa de un rio de rapidas corrientes caminas por las orillas buscando como cruzar pero no había forma de que lograras algo asi que simplemete te rendiste"<<endl;
                    break;
                    default:cout<<"opcion inexistente"<<endl;
                    break;}
                    
                break;
                case 3:
                cout<<"Utilizas el bastón y este genera de nuevo un haz de luz que te guía en el camino "<<endl;
                cout<<"Caminaste por un tiempo hasta un puente que atravesaba un rio de fuertes corrientes por lo que decides cruzar hasta que te intercepta un hombre misterioso que te prohíbe el paso que harás"<<endl;//rUTA TRANQUILA
                cout<<"1. Luchar"<<endl;
                cout<<"2. Dialogar"<<endl;
                cout<<"3. La 13:14"<<endl;
                cout<<"0. Rendirte"<<endl;
                cout<<magia<<" de magia"<<endl;
                cin>>eleccion;
                switch(eleccion){
                    case 1:
                    cout<<"Decides atacarlo pero este hombre parece ser un mago con experiencia por lo que te derrota fácilmente"<<endl;
                    break;
                    case 2:
                    cout<<"-Lo lamento pero no puedo dejar pasara a aquellos que no han demostrado su valía-"<<endl;
                    cout<<"-Sin embargo soy un hombre de segundas oportunidades entonces si quieres pasar tendrás que responder justamente lo que quiero escuchar-"<<endl;
                    cout<<"-Este envuelto en una situación muy apretada en la que te cuesta encontrar una solución sin embargo llegaste a este problema por culpa de tus propias acciones que harías-"<<endl;
                    cout<<"1. Pedir ayuda"<<endl;
                    cout<<"2. Dobalra esfuerzos"<<endl;
                    cout<<"3. No me sucederia"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 2;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += -1;
                        break;
                    }
                    cout<<"-Bien ahora supongamos que eres el líder de un pequeño pueblo a las lejanías y estas pasando por una dura sequia tu gente tiene hambre y sed, hay un pueblo vecino rebosante de recursos y una gran selva con los recursos que necesitas a la lejanía-"<<endl;
                    cout<<"Si pides ayuda te endeudaras con un pueblo muy superior a tu pequeña comunidad y si organizas viajes de recolección tus habitantes podrían no resistir que harías-"<<endl;
                    cout<<"1. Buscaria al pueblo vecino"<<endl;
                    cout<<"2. Me fijaría en la selva"<<endl;
                    cout<<"3. Robaria al pueblo vecino"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 1;
                        break;
                        case 2:
                        pregunta += 2;
                        break;
                        case 3:
                        pregunta += -1;
                        break;}
                    cout<<"-Perfecto última pregunta si la persona que más odias, una persona al zar y tu estuvieran en peligro de muerte"<<endl;
                    cout<<"-1 Salvarías a la persona desconocida-"<<endl;
                    cout<<"-2Salvarias a la persona que más odias lo que automáticamente salvaría al la otra persona-"<<endl;
                    cout<<"3-te salvaría a ti mismo -"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += -1;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += 2;
                        break;}
                        //resultado
                        if(pregunta>=1){cout<<"Adelante puedes pasar"<<endl;}
                        else if(pregunta>=5){magia += 1;
                        }else{cout<<"Lo siento no puedes pasar"; exit(0);}
                    
                    break;
                    case 3:
                    cout<<"Optas por utilizar una sucia estrategia en la que con un ingenio mayúsculo distraes al hombre del puente y sales corriendo"<<endl;
                    cout<< "Corres por un largo periodo de tiempo pero es como si el comino que recorres no acabara terminas agotado y te desmayas"<<endl;
                    break; 
                    case 0:
                    cout<<"Decides rendirte y se lo haces saber al mago por lo que con un movimiento de su baston te manda a dormir"<<endl;
                    break;
                    default:cout<<"opcion inexistente"<<endl;
                    break;
                }
                break;
                case 0:
                cout<<"Decides rendirte liberando toda tu energía y te desmayas"<<endl;
                break;
                default:cout<<"opcion inexistente"<<endl;
                break;
            }
        break;
        case 2:
        cout<<"Comienzas a  tocar las paredes con tus manos pasando tu tacto por toda la superficie hasta que de repente logras atravesar una especie de agujero invisible"<<endl;
            cout<<"Lograste salir de la cámara principal por lo que observas a tu alrededor para evaluar tus posibilidades te encuentras rodeado de un gran bosque y la lejos logras visualizar una choza vieja que harás"<<endl;
            cout<<"1. Ir directamente a la choza"<<endl;
            cout<<"2. Adentrarse en el bosque"<<endl;
            cout<<"3. Utilizar el bastón"<<endl;
            cout<<"0. Liberarse"<<endl;
            cout<<magia<<" de magia"<<endl;
            cin>>eleccion;
            switch(eleccion){
                case 1:
                cout<<"Decides ir hacia la choza al llegar logras ver que se encuentra en un estado deplorable entras a rebuscar y entre los escombros y encuentras una pequeña cajita que en su interior guardaba un fragmento del catalizador"<<endl;
                magia += 1;
                cout<<"Caminaste por un tiempo hasta un puente que atravesaba un rio de fuertes corrientes por lo que decides cruzar hasta que te intercepta un hombre misterioso que te prohíbe el paso que harás"<<endl;//rUTA TRANQUILA
                cout<<"1. Luchar"<<endl;
                cout<<"2. Dialogar"<<endl;
                cout<<"3. La 13:14"<<endl;
                cout<<"0. Rendirte"<<endl;//rUTA TRANQUILA
                cout<<magia<<" de magia"<<endl;
                cin>>eleccion;
                switch(eleccion){
                    case 1:
                    cout<<"Decides atacarlo pero este hombre parece ser un mago con experiencia por lo que te derrota fácilmente"<<endl;
                    break;
                    case 2:
                    cout<<"-Lo lamento pero no puedo dejar pasara a aquellos que no han demostrado su valía-"<<endl;
                    cout<<"-Sin embargo soy un hombre de segundas oportunidades entonces si quieres pasar tendrás que responder justamente lo que quiero escuchar-"<<endl;
                    cout<<"-Este envuelto en una situación muy apretada en la que te cuesta encontrar una solución sin embargo llegaste a este problema por culpa de tus propias acciones que harías-"<<endl;
                    cout<<"1. Pedir ayuda"<<endl;
                    cout<<"2. Dobalra esfuerzos"<<endl;
                    cout<<"3. No me sucederia"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 2;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += -1;
                        break;
                    }
                    cout<<"-Bien ahora supongamos que eres el líder de un pequeño pueblo a las lejanías y estas pasando por una dura sequia tu gente tiene hambre y sed, hay un pueblo vecino rebosante de recursos y una gran selva con los recursos que necesitas a la lejanía-"<<endl;
                    cout<<"Si pides ayuda te endeudaras con un pueblo muy superior a tu pequeña comunidad y si organizas viajes de recolección tus habitantes podrían no resistir que harías-"<<endl;
                    cout<<"1. Buscaria al pueblo vecino"<<endl;
                    cout<<"2. Me fijaría en la selva"<<endl;
                    cout<<"3. Robaria al pueblo vecino"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += 1;
                        break;
                        case 2:
                        pregunta += 2;
                        break;
                        case 3:
                        pregunta += -1;
                        break;}
                    cout<<"-Perfecto última pregunta si la persona que más odias, una persona al zar y tu estuvieran en peligro de muerte"<<endl;
                    cout<<"-1 Salvarías a la persona desconocida-"<<endl;
                    cout<<"-2Salvarias a la persona que más odias lo que automáticamente salvaría al la otra persona-"<<endl;
                    cout<<"3-te salvaría a ti mismo -"<<endl;
                    cout<<magia<<" de magia"<<endl;
                    cin>>eleccion;
                    switch(eleccion){
                        case 1:
                        pregunta += -1;
                        break;
                        case 2:
                        pregunta += 1;
                        break;
                        case 3:
                        pregunta += 2;
                        break;}
                        //resultado
                        if(pregunta>=1){cout<<"Adelante puedes pasar"<<endl;}
                        else if(pregunta>=5){magia += 1;
                        }else{cout<<"Lo siento no puedes pasar"; exit(0);}
                    break;
                    case 3:
                    cout<<"Optas por utilizar una sucia estrategia en la que con un ingenio mayúsculo distraes al hombre del puente y sales corriendo"<<endl;
                    cout<< "Corres por un largo periodo de tiempo pero es como si el comino que recorres no acabara terminas agotado y te desmayas"<<endl;
                    break; 
                    case 0:
                    cout<<"Decides rendirte y se lo haces saber al mago por lo que con un movimiento de su baston te manda a dormir"<<endl;
                    break;
                    default:cout<<"opcion inexistente"<<endl;
                    break;
                }
                break;
                case 2:
                cout<<"Decides adentrarte en el bosque  lamentablemente eres interceptado por unos banidos"<<endl;
                cout<<"Te tienen rodeado y solo puedes"<<endl;
                cout<<"1. Luchar"<<endl;
                cout<<"2. Huir"<<endl;
                cout<<magia<<" de magia"<<endl;
                cin>>eleccion;
                switch(eleccion){
                    case 1:
                    cout<<"Luchas pero ellos están armados y mueres"<<endl;
                    break;
                    case 2:
                    cout<<"Utilizas una distracción para  poder escapar y los pierdes"<<endl;
                    cout<<"corriste entre el bosque hasta que tu camino termina por culpa de un rio de rapidas corrientes caminas por las orillas buscando como cruzar pero no había forma de que lograras algo asi que simplemete te rendiste"<<endl;
                    break;
                    default:cout<<"opcion inexistente"<<endl;
                    break;//RUTA PELEA
                }
                break;
                case 3:
                cout<<"No cuentas con el baston "<<endl;
                
                break;
                case 0:
                cout<<"Decides rendirte liberando toda tu energía y te desmayas"<<endl;
                break;
                default:cout<<"opcion inexistente"<<endl;
                break;
            }break;
        
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






