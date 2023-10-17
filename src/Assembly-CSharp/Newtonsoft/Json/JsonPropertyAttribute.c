
/* JsonPropertyAttribute(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::JsonPropertyAttribute__ctor_1
               (JsonPropertyAttribute *this,String *propertyName,MethodInfo *method)

{
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  (this->fields)._PropertyName_k__BackingField = propertyName;
  func_?(&(this->fields)._PropertyName_k__BackingField,propertyName);
  return;
}


/* DefaultValueHandling get_DefaultValueHandling() */

DefaultValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_DefaultValueHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._defaultValueHandling.value;
}


/* Boolean get_IsReference() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_get_IsReference(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    cRam_? = '\x01';
  }
  return (this->fields)._isReference.value;
}


/* NullValueHandling get_NullValueHandling() */

NullValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_NullValueHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._nullValueHandling.value;
}


/* ObjectCreationHandling get_ObjectCreationHandling() */

ObjectCreationHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_ObjectCreationHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__GetValueOrDefault__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._objectCreationHandling.value;
}


/* Int32 get_Order() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
        JsonPropertyAttribute_get_Order(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    cRam_? = '\x01';
  }
  return (this->fields)._order.value;
}


/* ReferenceLoopHandling get_ReferenceLoopHandling() */

ReferenceLoopHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_ReferenceLoopHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__GetValueOrDefault__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._referenceLoopHandling.value;
}


/* TypeNameHandling get_TypeNameHandling() */

TypeNameHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
JsonPropertyAttribute_get_TypeNameHandling(JsonPropertyAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__GetValueOrDefault__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._typeNameHandling.value;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_DefaultValueHandling
               (JsonPropertyAttribute *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__Nullable_Newtonsoft__Json__DefaultValueHandling_
                   );
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,
             MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__Nullable_Newtonsoft__Json__DefaultValueHandling_
            );
  (this->fields)._defaultValueHandling.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._defaultValueHandling.field_0x1 = NStack_1._1_3_;
  (this->fields)._defaultValueHandling.value = NStack_1.value;
  return;
}


/* Void set_IsReference(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_IsReference
               (JsonPropertyAttribute *this,bool value,MethodInfo *method)

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


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_NullValueHandling
               (JsonPropertyAttribute *this,NullValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__Nullable_Newtonsoft__Json__NullValueHandling_
                   );
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,
             MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__Nullable_Newtonsoft__Json__NullValueHandling_
            );
  (this->fields)._nullValueHandling.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._nullValueHandling.field_0x1 = NStack_1._1_3_;
  (this->fields)._nullValueHandling.value = NStack_1.value;
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_ObjectCreationHandling
               (JsonPropertyAttribute *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__Nullable_Newtonsoft__Json__ObjectCreationHandling_
                   );
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,
             MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__Nullable_Newtonsoft__Json__ObjectCreationHandling_
            );
  (this->fields)._objectCreationHandling.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._objectCreationHandling.field_0x1 = NStack_1._1_3_;
  (this->fields)._objectCreationHandling.value = NStack_1.value;
  return;
}


/* Void set_Order(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::JsonPropertyAttribute_set_Order
               (JsonPropertyAttribute *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,MethodInfo__System__Nullable<int>__Nullable_int_);
  (this->fields)._order.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._order.field_0x1 = NStack_1._1_3_;
  (this->fields)._order.value = NStack_1.value;
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_ReferenceLoopHandling
               (JsonPropertyAttribute *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__Nullable_Newtonsoft__Json__ReferenceLoopHandling_
                   );
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,
             MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__Nullable_Newtonsoft__Json__ReferenceLoopHandling_
            );
  (this->fields)._referenceLoopHandling.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._referenceLoopHandling.field_0x1 = NStack_1._1_3_;
  (this->fields)._referenceLoopHandling.value = NStack_1.value;
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonPropertyAttribute::
     JsonPropertyAttribute_set_TypeNameHandling
               (JsonPropertyAttribute *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__Nullable_Newtonsoft__Json__TypeNameHandling_
                   );
    cRam_? = '\x01';
  }
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,value,
             MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__Nullable_Newtonsoft__Json__TypeNameHandling_
            );
  (this->fields)._typeNameHandling.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields)._typeNameHandling.field_0x1 = NStack_1._1_3_;
  (this->fields)._typeNameHandling.value = NStack_1.value;
  return;
}

