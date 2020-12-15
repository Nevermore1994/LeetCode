    vector<int> sortArrayByParityII(vector<int>& A) {
        if(A.empty())
            return A;
        int j = 1;
        int size = A.size();
        for(int i = 0; i < size; i += 2){
            if(A[i] % 2)
            {
                while(j < size && A[j] % 2)
                    j += 2;
                if(j >= size)
                    break;
                swap(A[j], A[i]);
            }
        }
        return A;
    }