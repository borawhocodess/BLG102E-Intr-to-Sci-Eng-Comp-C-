#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NODES 5
#define MAX_USER_ENTRY 50

void print_graph(int graph[NODES][NODES])
{
   	//complete the function, add your code here.
}

void update_node(int graph[NODES][NODES], char user_entry[MAX_USER_ENTRY])
{
	//complete the function, add your code here.
}

void calculate_centralities(int graph[NODES][NODES], double centralities[NODES])
{
   	//complete the function, add your code here.
}

double find_nodes_with_max_centrality(double centralities[NODES], int popular_nodes[NODES])
{
  	//complete the function, add your code here.
}


int main()
{
    int graph[NODES][NODES] = {
        {0, 0, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {1, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}
    };

    print_graph(graph);

    char c = 0;
    printf("Enter the command (x to exit): ");
    c = getchar();

    while (c != 'x') {
        if (c == 'u') {
            char user_entry[MAX_USER_ENTRY] = "";
            printf("Enter the node label and the new edge values: ");
            scanf("%s", user_entry);
            update_node(graph, user_entry);
            print_graph(graph);
        } else if (c == 'd') {
            double centralities[NODES] = { 0 };
            double max_centrality = -1.0;
            int popular_nodes[NODES] = { 0 };
            calculate_centralities(graph, centralities);

            max_centrality = find_nodes_with_max_centrality(centralities, popular_nodes);
            printf("Popular nodes with highest centrality %.2f are: ", max_centrality);
            for (int i = 0; i < NODES; i++) {
                if (popular_nodes[i] == 1) {
                    printf("%c ", i + 'A');
                }
            }
            printf("\n");
        }

        printf("Enter the command (x to exit): ");
        c = getchar();
    }
    return EXIT_SUCCESS;
}


