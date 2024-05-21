#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
int x,y,num=0, numeros[4][4];
for (x=0;x<3;x++)
{
for (y=0;y<3;y++)
{
numeros[x][y]=num;
num++;
}
}
cout<< "El array original es: "<<endl; 

for(x = 0;x < 3;x++)
{
for(y = 0;y < 3;y++)
{
	cout<<numeros[x][y]<<endl; 

}
cout<<""<<endl; 

}
cout<<"La traspuesta es: "<<endl; 

for(x = 0;x < 3;x++)
{
for(y = 0;y < 3;y++)
{
	cout<<numeros[y][x]<<endl; 

}
cout<<" "<<endl; 

}
system("PAUSE");
return 0;
}
