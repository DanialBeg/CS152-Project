#!/bin/bash

#loop.min test
echo "#################"
echo "loop.min test"
echo "#################"
cat loop.min | parser > loop.mil
mil_run loop.mil
echo ""

#ifelse.min test
echo "#################"
echo "ifelse.min test"
echo "#################"
cat ifelse.min | parser > ifelse.mil
mil_run ifelse.mil
echo ""

#continue.min test
echo "#################"
echo "continue.min test"
echo "#################"
cat continue.min | parser > continue.mil
mil_run continue.mil
echo ""

#nested_loop.min test
echo "#################"
echo "nexted_loop.min test"
echo "#################"
cat nested_loop.min | parser > nested_loop.mil
mil_run nested_loop.mil
echo ""

#error1.min test
echo "#################"
echo "error1.min test"
echo "#################"
#cat error1.min | parser
echo ""

#error2.min test
echo "#################"
echo "error2.min test"
echo "#################"
#cat error2.min | parser
echo ""

#continue_error.min test
echo "#################"
echo "continue_error.min test"
echo "#################"
cat continue_error.min | parser
echo ""

#fibonacci.min test
echo "#################"
echo "EXTRA CREDIT: fibonacci.min test"
echo "#################"
echo "input is 5, should output 8"
cat fibonacci.min | parser > fibonacci.mil
echo 5 > input.txt
mil_run fibonacci.mil < input.txt
