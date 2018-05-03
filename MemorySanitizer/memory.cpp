#include <pthread.h>

int x;

void *thread(void *a) {
    x = 42;
    return 0;
}

int main() {
    pthread_t t;
    pthread_create(&t, 0, thread, 0);
    x = 43;
    pthread_join(t, 0);
}
