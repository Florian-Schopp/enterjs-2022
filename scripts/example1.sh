opt="--no-entry
    -s EXPORT_ES6=1 \
    -s MODULARIZE=1 \
    -s EXPORTED_FUNCTIONS=_countToTwenty
    "
emcc --no-entry -s EXPORT_ES6=1 -s MODULARIZE=1 -s EXPORTED_FUNCTIONS=_countToTwenty example1.c -o dist/example1/calc.js
    # -g