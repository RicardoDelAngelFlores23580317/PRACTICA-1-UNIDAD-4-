#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
int sum=0,x;
char frase[50];
cout<<"Introduzca una frase: "<<endl;

gets(frase);
for(x = 0; x < 50;x++)
{
if (frase[x]!='\0')
{
frase[x]=frase[x]+3;
}
}
cout<<"La nueva frase es: "<<sum<<endl;
cout<<frase<<endl; 

system("PAUSE");
return 0;
}
