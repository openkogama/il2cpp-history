
/* CachedAttributeGetter`1[System.Object]() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CachedAttributeGetter`1[System::Object]::
     CachedAttributeGetter_1_System_Object___cctor(MethodInfo *method)

{
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if (*(int *)(*(int *)(iVar2 + 0x5c) + 4) == 0) {
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0xc);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    uVar3 = func_?(iVar2);
    pcVar1 = method->name;
    pcVar4 = pcVar1;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
      pcVar4 = method->name;
    }
    pcVar5 = pcVar4;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
      pcVar5 = method->name;
    }
    if ((pcVar5[0xbe] & 1U) == 0) {
      func_?(pcVar5);
    }
    (*(code *)**(undefined4 **)(*(int *)(pcVar5 + 0x60) + 0x10))
              (uVar3,0,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 8),
               *(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x10));
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = **(int **)(pcVar1 + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4) = uVar3;
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  pcVar1 = method->name;
  uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 0x14);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  uVar6 = func_?(iVar2);
  pcVar1 = method->name;
  pcVar4 = pcVar1;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
    pcVar4 = method->name;
  }
  if ((pcVar4[0xbe] & 1U) == 0) {
    func_?(pcVar4);
  }
  (*(code *)**(undefined4 **)(*(int *)(pcVar4 + 0x60) + 0x18))
            (uVar6,uVar3,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x18));
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  **(undefined4 **)(iVar2 + 0x5c) = uVar6;
  return;
}

