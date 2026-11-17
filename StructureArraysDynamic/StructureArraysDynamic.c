#include <stdio.h>
#include <stdlib.h>

// Declare structure to contain a single x,y coordinate
struct POINT
{
    float x,y;
};

// Declare structure to contain a name and a pointer to a POINT structure
struct MULTI_POINTS
{
    char name[20];
    struct POINT *point;
};

int main()
{
   struct MULTI_POINTS Points;
   int i;
   int numPoints = 0;

   printf( "Please input number of points: ");
   scanf("%d", &numPoints);
   // Allocate memory for an array of POINT structures of the size input by the user
   Points.point = calloc( numPoints, sizeof(struct POINT) );
   if (Points.point == NULL)
   {
        printf( "Couldn't allocate memory, exiting program");
        exit(0);
   }

   // Loop through array populating points
   for (i = 0; i < numPoints; i++)
   {
        Points.point[i].x = i;
        Points.point[i].y = i;
   }

   // Display the point data
   for (i = 0; i < numPoints; i++)
	    printf( "Point %d: x = %f, y = %f\n", i, Points.point[i].x, Points.point[i].y);

    // Free the memory before exit
    free( Points.point );
}
