#include <stdio.h>

main()

{
    int n, i, j, avgw = 0;
    float avgt = 0, temp;
    int burst[10], wait[10], process[10];

    printf("\nProcess Scheduling(SJFS) \n");

    printf("\nEnter the number of process : ");

    scanf("%d", &n);

    printf("Enter the Burst time\n");

    for (i = 0; i < n; i++)

    {
        printf("Burst time P %d : ", i + 1);
        scanf("%d", &burst[i]);
        process[i] = i;

        printf("\n");
    }

    for (i = 0; i < n; i++)

    {
        for (j = i; j < n; j++)

        {
            if (burst[i] > burst[j])

            {
                temp = burst[i];

                burst[i] = burst[j];

                burst[j] = temp;

                temp = process[i];

                process[i] = process[j];

                process[j] = temp;
            }
        }
    }
}
