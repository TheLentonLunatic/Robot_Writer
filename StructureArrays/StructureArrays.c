#include <stdio.h>

# define SIZE 10

// Declare structure to contain a single x,y coordinate
struct POINT
{
    float x,y;
};

// Declare structure to contain a name and array points
struct MULTI_POINTS
{
    char name[20];
    struct POINT point[SIZE];
};

int main()
{
   struct MULTI_POINTS Points;
   int i;

   // Loop to populate each point in the structure point array
   for (i = 0; i < SIZE; i++)
   {
        Points.point[i].x = i;
        Points.point[i].y = i;
   }

   // Display contents of point array
   for (i = 0; i < SIZE; i++)
	printf( "Point %d: x = %f, y = %f\n", i, Points.point[i].x, Points.point[i].y);
}
