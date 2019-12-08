#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sha256.h"


int main(int argc, char *argv[])
{
  char * hash = argv[1];
  char * pos;
  BYTE hash2[32];

  for (size_t count = 0; count < sizeof hash2/sizeof *hash2; count++) {
    sscanf(pos, "%2hhx", &hash2[count]);
    pos += 2;
  }

  int many = atoi(argv[2]);
  int period = atoi(argv[3]);
  BYTE buf[32];

  for (int i = 0; i < many; i++)
    {
      for(int j = 0; j < period; j++)
        {
          //update hash2 to be sha256(hash2);
          SHA256_CTX ctx;
          sha256_init(&ctx);
          sha256_update(&ctx, hash2, 32);
          //BYTE buf[32];
          sha256_final(&ctx, buf);
          for(int z = 0; z < 32; z++)
            {
              hash2[z] = buf[z];
            }
        }
      //store a checkpoint
      printf("checkpoint\n");
      printf("%s", hash2);
      printf("\n");
    }
}
