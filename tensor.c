#include "tensor.h"
#include <math.h>





void initialize_block(weights_single_block * w, int dim){




w -> Wq = (float *)malloc(dim * dim *sizeof(float));
w -> Wk = (float *)malloc(dim * dim *sizeof(float));
w -> Wv = (float *)malloc(dim * dim *sizeof(float));
w -> Wo = (float *)malloc(dim * dim *sizeof(float));
w -> hidden1 = (float *)malloc(dim * dim *sizeof(float));

}



weights_single_block * initialize_transformer(int num_layer){

weights_single_block * transformer = (weights_single_block *) malloc(num_layer * sizeof(weights_single_block));

for (int layer=0; layer< num_layer; layer++){
    initialize_block(transformer + layer, 100);
}


return transformer;





}