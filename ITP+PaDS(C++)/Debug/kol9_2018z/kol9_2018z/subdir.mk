################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kol9_2018z/kol9_2018z/bib_lista.cpp \
../kol9_2018z/kol9_2018z/main.cpp 

OBJS += \
./kol9_2018z/kol9_2018z/bib_lista.o \
./kol9_2018z/kol9_2018z/main.o 

CPP_DEPS += \
./kol9_2018z/kol9_2018z/bib_lista.d \
./kol9_2018z/kol9_2018z/main.d 


# Each subdirectory must supply rules for building sources it contributes
kol9_2018z/kol9_2018z/%.o: ../kol9_2018z/kol9_2018z/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


