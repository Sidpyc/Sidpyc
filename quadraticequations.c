#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float disc,root1,root2;
	float real,img;
	printf("Enter coefficients of a, b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	while (a==0 && b==0 && c==0)
	{
		printf("Invalid coeffecients\n");
		printf("Enter valid inputs");
		scanf("%d%d%d",&a,&b,&c);
	}
	disc=(float)(b*b)-(4*a*c);
	
	if (disc>0 && a==0)
	{
		printf("Linear Equation");
		root1=(2*(-b));
		printf("Root = %f",root1);
	}
	
	else if (disc>0 && a>0)
	{
		printf("The roots are real and unequal\n");
		root1=(-b+sqrt(disc))/(2*a);
		root2=(-b-sqrt(disc))/(2*a);
		printf("root1 = %f ",root1);
		printf("root2 = %f\n",root2);
	}
	
	else if (disc==0)
	{
		printf("The roots are real and equal");
		root1=-b/(2*a);
		root2=root1;
		printf("root1 = root2 = %f",root1);
	}
	else
	{
	    printf("The roots are real and imaginary\n");
	    disc=-disc;
	    img=(float)disc/(2*a);
	    real=(float)-b/(2*a);
	    if(img>0)
	    {
	        printf("root1=%f + i%f\n",real,img);
	        printf("root2=%f - i%f\n",real,img);
	    }
	    else
	    {
	        img=-img;
	        printf("root1=%f + i%f\n",real,img);
	        printf("root2=%f - i%f\n",real,img);
	    }
	}
}
