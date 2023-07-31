#pragma once

#include "Define.h"
#include "Player.h"

class CMainGame
{

public:
	CMainGame();
	~CMainGame();
public:
	void		Initialize(void);
	void		Update(void);
	void		Render(void);
	void		Release(void);

private:
	CObj*			m_pPlayer;
	list<CObj*>		m_pBulletList;

	HDC			m_DC;
};
