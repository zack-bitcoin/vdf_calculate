#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sha256.h"


int main(int argc, char *argv[])
{
  char * inhex = argv[1];
  int many = atoi(argv[2]);
  int period = atoi(argv[3]);

  BYTE hash[32];
  SHA256_CTX ctx;//stores intermediate state while computing a hash.
  BYTE buf[32];//stores intermediate state between computing hashes.

  //convert the hex input into bytes.
  for (size_t count = 0; count < sizeof hash/sizeof *hash; count++) {
    sscanf(inhex, "%2hhx", &hash[count]);
    inhex += 2;
  }

  for (int i = 0; i < many; i++)
    //we do 'many' rounds of checkpoints
    {
      for(int j = 0; j < period; j++)
        //for every checkpoint, the number of hashes we compute is 'period'
        {
          //update hash to be sha256(hash);
          sha256_init(&ctx);
          sha256_update(&ctx, hash, 32);
          sha256_final(&ctx, buf);
          for(int z = 0; z < 32; z++)
            {
              hash[z] = buf[z];
            }
        }
      //store a checkpoint
      printf("checkpoint\n");
      printf("%s", hash);
      printf("\n");
    }
}
