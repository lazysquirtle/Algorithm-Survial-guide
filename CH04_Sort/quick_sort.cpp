class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        return quick_sort(nums ,0 , nums.size()-1);
    }

    int partition(vector<int>& vec, int start, int finish){
        int pivot = vec[finish];
        int p = start;
        for(int i = start; i < finish; i++){
            if(vec[i] < pivot){
                int tmp = vec[i]; 
                vec[i] = vec[p];
                vec[p] = tmp;
                p++;
            }
        }  

        int tmp = pivot; 
        vec[finish] = vec[p];
        vec[p] = tmp;     
        return p;

    }

    vector<int> quick_sort(vector<int>& vec, int start, int finish){
        if(start < finish){
            int pivot = partition(vec, start, finish);
            quick_sort(vec, start, pivot-1);
            quick_sort(vec, pivot+1, finish);
        }
        return vec;
    }


};
