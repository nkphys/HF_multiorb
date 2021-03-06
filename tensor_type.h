#include <vector>
#include <complex>
#include "mkl_spblas.h"
#include <mkl_types.h>
#include <mkl_cblas.h>
#include <mkl_lapacke.h>
using namespace std;
#ifndef sparsedefined
#define sparsedefined

//#define type_double double
#define type_double double

typedef vector< complex<double> >  Mat_1_Complex_doub;
typedef vector<Mat_1_Complex_doub> Mat_2_Complex_doub;
typedef vector<Mat_2_Complex_doub> Mat_3_Complex_doub;
typedef vector<Mat_3_Complex_doub> Mat_4_Complex_doub;




typedef vector<type_double> Mat_1_doub;
typedef vector<Mat_1_doub> Mat_2_doub;
typedef vector<Mat_2_doub> Mat_3_doub;
typedef vector<Mat_3_doub> Mat_4_doub;
typedef vector<Mat_4_doub> Mat_5_doub;
typedef vector<Mat_5_doub> Mat_6_doub;
typedef vector<Mat_6_doub> Mat_7_doub;

typedef vector<int> Mat_1_int;
typedef vector<Mat_1_int> Mat_2_int;
typedef vector<Mat_2_int> Mat_3_int;
typedef vector<Mat_3_int> Mat_4_int;

typedef vector<string> Mat_1_string;
typedef vector<Mat_1_string> Mat_2_string;
typedef vector<Mat_2_string> Mat_3_string;
typedef vector<Mat_3_string> Mat_4_string;



struct TUPLE_2_INT{
	
	
	int first;
	int second;
	
	
	
};
	


class INT_CSR_MAT{
	
	
	
	public:
	Mat_1_int value;
	Mat_1_int columns;
	Mat_1_int row_ind;
	
	
};


class DOUBLE_CSR_MAT{
	
	
	
	public:

	Mat_1_doub value;
	Mat_1_int columns;
	Mat_1_int row_ind;

	
	
};


class DOUBLE_COO_MAT{
	
	
	
	public:

	Mat_1_doub value;
	Mat_1_int columns;
	Mat_1_int rows;
	int nrows;
	int ncols;

	
	
};

class DOUBLE_MKL_CSR_MAT{
	
	
	
	public:

    type_double *value;
	MKL_INT *columns;
	MKL_INT *row_ind;
	int nrows;
	int ncols;
	
};


class DOUBLE_MKL_COO_MAT{
	
	
	
	public:

    type_double *value;
	MKL_INT *columns;
	MKL_INT *rows;
	int nrows;
	int ncols;
	
};


class COMPLEXDOUBLE_CSR_MAT{
	
	
	
    public:
    Mat_1_Complex_doub value;
    Mat_1_int columns;
    Mat_1_int row_ind;
	
	
};


struct Matrix_COO{
	
	    Mat_1_doub value;
		Mat_1_int  rows;
		Mat_1_int  columns;
		int nrows;
		int ncols;
	
	};



typedef vector<Matrix_COO> Hamiltonian_1_COO;
typedef vector<Hamiltonian_1_COO> Hamiltonian_2_COO;
typedef vector<Hamiltonian_2_COO> Hamiltonian_3_COO;
typedef vector<Hamiltonian_3_COO> Hamiltonian_4_COO;
typedef vector<Hamiltonian_4_COO> Hamiltonian_5_COO;
typedef vector<Hamiltonian_5_COO> Hamiltonian_6_COO;
typedef vector<Hamiltonian_6_COO> Hamiltonian_7_COO;
typedef vector<Hamiltonian_7_COO> Hamiltonian_8_COO;
typedef vector<Hamiltonian_8_COO> Hamiltonian_9_COO;


#endif

