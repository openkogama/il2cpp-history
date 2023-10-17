
/* Void AddProperty(JsonProperty) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
     JsonPropertyCollection_AddProperty
               (JsonPropertyCollection *this,JsonProperty *property,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Add_Newtonsoft__Json__Serialization__JsonProperty_
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Remove_Newtonsoft__Json__Serialization__JsonProperty_
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__Contains_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__get_Item_System__String_
                   );
    cRam_? = '\x01';
  }
  if (property != (JsonProperty *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::Object,System
            ::Object]::KeyedCollection_2_System_Object_System_Object__Contains
                      ((KeyedCollection_2_System_Object_System_Object_ *)this,
                       (Object *)(property->fields)._PropertyName_k__BackingField,
                       MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__Contains_System__String_
                      );
    if (bVar1 == 0) {
code_?:
      mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
      Collection_1_System_Object__Add
                ((Collection_1_System_Object_ *)this,(Object *)property,
                 MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Add_Newtonsoft__Json__Serialization__JsonProperty_
                );
      return;
    }
    if ((property->fields)._Ignored_k__BackingField != 0) {
      return;
    }
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::KeyedCollection`2[System::Object,System
             ::Object]::KeyedCollection_2_System_Object_System_Object__get_Item
                       ((KeyedCollection_2_System_Object_System_Object_ *)this,
                        (Object *)(property->fields)._PropertyName_k__BackingField,
                        MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__get_Item_System__String_
                       );
    if (pOVar2 != (Object *)0x0) {
      if (*(char *)&pOVar2[5].klass != '\0') {
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
        Collection_1_System_Object__Remove
                  ((Collection_1_System_Object_ *)this,pOVar2,
                   MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__Remove_Newtonsoft__Json__Serialization__JsonProperty_
                  );
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  func_?();
  pOVar2 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
           Tuple_3_Object_Object_Object__get_Item1
                     ((Tuple_3_Object_Object_Object_ *)property,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pOVar2);
  func_?();
  func_?();
  func_?();
  func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_A_member_with_the_name___0___alr);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar4 = func_?();
  this_00 = (JsonSerializationException *)func_?(uVar4);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  uStack5 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Serialization__JsonPropertyCollection__AddProperty_Newtonsoft__Json__Serialization__JsonProperty_
                      );
  pJStack6 = this_00;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
  }
  pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::Object]::
           Collection_1_System_Object__GetEnumerator
                     ((Collection_1_System_Object_ *)this,
                      MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                     );
  uStack_1 = 1;
  while (pIVar4 != (IEnumerator_1_System_Object_ *)0x0) {
    cVar5 = func_?(0);
    if (cVar5 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIVar4 != (IEnumerator_1_System_Object_ *)0x0) {
        func_?(0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return (JsonProperty *)0x0;
    }
    if (pIVar4 == (IEnumerator_1_System_Object_ *)0x0) break;
    pJVar6 = (JsonProperty *)func_?(0);
    if (pJVar6 == (JsonProperty *)0x0) break;
    bVar7 = mscorlib.dll::System::String::String_Equals_4
                      (propertyName,(pJVar6->fields)._PropertyName_k__BackingField,comparisonType,
                       (MethodInfo *)0x0);
    if (bVar7 != 0) {
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return pJVar6;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar6 = (JsonProperty *)(*pcVar8)();
  return pJVar6;
}


/* JsonPropertyCollection(Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonPropertyCollection::
     JsonPropertyCollection__ctor(JsonPropertyCollection *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
                   );
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
  ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
            ((ParameterOverride_1_System_Object_ *)this,
             MethodInfo__System__Collections__ObjectModel__KeyedCollection<System::String,_Newtonsoft::Json::Serialization::JsonProperty>__KeyedCollection__
            );
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  (this->fields)._type = type;
  func_?(&(this->fields)._type,type);
  return;
}

