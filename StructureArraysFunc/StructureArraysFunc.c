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

void PopulatePointArray( struct MULTI_POINTS *points);

int main()
{
    struct MULTI_POINTS Points;
    int i;
   
    // Populate the contents of the array inside the function   
    PopulatePointArray( &Points );
    
    // Print all the point data
    for (i = 0; i < SIZE; i++)
	    printf( "Point %d: x = %f, y = %f\n", i, Points.point[i].x, Points.point[i].y);
}

// Function to populate the point array of the MULTI_POINTS structure
void PopulatePointArray( struct MULTI_POINTS *points)
{
    int i;
    // Loop through array and populate point data
    // Use arrow notation because a pointer to the points structure
    // has been passed to the function
    for (i = 0; i < SIZE; i++)
    {
            points->point[i].x = i;
            points->point[i].y = i;
    }
}
