#pragma once
#include<iostream>
void toplama(double sayi1, double sayi2)
{
	{
		double toplam ;
		toplam = sayi1 + sayi2;
		std::cout << "=" << toplam << std::endl;
	}
}
void cikarma(double sayi1, double sayi2)
{
	{
		if (sayi1 > sayi2) 
		{
			double çýkan ;
			çýkan = sayi1 - sayi2;
			std::cout << "=" << çýkan << std::endl;
		}
		else if(sayi1 < sayi2)
		{
			double çýkan ;
			çýkan = sayi2 - sayi1;
			std::cout << "=" << çýkan << std::endl;
		}
		else
		{
			std::cout << "=0" << std::endl;
		}
	}
}
void carpma(double sayi1, double sayi2)
{
	{
		double carpim ;
		carpim = (sayi1)*(sayi2);
		std::cout << "=" << carpim << std::endl;
	}
}
void bolme(double sayi1, double sayi2)
{
	{
		if (sayi1 > sayi2)
		{
			double bolum ;
			bolum = (sayi1) / (sayi2);
			std::cout << "=" << bolum << std::endl;
		}
		else if (sayi1 < sayi2)
		{
			double bolum ;
			bolum = (sayi2) / (sayi1);
			std::cout << "=" << bolum << std::endl;
		}
		else
		{
			std::cout << "=1" << std::endl;
		}
	}
}
