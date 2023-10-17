
/* Nullable`1[Newtonsoft.Json.DefaultValueHandling] get_DefaultValueHandling() */

Nullable_1_Newtonsoft_Json_DefaultValueHandling_
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
JsonProperty_get_DefaultValueHandling(JsonProperty *this,MethodInfo *method)

{
  return (this->fields)._DefaultValueHandling_k__BackingField;
}


/* Nullable`1[Boolean] get_IsReference() */

Nullable_1_Boolean_
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::JsonProperty_get_IsReference
          (JsonProperty *this,MethodInfo *method)

{
  return (this->fields)._IsReference_k__BackingField;
}


/* Nullable`1[Newtonsoft.Json.NullValueHandling] get_NullValueHandling() */

Nullable_1_Newtonsoft_Json_NullValueHandling_
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
JsonProperty_get_NullValueHandling(JsonProperty *this,MethodInfo *method)

{
  return (this->fields)._NullValueHandling_k__BackingField;
}


/* Nullable`1[Newtonsoft.Json.TypeNameHandling] get_TypeNameHandling() */

Nullable_1_Newtonsoft_Json_TypeNameHandling_
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
JsonProperty_get_TypeNameHandling(JsonProperty *this,MethodInfo *method)

{
  return (this->fields)._TypeNameHandling_k__BackingField;
}


/* Boolean get_Writable() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::JsonProperty_get_Writable
               (JsonProperty *this,MethodInfo *method)

{
  return (this->fields)._Writable_k__BackingField;
}


/* Void set_DefaultValueHandling(Nullable`1[Newtonsoft.Json.DefaultValueHandling]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
     JsonProperty_set_DefaultValueHandling
               (JsonProperty *this,Nullable_1_Newtonsoft_Json_DefaultValueHandling_ value,
               MethodInfo *method)

{
  (this->fields)._DefaultValueHandling_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._DefaultValueHandling_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._DefaultValueHandling_k__BackingField.value = value.value;
  return;
}


/* Void set_IsReference(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
     JsonProperty_set_IsReference(JsonProperty *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._IsReference_k__BackingField = value;
  return;
}


/* Void set_NullValueHandling(Nullable`1[Newtonsoft.Json.NullValueHandling]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
     JsonProperty_set_NullValueHandling
               (JsonProperty *this,Nullable_1_Newtonsoft_Json_NullValueHandling_ value,
               MethodInfo *method)

{
  (this->fields)._NullValueHandling_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._NullValueHandling_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._NullValueHandling_k__BackingField.value = value.value;
  return;
}


/* Void set_ObjectCreationHandling(Nullable`1[Newtonsoft.Json.ObjectCreationHandling]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
     JsonProperty_set_ObjectCreationHandling
               (JsonProperty *this,Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ value,
               MethodInfo *method)

{
  (this->fields)._ObjectCreationHandling_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._ObjectCreationHandling_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._ObjectCreationHandling_k__BackingField.value = value.value;
  return;
}


/* Void set_Readable(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::JsonProperty_set_Readable
               (JsonProperty *this,bool value,MethodInfo *method)

{
  (this->fields)._Readable_k__BackingField = value;
  return;
}


/* Void set_ReferenceLoopHandling(Nullable`1[Newtonsoft.Json.ReferenceLoopHandling]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::
     JsonProperty_set_ReferenceLoopHandling
               (JsonProperty *this,Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ value,
               MethodInfo *method)

{
  (this->fields)._ReferenceLoopHandling_k__BackingField.hasValue = value.hasValue;
  *(undefined3 *)&(this->fields)._ReferenceLoopHandling_k__BackingField.field_0x1 = value._1_3_;
  (this->fields)._ReferenceLoopHandling_k__BackingField.value = value.value;
  return;
}


/* Void set_Writable(Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonProperty::JsonProperty_set_Writable
               (JsonProperty *this,bool value,MethodInfo *method)

{
  (this->fields)._Writable_k__BackingField = value;
  return;
}

