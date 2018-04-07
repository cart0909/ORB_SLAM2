/*
 * ORBThreadPool.h
 *
 *  Created on: 31 Mar 2018
 *      Author: liu
 */

#ifndef INCLUDE_ORBTHREADPOOL_H_
#define INCLUDE_ORBTHREADPOOL_H_
#include "ThreadPool.h"
#include <memory>

namespace ORB_SLAM2 {
extern std::unique_ptr<ThreadPool> g_orb_thread_pool;
}
#endif /* INCLUDE_ORBTHREADPOOL_H_ */
