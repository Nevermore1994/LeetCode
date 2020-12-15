    bool validMountainArray(vector<int>& A) {
        if(A.empty())
            return false;
        int size = A.size();
        for(int i = 1; i <  size - 1; i++)
        {
            if(A[i - 1] < A[i] && A[i] > A[i+1])
            {
                int left = i - 1;
                while(left >= 0 && A[left + 1] > A[left])
                {
                    left --;
                }
                int right = i + 1;
                while(right < size && A[right - 1] > A[right)
                {
                    right++;
                }
                if((right - left - 1) == size)
                    return true;
            }
        }
        return false;
    }