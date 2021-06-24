################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../zajece8/zajece8/macierz.cpp \
../zajece8/zajece8/mazierz2.cpp \
../zajece8/zajece8/napis.cpp 

OBJS += \
./zajece8/zajece8/macierz.o \
./zajece8/zajece8/mazierz2.o \
./zajece8/zajece8/napis.o 

CPP_DEPS += \
./zajece8/zajece8/macierz.d \
./zajece8/zajece8/mazierz2.d \
./zajece8/zajece8/napis.d 


# Each subdirectory must supply rules for building sources it contributes
zajece8/zajece8/%.o: ../zajece8/zajece8/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


