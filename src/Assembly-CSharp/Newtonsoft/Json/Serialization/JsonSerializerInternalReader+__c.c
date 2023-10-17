
/* String 
   <CreateObjectFromNonDefaultConstructor>b__33_2(KeyValuePair`2[System.Reflection.ParameterInfo,System.Object])
    */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader+<>c::
         JsonSerializerInternalReader_c__CreateObjectFromNonDefaultConstructor_b__33_2
                   (JsonSerializerInternalReader_c *this,
                   KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_ kv,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)
                &
                MethodInfo__System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>__get_Key__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (kv.key != (ParameterInfo *)0x0) {
    pMStack_1 = ((kv.key)->klass->vtable).get_Name.method;
    pPStack_2 = kv.key;
    pSVar3 = (String *)(*((kv.key)->klass->vtable).get_Name.methodPtr)();
    return pSVar3;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar6)();
  return pSVar3;
}


/* JsonSerializerInternalReader+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader+<>c::
     JsonSerializerInternalReader_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
    cRam_? = '\x01';
  }
  value = (JsonSerializerInternalReader_c *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c
                         );
  if (value != (JsonSerializerInternalReader_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->static_fields->__9
         = value;
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                    static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

