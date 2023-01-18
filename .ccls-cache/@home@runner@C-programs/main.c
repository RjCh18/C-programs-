#include <math.h>
#include <stdio.h>

// int main() {

/*finding no. of notes of 2000,500,100 in user given amount that must have
    atleast 1 note of 100

  int a, b, c, d, e, f, g, h, i, j, k;
  printf("Enter total amount =");
  scanf("%d", &a);
  b = 100, e = 2000, h = 500;
  c = a - b;
  d = c / e;
  f = c % e;
  g = f / h;
  i = f % h;
  j = i / b + 1;
  printf("No. of 2000 notes=%d \n", d);
  printf("No. of 500 notes=%d \n", g);
  printf("No. of 100 notes=%d \n", j);

  // -----------------------------------------------------


int a,b;
printf("Enter first no. =");
scanf("%d",&a);
printf("Enter second no. =");
scanf("%d",&b);
printf("sum = %d \n",a+b);
printf("product = %d\n",a*b);
printf("subtract= %d \n",a-b);


  // --------------------------------------------------


int a,b;
printf("Length =");
scanf("%d",&a);
printf("Breadth =");
scanf("%d",&b);
printf("Perimeter of rectangle is : %d",2*a+b);


  //---------------------------------------------------


int a,b;
printf("Length =");
scanf("%d",&a);
printf("Breadth =");
scanf("%d",&b);
printf(" Area of rectangle is : %d",a*b);


  //--------------------------------------------------------


int r;
printf("Enter radii of circle :");
scanf("%d",&r);
printf("Diameter = %d \n",2*r);
printf("Circumference = %f \n",2*3.14*r );
printf("Area = %f",3.14*r*r);


  // ----------------------------------------------------


float a,b,c;
printf("This program converts cm to meter and kilometer \n \n");
printf("Enter value :");
scanf("%f",&a);
b=a/100;
c=a/1000;
printf("value in meter = %f",b);printf("m\n");
printf("value in kilometer = %f",c);printf("km");


  //-----------------------------------------------------------


int a;
printf("Enter temp in celcius :");
scanf("%d",&a);
printf("Temp= %d",a+273); printf("f");


  //----------------------------------------------------------


int a;
printf("Enter temp in fahrenheit :");
scanf("%d",&a);
printf("Temp= %d",a-273); printf("C");


  // ----------------------------------------------------------

  int days, years, weeks, a, b;
  printf("enter the no. of days:");
  scanf("%d", &days);
  years = days / 365;
  a = days % 365;
  weeks = a / 7;
  b = a % 7;
  days = b;
  printf("Years=%d\n", years);
  printf("Weeks=%d\n", weeks);
  printf("Days=%d\n", days);

  //----------------------------------------------------------------------

int base,power,value;
printf("Enter number:");
scanf("%d",&base);
printf("Enter power :");
scanf("%d",&power);
value = pow(base,power);
printf("Value = %d",value);
  //-------------------------------------------------------------------------

  float number,square_root;
    printf("Enter any no.");
    scanf("%f",&number);
    square_root = sqrt(number);
    printf("Square root = %f",square_root);

  //-----------------------------------------------------------------

int angle1, angle2, angle3;
printf("Enter angle 1 :");
scanf("%d", &angle1);
printf("Enter angle 2 :");
scanf("%d", &angle2);
angle3 = (180 - angle1) - angle2;
printf("Third angle is : %d", angle3);
  //---------------------------------------------------------------------

int base,height,area;
printf("Enter base length :");
scanf("%d",&base);
 printf("Enter height :");
scanf("%d",&height);
area= (base *height)/2;
printf("Area of triangle = %d",area);

  //-------------------------------------------------------------------

float side,area;
printf("Enter side :");
scanf("%f",&side);
area = (1.73*side*side)/4;
printf("Area of Equilateral triangle : %f",area);
  //--------------------------------------------------------------------

  int science,maths,english,hindi,sst,total,average,percentage;
  printf("Enter marks of science :");
  scanf("%d",&science);
   printf("Enter marks of maths :");
  scanf("%d",&maths);
   printf("Enter marks of english :");
  scanf("%d",&english);
   printf("Enter marks of hindi :");
  scanf("%d",&hindi);
   printf("Enter marks of sst :");
  scanf("%d",&sst);
  total = science+maths+english+hindi+sst;
  average= (science+maths+english+hindi+sst)/5;
  percentage=(science+maths+english+hindi+sst)/5;
  printf("Total marks : %d\n",total);
  printf("Average : %d\n",average);
  printf("Percentage : %d",percentage);printf("%%");

  //------------------------------------------------------------------------

int p,r,t,SI;
  printf("Enter principle amount :");
  scanf("%d",&p);
   printf("Enter Rate of intrest :");
  scanf("%d",&r);
   printf("Enter Time :");
  scanf("%d",&t);
  SI= (p*r*t)/100;
  printf("Simple intrest : %d",SI);

  //-----------------------------------------------------------------------

  int p,r,t,n,CI,a,b;

  printf("Enter principle amount :");
  scanf("%d",&p);
   printf("Enter Rate of intrest :");
  scanf("%d",&r);
   printf("Enter Time :");
   scanf("%d",&t);
   printf("No. of times intrest is compounded per year :" );
  scanf("%d",&n);
 a=(1+(r/n));
   b=n*t;
  CI=pow(a,b)*p;
  printf("Compound Intrest : %d",CI);

  return 0;
}
       */
//----------------------------------------------------------------------------

// int main(void) {

/* write a c program to check given no. is even or odd
without airthmatic */

/* int a;
 printf("Enter the value : ");
 scanf("%d",&a);
 (a&1) && printf("odd");
 (a&1) || printf("Even"); */

//---------------------------------------------------

// write a c program to multiply a no. with 16 without using + or *

/*int a, b;
printf("enter the no. :");
scanf("%d", &a);
b = (a << 4);
printf("your answer is : %d", b);*/

// ----------------------------------------------------

/* Write a C program to multiply a no. with 65 without using + or * */

/* int a, b;
printf("enter the no. :");
scanf("%d", &a);
b = (a << 6) + a;
printf("Answer is : %d", b);
return 0;
} */

// -----------------------------------------------------

// write a c program to check given no. is perfect or not.

/*int a;
long long int fact =1;
printf(" Enter the no.:");
scanf("%d", &a);
  if(a==0)
    printf("factorial =1");
  else{
for(int i=1;i<=a;i++)
{
  fact*=i;
  }
  printf("factorial=%lld",fact);
    }
return 0;
}*/

//----------------------------------------------------------------------------
/*
int main(void) {
int a,b;
printf("enter your marks:");
scanf("%d",&a);
if(a>=30&&a<=100)
{printf("pass");
}
else if(a>=0&&a<=30) {printf("fail");
}
else {printf("beta masti nahi");}

//---------------------------------------------------------------------

int marks;
printf("enter your marks:");
scanf("%d",&marks);
if(marks>=0&&marks<30){
  printf("Grade D"); }
else if(marks>=30&&marks<70)
{printf("Grade C");}
else if(marks>=70&&marks<90)
{printf("Grade B");}
else if (marks>=90&&marks<=100)
{printf("Grade A");}
else
  printf("Beta masti nahi");


//--------------------------------------------------------------------


char ch;
printf("enter the letter:");
scanf("%c",&ch);
if(ch>='A'&& ch<='Z'){
  printf("Uppercase");
  }
else if(ch>='a'&&ch<='z')
{printf("Lowercase");}
else
  printf("Bhai alphabet daal le ");


//------------------------------------------------------------

int n;
printf("Enter no. : ");
scanf("%d",&n);
int sum=0;
for(int i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum is : %d",sum);

//------------------------------------------------------------------

int n,r;
printf("Enter no. :");
scanf("%d",&n);
for(int i=1;i<=10;i++){
r=n*i;
printf("%d\n",r);
}

//-------------------------------------------------------------------

int n;
do{
printf("Enter no.");
scanf("%d",&n);
if(n%2!=0){break;}
}
while (1);
printf("Bas bhai bas");
//-------------------------------------------------------------------

int n;
do {
printf("Enter no. :");
scanf("%d",&n);
if (n%7==0){break;}
}
while (1);
printf("End");
//---------------------------------------------------------------------

for (int i = 1; i<=10;i++){
if (i==6){continue;}

printf("%d\n",i);

}
//-------------------------------------------------------------------

for(int i=5;i<=50;i++){
if (i%2==0){continue;}
printf("%d\n",i);
}
//-------------------------------------------------------------------

int n;
printf("Enter the no. : ");
scanf("%d", &n);
int r = 1;
for (int i = 1; i <= n; i++) {
r = r * i;
}
printf("Factorial of %d is %d", n, r);
//--------------------------------------------------------------------

int a=10,b=11,c=12,d=13;

a=b++;
b=a++;
c=++a;
a=++b;
d=++b;
b=b++;
a=++a;
c=a++;
printf("%d %d %d %d ",a,b,c,d);
//---------------------------------------------------------------------

int a;
printf("Enter the no. : ");
scanf("%d",&a);
(a>0)&&printf("positive");
(a<0)&&printf("negative");
//-----------------------------------------------------------------------

int a;
printf("Enter the no. :");
scanf("%d",&a);
switch (a<0)
{
case 0 : printf("positive");
break;
default: printf("negative");
}

//---------------------------------------------------------------------

int a,b,c;
printf("a :");
scanf("%d",&a);
printf("b :");          // Doubt
scanf("%d",&b);
c=~a;
printf("%d",c);

//------------------------------------------------------------------------


int a,b,c;
printf("Enter any no.");
scanf("%d",&a);
printf("Enter any no.");
scanf("%d",&b);
printf("Enter any no.");
scanf("%d",&c);

a<b?b>c?printf("%d is greatest",b):printf("%d is greatest",c):a>c?printf("%d is
greatest",a):printf("%d is greatest",c);


//------------------------------------------------------------------------
                     // Leap year
   int year;
   scanf("%d",&year);
   if (year%4==0 && year%100!=0){
     printf("Leap Year");}
     else if(year%400==0){
     printf("Leap Year");
   }
   else printf("Not Leap year");

//-----------------------------------------------------------------------

                 Nested switch
  int a;
   scanf("%d",&a);
   switch(a>=0){
     case 1 :
     switch(a==0){
       case 1 : printf("Zero");break;
       case 0 : printf("Positive");
     }break;
     case 0 : printf("Negative");break;
   }
                  */

// ------------------------------------------------------------------
/*
int main (){
        int a,b,c;
        scanf("%d",&a);
    scanf("%d",&b);
    if (a==b){
        printf("Enter valid range");
        }
    for (int i=a+1;i<b;i++){
        if(i%2==0){
                printf("%d\n",i);
                }
                else continue;
        }

return 0;
}  */

// -----------------------------------------------------

/*
int main (){
        int a=0,b=1,c,n;
        c=a+b;
        scanf("%d",&n);
        printf("%d %d ",a,b);

        for(int i=3;i<=n;++i){

                a=b;
                b=c;
                c=a+b;
                printf("%d ",c);
        }
        return 0;
}  */

// -----------------------------------------------------

/*
int main(){
        int number,reverse,r,a;
        scanf("%d",&a);
        number=a;
        reverse=0;
        while (a>0){
        r=a%10;
        reverse=r+(reverse*10);
        a=a/10;
}
if (number==reverse){
        printf("No. is palendrom");}
        else {printf("It's Not");}

        return 0;
}

 // -----------------------------------------------------

int main(){
        int a,b;
        scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i>=1;i--){
        if (a%i==0 && b%i==0){
                printf("HCF = %d",i);
                break;
                }
        }
  return 0;
}

   // -----------------------------------------------------

int main(){
        int a,b;
        scanf("%d",&a);
        for(int i=2;i<=a/2;i++){
                b++;
        }
        if (b==0){printf("Prime");}
        else printf("Not prime");

return 0;
}

   // -----------------------------------------------------

int main (){
        int a,b;
        scanf("%d",&a);
while(a!=0){
                a=a/10;
                b++;
        }
        printf("%d",b);
        return 0;
}


   // -----------------------------------------------------

int main(){
        int a,c=0,t1,t2,sum=0;
        scanf("%d",&a);
        t1=a;
    t2=a;
    while (a>0){
        c++;
        a=a/10;
        }
while(t1>0){
        int r=t1%10;
        int pow=1;
        for(int i=1;i<=c;i++)
        pow=pow*r;
        sum=sum+pow;
        t1=t1/10;
}
if(sum==t2)
printf("armstrong");
else printf("not");
return 0;
}

 // -----------------------------------------------------------

int main (){
        int a,n;
        printf("Enter the no. :");
        scanf("%d",&a);
        for(int i=a;i>0;i--){
                a=a*i;
        }printf("factorial = %d",a);
        return 0;
}
     */

// -----------------------------------------------------------

/*
void printhello(){
printf("Hello\n");
}
void Bye(){
   printf("Bye\n");
}
int main(){
   printhello();
   Bye();
   Bye();
   return 0;
}
   */

// -----------------------------------------------------------

/*

void N(){
        printf("Namaste");
}
void F(){
        printf("Bonjour");
}
int main(){
         char ch,i,f;
        printf("Enter nationality (i = Indian, f = French): ");
        scanf("%c",&ch);
                if (ch=='i'){
                N();
        }
        else if (ch=='f') {
                printf("Bonjour");
        }
        else {
                printf("kahi aur ka");
        }
        return 0 ;
}
     */