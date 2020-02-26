#line 1 "C:/Users/Aluno/Desktop/LCD JESUS/LCDLCD.c"

sbit LCD_RS at RD4_bit;
sbit LCD_EN at RD6_bit;
sbit LCD_D4 at RD0_bit;
sbit LCD_D5 at RD1_bit;
sbit LCD_D6 at RD2_bit;
sbit LCD_D7 at RD3_bit;

sbit LCD_RS_Direction at TRISD4_bit;
sbit LCD_EN_Direction at TRISD6_bit;
sbit LCD_D4_Direction at TRISD0_bit;
sbit LCD_D5_Direction at TRISD1_bit;
sbit LCD_D6_Direction at TRISD2_bit;
sbit LCD_D7_Direction at TRISD3_bit;



 char txt3[] = "euteentendo";


char i;

void Move_Delay()
{
 Delay_ms(500);
}

void main(){
 intcon=0;
 adcon1=7;
 option_reg.not_rbpu=0;
 trisd=0;
 portd.rd5=0;

 Lcd_Init();

 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);
 Lcd_Out(1,1,txt3);


 Delay_ms(2000);
 Lcd_Cmd(_LCD_CLEAR);



 Delay_ms(2000);


 for(i=0; i<4; i++) {
 Lcd_Cmd(_LCD_SHIFT_RIGHT);
 Move_Delay();
 }

 while(1) {
 for(i=0; i<8; i++)
 {
 Lcd_Cmd(_LCD_SHIFT_LEFT);
 Move_Delay();
 }

 for(i=0; i<8; i++)
 {
 Lcd_Cmd(_LCD_SHIFT_RIGHT);
 Move_Delay();
 }
 }
}
