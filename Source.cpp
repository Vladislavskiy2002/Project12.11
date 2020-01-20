#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "best friends" }; // Простое окно

	Rectangle_BS fullschreen{ Point{0 ,0 } , 1920 , 1080 }; // Левый верхний угол, ширина , высота
	fullschreen.set_fill_color(Color::white);
	win.attach(fullschreen);

	Polygon_BS poly;
	poly.add(Point{ 860 ,440 });
	poly.add(Point{ 960,440 });
	poly.add(Point{ 910, 340 });
	poly.set_color(Color::black);
	win.attach(poly);
	Rectangle_BS box1{ Point{860 ,340 } , 100 , 100 }; // Левый верхний угол, ширина , высота
	box1.set_color(Color::black);
	win.attach(box1);

	/*Polygon_BS poly2;
	poly2.add(Point{ 860 ,440 });
	poly2.add(Point{ 960,440 });
	poly2.add(Point{ 760, 340 });
	poly2.add(Point{ 1060, 340 });
	poly2.add(Point{ 910, 240 });
	poly2.set_color(Color::black);
	win.attach(poly2);*/
		
	

	/*Line ln1{ Point{860 ,440},Point{910,440} };
	ln1.set_color(Color::black);
	win.attach(ln1);*/

	/*Line ln2{ Point{760, 340 },Point{1060, 340} };
	ln2.set_color(Color::black);
	win.attach(ln2);*/

	Line ln3{ Point{810, 390},Point{910, 290} };
	ln3.set_color(Color::black);
	win.attach(ln3);

	Line ln4{ Point{1010, 390},Point{910, 290} };
	ln4.set_color(Color::black);
	win.attach(ln4);

	Line ln5{ Point{810, 390},Point{890, 470} };
	ln5.set_color(Color::black);
	win.attach(ln5);

	Line ln6{ Point{1010, 390},Point{930, 470 } };
	ln6.set_color(Color::black);
	win.attach(ln6);

	Line ln7{ Point{890, 470},Point{930, 470} };
	ln7.set_color(Color::black);
	win.attach(ln7);

	/*Line ln8{ Point{1220 ,560},Point{1079 ,267} };
	ln8.set_color(Color::black);
	win.attach(ln8);

	Line ln9{ Point{650 ,880},Point{630 ,600} };
	ln9.set_color(Color::black);
	win.attach(ln9);*/


	win.wait_for_button();

	cout << "buy";
};