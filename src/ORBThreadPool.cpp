/*
 * ORBThreadPool.cpp
 *
 *  Created on: 31 Mar 2018
 *      Author: liu
 */
#include "ORBThreadPool.h"

namespace ORB_SLAM2 {
std::unique_ptr<ThreadPool> g_orb_thread_pool = std::make_unique<ThreadPool>(2);
}
