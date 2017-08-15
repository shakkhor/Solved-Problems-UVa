
#include <stdio.h>

int main()
{
    int M, N;
    double first, cost;
    while (scanf("%d%lf%lf%d", &M, &first, &cost, &N) && M >= 0)
    {
        double deps[999] = {};
        while (N--)
        {
            int startM;
            scanf("%d", &startM);
            scanf("%lf", &deps[startM]);
        }
        double value = first + cost, owes = cost, earn = cost / M;
        int i;
        for (i = 0; i <= M; i++)
        {
            if (!deps[i])
            {
                deps[i] = deps[i - 1];
            }
            value = value * (1 - deps[i]);
            if (value >= owes)
            {
                printf("%d %s%s\n", i, "month", i != 1 ? "s" : "");
                break;
            }
            owes -= earn;
        }
    }
    return 0;
}
