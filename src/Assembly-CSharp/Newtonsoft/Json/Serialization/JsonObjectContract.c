
/* JsonObjectContract(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonObjectContract::
     JsonObjectContract__ctor(JsonObjectContract *this,Type *underlyingType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)underlyingType,StringLiteral_underlyingType,(MethodInfo *)0x0);
  (this->fields)._._UnderlyingType_k__BackingField = underlyingType;
  (this->fields)._._CreatedType_k__BackingField = underlyingType;
  pJVar1 = (JsonPropertyCollection *)
           func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar1,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)underlyingType,StringLiteral_type,(MethodInfo *)0x0);
  (pJVar1->fields)._type = underlyingType;
  (this->fields)._Properties_k__BackingField = pJVar1;
  value = (this->fields)._._UnderlyingType_k__BackingField;
  pJVar1 = (JsonPropertyCollection *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar1,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)value,StringLiteral_type,(MethodInfo *)0x0);
  (pJVar1->fields)._type = value;
  (this->fields)._ConstructorParameters_k__BackingField = pJVar1;
  return;
}

