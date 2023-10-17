
/* Func`2[Object,Object] CreateGet[Object](MemberInfo) */

Func_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::
ReflectionDelegateFactory_CreateGet_1
          (ReflectionDelegateFactory *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) {
    left = (PropertyInfo_1 *)0x0;
  }
  else {
    if (((memberInfo->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((memberInfo->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left = (PropertyInfo_1 *)0x0;
    if (bVar1) {
      left = (PropertyInfo_1 *)memberInfo;
    }
  }
  bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (memberInfo == (MemberInfo_1 *)0x0) {
      left = (PropertyInfo_1 *)0x0;
    }
    else {
      if (((memberInfo->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth) ||
         ((memberInfo->klass->_1).typeHierarchy
          [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      left = (PropertyInfo_1 *)0x0;
      if (bVar1) {
        left = (PropertyInfo_1 *)memberInfo;
      }
    }
    bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?(args);
      func_?();
      pMVar3 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Could_not_create_getter_for__0__);
      pSVar4 = StringUtils::StringUtils_FormatWith(pSVar4,(IFormatProvider *)provider,args,pMVar3);
      func_?();
      this_00 = (Exception *)func_?();
      func_?(this_00);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
      uStack5 =
           func_?(&
                           System__Func<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateGet<System::Object>_System__Reflection__MemberInfo_
                          );
      pEStack6 = this_00;
      func_?();
      pcVar7 = (code *)swi(3);
      pFVar8 = (Func_2_Object_Object_ *)(*pcVar7)();
      return pFVar8;
    }
    pMVar3 = (method->field7_0x1c).rgctx_data[1].method;
  }
  else {
    pMVar3 = ((method->field7_0x1c).rgctx_data)->method;
  }
  func_?((&(this->klass->vtable).Equals)[pMVar3->slot].method,pMVar3,&stack0xfffffff4);
  pFVar8 = (Func_2_Object_Object_ *)(*in_stack_9)(this,left,in_stack_10);
  return pFVar8;
}


/* Action`2[Object,Object] CreateSet[Object](MemberInfo) */

Action_2_Object_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionDelegateFactory::
ReflectionDelegateFactory_CreateSet_1
          (ReflectionDelegateFactory *this,MemberInfo_1 *memberInfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Reflection__FieldInfo);
    func_?(&TypeInfo__System__Reflection__PropertyInfo);
    cRam_? = '\x01';
  }
  if (memberInfo == (MemberInfo_1 *)0x0) {
    left = (PropertyInfo_1 *)0x0;
  }
  else {
    if (((memberInfo->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth) ||
       ((memberInfo->klass->_1).typeHierarchy
        [(TypeInfo__System__Reflection__PropertyInfo->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__Reflection__PropertyInfo)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    left = (PropertyInfo_1 *)0x0;
    if (bVar1) {
      left = (PropertyInfo_1 *)memberInfo;
    }
  }
  bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                    (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (memberInfo == (MemberInfo_1 *)0x0) {
      left = (PropertyInfo_1 *)0x0;
    }
    else {
      if (((memberInfo->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth) ||
         ((memberInfo->klass->_1).typeHierarchy
          [(TypeInfo__System__Reflection__FieldInfo->_1).typeHierarchyDepth - 1] !=
          (Il2CppClass *)TypeInfo__System__Reflection__FieldInfo)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      left = (PropertyInfo_1 *)0x0;
      if (bVar1) {
        left = (PropertyInfo_1 *)memberInfo;
      }
    }
    bVar2 = mscorlib.dll::System::Reflection::PropertyInfo::PropertyInfo_1_op_Inequality
                      (left,(PropertyInfo_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?(args);
      func_?();
      pMVar3 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Could_not_create_setter_for__0__);
      pSVar4 = StringUtils::StringUtils_FormatWith(pSVar4,(IFormatProvider *)provider,args,pMVar3);
      func_?();
      this_00 = (Exception *)func_?();
      func_?(this_00);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
      uStack5 =
           func_?(&
                           System__Action<System::Object,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__ReflectionDelegateFactory__CreateSet<System::Object>_System__Reflection__MemberInfo_
                          );
      pEStack6 = this_00;
      func_?();
      pcVar7 = (code *)swi(3);
      pAVar8 = (Action_2_Object_Object_ *)(*pcVar7)();
      return pAVar8;
    }
    pMVar3 = (method->field7_0x1c).rgctx_data[1].method;
  }
  else {
    pMVar3 = ((method->field7_0x1c).rgctx_data)->method;
  }
  func_?((&(this->klass->vtable).Equals)[pMVar3->slot].method,pMVar3,&stack0xfffffff4);
  pAVar8 = (Action_2_Object_Object_ *)(*in_stack_9)(this,left,in_stack_10);
  return pAVar8;
}

