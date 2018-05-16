#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <complex>
#include <rarray>
#include <mpi.h>

int main(int argc, char* argv[]) {
    double fmin        = 311.25e6;
    double fban        = 16e6;
    double fsample     = 2*fban;
    double p_psr       = 1.607e-3;
    double pulse_width = p_psr/200;

    /*
    // Parallel block
    int rank, size;
    int err;

    ierr = MPI_Init(&argc, &argv);

    ierr = MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    ierr = MPI_Comm_size(MPI_COMM_WORLD, &size);
    */
}
