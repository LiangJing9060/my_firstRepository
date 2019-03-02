/*
 * port.h
 *
 *  Created on: 2019��2��28��
 *      Author: liangyj
 */

#ifndef CODE_INC_PORT_H_
#define CODE_INC_PORT_H_

//�����ռ䶨���ʹ��
#define NS_LIANG_BEG namespace liang{
#define NS_LIANG_END }

#define USING_NS_LIANG  using namespace liang;

#define NS_LIANG(name) liang::name

//��ֹ���ƹ��캯����ʹ��
#define NOT_ALLOW_COPY(ClassName)          \
	ClassName(const ClassName&) = delete;  \
	ClassName & operator =(const ClassName &) = delete

#endif /* CODE_INC_PORT_H_ */
