################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BT_Prog.c \
../DIO_Prog.c \
../SPI_Prog.c \
../UART_Prog.c \
../main.c 

OBJS += \
./BT_Prog.o \
./DIO_Prog.o \
./SPI_Prog.o \
./UART_Prog.o \
./main.o 

C_DEPS += \
./BT_Prog.d \
./DIO_Prog.d \
./SPI_Prog.d \
./UART_Prog.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


