#include<math.h>
#include<vector>
#include<string.h> 
#include <bits/stdc++.h>
using namespace std;
#define it long long int
#define loop(n) for(it i=0;i<n;i++)
#define all(V) V.begin(),V.end()
#define f for(auto &ele : V)

int main()       {
    int n;
    scanf("%d", &n);
    while(n-- > 0)  {
        int x,y,z;
        scanf("%d%d%d", &x, &y, &z);
        int grid[x][y][z];
        for(int a = 0; a < x; a++)
           for(int b = 0; b < y; b++)
              for(int c = 0; c < z; c++)
                 scanf("%d", &grid[a][b][c]);
        for(int a = 0; a < x; a++)	{
				for(int b = 0; b < y; b++)	{
					for(int c = 0; c < z; c++)	{
						int temp = grid[a][b][c];
						if(a > 0)	{
							temp -= grid[a-1][b][c];
							if(b > 0)	{
								temp += grid[a-1][b-1][c];
								if(c > 0)
									temp -= grid[a-1][b-1][c-1];
							}
							if(c > 0)
								temp += grid[a-1][b][c-1];
						}
						if(b > 0)	{
							temp -= grid[a][b-1][c];
							if(c > 0)
								temp += grid[a][b-1][c-1];
						}
						if(c > 0)
							temp -= grid[a][b][c-1];
						printf("%d", temp);
						if(c + 1 != z)
							printf("%c", ' ');
					}
					printf("\n");
				}
			}
    }
}
