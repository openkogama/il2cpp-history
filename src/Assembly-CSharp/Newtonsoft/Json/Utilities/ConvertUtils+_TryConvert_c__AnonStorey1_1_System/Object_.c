
/* Object <>m__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ConvertUtils+<TryConvert>c__AnonStorey1`1[System::Object]::
         ConvertUtils_TryConvert_c_AnonStorey1_1_System_Object____m__0
                   (ConvertUtils_TryConvert_c_AnonStorey1_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).initialValue;
  pOStack_2 = (Object *)0x0;
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  culture = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                      ((MethodInfo *)0x0);
  handle.value = (void *)**(undefined4 **)(method->name + 0x60);
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  ConvertUtils::ConvertUtils_TryConvert(pOVar1,culture,targetType,&pOStack_2,(MethodInfo *)0x0);
  pOVar1 = pOStack_2;
  if ((*(byte *)(*(int *)(*(int *)(method->name + 0x60) + 4) + 0xbe) & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}

