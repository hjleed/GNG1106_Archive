#include <stdio.h> 
int main() 
{
int x=3, y [3] ={4, 5, 6};
int *ptr; 
ptr=&x; 
printf("Line (7) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
*ptr=20; 
printf("Line (9) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
ptr=y; 
printf("Line (11) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
*ptr=-1; 
printf("Line (13) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
ptr[1]=-2 ; 
printf("Line (15) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
*(ptr+2)=-3; 
printf("Line (17) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
ptr++;
printf("Line (19) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
ptr[0]=ptr[0]-10; 
printf("Line (21) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
*(ptr+1)=ptr[0]*ptr[1] ; 
printf("Line (23) :  x=%d y[0]=%d y[1]=%d y[2]=%d *ptr =%d  ptr =%ld \n", x, y[0], y[1], y[2], *ptr, ptr);
return 0; 
}

/*---- Output ----
Line (7) :  x=3 y[0]=4 y[1]=5 y[2]=6 *ptr =3  ptr =140733630446852 
Line (9) :  x=20 y[0]=4 y[1]=5 y[2]=6 *ptr =20  ptr =140733630446852 
Line (11) :  x=20 y[0]=4 y[1]=5 y[2]=6 *ptr =4  ptr =140733630446840 
Line (13) :  x=20 y[0]=-1 y[1]=5 y[2]=6 *ptr =-1  ptr =140733630446840 
Line (15) :  x=20 y[0]=-1 y[1]=-2 y[2]=6 *ptr =-1  ptr =140733630446840 
Line (17) :  x=20 y[0]=-1 y[1]=-2 y[2]=-3 *ptr =-1  ptr =140733630446840 
Line (19) :  x=20 y[0]=-1 y[1]=-2 y[2]=-3 *ptr =-2  ptr =140733630446844 
Line (21) :  x=20 y[0]=-1 y[1]=-12 y[2]=-3 *ptr =-12  ptr =140733630446844 
Line (23) :  x=20 y[0]=-1 y[1]=-12 y[2]=36 *ptr =-12  ptr =140733630446844

*/