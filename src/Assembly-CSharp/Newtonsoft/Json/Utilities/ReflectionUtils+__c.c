
/* Object <CreateGeneric>b__44_0(Type, IList`1[System.Object]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c::
         ReflectionUtils_c__CreateGeneric_b__44_0
                   (ReflectionUtils_c *this,Type *t,IList_1_System_Object_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
                   );
    cRam_? = '\x01';
  }
  args = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                   ((IEnumerable_1_System_Object_ *)a,
                    System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
                   );
  if (cRam_? == '\0') {
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  paramName = StringLiteral_type;
  if (t != (Type *)0x0) {
    pOVar1 = mscorlib.dll::System::Activator::Activator_CreateInstance_2(t,args,(MethodInfo *)0x0);
    return pOVar1;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Boolean <GetChildPrivateFields>b__52_0(FieldInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c::
     ReflectionUtils_c__GetChildPrivateFields_b__52_0
               (ReflectionUtils_c *this,FieldInfo_1 *f,MethodInfo *method)

{
  if (f != (FieldInfo_1 *)0x0) {
    bVar1 = mscorlib.dll::System::Reflection::FieldInfo::FieldInfo_1_get_IsPrivate
                      (f,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* <>f__AnonymousType0`2[System.Int32,System.Collections.Generic.IEnumerable`1[System.Reflection.MemberInfo]]
   <GetFieldsAndProperties>b__36_1(IGrouping`2[System.String,System.Reflection.MemberInfo]) */

_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
* Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c::
  ReflectionUtils_c__GetFieldsAndProperties_b__36_1
            (ReflectionUtils_c *this,IGrouping_2_System_String_System_Reflection_MemberInfo_ *g,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                   );
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__Count<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    MethodInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>____f__AnonymousType0_int__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                   );
    func_?(&
                    TypeInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>
                   );
    cRam_? = '\x01';
  }
  id = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_1
                 ((IEnumerable_1_System_Object_ *)g,
                  int_MethodInfo__System__Linq__Enumerable__Count<System::Reflection::MemberInfo>_System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
                 );
  highlightData =
       (Object *)
       System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                 ((IEnumerable *)g,
                  System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_MethodInfo__System__Linq__Enumerable__Cast<System::Reflection::MemberInfo>_System__Collections__IEnumerable_
                 );
  p_Var2 = (_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
            *)func_?(
                             TypeInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>
                             );
  if (p_Var2 != (_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
                 *)0x0) {
    Highlight`1[System::Object]::Highlight_1_System_Object___ctor
              ((Highlight_1_System_Object_ *)p_Var2,id,highlightData,
               MethodInfo____f__AnonymousType0<int,_System::Collections::Generic::IEnumerable<System::Reflection::MemberInfo>_>____f__AnonymousType0_int__System__Collections__Generic__IEnumerable<System::Reflection::MemberInfo>_
              );
    return p_Var2;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  p_Var2 = (_f_AnonymousType0_2_System_Int32_System_Collections_Generic_IEnumerable_1_System_Reflection_MemberInfo_
            *)(*pcVar1)();
  return p_Var2;
}


/* Type <GetMemberInfoFromType>b__50_0(ParameterInfo) */

Type * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c::
       ReflectionUtils_c__GetMemberInfoFromType_b__50_0
                 (ReflectionUtils_c *this,ParameterInfo *p,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (p != (ParameterInfo *)0x0) {
    pMStack_1 = (p->klass->vtable).get_ParameterType.method;
    pPStack_2 = p;
    pTVar3 = (Type *)(*(p->klass->vtable).get_ParameterType.methodPtr)();
    return pTVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar6)();
  return pTVar3;
}


/* ReflectionUtils+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c::ReflectionUtils_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
    cRam_? = '\x01';
  }
  value = (ReflectionUtils_c *)
          func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c);
  if (value != (ReflectionUtils_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ReflectionUtils____c->static_fields,value
                   );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

