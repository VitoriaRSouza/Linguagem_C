#include<stdio.h>  // biblioteca
 int x,y,z
 int main{
 x=10;
 y=x;
 z=x+1;
 x=-x;
 y=y+1;
 x=x+y-(z-1);
 
 printf ("x=%d, y=%d, z=%d",x,y,z);
}
return 0;  //feedback
}  // fim
