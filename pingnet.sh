#!/bin/bash
if [ "$1" == "" ]
then 
echo "Curso Pentest"
echo "exemplo de uso: $0 192.168.1."
else
for host in {1..254}; do
ping -c1 $1.$host | grep "64 bytes" | cut -d ":" -f 1
done
fi
