void swapping(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        int swap=0;
        bool swapped=false;
        for(int i=0;i<n-1;i++)
        {
            swapped=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(roll[j]>roll[j+1])
                {
                    swap++;
                    swapped=true;
                    swapping(&roll[j],&roll[j+1]);
                }
            }
            if(!swapped)
            {
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            //cout<<roll[i]<<" ";
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=marks[i];
        }
        double ans=(sum-swap)/n;
        if(ans>=avg)
            return 1;
        return 0;
        // your code here
    }
