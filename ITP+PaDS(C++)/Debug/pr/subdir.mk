################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../pr/Untitled1.c 

CPP_SRCS += \
../pr/Untitled1.cpp \
../pr/zadanie4.cpp 

OBJS += \
./pr/Untitled1.o \
./pr/zadanie4.o 

C_DEPS += \
./pr/Untitled1.d 

CPP_DEPS += \
./pr/Untitled1.d \
./pr/zadanie4.d 


# Each subdirectory must supply rules for building sources it contributes
pr/%.o: ../pr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

pr/%.o: ../pr/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


