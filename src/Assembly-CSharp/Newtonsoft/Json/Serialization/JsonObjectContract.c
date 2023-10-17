
/* JsonObjectContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonObjectContract::
     JsonObjectContract__ctor(JsonObjectContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    cRam_? = '\x01';
  }
  JsonContract::JsonContract__ctor((JsonContract *)this,underlyingType,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._._UnderlyingType_k__BackingField;
  pJVar2 = (JsonPropertyCollection *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
  if (pJVar2 != (JsonPropertyCollection *)0x0) {
    JsonPropertyCollection::JsonPropertyCollection__ctor(pJVar2,pTVar1,(MethodInfo *)0x0);
    (this->fields)._Properties_k__BackingField = pJVar2;
    func_?(&(this->fields)._Properties_k__BackingField,pJVar2);
    pTVar1 = (this->fields)._._UnderlyingType_k__BackingField;
    pJVar2 = (JsonPropertyCollection *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
    if (pJVar2 != (JsonPropertyCollection *)0x0) {
      JsonPropertyCollection::JsonPropertyCollection__ctor(pJVar2,pTVar1,(MethodInfo *)0x0);
      (this->fields)._ConstructorParameters_k__BackingField = pJVar2;
      func_?(&(this->fields)._ConstructorParameters_k__BackingField,pJVar2);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_ParametrizedConstructor(ConstructorInfo) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonObjectContract::
     JsonObjectContract_set_ParametrizedConstructor
               (JsonObjectContract *this,ConstructorInfo *value,MethodInfo *method)

{
  (this->fields)._ParametrizedConstructor_k__BackingField = value;
  func_?(&(this->fields)._ParametrizedConstructor_k__BackingField,value);
  return;
}

