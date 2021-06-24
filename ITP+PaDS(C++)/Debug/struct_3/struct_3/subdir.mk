################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../struct_3/struct_3/main.cpp 

OBJS += \
./struct_3/struct_3/main.o 

CPP_DEPS += \
./struct_3/struct_3/main.d 


# Each subdirectory must supply rules for building sources it contributes
struct_3/struct_3/%.o: ../struct_3/struct_3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


