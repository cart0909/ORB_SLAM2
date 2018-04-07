/*
 * orb_global.cpp
 *
 *  Created on: 7 Apr 2018
 *      Author: liu
 */
#include "orb_global.h"

namespace ORB_SLAM2 {
int thread_pool_size_ = 2;
std::unique_ptr<ThreadPool> thread_pool_ = std::make_unique<ThreadPool>(thread_pool_size_);
}
