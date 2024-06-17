#include<stdio.h>
#include<stdlib.h>
main ( )
{
 int i, j, k, m, n, p, q, a[10][10], b[10][10], c[10][10];
 printf ("\nEnter the order of matrix A\n");
 scanf ("%d%d", &m, &n);
 printf ("\nEnter the order of matrix B\n");
 scanf ("%d%d", &p, &q);
 if (n != p)
 {
  printf ("matrix multiplication is not possible\n");
  exit (0);
}
 printf ("\nEnter the elements of A\n ");
 for (i = 0; i < m; i++)
 {
  for (j = 0; j < n; j++)
{
 scanf ("%d", &a[i][j]); // reading values for matrix A
}
}
 printf ("\nEnter the elements of B\n ");
 for (i = 0; i < p; i++)
 {
  for (j = 0; j < q; j++)
 {
  scanf ("%d", &b[i][j]); //reading values for matrix B
}
}
 for (i = 0; i < m; i++)
 {
  for (j = 0; j < q; j++)
  {
   c[i][j] = 0;
   for (k = 0; k < n; k++)
   {
    c[i][j] = c[i][j] + a[i][k] * b[k][j]; 
}
}
}
printf ("Matrix A\n");
for (i = 0; i < m; i++)
{
 for (j = 0; j < n; j++)
{ 
 printf ("%d\t", a[i][j]); //printing matrix A
}
 printf ("\n");
}
printf ("Matrix B\n");
for (i = 0; i < p; i++)
{
 for (j = 0; j < q; j++)
 {
  printf ("%d\t", b[i][j]); //printing matrix B
}
 printf ("\n");
}
 printf ("Resultant matrix\n");
 for (i = 0; i < m; i++)
 {
  for (j = 0; j < q; j++)
  {
   printf ("%d\t", c[i][j]); //printing matrix C
}
printf ("\n");
}
} 
