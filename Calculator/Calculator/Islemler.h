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
			double ��kan ;
			��kan = sayi1 - sayi2;
			std::cout << "=" << ��kan << std::endl;
		}
		else if(sayi1 < sayi2)
		{
			double ��kan ;
			��kan = sayi2 - sayi1;
			std::cout << "=" << ��kan << std::endl;
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
