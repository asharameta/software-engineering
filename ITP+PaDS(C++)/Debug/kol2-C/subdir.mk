################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../kol2-C/main.c \
../kol2-C/source.c 

OBJS += \
./kol2-C/main.o \
./kol2-C/source.o 

C_DEPS += \
./kol2-C/main.d \
./kol2-C/source.d 


# Each subdirectory must supply rules for building sources it contributes
kol2-C/%.o: ../kol2-C/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


