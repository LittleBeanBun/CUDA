#ifndef __MATMUL_HPP__
#define __MATMUL_HPP__

void MatmulOnDevice(float *M_host, float *N_host, float* P_host, int width, int blockSize);
void MatmulSharedOnDevice(float *M_host, float *N_host, float* P_host, int width, int blockSize, bool staticMem);
void MatmulSharedConflictOnDevice(float *M_host, float *N_host, float* P_host, int width, int blockSize, bool staticMem);
void MatmulSharedConflictPadOnDevice(float *M_host, float *N_host, float* P_host, int width, int blockSize, bool staticMem);
extern void MatmulOnHost(float *M_host, float *N_host, float* P_host, int width);

#endif //__MATMUL_HPP__
