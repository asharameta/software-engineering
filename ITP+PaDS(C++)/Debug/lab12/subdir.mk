################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lab12/lab12zad2.c 

OBJS += \
./lab12/lab12zad2.o 

C_DEPS += \
./lab12/lab12zad2.d 


# Each subdirectory must supply rules for building sources it contributes
lab12/%.o: ../lab12/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


