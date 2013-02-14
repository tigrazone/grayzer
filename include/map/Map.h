//
//  @brief base class Map for mapping coords support
//
#ifndef _MAP_
#define _MAP_

#include "math/Vector.h"


class map
{
    public:
        virtual ~map() {}

        // проектирует точку согласно типа проектирования
        virtual Vector apply( Vector& ) = 0;

        // определяет касательные векторы к координатным линиям
        // (u = const,v = const) в заданной точке
        virtual void find_tangent( Vector&, Vector&, Vector& ) = 0;
};


#endif // _MAP_
