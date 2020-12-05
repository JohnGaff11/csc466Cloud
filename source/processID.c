#include <stdio.h>
#include <mpi.h>

 main(int argc, char **argv)
   {
      int i, num_procs, my_id;

      i = MPI_Init(&argc, &argv);

     

      i = MPI_Comm_rank(MPI_COMM_WORLD, &my_id);
      i = MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

      printf("Hello world! I'm process %i out of %i processes\n", 
         my_id, num_procs);

      i = MPI_Finalize();
   }
