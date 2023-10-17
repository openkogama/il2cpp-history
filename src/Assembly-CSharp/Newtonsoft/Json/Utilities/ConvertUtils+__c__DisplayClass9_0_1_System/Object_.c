
/* Object <TryConvert>b__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         ConvertUtils+<>c__DisplayClass9_0`1[System::Object]::
         ConvertUtils_c_DisplayClass9_0_1_System_Object___TryConvert_b__0
                   (ConvertUtils_c_DisplayClass9_0_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).initialValue;
  pOStack_2 = (Object *)0x0;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  culture = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                      ((MethodInfo *)0x0);
  handle = *method->klass->rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  targetType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  ConvertUtils::ConvertUtils_TryConvert(pOVar1,culture,targetType,&pOStack_2,(MethodInfo *)0x0);
  pOVar1 = pOStack_2;
  if ((*(byte *)((int)method->klass->rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
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

