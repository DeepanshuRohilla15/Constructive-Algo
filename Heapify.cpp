void heapify(int arr[], int n, int i){
  int largest = i;
  int left = 2 * i;
  int right= 2 * i + 1;

  if(left  < n && arr[largest] < arr[left]){
    largest = left;
  }
  if(right < n && arr[largest] < arr[right]){
    largest = right;
  }

  if(largest != i){
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}

for(int i = n/2; i>0; i--){
    heapify(arr, n, i);
}
