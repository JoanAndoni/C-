#include "Contacto.h"
#include "cstdlib"

void mostrar_contacto(int contacto, Contacto mostrar)
{
  cout<< contacto <<".- "<<mostrar.getNombre()<<endl;
  cout<<"    "<<mostrar.getTelefono()<<endl;
  cout<<"    "<<mostrar.getEmail()<<endl;
  cout<<"    "<<mostrar.getDireccion()<<"\n\n"<<endl;
}

//Creación de una agenda
int main()
{
   Contacto agenda[10];
   int option;
   int contactos = 0;
   string nombre, telefono, email, direccion;

   while (1)
   {
       cout<<"1. Nuevo contacto"<<endl;
       cout<<"2. Ver un contacto"<<endl;
       cout<<"3. Ver la lista de contactos"<<endl;
       cout<<"4. Salir"<<endl;

       cout<<"Opcion: ";
       cin >> option;
       cout << "\n";

       switch ( option )
       {
          case 1:
               if (contactos > 9)
               {
                   cout<<"Ya no hay espacio para más contactos";
               }

	      if (contactos < 10)
              {
                cout<<"Nombre: ";
                cin>>nombre;
                agenda[contactos].setNombre(nombre);
                cout<<"Telefono: ";
                cin>>telefono;
                agenda[contactos].setTelefono(telefono);
                cout<<"Email: ";
                cin>>email;
                agenda[contactos].setEmail(email);
                cout<<"Dirección: ";
                cin>>direccion;
                agenda[contactos].setDireccion(direccion);
				cout << "\n\n";
                contactos++;
              }
              break;

          case 2:
               int x, l;
               cout<<"\n Que contacto quieres ver: ";
               cin>>x;
			   l = x;
               x = x - 1;

               if ( 0 < l < 11 )
               {
				   cout << "\n" << endl;
                   mostrar_contacto( l, agenda[x]);
               }

               if ( 10 < l < 0 )
               {
                   cout<<"El contacto es invalido.";
               }
               break;

          case 3:
               for( int i=0; i < contactos; i++)
               {
                   cout<< i+1 <<".- "<<agenda[i].getNombre()<<"\n"<<endl;
               }
               break;

          case 4:
               cout<<"Que tengas buen día."<<endl;
               exit(0);
               break;
       }
   }

   return 0;
}
