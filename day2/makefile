a: client.o model_base.o controller_base.o view_base.o model_derived.o controller_derived.o view_sq.o view_cube.o view_bits.o view_digit_sum.o
	g++ client.o model_base.o controller_base.o view_base.o model_derived.o controller_derived.o view_sq.o view_cube.o view_bits.o view_digit_sum.o
view_digit_sum.o: view_digit_sum.cpp view_digit_sum.h view_base.h model_base.h controller_base.h
	g++ -c view_digit_sum.cpp
view_bits.o: view_bits.cpp view_bits.h view_base.h model_base.h controller_base.h
	g++ -c view_bits.cpp
view_cube.o: view_cube.cpp view_cube.h view_base.h model_base.h controller_base.h
	g++ -c view_cube.cpp
view_sq.o: view_sq.cpp view_sq.h view_base.h model_base.h controller_base.h
	g++ -c view_sq.cpp
controller_derived.o: controller_derived.cpp controller_derived.h controller_base.h view_base.h
	g++ -c controller_derived.cpp
model_derived.o: model_derived.cpp model_derived.h model_base.h controller_base.h
	g++ -c model_derived.cpp
view_base.o: view_base.cpp view_base.h
	g++ -c view_base.cpp
controller_base.o: controller_base.cpp controller_base.h
	g++ -c controller_base.cpp
model_base.o: model_base.cpp model_base.h
	g++ -c model_base.cpp
client.o: client.cpp model_derived.h controller_derived.h view_sq.h view_cube.h view_bits.h view_digit_sum.h
	g++ -c client.cpp