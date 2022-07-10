Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below
signed int G_Str_SteeringAngle_sint = -60;unsigned char G_Msg_SteeringInformation_Byte[3u];"

#include<stdio.h>
int main(){
    signed int G_Str_SteeringAngle_sint = -60;  // 1111 1100 0100
    for(int i=11;i>=0;i--){
        printf("%x ",(G_Str_SteeringAngle_sint>>i)&1);  //printing decimal to binary form      
       }
    unsigned char G_Msg_SteeringInformation_Byte[3u]={0x00,0x00,0x00};     //assigning array size 3 
    G_Msg_SteeringInformation_Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2)); //assigning 10 and 11 bits in an array of 0th element
    G_Msg_SteeringInformation_Byte[1]=(G_Str_SteeringAngle_sint>>2);            //assigning 2 to 9 bits in an array of 1st element  
    G_Msg_SteeringInformation_Byte[2]=(G_Str_SteeringAngle_sint<<6);            //assigning 0 and 1st bit in an array of 2nd element
    for(int i=0;i<3;i++){
       printf("\nG_Msg_SteeringInformation_Byte[%d]:\n",i);
        for(int j=7;j>=0;j--)
            printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1);             //printing array element of size 3
       }
}
