################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/327_sfinal.cpp \
../src/DrinkOrder.cpp \
../src/utilities.cpp 

OBJS += \
./src/327_sfinal.o \
./src/DrinkOrder.o \
./src/utilities.o 

CPP_DEPS += \
./src/327_sfinal.d \
./src/DrinkOrder.d \
./src/utilities.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


