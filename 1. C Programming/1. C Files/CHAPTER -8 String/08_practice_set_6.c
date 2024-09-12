// Q.Find the salted form of a password entered by the user if the salt is "123" & added in the end.
#include <stdio.h>
#include <string.h>
void NewPassword(char *password);
int main()
{
    char password[100];
    printf("Enter your password ");
    scanf("%s", password);
    NewPassword(password);
    return 0;
}

void NewPassword(char *password)
{
    char salt[] = "123";
    strcat(password, salt);
    printf("Your new password is %s\n", password);
}