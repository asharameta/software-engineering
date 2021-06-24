################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HUETA/main.c \
../HUETA/source.c 

OBJS += \
./HUETA/main.o \
./HUETA/source.o 

C_DEPS += \
./HUETA/main.d \
./HUETA/source.d 


# Each subdirectory must supply rules for building sources it contributes
HUETA/%.o: ../HUETA/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


