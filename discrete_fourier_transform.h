/*
File:         discrete_fourier_transform.h
Purpose:      Contains prototypes for a fast discrete Fourier
transformation based on code available at:
http://paulbourke.net/miscellaneous/dft/
Author:			  Weining Wu
*/

/********************************************************************
DO NOT EDIT THIS FILE
******************************************************************/

#pragma once

/* Function prototype */
void fft(short int dir, long m, double x[], double y[]);