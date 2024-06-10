void main(){
  // Build heap

  int arr[] = {-1, 54, 53, 55, 52. 50};
  int n = 5;
  
  for(int i = n/2; i > 0; i--){
    heapify(arr, n, i);
  }

  // heapSort
  heapSort(arr, n);
}
void heapSort(int arr[], int n){
  int size = n;

  while(size > 1){
    //step1 :swap
    swap(arr[size], arr[1]);
    size--;

    //step 2 
    heapify(arr, size, 1);
  }
}
