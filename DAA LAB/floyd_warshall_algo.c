// C Program for Floyd Warshall Algorithm
#include <stdio.h>
#define V 6
#define INF 99999
void printSolution(int dist[][V],int k);
void floydWarshall(int dist[][V])
{
	int i, j, k;	
	for (k = 0; k < V; k++)
	{
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < V; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
		printSolution(dist,k);
	}
}
void printSolution(int dist[][V],int k)
{
	printf("\nA%d\n",k+1);
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				printf("\tINF");
			else
				printf("\t%d", dist[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int graph[V][V] = {{0,50,45,10,INF,INF},
						{INF,0,10,15,INF,INF},
						{INF,INF,0,INF,35,INF},
						{12,INF,INF,0,15,INF},
						{INF,20,30,INF,0,INF},
						{INF,INF,INF,INF,3,0}};

	floydWarshall(graph);
	return 0;
}

