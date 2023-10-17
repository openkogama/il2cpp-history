
/* Object <TryConvertOrCast>b__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+<>c__DisplayClass16_0::
         ConvertUtils_c_DisplayClass16_0__TryConvertOrCast_b__0
                   (ConvertUtils_c_DisplayClass16_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).initialValue;
  culture = (this->fields).culture;
  targetType = (this->fields).targetType;
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils::ConvertUtils_ConvertOrCast(pOVar1,culture,targetType,(MethodInfo *)0x0);
  return pOVar1;
}

