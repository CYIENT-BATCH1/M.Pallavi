 Assume that we have a car with 8 seats, and we are monitoring 8 seat belt status 
in a variable “G_Msg_switchstatus_Byte[]” as
shown in pic1. Each switch status is combination of 2 bits as shown in pic2.4 
Write status of switches into variable “G_Msg_switchstatus_Byte[]” as below.
SWITCH1, SWITCH7 status is “faulty type 1 in switch”, SWITCH2, SWITCH5 status is 
”switch unbuckle”, SWITCH3, SWITCH6 status is “switch buckle”, SWITCH4, SWITCH0 
status is “faulty type 2 in switch” without disturbing the other bits.
  
  #include <stdio.h>
int main()
{
    int x,switch_status=0x00;
    int fault,f;
    int reg0,reg1,reg2,i,faulty_type;
    int faulty_type1=1,n,n1,n2;
    int reg1_unbuckle=2;
    int buckle=3;
    int faulty_type2=4;
    printf("enter the fault\n");
    scanf("%d",&f);
   switch(f){
case 0:   
        reg0=switch_status|((1<<0)|(1<<1)); // reg0 and reg2 are fault type1 and 0,1,4,5 bits set to 1
        reg2=switch_status|((1<<5)|(1<<4));
        reg1=switch_status&(0x00);           //reg1 set to 0x00
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;                    
               printf("%x",n);                   //printing reg0 
        }
         printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg2>>i)&1;                    //printing reg2 
               printf("%x",n1);
        }
         printf("\n");
         for(i=7;i>=0;i--){
               n2=0x00;                        // //printing reg1
               printf("%x",n2);
           }
             break;
    case 1:
        reg1=switch_status|((1<<5)|(1<<4));           //reg1 and reg2 as buckle and set the bits 4,5,6,7
        reg2=switch_status|((1<<6)|(1<<7));
        reg0=switch_status&(0x00);                  //reg0 as 0x00
        for(i=7;i>=0;i--){
               n=(reg1>>i)&1;                     //printing reg1
               printf("%x",n);
        }
         printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg2>>i)&1;                    // //printing reg2 
               printf("%x",n1);
        }
         printf("\n");
         for(i=7;i>=0;i--){                       // //printing reg0
               n2=0x00;
               printf("%x",n2);
           }
           break;
    case 2:
                reg0=switch_status|((1<<0)|(1<<1));
        reg1=switch_status|((1<<6)|(1<<7));                 //reg0 and reg1 as unbuckle 0,1,6,7 are set
        reg2=switch_status&(0x00);
        for(i=7;i>=0;i--){ 
               n=(reg0>>i)&1;                             //printing reg1
               printf("%x",n);
        }
         printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg1>>i)&1;                              // //printing reg1
               printf("%x",n1);
        }
         printf("\n");
         for(i=7;i>=0;i--){                           // //printing reg0
               n2=0x00;
               printf("%x",n2);
           }
         break;

         case 3:
                reg0=switch_status|((1<<2)|(1<<3)); //reg0 and reg1 are faulty type2 are set 2,3 bits
        reg1=switch_status|((1<<2)|(1<<3));
        reg2=switch_status&(0x00);              //reg2 as 0x00
        for(i=7;i>=0;i--){
               n=(reg0>>i)&1;                     //printing reg0
               printf("%x",n);
        }
         printf("\n");
        for(i=7;i>=0;i--){
               n1=(reg1>>i)&1;                   //printing reg1 
               printf("%x",n1);
        }
         printf("\n");
         for(i=7;i>=0;i--){
               n2=0x00;                              // printing reg2
               printf("%x",n2);
           }
          break;
   }
}
