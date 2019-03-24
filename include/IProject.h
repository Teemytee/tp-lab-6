// -расчет оплаты исходя из участия в проекте(бюджет проекта делится пропорционально персональному вкладу).
class IProject
{
public:
	virtual unsigned int PaymentProject()=0;
};