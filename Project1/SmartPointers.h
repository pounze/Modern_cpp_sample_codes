// SMARTPOINTERS.h
#ifndef SMARTPOINTERS_H
#define SMARTPOINTERS_H

#include <iostream> 
#include <memory> 

class SmartPointers
{
	public:
		void show()
		{
			std::cout << "A::show()" << std::endl;
		}

	public:
		int unique_ptr()
		{
            std::unique_ptr<SmartPointers> p1(new SmartPointers);
            p1->show();

            // returns the memory address of p1 
            std::cout << p1.get() << std::endl;

            // transfers ownership to p2 
            std::unique_ptr<SmartPointers> p2 = move(p1);

            p2->show();

            std::cout << p1.get() << std::endl;

            std::cout << p2.get() << std::endl;

            // transfers ownership to p3 
            std::unique_ptr<SmartPointers> p3 = move(p2);

            p3->show();

            std::cout << p1.get() << std::endl;
            std::cout << p2.get() << std::endl;
            std::cout << p3.get() << std::endl;

            return 0;
		}

        int shared_ptr()
        {
            std::shared_ptr<SmartPointers> p1(new SmartPointers);

            std::cout << p1.get() << std::endl;

            p1->show();

            std::shared_ptr<SmartPointers> p2(p1);

            p2->show();

            std::cout << p1.get() << std::endl;

            std::cout << p2.get() << std::endl;

            // Returns the number of shared_ptr objects 
            // referring to the same managed object. 

            std::cout << p1.use_count() << std::endl;

            std::cout << p2.use_count() << std::endl;

            // Relinquishes ownership of p1 on the object 
            // and pointer becomes NULL 

            p1.reset();

            std::cout << p1.get() << std::endl;
            std::cout << p2.use_count() << std::endl;
            std::cout << p2.get() << std::endl;

            return 0;
        }

        // weak_ptr
};

#endif