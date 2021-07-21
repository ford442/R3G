EMCC = emcc -O2 -s ENVIRONMENT=web -s INITIAL_MEMORY=128mb -s ALLOW_MEMORY_GROWTH=0 -s MALLOC="emmalloc" -s EXPORTED_FUNCTIONS='["_main","_r3g"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s SUPPORT_LONGJMP=0 -s FILESYSTEM=0 -flto
EMCCnoopt = emcc -s ENVIRONMENT=web -s INITIAL_MEMORY=1400mb -s ALLOW_MEMORY_GROWTH=0 -s MALLOC="emmalloc" -s EXPORTED_FUNCTIONS='["_main","_r3g"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s SUPPORT_LONGJMP=0 -s FILESYSTEM=0  -flto

all:
	$(EMCCnoopt) source/array.c -o build/r3.js
r3g:
	$(EMCC) source/array.c -o build/r3.js
	
