#include <stdio.h>

// enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat};
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    enum Day today = Sun;

    printf("%d", today);
    
    return 0;
}
