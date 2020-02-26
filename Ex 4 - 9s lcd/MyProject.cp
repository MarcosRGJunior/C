#line 1 "C:/Users/Aluno/Desktop/9s lcd/MyProject.c"
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

void main()
{ int num=0;
 char txt[7];
 intcon = 0;
 option_reg = 0b11000111 ;
 adcon1 = 7;
 option_reg.F7 = 0;
 trisb.rb1=1;
 portb.rb1=1;
 trisa.RA4 = 0;
 porta.RA4 = 1;
 Lcd_Init();
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);
 while(1)
 {
 IntToStr(num, txt);
 Lcd_Out(1,1,txt);
 delay_ms(1000);
 num++;
 if(num==10) num=0;

 }
 }
