#include <windows.h>
#include "graphics.h"
#include <string.h>
#include "mouse.h"
int main()
{
    initwindow(600,400,"Practica_4_Cardoso_Fernandez",300,200);
    boton T[4];
    T[0].posicion(450,20,530,50);
    T[1].posicion(450,60,530,90);
    T[2].posicion(450,100,530,130);
    T[3].posicion(450,140,530,170);
    int opc;
    do
    {
    readimagefile("fondo.jpg",1,1,getmaxx(),getmaxy());
    while(true)
    {
        T[0].estado("inicio2.jpg","inicio1.jpg");
        T[1].estado("instruc2.jpg","instruc1.jpg");
        T[2].estado("acerca2.jpg","acerca1.jpg");
        T[3].estado("salir2.jpg","salir2.jpg");
        if(T[0].prueba()){opc=1; break;}
        if(T[1].prueba()){opc=2; break;}
        if(T[2].prueba()){opc=3; break;}
        if(T[3].prueba()){opc=4; break;}
    }
    switch(opc)
    {
    case 1: readimagefile("escenario.jpg",1,1,getmaxx(),getmaxy());getch(); break;
    case 2: readimagefile("instrucciones.jpg",1,1,getmaxx(),getmaxy()); getch(); break;
    case 3: readimagefile("acerca.jpg",1,1,getmaxx(),getmaxy()); getch(); break;
    }
    }while(opc!=4);
}
