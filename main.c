#include <windows.h>

int WINAPI
mainCRTStartup(void)
{
    char msg[] = "Hello, world!\n";
    HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);

    WriteFile(stdout, msg, sizeof(msg), (DWORD[]){0}, NULL);
    ExitProcess(0);
    return 0;
}

