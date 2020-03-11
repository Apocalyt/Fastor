#include "Fastor.h"

using namespace Fastor;

#define Tol 1e-12

template<typename T>
void run_mixed_views() {

    // Constructing other order tensors from 2D views
    // Row-wise operations
    {
        Tensor<T,2,3> a; a.iota();
        Tensor<T,1,3> b1 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 12) < Tol);
        Tensor<T,3> b2 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 12) < Tol);
        Tensor<T,1,1,3> b3 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 12) < Tol);
        Tensor<T,1,1,3,1> b4 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 12) < Tol);
        Tensor<T,1,1,3,1,1> b5 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 12) < Tol);
        // Tensor<T,3,1> b6 = a(1,all);   // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 12) < Tol);
    }

    {
        Tensor<T,2,3> a; a.iota();
        Tensor<T,1,3> b1 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 12) < Tol);
        Tensor<T,3> b2 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 12) < Tol);
        Tensor<T,1,1,3> b3 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 12) < Tol);
        Tensor<T,1,1,3,1> b4 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 12) < Tol);
        Tensor<T,1,1,3,1,1> b5 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 12) < Tol);
        // Tensor<T,3,1> b6 = 1*a(1,all);  // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 12) < Tol);
    }

    {
        Tensor<T,2,4> a; a.iota();
        Tensor<T,1,4> b1 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 22) < Tol);
        Tensor<T,4> b2 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 22) < Tol);
        Tensor<T,1,1,4> b3 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 22) < Tol);
        Tensor<T,1,1,4,1> b4 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 22) < Tol);
        Tensor<T,1,1,4,1,1> b5 = a(1,all);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 22) < Tol);
        // Tensor<T,4,1> b6 = a(1,all); // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 22) < Tol);
    }

    {
        Tensor<T,2,4> a; a.iota();
        Tensor<T,1,4> b1 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 22) < Tol);
        Tensor<T,4> b2 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 22) < Tol);
        Tensor<T,1,1,4> b3 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 22) < Tol);
        Tensor<T,1,1,4,1> b4 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 22) < Tol);
        Tensor<T,1,1,4,1,1> b5 = 1*a(1,all);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 22) < Tol);
        // Tensor<T,4,1> b6 = 1*a(1,all); // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 12) < Tol);
    }

    // Column-wise operations
    {
        Tensor<T,2,3> a; a.iota();
        Tensor<T,2,1> b1 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 5) < Tol);
        Tensor<T,2> b2 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 5) < Tol);
        Tensor<T,1,1,2> b3 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 5) < Tol);
        Tensor<T,1,1,2,1> b4 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 5) < Tol);
        Tensor<T,1,1,2,1,1> b5 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 5) < Tol);
        // Tensor<T,1,2> b6 = a(all,1);   // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 5) < Tol);
    }

    {
        Tensor<T,2,3> a; a.iota();
        Tensor<T,2,1> b1 = a(all,1)-0;
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 5) < Tol);
        Tensor<T,2> b2 = a(all,1)-0;
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 5) < Tol);
        Tensor<T,1,1,2> b3 = a(all,1)-0;
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 5) < Tol);
        Tensor<T,1,1,2,1> b4 = a(all,1)-0;
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 5) < Tol);
        Tensor<T,1,1,2,1,1> b5 = a(all,1)-0;
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 5) < Tol);
        // Tensor<T,1,2> b6 = a(all,1);   // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 5) < Tol);
    }

    {
        Tensor<T,4,3> a; a.iota();
        Tensor<T,4,1> b1 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 22) < Tol);
        Tensor<T,4> b2 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 22) < Tol);
        Tensor<T,1,1,4> b3 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 22) < Tol);
        Tensor<T,1,1,4,1> b4 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 22) < Tol);
        Tensor<T,1,1,4,1,1> b5 = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 22) < Tol);
        // Tensor<T,4,1> b6 = a(all,1);   // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 22) < Tol);
    }

    {
        Tensor<T,4,3> a; a.iota();
        Tensor<T,4,1> b1 = a(all,1)/1;
        FASTOR_EXIT_ASSERT(abs(b1.sum() - 22) < Tol);
        Tensor<T,4> b2 = a(all,1)/1;
        FASTOR_EXIT_ASSERT(abs(b2.sum() - 22) < Tol);
        Tensor<T,1,1,4> b3 = a(all,1)/1;
        FASTOR_EXIT_ASSERT(abs(b3.sum() - 22) < Tol);
        Tensor<T,1,1,4,1> b4 = a(all,1)/1;
        FASTOR_EXIT_ASSERT(abs(b4.sum() - 22) < Tol);
        Tensor<T,1,1,4,1,1> b5 = a(all,1)/1;
        FASTOR_EXIT_ASSERT(abs(b5.sum() - 22) < Tol);
        // Tensor<T,4,1> b6 = a(all,1)/1;   // this is disallowed
        // FASTOR_EXIT_ASSERT(abs(b6.sum() - 22) < Tol);
    }

    // Assigning 2D view to nD view
    {
        Tensor<T,4,3> a; a.iota();
        Tensor<T,4,4,3> b; b.zeros();
        b(all,0,1) = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 22) < Tol);
        b.zeros();
        b(0,all,1) = a(all,1);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 22) < Tol);
        b.zeros();
        b(0,0,all) = a(0,all);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 3) < Tol);
    }

    // Assigning nD view to 2D view
    {
        Tensor<T,4,4,3> a; a.iota();
        Tensor<T,4,3> b; b.zeros();
        b(all,seq(0,2)) = a(2,all,seq(0,2));
        FASTOR_EXIT_ASSERT(abs(b.sum() - 232) < Tol);
        b.zeros();
        b(all,seq(0,2)) = a(all,seq(0,2),1);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 164) < Tol);
        b.zeros();
        b(0,all) = a(1,1,all);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 48) < Tol);
    }

    // Assigning fixed 2D view to nD view
    {
        Tensor<T,4,3> a; a.iota();
        Tensor<T,4,4,3> b; b.zeros();
        b(fall,0,1) = a(fall,fseq<1,2>{});
        FASTOR_EXIT_ASSERT(abs(b.sum() - 22) < Tol);
        b.zeros();
        b(0,fall,1) = a(fall,fseq<1,2>{});
        FASTOR_EXIT_ASSERT(abs(b.sum() - 22) < Tol);
        b.zeros();
        b(0,0,fall) = a(fseq<0,1>{},fall);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 3) < Tol);
    }

    // Assigning nD view to fixed 2D view
    {
        Tensor<T,4,4,3> a; a.iota();
        Tensor<T,4,3> b; b.zeros();
        b(fall,fseq<0,2>{}) = a(2,all,seq(0,2));
        FASTOR_EXIT_ASSERT(abs(b.sum() - 232) < Tol);
        b.zeros();
        b(fall,fseq<0,2>{}) = a(all,seq(0,2),1);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 164) < Tol);
        b.zeros();
        b(fseq<0,1>{},fall) = a(1,1,all);
        FASTOR_EXIT_ASSERT(abs(b.sum() - 48) < Tol);
    }

    print(FGRN(BOLD("All tests passed successfully")));
}


int main() {

    print(FBLU(BOLD("Testing mixed views - single precision")));
    run_mixed_views<float>();
    print(FBLU(BOLD("Testing mixed views - double precision")));
    run_mixed_views<double>();
    print(FBLU(BOLD("Testing mixed views - int 32")));
    run_mixed_views<int>();
    print(FBLU(BOLD("Testing mixed views - int 64")));
    run_mixed_views<Int64>();

    return 0;
}