#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;

    if (argv[1] == NULL)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1 ; argv[i] != NULL ; i++)
        {
            for (int j = 0 ; argv[i][j] != '\0' ; j++)
            {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    }
}