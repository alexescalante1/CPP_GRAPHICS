#include <iostream>
#include <fstream>
#include <graphics.h>
#include <windows.h>
using namespace std;

int main()
{
    initwindow(1280,720,"H",100,100);

    void *imagen;
    imagen = malloc(imagesize(1,1,1280,720));
    readimagefile("00.IMG1.jpg",1,1,1280,720);
    getimage(1,1,1280,720,imagen);
    while(1){
        int i=0;
        for(;i<720;i++){
            putimage(i,i,imagen,0);
        }
        for(;i>0;i--){
            putimage(i,i,imagen,0);
        }
    }
    return 0;
}
