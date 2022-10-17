a: client.o model_base.o controller_base.o view_base.o model_derived.o controller_derived.o view_first.o view_last.o view_count.o view_sum.o
	g++ client.o model_base.o controller_base.o view_base.o model_derived.o controller_derived.o view_first.o view_last.o view_count.o view_sum.o
view_sum.o: view_sum.cpp view_sum.h view_base.h model_base.h controller_base.h
	g++ -c view_sum.cpp
view_count.o: view_count.cpp view_count.h view_base.h model_base.h controller_base.h
	g++ -c view_count.cpp
view_last.o: view_last.cpp view_last.h view_base.h model_base.h controller_base.h
	g++ -c view_last.cpp
view_first.o: view_first.cpp view_first.h view_base.h model_base.h controller_base.h
	g++ -c view_first.cpp
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
client.o: client.cpp model_derived.h controller_derived.h view_first.h view_last.h view_count.h view_sum.h
	g++ -c client.cpp