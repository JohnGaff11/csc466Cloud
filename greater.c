#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv)
{
  int my_rank;
  
  MPI_Init(&argc, &argv);
  
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  
  if(my_rank > 5)
  {
    printf("Process %d is greater than 5 \n", my_rank);
  }
  else
  {
    printf("Process %d is less than 5 \n", my_rank);
  }
  MPI.Finalize();
  
  
}
