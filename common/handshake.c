#include "handshake.h"

void master_handshake(void)
{
    hso_clear();
    while (hsi_get());
    hso_set();
    while (!hsi_get());
}

void slave_handshake(void)
{
    while(hso_get());
    hsi_clear();
    while (!hso_get());
    hsi_set();
}
