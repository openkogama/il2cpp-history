
/* Boolean get_IsReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonContainerAttribute::
     JsonContainerAttribute_get_IsReference(JsonContainerAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    cRam_? = '\x01';
  }
  return (this->fields)._isReference.value;
}


/* Void set_IsReference(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonContainerAttribute::
     JsonContainerAttribute_set_IsReference
               (JsonContainerAttribute *this,bool value,MethodInfo *method)

{
  uStack_1._2_2_ = (ushort)((uint)in_ECX >> 0x10);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    cRam_? = '\x01';
  }
  uStack_1 = (uint)uStack_1._2_2_ << 0x10;
  mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
            ((Nullable_1_SByte_ *)&uStack_1,value,MethodInfo__System__Nullable<bool>__Nullable_bool_
            );
  (this->fields)._isReference = uStack_1._0_2_;
  return;
}

