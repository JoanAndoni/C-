#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

void crearJuego(int reja[6][6])
{
    /*Visualizar la reja de 6*6 
    for(int i = 0; i < 6; i++){
        for(int i2 = 0; i2 < 6; i2++){
            cout << "[" << i2 << "," << i << "]  ";
        }
        cout << endl; 
    }*/

    //Crear 5 minas para la reja
    int minas[5][2] = { 0 }; 

    //Crear las posiciones de las minas random dentro del rango
    srand (time(NULL));
    for(int i = 0; i < 5; i++){
        minas[i][0] = rand() %6;
        minas[i][1] = rand() %6;
    }

    /*cout << endl;
    //Visualizar las minas 
    for(int i = 0; i < 5; i++){
        cout << "[" << minas[i][0]+1 << "," << minas[i][1]+1 << "]" <<endl;
    }*/
    
    //Llenar la reja con las minas
    for(int i = 0; i < 5; i++){
        reja[minas[i][1]][minas[i][0]] = 8;
    }

    /*cout << endl;
    //Imprimir la reja despues de llenarla
    for(int i = 0; i < 6; i++){
        for(int i2 = 0; i2 < 6; i2++){
            cout << reja[i][i2] << "  ";
        }
        cout << endl; 
    }*/

    //Revisar los elementos vacios para asignarles un numero dependiendo de las minas que tengan alrededor
    int count;
    for(int i = 0; i < 6; i++){
        for(int i2 = 0; i2 < 6; i2++){
            count = 0;
            if(reja[i][i2] == 0){
                if (i != 0){
                    if (i2 != 0){
                        if (reja[i-1][i2-1] == 8) count += 1; //Superior izquierda
                    }
                    if (reja[i-1][i2] == 8) count += 1; //Superior
                    if (i2 != 5){
                        if (reja[i-1][i2+1] == 8) count += 1; //Superior derecha
                    }
                }
                if (i2 != 0){
                    if (reja[i][i2-1] == 8) count += 1; //Derecha
                }
                if (i2 != 5){             
                    if (reja[i][i2+1] == 8) count += 1; //Izquierda
                }
                if (i != 5){
                    if (i2 != 0){
                        if (reja[i+1][i2-1] == 8) count += 1; //Inferior izquierda
                    }
                    if (reja[i+1][i2] == 8) count += 1; //Inferior
                    if (i2 != 5){
                        if (reja[i+1][i2+1] == 8) count += 1; //Inferior derecha
                    }
                }
                reja[i][i2] = count;
            }
        }
    }

    /*
    cout << endl;
    //Imprimir la reja despues de llenarla
    for(int i = 0; i < 6; i++){        
        for(int i2 = 0; i2 < 6; i2++){
            cout << reja[i][i2] << "  ";
        }
        cout << endl; 
    }*/
}

void imprimirReja(int reja[6][6])
{
    cout << endl << "   0, 1, 2, 3, 4, 5 : Numero de minas cercanas" << endl << "   7 : Espacio vacio" << endl << "   8 : Mina" << endl << "   9 : Bandera" << endl << endl;
    cout << "  X   1  2  3  4  5  6"<< endl << "Y" << endl;
    for(int i = 0; i < 6; i++){
        cout << i + 1 << "     ";
        for(int i2 = 0; i2 < 6; i2++){
            cout << reja[i][i2] << "  ";
        }
        cout << endl; 
    }
}

int main()
{
    int rejaRellena[6][6] = {0}, rejaJuego[6][6] = {0}, con = 0, menu, x, y, ganar = 0;
    crearJuego(rejaRellena); //Crear el juego

    //Rellenar la reja del juego
    for(int i = 0; i < 6; i++){
        for(int i2 = 0; i2 < 6; i2++){
            rejaJuego[i][i2] = 7;
        }
    }

    while (con != 1)
    {
        //Checar si ya se gano
        ganar = 0;
        for(int i = 0; i < 6; i++){
            for(int i2 = 0; i2 < 6; i2++){
                if (rejaJuego[i][i2] == 7) ganar = ganar + 1;
            }
        }
        if(ganar == 0){
            imprimirReja(rejaJuego);
            cout << endl << "HAS GANADO" << endl;
            return(0);
        }

        imprimirReja(rejaRellena);
        imprimirReja(rejaJuego);
        cout << endl << "1.- Ingresar celda a tocar" << endl;
        cout << "2.- Poner bandera a celda" << endl;
        cout << "0.- Salir" << endl;
        cout << "  Ingresar opción: ";
        cin >> menu;
        cout << endl;
        switch(menu)
        {
            case 1:
                cout << "x: ";
                cin >> x;
                x = x-1;
                cout << "y: ";
                cin >> y;
                y = y-1;

                if (rejaRellena[y][x] == 0){
                    for(int i = 0; i < 6; i++){
                        for(int i2 = 0; i2 < 6; i2++){
                            if (rejaRellena[i][i2] == 0) rejaJuego[i][i2] = rejaRellena[i][i2];
                        }
                    }
                }

                else if (rejaRellena[y][x] == 1) rejaJuego[y][x] = rejaRellena[y][x];
                else if (rejaRellena[y][x] == 2) rejaJuego[y][x] = rejaRellena[y][x];
                else if (rejaRellena[y][x] == 3) rejaJuego[y][x] = rejaRellena[y][x];
                else if (rejaRellena[y][x] == 4) rejaJuego[y][x] = rejaRellena[y][x];
                else if (rejaRellena[y][x] == 5) rejaJuego[y][x] = rejaRellena[y][x];
                else if (rejaRellena[y][x] == 8){
                    for(int i = 0; i < 6; i++){
                        for(int i2 = 0; i2 < 6; i2++){
                            if (rejaRellena[i][i2] == 8) rejaJuego[i][i2] = rejaRellena[i][i2];
                        }
                    }
                    imprimirReja(rejaJuego);
                    cout << endl << "HAS PERDIDO" << endl;
                    return(0);
                }
                break;
                
            case 2:
                cout << "x: ";
                cin >> x;
                x = x-1;
                cout << "y: ";
                cin >> y;
                y = y-1;
                rejaJuego[y][x] = 9;
                rejaRellena[y][x] = 9;
                break;
                
            case 0:
                con = 1;
                break;

            default:
                cout << "Opcion invalida, intente denuevo" << endl;
                break;
        }
    }
    return 0;
}