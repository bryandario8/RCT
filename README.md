# RCT
Remote compile and test server of the programming challenge source code's for students
> *version 1.0*
## Prepare el entorno
```
$ sudo apt-get update
$ sudo apt-get install build-essential
$ sudo apt-get install rpcgen
$ sudo apt-get install rpcbind
```
## Antes de compilar
```
$ sudo service rpcbind stop
$ sudo rpcbind -wi
```
## Ejemplo de compilación
En un terminal: 
```
sudo ./rct_server
```
En otro terminal:
```
./rct_client localhost bryan mensaje
```
Por ahora, el servidor devuelve un id aleatorio y la fecha/hora en que se conectó el cliente más un mensaje 'OK'.
