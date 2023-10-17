
/* String GetKeyForItem(EnumValue`1[System.UInt64]) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumValues`1[System::UInt64]::
         EnumValues_1_System_UInt64__GetKeyForItem
                   (EnumValues_1_System_UInt64_ *this,EnumValue_1_System_UInt64_ *item,
                   MethodInfo *method)

{
  IStack_1.rgctxDataDummy = &stack0xfffffffc;
  if (item != (EnumValue_1_System_UInt64_ *)0x0) {
    IStack_1 = method->klass->rgctx_data[1];
    pEStack_2 = item;
    pSVar3 = (String *)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)();
    return pSVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}

