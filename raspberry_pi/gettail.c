#include "gettail.h"

/**
 * @param path File path for tailing 
 * @param ft File position of the end
 */
void initTail(const char* path, fpos_t* ft){
	FILE *fp;
	fp = fopen(path, "r");
	if(fp == 0) {
		printf("No File at %s", path);
		return;
	}
	fseek(fp,0,SEEK_END);
	fgetpos(fp,ft);
	fclose(fp);
}
/**
 * @param fp File pointer
 * @param ft File position of the end
 * @param buffer Buffer for read
 * @param max_size Buffer size
 * @return read size
 */
long getTail(const char* path, fpos_t* ft, unsigned char* buffer, short max_size){
	FILE *fp;
	size_t readSize;
	fp = fopen(path, "r");
	fsetpos(fp,ft);
	readSize = fread(buffer, 1, max_size, fp);
	fgetpos(fp,ft);
	fclose(fp);
	return (long)readSize;
}

