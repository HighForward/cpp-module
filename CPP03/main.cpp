#include <iostream>

int strchr_int(int *bite, int nb)
{
    int size = sizeof(bite) / sizeof(bite[0]);
    for (int i = 0; i < size; i++)
    {
        if (nb == bite[i])
            return (1);
        i++;
    }
    return (0);
}

int main(void)
{
    int bite[] = {10, 30, 999, 69, 12, 456, 321, 777};
    int nb;

    while (1)
    {
        srand(time(NULL));
        nb = rand()  % 1000;
        if (strchr_int(bite, nb))
            continue;
        else
        {
            std::cout << nb << std::endl;
            break;
        }
    }
    return (0);
}