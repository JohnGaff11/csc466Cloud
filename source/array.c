#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv)
{
  int size;
  int my_rank; 
  int A[10] = {12,3,6,7,91,34,21,5,22,20}
  int i;
  int max = 0;
  
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
  
  for(i = 0; i < 10; i++)
  {
    if(i % size == my_rank)
    {
      if(A[i] > max)
      {
        printf("Process %d has the max of %d at index %d \n", my_rank, A[i], i);
      }
    }
  }
  
  MPI_Finalize();
}
