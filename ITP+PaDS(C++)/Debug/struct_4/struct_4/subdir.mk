################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../struct_4/struct_4/Source.cpp 

OBJS += \
./struct_4/struct_4/Source.o 

CPP_DEPS += \
./struct_4/struct_4/Source.d 


# Each subdirectory must supply rules for building sources it contributes
struct_4/struct_4/%.o: ../struct_4/struct_4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


