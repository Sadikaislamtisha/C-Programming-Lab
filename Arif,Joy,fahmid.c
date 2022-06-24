/*Sadika Islam Tisha
Id:221-35-872*/
#include<stdio.h>
int main()
{

    int arif,fahmid,joy;

    printf("Enter the age of arif, fahmid & joy: ");
    scanf("%d %d %d",&arif , &fahmid, &joy);


    if(arif<fahmid && arif<joy)
	{
		printf("Arif is younger");
	}
	else if(joy<fahmid && joy<arif)
	{
		printf("Joy is younger");
	}

	else{

		printf("Fahmid is younger");
	}

    return 0;

}
