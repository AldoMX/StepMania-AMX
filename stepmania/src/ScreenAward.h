/*
-----------------------------------------------------------------------------
 Class: ScreenAward

 Desc: .

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/

#include "Screen.h"
#include "MenuElements.h"
#include "BitmapText.h"
#include "ActorUtil.h"


class ScreenAward : public Screen
{
public:
	ScreenAward( CString sName );

	virtual void DrawPrimitives();
	virtual void Input( const DeviceInput& DeviceI, const InputEventType type, const GameInput &GameI, const MenuInput &MenuI, const StyleInput &StyleI );
	virtual void HandleScreenMessage( const ScreenMessage SM );

	virtual void MenuStart( PlayerNumber pn );

private:
	
	AutoActor	m_Received[NUM_PLAYERS];
	AutoActor	m_Trophy[NUM_PLAYERS];
	BitmapText	m_textDescription[NUM_PLAYERS];

	MenuElements	m_Menu;
};

