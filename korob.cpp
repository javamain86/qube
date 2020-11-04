// korob.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;




namespace watching{


	class Point3d{
	public:
		Point3d(){}
		inline Point3d(double *x_, double *y_, double *z_) :x(x_), y(y_), z(z_){}
		inline double* getX()
		{
			return x;
		}
		inline double* getY()
		{
			return y;
		}
		inline double* getZ()
		{
			return z;
		}
		static inline Point3d * MakePoint(double x_, double y_, double z_){
			return new Point3d(new double(x_), new double(y_), new double(z_));
		}
		~Point3d()
		{
			delete x;
			delete y;
			delete z;
		}
	private:
		double *x;
		double *y;
		double *z;

	};

	class Line3d{
	public:
		Line3d(){}
		Line3d(Point3d *a, Point3d *b) :P1(a), P2(b){}
		~Line3d()
		{
			delete P1;
			delete P2;
		}
		inline Point3d* getP1()
		{
			return P1;
		}
		inline Point3d* getP2()
		{
			return P2;
		}
	private:
		Point3d *P1;
		Point3d *P2;

	};

	class Ploskost3d{
	public:
		Ploskost3d(){}
		Ploskost3d(Line3d* l1, Line3d *l2, Line3d *l3, Line3d* l4) :L1(l1), L2(l2), L3(l3), L4(l4){}
		~Ploskost3d()
		{
			delete L1;
			delete L2;
			delete L3;
			delete L4;
		}
		inline Line3d * getL1()
		{
			return L1;
		}
		inline Line3d * getL2()
		{
			return L2;
		}
		inline Line3d * getL3()
		{
			return L3;
		}
		inline Line3d * getL4()
		{
			return L4;
		}
	private:
		Line3d *L1, *L2, *L3, *L4;

	};


	class Qub3d{
	public:
		Qub3d(){}
		Qub3d(Ploskost3d *p1, Ploskost3d *p2, Ploskost3d *p3, Ploskost3d *p4, Ploskost3d *p5, Ploskost3d *p6) : P1(p1), P2(p2), P3(p3), P4(p4), P5(p5), P6(p6){}
		void Move(Point3d * mov)
		{
			(*(P1->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P1->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P1->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P1->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P1->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P1->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P1->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P1->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P1->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P1->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P1->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P1->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P1->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P1->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P1->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P1->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P1->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P1->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P1->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P1->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P1->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P1->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P1->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P1->getL4()->getP2()->getZ())) += *(mov->getZ());


			(*(P2->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P2->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P2->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P2->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P2->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P2->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P2->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P2->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P2->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P2->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P2->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P2->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P2->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P2->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P2->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P2->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P2->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P2->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P2->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P2->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P2->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P2->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P2->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P2->getL4()->getP2()->getZ())) += *(mov->getZ());

			(*(P3->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P3->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P3->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P3->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P3->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P3->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P3->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P3->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P3->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P3->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P3->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P3->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P3->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P3->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P3->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P3->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P3->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P3->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P3->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P3->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P3->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P3->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P3->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P3->getL4()->getP2()->getZ())) += *(mov->getZ());

			(*(P4->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P4->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P4->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P4->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P4->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P4->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P4->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P4->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P4->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P4->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P4->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P4->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P4->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P4->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P4->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P4->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P4->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P4->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P4->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P4->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P4->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P4->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P4->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P4->getL4()->getP2()->getZ())) += *(mov->getZ());

			(*(P5->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P5->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P5->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P5->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P5->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P5->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P5->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P5->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P5->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P5->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P5->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P5->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P5->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P5->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P5->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P5->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P5->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P5->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P5->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P5->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P5->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P5->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P5->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P5->getL4()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL4()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL1()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL1()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL1()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL1()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL1()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL1()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL2()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL2()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL2()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL2()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL2()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL2()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL3()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL3()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL3()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL3()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL3()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL3()->getP2()->getZ())) += *(mov->getZ());

			(*(P6->getL4()->getP1()->getX())) += *(mov->getX());
			(*(P6->getL4()->getP1()->getY())) += *(mov->getY());
			(*(P6->getL4()->getP1()->getZ())) += *(mov->getZ());

			(*(P6->getL4()->getP2()->getX())) += *(mov->getX());
			(*(P6->getL4()->getP2()->getY())) += *(mov->getY());
			(*(P6->getL4()->getP2()->getZ())) += *(mov->getZ());

		}
		~Qub3d(){
			delete P1;
			delete P2;
			delete P3;
			delete P4;
			delete P5;
			delete P6;
		}
private:
		Ploskost3d *P1, *P2, *P3, *P4, *P5, *P6;


	};

	template <typename T>
	class Fabrica
	{
		static T* makeObject(T * k)
		{
			return &k;
		}
	};


	class Singleton
	{
	public:
		Singleton(){}
		static Singleton * GetInstance()
		{
			if (instance == 0)
			{
				instance = new Singleton();
			}
			return instance;
		}
		static Singleton * instance;
		Qub3d ** qub;
	};

};

watching::Singleton * watching::Singleton::instance = NULL;
int N = 2000;

void init_qub3d(){
	using namespace watching;
	watching::Singleton::GetInstance()->qub = new Qub3d*[N];

	cout << "Start make qub3d" << endl;
	for (int i = 0; i < N; i++)
	{
		(i%1000 == 0)?((cout << i << endl),1):0;
		watching::Singleton::GetInstance()->qub[i] = new Qub3d(
			new Ploskost3d(	new Line3d	( // переднее
								Point3d::MakePoint(	0.0,	0.0,	0.0),
								Point3d::MakePoint(	100.0,	0.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	0.0,	0.0),
								Point3d::MakePoint(	100.0,	100.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	0.0),
								Point3d::MakePoint(	0.0,	100.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	100.0,	0.0),
								Point3d::MakePoint(	0.0,	0.0,	0.0)
										)
						),
			new Ploskost3d(	new Line3d	(// правое
								Point3d::MakePoint(	100.0,	0.0 ,	0.0 ),
								Point3d::MakePoint(	100.0,	0.0,	100.0 )
										), 
							new Line3d	(
								
								Point3d::MakePoint(	100.0,	0.0,	100.0), 
								Point3d::MakePoint(	100.0,	100.0,	100.0) 
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	100.0),
								Point3d::MakePoint(	100.0,	100.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	0.0),
								Point3d::MakePoint(	100.0,	0.0,	0.0)
										)
							),
			new Ploskost3d(	new Line3d	( // задняя
								Point3d::MakePoint(	100.0,	0.0 ,	100.0 ),
								Point3d::MakePoint(	100.0,	100.0,	100.0 )
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	100.0),
								Point3d::MakePoint(	0.0,	100.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	100.0,	100.0),
								Point3d::MakePoint(	0.0,	0.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	0.0,	100.0),
								Point3d::MakePoint(	100.0,	0.0,	100.0)
										)
							),
			new Ploskost3d(	new Line3d	( // левое
								Point3d::MakePoint(	0.0,	0.0,	0.0),
								Point3d::MakePoint(	0.0,	0.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	0.0,	100.0),
								Point3d::MakePoint(	0.0,	100.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	100.0,	100.0),
								Point3d::MakePoint(	0.0,	100.0,	0.0)
										), 
							new Line3d	(		
								Point3d::MakePoint(	0.0,	100.0,	0.0),
								Point3d::MakePoint(	0.0,	0.0,	0.0)
										)
						),
			new Ploskost3d(	new Line3d	( // нижнее
								Point3d::MakePoint(	0.0,	0.0,	0.0),
								Point3d::MakePoint(	100.0,	0.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	0.0,	0.0),
								Point3d::MakePoint(	100.0,	0.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	0.0,	100.0),
								Point3d::MakePoint(	0.0,	0.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	0.0,	100.0),
								Point3d::MakePoint(	0.0,	0.0,	0.0)
										)
						),
			new Ploskost3d(	new Line3d	( // верх
								Point3d::MakePoint(	0.0,	100.0,	0.0),
								Point3d::MakePoint(	100.0,	100.0,	0.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	0.0),
								Point3d::MakePoint(	100.0,	100.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	100.0,	100.0,	100.0),
								Point3d::MakePoint(	0.0,	100.0,	100.0)
										), 
							new Line3d	(
								Point3d::MakePoint(	0.0,	100.0,	100.0),
								Point3d::MakePoint(	0.0,	100.0,	0.0)
									
										)
							)
							
			);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace watching;

	cout << "Start makes qub3ds" << endl;
	init_qub3d();
	cout << "End makes qub3ds" << endl;
	cout << "Start moves qub3ds" << endl;
	for (int i = 0; i < N; i++)
	{
		watching::Singleton::GetInstance()->qub[i]->Move(new Point3d(new double(100.0), new double(100.0), new double(100.0)));
	}
	cout << "End moves qub3ds" << endl;

	return 0;
}

