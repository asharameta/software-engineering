################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AiZO_sortshell/AiZO_sortshell/main.cpp 

OBJS += \
./AiZO_sortshell/AiZO_sortshell/main.o 

CPP_DEPS += \
./AiZO_sortshell/AiZO_sortshell/main.d 


# Each subdirectory must supply rules for building sources it contributes
AiZO_sortshell/AiZO_sortshell/%.o: ../AiZO_sortshell/AiZO_sortshell/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


