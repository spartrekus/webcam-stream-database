

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, char *argv[])
{

    printf("-France Info 128-\n");
    // mplayer -ao alsa:device=hw=1,0   -af volume=10.1:0  
    ////////////////////////////////////////////////////////
    if ( argc == 2)
    if ( strcmp( argv[1] , "hw1" ) ==  0 ) 
    {
       system( " mplayer -ao alsa:device=hw=1,0    -playlist http://www.listenlive.eu/fr_franceinfo128.m3u " );
       return 0;
    }


        system( " mplayer -playlist http://www.listenlive.eu/fr_franceinfo128.m3u " );
        return 0;




}

