#include<stdio.h>

union tag_payload
{
  int int_data;
  double double_data;
  char string_data[16];
};

struct tag_packet
{
  int type;
  union tag_payload payload;
};

int 構造体変数packetへの受信処理(struct tag_packet *,int *);


int 構造体変数packetへの受信処理(struct tag_packet *packet, int *flag)
{
  packet->payload.int_data = 65;
  *flag = 3;

  return 1;
}

int main(void)
{
  struct tag_packet packet;

  
  構造体変数packetへの受信処理(&packet,&packet.type);


  switch(packet.type)
  {
    case 1:
      printf("data is %d\n",packet.payload.int_data);
      break;
    case 2:
      printf("data is %f\n",packet.payload.double_data);
      break;
    case 3:
      printf("data is %s\n",packet.payload.string_data);
      break;
    default:
      printf("error\n");
  }

  return 0;
}
