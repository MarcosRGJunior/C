
_main:

;MyProject.c,15 :: 		void main()
;MyProject.c,16 :: 		{    int num=0;
	CLRF       main_num_L0+0
	CLRF       main_num_L0+1
;MyProject.c,18 :: 		intcon = 0;
	CLRF       INTCON+0
;MyProject.c,19 :: 		option_reg = 0b11000111 ;
	MOVLW      199
	MOVWF      OPTION_REG+0
;MyProject.c,20 :: 		adcon1 = 7;
	MOVLW      7
	MOVWF      ADCON1+0
;MyProject.c,21 :: 		option_reg.F7 = 0;
	BCF        OPTION_REG+0, 7
;MyProject.c,22 :: 		trisb.rb1=1;
	BSF        TRISB+0, 1
;MyProject.c,23 :: 		portb.rb1=1;
	BSF        PORTB+0, 1
;MyProject.c,24 :: 		trisa.RA4 = 0;
	BCF        TRISA+0, 4
;MyProject.c,25 :: 		porta.RA4 = 1;
	BSF        PORTA+0, 4
;MyProject.c,26 :: 		Lcd_Init();                        // Inicia o LCD
	CALL       _Lcd_Init+0
;MyProject.c,27 :: 		Lcd_Cmd(_LCD_CLEAR);               // Limpa display
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;MyProject.c,28 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);          // Desliga Cursor
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;MyProject.c,29 :: 		while(1)
L_main0:
;MyProject.c,31 :: 		IntToStr(num, txt);
	MOVF       main_num_L0+0, 0
	MOVWF      FARG_IntToStr_input+0
	MOVF       main_num_L0+1, 0
	MOVWF      FARG_IntToStr_input+1
	MOVLW      main_txt_L0+0
	MOVWF      FARG_IntToStr_output+0
	CALL       _IntToStr+0
;MyProject.c,32 :: 		Lcd_Out(1,1,txt);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;MyProject.c,33 :: 		delay_ms(1000);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
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
;MyProject.c,34 :: 		num++;
	INCF       main_num_L0+0, 1
	BTFSC      STATUS+0, 2
	INCF       main_num_L0+1, 1
;MyProject.c,35 :: 		if(num==10) num=0;
	MOVLW      0
	XORWF      main_num_L0+1, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main5
	MOVLW      10
	XORWF      main_num_L0+0, 0
L__main5:
	BTFSS      STATUS+0, 2
	GOTO       L_main3
	CLRF       main_num_L0+0
	CLRF       main_num_L0+1
L_main3:
;MyProject.c,37 :: 		}
	GOTO       L_main0
;MyProject.c,38 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
