opt="--no-entry
    -s EXPORT_ES6=1 \
    -s MODULARIZE=1 \
    -s EXPORTED_FUNCTIONS=_enterjsGame
    -g 
    -fsanitize=address
    "
emcc example2.c --no-entry -s EXPORT_ES6=1 -s MODULARIZE=1 -s EXPORTED_FUNCTIONS=_enterjsGame -g -o dist/example2/calc.js

#