
/* DataMemberAttribute GetAttribute(ICustomAttributeProvider) */

DataMemberAttribute *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CachedAttributeGetter`1[System::Runtime::
Serialization::DataMemberAttribute]::
CachedAttributeGetter_1_System_Runtime_Serialization_DataMemberAttribute__GetAttribute
          (ICustomAttributeProvider *type,MethodInfo *method)

{
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if ((*(byte *)(iVar2 + 0xbf) & 2) != 0) {
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    iVar2 = **(int **)(pcVar1 + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    if (*(int *)(iVar2 + 0x70) == 0) {
      pcVar1 = method->name;
      if ((pcVar1[0xbe] & 1U) == 0) {
        func_?(pcVar1);
      }
      iVar2 = **(int **)(pcVar1 + 0x60);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      func_?(iVar2);
    }
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = **(int **)(pcVar1 + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 != 0) {
    pcVar1 = method->name;
    pcVar3 = pcVar1;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
      pcVar3 = method->name;
    }
    if ((pcVar3[0xbe] & 1U) == 0) {
      func_?(pcVar3);
    }
    pDVar4 = (DataMemberAttribute *)
             (*(code *)**(undefined4 **)(*(int *)(pcVar3 + 0x60) + 4))
                       (iVar2,type,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 4));
    return pDVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pDVar4 = (DataMemberAttribute *)(*pcVar5)();
  return pDVar4;
}

