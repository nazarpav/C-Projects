#pragma once

void fill_arr(int *&p_arr, unsigned short size);
void print_arr(int *&p_arr, unsigned short size);
int* add_arr_item(int *&p_arr, unsigned short &size);
int* add_arr_item_ind(int *&p_arr, unsigned short &size, unsigned short index);
int* del_arr_item(int *&p_arr, unsigned short &size);