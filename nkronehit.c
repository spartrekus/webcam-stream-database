

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main( int argc, char *argv[])
{
    printf("-Kronehit Radio (online)-\n");
    ////////////////////////////////////////////////////////
    // mplayer -ao alsa:device=hw=1,0   -af volume=10.1:0  
    ////////////////////////////////////////////////////////
    if ( argc == 2)
    if ( strcmp( argv[1] , "hw1" ) ==  0 ) 
    {
       system( " mplayer -ao alsa:device=hw=1,0    -playlist  http://onair-ha1.krone.at/kronehit-hd.mp3.m3u  " );
       return 0;
    }

    system( " mplayer -playlist http://onair-ha1.krone.at/kronehit-hd.mp3.m3u  " );

    return 0;
}




