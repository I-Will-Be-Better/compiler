#include<fstream>
#include<stdlib.h>
#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#import "C:\Program Files\Common Files\System\ADO\msado15.dll" no_namespace rename("EOF", "adoEOF") 
#pragma once
char* tokenaly();
void recursive();
void translate2();
void analysistable();
void translate1();
void optimize_s();
int tableget(char tra[100][15], char cmp[15]);
bool traverse(char tra[100][15], char cmp[15]);/*�����ս���ͷ��ս�����鿴�Ƿ����Ҫ����Ԫ��*/
void tableend();/*��ɷ�����*/
void inittable();/*������ĳ�ʼ��*/
void initproduct();/*��ʼ������ʽ�ṹ*/
void targetcode();
void range(char c[30]);