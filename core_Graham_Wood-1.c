//
//  core.c
//  Week 5 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>

#include "core.h"

int swap(int * a, int * b) {
	if (a == NULL || b == NULL) return FALSE;
	else {
		int temp = 0;
		int * b_pointer = b;

		temp = *a;
		*a = *b_pointer;
		*b = temp;
		return TRUE;
	}



}

int to_lower(char * s) {
	if (s == NULL) return FALSE;
	else {
		for (int i = 0; i < strlen(s); i++) {
			s[i] = s[i] + 32;
		}
	return TRUE;

	}




    return FALSE;
}

int inc_int_list(int * list, int length) {
	//array of list
	//add 1 to every item in list
	//return true if succeeds 
	//return false if anything null

	if (list == NULL) return FALSE;
	else {
		for (int i = 0; i < length; i++) {
			list[i] = list[i] + 1;
		}
	return TRUE;
	}



	return FALSE;
}

int core_main(int argc, const char * argv[]) {
    return 0;
}
