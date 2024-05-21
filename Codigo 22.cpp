#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
int sum=0,x;
char frase[50];
cout<<"Introduzca una frase: "<<endl;  

gets(frase);
for(x = 0;x < 50;x++)
{
if (frase[x]>=65 && frase[x]<=90)
{
sum++;
}
}
cout<<"En la frase hay este numero de Mayusculas: "<<sum<<endl; 

cout<<""<<endl; 

system("PAUSE");
return 0;
}
