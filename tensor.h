#include <stdlib.h>
#include <stdio.h>


typedef struct {
float *Wq;
float *Wk;
float *Wv;
float *Wo;
float *hidden1;

} weights_single_block;
typedef struct {
float *Q;
float *K;
float *V;
} IntermediateTensor;



void initialize_block(weights_single_block *, int);

weights_single_block * initialize_transformer( int);