#pragma once
#define SIMPLE_LOG(msg) std::cout<<msg<<std::endl
#define GET_ADDRESS_IN_CLASS(__class,__v)((uintmax_t) &((__class*)nullptr)->__v)
