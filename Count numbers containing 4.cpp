int countNumber(int n)
{
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    int num = i;
    while(num > 0){
      if(num % 10 == 4){
        cnt++;
        break;
      }
      num = num / 10;
    }
  }
  return cnt;
}
