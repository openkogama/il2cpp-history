
/* Boolean <GetFlagsValues>b__3_0(EnumValue`1[System.UInt64]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::EnumUtils+<>c__3`1[System::Int32Enum]::
     EnumUtils_c_3_1_System_Int32Enum___GetFlagsValues_b__3_0
               (EnumUtils_c_3_1_System_Int32Enum_ *this,EnumValue_1_System_UInt64_ *v,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__Newtonsoft__Json__Utilities__EnumValue<unsigned_long>__get_Value__;
    func_?();
    cRam_? = '\x01';
  }
  if (v != (EnumValue_1_System_UInt64_ *)0x0) {
    if ((int)(v->fields)._value == 0 && *(int *)((int)&(v->fields)._value + 4) == 0) {
      return 1;
    }
    return 0;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

