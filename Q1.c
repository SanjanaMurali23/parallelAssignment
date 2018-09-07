#include<mpi.h>
#include<stdio.h>

void main(int argc,char** argv)
{
	int r, s, nl;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &r);
	MPI_Comm_size(MPI_COMM_WORLD, &s);
	printf("I'm process %d out of %d processes\n",r, s);
	MPI_Finalize();
	
}
