################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../qsortAiZO/qsortAiZO/main.cpp \
../qsortAiZO/qsortAiZO/qsort.cpp 

OBJS += \
./qsortAiZO/qsortAiZO/main.o \
./qsortAiZO/qsortAiZO/qsort.o 

CPP_DEPS += \
./qsortAiZO/qsortAiZO/main.d \
./qsortAiZO/qsortAiZO/qsort.d 


# Each subdirectory must supply rules for building sources it contributes
qsortAiZO/qsortAiZO/%.o: ../qsortAiZO/qsortAiZO/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


