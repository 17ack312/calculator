#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// display

void display(int z)                                           {                                                             printf("\n result is : %d",z); 
printf("\n\n");
}

// getdata

int getdata()
{
int x;
printf("\n enter data : ");
scanf("%d",&x); 
return x;
}
//parcentage
void par()
{
int p,z,x,i,per,s=0;
printf("\nenter number: ");
x=getdata();
printf("\nenter parcentage");
p=getdata();
per=((x*p)/100);
printf("\n1.addition\n2.subtraction\nyour choice is : ");
scanf("%d",&i);
if(i==1)
s=(x+per);
else if(i==2)
	s=(x-per);
else 
	printf("wrong choice");

display(s);

}

// addition

void add()
{
int a,s=0,m;
printf("\n:::: addition ::::\n");
do{
	a=getdata();
	s=s+a;
	printf("\n add more? \n1.yes\n0.show result\n");
	scanf("%d",&m);
	if(m==1)
	printf("\nyour choice is : yes");
	else
	printf("\nyour choice is : show result");
   }while( m==1);
display(s);
}

// subs

void sub()
{
int b,t=0,u;
printf("\n:::: subtraction ::::\n");
b=getdata();
t=b-t;
b=getdata(); 
t=t-b;
do
  {
   printf("\ndo you want to subtract further from it?\n1.yes\n0.show result\n");
   scanf("%d",&u);
   if(u==1) 
   {
	   printf("\n your choice is : yes");
	   b=getdata(); 
	   t=t-b;
   }
   else
	   printf("\n your choice is : show result");

  }while(u==1); 
display(t);
}

//mul

void mul()
{
int e,f=1,u;
printf("\n:::: multiplication ::::\n");
e=getdata();
f=f*e;
do                                                              {                                                              printf("\ndo you want to further multiply with it?\n1.yes\n0.show result\n");                                                        scanf("%d",&u);                                               if(u==1)                                                      {                                                                     printf("\n your choice is : yes");                            e=getdata();                                		f=f*e;
  	 }     

	else                                                                  printf("\n your choice is : show result");                                                                                  }while(u==1);
display(f);
}
//div

void divi()
{

int e,f=1,u,g=1;                                                  printf("\n:::: division ::::\n");     
printf("\nneter dividend,the nummber which is divided>>");
e=getdata();  
f=e/f;
printf("\nenter divisor,the number by which dividend is divided>>");
e=getdata();
g=f%e;
f=f/e;
                                                        
	do  
	{ 
		printf("\ndo you want to further divide it?\n1.yes\n0.show result\n");
		scanf("%d",&u);  
		if(u==1)    
		{     
			printf("\n your choice is : yes\nenter divisor>>");
            e=getdata();
	    g=f%e;
	    f=f/e; 

	    

		} 
	else   
		printf("\n your choice is : show result");
                  

	}while(u==1);   
	
printf("\nquotient》》");
display(f);
printf("\nremainder》》");
display(g);
}



void aa()
{
int a,n,c,s=0,i,d;
printf("\n :::: AP series addition ::::\n");
printf("\n enter initial number》》");
a=getdata();
printf("\nenter limit》》");
n=getdata();
printf("\n enter common difference》》");
d=getdata();
for(i=a;i<=n;i=i+d)
s=s+i;

display(s);

}

void facto()
{
int x,i;
long  m=1;
printf("\n :::: factorial :::: \n");
x=getdata();
for(i=x;i>=1;i--)
  {  
   printf("%d",i);

   m=m*i;
   if( i>1 && i<=x) 
   printf("×");
   else
   printf("=");

  }
printf("%ld",m);
}



void fac()
{
int x,i;
printf("\n :::: factor :::: ");
x=getdata();
printf("factors of %d are : ",x);
for(i=1;i<=x;i++)
  {
   if(x%i==0)
   printf(" %d",i);

 if(i<x && x%i==0) 
   printf(",");
 if(i==x)
 printf(".");
  } 

}

void expo()
{
int p,n,m=1,i;
printf("\n :::: exponent :::: \n enter number : ");
scanf("%d",&n);
printf("\nenter power : ");
scanf("%d",&p);
for(i=1;i<=p;i++)
	{
	m=m*n;
	}
display(m);
}





// msg 
void msg()
{
int c,m;
printf("\nchoose from below\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.AP series addition\n6.factorial\n7.factors\n8.percentage\n9.exponent\n0.exit");
printf("\nyour choice is :");
scanf("%d",&c);
if(c==1)
	add();

else if(c==2)
	sub(); 

else if (c==3)
	mul(); 

else if (c==4)
	divi();

else if (c==5)
	aa();

else if (c==6)
	facto();

else if (c==7)
	fac();

else if (c==8)
        par();

else if (c==9)
	expo();
	
else if (c==0)
	return ;

else 
	{
	printf("\n wrong choice\ntry again");
	msg();
	}




if(c!=0)                                                      {                                                             do{

  printf("\n do you want to continue? \n1.yes\n0.no\n");
  scanf("%d",&m);
  if(m==1)
        {
          printf("\nyour choice is : yes");
           msg();
        }

  else
  {
  printf("\nyour choice is : no\n");
  break ;
  return;
  }
}while( m==1);
}
}
int main()
{

msg();

return 0 ;
}
