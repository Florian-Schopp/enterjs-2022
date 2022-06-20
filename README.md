# enterjs-2022
This project shows all the source code used in the talk "WebAssembly Debugging" hold in the EnterJS Conference in 2022.

## Examples
This section gives a short overview how to compile the examples and the contents of the examples. The Webserver used to display the output was nginx serving the dist folder.

### Example 1
Example 1 is a simple c programming looping from 0 to 20 and printing the number. It can be compiled with the script ./scripts/example1.sh. The output can be found in /dist/example1

### Example 2
Example 2 is a simple c programming looping from 0 to 20. Everytime the number is dividable by 3 the program prints enter and every time it is dividable by 5 it prints js. If the number is dividable by three and 5 enterjs is printed.
It can be compiled with the script ./scripts/example2.sh. 
The output can be found in /dist/example2

### Example 3
Example 3 is a simple c programming calculating the nth fibonacci number. The function solves the problem recursively and can be called with any positive integer number.
It can be compiled with the script ./scripts/example3.sh. 
The output can be found in /dist/example3

## Nginx config

This section shows the config file of nginx (/etc/nginx/sites-enabled/default):

```
server {
	listen 80 default_server;
	listen [::]:80 default_server;

	root /var/www/html;
	location /enterjs/ {
          autoindex on;
        }
	index index.html index.htm index.nginx-debian.html;

	server_name _;
}
```

The folder /var/www/html/enterjs needs to be a simlink pointing to the dist folder of this repository
