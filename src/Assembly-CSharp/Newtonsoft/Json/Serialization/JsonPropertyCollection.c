
/* Void AddProperty(JsonProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
     JsonPropertyCollection_AddProperty
               (JsonPropertyCollection *this,JsonProperty *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property != (JsonProperty *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
            String,Newtonsoft::Json::Serialization::JsonProperty]::
            KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty__Contains
                      ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_
                        *)this,(property->fields)._PropertyName_k__BackingField,
                       MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__Contains_System__String_
                      );
    if (bVar1 == 0) {
code_?:
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Linq::JToken]::
      Collection_1_Newtonsoft_Json_Linq_JToken__Add
                ((Collection_1_Newtonsoft_Json_Linq_JToken_ *)this,(JToken *)property,
                 MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Add_Newtonsoft__Json__Serialization__JsonProperty_
                );
      return;
    }
    if ((property->fields)._Ignored_k__BackingField != 0) {
      return;
    }
    item = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::
           String,Newtonsoft::Json::Serialization::JsonProperty]::
           KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty__get_Item
                     ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *
                      )this,(property->fields)._PropertyName_k__BackingField,
                      MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__get_Item_System__String_
                     );
    if (item != (JsonProperty *)0x0) {
      if ((item->fields)._Ignored_k__BackingField != 0) {
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Schema::
        JsonSchemaNode]::Collection_1_Newtonsoft_Json_Schema_JsonSchemaNode__Remove
                  ((Collection_1_Newtonsoft_Json_Schema_JsonSchemaNode_ *)this,
                   (JsonSchemaNode *)item,
                   MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Remove_Newtonsoft__Json__Serialization__JsonProperty_
                  );
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?();
  func_?(property,0);
  pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)property,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pIVar2);
  func_?();
  func_?();
  func_?();
  func_?(args);
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_A_member_with_the_name___0___alr,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pMStack3 =
       MethodInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection__AddProperty_Newtonsoft__Json__Serialization__JsonProperty_
  ;
  uStack4 = 0;
  pJStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* JsonProperty GetClosestMatchProperty(String) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
JsonPropertyCollection_GetClosestMatchProperty
          (JsonPropertyCollection *this,String *propertyName,MethodInfo *method)

{
  pJVar1 = JsonPropertyCollection_GetProperty
                     (this,propertyName,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
  if (pJVar1 == (JsonProperty *)0x0) {
    pJVar1 = JsonPropertyCollection_GetProperty
                       ((JsonPropertyCollection *)0x5,(String *)0x0,
                        StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0);
  }
  return pJVar1;
}


/* String GetKeyForItem(JsonProperty) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
         JsonPropertyCollection_GetKeyForItem
                   (JsonPropertyCollection *this,JsonProperty *item,MethodInfo *method)

{
  if (item != (JsonProperty *)0x0) {
    return (item->fields)._PropertyName_k__BackingField;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar1)();
  return pSVar2;
}


/* JsonProperty GetProperty(String, StringComparison) */

JsonProperty *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
JsonPropertyCollection_GetProperty
          (JsonPropertyCollection *this,String *propertyName,StringComparison__Enum comparisonType,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJStack_4 = (JsonProperty *)0x0;
  func_?();
  pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_IEnumerable_GetEnumerator
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                      MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                     );
  uStack_1 = 0;
  do {
    if (pIVar5 == (IEnumerator *)0x0) {
code_?:
      uVar6 = func_?();
      func_?(uVar6);
      pcVar7 = (code *)swi(3);
      pJVar8 = (JsonProperty *)(*pcVar7)();
      return pJVar8;
    }
    cVar9 = func_?(1);
    if (cVar9 == '\0') {
      pIVar10 = (IDisposable__Class *)0x49;
      goto code_?;
    }
    pJVar8 = (JsonProperty *)func_?(0);
    if (pJVar8 == (JsonProperty *)0x0) goto code_?;
    b = (pJVar8->fields)._PropertyName_k__BackingField;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar11 = mscorlib.dll::System::String::String_Equals_3
                      (propertyName,b,comparisonType,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      pIVar10 = (IDisposable__Class *)0x4b;
      pJStack_4 = pJVar8;
code_?:
      uStack_1 = 0xffffffff;
      if (pIVar5 != (IEnumerator *)0x0) {
        pIVar10 = TypeInfo__System__IDisposable;
        func_?(0);
      }
      if (pIVar10 == (IDisposable__Class *)0x4b) {
        *unaff_FS_OFFSET = uStack_3;
        return pJStack_4;
      }
      *unaff_FS_OFFSET = uStack_3;
      return (JsonProperty *)0x0;
    }
  } while( true );
}


/* JsonPropertyCollection(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
     JsonPropertyCollection__ctor(JsonPropertyCollection *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::String,Newtonsoft::Json
  ::Serialization::JsonProperty]::
  KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty___ctor
            ((KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  (this->fields)._type = type;
  return;
}

