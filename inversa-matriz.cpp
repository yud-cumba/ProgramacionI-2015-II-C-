#include <iostream>
using namespace std;

int i,j, n, s;
float a[1000][1000], y, aux[1000], x;
     
int main()
{
	
	printf("\t\tIntroducir el ORDEN DE LA MATRIZ : N = ");
scanf("%d",&n);
printf("\n");

printf("\t\tIntroducir los elementos por ELEMENTOS \n");
printf("\t\t-------------------------------------- \n");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{ printf("A(%d,%d) =",i,j);
scanf("%f",&a[i][j]); } }
 cout<<"\nSu matriz a invertir es:"<<endl;
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{
printf("%8.4f\t",a[i][j] );
}
printf("\n");

}
printf("\n");
	for (i=0;i<n;i++)
		for(j=n;j<2*n;j++)
		{
			if(i==(j-n))
				a[i][j]=1;
			else
				a[i][j]=0;
		}
		
		for (s=0;s<n;s++)
		{
			x=a[s][s];
			for (j=0;j<2*n;j++)
				a[s][j]=a[s][j]/x;

			for(i=0;i<n;i++)
			{
				if (i==s)
					;
				else 
				{
					y= a[i][s];
					for (j=0;j<2*n;j++)
						aux[j]=a[s][j]*(y*-1);
					for (j=0;j<2*n;j++)
						a[i][j]=a[i][j]+aux[j];
				}
			}
		}
		cout<<"\nLa matriz inversa es: "<<endl;
		
		for (i=0;i<n;i++)
		{
			for(j=n;j<2*n;j++){

				cout <<"\t"<<a[i][j];
			}
			cout <<"\n";
		}

}
