// Ejercicio laberinto parcial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define COL 10
#define FIL 10
void laberinto(int mat[FIL][COL],int ,int ,int ,int ,int ,int );

int _tmain(int argc, _TCHAR* argv[])
{
//Laberinto dado: 1 camino, 0 pared														   1 0 1 1 1
	int mat[FIL][COL]={{1,0,1,1,1},{1,0,1,0,1},{1,1,1,0,1},{0,0,0,0,1},{1,1,0,1,1}};	// 1 0 1 0 1
																						//1 1 1 0 1
																						//0 0 0 0 1
																						//1 1 0 1 1//
	laberinto(mat,5,5,0,0,4,3);



	return 0;
}
void laberinto(int mat[][COL],int fil,int col,int fe,int ce,int fs,int cs)
{
int f,c,fin;
f=fe;     //Fila y columna actual= fila y columna de entrada//
c=ce;
fin=0;   //variable bandera que indica si hemos llegado al final//
while(fin==0)  //while(!fin);//
{
	printf("(%d,%d)\n",f,c);
	//Buscamos el camino//
	if(c+1<col && mat[f][c+1]==1)   //Miramos a la derecha//
	{
		mat[f][c]=0;
		c++;
	}
	else if(c-1>=0 && mat[f][c-1]==1)
	{
		mat[f][c]=0;
		c--;
	}
	else if(f-1>=0 && mat[f-1][c]==1)
	{
		mat[f][c]=0;
		f--;
	}
	else if(f+1<fil && mat[f+1][c]==1)
	{
		mat[f][c]=0;
		f++;
	}
	if(c==cs && f==fs)
	{
		fin=1;
		printf("(%d,%d)\n",f,c);
	}
}

}

