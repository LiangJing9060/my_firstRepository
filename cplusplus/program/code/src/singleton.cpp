/*
 * singleton.cpp
 *
 *  Created on: 2018��9��26��
 *      Author: liangyj
 */

#include "C:/gitpro/myFirstRepo/my_firstRepository/cplusplus/program-eclipse/code/inc/singleton.h"

Singleton::Singleton()
{

}

Singleton::Singleton(const Singleton&)
{

}

Singleton& Singleton::operator = (const Singleton&)
{

}

Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getInstance()
{
	return instance;
}
