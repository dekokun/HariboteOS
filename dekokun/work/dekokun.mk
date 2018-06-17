DAY ?= 07
DIR ?= harib04a

.PHONY: cp
cp:
	cp -rf ../../$(DAY)_day/$(DIR)/* ./
	nkf --in-place -Lu -w *.c *.nas *.h Makefile
	echo include dekokun.mk >> Makefile
