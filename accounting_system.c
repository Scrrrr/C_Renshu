#include<stdio.h>
#include <string.h>
#include <strings.h>

typedef struct Request_code
{
    //stock
    char Product_name[100];
    int  Product_stock;
    int  Product_price;

    //visit
    int  Customer_id;
    int  Customer_store;
    char Customer_type;

    //order
    //   Customer_id
    //   Product_name
    int  Order_store;

    //account
    //   Customer_id
}requests;


void stock(requests *RequestData,const char request[])
{
    int i;
    char *context; //strtok_rの為の
    char *token;
    int count = 0;

    token = strtok_r(request," ",&context);
    token = strtok_r(NULL," ",&context);

    RequestData->Product_name = strtok_r(NULL," ",&context);
    RequestData->Product_name = strtok_r(NULL," ",&context);


/*
    for(i = 15; request[i] != ' '; i++)
    {
        if(request[i] != ' ')
        {
            product_name[i - 15] = request[i];
            break;
        }

    }
*/
    //product_name[i + 1]  = '\0';
    //printf("%d , %s",i,product_name);

    
}

int main(void)
{
    char buff[100];
    char action;
    requests requestData;
    
    fgets(buff,sizeof(buff),stdin);

    action = buff[9];


    switch (action)
    {
    case 's': //stock
        stock(&requestData,buff);
        break;
    case 'v': //visit
        printf("visit\n");
        break;
    case 'o': //order
        printf("order\n");
        break;
    case 'a': //account
        printf("account\n");
        break;
    default:
        printf("Action Error\n");
        break;
    }

    return 0;

}


