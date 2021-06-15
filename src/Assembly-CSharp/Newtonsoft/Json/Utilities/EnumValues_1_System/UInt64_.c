
/* String GetKeyForItem(EnumValue`1[System.UInt64]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumValues`1[System::UInt64]::
         EnumValues_1_System_UInt64__GetKeyForItem
                   (EnumValues_1_System_UInt64_ *this,EnumValue_1_System_UInt64_ *item,
                   MethodInfo *method)

{
  if (item != (EnumValue_1_System_UInt64_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    pSVar2 = (String *)(*(code *)*puVar1)(item,puVar1);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}

