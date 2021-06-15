
/* BidirectionalDictionary`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     Object,System::Object]::BidirectionalDictionary_2_System_Object_System_Object___ctor
               (BidirectionalDictionary_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x70) == 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      func_?(iVar1);
    }
  }
  uVar2 = (**(code **)**(undefined4 **)(method->name + 0x60))
                    ((undefined4 *)**(undefined4 **)(method->name + 0x60));
  iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x70) == 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0xc);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      func_?(iVar1);
    }
  }
  puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  uVar4 = (*(code *)*puVar3)(puVar3);
  if (this != (BidirectionalDictionary_2_System_Object_System_Object_ *)0x0) {
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(this,uVar2,uVar4,puVar3);
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

