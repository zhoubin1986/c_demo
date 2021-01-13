#include <stdio.h>

int main(int argc,char **argv)
{
	float mass_mol = 3.0e-23;
	float mass_qt = 950;
	float quarts;
	float zfzs;	
	printf("mass_mol = %f  %e\n",mass_mol,mass_mol);	
	printf("Enter a quarts of water:");
	scanf("%f",&quarts);
	zfzs = quarts * mass_qt / mass_mol;
	printf("%f contain %e(%f)\n",quarts,zfzs,zfzs);	
	return 0;

}
