
/* JsonPropertyAttribute(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::JsonPropertyAttribute__ctor_1
               (JsonPropertyAttribute *this,String *propertyName,MethodInfo *method)

{
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields)._PropertyName_k__BackingField = propertyName;
  return;
}


/* DefaultValueHandling get_DefaultValueHandling() */

DefaultValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_DefaultValueHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._defaultValueHandling.value;
  uStack_2 = *(undefined4 *)&(this->fields)._defaultValueHandling.has_value;
  cVar3 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__get_HasValue__
                         );
  if (cVar3 == '\0') {
    return DefaultValueHandling__Enum_Include;
  }
  DVar4 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__get_Value__
                         );
  return DVar4;
}


/* Boolean get_IsReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_get_IsReference(JsonPropertyAttribute *this,MethodInfo *method)

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


/* NullValueHandling get_NullValueHandling() */

NullValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_NullValueHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._nullValueHandling.value;
  uStack_2 = *(undefined4 *)&(this->fields)._nullValueHandling.has_value;
  cVar3 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_HasValue__
                         );
  if (cVar3 == '\0') {
    return NullValueHandling__Enum_Include;
  }
  NVar4 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_Value__
                         );
  return NVar4;
}


/* ObjectCreationHandling get_ObjectCreationHandling() */

ObjectCreationHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_ObjectCreationHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._objectCreationHandling.value;
  uStack_2 = *(undefined4 *)&(this->fields)._objectCreationHandling.has_value;
  cVar3 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__get_HasValue__
                         );
  if (cVar3 == '\0') {
    return ObjectCreationHandling__Enum_Auto;
  }
  OVar4 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__get_Value__
                         );
  return OVar4;
}


/* Int32 get_Order() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
        JsonPropertyAttribute_get_Order(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._order.value;
  uStack_2 = *(undefined4 *)&(this->fields)._order.has_value;
  cVar3 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_HasValue__);
  if (cVar3 == '\0') {
    return 0;
  }
  iVar4 = func_?(&iStack_1,MethodInfo__System__Nullable<int>__get_Value__);
  return iVar4;
}


/* ReferenceLoopHandling get_ReferenceLoopHandling() */

ReferenceLoopHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_ReferenceLoopHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._referenceLoopHandling.value;
  uStack_2 = *(undefined4 *)&(this->fields)._referenceLoopHandling.has_value;
  cVar3 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__get_HasValue__
                         );
  if (cVar3 == '\0') {
    return ReferenceLoopHandling__Enum_Error;
  }
  RVar4 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__get_Value__
                         );
  return RVar4;
}


/* TypeNameHandling get_TypeNameHandling() */

TypeNameHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_TypeNameHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = (this->fields)._typeNameHandling.value;
  uStack_2 = *(undefined4 *)&(this->fields)._typeNameHandling.has_value;
  cVar3 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                         );
  if (cVar3 == '\0') {
    return TypeNameHandling__Enum_None;
  }
  TVar4 = func_?(&iStack_1,
                          MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_Value__
                         );
  return TVar4;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_DefaultValueHandling
               (JsonPropertyAttribute *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,
                  MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__Nullable_Newtonsoft__Json__DefaultValueHandling_
                 );
  (this->fields)._defaultValueHandling.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._defaultValueHandling.has_value = uStack_1._4_4_;
  return;
}


/* Void set_IsReference(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_IsReference
               (JsonPropertyAttribute *this,bool value,MethodInfo *method)

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


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_NullValueHandling
               (JsonPropertyAttribute *this,NullValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,
                  MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__Nullable_Newtonsoft__Json__NullValueHandling_
                 );
  (this->fields)._nullValueHandling.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._nullValueHandling.has_value = uStack_1._4_4_;
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_ObjectCreationHandling
               (JsonPropertyAttribute *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,
                  MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__Nullable_Newtonsoft__Json__ObjectCreationHandling_
                 );
  (this->fields)._objectCreationHandling.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._objectCreationHandling.has_value = uStack_1._4_4_;
  return;
}


/* Void set_Order(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::JsonPropertyAttribute_set_Order
               (JsonPropertyAttribute *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,MethodInfo__System__Nullable<int>__Nullable_int_);
  (this->fields)._order.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._order.has_value = uStack_1._4_4_;
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_ReferenceLoopHandling
               (JsonPropertyAttribute *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,
                  MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__Nullable_Newtonsoft__Json__ReferenceLoopHandling_
                 );
  (this->fields)._referenceLoopHandling.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._referenceLoopHandling.has_value = uStack_1._4_4_;
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_TypeNameHandling
               (JsonPropertyAttribute *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,value,
                  MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__Nullable_Newtonsoft__Json__TypeNameHandling_
                 );
  (this->fields)._typeNameHandling.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._typeNameHandling.has_value = uStack_1._4_4_;
  return;
}

