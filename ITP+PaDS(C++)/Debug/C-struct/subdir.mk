################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../C-struct/lab10zad2.c \
../C-struct/main.c \
../C-struct/source.c 

OBJS += \
./C-struct/lab10zad2.o \
./C-struct/main.o \
./C-struct/source.o 

C_DEPS += \
./C-struct/lab10zad2.d \
./C-struct/main.d \
./C-struct/source.d 


# Each subdirectory must supply rules for building sources it contributes
C-struct/%.o: ../C-struct/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


