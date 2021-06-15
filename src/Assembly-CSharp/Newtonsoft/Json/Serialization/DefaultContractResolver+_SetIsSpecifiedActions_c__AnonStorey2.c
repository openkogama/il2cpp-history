
/* Boolean <>m__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
     DefaultContractResolver+<SetIsSpecifiedActions>c__AnonStorey2::
     DefaultContractResolver_SetIsSpecifiedActions_c_AnonStorey2___m__0
               (DefaultContractResolver_SetIsSpecifiedActions_c_AnonStorey2 *this,Object *o,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Func_2_Object_Int32_ *)(this->fields).specifiedPropertyGet;
  if (this_00 != (Func_2_Object_Int32_ *)0x0) {
    piVar1 = (int *)System.Core.dll::System::Func`2[Object,Int32]::Func_2_Object_Int32__Invoke
                              (this_00,o,
                               MethodInfo__System__Func<System::Object,_System::Object>__Invoke_System__Object_
                              );
    if (piVar1 != (int *)0x0) {
      if (*(Il2CppClass **)(*piVar1 + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

