
/* Object GetValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
         ReflectionValueProvider_GetValue
                   (ReflectionValueProvider *this,Object *target,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  pOVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                     ((this->fields)._memberInfo,target,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return pOVar4;
}


/* Void SetValue(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
     ReflectionValueProvider_SetValue
               (ReflectionValueProvider *this,Object *target,Object *value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  Json::Utilities::ReflectionUtils::ReflectionUtils_SetMemberValue
            ((this->fields)._memberInfo,target,value,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* ReflectionValueProvider(MemberInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
     ReflectionValueProvider__ctor
               (ReflectionValueProvider *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  paramName = StringLiteral_memberInfo;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (memberInfo != (MemberInfo_1 *)0x0) {
    (this->fields)._memberInfo = memberInfo;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

