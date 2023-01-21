// Pointer to Structure
#include <stdio.h>
struct collegeDetails
{
    char collegeName[20];
    int collegeID;
};
int main()
{
    struct collegeDetails e1 = {"SRM", 2034};
    struct collegeDetails *ptr = &e1;
    printf("College Name : %s\n",(*ptr).collegeName);
    printf("College ID : %d\n",(*ptr).collegeID);
    return 0;
}