
/* Object <>m__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ConvertUtils+<TryConvert>c__AnonStorey2::
         ConvertUtils_TryConvert_c_AnonStorey2___m__0
                   (ConvertUtils_TryConvert_c_AnonStorey2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).initialValue;
  culture = (this->fields).culture;
  targetType = (this->fields).targetType;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  pOVar1 = ConvertUtils::ConvertUtils_Convert(pOVar1,culture,targetType,(MethodInfo *)0x0);
  return pOVar1;
}

