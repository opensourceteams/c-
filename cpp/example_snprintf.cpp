#include <stdio.h>

const int THREAD_NUM = 1; // 测试的线程数，最大不能超过10
char file_names[THREAD_NUM][256]; // 每个线程识别的文件名

char audio_dir[256] = "./pcm"; // 与THREAD_NUM一起决定测试的文件名


int main(int argc, char **argv) {


    for (int i = 0; i < THREAD_NUM; ++i) {

        snprintf(file_names[i], 256, "%s/16k-%d.pcm", audio_dir, i);

           printf("%s\n",file_names[i]);

    }


    return 0;
}