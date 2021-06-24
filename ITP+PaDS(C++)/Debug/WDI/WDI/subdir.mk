################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../WDI/WDI/Source.cpp \
../WDI/WDI/Source1.cpp \
../WDI/WDI/Source2.cpp \
../WDI/WDI/Source3.cpp \
../WDI/WDI/Source4.cpp \
../WDI/WDI/Source5.cpp \
../WDI/WDI/Source6.cpp \
../WDI/WDI/Source7.cpp \
../WDI/WDI/moveLT.cpp 

OBJS += \
./WDI/WDI/Source.o \
./WDI/WDI/Source1.o \
./WDI/WDI/Source2.o \
./WDI/WDI/Source3.o \
./WDI/WDI/Source4.o \
./WDI/WDI/Source5.o \
./WDI/WDI/Source6.o \
./WDI/WDI/Source7.o \
./WDI/WDI/moveLT.o 

CPP_DEPS += \
./WDI/WDI/Source.d \
./WDI/WDI/Source1.d \
./WDI/WDI/Source2.d \
./WDI/WDI/Source3.d \
./WDI/WDI/Source4.d \
./WDI/WDI/Source5.d \
./WDI/WDI/Source6.d \
./WDI/WDI/Source7.d \
./WDI/WDI/moveLT.d 


# Each subdirectory must supply rules for building sources it contributes
WDI/WDI/%.o: ../WDI/WDI/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


