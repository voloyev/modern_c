#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
        bool statement = true;
        size_t i, j;
        i = 33;

        if (statement) {
                j = i - 25;
        } else {
                j = i;
        }

        printf("%zu", j);
        return 0;
}
