#include<windows.h>
main ()
{
    int s,m,h;
    for(h=0; h<60; h++)
    {
        for(m=0; m<60; m++)
        {
            for(s=0; s<60; s++){
                printf("%02d\a:%02d:%02d",h,m,s);
            Sleep(1000);
            printf("\b\b\b\b\b\b\b\b");
            }

        }
    }
}
