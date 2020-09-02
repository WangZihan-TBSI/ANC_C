//
//  main.c
//  FxLMS_in_C
//
//  Created by Zihan Wang on 07/08/2020.
//  Copyright © 2020 Zihan Wang. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <sndfile.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_blas.h>

int main()
{
    SF_INFO noise_info, mix_info;
    SNDFILE *noise, *mix;
    double *noise_data, *mix_data;
    noise_info.format = 0;//read only, so set format to 0
    mix_info.format = 0;
    //read noise file
    char *path_n = ("noise1.wav");
    noise = sf_open(path_n, SFM_READ, &noise_info);
    //read mixed sound file
    char *path_m = fopen("mix4.wav", "rb");
    mix = sf_open(path_m, SFM_READ, &mix_info);
    //read the soundtrack data as double
    sf_readf_double(noise,noise_data,noise_info.frames);
    sf_readf_double(mix,mix_data,mix_info.frames);
    //check if the frames can be converted into int [NOT SURE]
    LMS(noise_data,mix_data,0.1,10,int(noise_info.frames));
}
// error_mic  - the signal from error mic 
// ref_mic  - the signal from refernce mic, mixed with noise and music 
// mu - the gradient decend stepsize parameter
// M  - the number of taps
 //Ns - number of samples
void LMS(double *ref_mic, double *err_mic, float mu, int M, int Ns)
{
    ArrayXf xk(M);//declear a vector for signal input the filter
    ArrayXf weight(M);
    ArrayXf output(Ns);
    ArrayXf ee(Ns);
   for(int n =1;n<Ns;n++)
   {
       xk <<
   }

}
