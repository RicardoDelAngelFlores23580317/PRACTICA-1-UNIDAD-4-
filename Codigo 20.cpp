#include <iostream>
using namespace std; 
int main(int argc, char *argv[])
{
int indice,x;
char frase[50];

cout<<"Introduzca una frase: "<<endl; 

gets(frase);
for(x = 0;x < 50;x++)
{
if (frase[x]=='\0')
{
indice=x;
break;
}
}
cout<<"La frase al reves es: "<<endl; 


for(x = indice-1;x >=0;x--)
{
	cout<<frase[x]<<endl; 
}
cout<<" "<<endl; 


system("PAUSE");
return 0;
}
