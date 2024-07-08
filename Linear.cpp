int i,l;
        l=arr.size();

        for (i=0;i<l;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;