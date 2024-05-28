#include <iostream>

// LIFO : Last In First Out - STACK
// FIFO : First In First Out - QUEUE

//int main()
//{
//	int last{ 0 };
//	int type{ 0 };
//	int value[999];
//
//	while (true)
//	{
//		std::cout << "1. push, 2: pop >";
//		std::cin >> type;
//		if (type == 1)
//		{
//			std::cout << "value?";
//			std::cin >> value[last];
//			last++;
//			std::cout << "--STACK--" << std::endl;
//			for (int i = 0; i < last; i++)
//			{
//
//			}
//		}
//	}
//}

struct Bullet
{
	int damage;
	float speed;
	float size;

	Bullet *pNext;
};

int main()
{
	Bullet *a = new Bullet;
	Bullet *b = new Bullet;

	a->pNext = b;
}