
_Move_Delay:

;LCDLCD.c,23 :: 		void Move_Delay()
;LCDLCD.c,25 :: 		Delay_ms(500);                     // You can change the moving speed here
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_Move_Delay0:
	DECFSZ     R13+0, 1
	GOTO       L_Move_Delay0
	DECFSZ     R12+0, 1
	GOTO       L_Move_Delay0
	DECFSZ     R11+0, 1
	GOTO       L_Move_Delay0
	NOP
	NOP
;LCDLCD.c,26 :: 		}
L_end_Move_Delay:
	RETURN
; end of _Move_Delay

_main:

;LCDLCD.c,28 :: 		void main(){
;LCDLCD.c,29 :: 		intcon=0;
	CLRF       INTCON+0
;LCDLCD.c,30 :: 		adcon1=7;
	MOVLW      7
	MOVWF      ADCON1+0
;LCDLCD.c,31 :: 		option_reg.not_rbpu=0;
	BCF        OPTION_REG+0, 7
;LCDLCD.c,32 :: 		trisd=0;
	CLRF       TRISD+0
;LCDLCD.c,33 :: 		portd.rd5=0;
	BCF        PORTD+0, 5
;LCDLCD.c,35 :: 		Lcd_Init();                        // Initialize LCD
	CALL       _Lcd_Init+0
;LCDLCD.c,37 :: 		Lcd_Cmd(_LCD_CLEAR);               // Clear display
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,38 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,39 :: 		Lcd_Out(1,1,txt3);                 // Write text in first row
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt3+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;LCDLCD.c,42 :: 		Delay_ms(2000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main1:
	DECFSZ     R13+0, 1
	GOTO       L_main1
	DECFSZ     R12+0, 1
	GOTO       L_main1
	DECFSZ     R11+0, 1
	GOTO       L_main1
	NOP
	NOP
;LCDLCD.c,43 :: 		Lcd_Cmd(_LCD_CLEAR);               // Clear display
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,47 :: 		Delay_ms(2000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;LCDLCD.c,50 :: 		for(i=0; i<4; i++) {               // Move text to the right 4 times
	CLRF       _i+0
L_main3:
	MOVLW      4
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main4
;LCDLCD.c,51 :: 		Lcd_Cmd(_LCD_SHIFT_RIGHT);
	MOVLW      28
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,52 :: 		Move_Delay();
	CALL       _Move_Delay+0
;LCDLCD.c,50 :: 		for(i=0; i<4; i++) {               // Move text to the right 4 times
	INCF       _i+0, 1
;LCDLCD.c,53 :: 		}
	GOTO       L_main3
L_main4:
;LCDLCD.c,55 :: 		while(1) {                         // Endless loop
L_main6:
;LCDLCD.c,56 :: 		for(i=0; i<8; i++)
	CLRF       _i+0
L_main8:
	MOVLW      8
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main9
;LCDLCD.c,58 :: 		Lcd_Cmd(_LCD_SHIFT_LEFT);
	MOVLW      24
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,59 :: 		Move_Delay();
	CALL       _Move_Delay+0
;LCDLCD.c,56 :: 		for(i=0; i<8; i++)
	INCF       _i+0, 1
;LCDLCD.c,60 :: 		}
	GOTO       L_main8
L_main9:
;LCDLCD.c,62 :: 		for(i=0; i<8; i++)
	CLRF       _i+0
L_main11:
	MOVLW      8
	SUBWF      _i+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main12
;LCDLCD.c,64 :: 		Lcd_Cmd(_LCD_SHIFT_RIGHT);
	MOVLW      28
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;LCDLCD.c,65 :: 		Move_Delay();
	CALL       _Move_Delay+0
;LCDLCD.c,62 :: 		for(i=0; i<8; i++)
	INCF       _i+0, 1
;LCDLCD.c,66 :: 		}
	GOTO       L_main11
L_main12:
;LCDLCD.c,67 :: 		}
	GOTO       L_main6
;LCDLCD.c,68 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
