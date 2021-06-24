################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wyk_3/wyk_3/liczba.cpp \
../wyk_3/wyk_3/main.cpp 

OBJS += \
./wyk_3/wyk_3/liczba.o \
./wyk_3/wyk_3/main.o 

CPP_DEPS += \
./wyk_3/wyk_3/liczba.d \
./wyk_3/wyk_3/main.d 


# Each subdirectory must supply rules for building sources it contributes
wyk_3/wyk_3/%.o: ../wyk_3/wyk_3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


