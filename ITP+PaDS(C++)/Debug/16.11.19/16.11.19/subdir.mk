################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../16.11.19/16.11.19/16.11.19.cpp \
../16.11.19/16.11.19/Source1.cpp \
../16.11.19/16.11.19/zaba.cpp \
../16.11.19/16.11.19/zajecia6.1.cpp \
../16.11.19/16.11.19/zaj?cia\ 6.cpp 

OBJS += \
./16.11.19/16.11.19/16.11.19.o \
./16.11.19/16.11.19/Source1.o \
./16.11.19/16.11.19/zaba.o \
./16.11.19/16.11.19/zajecia6.1.o \
./16.11.19/16.11.19/zaj?cia\ 6.o 

CPP_DEPS += \
./16.11.19/16.11.19/16.11.19.d \
./16.11.19/16.11.19/Source1.d \
./16.11.19/16.11.19/zaba.d \
./16.11.19/16.11.19/zajecia6.1.d \
./16.11.19/16.11.19/zaj?cia\ 6.d 


# Each subdirectory must supply rules for building sources it contributes
16.11.19/16.11.19/%.o: ../16.11.19/16.11.19/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

16.11.19/16.11.19/zaj?cia\ 6.o: ../16.11.19/16.11.19/zaj?cia\ 6.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"16.11.19/16.11.19/zaj?cia 6.d" -MT"16.11.19/16.11.19/zaj?cia\ 6.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


