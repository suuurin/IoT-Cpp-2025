//#include <iostream>
///* ��Ӱ��迡�� �̴ϼȶ����� ����ϱ� */
//class Car
//{
//private:
//	int gasolineGauge;
//public:
//	Car(int ag) : gasolineGauge(ag) {}
//	int getGasGauge() { return gasolineGauge; }
//};
//class HybridCar : public Car
//{
//private:
//	int electricGauge;
//public:
//	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}
//	int getElecGauge() { return electricGauge; }
//};
//class HybridWaterCar : public HybridCar
//{
//	int waterGauge;
//public:
//	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}
//	void showGauge()
//	{
//		std::cout << "�ܿ� ���ָ�: " << getGasGauge() << std::endl;
//		std::cout << "�ܿ� ���ⷮ: " << getElecGauge() << std::endl;
//		std::cout << "�ܿ� ���ͷ�: " << waterGauge << std::endl;
//	}
//};
//int main(void)
//{
//	HybridWaterCar hwc(10, 20, 30);
//	hwc.showGauge();
//	return 0;
//}