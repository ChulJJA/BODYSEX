#pragma once


#include "Message_Function_Base.h"


class Msg_Func_Collision : public Msg_Func_Base
{
public:
	void Init() override;
	void Update(float dt) override;

	Msg_Func_Collision(Object* m_from_, Object* m_target_, Message* msg_)
	{
		m_from = m_from_;
		m_target = m_target_;
		msg = msg_;
	}

	~Msg_Func_Collision()
	{

	}

	void Player_Get_Item(Object* player, Object* item);
	void Player_And_Player_Collision();

private:

};