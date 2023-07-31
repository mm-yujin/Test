#pragma once

#define		WINCX		800
#define		WINCY		600

#define		PURE		= 0


typedef struct tagInfo
{
	float	fX;
	float	fY;
	float	fCX;
	float	fCY;

}INFO;


template<typename T>
void		Safe_Delete(T& Temp)
{
	if(Temp)
	{
		delete Temp;
		Temp = nullptr;
	}
}

struct DeleteObj
{
	template<typename T>
	void operator()(T& Temp)
	{
		if(Temp)
		{
			delete Temp;
			Temp = nullptr;
		}
	}
};

extern	HWND	g_hWnd;