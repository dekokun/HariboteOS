OSNAME:=dekoos

.PHONY: default
default:
	VBoxManage storageattach $(OSNAME) --storagectl Floppy --device 0 --medium img.img
	VBoxManage startvm $(OSNAME)

.PHONY: remove
remove:
	VBoxManage unregistervm $(OSNAME) --delete

.PHONY: init
init:
	make remove
	VBoxManage createvm --name $(OSNAME) --ostype Other --register
	VBoxManage modifyvm  $(OSNAME) --ostype Other --memory 32
	VBoxManage storagectl $(OSNAME) --name Floppy --add floppy
