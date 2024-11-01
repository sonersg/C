// #include <stdio.h>

// typedef char user[25];

// int main()
// {
//     user user1 = "Soner";

// }

/* **************  USAGE 2 *********************/ 

// #include <stdio.h>

// struct User
// {
//     char name[25];
//     char password[12];
//     int id;
// };

// int main()
// {
//     struct User user1 = {"Soner", "password3232", 1};
//     struct User user2 = {"dskndkfs", "password3232", 2};
// }

/* **************  USAGE 3 *********************/ 

#include <stdio.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    User user1 = {"Soner", "password3232", 1};
    User user2 = {"dskndkfs", "password3232", 2};

    printf("%s", user1.name);
}
