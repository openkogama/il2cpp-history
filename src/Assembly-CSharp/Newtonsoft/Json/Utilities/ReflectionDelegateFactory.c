
/* Func`2[Object,Object] CreateGet[Object](MemberInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::
ReflectionDelegateFactory_CreateGet
          (ReflectionDelegateFactory *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(memberInfo,TypeInfo__System__Reflection__PropertyInfo);
  if (iVar1 == 0) {
    iVar1 = func_?(memberInfo,TypeInfo__System__Reflection__FieldInfo);
    if (iVar1 == 0) goto code_?;
    if (this != (ReflectionDelegateFactory *)0x0) {
      pIVar2 = method->parameters[1];
      goto code_?;
    }
  }
  else if (this != (ReflectionDelegateFactory *)0x0) {
    pIVar2 = *method->parameters;
code_?:
    puVar3 = (undefined4 *)
             func_?((&(this->klass->vtable).Finalize)[*(ushort *)&pIVar2[5].data].methodPtr
                             ,pIVar2);
    pFVar4 = (Func_2_Object_Object_ *)(*(code *)*puVar3)(this,iVar1,puVar3);
    return pFVar4;
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,memberInfo);
  func_?(0,memberInfo);
  message = StringUtils::StringUtils_FormatWith
                      (StringLiteral_Could_not_create_getter_for__0__,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar5 = (code *)swi(3);
  pFVar4 = (Func_2_Object_Object_ *)(*pcVar5)();
  return pFVar4;
}


/* Action`2[Object,Object] CreateSet[Object](MemberInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::
ReflectionDelegateFactory_CreateSet
          (ReflectionDelegateFactory *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(memberInfo,TypeInfo__System__Reflection__PropertyInfo);
  if (iVar1 == 0) {
    iVar1 = func_?(memberInfo,TypeInfo__System__Reflection__FieldInfo);
    if (iVar1 == 0) goto code_?;
    if (this != (ReflectionDelegateFactory *)0x0) {
      pIVar2 = method->parameters[1];
      goto code_?;
    }
  }
  else if (this != (ReflectionDelegateFactory *)0x0) {
    pIVar2 = *method->parameters;
code_?:
    puVar3 = (undefined4 *)
             func_?((&(this->klass->vtable).Finalize)[*(ushort *)&pIVar2[5].data].methodPtr
                             ,pIVar2);
    pAVar4 = (Action_2_Object_Object_ *)(*(code *)*puVar3)(this,iVar1,puVar3);
    return pAVar4;
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,memberInfo);
  func_?(0,memberInfo);
  message = StringUtils::StringUtils_FormatWith
                      (StringLiteral_Could_not_create_setter_for__0__,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar5 = (code *)swi(3);
  pAVar4 = (Action_2_Object_Object_ *)(*pcVar5)();
  return pAVar4;
}

