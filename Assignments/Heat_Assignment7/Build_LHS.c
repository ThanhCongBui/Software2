#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cblas.h>
#include "Build_LHS.h"
#include "Conductivity.h"

double **Build_LHS( int nodes_per_side, double *x, double *y, int **index, int problem_index){

  // Create values to index each finite difference step
  int top, right, bottom, left;

  // Create values for 
  int kT, kR, kB, kL;


  // Create K matrix that will be later multiplied by d temperature values or something like that

  int n = nodes_per_side; // nodes_per_side was too many letters to type
  
  double **K = (double**) calloc(n*n, sizeof(double));

  K[0] = (double*) calloc(n*n*n*n, sizeof(double));

  for (int ii = 1; ii < (n*n); ii++){

    K[ii] = K[ii-1] + n*n;

  }

  double h = 1/(n - 1); // Create the spacing value = 1/cells per side, where cells_per = nodes-1


  // Start iterating to populate the K matrix
  
  
  return KD;

}
