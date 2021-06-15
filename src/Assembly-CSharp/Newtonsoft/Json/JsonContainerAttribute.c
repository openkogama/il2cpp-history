
/* Boolean get_IsReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonContainerAttribute::
     JsonContainerAttribute_get_IsReference(JsonContainerAttribute *this,MethodInfo *method)

{
  uStack_1 = (undefined2)((uint)in_ECX >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  _NStack_8 = CONCAT22(uStack_1,(this->fields)._isReference);
  cVar2 = func_?(&NStack_3,MethodInfo__System__Nullable<bool>__get_HasValue__);
  if (cVar2 == '\0') {
    return 0;
  }
  bVar4 = func_?(&NStack_3,MethodInfo__System__Nullable<bool>__get_Value__);
  return bVar4;
}


/* Void set_IsReference(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonContainerAttribute::
     JsonContainerAttribute_set_IsReference
               (JsonContainerAttribute *this,bool value,MethodInfo *method)

{
  uStack_1._2_2_ = (ushort)((uint)in_ECX >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (uint)uStack_1._2_2_ << 0x10;
  func_?(&uStack_1,_value,MethodInfo__System__Nullable<bool>__Nullable_bool_);
  (this->fields)._isReference = uStack_1._0_2_;
  return;
}

