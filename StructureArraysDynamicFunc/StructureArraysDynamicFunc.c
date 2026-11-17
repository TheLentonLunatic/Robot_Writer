#include <stdio.h>
#include <stdlib.h>

// Declare structure to contain a single x,y coordinate
struct POINT
{
    float x,y;
};

// Declare structure to contain a name and pointer to POINT structure
struct MULTI_POINTS
{
    char name[20];
    struct POINT *point;
};

void PopulatePointArray( struct MULTI_POINTS *points, int numPoints);

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

   // Populate the contents of the array inside the function 
   PopulatePointArray( &Points, numPoints );
   
   // Print all the point data
   for (i = 0; i < numPoints; i++)
	    printf( "Point %d: x = %f, y = %f\n", i, Points.point[i].x, Points.point[i].y);

    // Free the memory before exit
    free( Points.point );
}

// Function to populate the point array of the MULTI_POINTS structure
void PopulatePointArray( struct MULTI_POINTS *points, int numPoints)
{
    int i;
    // Loop through array and populate point data
    // Use arrow notation because a pointer to the points structure
    // has been passed to the function
    for (i = 0; i < numPoints; i++)
    {
            points->point[i].x = i;
            points->point[i].y = i;
    }
}
