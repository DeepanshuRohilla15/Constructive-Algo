class heap
{
  public: 
    int arr[100];
    int size;

    heap(){
      arr[0] = -1;
      size = 0;
    }

    void insert(int val)
    {
      size = size + 1;
      int index = size;
      arr[size] = val;

      while(index > 1){
        int parent = index / 2;

        if(arr[parent] < arr[index]){
          swap(arr[parent], arr[index]);
          index = parent;
        }
        else 
        {
          return;
        }
      } 
    }
}

TC : O(logN)
