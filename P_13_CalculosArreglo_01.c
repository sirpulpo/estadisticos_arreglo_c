#include<stdio.h>


int A[20];
int n;


void leer(int A[20]){
	int i;
	for (i=0; i<n; i++){
		printf("Valor para %d: ",i+1);
		scanf("%d",&A[i]);
	}
	system("cls");
}


void promedio(int A[20]){
	int i, s=0, p;
	for(i=0; i<n; i++){
		s=s+A[i];
	}
	p=s/n;
	printf("El promedio es: %d\n",p);
}


void varianza(int A[20]){
	int i;
	float p, s=0, v, z=0;
	for(i=0; i<n; i++){
		s=s+A[i];
	}
	p=s/n;
	for(i=0; i<n; i++){
		z=z+((A[i]-p)*(A[i]-p));
	}
	v=z/(float)n;
	printf("La varianza es: %f\n",v);
}


void mayor(int A[20]){
	int i, ma=0;
	for(i=0; i<n; i++){
		if(ma<A[i]){
			ma=A[i];
		}
	}
	printf("El dato mayor es: %d\n",ma);
}


void menor(int A[20]){
	int i, me=50;
	for(i=0; i<n; i++){
		if(me>A[i]){
			me=A[i];
		}
	}
	printf("El dato menor es: %d\n",me);
}


int main(){
	system("color f0");
	printf("\n\t\t\tPrograma 13 Calculos con arreglos");
	printf("\n\t\t\t_________________________________");
	printf("\n\tEste programa realizara los siguientes calculos para los datos");
	printf("\n\tguardados en un arreglo: promedio, varianza, mayor y menor.\n\n\n");

	system("pause");
	system("cls");
	int i, o, u, m;
	do{
		do{
			printf("Cuantos datos quieres almacenar: ");
			scanf("%d",&n);
			while(n<=0){
				printf("El arreglo debe contener al menos un dato.\n");
				printf("Cuantos datos quieres almacenar: ");
			    scanf("%d",&n);
			}
			printf("\nIntroduce los valores para el arreglo.\n");
			leer(A);
			do{
				printf("El arreglo es el siguiente: \n\n");
				printf("\t\263");
				for(i=0; i<n; i++){
					printf(" %d ",A[i]);
					printf("\263");
				}
				printf("\n\nQue calculo deseas?\n");
				printf("\t1- Promedio.\n");
				printf("\t2- Varianza.\n");
				printf("\t3- Mayor.\n");
				printf("\t4- Menor.\t");
				scanf("%d",&m);
				while(m<1 || m>4)
				{
					printf("Opcion no valida intente de nuevo.\n");
					printf("Que calculo deseas?\n");
					printf("\t1- Promedio.\n");
					printf("\t2- Varianza.\n");
					printf("\t3- Mayor.\n");
					printf("\t4- Menor.\n");
					scanf("%d",&m);
				}
				if(m==1)
				{
					promedio(A);
				}
				else if(m==2)
				{
					varianza(A);
				}
				else if(m==3)
				{
					mayor(A);
				}
				else if(m==4)
				{
					menor(A);
				}
				printf("Desea realizar otro calculo?\n");
				printf("\tSi=1\tNo=0\t");
			    scanf("%d",&o);
				while (o!=0 && o!=1)
				{
				    printf("Opcion no valida intente de nuevo.\n");
				    printf("Desea repetir el programa?");
				    printf("\tSi=1\tNo=0\t");
				    scanf("%d",&o);
				}
				u=0;
				if (o==1)
			    {
			    	
				    printf("Desea introducir nuevos datos o continuar con los mismos?\n");
				    printf("\tNuevos=1\tMismos=2\t");
				    scanf("%d",&u);
				    while (u!=1 && u!=2)
				    {
				    	printf("Opcion no valida intente de nuevo.\n");
				    	printf("\tNuevos=1\tMismos=2\t");
				        scanf("%d",&u);
				    }
			    }
			    system("cls");
			}while(u==2);
		}while(u==1);
	}while(o==1);
	return 0;
}
