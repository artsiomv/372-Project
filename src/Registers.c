/*
 * Registers.c
 *
 *  Created on: Nov 3, 2015
 *      Author: Artiom
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct register_str {
	int numberStored;
	char* binaryNumberStored;
} Register;

	int $zero = 0;
	int $at = 0;
	int $v0 = 0;
	int $a0 = 0;
	int $a1 = 0;
	int $a2 = 0;
	int $t0 = 0;
	int $t1 = 0;
	int $t2 = 0;
	int $s0 = 0;
	int $s1 = 0;
	int $s2 = 0;
	int $k0 = 0;
	int $sp = 0;
	int $fp = 0;
	int $ra = 0;

int loadTo(char* param[]) {
	char* ptr;

	if(strcmp("$at", param[0]) == 0) {
		$at = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$v0", param[0]) == 0) {
		$v0 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$a0", param[0]) == 0) {
		//TODO
		$a0 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$a1", param[0]) == 0) {
		$a1 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$a2", param[0]) == 0) {
		$a2 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$t0", param[0]) == 0) {
		$t0 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$t1", param[0]) == 0) {
		$t1 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$t2", param[0]) == 0) {
		$t2 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$s0", param[0]) == 0) {
		$s0 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$s1", param[0]) == 0) {
		$s1 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$s2", param[0]) == 0) {
		$s2 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$k0", param[0]) == 0) {
		$k0 = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$sp", param[0]) == 0) {
		$sp = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$fp", param[0]) == 0) {
		$fp = strtol(param[1], &ptr, 10);
	}
	else if(strcmp("$ra", param[0]) == 0) {
		$ra = strtol(param[1], &ptr, 10);
	}
	return 0;
}

int loadFrom(int reg) {
	//TODO
	return 0;
}
