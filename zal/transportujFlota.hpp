#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int ltowarow = 0;
    unsigned int lzaglowcow = 0;

    while (towar > ltowarow){
      Stocznia stocznia1{};
      Statek* statek1 = stocznia1();
      ltowarow += statek1->transportuj();
      Zaglowiec* wsk_zagl = dynamic_cast< Zaglowiec* >(statek1);
      if (wsk_zagl != 0)
      lzaglowcow ++;
      delete statek1;
    }
    return lzaglowcow;
}