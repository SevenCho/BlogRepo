//
//  hack.c
//  GitPractise
//
//  Created by 曹雪松 on 2018/7/5.
//  Copyright © 2018 曹雪松. All rights reserved.
//

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

//#define FILE "/var/mobile/Library/AddressBook/AddressBook.sqlitedb"
#define FILE "/var/mobile/Library/com.apple.itunesstored2.sqlitedb/itunesstored2.sqlitedb"

int main(){
    int fd = open(FILE, O_RDONLY); // 读数据库文件，返回文件句柄标识
    char buf[128];
    int ret = 0;
    
    if(fd < 0)
        return -1;
    
    while (( ret = read(fd, buf, sizeof(buf))) > 0){ // 将文件读进buff中
        write( fileno(stdout), buf, ret); // 写到标准输出中
    }
    close(fd);
    return 0;
}
