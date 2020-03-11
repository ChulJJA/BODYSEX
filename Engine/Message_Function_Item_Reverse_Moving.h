#pragma once
#include "Message_Function_Base.h"
class Message;

class Msg_Func_Item_Reverse_Moving : public Msg_Func_Base
{
public:
	void Init() override;
	void Update(float dt) override;

	Msg_Func_Item_Reverse_Moving(Object* m_from_, Object* m_target_, float timer_, Message* msg_)
	{
		m_from = m_from_;
		m_target = m_target_;
		timer = timer_;
		msg = msg_;
	}

	~Msg_Func_Item_Reverse_Moving()
	{

	}

private:
	float timer;
	Message* msg;
	Object* reverse_moving_effect;
};