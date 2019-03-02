/*
 * singleton.h
 *
 *  Created on: 2018��9��26��
 *      Author: liangyj
 */

#ifndef CODE_INC_SINGLETON_H_
#define CODE_INC_SINGLETON_H_

class Singleton
{
public:
	static Singleton* getInstance();
private:
	Singleton();
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);

	static Singleton* instance;
};



#endif /* CODE_INC_SINGLETON_H_ */
