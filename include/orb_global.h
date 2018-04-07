/*
 * orb_global.h
 *
 *  Created on: 7 Apr 2018
 *      Author: liu
 */

#ifndef INCLUDE_ORB_GLOBAL_H_
#define INCLUDE_ORB_GLOBAL_H_
#include "ThreadPool.h"
#include <memory>

namespace ORB_SLAM2 {
extern int thread_pool_size_;
extern std::unique_ptr<ThreadPool> thread_pool_;

}

#endif /* INCLUDE_ORB_GLOBAL_H_ */
