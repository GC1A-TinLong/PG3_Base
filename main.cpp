#include <stdio.h>
#include <thread>

static void Thread1() {
	printf("thread 1\n");
}

static void Thread2() {
	printf("thread 2\n");
}

static void Thread3() {
	printf("thread 3\n");
}

int main() {

	std::thread th1(Thread1);
	th1.join();

	std::thread th2(Thread2);
	th2.join();

	std::thread th3(Thread3);
	th3.join();

	return 0;
}