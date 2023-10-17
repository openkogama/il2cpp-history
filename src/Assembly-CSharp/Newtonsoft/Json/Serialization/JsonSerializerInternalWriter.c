
/* Boolean CheckForCircularReference(Object, Nullable`1[Newtonsoft.Json.ReferenceLoopHandling],
   JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_CheckForCircularReference
               (JsonSerializerInternalWriter *this,Object *value,
               Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ referenceLoopHandling,
               JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color32);
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__IndexOf_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__GetValueOrDefault_Newtonsoft__Json__ReferenceLoopHandling_
                   );
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&TypeInfo__UnityEngine__Vector4);
    cRam_? = '\x01';
  }
  if ((value != (Object *)0x0) &&
     (((contract == (JsonContract *)0x0 ||
       ((contract->klass->_1).typeHierarchyDepth <
        (TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).typeHierarchyDepth))
      || ((contract->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).typeHierarchyDepth
           - 1] != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract))
     )) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__IndexOf
                      (this_00,(RegexCharClass_SingleRange)value,
                       MethodInfo__System__Collections__Generic__List<System::Object>__IndexOf_System__Object_
                      );
    if (iVar3 != -1) {
      pVVar4 = (Vector3__Class *)value->klass;
      pOVar5 = (Object *)0x0;
      if (pVVar4 == (Vector3__Class *)TypeInfo__UnityEngine__Vector2) {
        pOVar5 = value;
      }
      if (pOVar5 == (Object *)0x0) {
        pOVar5 = (Object *)0x0;
        if (pVVar4 == TypeInfo__UnityEngine__Vector3) {
          pOVar5 = value;
        }
        if (pOVar5 == (Object *)0x0) {
          pOVar5 = (Object *)0x0;
          if (pVVar4 == (Vector3__Class *)TypeInfo__UnityEngine__Vector4) {
            pOVar5 = value;
          }
          if (pOVar5 == (Object *)0x0) {
            pOVar5 = (Object *)0x0;
            if (pVVar4 == (Vector3__Class *)TypeInfo__UnityEngine__Color) {
              pOVar5 = value;
            }
            if (pOVar5 == (Object *)0x0) {
              pOVar5 = (Object *)0x0;
              if (pVVar4 == (Vector3__Class *)TypeInfo__UnityEngine__Color32) {
                pOVar5 = value;
              }
              if (pOVar5 == (Object *)0x0) {
                if ((this->fields)._._Serializer_k__BackingField != (JsonSerializer *)0x0) {
                  uVar6 = func_?(0x10);
                  uVar6 = mscorlib.dll::System::Nullable`1[UInt32]::
                          Nullable_1_UInt32__GetValueOrDefault_1
                                    ((Nullable_1_UInt32_ *)&referenceLoopHandling,uVar6,
                                     MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__GetValueOrDefault_Newtonsoft__Json__ReferenceLoopHandling_
                                    );
                  if (uVar6 != 0) {
                    if (uVar6 == 1) {
                      return 0;
                    }
                    if (uVar6 == 2) {
                      return 1;
                    }
                    referenceLoopHandling._0_4_ = &TypeInfo__System__Globalization__CultureInfo;
                    func_?();
                    func_?();
                    pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::
                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                    referenceLoopHandling.value = 1;
                    referenceLoopHandling._0_4_ = &TypeInfo__System__Object;
                    referenceLoopHandling._0_4_ = func_?();
                    iVar3 = func_?();
                    mscorlib.dll::System::Tuple`3[Object,Object,Object]::
                    Tuple_3_Object_Object_Object__get_Item3
                              ((Tuple_3_Object_Object_Object_ *)0x0,(MethodInfo *)0x0);
                    func_?();
                    func_?();
                    referenceLoopHandling.value = (int32_t)&UNK_?;
                    func_?();
                    referenceLoopHandling.value = (int32_t)&UNK_?;
                    uVar8 = func_?();
                    referenceLoopHandling._0_4_ = &UNK_?;
                    referenceLoopHandling.value = iVar3;
                    func_?();
                    referenceLoopHandling._0_4_ = uVar8;
                    func_?();
                    referenceLoopHandling.value = (int32_t)&UNK_?;
                    func_?();
                    referenceLoopHandling.value = 0;
                    referenceLoopHandling._0_4_ = iVar3;
                    pSVar9 = (String *)func_?();
                    value = (Object *)
                            Json::Utilities::StringUtils::StringUtils_FormatWith
                                      (pSVar9,(IFormatProvider *)pCVar7,
                                       (Object__Array *)referenceLoopHandling._0_4_,
                                       (MethodInfo *)referenceLoopHandling.value);
                    referenceLoopHandling.value =
                         (int32_t)&TypeInfo__System__InvalidOperationException;
                    referenceLoopHandling._0_4_ = &UNK_?;
                    referenceLoopHandling._0_4_ = func_?();
                    this_01 = (InvalidOperationException *)func_?();
                    func_?();
                    mscorlib.dll::System::InvalidOperationException::
                    InvalidOperationException__ctor_1(this_01,(String *)value,(MethodInfo *)0x0);
                    func_?();
                    func_?();
                  }
                  referenceLoopHandling._0_4_ = &TypeInfo__System__Globalization__CultureInfo;
                  func_?();
                  func_?();
                  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                  referenceLoopHandling.value = 1;
                  referenceLoopHandling._0_4_ = &TypeInfo__System__Object;
                  referenceLoopHandling._0_4_ = func_?();
                  uVar8 = func_?();
                  func_?();
                  mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
                  func_?();
                  func_?(uVar8);
                  referenceLoopHandling.value = (int32_t)&UNK_?;
                  func_?();
                  referenceLoopHandling.value = 0;
                  referenceLoopHandling._0_4_ = uVar8;
                  pSVar9 = (String *)func_?();
                  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                     (pSVar9,(IFormatProvider *)pCVar7,
                                      (Object__Array *)referenceLoopHandling._0_4_,
                                      (MethodInfo *)referenceLoopHandling.value);
                  referenceLoopHandling.value =
                       (int32_t)&TypeInfo__Newtonsoft__Json__JsonSerializationException;
                  referenceLoopHandling._0_4_ = &UNK_?;
                  referenceLoopHandling._0_4_ = func_?();
                  this_02 = (JsonSerializationException *)func_?();
                  func_?();
                  JsonSerializationException::JsonSerializationException__ctor_1
                            (this_02,pSVar9,(MethodInfo *)0x0);
                  func_?();
                  func_?();
                }
                goto code_?;
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}


/* JsonContract GetContractSafe(Object) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
JsonSerializerInternalWriter_GetContractSafe
          (JsonSerializerInternalWriter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      iVar2 = (*(pJVar1->klass->vtable).get_ContractResolver.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_ContractResolver.method);
      pTVar3 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        pJVar4 = (JsonContract *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                 iVar2,pTVar3);
        return pJVar4;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pJVar4 = (JsonContract *)(*pcVar5)();
    return pJVar4;
  }
  return (JsonContract *)0x0;
}


/* JsonSerializerProxy GetInternalSerializer() */

JsonSerializerProxy *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
JsonSerializerInternalWriter_GetInternalSerializer
          (JsonSerializerInternalWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
    cRam_? = '\x01';
  }
  if ((this->fields)._internalSerializer == (JsonSerializerProxy *)0x0) {
    pJVar1 = (JsonSerializerProxy *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
    if (pJVar1 == (JsonSerializerProxy *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pJVar1 = (JsonSerializerProxy *)(*pcVar2)();
      return pJVar1;
    }
    if (cRam_? == '\0') {
      func_?(&StringLiteral_serializerWriter);
      cRam_? = '\x01';
    }
    JsonSerializer::JsonSerializer__ctor((JsonSerializer *)pJVar1,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this,StringLiteral_serializerWriter,(MethodInfo *)0x0);
    (pJVar1->fields)._serializerWriter = this;
    func_?(&(pJVar1->fields)._serializerWriter,this);
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    (pJVar1->fields)._serializer = pJVar3;
    func_?(&(pJVar1->fields)._serializer,pJVar3);
    (this->fields)._internalSerializer = pJVar1;
    func_?(&(this->fields)._internalSerializer,pJVar1);
  }
  return (this->fields)._internalSerializer;
}


/* String GetPropertyName(DictionaryEntry) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
         JsonSerializerInternalWriter_GetPropertyName
                   (JsonSerializerInternalWriter *this,DictionaryEntry entry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__IConvertible);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  iVar2 = func_?(entry._key,TypeInfo__System__IConvertible);
  if (iVar2 != 0) {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar3 = mscorlib.dll::System::Convert::Convert_ToString_1
                       (entry._key,(IFormatProvider *)provider,(MethodInfo *)0x0);
    return pSVar3;
  }
  if (entry._key == (Object *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar4)();
    return pSVar3;
  }
  type = mscorlib.dll::System::Object::Object_GetType(entry._key,(MethodInfo *)0x0);
  bVar5 = JsonSerializerInternalWriter_TryConvertToString
                    (entry._key,type,&pSStack_1,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pSVar3 = (String *)(*((entry._key)->klass->vtable).ToString.methodPtr)();
    return pSVar3;
  }
  return pSStack_1;
}


/* String GetReference(JsonWriter, Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
         JsonSerializerInternalWriter_GetReference
                   (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pJVar4 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar4 != (JsonSerializer *)0x0) {
    iVar5 = (*(pJVar4->klass->vtable).get_ReferenceResolver.methodPtr)
                      (pJVar4,(pJVar4->klass->vtable).get_ReferenceResolver.method);
    if (iVar5 != 0) {
      pSVar6 = (String *)
               func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar5
                               ,this,value);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar6;
    }
  }
  func_?();
  func_?(*unaff_EDI);
  return (String *)&UNK_?;
}


/* Void HandleError(JsonWriter, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_HandleError
               (JsonSerializerInternalWriter *this,JsonWriter *writer,int32_t initialDepth,
               MethodInfo *method)

{
  JsonSerializerInternalBase::JsonSerializerInternalBase_ClearErrorContext
            ((JsonSerializerInternalBase *)this,(MethodInfo *)0x0);
  if (writer == (JsonWriter *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  while (initialDepth < (writer->fields)._top) {
    (*(writer->klass->vtable).WriteEnd.methodPtr)(writer,(writer->klass->vtable).WriteEnd.method);
  }
  return;
}


/* Boolean IsSpecified(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_IsSpecified
               (JsonSerializerInternalWriter *this,JsonProperty *property,Object *target,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (property == (JsonProperty *)0x0) {
    uVar2 = func_?(&pvStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((property->fields)._GetIsSpecified_k__BackingField != (Predicate_1_Object_ *)0x0) {
    pPVar6 = (property->fields)._GetIsSpecified_k__BackingField;
    puStack_1 = (pPVar6->fields)._._.method;
    pOStack_7 = target;
    pvStack_3 = (pPVar6->fields)._._.method_code;
    bVar5 = (*(pPVar6->fields)._._.invoke_impl)();
    return bVar5;
  }
  return 1;
}


/* Void Serialize(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_Serialize
               (JsonSerializerInternalWriter *this,JsonWriter *jsonWriter,Object *value,
               MethodInfo *method)

{
  if (jsonWriter == (JsonWriter *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_jsonWriter);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,method_00);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__Serialize_Newtonsoft__Json__JsonWriter__System__Object_
                           );
    func_?(this_00,uVar1);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
      cRam_? = '\x01';
    }
    if (value == (Object *)0x0) {
      valueContract = (JsonContract *)0x0;
code_?:
      JsonSerializerInternalWriter_SerializeValue
                (this,jsonWriter,value,valueContract,(JsonProperty *)0x0,(JsonContract *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 != (JsonSerializer *)0x0) {
      iVar3 = (*(pJVar2->klass->vtable).get_ContractResolver.methodPtr)
                        (pJVar2,(pJVar2->klass->vtable).get_ContractResolver.method);
      pTVar4 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
      if (iVar3 != 0) {
        valueContract =
             (JsonContract *)
             func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar3,
                             pTVar4);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SerializeConvertable(JsonWriter, JsonConverter, Object, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeConvertable
               (JsonSerializerInternalWriter *this,JsonWriter *writer,JsonConverter *converter,
               Object *value,JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    cRam_? = '\x01';
  }
  bVar1 = JsonSerializerInternalWriter_ShouldWriteReference
                    (this,value,(JsonProperty *)0x0,contract,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = JsonSerializerInternalWriter_CheckForCircularReference
                      (this,value,(Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                       (JsonContract *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pLVar2 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      if (pLVar2 != (List_1_System_Object_ *)0x0) {
        converter = (JsonConverter *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar2,value,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields)._internalSerializer == (JsonSerializerProxy *)0x0) {
          this_00 = (JsonSerializerProxy *)func_?();
          if (this_00 == (JsonSerializerProxy *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          JsonSerializer::JsonSerializer__ctor((JsonSerializer *)this_00,(MethodInfo *)0x0);
          Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                    ((Object *)this,StringLiteral_serializerWriter,(MethodInfo *)0x0);
          (this_00->fields)._serializerWriter = this;
          func_?();
          (this_00->fields)._serializer = (this->fields)._._Serializer_k__BackingField;
          func_?();
          (this->fields)._internalSerializer = this_00;
          converter = (JsonConverter *)&UNK_?;
          func_?();
        }
        if (converter != (JsonConverter *)0x0) {
          (*(converter->klass->vtable).__unknown.methodPtr)();
          pLVar2 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
          pLVar3 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
          if ((pLVar3 != (List_1_System_Object_ *)0x0) && (pLVar2 != (List_1_System_Object_ *)0x0))
          {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      (pLVar2,(pLVar3->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                      );
            return;
          }
        }
      }
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    JsonSerializerInternalWriter_WriteReference(this,writer,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void SerializeDictionary(JsonWriter, IWrappedDictionary, JsonDictionaryContract, JsonProperty,
   JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeDictionary
               (JsonSerializerInternalWriter *this,JsonWriter *writer,IWrappedDictionary *values,
               JsonDictionaryContract *contract,JsonProperty *member,
               JsonContract *collectionValueContract,MethodInfo *method)

{
  pMStack_1 = (MethodInfo_1 *)0xffffffff;
  pMStack_2 = (MethodInfo_1 *)&DAT_?;
  pJStack_3 = (JsonConverter *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pJStack_3;
  pJStack_4 = (JsonConverter *)&stack0xffffff98;
  pJVar5 = (JsonConverter *)&stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__DictionaryEntry);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&TypeRef__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
    pJVar5 = pJStack_4;
  }
  pJStack_4 = pJVar5;
  pJStack_6 = (JsonContract__Class *)0x0;
  if (values != (IWrappedDictionary *)0x0) {
    pOVar7 = (Object *)
             func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,values);
    unaff_ESI = (CultureInfo *)(this->fields)._._Serializer_k__BackingField;
    if ((unaff_ESI != (CultureInfo *)0x0) &&
       (SVar8 = (StreamingContext)
                (**(code **)(((_union_86 *)&unaff_ESI->klass)->__klassIndex + 0x1b4))
                          (unaff_ESI,
                           *(undefined4 *)(((_union_86 *)&unaff_ESI->klass)->__klassIndex + 0x1b8)),
       contract != (JsonDictionaryContract *)0x0)) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,pOVar7,SVar8,(MethodInfo *)0x0);
      unaff_ESI = (CultureInfo *)
                  JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      pOVar7 = (Object *)
               func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,values);
      if ((unaff_ESI != (CultureInfo *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)unaff_ESI,pOVar7,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    ), writer != (JsonWriter *)0x0)) {
        (*(writer->klass->vtable).WriteStartObject.methodPtr)
                  (writer,(writer->klass->vtable).WriteStartObject.method);
        NVar9 = (contract->fields)._._IsReference_k__BackingField;
        pOStack_10 = (Object *)CONCAT22(pOStack_10._2_2_,NVar9);
        unaff_ESI = (CultureInfo *)contract;
        if (NVar9.hasValue == 0) {
          pJVar11 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar11 == (JsonSerializer *)0x0) goto code_?;
          bVar12 = (*(pJVar11->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                            (pJVar11,(pJVar11->klass->vtable).get_PreserveReferencesHandling.method);
          bVar12 = bVar12 & 1;
        }
        else {
          bVar12 = NVar9.value;
        }
        if (bVar12 != 0) {
          (*(writer->klass->vtable).WritePropertyName.methodPtr)
                    (writer,StringLiteral__id,(writer->klass->vtable).WritePropertyName.method);
          pJVar11 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar11 == (JsonSerializer *)0x0) goto code_?;
          iVar13 = (*(pJVar11->klass->vtable).get_ReferenceResolver.methodPtr)
                             (pJVar11,(pJVar11->klass->vtable).get_ReferenceResolver.method);
          uVar14 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                   values);
          unaff_ESI = (CultureInfo *)0x0;
          if (iVar13 == 0) goto code_?;
          uVar14 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                   iVar13,this,uVar14);
          (*(writer->klass->vtable).WriteValue.methodPtr)
                    (writer,uVar14,(writer->klass->vtable).WriteValue.method);
        }
        bVar15 = JsonSerializerInternalWriter_ShouldWriteType
                          (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                           collectionValueContract,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pOVar7 = (Object *)func_?();
          unaff_ESI = (CultureInfo *)contract;
          if (pOVar7 == (Object *)0x0) goto code_?;
          pTVar16 = mscorlib.dll::System::Object::Object_GetType(pOVar7,(MethodInfo *)0x0);
          JsonSerializerInternalWriter_WriteTypeProperty(this,writer,pTVar16,(MethodInfo *)0x0);
        }
        pJVar11 = (this->fields)._._Serializer_k__BackingField;
        unaff_ESI = (CultureInfo *)contract;
        if (pJVar11 != (JsonSerializer *)0x0) {
          pCStack_17 = (CultureInfo *)
                       (*(pJVar11->klass->vtable).get_ContractResolver.methodPtr)
                                 (pJVar11,(pJVar11->klass->vtable).get_ContractResolver.method);
          handle = TypeRef__System__Object;
          pTVar16 = (contract->fields)._DictionaryValueType_k__BackingField;
          unaff_ESI = (CultureInfo *)contract;
          if (pTVar16 == (Type *)0x0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar16 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            unaff_ESI = (CultureInfo *)handle;
          }
          if (pCStack_17 != (CultureInfo *)0x0) {
            pJStack_18 = (JsonContract *)
                         func_?(0,
                                         TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                         ,pCStack_17,pTVar16);
            iStack_19 = (writer->fields)._top;
            pTStack_20 = (Type *)func_?(9,TypeInfo__System__Collections__IDictionary,values
                                                );
            ppTVar21 = &pTStack_20;
            contract_00 = (JsonContract *)&pJStack_6;
            pMStack_1 = (MethodInfo_1 *)0x0;
            while( true ) {
              pMStack_1 = (MethodInfo_1 *)CONCAT31(pMStack_1._1_3_,1);
              if (pTStack_20 == (Type *)0x0) break;
              cVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator,pTStack_20);
              if (cVar22 == '\0') {
                pMStack_1 = (MethodInfo_1 *)0xffffffff;
                pJVar23 = (JsonContract__Class *)
                          func_?(*ppTVar21,TypeInfo__System__IDisposable);
                contract_00->klass = pJVar23;
                if (pJVar23 != (JsonContract__Class *)0x0) {
                  func_?(0,TypeInfo__System__IDisposable,pJVar23);
                }
                pMStack_1 = (MethodInfo_1 *)0xffffffff;
                (*(writer->klass->vtable).WriteEndObject.methodPtr)
                          (writer,(writer->klass->vtable).WriteEndObject.method);
                unaff_ESI = (CultureInfo *)
                            JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                pLVar24 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                if ((pLVar24 != (List_1_System_Object_ *)0x0) && (unaff_ESI != (CultureInfo *)0x0))
                {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)unaff_ESI,(pLVar24->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                            );
                  pOVar7 = (Object *)
                           func_?(0,
                                           TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary
                                           ,values);
                  pJVar11 = (this->fields)._._Serializer_k__BackingField;
                  unaff_ESI = (CultureInfo *)0x0;
                  if (pJVar11 != (JsonSerializer *)0x0) {
                    SVar8 = (StreamingContext)
                            (*(pJVar11->klass->vtable).get_Context.methodPtr)
                                      (pJVar11,(pJVar11->klass->vtable).get_Context.method);
                    JsonContract::JsonContract_InvokeOnSerialized
                              ((JsonContract *)contract,pOVar7,SVar8,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pJStack_3;
                    return;
                  }
                }
                break;
              }
              if (pTStack_20 == (Type *)0x0) break;
              piVar25 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,
                                               pTStack_20);
              uVar26 = CONCAT44(TypeInfo__System__Collections__DictionaryEntry,piVar25);
              if (piVar25 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar25 + 0x20) !=
                  (TypeInfo__System__Collections__DictionaryEntry->_0).element_class)
              goto code_?;
              puVar27 = (undefined4 *)func_?(piVar25);
              pOVar7 = (Object *)*puVar27;
              pOStack_10 = (Object *)puVar27[1];
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__Convert);
                func_?(&TypeInfo__System__Globalization__CultureInfo);
                func_?(&TypeInfo__System__IConvertible);
                cRam_? = '\x01';
              }
              pCStack_28 = (CultureInfo *)0x0;
              iVar13 = func_?(pOVar7,TypeInfo__System__IConvertible);
              if (iVar13 == 0) {
                unaff_ESI = (CultureInfo *)0x0;
                if (pOVar7 == (Object *)0x0) break;
                pTVar16 = mscorlib.dll::System::Object::Object_GetType(pOVar7,(MethodInfo *)0x0);
                bVar15 = JsonSerializerInternalWriter_TryConvertToString
                                  (pOVar7,pTVar16,(String **)&pCStack_28,(MethodInfo *)0x0);
                unaff_ESI = pCStack_28;
                if (bVar15 == 0) {
                  unaff_ESI = (CultureInfo *)(*(pOVar7->klass->vtable).ToString.methodPtr)();
                }
              }
              else {
                if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?(TypeInfo__System__Globalization__CultureInfo);
                }
                pCStack_17 = mscorlib.dll::System::Globalization::CultureInfo::
                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_ESI = (CultureInfo *)
                            mscorlib.dll::System::Convert::Convert_ToString_1
                                      (pOVar7,(IFormatProvider *)pCStack_17,(MethodInfo *)0x0);
              }
              if ((contract->fields)._PropertyNameResolver_k__BackingField !=
                  (Func_2_String_String_ *)0x0) {
                unaff_ESI = (CultureInfo *)
                            (*(((contract->fields)._PropertyNameResolver_k__BackingField)->fields)._
                              ._.invoke_impl)();
              }
              pMStack_1 = (MethodInfo_1 *)CONCAT31(pMStack_1._1_3_,2);
              pCStack_17 = unaff_ESI;
              contract_00 = JsonSerializerInternalWriter_GetContractSafe
                                      (this,pOStack_10,(MethodInfo *)0x0);
              ppTVar21 = (Type **)0x0;
              pJStack_29 = contract_00;
              bVar15 = JsonSerializerInternalWriter_ShouldWriteReference
                                (this,pOStack_10,(JsonProperty *)0x0,contract_00,(MethodInfo *)0x0);
              if (bVar15 == 0) {
                contract_00 = (JsonContract *)&UNK_?;
                bVar15 = JsonSerializerInternalWriter_CheckForCircularReference
                                  (this,pOStack_10,
                                   (Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                                   (JsonContract *)contract,(MethodInfo *)0x0);
                if (bVar15 != 0) {
                  pJStack_6 = (JsonContract__Class *)writer;
                  pJStack_18 = (JsonContract *)0xd;
                  pCStack_17 = unaff_ESI;
                  func_?();
                  JsonSerializerInternalWriter_SerializeValue
                            (this,writer,pOStack_10,pJStack_29,(JsonProperty *)0x0,pJStack_18,
                             (MethodInfo *)0x0);
                }
              }
              else {
                func_?();
                JsonSerializerInternalWriter_WriteReference
                          (this,writer,pOStack_10,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  uVar14 = func_?();
  func_?(uVar14);
  _Stack_38 = *(_union_86 *)&unaff_ESI->klass;
  uVar26 = func_?(&_Stack_38,&UNK_?);
code_?:
  func_?(uVar26);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void SerializeISerializable(JsonWriter, ISerializable, JsonISerializableContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeISerializable
               (JsonSerializerInternalWriter *this,JsonWriter *writer,ISerializable *value,
               JsonISerializableContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Runtime__Serialization__FormatterConverter);
    func_?(&TypeInfo__System__Runtime__Serialization__ISerializable);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    func_?(&TypeInfo__System__Runtime__Serialization__SerializationInfo);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar1 != (JsonSerializer *)0x0) {
    SVar2 = (StreamingContext)
            (*(pJVar1->klass->vtable).get_Context.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Context.method);
    if (contract != (JsonISerializableContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,(Object *)value,SVar2,(MethodInfo *)0x0);
      pLVar3 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar3,(Object *)value,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        if (writer != (JsonWriter *)0x0) {
          (*(writer->klass->vtable).WriteStartObject.methodPtr)
                    (writer,(writer->klass->vtable).WriteStartObject.method);
          pTVar4 = (contract->fields)._._UnderlyingType_k__BackingField;
          this_01 = (TweenRunner_1_FloatTween_ *)
                    func_?(TypeInfo__System__Runtime__Serialization__FormatterConverter);
          if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
            this_02 = (SerializationInfo *)
                      func_?(TypeInfo__System__Runtime__Serialization__SerializationInfo);
            if (this_02 != (SerializationInfo *)0x0) {
              mscorlib.dll::System::Runtime::Serialization::SerializationInfo::
              SerializationInfo__ctor
                        (this_02,pTVar4,(IFormatterConverter *)this_01,(MethodInfo *)0x0);
              pJVar1 = (this->fields)._._Serializer_k__BackingField;
              if (pJVar1 != (JsonSerializer *)0x0) {
                uVar5 = (*(pJVar1->klass->vtable).get_Context.methodPtr)
                                   (pJVar1,(pJVar1->klass->vtable).get_Context.method);
                if (value != (ISerializable *)0x0) {
                  uVar6 = 0;
                  uVar7 = (value->klass->_1).interface_offsets_count;
                  if (uVar7 != 0) {
                    do {
                      if (value->klass->interfaceOffsets[uVar6].interfaceType ==
                          (Il2CppClass *)TypeInfo__System__Runtime__Serialization__ISerializable) {
                        pIVar8 = &value->klass->vtable +
                                 value->klass->interfaceOffsets[uVar6].offset;
                        goto code_?;
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar7);
                  }
                  pIVar8 = (ISerializable__VTable *)
                           func_?(value,
                                           TypeInfo__System__Runtime__Serialization__ISerializable,0
                                          );
code_?:
                  (*(pIVar8->GetObjectData).methodPtr)
                            (value,this_02,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),
                             (pIVar8->GetObjectData).method);
                  this_03 = mscorlib.dll::System::Runtime::Serialization::SerializationInfo::
                            SerializationInfo_GetEnumerator(this_02,(MethodInfo *)0x0);
                  if (this_03 != (SerializationInfoEnumerator *)0x0) {
                    while( true ) {
                      bVar9 = mscorlib.dll::System::Runtime::Serialization::
                              SerializationInfoEnumerator::SerializationInfoEnumerator_MoveNext
                                        (this_03,(MethodInfo *)0x0);
                      if (bVar9 == 0) break;
                      pSVar10 = mscorlib.dll::System::Runtime::Serialization::
                               SerializationInfoEnumerator::SerializationInfoEnumerator_get_Current
                                         ((SerializationEntry *)&stack0xffffffd0,this_03,
                                          (MethodInfo *)0x0);
                      this_00 = (Object *)pSVar10->_name;
                      (*(writer->klass->vtable).WritePropertyName.methodPtr)();
                      if (cRam_? == '\0') {
                        func_?(&
                                        TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                       );
                        cRam_? = '\x01';
                      }
                      if (this_00 == (Object *)0x0) {
                        valueContract = (JsonContract *)0x0;
                      }
                      else {
                        pJVar1 = (this->fields)._._Serializer_k__BackingField;
                        if (pJVar1 == (JsonSerializer *)0x0) goto code_?;
                        iVar11 = (*(pJVar1->klass->vtable).get_ContractResolver.methodPtr)
                                          (pJVar1,(pJVar1->klass->vtable).get_ContractResolver.
                                                  method);
                        pTVar4 = mscorlib.dll::System::Object::Object_GetType
                                            (this_00,(MethodInfo *)0x0);
                        if (iVar11 == 0) goto code_?;
                        valueContract =
                             (JsonContract *)
                             func_?(0,
                                             TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                             ,iVar11,pTVar4);
                      }
                      JsonSerializerInternalWriter_SerializeValue
                                (this,writer,this_00,valueContract,(JsonProperty *)0x0,
                                 (JsonContract *)0x0,(MethodInfo *)0x0);
                    }
                    (*(writer->klass->vtable).WriteEndObject.methodPtr)();
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<System::Object>__List__
                                     );
                      func_?(&TypeInfo__System__Collections__Generic__List<System::Object>)
                      ;
                      cRam_? = '\x01';
                    }
                    if ((this->fields)._serializeStack == (List_1_System_Object_ *)0x0) {
                      pLVar3 = (List_1_System_Object_ *)
                               func_?(
                                              TypeInfo__System__Collections__Generic__List<System::Object>
                                              );
                      if (pLVar3 == (List_1_System_Object_ *)0x0) goto code_?;
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                      LowLevelList_1_System_Object___ctor
                                ((LowLevelList_1_System_Object_ *)pLVar3,
                                 MethodInfo__System__Collections__Generic__List<System::Object>__List__
                                );
                      (this->fields)._serializeStack = pLVar3;
                      func_?(&(this->fields)._serializeStack,pLVar3);
                    }
                    pLVar3 = (this->fields)._serializeStack;
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__System__Collections__Generic__List<System::Object>__List__
                                     );
                      func_?(&TypeInfo__System__Collections__Generic__List<System::Object>)
                      ;
                      cRam_? = '\x01';
                    }
                    if ((this->fields)._serializeStack == (List_1_System_Object_ *)0x0) {
                      pLVar12 = (List_1_System_Object_ *)
                                func_?(
                                               TypeInfo__System__Collections__Generic__List<System::Object>
                                               );
                      if (pLVar12 == (List_1_System_Object_ *)0x0) goto code_?;
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                      LowLevelList_1_System_Object___ctor
                                ((LowLevelList_1_System_Object_ *)pLVar12,
                                 MethodInfo__System__Collections__Generic__List<System::Object>__List__
                                );
                      (this->fields)._serializeStack = pLVar12;
                      func_?(&(this->fields)._serializeStack,pLVar12);
                    }
                    pLVar12 = (this->fields)._serializeStack;
                    if ((pLVar12 != (List_1_System_Object_ *)0x0) &&
                       (pLVar3 != (List_1_System_Object_ *)0x0)) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__RemoveAt
                                (pLVar3,(pLVar12->fields)._size + -1,
                                 MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                                );
                      pJVar1 = (this->fields)._._Serializer_k__BackingField;
                      if (pJVar1 != (JsonSerializer *)0x0) {
                        SVar2 = (StreamingContext)(*(pJVar1->klass->vtable).get_Context.methodPtr)()
                        ;
                        JsonContract::JsonContract_InvokeOnSerialized
                                  ((JsonContract *)contract,(Object *)value,SVar2,(MethodInfo *)0x0)
                        ;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SerializeList(JsonWriter, IWrappedCollection, JsonArrayContract, JsonProperty, JsonContract)
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeList
               (JsonSerializerInternalWriter *this,JsonWriter *writer,IWrappedCollection *values,
               JsonArrayContract *contract,JsonProperty *member,
               JsonContract *collectionValueContract,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&TypeRef__System__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__values);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
  }
  if (values != (IWrappedCollection *)0x0) {
    pOVar4 = (Object *)
             func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,values);
    pJVar5 = (this->fields)._._Serializer_k__BackingField;
    if ((pJVar5 != (JsonSerializer *)0x0) &&
       (SVar6 = (StreamingContext)
                (*(pJVar5->klass->vtable).get_Context.methodPtr)
                          (pJVar5,(pJVar5->klass->vtable).get_Context.method),
       contract != (JsonArrayContract *)0x0)) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,pOVar4,SVar6,(MethodInfo *)0x0);
      pLVar7 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      pOVar4 = (Object *)
               func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,values);
      if (pLVar7 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar7,pOVar4,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        NVar8 = (contract->fields)._._IsReference_k__BackingField;
        if (NVar8.hasValue == 0) {
          pJVar5 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar5 == (JsonSerializer *)0x0) goto code_?;
          uVar9 = (*(pJVar5->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                             (pJVar5,(pJVar5->klass->vtable).get_PreserveReferencesHandling.method);
          bVar10 = (byte)(uVar9 >> 1) & 1;
        }
        else {
          bVar10 = NVar8.value;
        }
        bVar11 = JsonSerializerInternalWriter_ShouldWriteType
                          (this,TypeNameHandling__Enum_Arrays,(JsonContract *)contract,member,
                           collectionValueContract,(MethodInfo *)0x0);
        if (bVar10 != 0 || bVar11 != 0) {
          if (writer == (JsonWriter *)0x0) goto code_?;
          (*(writer->klass->vtable).WriteStartObject.methodPtr)();
          if (bVar10 != 0) {
            (*(writer->klass->vtable).WritePropertyName.methodPtr)();
            pJVar5 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar5 == (JsonSerializer *)0x0) goto code_?;
            iVar12 = (*(pJVar5->klass->vtable).get_ReferenceResolver.methodPtr)
                               (pJVar5,(pJVar5->klass->vtable).get_ReferenceResolver.method);
            uVar13 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,
                                     values);
            if (iVar12 == 0) goto code_?;
            uVar13 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver
                                     ,iVar12,this,uVar13);
            (*(writer->klass->vtable).WriteValue.methodPtr)
                      (writer,uVar13,(writer->klass->vtable).WriteValue.method);
          }
          if (bVar11 != 0) {
            pOVar4 = (Object *)func_?();
            if (pOVar4 == (Object *)0x0) goto code_?;
            pTVar14 = mscorlib.dll::System::Object::Object_GetType(pOVar4,(MethodInfo *)0x0);
            JsonSerializerInternalWriter_WriteTypeProperty(this,writer,pTVar14,(MethodInfo *)0x0);
          }
          (*(writer->klass->vtable).WritePropertyName.methodPtr)();
        }
        pJVar5 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar5 != (JsonSerializer *)0x0) {
          iVar12 = (*(pJVar5->klass->vtable).get_ContractResolver.methodPtr)
                             (pJVar5,(pJVar5->klass->vtable).get_ContractResolver.method);
          handle = TypeRef__System__Object;
          pTVar14 = (contract->fields)._CollectionItemType_k__BackingField;
          if (pTVar14 == (Type *)0x0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar14 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          }
          if ((iVar12 != 0) &&
             (collectionValueContract_00 =
                   (JsonContract *)
                   func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                   iVar12,pTVar14), writer != (JsonWriter *)0x0)) {
            (*(writer->klass->vtable).WriteStartArray.methodPtr)
                      (writer,(writer->klass->vtable).WriteStartArray.method);
            iVar12 = func_?(0,TypeInfo__System__Collections__IEnumerable,values);
            uStack_1 = 0;
            while( true ) {
              uStack_1._0_1_ = 1;
              if (iVar12 == 0) break;
              cVar15 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar12);
              if (cVar15 == '\0') {
                uStack_1 = 0xffffffff;
                iVar12 = func_?(iVar12,TypeInfo__System__IDisposable);
                if (iVar12 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iVar12);
                }
                uStack_1._0_1_ = 0xff;
                uStack_1._1_3_ = 0xffffff;
                (*(writer->klass->vtable).WriteEndArray.methodPtr)
                          (writer,(writer->klass->vtable).WriteEndArray.method);
                if (bVar11 != 0 || bVar10 != 0) {
                  (*(writer->klass->vtable).WriteEndObject.methodPtr)
                            (writer,(writer->klass->vtable).WriteEndObject.method);
                }
                pLVar7 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                pLVar16 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                if ((pLVar16 != (List_1_System_Object_ *)0x0) &&
                   (pLVar7 != (List_1_System_Object_ *)0x0)) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            (pLVar7,(pLVar16->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                            );
                  pOVar4 = (Object *)
                           func_?(0,
                                           TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection
                                           ,values);
                  pJVar5 = (this->fields)._._Serializer_k__BackingField;
                  if (pJVar5 != (JsonSerializer *)0x0) {
                    SVar6 = (StreamingContext)
                            (*(pJVar5->klass->vtable).get_Context.methodPtr)
                                      (pJVar5,(pJVar5->klass->vtable).get_Context.method);
                    JsonContract::JsonContract_InvokeOnSerialized
                              ((JsonContract *)contract,pOVar4,SVar6,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                }
                break;
              }
              if (iVar12 == 0) break;
              pOVar4 = (Object *)
                       func_?(1,TypeInfo__System__Collections__IEnumerator,iVar12);
              uStack_1 = CONCAT31(uStack_1._1_3_,4);
              contract_00 = JsonSerializerInternalWriter_GetContractSafe
                                      (this,pOVar4,(MethodInfo *)0x0);
              bVar17 = JsonSerializerInternalWriter_ShouldWriteReference
                                (this,pOVar4,(JsonProperty *)0x0,contract_00,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                bVar17 = JsonSerializerInternalWriter_CheckForCircularReference
                                  (this,pOVar4,
                                   (Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                                   (JsonContract *)contract,(MethodInfo *)0x0);
                if (bVar17 != 0) {
                  JsonSerializerInternalWriter_SerializeValue
                            (this,writer,pOVar4,contract_00,(JsonProperty *)0x0,
                             collectionValueContract_00,(MethodInfo *)0x0);
                }
              }
              else {
                JsonSerializerInternalWriter_WriteReference(this,writer,pOVar4,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SerializeMultidimensionalArray(JsonWriter, Array, JsonArrayContract, JsonProperty,
   JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeMultidimensionalArray
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Array *values,
               JsonArrayContract *contract,JsonProperty *member,JsonContract *collectionContract,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar1 != (JsonSerializer *)0x0) {
    SVar2 = (StreamingContext)
            (*(pJVar1->klass->vtable).get_Context.methodPtr)
                      (pJVar1,(pJVar1->klass->vtable).get_Context.method);
    if (contract != (JsonArrayContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,(Object *)values,SVar2,(MethodInfo *)0x0);
      pLVar3 = (this->fields)._serializeStack;
      if (pLVar3 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar3,(Object *)values,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        bVar4 = JsonSerializerInternalWriter_WriteStartArray
                          (this,writer,(Object *)values,contract,member,collectionContract,
                           (MethodInfo *)0x0);
        if (writer != (JsonWriter *)0x0) {
          initialDepth = (writer->fields)._top;
          indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
          JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                    (this,writer,values,contract,member,initialDepth,indices,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            (*(writer->klass->vtable).WriteEndObject.methodPtr)
                      (writer,(writer->klass->vtable).WriteEndObject.method);
          }
          pLVar3 = (this->fields)._serializeStack;
          if (pLVar3 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((this->fields)._serializeStack,(pLVar3->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                      );
            pJVar1 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar1 != (JsonSerializer *)0x0) {
              SVar2 = (StreamingContext)
                      (*(pJVar1->klass->vtable).get_Context.methodPtr)
                                (pJVar1,(pJVar1->klass->vtable).get_Context.method);
              JsonContract::JsonContract_InvokeOnSerialized
                        ((JsonContract *)contract,(Object *)values,SVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SerializeMultidimensionalArray(JsonWriter, Array, JsonArrayContract, JsonProperty, Int32,
   Int32[]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Array *values,
               JsonArrayContract *contract,JsonProperty *member,int32_t initialDepth,
               Int32__Array *indices,MethodInfo *method)

{
  pJVar1 = (JsonContract *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (indices != (Int32__Array *)0x0) {
    dimension = indices->max_length;
    indices_00 = (Int32__Array *)func_?(TypeInfo__System__Int32,dimension + 1);
    uVar2 = 0;
    if (0 < (int)dimension) {
      piVar3 = indices_00->vector;
      do {
        if (indices->max_length <= uVar2) goto code_?;
        if (indices_00 == (Int32__Array *)0x0) goto code_?;
        if (indices_00->max_length <= uVar2) goto code_?;
        *piVar3 = *(int32_t *)(((int)indices - (int)indices_00) + (int)piVar3);
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while ((int)uVar2 < (int)dimension);
    }
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteStartArray.methodPtr)
                (writer,(writer->klass->vtable).WriteStartArray.method);
      puVar4 = (undefined1 *)0x0;
      if (values != (Array *)0x0) {
        while( true ) {
          iVar5 = mscorlib.dll::System::Array::Array_GetLength(values,dimension,(MethodInfo *)0x0);
          if (iVar5 <= (int)puVar4) {
            (*(writer->klass->vtable).WriteEndArray.methodPtr)
                      (writer,(writer->klass->vtable).WriteEndArray.method);
            *unaff_FS_OFFSET = pJVar1;
            return;
          }
          if (indices_00 == (Int32__Array *)0x0) break;
          if (indices_00->max_length <= dimension) goto code_?;
          indices_00->vector[dimension] = (int32_t)puVar4;
          iVar6 = mscorlib.dll::System::Array::Array_GetRank(values,(MethodInfo *)0x0);
          if (indices_00->max_length == iVar6) {
            value = mscorlib.dll::System::Array::Array_GetValue_4
                              (values,indices_00,(MethodInfo *)0x0);
            contract_00 = JsonSerializerInternalWriter_GetContractSafe(this,value,(MethodInfo *)0x0)
            ;
            bVar7 = JsonSerializerInternalWriter_ShouldWriteReference
                              (this,value,member,contract_00,(MethodInfo *)0x0);
            iVar8 = 0;
            if (bVar7 == 0) {
              bVar7 = JsonSerializerInternalWriter_CheckForCircularReference
                                (this,value,(Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                                 contract_00,(MethodInfo *)0x0);
              if (bVar7 == 0) goto code_?;
              pJVar9 = this;
              JsonSerializerInternalWriter_SerializeValue
                        (this,writer,value,contract_00,member,(JsonContract *)contract,
                         (MethodInfo *)0x0);
              puVar4 = (undefined1 *)((int)&pJVar9->klass + 1);
              pJVar1 = contract_00;
            }
            else {
              JsonSerializerInternalWriter_WriteReference(this,writer,value,(MethodInfo *)0x0);
code_?:
              puVar4 = (undefined1 *)(iVar8 + 1);
            }
          }
          else {
            JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                      (this,writer,values,contract,member,initialDepth + 1,indices_00,
                       (MethodInfo *)0x0);
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  uVar10 = func_?();
  func_?(uVar10);
  func_?(&stack0xffffffd4,&UNK_?);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SerializeObject(JsonWriter, Object, JsonObjectContract, JsonProperty, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeObject
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               JsonObjectContract *contract,JsonProperty *member,
               JsonContract *collectionValueContract,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_1_ = 0xff;
  uStack_1._2_2_ = 0xffff;
  pTStack_2 = (Type *)&DAT_?;
  pTStack_3 = (Type *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pTStack_3;
  pMStack_4 = (MonitorData *)&stack0xffffffb4;
  pMVar5 = (MonitorData *)&stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IValueProvider);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__);
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  pJVar6 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar6 != (JsonSerializer *)0x0) {
    SVar7 = (StreamingContext)
            (*(pJVar6->klass->vtable).get_Context.methodPtr)
                      (pJVar6,(pJVar6->klass->vtable).get_Context.method);
    if (contract != (JsonObjectContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,value,SVar7,(MethodInfo *)0x0);
      pLVar8 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      unaff_ESI = (JsonObjectContract *)value;
      if (pLVar8 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (pLVar8,value,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        if (writer != (JsonWriter *)0x0) {
          (*(writer->klass->vtable).WriteStartObject.methodPtr)
                    (writer,(writer->klass->vtable).WriteStartObject.method);
          NVar9 = (contract->fields)._._IsReference_k__BackingField;
          pOStack_10 = (Object *)CONCAT22(pOStack_10._2_2_,NVar9);
          if (NVar9.hasValue == 0) {
            pJVar6 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar6 == (JsonSerializer *)0x0) goto code_?;
            bVar11 = (*(pJVar6->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                              (pJVar6,(pJVar6->klass->vtable).get_PreserveReferencesHandling.method)
            ;
            bVar11 = bVar11 & 1;
          }
          else {
            bVar11 = NVar9.value;
          }
          if (bVar11 != 0) {
            (*(writer->klass->vtable).WritePropertyName.methodPtr)
                      (writer,StringLiteral__id,(writer->klass->vtable).WritePropertyName.method);
            pJVar6 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar6 == (JsonSerializer *)0x0) goto code_?;
            iVar12 = (*(pJVar6->klass->vtable).get_ReferenceResolver.methodPtr)
                               (pJVar6,(pJVar6->klass->vtable).get_ReferenceResolver.method);
            if (iVar12 == 0) goto code_?;
            uVar13 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver
                                     ,iVar12,this,value);
            (*(writer->klass->vtable).WriteValue.methodPtr)
                      (writer,uVar13,(writer->klass->vtable).WriteValue.method);
          }
          bVar14 = JsonSerializerInternalWriter_ShouldWriteType
                            (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                             collectionValueContract,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            JsonSerializerInternalWriter_WriteTypeProperty
                      (this,writer,(contract->fields)._._UnderlyingType_k__BackingField,
                       (MethodInfo *)0x0);
          }
          iStack_15 = (writer->fields)._top;
          this_00 = (contract->fields)._Properties_k__BackingField;
          unaff_ESI = contract;
          if (this_00 != (JsonPropertyCollection *)0x0) {
            pJStack_16 = (JsonObjectContract__Class *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[System::
                         Object]::Collection_1_System_Object__GetEnumerator
                                   ((Collection_1_System_Object_ *)this_00,
                                    MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                                   );
            unaff_ESI = (JsonObjectContract *)&pJStack_16;
            uStack_1._1_1_ = 0;
            uStack_1._2_2_ = 0;
code_?:
            uStack_1._0_1_ = 1;
            if (pJStack_16 != (JsonObjectContract__Class *)0x0) {
              cVar17 = func_?(0,TypeInfo__System__Collections__IEnumerator,pJStack_16);
              if (cVar17 == '\0') {
                uStack_1._0_1_ = 0xff;
                uStack_1._1_1_ = 0xff;
                uStack_1._2_2_ = 0xffff;
                if (pJStack_16 != (JsonObjectContract__Class *)0x0) {
                  func_?(0,TypeInfo__System__IDisposable,pJStack_16);
                }
                uStack_1._0_1_ = 0xff;
                uStack_1._1_1_ = 0xff;
                uStack_1._2_2_ = 0xffff;
                (*(writer->klass->vtable).WriteEndObject.methodPtr)
                          (writer,(writer->klass->vtable).WriteEndObject.method);
                unaff_ESI = (JsonObjectContract *)
                            JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                pLVar8 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                if ((pLVar8 != (List_1_System_Object_ *)0x0) &&
                   (unaff_ESI != (JsonObjectContract *)0x0)) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)unaff_ESI,(pLVar8->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                            );
                  pJVar6 = (this->fields)._._Serializer_k__BackingField;
                  if (pJVar6 != (JsonSerializer *)0x0) {
                    SVar7 = (StreamingContext)
                            (*(pJVar6->klass->vtable).get_Context.methodPtr)
                                      (pJVar6,(pJVar6->klass->vtable).get_Context.method);
                    JsonContract::JsonContract_InvokeOnSerialized
                              ((JsonContract *)contract,value,SVar7,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = pTStack_3;
                    return;
                  }
                }
                goto code_?;
              }
              if (pJStack_16 == (JsonObjectContract__Class *)0x0) goto code_?;
              property = (JsonProperty *)
                         func_?(0,
                                         TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                                         ,pJStack_16);
              uStack_1._0_1_ = 2;
              pJStack_18 = property;
              if (property == (JsonProperty *)0x0) goto code_?;
              if (((property->fields)._Ignored_k__BackingField == 0) &&
                 ((property->fields)._Readable_k__BackingField != 0)) {
                if ((property->fields)._ShouldSerialize_k__BackingField !=
                    (Predicate_1_Object_ *)0x0) {
                  pPVar19 = (property->fields)._ShouldSerialize_k__BackingField;
                  cVar17 = (*(pPVar19->fields)._._.invoke_impl)
                                     ((pPVar19->fields)._._.method_code,value,
                                      (pPVar19->fields)._._.method);
                  if (cVar17 == '\0') goto code_?;
                }
                if ((property->fields)._GetIsSpecified_k__BackingField != (Predicate_1_Object_ *)0x0
                   ) {
                  pPVar19 = (property->fields)._GetIsSpecified_k__BackingField;
                  cVar17 = (*(pPVar19->fields)._._.invoke_impl)
                                     ((pPVar19->fields)._._.method_code,value,
                                      (pPVar19->fields)._._.method);
                  if (cVar17 == '\0') goto code_?;
                }
                pIVar20 = (property->fields)._ValueProvider_k__BackingField;
                if (pIVar20 == (IValueProvider *)0x0) goto code_?;
                pOStack_10 = (Object *)
                             func_?(1,
                                             TypeInfo__Newtonsoft__Json__Serialization__IValueProvider
                                             ,pIVar20,value);
                contract_00 = JsonSerializerInternalWriter_GetContractSafe
                                        (this,pOStack_10,(MethodInfo *)0x0);
                JsonSerializerInternalWriter_WriteMemberInfoProperty
                          (this,writer,pOStack_10,property,contract_00,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  uVar13 = func_?();
  func_?(uVar13);
  pLStack_21 = (List_1_System_Object___Class *)unaff_ESI->klass;
  uVar13 = func_?(&pLStack_21,&UNK_?);
  func_?(uVar13);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SerializePrimitive(JsonWriter, Object, JsonPrimitiveContract, JsonProperty, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializePrimitive
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               JsonPrimitiveContract *contract,JsonProperty *member,
               JsonContract *collectionValueContract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Byte);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__value);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Byte;
  if (contract != (JsonPrimitiveContract *)0x0) {
    left = (contract->fields)._._UnderlyingType_k__BackingField;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)left,(Object **)right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = JsonSerializerInternalWriter_ShouldWriteType
                        (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                         collectionValueContract,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (writer != (JsonWriter *)0x0) {
          (*(writer->klass->vtable).WriteStartObject.methodPtr)();
          JsonSerializerInternalWriter_WriteTypeProperty
                    (this,writer,(contract->fields)._._CreatedType_k__BackingField,(MethodInfo *)0x0
                    );
          (*(writer->klass->vtable).WritePropertyName.methodPtr)();
          (*(writer->klass->vtable).WriteValue_37.methodPtr)(writer);
          (*(writer->klass->vtable).WriteEndObject.methodPtr)
                    (writer,(writer->klass->vtable).WriteEndObject.method);
          return;
        }
        goto code_?;
      }
    }
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteValue_37.methodPtr)
                (writer,value,(writer->klass->vtable).WriteValue_37.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SerializeString(JsonWriter, Object, JsonStringContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeString
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               JsonStringContract *contract,MethodInfo *method)

{
  pSStack_1 = (String *)0x0;
  pJVar2 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar2 != (JsonSerializer *)0x0) {
    SVar3 = (StreamingContext)
            (*(pJVar2->klass->vtable).get_Context.methodPtr)
                      (pJVar2,(pJVar2->klass->vtable).get_Context.method);
    if (contract != (JsonStringContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,value,SVar3,(MethodInfo *)0x0);
      JsonSerializerInternalWriter_TryConvertToString
                (value,(contract->fields)._._UnderlyingType_k__BackingField,&pSStack_1,
                 (MethodInfo *)0x0);
      if (writer != (JsonWriter *)0x0) {
        (*(writer->klass->vtable).WriteValue.methodPtr)
                  (writer,pSStack_1,(writer->klass->vtable).WriteValue.method);
        pJVar2 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar2 != (JsonSerializer *)0x0) {
          SVar3 = (StreamingContext)
                  (*(pJVar2->klass->vtable).get_Context.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_Context.method);
          JsonContract::JsonContract_InvokeOnSerialized
                    ((JsonContract *)contract,value,SVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SerializeValue(JsonWriter, Object, JsonContract, JsonProperty, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeValue
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               JsonContract *valueContract,JsonProperty *member,
               JsonContract *collectionValueContract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    Newtonsoft__Json__JsonConverter__MethodInfo__System__Linq__Enumerable__ToArray<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_____
                   );
    func_?(&TypeInfo__System__Runtime__Serialization__ISerializable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
    func_?(&TypeInfo__System__Array);
    cRam_? = '\x01';
  }
  if (member == (JsonProperty *)0x0) {
    converter = (JsonConverter *)0x0;
  }
  else {
    converter = (member->fields)._Converter_k__BackingField;
  }
  if (value == (Object *)0x0) {
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteNull.methodPtr)
                (writer,(writer->klass->vtable).WriteNull.method);
      return;
    }
code_?:
    func_?();
code_?:
    func_?(value,member);
  }
  else {
    if (converter != (JsonConverter *)0x0) {
code_?:
      if (converter != (JsonConverter *)0x0) goto code_?;
      goto code_?;
    }
    if (valueContract == (JsonContract *)0x0) goto code_?;
    converter = (valueContract->fields)._Converter_k__BackingField;
    if (converter == (JsonConverter *)0x0) {
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 != (JsonSerializer *)0x0) {
        converter = JsonSerializer::JsonSerializer_GetMatchingConverter
                              (pJVar1,(valueContract->fields)._UnderlyingType_k__BackingField,
                               (MethodInfo *)0x0);
        if (converter != (JsonConverter *)0x0) goto code_?;
        converter = (valueContract->fields)._InternalConverter_k__BackingField;
        if (converter != (JsonConverter *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    cVar2 = (*(converter->klass->vtable).get_CanWrite.methodPtr)
                      (converter,(converter->klass->vtable).get_CanWrite.method);
    if (cVar2 != '\0') {
      JsonSerializerInternalWriter_SerializeConvertable
                (this,writer,converter,value,valueContract,(MethodInfo *)0x0);
      return;
    }
    if (valueContract != (JsonContract *)0x0) {
code_?:
      if (((valueContract->klass->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).typeHierarchyDepth
          ) || ((valueContract->klass->_1).typeHierarchy
                [(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).
                 typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract)) {
        if (((valueContract->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract->_1).typeHierarchyDepth)
           || ((valueContract->klass->_1).typeHierarchy
               [(TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract->_1).
                typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract)) {
          if (((valueContract->klass->_1).typeHierarchyDepth <
               (TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth) ||
             ((valueContract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth - 1] !=
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract))
          goto code_?;
          pJVar3 = (JsonStringContract__Class *)
                   TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract;
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth <= (valueContract->klass->_1).typeHierarchyDepth) &&
             ((valueContract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract)) {
            JsonSerializerInternalWriter_SerializeObject
                      (this,writer,value,(JsonObjectContract *)valueContract,member,
                       collectionValueContract,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pJVar3 = TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract;
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract->_1).
               typeHierarchyDepth <= (valueContract->klass->_1).typeHierarchyDepth) &&
             ((valueContract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract)) {
            pJVar1 = (this->fields)._._Serializer_k__BackingField;
            member = (JsonProperty *)0x0;
            if (pJVar1 != (JsonSerializer *)0x0) {
              SVar4 = (StreamingContext)
                      (*(pJVar1->klass->vtable).get_Context.methodPtr)
                                (pJVar1,(pJVar1->klass->vtable).get_Context.method);
              JsonContract::JsonContract_InvokeOnSerializing
                        (valueContract,value,SVar4,(MethodInfo *)0x0);
              JsonSerializerInternalWriter_TryConvertToString
                        (value,(valueContract->fields)._UnderlyingType_k__BackingField,
                         (String **)&member,(MethodInfo *)0x0);
              if (writer != (JsonWriter *)0x0) {
                (*(writer->klass->vtable).WriteValue.methodPtr)
                          (writer,member,(writer->klass->vtable).WriteValue.method);
                pJVar1 = (this->fields)._._Serializer_k__BackingField;
joined_?:
                if (pJVar1 != (JsonSerializer *)0x0) {
                  SVar4 = (StreamingContext)
                          (*(pJVar1->klass->vtable).get_Context.methodPtr)
                                    (pJVar1,(pJVar1->klass->vtable).get_Context.method);
                  JsonContract::JsonContract_InvokeOnSerialized
                            (valueContract,value,SVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            goto code_?;
          }
        }
      }
      else {
        pJVar3 = (JsonStringContract__Class *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract;
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).
             typeHierarchyDepth <= (valueContract->klass->_1).typeHierarchyDepth) &&
           ((valueContract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).
             typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract)) {
          if (cRam_? == '\0') {
            func_?(&TypeRef__System__Byte);
            func_?(&TypeInfo__System__Type);
            func_?(&StringLiteral__value);
            cRam_? = '\x01';
          }
          handle = TypeRef__System__Byte;
          left = (valueContract->fields)._UnderlyingType_k__BackingField;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)left,(Object **)right,(MethodInfo *)0x0);
          if ((bVar5 == 0) ||
             (bVar5 = JsonSerializerInternalWriter_ShouldWriteType
                                (this,TypeNameHandling__Enum_Objects,valueContract,member,
                                 collectionValueContract,(MethodInfo *)0x0), bVar5 == 0)) {
            if (writer != (JsonWriter *)0x0) {
              (*(writer->klass->vtable).WriteValue_37.methodPtr)
                        (writer,value,(writer->klass->vtable).WriteValue_37.method);
              return;
            }
          }
          else if (writer != (JsonWriter *)0x0) {
            (*(writer->klass->vtable).WriteStartObject.methodPtr)();
            JsonSerializerInternalWriter_WriteTypeProperty
                      (this,(JsonWriter *)0x0,(valueContract->fields)._CreatedType_k__BackingField,
                       (MethodInfo *)0x0);
            (**(code **)(iRam_? + 0x124))();
            (**(code **)(iRam_? + 0x29c))(0,value,*(undefined4 *)(iRam_? + 0x2a0));
            (**(code **)(iRam_? + 0xfc))(0,*(undefined4 *)(iRam_? + 0x100));
            return;
          }
          goto code_?;
        }
      }
code_?:
      func_?(valueContract,pJVar3);
      goto code_?;
    }
code_?:
    iVar6 = func_?(valueContract,
                            TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    if (iVar6 != 0) {
      if (valueContract != (JsonContract *)0x0) {
        pJVar3 = (JsonStringContract__Class *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract;
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth <= (valueContract->klass->_1).typeHierarchyDepth) &&
           ((valueContract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
          values_00 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                                ((JsonDictionaryContract *)valueContract,value,(MethodInfo *)0x0);
          JsonSerializerInternalWriter_SerializeDictionary
                    (this,writer,values_00,(JsonDictionaryContract *)valueContract,member,
                     collectionValueContract,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar6 = func_?(valueContract,
                            TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    if (iVar6 != 0) {
      if (valueContract != (JsonContract *)0x0) {
        pJVar3 = (JsonStringContract__Class *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract;
        if (((valueContract->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth)
           || ((valueContract->klass->_1).typeHierarchy
               [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).
                typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract))
        goto code_?;
        if (*(char *)&valueContract[1].monitor == '\0') {
          values = JsonArrayContract::JsonArrayContract_CreateWrapper
                             ((JsonArrayContract *)valueContract,value,(MethodInfo *)0x0);
          JsonSerializerInternalWriter_SerializeList
                    (this,writer,values,(JsonArrayContract *)valueContract,member,
                     collectionValueContract,(MethodInfo *)0x0);
          return;
        }
        pAVar7 = TypeInfo__System__Array;
        if (((value->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Array->_1).typeHierarchyDepth) ||
           ((value->klass->_1).typeHierarchy[(TypeInfo__System__Array->_1).typeHierarchyDepth - 1]
            != (Il2CppClass *)TypeInfo__System__Array)) goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Int32);
          func_?(&
                          MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                         );
          cRam_? = '\x01';
        }
        pJVar1 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar1 != (JsonSerializer *)0x0) {
          SVar4 = (StreamingContext)
                  (*(pJVar1->klass->vtable).get_Context.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_Context.method);
          JsonContract::JsonContract_InvokeOnSerializing
                    (valueContract,value,SVar4,(MethodInfo *)0x0);
          pLVar8 = (this->fields)._serializeStack;
          if (pLVar8 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (pLVar8,value,
                       MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                      );
            bVar5 = JsonSerializerInternalWriter_WriteStartArray
                              (this,writer,value,(JsonArrayContract *)valueContract,member,
                               collectionValueContract,(MethodInfo *)0x0);
            if (writer != (JsonWriter *)0x0) {
              initialDepth = (writer->fields)._top;
              indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
              JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                        (this,writer,(Array *)value,(JsonArrayContract *)valueContract,member,
                         initialDepth,indices,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                (*(writer->klass->vtable).WriteEndObject.methodPtr)
                          (writer,(writer->klass->vtable).WriteEndObject.method);
              }
              pLVar8 = (this->fields)._serializeStack;
              if (pLVar8 != (List_1_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((this->fields)._serializeStack,(pLVar8->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                          );
                pJVar1 = (this->fields)._._Serializer_k__BackingField;
                goto joined_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    iVar6 = func_?(valueContract,
                            TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
    if (iVar6 == 0) {
      iVar6 = func_?(valueContract,
                              TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
      if (iVar6 == 0) {
        return;
      }
      if ((valueContract != (JsonContract *)0x0) &&
         ((pJVar3 = (JsonStringContract__Class *)
                    TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract,
          (valueContract->klass->_1).typeHierarchyDepth <
          (TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract->_1).
          typeHierarchyDepth ||
          ((valueContract->klass->_1).typeHierarchy
           [(TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract->_1).
            typeHierarchyDepth - 1] !=
           (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract))))
      goto code_?;
      member = (JsonProperty *)TypeInfo__System__Runtime__Serialization__ISerializable;
      value_00 = (ISerializable *)
                 func_?(value,TypeInfo__System__Runtime__Serialization__ISerializable);
      if (value_00 != (ISerializable *)0x0) {
        JsonSerializerInternalWriter_SerializeISerializable
                  (this,writer,value_00,(JsonISerializableContract *)valueContract,(MethodInfo *)0x0
                  );
        return;
      }
      goto code_?;
    }
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 == (JsonSerializer *)0x0) goto code_?;
    member = (JsonProperty *)func_?(0x1c,pJVar1);
    valueContract = (JsonContract *)TypeInfo__Newtonsoft__Json__Linq__JToken;
    if (((TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth <=
         (value->klass->_1).typeHierarchyDepth) &&
       ((value->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Linq__JToken->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Linq__JToken)) {
      if (member == (JsonProperty *)0x0) {
        func_?(0x16,value,writer,0);
        return;
      }
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 != (JsonSerializer *)0x0) {
        source = (IEnumerable_1_System_Object_ *)func_?(0x1c,pJVar1);
        pOVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                           (source,
                            Newtonsoft__Json__JsonConverter__MethodInfo__System__Linq__Enumerable__ToArray<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_____
                           );
        func_?(0x16,value,writer,pOVar9);
        return;
      }
      goto code_?;
    }
  }
  func_?(value,valueContract);
  pAVar7 = extraout_EDX;
code_?:
  func_?(value,pAVar7);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean ShouldSerialize(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_ShouldSerialize
               (JsonSerializerInternalWriter *this,JsonProperty *property,Object *target,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (property == (JsonProperty *)0x0) {
    uVar2 = func_?(&pvStack_3);
    func_?(uVar2);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if ((property->fields)._ShouldSerialize_k__BackingField != (Predicate_1_Object_ *)0x0) {
    pPVar6 = (property->fields)._ShouldSerialize_k__BackingField;
    puStack_1 = (pPVar6->fields)._._.method;
    pOStack_7 = target;
    pvStack_3 = (pPVar6->fields)._._.method_code;
    bVar5 = (*(pPVar6->fields)._._.invoke_impl)();
    return bVar5;
  }
  return 1;
}


/* Boolean ShouldWriteReference(Object, JsonProperty, JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_ShouldWriteReference
               (JsonSerializerInternalWriter *this,Object *value,JsonProperty *property,
               JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    func_?(&MethodInfo__System__Nullable<bool>__Nullable_bool_);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<bool>__get_Value__);
    cRam_? = '\x01';
  }
  if ((value != (Object *)0x0) &&
     (((contract == (JsonContract *)0x0 ||
       ((contract->klass->_1).typeHierarchyDepth <
        (TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).typeHierarchyDepth))
      || ((contract->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).typeHierarchyDepth
           - 1] != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract))
     )) {
    if ((property == (JsonProperty *)0x0) ||
       (aNStack_1[0] = (property->fields)._IsReference_k__BackingField, aNStack_1[0].hasValue == 0))
    {
      if (contract == (JsonContract *)0x0) goto code_?;
      aNStack_1[0] = (contract->fields)._IsReference_k__BackingField;
      if (aNStack_1[0].hasValue == 0) {
        if (((contract->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth)
           || ((contract->klass->_1).typeHierarchy
               [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).
                typeHierarchyDepth - 1] !=
               (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
          pJVar2 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
          bVar3 = (*(pJVar2->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_PreserveReferencesHandling.method);
        }
        else {
          pJVar2 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
          uVar4 = (*(pJVar2->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                            (pJVar2,(pJVar2->klass->vtable).get_PreserveReferencesHandling.method);
          bVar3 = (byte)(uVar4 >> 1);
        }
        mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte___ctor
                  ((Nullable_1_SByte_ *)aNStack_1,bVar3 & 1,
                   MethodInfo__System__Nullable<bool>__Nullable_bool_);
      }
    }
    iVar5 = mscorlib.dll::System::Nullable`1[SByte]::Nullable_1_SByte__get_Value
                      ((Nullable_1_SByte_ *)aNStack_1,
                       MethodInfo__System__Nullable<bool>__get_Value__);
    if (iVar5 != 0) {
      pJVar2 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar2 != (JsonSerializer *)0x0) &&
         (piVar6 = (int *)(*(pJVar2->klass->vtable).get_ReferenceResolver.methodPtr)
                                    (pJVar2,(pJVar2->klass->vtable).get_ReferenceResolver.method),
         piVar6 != (int *)0x0)) {
        iVar7 = *piVar6;
        uVar8 = 0;
        if (*(ushort *)(iVar7 + 0xb2) != 0) {
          do {
            if (*(IReferenceResolver__Class **)(*(int *)(iVar7 + 0x58) + (uint)uVar8 * 8) ==
                TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver) {
              puVar9 = (undefined4 *)
                       (*(int *)(*(int *)(iVar7 + 0x58) + 4 + (uint)uVar8 * 8) * 8 + 0xcc + iVar7);
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(iVar7 + 0xb2));
        }
        puVar9 = (undefined4 *)
                 func_?(piVar6,
                                 TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,2);
code_?:
        bVar10 = (*(code *)*puVar9)(piVar6,this,value,puVar9[1]);
        return bVar10;
      }
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      bVar10 = (*pcVar11)();
      return bVar10;
    }
  }
  return 0;
}


/* Boolean ShouldWriteType(TypeNameHandling, JsonContract, JsonProperty, JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_ShouldWriteType
               (JsonSerializerInternalWriter *this,TypeNameHandling__Enum typeNameHandlingFlag,
               JsonContract *contract,JsonProperty *member,JsonContract *collectionValueContract,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (member == (JsonProperty *)0x0) {
    TStack_1 = TypeNameHandling__Enum_None;
    cVar2 = '\0';
  }
  else {
    cVar2 = (char)*(undefined4 *)&(member->fields)._TypeNameHandling_k__BackingField;
    TStack_1 = (member->fields)._TypeNameHandling_k__BackingField.value;
  }
  if (cVar2 == '\0') {
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
    TStack_1 = (*(pJVar3->klass->vtable).get_TypeNameHandling.methodPtr)
                         (pJVar3,(pJVar3->klass->vtable).get_TypeNameHandling.method);
  }
  if (this == (JsonSerializerInternalWriter *)0x0) goto code_?;
  if ((TStack_1 & typeNameHandlingFlag) != typeNameHandlingFlag) {
    if (member == (JsonProperty *)0x0) {
      if (collectionValueContract == (JsonContract *)0x0) {
        return 0;
      }
      pJVar3 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar3 == (JsonSerializer *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        bVar5 = (*pcVar4)();
        return bVar5;
      }
      iVar6 = (*(pJVar3->klass->vtable).get_TypeNameHandling.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).get_TypeNameHandling.method);
      if (iVar6 != 4) {
        return 0;
      }
      if (contract == (JsonContract *)0x0) goto code_?;
      CVar7._source = (CancellationTokenSource *)(contract->fields)._UnderlyingType_k__BackingField;
      CVar8._source =
           (CancellationTokenSource *)
           (collectionValueContract->fields)._UnderlyingType_k__BackingField;
    }
    else {
      iVar6 = (member->fields)._TypeNameHandling_k__BackingField.value;
      if ((member->fields)._TypeNameHandling_k__BackingField.hasValue == 0) {
        pJVar3 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
        iVar6 = (*(pJVar3->klass->vtable).get_TypeNameHandling.methodPtr)
                          (pJVar3,(pJVar3->klass->vtable).get_TypeNameHandling.method);
      }
      if (iVar6 != 4) {
        return 0;
      }
      if (contract == (JsonContract *)0x0) goto code_?;
      CVar7._source = (CancellationTokenSource *)(contract->fields)._UnderlyingType_k__BackingField;
      CVar8._source = (CancellationTokenSource *)(member->fields)._PropertyType_k__BackingField;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      bVar5 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (CVar7,CVar8,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return 0;
      }
      pJVar3 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar3 == (JsonSerializer *)0x0) ||
         (iVar6 = (*(pJVar3->klass->vtable).get_ContractResolver.methodPtr)
                            (pJVar3,(pJVar3->klass->vtable).get_ContractResolver.method), iVar6 == 0
         )) goto code_?;
      iVar6 = func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar6,
                              (member->fields)._PropertyType_k__BackingField);
      CVar7._source = (CancellationTokenSource *)(contract->fields)._UnderlyingType_k__BackingField;
      if (iVar6 == 0) goto code_?;
      CVar8._source = *(CancellationTokenSource **)(iVar6 + 0xc);
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar5 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (CVar7,CVar8,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      return 0;
    }
  }
  return 1;
}


/* Boolean TryConvertToString(Object, Type, String ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_TryConvertToString
               (Object *value,Type *type,String **s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__ComponentModel__ComponentConverter);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeRef__System__String);
    func_?(&TypeRef__System__ComponentModel__TypeConverter);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  this = Json::Utilities::ConvertUtils::ConvertUtils_GetConverter(type,(MethodInfo *)0x0);
  if (this != (TypeConverter *)0x0) {
    if (((this->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth) ||
       ((this->klass->_1).typeHierarchy
        [(TypeInfo__System__ComponentModel__ComponentConverter->_1).typeHierarchyDepth - 1] !=
        (Il2CppClass *)TypeInfo__System__ComponentModel__ComponentConverter)) {
      left._source = (CancellationTokenSource *)
                     mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      pIVar1 = TypeRef__System__ComponentModel__TypeConverter;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      right._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (left,right,(MethodInfo *)0x0);
      pIVar1 = TypeRef__System__String;
      if (bVar2 != 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        s = (String **)
            mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
        bVar2 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                          (this,(Type *)s,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pTVar3 = (Type__Class *)
                   System.dll::System::ComponentModel::TypeConverter::
                   TypeConverter_ConvertToInvariantString(this,value,(MethodInfo *)0x0);
          ((Type *)s)->klass = pTVar3;
          func_?();
          return 1;
        }
      }
    }
  }
  if (value != (Object *)0x0) {
    pOVar4 = value->klass;
    if (((TypeInfo__System__Type->_1).typeHierarchyDepth <= (pOVar4->_1).typeHierarchyDepth) &&
       ((Type__Class *)
        (pOVar4->_1).typeHierarchy[(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] ==
        TypeInfo__System__Type)) {
      if (((TypeInfo__System__Type->_1).typeHierarchyDepth <= (pOVar4->_1).typeHierarchyDepth) &&
         ((Type__Class *)
          (pOVar4->_1).typeHierarchy[(TypeInfo__System__Type->_1).typeHierarchyDepth - 1] ==
          TypeInfo__System__Type)) {
        pOVar4 = (Object__Class *)(*(code *)pOVar4[1]._1.token)();
        value->klass = pOVar4;
        func_?();
        return 1;
      }
      func_?();
      pcVar5 = (code *)swi(3);
      bVar2 = (*pcVar5)();
      return bVar2;
    }
  }
  *s = (String *)0x0;
  func_?();
  return 0;
}


/* Void WriteMemberInfoProperty(JsonWriter, Object, JsonProperty, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteMemberInfoProperty
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *memberValue,
               JsonProperty *property,JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                   );
    cRam_? = '\x01';
  }
  if (property != (JsonProperty *)0x0) {
    pSVar1 = (property->fields)._PropertyName_k__BackingField;
    pJStack_2 = (JsonSerializationException *)
                (property->fields)._NullValueHandling_k__BackingField.value;
    pOStack_3 = (property->fields)._DefaultValue_k__BackingField;
    pJVar4 = (this->fields)._._Serializer_k__BackingField;
    pMStack_5._0_1_ = (property->fields)._NullValueHandling_k__BackingField.hasValue;
    pMStack_5._1_3_ =
         *(undefined3 *)&(property->fields)._NullValueHandling_k__BackingField.field_0x1;
    if (pJVar4 != (JsonSerializer *)0x0) {
      uVar6 = (*(pJVar4->klass->vtable).get_NullValueHandling.methodPtr)
                        (pJVar4,(pJVar4->klass->vtable).get_NullValueHandling.method);
      uVar6 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                        ((Nullable_1_UInt32_ *)&pMStack_5,uVar6,
                         MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                        );
      if ((uVar6 == 1) && (memberValue == (Object *)0x0)) {
        return;
      }
      pJVar4 = (this->fields)._._Serializer_k__BackingField;
      pJStack_7._0_1_ = (property->fields)._DefaultValueHandling_k__BackingField.hasValue;
      pJStack_7._1_3_ =
           *(undefined3 *)&(property->fields)._DefaultValueHandling_k__BackingField.field_0x1;
      pSStack_8 = (String *)(property->fields)._DefaultValueHandling_k__BackingField.value;
      if (pJVar4 != (JsonSerializer *)0x0) {
        uVar6 = (*(pJVar4->klass->vtable).get_DefaultValueHandling.methodPtr)
                          (pJVar4,(pJVar4->klass->vtable).get_DefaultValueHandling.method);
        uVar6 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                          ((Nullable_1_UInt32_ *)&pJStack_7,uVar6,
                           MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                          );
        if (((uVar6 & 1) != 0) &&
           (bVar9 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (memberValue,pOStack_3,(MethodInfo *)0x0), bVar9 != 0)) {
          return;
        }
        bVar9 = JsonSerializerInternalWriter_ShouldWriteReference
                          (this,memberValue,property,contract,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          bVar9 = JsonSerializerInternalWriter_CheckForCircularReference
                            (this,memberValue,
                             (property->fields)._ReferenceLoopHandling_k__BackingField,contract,
                             (MethodInfo *)0x0);
          if (bVar9 == 0) {
            return;
          }
          if ((memberValue == (Object *)0x0) && ((property->fields)._Required_k__BackingField == 2))
          goto code_?;
          if (writer != (JsonWriter *)0x0) {
            pMStack_5 = (writer->klass->vtable).WritePropertyName.method;
            pJStack_7 = writer;
            pSStack_8 = pSVar1;
            (*(writer->klass->vtable).WritePropertyName.methodPtr)();
            JsonSerializerInternalWriter_SerializeValue
                      (this,writer,memberValue,contract,property,(JsonContract *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          property = (JsonProperty *)0x0;
          if (writer != (JsonWriter *)0x0) {
            (*(writer->klass->vtable).WritePropertyName.methodPtr)
                      (writer,pSVar1,(writer->klass->vtable).WritePropertyName.method);
            JsonSerializerInternalWriter_WriteReference(this,writer,memberValue,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar10 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar10);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar10 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar10);
  func_?(property);
  pOVar11 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
           Tuple_3_Object_Object_Object__get_Item1
                     ((Tuple_3_Object_Object_Object_ *)property,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pOVar11);
  func_?(0,pOVar11);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral_Cannot_write_a_null_value_for_pr);
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar1,(IFormatProvider *)provider,args,method_00);
  uVar10 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_00 = (JsonSerializationException *)func_?(uVar10);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  pOStack_3 = (Object *)
              func_?(&
                              MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__WriteMemberInfoProperty_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonContract_
                             );
  pJStack_2 = this_00;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void WriteReference(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteReference
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&StringLiteral__ref);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WriteStartObject.methodPtr)
              (writer,(writer->klass->vtable).WriteStartObject.method);
    (*(writer->klass->vtable).WritePropertyName.methodPtr)
              (writer,StringLiteral__ref,(writer->klass->vtable).WritePropertyName.method);
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      iVar2 = (*(pJVar1->klass->vtable).get_ReferenceResolver.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_ReferenceResolver.method);
      if (iVar2 != 0) {
        uVar3 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                iVar2,this,value);
        (*(writer->klass->vtable).WriteValue.methodPtr)
                  (writer,uVar3,(writer->klass->vtable).WriteValue.method);
        (*(writer->klass->vtable).WriteEndObject.methodPtr)
                  (writer,(writer->klass->vtable).WriteEndObject.method);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean WriteStartArray(JsonWriter, Object, JsonArrayContract, JsonProperty, JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteStartArray
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *values,
               JsonArrayContract *contract,JsonProperty *member,JsonContract *containerContract,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<bool>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<bool>__get_HasValue__);
    func_?(&StringLiteral__values);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
  }
  if (contract != (JsonArrayContract *)0x0) {
    NVar1 = (contract->fields)._._IsReference_k__BackingField;
    if (NVar1.hasValue == 0) {
      pJVar2 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
      uVar3 = (*(pJVar2->klass->vtable).get_PreserveReferencesHandling.methodPtr)
                        (pJVar2,(pJVar2->klass->vtable).get_PreserveReferencesHandling.method);
      uVar4 = (ushort)((byte)(uVar3 >> 1) & 1);
    }
    else {
      uVar4 = (ushort)NVar1 >> 8;
    }
    bVar5 = JsonSerializerInternalWriter_ShouldWriteType
                      (this,TypeNameHandling__Enum_Arrays,(JsonContract *)contract,member,
                       containerContract,(MethodInfo *)0x0);
    if (uVar4 == 0 && bVar5 == 0) {
      return 0;
    }
    if (writer != (JsonWriter *)0x0) {
      (*(writer->klass->vtable).WriteStartObject.methodPtr)(writer);
      if ((char)uVar4 != '\0') {
        (*(writer->klass->vtable).WritePropertyName.methodPtr)
                  (writer,StringLiteral__id,(writer->klass->vtable).WritePropertyName.method);
        pSVar6 = JsonSerializerInternalWriter_GetReference(this,writer,values,(MethodInfo *)0x0);
        (*(writer->klass->vtable).WriteValue.methodPtr)
                  (writer,pSVar6,(writer->klass->vtable).WriteValue.method);
      }
      if (bVar5 != 0) {
        if (values == (Object *)0x0) goto code_?;
        type = mscorlib.dll::System::Object::Object_GetType(values,(MethodInfo *)0x0);
        JsonSerializerInternalWriter_WriteTypeProperty(this,writer,type,(MethodInfo *)0x0);
      }
      (*(writer->klass->vtable).WritePropertyName.methodPtr)
                (writer,StringLiteral__values,(writer->klass->vtable).WritePropertyName.method);
      return 0x10;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Void WriteTypeProperty(JsonWriter, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteTypeProperty
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__type);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(writer->klass->vtable).WritePropertyName.methodPtr)
              (writer,StringLiteral__type,(writer->klass->vtable).WritePropertyName.method);
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      assemblyFormat =
           (*(pJVar1->klass->vtable).get_TypeNameAssemblyFormat.methodPtr)
                     (pJVar1,(pJVar1->klass->vtable).get_TypeNameAssemblyFormat.method);
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 != (JsonSerializer *)0x0) {
        binder = (SerializationBinder *)
                 (*(pJVar1->klass->vtable).get_Binder.methodPtr)
                           (pJVar1,(pJVar1->klass->vtable).get_Binder.method);
        pSVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetTypeName_1
                           (type,assemblyFormat,binder,(MethodInfo *)0x0);
        (*(writer->klass->vtable).WriteValue.methodPtr)
                  (writer,pSVar2,(writer->klass->vtable).WriteValue.method);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JsonSerializerInternalWriter(JsonSerializer) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter__ctor
               (JsonSerializerInternalWriter *this,JsonSerializer *serializer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_serializer);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializer,StringLiteral_serializer,(MethodInfo *)0x0);
  (this->fields)._._Serializer_k__BackingField = serializer;
  func_?(&(this->fields)._._Serializer_k__BackingField,serializer);
  return;
}


/* List`1[System.Object] get_SerializeStack() */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
JsonSerializerInternalWriter_get_SerializeStack
          (JsonSerializerInternalWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    cRam_? = '\x01';
  }
  if ((this->fields)._serializeStack == (List_1_System_Object_ *)0x0) {
    pLVar1 = (List_1_System_Object_ *)
             func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
    if (pLVar1 == (List_1_System_Object_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pLVar1 = (List_1_System_Object_ *)(*pcVar2)();
      return pLVar1;
    }
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    (this->fields)._serializeStack = pLVar1;
    func_?(&(this->fields)._serializeStack,pLVar1);
  }
  return (this->fields)._serializeStack;
}

