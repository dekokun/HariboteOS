OSNAME:=dekoos

.PHONY: default
default:
	make remove
	VBoxManage createvm --name $(OSNAME) --ostype Other --register
	VBoxManage storagectl $(OSNAME) --name Floppy --add floppy
	VBoxManage storageattach $(OSNAME) --storagectl Floppy --device 0 --medium img.img
	VBoxManage startvm $(OSNAME)

.PHONY: remove
remove:
	VBoxManage unregistervm $(OSNAME) --delete

