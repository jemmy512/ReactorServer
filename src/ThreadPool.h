//
// Created by Jemmy on 2018/6/13.
//

#ifndef PROJECT_THREADPOOL_H
#define PROJECT_THREADPOOL_H

#include <pthread.h>

class ThreadJobQueue;

template<typename T>
class ThreadPool{
public:
    ThreadPool() {}
    ThreadPool(int size = 10) : threadSize(size),threadNumber(0) {

    }
private:
    int     threadSize;
    int     threadNumber;
    pthread_mutex_t mutex = PTHREAD_MUTEXT_INITIALIZER;
    ThreadJobQueue jobQueue;
};

class ThreadJobQueue {

};

#endif //PROJECT_THREADPOOL_H
