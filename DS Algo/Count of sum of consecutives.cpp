long long int getCount(long long int N)
    {
        long long int count = 0;
        for (long long int A = 1; A * (A + 1) < 2 * N; A++) {
            double a = 1.0*(2*N - A*A - A)/(2*(A+1));
            if (a - (int)a == 0.0)
                count++;
        }
        return count;
        // code here
    }
