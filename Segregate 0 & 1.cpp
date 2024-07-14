int one = 0;
        for(int i=0;i< arr.size();i++){
            if(arr[i] == 1){
                arr[i] = 0;
                one++;
            }
        }
        int j= arr.size() - 1; 
        while(one--){
            arr[j--] = 1;
        }