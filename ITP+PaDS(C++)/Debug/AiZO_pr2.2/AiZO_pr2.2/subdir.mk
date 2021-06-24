################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AiZO_pr2.2/AiZO_pr2.2/main.cpp 

OBJS += \
./AiZO_pr2.2/AiZO_pr2.2/main.o 

CPP_DEPS += \
./AiZO_pr2.2/AiZO_pr2.2/main.d 


# Each subdirectory must supply rules for building sources it contributes
AiZO_pr2.2/AiZO_pr2.2/%.o: ../AiZO_pr2.2/AiZO_pr2.2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


