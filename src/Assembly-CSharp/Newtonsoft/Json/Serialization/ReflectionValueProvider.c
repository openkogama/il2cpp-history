
/* Object GetValue(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
         ReflectionValueProvider_GetValue
                   (ReflectionValueProvider *this,Object *target,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  pOVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetMemberValue
                     ((this->fields)._memberInfo,target,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_2;
  return pOVar4;
}


/* Void SetValue(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
     ReflectionValueProvider_SetValue
               (ReflectionValueProvider *this,Object *target,Object *value,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  Json::Utilities::ReflectionUtils::ReflectionUtils_SetMemberValue
            ((this->fields)._memberInfo,target,value,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* ReflectionValueProvider(MemberInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ReflectionValueProvider::
     ReflectionValueProvider__ctor
               (ReflectionValueProvider *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_memberInfo);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)memberInfo,StringLiteral_memberInfo,(MethodInfo *)0x0);
  (this->fields)._memberInfo = memberInfo;
  func_?(&this->fields,memberInfo);
  return;
}

