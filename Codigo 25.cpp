#include <iostream>
#include <cstring>
using namespace std; 

struct alumno {
char nombre[50];
float nota;
};
int main(int argc, char *argv[])
{
struct alumno alum,alumnos[5];
int x,opcion=1;
float sum=0,cont=0,mejor,peor;
for (x=0;x<5;x++)
{
	cout<<"Introduzca nombre del alumno: "<<endl; 
gets(alumnos[x].nombre);
gets(alumnos[x].nombre);
cout<<"Introduzca nota: "<<endl; 
cin>>alumnos[x].nota; 

}
while ((opcion==1 || opcion==2 ||
opcion==3 || opcion==4 ||
opcion==5 || opcion==6) && (opcion!=7))
{
	cout<<"1 - Buscar un alumno"<<endl; 
	cout<<"2 - Modificar nota"<<endl; 
	cout<<"3- Media de todas las notas"<<endl; 
	cout<<"4- Media de todas las notas inferiores a 5"<<endl; 
	cout<<"5- Alumno con mejores notas"<<endl; 
	cout<<"6- Alumno con peores notas"<<endl; 
	cout<<"7 - Salir"<<endl; 
cout<<"Introduzca una opcion: "<<endl;
cin>>opcion; 

if (opcion==1)
{
	cout<<"Introduzca un nombre: "<<endl;
gets(alum.nombre);
gets(alum.nombre);
for(x = 0; x < 5;x++)
{
if (strcmp(alumnos[x].nombre,alum.nombre)==0)
{
	cout<<"Nombre: "<<alumnos[x].nombre<<endl; 
	cout<<"Nota: "<<alumnos[x].nota<<endl; 
}
}
cout<<" "<<endl;
}
else if (opcion==2)
{
cout<<"Introduzca un nombre: "<<endl;
gets(alum.nombre);
gets(alum.nombre);
for(x = 0; x < 5;x++)
{
if (strcmp(alumnos[x].nombre,alum.nombre)==0)
{
cout<<"Introduzca una nota: "<<endl;
cin>>alumnos[x].nota; 
cout<<"Nota modificada: "<<endl;   
}
}
cout<<" "<<endl;
}
else if (opcion==3)
{
sum=0;
for(x = 0; x < 5;x++)
{
sum=sum+alumnos[x].nota;
}
cout<<"La media de las notas es de : "<<sum/5<<endl; 

}
else if (opcion==4)
{
sum=0;
cont=0;
for(x = 0; x < 5;x++)
{
if (alumnos[x].nota<5)
{
sum=sum+alumnos[x].nota;
cont++;
}
}
cout<<"La media de las notas inferiores a 5 es : "<<sum/cont<<endl; 
}

else if (opcion==5)
{
mejor=0;
for(x = 0; x < 5;x++)
{
if (alumnos[x].nota>mejor)
{
mejor=alumnos[x].nota;
alum.nota=alumnos[x].nota;
strcpy(alum.nombre,alumnos[x].nombre);
}
}
cout<<"El alumno con mejores notas es: "<<alum.nombre<<endl; 
}
else if (opcion==6)
{
peor=10;
for(x = 0; x < 5;x++)
{
if (alumnos[x].nota<peor)
{
peor=alumnos[x].nota;
alum.nota=alumnos[x].nota;
strcpy(alum.nombre,alumnos[x].nombre);
}
}
cout<<"El alumno con peores notas es: "<<alum.nombre<<endl; 
}
}
system("PAUSE");
return 0;
}
