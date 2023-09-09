#include <stdio.h>

#define MAX_ITEMS 100
#define MAX_CONTAINERS 100

typedef struct {
    int weight;
    int container;
} Item;

void containerLoading(int items[], int numItems, int containerCapacity) {
    int containers[MAX_CONTAINERS] = {0};
    Item loadedItems[MAX_ITEMS];

    for (int i = 0; i < numItems; i++) {
        int bestContainer = -1;
        int minRemainingCapacity = containerCapacity + 1;

        for (int j = 0; j < numItems; j++) {
            if (containers[j] + items[i] <= containerCapacity && containers[j] + items[i] < minRemainingCapacity) {
                bestContainer = j;
                minRemainingCapacity = containers[j] + items[i];
            }
        }

        if (bestContainer == -1) {
            printf("Item %d with weight %d cannot be loaded into any container.\n", i + 1, items[i]);
            return;
        }

        containers[bestContainer] += items[i];
        loadedItems[i].weight = items[i];
        loadedItems[i].container = bestContainer + 1;
    }

    printf("Items loaded into containers:\n");
    for (int i = 0; i < numItems; i++) {
        printf("Item %d with weight %d loaded into container %d\n", i + 1, loadedItems[i].weight, loadedItems[i].container);
    }
}

int main() {
    int numItems, containerCapacity;
    int items[MAX_ITEMS];

    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    printf("Enter the container capacity: ");
    scanf("%d", &containerCapacity);

    printf("Enter the weights of the items:\n");
    for (int i = 0; i < numItems; i++) {
        scanf("%d", &items[i]);
    }

    containerLoading(items, numItems, containerCapacity);

    return 0;
}
