
/* Boolean <CreateObjectContract>b__25_0(ConstructorInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver+<>c::
     DefaultContractResolver_c__CreateObjectContract_b__25_0
               (DefaultContractResolver_c *this,ConstructorInfo *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__JsonConstructorAttribute);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__JsonConstructorAttribute;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (c != (ConstructorInfo *)0x0) {
    bVar2 = (*(c->klass->vtable).__unknown_3.methodPtr)
                      (c,pTVar1,1,(c->klass->vtable).__unknown_3.method);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Int32 <CreateProperties>b__45_0(JsonProperty) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver+<>c::
        DefaultContractResolver_c__CreateProperties_b__45_0
                  (DefaultContractResolver_c *this,JsonProperty *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Nullable<int>__GetValueOrDefault__;
    func_?();
    ppMStack_2 = &MethodInfo__System__Nullable<int>__get_HasValue__;
    func_?();
    cRam_? = '\x01';
  }
  if (p != (JsonProperty *)0x0) {
    iVar3 = -1;
    if ((p->fields)._Order_k__BackingField.hasValue != 0) {
      iVar3 = (p->fields)._Order_k__BackingField.value;
    }
    return iVar3;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  iVar3 = (*pcVar6)();
  return iVar3;
}


/* Boolean <GetAttributeConstructor>b__26_0(ConstructorInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver+<>c::
     DefaultContractResolver_c__GetAttributeConstructor_b__26_0
               (DefaultContractResolver_c *this,ConstructorInfo *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__Newtonsoft__Json__JsonConstructorAttribute);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__Newtonsoft__Json__JsonConstructorAttribute;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (c != (ConstructorInfo *)0x0) {
    bVar2 = (*(c->klass->vtable).__unknown_3.methodPtr)
                      (c,pTVar1,1,(c->klass->vtable).__unknown_3.method);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean <GetSerializableMembers>b__23_1(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver+<>c::
     DefaultContractResolver_c__GetSerializableMembers_b__23_1
               (DefaultContractResolver_c *this,MemberInfo_1 *m,MethodInfo *method)

{
  bVar1 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsIndexedProperty(m,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* DefaultContractResolver+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::DefaultContractResolver+<>c::
     DefaultContractResolver_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
    cRam_? = '\x01';
  }
  value = (DefaultContractResolver_c *)
          func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c);
  if (value != (DefaultContractResolver_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->static_fields->__9 =
         value;
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver____c->
                    static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

