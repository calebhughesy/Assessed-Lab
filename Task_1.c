#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
  float image[5][5][3];
  int x = 0, y = 0;
  float r, g, b, rTotal, gTotal, bTotal;
  
   //Don’t change this srand() line!
  srand(0);   
      
  for(y = 0; y < 2; y++)
  {
    for(x = 0; x < 5; x++) 
    {
    
      image[x][y][0] = (float)rand()/(float)INT_MAX;
      image[x][y][1] = (float)rand()/(float)INT_MAX;
      image[x][y][2] = (float)rand()/(float)INT_MAX;
      
      r = image[x][y][0];
      g = image[x][y][1];
      b = image[x][y][2];
      
      rTotal = (r + g + b)/3.0;
      gTotal = (r + g + b)/3.0;
      bTotal = (r + g + b)/3.0;
      
      r = rTotal;
      g = gTotal;
      b = bTotal;
      
      printf("%d %d: %f %f %f\n", x, y, r, g, b);
    }
 }
    return 0;
}


