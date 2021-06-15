
/* Boolean CheckForCircularReference(Object, Nullable`1[Newtonsoft.Json.ReferenceLoopHandling],
   JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_CheckForCircularReference
               (JsonSerializerInternalWriter *this,Object *value,
               Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ referenceLoopHandling,
               JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String *)value;
  if (value == (Object *)0x0) {
    return 1;
  }
  if (contract != (JsonContract *)0x0) {
    bVar2 = (TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).naturalAligment;
    if (((contract->klass->_1).naturalAligment < bVar2) ||
       ((contract->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pJVar4 = (JsonContract *)0x0;
    if (bVar3) {
      pJVar4 = contract;
    }
    if (pJVar4 != (JsonContract *)0x0) {
      return 1;
    }
  }
  this_00 = (List_1_UnityEngine_Color32_ *)
            JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
  item._4_4_ = 
  MethodInfo__System__Collections__Generic__List<System::Object>__IndexOf_System__Object_;
  item.rgba = (int32_t)pSVar1;
  iVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
          List_1_UnityEngine_Color32__IndexOf(this_00,item,unaff_EBX);
  if (iVar5 == -1) {
    return 1;
  }
  pVVar6 = (Vector3__Class *)((Object *)pSVar1)->klass;
  pOVar7 = (Object *)0x0;
  if (pVVar6 == (Vector3__Class *)TypeInfo__UnityEngine__Vector2) {
    pOVar7 = (Object *)pSVar1;
  }
  if (pOVar7 == (Object *)0x0) {
    pOVar7 = (Object *)0x0;
    if (pVVar6 == TypeInfo__UnityEngine__Vector3) {
      pOVar7 = (Object *)pSVar1;
    }
    if (pOVar7 != (Object *)0x0) goto code_?;
    pOVar7 = (Object *)0x0;
    if (pVVar6 == (Vector3__Class *)TypeInfo__UnityEngine__Vector4) {
      pOVar7 = (Object *)pSVar1;
    }
    if (pOVar7 != (Object *)0x0) goto code_?;
    pOVar7 = (Object *)0x0;
    if (pVVar6 == (Vector3__Class *)TypeInfo__UnityEngine__Color) {
      pOVar7 = (Object *)pSVar1;
    }
    if (pOVar7 != (Object *)0x0) goto code_?;
    pOVar7 = (Object *)0x0;
    if (pVVar6 == (Vector3__Class *)TypeInfo__UnityEngine__Color32) {
      pOVar7 = (Object *)pSVar1;
    }
    if (pOVar7 != (Object *)0x0) goto code_?;
    if ((this->fields)._._Serializer_k__BackingField == (JsonSerializer *)0x0)
    goto code_?;
    uVar8 = func_?(0x10);
    iVar9 = func_?(&referenceLoopHandling,uVar8,
                            MethodInfo__System__Nullable<Newtonsoft::Json::ReferenceLoopHandling>__GetValueOrDefault_Newtonsoft__Json__ReferenceLoopHandling_
                           );
  }
  else {
code_?:
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      return 0;
    }
    if (iVar9 == 2) {
      return 1;
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object);
    pOVar7 = System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)this,(MethodInfo *)0x0);
    func_?(pOVar7,0);
    value = (Object *)func_?(0x10,pOVar7);
    iVar5 = func_?(TypeInfo__Newtonsoft__Json__ReferenceLoopHandling,&value);
    func_?(pOVar11,0);
    func_?(pOVar11,iVar5);
    value = (Object *)0x0;
    referenceLoopHandling.value = iVar5;
    func_?();
    pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_ReferenceLoopHandling,(IFormatProvider *)pCVar10,
                         pOVar11,(MethodInfo *)0x0);
    this_01 = (InvalidOperationException *)func_?();
    mscorlib.dll::System::InvalidOperationException::InvalidOperationException__ctor_1
              (this_01,pSVar1,(MethodInfo *)0x0);
    func_?();
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(pSVar1,0);
  pTVar12 = mscorlib.dll::System::Object::Object_GetType((Object *)pSVar1,(MethodInfo *)0x0);
  func_?(pOVar11,0);
  func_?(pOVar11,pTVar12);
  value = (Object *)0x0;
  referenceLoopHandling.value = (int32_t)pTVar12;
  func_?();
  pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Self_referencing_loop_detected_f,(IFormatProvider *)pCVar10,
                       pOVar11,(MethodInfo *)0x0);
  this_02 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_02,pSVar1,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* JsonContract GetContractSafe(Object) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
JsonSerializerInternalWriter_GetContractSafe
          (JsonSerializerInternalWriter *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_ContractResolver.method)
                        (pJVar1,(pJVar1->klass->vtable).set_ContractResolver.methodPtr);
      pTVar3 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        pJVar4 = (JsonContract *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                 iVar2,pTVar3);
        return pJVar4;
      }
    }
    func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._internalSerializer;
  if (this_00 == (JsonSerializerProxy *)0x0) {
    this_00 = (JsonSerializerProxy *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
    JsonSerializerProxy::JsonSerializerProxy__ctor_1(this_00,this,(MethodInfo *)0x0);
    (this->fields)._internalSerializer = this_00;
  }
  return this_00;
}


/* String GetPropertyName(DictionaryEntry) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
         JsonSerializerInternalWriter_GetPropertyName
                   (JsonSerializerInternalWriter *this,DictionaryEntry entry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  uVar2 = func_?(&entry,0);
  iVar3 = func_?(uVar2,TypeInfo__System__IConvertible);
  value = (Object *)func_?(&entry,0);
  if (iVar3 != 0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar4 = mscorlib.dll::System::Convert::Convert_ToString_2
                       (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    return pSVar4;
  }
  this_00 = (Object *)func_?(&entry,0);
  if (this_00 != (Object *)0x0) {
    type = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
    bVar5 = JsonSerializerInternalWriter_TryConvertToString(value,type,&pSStack_1,(MethodInfo *)0x0)
    ;
    if (bVar5 != 0) {
      return pSStack_1;
    }
    piVar6 = (int *)func_?();
    if (piVar6 != (int *)0x0) {
      pSVar4 = (String *)(**(code **)(*piVar6 + 0xd8))(piVar6,*(undefined4 *)(*piVar6 + 0xdc));
      return pSVar4;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  uStack_1 = 0;
  pJVar4 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar4 != (JsonSerializer *)0x0) {
    iVar5 = (*(code *)(pJVar4->klass->vtable).get_ReferenceResolver.method)
                      (pJVar4,(pJVar4->klass->vtable).set_ReferenceResolver.methodPtr);
    if (iVar5 != 0) {
      pSVar6 = (String *)
               func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar5
                               ,this,value);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar6;
    }
  }
  func_?(0);
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
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  while (pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0),
        initialDepth < (int)pIVar2) {
    (*(code *)(writer->klass->vtable).WriteEnd.method)(writer);
  }
  return;
}


/* Boolean HasFlag(TypeNameHandling, TypeNameHandling) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_HasFlag_2
               (JsonSerializerInternalWriter *this,TypeNameHandling__Enum value,
               TypeNameHandling__Enum flag,MethodInfo *method)

{
  return (value & flag) == flag;
}


/* Boolean IsSpecified(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_IsSpecified
               (JsonSerializerInternalWriter *this,JsonProperty *property,Object *target,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property != (JsonProperty *)0x0) {
    this_00 = (property->fields)._GetIsSpecified_k__BackingField;
    if (this_00 != (Predicate_1_Object_ *)0x0) {
      bVar1 = mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object__Invoke
                        (this_00,target,
                         MethodInfo__System__Predicate<System::Object>__Invoke_System__Object_);
      return bVar1;
    }
    return 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Serialize(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_Serialize
               (JsonSerializerInternalWriter *this,JsonWriter *jsonWriter,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (jsonWriter != (JsonWriter *)0x0) {
    valueContract = JsonSerializerInternalWriter_GetContractSafe(this,value,(MethodInfo *)0x0);
    JsonSerializerInternalWriter_SerializeValue
              (this,jsonWriter,value,valueContract,(JsonProperty *)0x0,(JsonContract *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_jsonWriter,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SerializeConvertable(JsonWriter, JsonConverter, Object, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeConvertable
               (JsonSerializerInternalWriter *this,JsonWriter *writer,JsonConverter *converter,
               Object *value,JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar2,(UIPushOption__Enum)value,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields)._internalSerializer == (JsonSerializerProxy *)0x0) {
          converter = (JsonConverter *)func_?();
          JsonSerializerProxy::JsonSerializerProxy__ctor_1
                    ((JsonSerializerProxy *)converter,this,(MethodInfo *)0x0);
          (this->fields)._internalSerializer = (JsonSerializerProxy *)converter;
        }
        if (converter != (JsonConverter *)0x0) {
          (*(code *)(converter->klass->vtable).__unknown.method)();
          this_00 = (List_1_MVPlayer_ *)
                    JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
          pLVar2 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
          if (pLVar2 != (List_1_System_Object_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                                MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                               );
            if (this_00 != (List_1_MVPlayer_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
              List_1_MVPlayer__RemoveAt
                        (this_00,(int32_t)((int)&pOVar3[-1].monitor + 3),
                         MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                        );
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
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  aNStack_7[0].value = 0;
  aNStack_7[0].has_value = 0;
  iStack_8 = 0;
  pJStack_9 = (JsonDictionaryContract *)0x0;
  uStack_10 = 0;
  func_?();
  pJVar11 = unaff_ESI;
  puStack_12 = (undefined4 *)&stack0xffffff98;
  puStack_5 = &stack0xffffff98;
  if (values != (IWrappedDictionary *)0x0) {
    puStack_12 = (undefined4 *)&stack0xffffff98;
    puStack_5 = &stack0xffffff98;
    pJVar11 = (JsonDictionaryContract *)
             func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,values);
    pJVar13 = (this->fields)._._Serializer_k__BackingField;
    if ((pJVar13 != (JsonSerializer *)0x0) &&
       (SVar14 = (StreamingContext)
                (*(code *)(pJVar13->klass->vtable).get_Context.method)
                          (pJVar13,(pJVar13->klass->vtable).set_Context.methodPtr),
       contract != (JsonDictionaryContract *)0x0)) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,(Object *)pJVar11,SVar14,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pJVar11 = (JsonDictionaryContract *)(this->fields)._serializeStack;
      if (pJVar11 == (JsonDictionaryContract *)0x0) {
        pJVar11 = (JsonDictionaryContract *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  ((List_1_UnityEngine_Vector4_ *)pJVar11,
                   MethodInfo__System__Collections__Generic__List<System::Object>__List__);
        (this->fields)._serializeStack = (List_1_System_Object_ *)pJVar11;
      }
      item = func_?();
      if ((pJVar11 != (JsonDictionaryContract *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)pJVar11,item,
                     MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                    ), writer != (JsonWriter *)0x0)) {
        (*(code *)(writer->klass->vtable).WriteStartObject.method)
                  (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
        aNStack_7[0] = (contract->fields)._._IsReference_k__BackingField;
        cVar15 = func_?(aNStack_7,MethodInfo__System__Nullable<bool>__get_HasValue__);
        pJVar11 = contract;
        if (cVar15 == '\0') {
          pJVar13 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
          bVar16 = (*(code *)(pJVar13->klass->vtable).get_PreserveReferencesHandling.method)
                            (pJVar13,(pJVar13->klass->vtable).set_PreserveReferencesHandling.methodPtr
                            );
          bVar16 = bVar16 & 1;
        }
        else {
          bVar16 = func_?(aNStack_7,MethodInfo__System__Nullable<bool>__get_Value__);
        }
        if (bVar16 != 0) {
          (*(code *)(writer->klass->vtable).WritePropertyName.method)
                    (writer,StringLiteral__id,(writer->klass->vtable).WriteEnd.methodPtr);
          pJVar13 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
          iVar17 = (*(code *)(pJVar13->klass->vtable).get_ReferenceResolver.method)
                            (pJVar13,(pJVar13->klass->vtable).set_ReferenceResolver.methodPtr);
          uVar18 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                   values);
          pJVar11 = (JsonDictionaryContract *)0x0;
          if (iVar17 == 0) goto code_?;
          uVar18 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                   iVar17,this,uVar18);
          (*(code *)(writer->klass->vtable).WriteValue.method)
                    (writer,uVar18,(writer->klass->vtable).WriteValue_1.methodPtr);
        }
        bVar19 = JsonSerializerInternalWriter_ShouldWriteType
                          (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                           collectionValueContract,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          pOVar20 = (Object *)
                    func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                    values);
          pJVar11 = contract;
          if (pOVar20 == (Object *)0x0) goto code_?;
          pTVar21 = mscorlib.dll::System::Object::Object_GetType(pOVar20,(MethodInfo *)0x0);
          JsonSerializerInternalWriter_WriteTypeProperty(this,writer,pTVar21,(MethodInfo *)0x0);
        }
        pJVar13 = (this->fields)._._Serializer_k__BackingField;
        pJVar11 = contract;
        if (pJVar13 != (JsonSerializer *)0x0) {
          pJStack_22 = (JsonDictionaryContract *)
                       (*(code *)(pJVar13->klass->vtable).get_ContractResolver.method)
                                 (pJVar13,(pJVar13->klass->vtable).set_ContractResolver.methodPtr);
          handle = TypeRef__System__Object;
          pTVar21 = (contract->fields)._DictionaryValueType_k__BackingField;
          if (pTVar21 == (Type *)0x0) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar21 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            pJVar11 = (JsonDictionaryContract *)handle;
          }
          if (pJStack_22 != (JsonDictionaryContract *)0x0) {
            pJStack_23 = (JsonContract *)
                         func_?(0,
                                         TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                         ,pJStack_22,pTVar21);
            pIStack_24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0);
            pJStack_25 = (JsonDictionaryContract *)
                         func_?(9,TypeInfo__System__Collections__IDictionary,values);
            uStack_2 = 0;
            while (pJVar11 = pJStack_25, uStack_1 = 0, pJStack_25 != (JsonDictionaryContract *)0x0) {
              cVar15 = func_?(1,TypeInfo__System__Collections__IEnumerator,pJStack_25);
              if (cVar15 == '\0') {
                *puStack_12 = 0x1ee;
                uStack_1 = 0xff;
                uStack_2 = 0xffffff;
                iVar17 = func_?(pJVar11,TypeInfo__System__IDisposable);
                if (iVar17 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iVar17);
                }
                iVar17 = iStack_8;
                if (iStack_8 != 0) goto code_?;
                if (writer != (JsonWriter *)0x0) {
                  (*(code *)(writer->klass->vtable).WriteEndObject.method)
                            (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
                  pJVar11 = (JsonDictionaryContract *)
                           JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                  this_01 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                  if (((this_01 != (List_1_System_Object_ *)0x0) &&
                      (pOVar20 = mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                             *)this_01,
                                            MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                                           ), pJVar11 != (JsonDictionaryContract *)0x0)) &&
                     (mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                      List_1_MVPlayer__RemoveAt
                                ((List_1_MVPlayer_ *)pJVar11,(int32_t)((int)&pOVar20[-1].monitor + 3)
                                 ,
                                 MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                                ), values != (IWrappedDictionary *)0x0)) {
                    pJVar11 = (JsonDictionaryContract *)
                             func_?(0,
                                             TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary
                                             ,values);
                    pJVar13 = (this->fields)._._Serializer_k__BackingField;
                    if ((pJVar13 != (JsonSerializer *)0x0) &&
                       (SVar14 = (StreamingContext)
                                (*(code *)(pJVar13->klass->vtable).get_Context.method)
                                          (pJVar13,(pJVar13->klass->vtable).set_Context.methodPtr),
                       contract != (JsonDictionaryContract *)0x0)) {
                      JsonContract::JsonContract_InvokeOnSerialized
                                ((JsonContract *)contract,(Object *)pJVar11,SVar14,(MethodInfo *)0x0);
                      *unaff_FS_OFFSET = uStack_4;
                      return;
                    }
                  }
                }
                break;
              }
              piVar26 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerator,pJVar11);
              uVar27 = CONCAT44(TypeInfo__System__Collections__DictionaryEntry,piVar26);
              if (piVar26 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar26 + 0x20) !=
                  (TypeInfo__System__Collections__DictionaryEntry->_0).element_class)
              goto code_?;
              puVar28 = (undefined4 *)func_?(piVar26);
              pJStack_9 = (JsonDictionaryContract *)*puVar28;
              uStack_10 = puVar28[1];
              uStack_29 = *puVar28;
              uStack_30 = puVar28[1];
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pJStack_31 = (JsonDictionaryContract *)0x0;
              uVar18 = func_?(&uStack_29,0);
              iVar17 = func_?(uVar18,TypeInfo__System__IConvertible);
              if (iVar17 == 0) {
                pJVar11 = (JsonDictionaryContract *)func_?(&uStack_29,0);
                pOVar20 = (Object *)func_?(&uStack_29,0);
                if (pOVar20 == (Object *)0x0) break;
                pTVar21 = mscorlib.dll::System::Object::Object_GetType(pOVar20,(MethodInfo *)0x0);
                bVar19 = JsonSerializerInternalWriter_TryConvertToString
                                  ((Object *)pJVar11,pTVar21,(String **)&pJStack_31,(MethodInfo *)0x0
                                  );
                pJVar32 = pJStack_31;
                if (bVar19 == 0) {
                  pJStack_9 = (JsonDictionaryContract *)0x0;
                  piVar26 = (int *)func_?();
                  if (piVar26 == (int *)0x0) break;
                  pJVar32 = (JsonDictionaryContract *)
                            (**(code **)(*piVar26 + 0xd8))(piVar26,*(undefined4 *)(*piVar26 + 0xdc))
                  ;
                }
              }
              else {
                pJStack_22 = (JsonDictionaryContract *)func_?(&uStack_29,0);
                if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr
                     & 0x2000000) != 0) &&
                   ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Globalization__CultureInfo);
                }
                provider = mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Convert);
                }
                pJVar32 = (JsonDictionaryContract *)
                          mscorlib.dll::System::Convert::Convert_ToString_2
                                    ((Object *)pJStack_22,(IFormatProvider *)provider,
                                     (MethodInfo *)0x0);
              }
              pJVar11 = pJVar32;
              if (contract == (JsonDictionaryContract *)0x0) break;
              this_00 = (Func_2_Object_Int32_ *)
                        (contract->fields)._PropertyNameResolver_k__BackingField;
              if (this_00 != (Func_2_Object_Int32_ *)0x0) {
                pJVar11 = (JsonDictionaryContract *)
                         System.Core.dll::System::Func`2[Object,Int32]::Func_2_Object_Int32__Invoke
                                   (this_00,(Object *)pJVar11,
                                    MethodInfo__System__Func<System::String,_System::String>__Invoke_System__String_
                                   );
              }
              uStack_1 = 1;
              pJStack_22 = pJVar11;
              pJStack_31 = (JsonDictionaryContract *)func_?(&pJStack_9,0);
              pJStack_33 = JsonSerializerInternalWriter_GetContractSafe
                                     (this,(Object *)pJStack_31,(MethodInfo *)0x0);
              bVar19 = JsonSerializerInternalWriter_ShouldWriteReference
                                (this,(Object *)pJStack_31,(JsonProperty *)0x0,pJStack_33,
                                 (MethodInfo *)0x0);
              if (bVar19 == 0) {
                bVar19 = JsonSerializerInternalWriter_CheckForCircularReference
                                  (this,(Object *)pJStack_31,
                                   (Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                                   (JsonContract *)contract,(MethodInfo *)0x0);
                if (bVar19 != 0) {
                  if (writer == (JsonWriter *)0x0) break;
                  pJStack_9 = pJVar11;
                  func_?();
                  JsonSerializerInternalWriter_SerializeValue
                            (this,writer,(Object *)pJStack_31,pJStack_33,(JsonProperty *)0x0,
                             pJStack_23,(MethodInfo *)0x0);
                }
              }
              else {
                if (writer == (JsonWriter *)0x0) break;
                func_?(0xd,writer,pJVar11);
                JsonSerializerInternalWriter_WriteReference
                          (this,writer,(Object *)pJStack_31,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(pJVar11,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__SerializeDictionary_Newtonsoft__Json__JsonWriter__Newtonsoft__Json__Utilities__IWrappedDictionary__Newtonsoft__Json__Serialization__JsonDictionaryContract__Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonContract_
                 );
  _Stack_38 = *(_union_86 *)&pJVar11->klass;
  uVar27 = func_?(&_Stack_38,&UNK_?);
code_?:
  iVar17 = func_?(uVar27);
code_?:
  func_?(iVar17,0,0);
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* Void SerializeISerializable(JsonWriter, ISerializable, JsonISerializableContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_SerializeISerializable
               (JsonSerializerInternalWriter *this,JsonWriter *writer,ISerializable *value,
               JsonISerializableContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._._Serializer_k__BackingField;
  if ((pJVar1 != (JsonSerializer *)0x0) &&
     (SVar2 = (StreamingContext)
              (*(code *)(pJVar1->klass->vtable).get_Context.method)
                        (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr),
     contract != (JsonISerializableContract *)0x0)) {
    JsonContract::JsonContract_InvokeOnSerializing
              ((JsonContract *)contract,(Object *)value,SVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar3 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
    if (pLVar3 == (List_1_UnityEngine_Vector4_ *)0x0) {
      pLVar3 = (List_1_UnityEngine_Vector4_ *)
               func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (pLVar3,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      (this->fields)._serializeStack = (List_1_System_Object_ *)pLVar3;
      if (pLVar3 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar3,(UIPushOption__Enum)value,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteStartObject.method)
                (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
      pTVar4 = (contract->fields)._._UnderlyingType_k__BackingField;
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__System__Runtime__Serialization__FormatterConverter);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      this_01 = (SerializationInfo *)
                func_?(TypeInfo__System__Runtime__Serialization__SerializationInfo);
      mscorlib.dll::System::Runtime::Serialization::SerializationInfo::SerializationInfo__ctor
                (this_01,pTVar4,(IFormatterConverter *)this_00,(MethodInfo *)0x0);
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar1 != (JsonSerializer *)0x0) &&
         (uVar5 = (*(code *)(pJVar1->klass->vtable).get_Context.method)
                             (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr),
         value != (ISerializable *)0x0)) {
        pIVar6 = value->klass;
        uVar7 = 0;
        uVar8._0_1_ = (pIVar6->_1).rank;
        uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
        if (uVar8 != 0) {
          do {
            if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Runtime__Serialization__ISerializable) {
              ppMVar9 = &(&pIVar6->vtable)[pIVar6->interfaceOffsets[uVar7].offset].GetObjectData.
                          method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        ppMVar9 = (MethodInfo **)
                   func_?(value,TypeInfo__System__Runtime__Serialization__ISerializable,0);
code_?:
        (*(code *)*ppMVar9)(value,this_01,uVar5,ppMVar9[1]);
        if ((this_01 != (SerializationInfo *)0x0) &&
           (this_02 = mscorlib.dll::System::Runtime::Serialization::SerializationInfo::
                      SerializationInfo_GetEnumerator(this_01,(MethodInfo *)0x0),
           this_02 != (SerializationInfoEnumerator *)0x0)) {
          while( true ) {
            SStack_10.value = (Object *)&UNK_?;
            bVar11 = mscorlib.dll::System::Runtime::Serialization::SerializationInfoEnumerator::
                    SerializationInfoEnumerator_MoveNext(this_02,(MethodInfo *)0x0);
            if (bVar11 == 0) break;
            mscorlib.dll::System::Runtime::Serialization::SerializationInfoEnumerator::
            SerializationInfoEnumerator_get_Current(&SStack_10,this_02,(MethodInfo *)0x0);
            func_?();
            SStack_10.value = (Object *)writer;
            SStack_10.objectType = (Type *)&UNK_?;
            (*(code *)(writer->klass->vtable).WritePropertyName.method)();
            value_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)&stack0xffffffdc,(MethodInfo *)0x0);
            this_03 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)&stack0xffffffdc,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (this_03 == (IList_1_VoxelHit_ *)0x0) {
              valueContract = (JsonContract *)0x0;
            }
            else {
              pJVar1 = (this->fields)._._Serializer_k__BackingField;
              if (pJVar1 == (JsonSerializer *)0x0) goto code_?;
              iVar12 = (*(code *)(pJVar1->klass->vtable).get_ContractResolver.method)
                                 (pJVar1,(pJVar1->klass->vtable).set_ContractResolver.methodPtr);
              pTVar4 = mscorlib.dll::System::Object::Object_GetType
                                  ((Object *)this_03,(MethodInfo *)0x0);
              if (iVar12 == 0) goto code_?;
              valueContract =
                   (JsonContract *)
                   func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                   iVar12,pTVar4);
            }
            JsonSerializerInternalWriter_SerializeValue
                      (this,writer,(Object *)value_00,valueContract,(JsonProperty *)0x0,
                       (JsonContract *)0x0,(MethodInfo *)0x0);
          }
          (*(code *)(writer->klass->vtable).WriteEndObject.method)();
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pLVar3 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
          cVar13 = cRam_?;
          if (pLVar3 == (List_1_UnityEngine_Vector4_ *)0x0) {
            pLVar3 = (List_1_UnityEngine_Vector4_ *)
                     func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
            List_1_UnityEngine_Vector4___ctor
                      (pLVar3,MethodInfo__System__Collections__Generic__List<System::Object>__List__
                      );
            cVar13 = cRam_?;
            (this->fields)._serializeStack = (List_1_System_Object_ *)pLVar3;
          }
          this_04 = pLVar3;
          if (cVar13 == '\0') {
            func_?(_UNK_?);
            this_04 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
            cRam_? = '\x01';
          }
          if (this_04 == (List_1_UnityEngine_Vector4_ *)0x0) {
            this_04 = (List_1_UnityEngine_Vector4_ *)
                      func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
            List_1_UnityEngine_Vector4___ctor
                      (this_04,
                       MethodInfo__System__Collections__Generic__List<System::Object>__List__);
            (this->fields)._serializeStack = (List_1_System_Object_ *)this_04;
            if (this_04 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
          }
          pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                               MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                              );
          if (pLVar3 != (List_1_UnityEngine_Vector4_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                      ((List_1_MVPlayer_ *)pLVar3,(int32_t)((int)&pOVar14[-1].monitor + 3),
                       MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                      );
            pJVar1 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar1 != (JsonSerializer *)0x0) {
              SVar2 = (StreamingContext)
                      (*(code *)(pJVar1->klass->vtable).get_Context.method)
                                (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr);
              JsonContract::JsonContract_InvokeOnSerialized
                        ((JsonContract *)contract,(Object *)value,SVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  aNStack_7[0].value = 0;
  aNStack_7[0].has_value = 0;
  iStack_8 = 0;
  func_?();
  iStack_9 = -1;
  pJVar10 = (JsonArrayContract *)values;
  puStack_11 = &stack0xffffff98;
  puStack_5 = &stack0xffffff98;
  if (values != (IWrappedCollection *)0x0) {
    puStack_11 = &stack0xffffff98;
    puStack_5 = &stack0xffffff98;
    pOStack_12 = (Object *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,values)
    ;
    pJVar13 = (this->fields)._._Serializer_k__BackingField;
    if ((pJVar13 != (JsonSerializer *)0x0) &&
       (SVar14 = (StreamingContext)
                (*(code *)(pJVar13->klass->vtable).get_Context.method)
                          (pJVar13,(pJVar13->klass->vtable).set_Context.methodPtr),
       contract != (JsonArrayContract *)0x0)) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,pOStack_12,SVar14,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pLStack_15 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
      if (pLStack_15 == (List_1_UnityEngine_Vector4_ *)0x0) {
        pLStack_15 = (List_1_UnityEngine_Vector4_ *)func_?();
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
        List_1_UnityEngine_Vector4___ctor
                  (pLStack_15,MethodInfo__System__Collections__Generic__List<System::Object>__List__
                  );
        (this->fields)._serializeStack = (List_1_System_Object_ *)pLStack_15;
      }
      item = func_?();
      if (pLStack_15 != (List_1_UnityEngine_Vector4_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLStack_15,item,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        aNStack_7[0] = (contract->fields)._._IsReference_k__BackingField;
        cVar16 = func_?(aNStack_7,MethodInfo__System__Nullable<bool>__get_HasValue__);
        if (cVar16 == '\0') {
          pJVar13 = (this->fields)._._Serializer_k__BackingField;
          pJVar10 = contract;
          if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
          uVar17 = (*(code *)(pJVar13->klass->vtable).get_PreserveReferencesHandling.method)
                            (pJVar13,(pJVar13->klass->vtable).set_PreserveReferencesHandling.methodPtr
                            );
          pLStack_15 = (List_1_UnityEngine_Vector4_ *)
                       (CONCAT31((uint3)(uVar17 >> 9),(char)(uVar17 >> 1)) & 0xffffff01);
        }
        else {
          pLStack_15 = (List_1_UnityEngine_Vector4_ *)
                       func_?(aNStack_7,MethodInfo__System__Nullable<bool>__get_Value__);
        }
        cStack_18 = (char)pLStack_15;
        bStack_19 = JsonSerializerInternalWriter_ShouldWriteType
                              (this,TypeNameHandling__Enum_Arrays,(JsonContract *)contract,member,
                               collectionValueContract,(MethodInfo *)0x0);
        pJVar10 = (JsonArrayContract *)writer;
        if (((char)pLStack_15 != '\0') || (bStack_19 != 0)) {
          if (writer == (JsonWriter *)0x0) goto code_?;
          (*(code *)(writer->klass->vtable).WriteStartObject.method)
                    (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
          if ((char)pLStack_15 != '\0') {
            (*(code *)(writer->klass->vtable).WritePropertyName.method)();
            pJVar13 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
            pOStack_12 = (Object *)
                         (*(code *)(pJVar13->klass->vtable).get_ReferenceResolver.method)
                                   (pJVar13,(pJVar13->klass->vtable).set_ReferenceResolver.methodPtr);
            uVar20 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,
                                    values);
            if (pOStack_12 == (Object *)0x0) goto code_?;
            uVar20 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                    pOStack_12,this,uVar20);
            (*(code *)(writer->klass->vtable).WriteValue.method)
                      (writer,uVar20,(writer->klass->vtable).WriteValue_1.methodPtr);
          }
          if (bStack_19 != 0) {
            pOVar21 = (Object *)func_?();
            pJVar10 = (JsonArrayContract *)writer;
            if (pOVar21 == (Object *)0x0) goto code_?;
            pTVar22 = mscorlib.dll::System::Object::Object_GetType(pOVar21,(MethodInfo *)0x0);
            JsonSerializerInternalWriter_WriteTypeProperty(this,writer,pTVar22,(MethodInfo *)0x0);
          }
          (*(code *)(writer->klass->vtable).WritePropertyName.method)();
        }
        pJVar13 = (this->fields)._._Serializer_k__BackingField;
        pJVar10 = contract;
        if (pJVar13 != (JsonSerializer *)0x0) {
          pOStack_12 = (Object *)
                       (*(code *)(pJVar13->klass->vtable).get_ContractResolver.method)
                                 (pJVar13,(pJVar13->klass->vtable).set_ContractResolver.methodPtr);
          handle = TypeRef__System__Object;
          pTVar22 = (contract->fields)._CollectionItemType_k__BackingField;
          if (pTVar22 == (Type *)0x0) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar22 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            pJVar10 = (JsonArrayContract *)handle;
          }
          if ((pOStack_12 != (Object *)0x0) &&
             (pJStack_23 = (JsonContract *)
                           func_?(0,
                                           TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                           ,pOStack_12,pTVar22),
             pJVar10 = (JsonArrayContract *)writer, writer != (JsonWriter *)0x0)) {
            (*(code *)(writer->klass->vtable).WriteStartArray.method)
                      (writer,(writer->klass->vtable).WriteEndArray.methodPtr);
            pIStack_24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0);
            pOStack_12 = (Object *)0x0;
            iStack_25 = func_?(0,TypeInfo__System__Collections__IEnumerable,values);
            uStack_2 = 0;
            iVar26 = -1;
            while (iVar27 = iVar26, uStack_1 = 0, iStack_25 != 0) {
              cVar16 = func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_25);
              if (cVar16 == '\0') {
                *(undefined4 *)(puStack_11 + iVar27 * 4 + 4) = 0x1cc;
                uStack_1 = 0xff;
                uStack_2 = 0xffffff;
                iVar26 = func_?(iStack_25,TypeInfo__System__IDisposable);
                if (iVar26 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iVar26);
                }
                iVar26 = iStack_8;
                if (iStack_8 != 0) goto code_?;
                if (writer != (JsonWriter *)0x0) {
                  (*(code *)(writer->klass->vtable).WriteEndArray.method)
                            (writer,(writer->klass->vtable).WriteStartConstructor.methodPtr);
                  if ((cStack_18 != '\0') || (bStack_19 != 0)) {
                    (*(code *)(writer->klass->vtable).WriteEndObject.method)
                              (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
                  }
                  pJVar10 = (JsonArrayContract *)
                            JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                  this_00 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
                  if (((this_00 != (List_1_System_Object_ *)0x0) &&
                      (pOVar21 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)this_00,
                                           MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                                          ), pJVar10 != (JsonArrayContract *)0x0)) &&
                     (mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                      List_1_MVPlayer__RemoveAt
                                ((List_1_MVPlayer_ *)pJVar10,(int32_t)((int)&pOVar21[-1].monitor + 3)
                                 ,
                                 MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                                ), values != (IWrappedCollection *)0x0)) {
                    pJVar10 = (JsonArrayContract *)
                              func_?(0,
                                              TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection
                                              ,values);
                    pJVar13 = (this->fields)._._Serializer_k__BackingField;
                    if ((pJVar13 != (JsonSerializer *)0x0) &&
                       (SVar14 = (StreamingContext)
                                (*(code *)(pJVar13->klass->vtable).get_Context.method)
                                          (pJVar13,(pJVar13->klass->vtable).set_Context.methodPtr),
                       contract != (JsonArrayContract *)0x0)) {
                      JsonContract::JsonContract_InvokeOnSerialized
                                ((JsonContract *)contract,(Object *)pJVar10,SVar14,(MethodInfo *)0x0)
                      ;
                      *unaff_FS_OFFSET = uStack_4;
                      return;
                    }
                  }
                }
                break;
              }
              pLStack_15 = (List_1_UnityEngine_Vector4_ *)
                           func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_25);
              _uStack_8 = CONCAT31(uStack_2,2);
              pJStack_28 = JsonSerializerInternalWriter_GetContractSafe
                                     (this,(Object *)pLStack_15,(MethodInfo *)0x0);
              bVar29 = JsonSerializerInternalWriter_ShouldWriteReference
                                (this,(Object *)pLStack_15,(JsonProperty *)0x0,pJStack_28,
                                 (MethodInfo *)0x0);
              if (bVar29 == 0) {
                bVar29 = JsonSerializerInternalWriter_CheckForCircularReference
                                  (this,(Object *)pLStack_15,
                                   (Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                                   (JsonContract *)contract,(MethodInfo *)0x0);
                if (bVar29 != 0) {
                  JsonSerializerInternalWriter_SerializeValue
                            (this,writer,(Object *)pLStack_15,pJStack_28,(JsonProperty *)0x0,
                             pJStack_23,(MethodInfo *)0x0);
                }
              }
              else {
                JsonSerializerInternalWriter_WriteReference
                          (this,writer,(Object *)pLStack_15,(MethodInfo *)0x0);
              }
              iVar30 = iVar27 + 1;
              uStack_1 = 0;
              *(undefined4 *)(puStack_11 + iVar30 * 4) = 0x1a4;
              pOStack_12 = (Object *)((int)&pOStack_12->klass + 1);
              iVar26 = iStack_8;
              iStack_9 = iVar30;
              if (iStack_8 != 0) goto code_?;
              iVar26 = iVar30;
              if (((iVar30 != -1) && (*(int *)(puStack_11 + iVar30 * 4) == 0x1a4)) &&
                 (iVar26 = iVar27, iStack_9 = iVar27, iVar30 < 0)) {
                iVar26 = iVar30;
                iStack_9 = iVar30;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(pJVar10,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__SerializeList_Newtonsoft__Json__JsonWriter__Newtonsoft__Json__Utilities__IWrappedCollection__Newtonsoft__Json__Serialization__JsonArrayContract__Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonContract_
                 );
  _Stack_48 = *(_union_86 *)&pJVar10->klass;
  func_?(&_Stack_48,&UNK_?);
  iVar26 = extraout_ECX;
code_?:
  iVar26 = func_?(iVar26,0,0);
code_?:
  func_?(iVar26,0,0);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._._Serializer_k__BackingField;
  if (pJVar1 != (JsonSerializer *)0x0) {
    SVar2 = (StreamingContext)
            (*(code *)(pJVar1->klass->vtable).get_Context.method)
                      (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr);
    if (contract != (JsonArrayContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,(Object *)values,SVar2,(MethodInfo *)0x0);
      this_00 = (this->fields)._serializeStack;
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)values,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        bVar3 = JsonSerializerInternalWriter_WriteStartArray
                          (this,writer,(Object *)values,contract,member,collectionContract,
                           (MethodInfo *)0x0);
        if (writer != (JsonWriter *)0x0) {
          initialDepth = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0);
          indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
          JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                    (this,writer,values,contract,member,(int32_t)initialDepth,indices,
                     (MethodInfo *)0x0);
          if (bVar3 != 0) {
            (*(code *)(writer->klass->vtable).WriteEndObject.method)
                      (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
          }
          this_01 = (List_1_MVPlayer_ *)(this->fields)._serializeStack;
          if (this_01 != (List_1_MVPlayer_ *)0x0) {
            pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                                MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                               );
            mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                      (this_01,(int32_t)((int)&pOVar4[-1].monitor + 3),
                       MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                      );
            pJVar1 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar1 != (JsonSerializer *)0x0) {
              SVar2 = (StreamingContext)
                      (*(code *)(pJVar1->klass->vtable).get_Context.method)
                                (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr);
              JsonContract::JsonContract_InvokeOnSerialized
                        ((JsonContract *)contract,(Object *)values,SVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
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
  pJVar1 = (JsonWriter *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (indices != (Int32__Array *)0x0) {
    pJVar2 = (JsonWriter *)indices->max_length;
    dimension = pJVar2;
    unaff_ESI = (Int32__Array *)
                func_?(TypeInfo__System__Int32,(undefined1 *)((int)&pJVar2->klass + 1));
    uVar3 = 0;
    if (0 < (int)pJVar2) {
      piVar4 = unaff_ESI->vector;
      do {
        if (indices->max_length <= uVar3) goto code_?;
        if (unaff_ESI == (Int32__Array *)0x0) goto code_?;
        if (unaff_ESI->max_length <= uVar3) goto code_?;
        *piVar4 = *(int32_t *)(((int)indices - (int)unaff_ESI) + (int)piVar4);
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while ((int)uVar3 < (int)pJVar2);
    }
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteStartArray.method)
                (writer,(writer->klass->vtable).WriteEndArray.methodPtr);
      puVar5 = (undefined *)0x0;
code_?:
      do {
        if (values == (Array *)0x0) break;
        iVar6 = mscorlib.dll::System::Array::Array_GetLength
                          (values,(int32_t)dimension,in_stack_7);
        if (iVar6 <= (int)puVar5) {
          if (writer != (JsonWriter *)0x0) {
            (*(code *)(writer->klass->vtable).WriteEndArray.method)
                      (writer,(writer->klass->vtable).WriteStartConstructor.methodPtr);
            *unaff_FS_OFFSET = pJVar1;
            return;
          }
          break;
        }
        if (unaff_ESI == (Int32__Array *)0x0) break;
        if ((JsonWriter *)unaff_ESI->max_length <= dimension) {
          uVar8 = func_?(0);
          func_?(uVar8);
code_?:
          uVar8 = func_?(0,0);
          func_?(uVar8);
          break;
        }
        unaff_ESI->vector[(int)dimension] = (int32_t)puVar5;
        iVar9 = mscorlib.dll::System::Array::Array_GetRank(values,(MethodInfo *)0x0);
        if (unaff_ESI->max_length == iVar9) {
          value = (JsonContract *)
                  mscorlib.dll::System::Array::Array_GetValue(values,unaff_ESI,(MethodInfo *)0x0);
          contract_00 = JsonSerializerInternalWriter_GetContractSafe
                                  (this,(Object *)value,(MethodInfo *)0x0);
          bVar10 = JsonSerializerInternalWriter_ShouldWriteReference
                            (this,(Object *)value,member,contract_00,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            dimension = (JsonWriter *)0x0;
            valueContract = (JsonContract *)0x0;
            bVar10 = JsonSerializerInternalWriter_CheckForCircularReference
                              (this,(Object *)value,
                               (Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,contract_00,
                               (MethodInfo *)0x0);
            if (bVar10 != 0) {
              puVar5 = &UNK_?;
              pJVar1 = writer;
              JsonSerializerInternalWriter_SerializeValue
                        (this,writer,(Object *)value,valueContract,member,(JsonContract *)contract,
                         (MethodInfo *)0x0);
              puVar5 = puVar5 + 1;
              goto code_?;
            }
          }
          else {
            dimension = writer;
            JsonSerializerInternalWriter_WriteReference
                      (this,writer,(Object *)value,(MethodInfo *)0x0);
            contract_00 = value;
          }
          puVar5 = (undefined *)((int)&contract_00->klass + 1);
          goto code_?;
        }
        in_stack_7 = (MethodInfo *)values;
        JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                  (this,writer,values,contract,member,initialDepth + 1,unaff_ESI,(MethodInfo *)0x0);
        puVar5 = puVar5 + 1;
      } while( true );
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__SerializeMultidimensionalArray_Newtonsoft__Json__JsonWriter__System__Array__Newtonsoft__Json__Serialization__JsonArrayContract__Newtonsoft__Json__Serialization__JsonProperty__int__System__Int32____
                 );
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
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb8;
  puVar6 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  aNStack_7[0].value = 0;
  aNStack_7[0].has_value = 0;
  iStack_8 = 0;
  func_?();
  pJVar9 = (this->fields)._._Serializer_k__BackingField;
  puStack_5 = &stack0xffffffb8;
  if ((pJVar9 != (JsonSerializer *)0x0) &&
     (puStack_5 = &stack0xffffffb8,
     SVar10 = (StreamingContext)
             (*(code *)(pJVar9->klass->vtable).get_Context.method)
                       (pJVar9,(pJVar9->klass->vtable).set_Context.methodPtr),
     contract != (JsonObjectContract *)0x0)) {
    JsonContract::JsonContract_InvokeOnSerializing
              ((JsonContract *)contract,value,SVar10,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
    unaff_ESI = (JsonProperty *)value;
    if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) {
      this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_01,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
      (this->fields)._serializeStack = (List_1_System_Object_ *)this_01;
      if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)value,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    if (writer != (JsonWriter *)0x0) {
      pIStack_11 = (IList_1_VoxelHit_ *)(writer->klass->vtable).WriteEndObject.methodPtr;
      pJStack_12 = (JsonProperty__Class *)writer;
      (*(code *)(writer->klass->vtable).WriteStartObject.method)();
      pMVar13 = MethodInfo__System__Nullable<bool>__get_HasValue__;
      aNStack_7[0] = (contract->fields)._._IsReference_k__BackingField;
      cVar14 = func_?();
      if (cVar14 == '\0') {
        pJVar9 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar9 == (JsonSerializer *)0x0) goto code_?;
        bVar15 = (*(code *)(pJVar9->klass->vtable).get_PreserveReferencesHandling.method)
                          (pJVar9,(pJVar9->klass->vtable).set_PreserveReferencesHandling.methodPtr);
        bVar15 = bVar15 & 1;
      }
      else {
        bVar15 = func_?(aNStack_7,MethodInfo__System__Nullable<bool>__get_Value__);
      }
      if (bVar15 != 0) {
        (*(code *)(writer->klass->vtable).WritePropertyName.method)
                  (writer,StringLiteral__id,(writer->klass->vtable).WriteEnd.methodPtr);
        pJVar9 = (this->fields)._._Serializer_k__BackingField;
        if ((pJVar9 == (JsonSerializer *)0x0) ||
           (iVar16 = (*(code *)(pJVar9->klass->vtable).get_ReferenceResolver.method)
                               (pJVar9,(pJVar9->klass->vtable).set_ReferenceResolver.methodPtr),
           iVar16 == 0)) goto code_?;
        uVar17 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                 iVar16,this,value);
        (*(code *)(writer->klass->vtable).WriteValue.method)
                  (writer,uVar17,(writer->klass->vtable).WriteValue_1.methodPtr);
      }
      bVar18 = JsonSerializerInternalWriter_ShouldWriteType
                        (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                         collectionValueContract,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        JsonSerializerInternalWriter_WriteTypeProperty
                  (this,writer,(contract->fields)._._UnderlyingType_k__BackingField,
                   (MethodInfo *)0x0);
      }
      pIStack_11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0);
      this_00 = (contract->fields)._Properties_k__BackingField;
      unaff_ESI = (JsonProperty *)contract;
      if (this_00 != (JsonPropertyCollection *)0x0) {
        pJStack_19 = (JsonProperty *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_IEnumerable_GetEnumerator
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                                MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                               );
        uStack_2 = 0;
        while (unaff_ESI = pJStack_19, uStack_1 = 0, pJStack_19 != (JsonProperty *)0x0) {
          cVar14 = func_?(1,TypeInfo__System__Collections__IEnumerator,pJStack_19);
          if (cVar14 == '\0') {
            pMVar13->methodPointer = (Il2CppMethodPointer)0x162;
            uStack_1 = 0xff;
            uStack_2 = 0xffffff;
            if (unaff_ESI != (JsonProperty *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,unaff_ESI);
            }
            iVar16 = iStack_8;
            if (iStack_8 != 0) goto code_?;
            if (writer != (JsonWriter *)0x0) {
              (*(code *)(writer->klass->vtable).WriteEndObject.method)
                        (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
              unaff_ESI = (JsonProperty *)
                          JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
              this_02 = JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
              if ((this_02 != (List_1_System_Object_ *)0x0) &&
                 (pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       this_02,
                                       MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                                      ), unaff_ESI != (JsonProperty *)0x0)) {
                mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                List_1_MVPlayer__RemoveAt
                          ((List_1_MVPlayer_ *)unaff_ESI,(int32_t)((int)&pOVar20[-1].monitor + 3),
                           MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                          );
                pJVar9 = (this->fields)._._Serializer_k__BackingField;
                if ((pJVar9 != (JsonSerializer *)0x0) &&
                   (SVar10 = (StreamingContext)
                            (*(code *)(pJVar9->klass->vtable).get_Context.method)
                                      (pJVar9,(pJVar9->klass->vtable).set_Context.methodPtr),
                   contract != (JsonObjectContract *)0x0)) {
                  JsonContract::JsonContract_InvokeOnSerialized
                            ((JsonContract *)contract,value,SVar10,(MethodInfo *)0x0);
                  *unaff_FS_OFFSET = uStack_4;
                  return;
                }
              }
            }
            break;
          }
          unaff_ESI = (JsonProperty *)
                      func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
                                      ,unaff_ESI);
          uStack_1 = 1;
          pJStack_21 = unaff_ESI;
          if (unaff_ESI == (JsonProperty *)0x0) break;
          if (((((unaff_ESI->fields)._Ignored_k__BackingField == 0) &&
               ((unaff_ESI->fields)._Readable_k__BackingField != 0)) &&
              (bVar18 = JsonSerializerInternalWriter_ShouldSerialize
                                 (this,unaff_ESI,value,(MethodInfo *)0x0), bVar18 != 0)) &&
             (bVar18 = JsonSerializerInternalWriter_IsSpecified
                                (this,unaff_ESI,value,(MethodInfo *)0x0), bVar18 != 0)) {
            pIVar22 = (unaff_ESI->fields)._ValueProvider_k__BackingField;
            if (pIVar22 == (IValueProvider *)0x0) break;
            pOStack_23 = (Object *)
                         func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider
                                         ,pIVar22,value);
            contract_00 = JsonSerializerInternalWriter_GetContractSafe
                                    (this,pOStack_23,(MethodInfo *)0x0);
            JsonSerializerInternalWriter_WriteMemberInfoProperty
                      (this,writer,pOStack_23,unaff_ESI,contract_00,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__SerializeObject_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonContract_
                 );
  pJStack_12 = unaff_ESI->klass;
  iVar16 = func_?(&pJStack_12,&UNK_?);
code_?:
  func_?(iVar16,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__System__Byte;
  if (contract != (JsonPrimitiveContract *)0x0) {
    pTVar1 = (contract->fields)._._UnderlyingType_k__BackingField;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar1 == pTVar2) {
      bVar3 = JsonSerializerInternalWriter_ShouldWriteType
                        (this,TypeNameHandling__Enum_Objects,(JsonContract *)contract,member,
                         collectionValueContract,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if (writer != (JsonWriter *)0x0) {
          pIVar4 = (writer->klass->vtable).WriteEndObject.methodPtr;
          (*(code *)(writer->klass->vtable).WriteStartObject.method)();
          JsonSerializerInternalWriter_WriteTypeProperty
                    (this,writer,(contract->fields)._._CreatedType_k__BackingField,(MethodInfo *)0x0
                    );
          (*(code *)(writer->klass->vtable).WritePropertyName.method)(writer);
          (*(code *)(writer->klass->vtable).WriteValue_37.method)
                    (writer,pIVar4,(writer->klass->vtable).WriteComment.methodPtr);
          (*(code *)(writer->klass->vtable).WriteEndObject.method)
                    (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
          return;
        }
        goto code_?;
      }
    }
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteValue_37.method)
                (writer,value,(writer->klass->vtable).WriteComment.methodPtr);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
            (*(code *)(pJVar2->klass->vtable).get_Context.method)
                      (pJVar2,(pJVar2->klass->vtable).set_Context.methodPtr);
    if (contract != (JsonStringContract *)0x0) {
      JsonContract::JsonContract_InvokeOnSerializing
                ((JsonContract *)contract,value,SVar3,(MethodInfo *)0x0);
      JsonSerializerInternalWriter_TryConvertToString
                (value,(contract->fields)._._UnderlyingType_k__BackingField,&pSStack_1,
                 (MethodInfo *)0x0);
      if (writer != (JsonWriter *)0x0) {
        (*(code *)(writer->klass->vtable).WriteValue.method)
                  (writer,pSStack_1,(writer->klass->vtable).WriteValue_1.methodPtr);
        pJVar2 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar2 != (JsonSerializer *)0x0) {
          SVar3 = (StreamingContext)
                  (*(code *)(pJVar2->klass->vtable).get_Context.method)
                            (pJVar2,(pJVar2->klass->vtable).set_Context.methodPtr);
          JsonContract::JsonContract_InvokeOnSerialized
                    ((JsonContract *)contract,value,SVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (member == (JsonProperty *)0x0) {
    pJVar1 = (JsonConverter *)0x0;
  }
  else {
    pJVar1 = (member->fields)._Converter_k__BackingField;
  }
  if (value == (Object *)0x0) {
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteNull.method)
                (writer,(writer->klass->vtable).WriteUndefined.methodPtr);
      return;
    }
    goto code_?;
  }
  if (pJVar1 == (JsonConverter *)0x0) {
    if (valueContract == (JsonContract *)0x0) goto code_?;
    pJVar1 = (valueContract->fields)._Converter_k__BackingField;
    if (pJVar1 != (JsonConverter *)0x0) goto code_?;
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
    pJVar1 = JsonSerializer::JsonSerializer_GetMatchingConverter
                        (pJVar2,(valueContract->fields)._UnderlyingType_k__BackingField,
                         (MethodInfo *)0x0);
    if ((pJVar1 != (JsonConverter *)0x0) ||
       (pJVar1 = (valueContract->fields)._InternalConverter_k__BackingField,
       pJVar1 != (JsonConverter *)0x0)) goto code_?;
  }
  else {
code_?:
    cVar3 = (*(code *)(pJVar1->klass->vtable).get_CanWrite.method)
                      (pJVar1,pJVar1->klass[1]._0.image);
    if (cVar3 != '\0') {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      bVar4 = JsonSerializerInternalWriter_ShouldWriteReference
                        (this,value,(JsonProperty *)0x0,valueContract,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        JsonSerializerInternalWriter_WriteReference(this,writer,value,(MethodInfo *)0x0);
        return;
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar4 = JsonSerializerInternalWriter_CheckForCircularReference
                        (this,value,(Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_)0x0,
                         valueContract,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      collectionValueContract = (JsonContract *)0x0;
      member = (JsonProperty *)this;
      pJVar6 = (JsonContract *)
               JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
      if (pJVar6 != (JsonContract *)0x0) {
        method = (MethodInfo *)value;
        member = (JsonProperty *)&UNK_?;
        collectionValueContract = pJVar6;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pJVar6,(UIPushOption__Enum)value,
                   MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                  );
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields)._internalSerializer == (JsonSerializerProxy *)0x0) {
          pJVar7 = (JsonProperty *)func_?();
          method = (MethodInfo *)0x0;
          collectionValueContract = (JsonContract *)this;
          member = pJVar7;
          JsonSerializerProxy::JsonSerializerProxy__ctor_1
                    ((JsonSerializerProxy *)pJVar7,this,(MethodInfo *)0x0);
          (this->fields)._internalSerializer = (JsonSerializerProxy *)pJVar7;
        }
        method = pMVar5;
        collectionValueContract = (JsonContract *)&UNK_?;
        (**(code **)(method->methodPointer + 0xe0))();
        pJVar6 = (JsonContract *)
                 JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
        pJVar7 = (JsonProperty *)
                 JsonSerializerInternalWriter_get_SerializeStack(this,(MethodInfo *)0x0);
        if (pJVar7 != (JsonProperty *)0x0) {
          collectionValueContract =
               (JsonContract *)
               MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__;
          member = pJVar7;
          pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pJVar7,
                              MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                             );
          if (pJVar6 != (JsonContract *)0x0) {
            method = (MethodInfo *)((int)&pOVar8[-1].monitor + 3);
            member = (JsonProperty *)&UNK_?;
            collectionValueContract = pJVar6;
            mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                      ((List_1_MVPlayer_ *)pJVar6,(int32_t)method,
                       MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                      );
            return;
          }
        }
      }
      goto code_?;
    }
  }
  iVar9 = func_?(valueContract,
                          TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
  if (iVar9 == 0) {
    iVar9 = func_?(valueContract,
                            TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
    if (iVar9 == 0) {
      iVar9 = func_?(valueContract,
                              TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
      if (iVar9 != 0) {
        pMVar5 = (MethodInfo *)0x0;
        pJVar7 = member;
        pJVar6 = collectionValueContract;
        contract = (JsonObjectContract *)
                   func_?(valueContract,
                                   TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
        JsonSerializerInternalWriter_SerializeObject
                  (this,writer,value,contract,pJVar7,pJVar6,pMVar5);
        return;
      }
      iVar9 = func_?(valueContract,
                              TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
      if (iVar9 == 0) {
        iVar9 = func_?(valueContract,
                                TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
        if (iVar9 == 0) {
          iVar9 = func_?(valueContract,
                                  TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
          if (iVar9 == 0) {
            method = (MethodInfo *)valueContract;
            collectionValueContract = (JsonContract *)&UNK_?;
            iVar9 = func_?();
            if (iVar9 == 0) {
              return;
            }
            method = (MethodInfo *)
                     TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract;
            collectionValueContract = valueContract;
            member = (JsonProperty *)&UNK_?;
            method = (MethodInfo *)func_?();
            collectionValueContract =
                 (JsonContract *)TypeInfo__System__Runtime__Serialization__ISerializable;
            member = (JsonProperty *)value;
            collectionValueContract = (JsonContract *)func_?();
            member = (JsonProperty *)writer;
            JsonSerializerInternalWriter_SerializeISerializable
                      (this,writer,(ISerializable *)collectionValueContract,
                       (JsonISerializableContract *)method,(MethodInfo *)0x0);
            return;
          }
          if ((this->fields)._._Serializer_k__BackingField != (JsonSerializer *)0x0) {
            method = (MethodInfo *)0x1c;
            collectionValueContract = (JsonContract *)&UNK_?;
            iVar9 = func_?();
            collectionValueContract = (JsonContract *)TypeInfo__Newtonsoft__Json__Linq__JToken;
            member = (JsonProperty *)value;
            member = (JsonProperty *)func_?();
            if (iVar9 == 0) {
              method = (MethodInfo *)value;
              collectionValueContract = (JsonContract *)&UNK_?;
              pJVar7 = (JsonProperty *)func_?();
            }
            else {
              if ((this->fields)._._Serializer_k__BackingField == (JsonSerializer *)0x0)
              goto code_?;
              method = (MethodInfo *)0x1c;
              collectionValueContract = (JsonContract *)&UNK_?;
              source = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                       func_?();
              writer = (JsonWriter *)&UNK_?;
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                        (source,
                         Newtonsoft__Json__JsonConverter__MethodInfo__System__Linq__Enumerable__ToArray<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_____
                        );
              pJVar7 = member;
            }
            if (pJVar7 != (JsonProperty *)0x0) {
              method = (MethodInfo *)writer;
              member = (JsonProperty *)0x16;
              collectionValueContract = (JsonContract *)pJVar7;
              func_?();
              return;
            }
          }
        }
        else {
          pJVar7 = (JsonProperty *)
                   func_?(valueContract,
                                   TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
          if (pJVar7 != (JsonProperty *)0x0) {
            if ((pJVar7->fields)._NullValueHandling_k__BackingField.has_value == 0) {
              method = (MethodInfo *)value;
              member = (JsonProperty *)&UNK_?;
              collectionValueContract = (JsonContract *)pJVar7;
              values = JsonArrayContract::JsonArrayContract_CreateWrapper
                                 ((JsonArrayContract *)pJVar7,value,(MethodInfo *)0x0);
              pJVar6 = collectionValueContract;
              pJVar10 = member;
              method = (MethodInfo *)collectionValueContract;
              collectionValueContract = (JsonContract *)member;
              member = pJVar7;
              JsonSerializerInternalWriter_SerializeList
                        (this,writer,values,(JsonArrayContract *)pJVar7,pJVar10,pJVar6,
                         (MethodInfo *)0x0);
              return;
            }
            method = (MethodInfo *)value;
            collectionValueContract = (JsonContract *)&UNK_?;
            pOVar8 = (Object *)func_?();
            if (cRam_? == '\0') {
              method = (MethodInfo *)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            method = (MethodInfo *)(this->fields)._._Serializer_k__BackingField;
            if ((JsonSerializer *)method != (JsonSerializer *)0x0) {
              collectionValueContract = (JsonContract *)&UNK_?;
              SVar11 = (StreamingContext)
                       (*(code *)(((JsonSerializer *)method)->klass->vtable).get_Context.method)();
              JsonContract::JsonContract_InvokeOnSerializing
                        ((JsonContract *)pJVar7,pOVar8,SVar11,(MethodInfo *)0x0);
              this_00 = (this->fields)._serializeStack;
              if (this_00 != (List_1_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pOVar8,
                           MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                          );
                pJVar10 = member;
                values_01 = (Array *)0x0;
                contract_00 = (JsonArrayContract *)collectionValueContract;
                bVar4 = JsonSerializerInternalWriter_WriteStartArray
                                  (this,writer,(Object *)0x0,(JsonArrayContract *)pJVar7,member,
                                   collectionValueContract,(MethodInfo *)0x0);
                member = (JsonProperty *)CONCAT13(bVar4,member._0_3_);
                if (writer != (JsonWriter *)0x0) {
                  method = (MethodInfo *)writer;
                  collectionValueContract = (JsonContract *)&UNK_?;
                  initialDepth = mscorlib.dll::System::Collections::ObjectModel::
                                 Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                           ((Collection_1_VoxelHit_ *)writer,(MethodInfo *)0x0);
                  method = (MethodInfo *)TypeInfo__System__Int32;
                  collectionValueContract = (JsonContract *)&UNK_?;
                  indices = (Int32__Array *)func_?();
                  JsonSerializerInternalWriter_SerializeMultidimensionalArray_1
                            (this,writer,values_01,contract_00,pJVar10,(int32_t)initialDepth,indices
                             ,(MethodInfo *)0x0);
                  if (member._3_1_ != '\0') {
                    method = (MethodInfo *)writer;
                    collectionValueContract = (JsonContract *)&UNK_?;
                    (*(code *)(writer->klass->vtable).WriteEndObject.method)();
                  }
                  pJVar6 = (JsonContract *)(this->fields)._serializeStack;
                  if (pJVar6 != (JsonContract *)0x0) {
                    collectionValueContract = (JsonContract *)&UNK_?;
                    method = (MethodInfo *)pJVar6;
                    pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                        pJVar6,
                                        MethodInfo__System__Collections__Generic__List<System::Object>__get_Count__
                                       );
                    method = (MethodInfo *)((int)&pOVar8[-1].monitor + 3);
                    member = (JsonProperty *)&UNK_?;
                    collectionValueContract = pJVar6;
                    mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
                    List_1_MVPlayer__RemoveAt
                              ((List_1_MVPlayer_ *)pJVar6,(int32_t)method,
                               MethodInfo__System__Collections__Generic__List<System::Object>__RemoveAt_int_
                              );
                    pJVar2 = (this->fields)._._Serializer_k__BackingField;
                    if (pJVar2 != (JsonSerializer *)0x0) {
                      pJVar12 = pJVar2->klass;
                      pIStack13 = (pJVar12->vtable).set_Context.methodPtr;
                      SVar11 = (StreamingContext)(*(code *)(pJVar12->vtable).get_Context.method)();
                      collectionValueContract = (JsonContract *)&UNK_?;
                      method = (MethodInfo *)contract_00;
                      JsonContract::JsonContract_InvokeOnSerialized
                                ((JsonContract *)contract_00,(Object *)values_01,SVar11,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pJVar7 = (JsonProperty *)
                 func_?(valueContract,
                                 TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
        if (pJVar7 != (JsonProperty *)0x0) {
          method = (MethodInfo *)value;
          member = (JsonProperty *)&UNK_?;
          collectionValueContract = (JsonContract *)pJVar7;
          values_00 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                                ((JsonDictionaryContract *)pJVar7,value,(MethodInfo *)0x0);
          pJVar6 = collectionValueContract;
          pJVar10 = member;
          method = (MethodInfo *)collectionValueContract;
          collectionValueContract = (JsonContract *)member;
          member = pJVar7;
          JsonSerializerInternalWriter_SerializeDictionary
                    (this,writer,values_00,(JsonDictionaryContract *)pJVar7,pJVar10,pJVar6,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pJVar6 = (JsonContract *)
               func_?(valueContract,
                               TypeInfo__Newtonsoft__Json__Serialization__JsonStringContract);
      method = (MethodInfo *)(this->fields)._._Serializer_k__BackingField;
      member = (JsonProperty *)0x0;
      if ((JsonSerializer *)method != (JsonSerializer *)0x0) {
        collectionValueContract = (JsonContract *)&UNK_?;
        SVar11 = (StreamingContext)
                 (*(code *)(((JsonSerializer *)method)->klass->vtable).get_Context.method)();
        if (pJVar6 != (JsonContract *)0x0) {
          JsonContract::JsonContract_InvokeOnSerializing(pJVar6,value,SVar11,(MethodInfo *)0x0);
          JsonSerializerInternalWriter_TryConvertToString
                    (value,(pJVar6->fields)._UnderlyingType_k__BackingField,(String **)&member,
                     (MethodInfo *)0x0);
          if (writer != (JsonWriter *)0x0) {
            method = (MethodInfo *)member;
            collectionValueContract = (JsonContract *)writer;
            member = (JsonProperty *)&UNK_?;
            (*(code *)(writer->klass->vtable).WriteValue.method)();
            method = (MethodInfo *)(this->fields)._._Serializer_k__BackingField;
            if ((JsonSerializer *)method != (JsonSerializer *)0x0) {
              collectionValueContract = (JsonContract *)&UNK_?;
              SVar11 = (StreamingContext)
                       (*(code *)(((JsonSerializer *)method)->klass->vtable).get_Context.method)();
              member = (JsonProperty *)SVar11.additional;
              collectionValueContract = (JsonContract *)0x0;
              JsonContract::JsonContract_InvokeOnSerialized(pJVar6,value,SVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pJVar10 = (JsonProperty *)
              func_?(valueContract,
                              TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    pJVar7 = pJVar10;
    if (cRam_? == '\0') {
      method = (MethodInfo *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    handle = TypeRef__System__Byte;
    if (pJVar10 != (JsonProperty *)0x0) {
      pSVar14 = (pJVar10->fields)._PropertyName_k__BackingField;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      collectionValueContract = (JsonContract *)0x0;
      member = (JsonProperty *)handle;
      pSVar15 = (String *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      pJVar6 = collectionValueContract;
      pJVar10 = member;
      if (pSVar14 == pSVar15) {
        method = (MethodInfo *)collectionValueContract;
        collectionValueContract = (JsonContract *)member;
        writer = (JsonWriter *)&UNK_?;
        member = pJVar7;
        bVar4 = JsonSerializerInternalWriter_ShouldWriteType
                          (this,TypeNameHandling__Enum_Objects,(JsonContract *)pJVar7,pJVar10,pJVar6
                           ,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          uStack16 = *(undefined4 *)(_UNK_? + 0xfc);
          (**(code **)(_UNK_? + 0xf8))();
          JsonSerializerInternalWriter_WriteTypeProperty
                    (this,(JsonWriter *)&UNK_?,
                     (Type *)(pJVar7->fields)._Order_k__BackingField.value,(MethodInfo *)0x0);
          (**(code **)(_UNK_? + 0x128))();
          method = (MethodInfo *)&UNK_?;
          collectionValueContract = (JsonContract *)&UNK_?;
          (**(code **)(_UNK_? + 0x2a0))();
          collectionValueContract = *(JsonContract **)(_UNK_? + 0x104);
          member = (JsonProperty *)&UNK_?;
          (**(code **)(_UNK_? + 0x100))();
          return;
        }
      }
      if (writer != (JsonWriter *)0x0) {
        method = (MethodInfo *)value;
        collectionValueContract = (JsonContract *)writer;
        member = (JsonProperty *)&UNK_?;
        (*(code *)(writer->klass->vtable).WriteValue_37.method)();
        return;
      }
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean ShouldSerialize(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_ShouldSerialize
               (JsonSerializerInternalWriter *this,JsonProperty *property,Object *target,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property != (JsonProperty *)0x0) {
    this_00 = (property->fields)._ShouldSerialize_k__BackingField;
    if (this_00 != (Predicate_1_Object_ *)0x0) {
      bVar1 = mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object__Invoke
                        (this_00,target,
                         MethodInfo__System__Predicate<System::Object>__Invoke_System__Object_);
      return bVar1;
    }
    return 1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean ShouldWriteReference(Object, JsonProperty, JsonContract) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_ShouldWriteReference
               (JsonSerializerInternalWriter *this,Object *value,JsonProperty *property,
               JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if (contract != (JsonContract *)0x0) {
      bVar1 = (TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract->_1).naturalAligment
      ;
      if (((contract->klass->_1).naturalAligment < bVar1) ||
         ((contract->klass->_1).typeHierarchy[bVar1 - 1] !=
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pJVar3 = (JsonContract *)0x0;
      if (bVar2) {
        pJVar3 = contract;
      }
      if (pJVar3 != (JsonContract *)0x0) {
        return 0;
      }
    }
    aNStack_4[0].value = 0;
    aNStack_4[0].has_value = 0;
    if (property != (JsonProperty *)0x0) {
      aNStack_4[0] = (property->fields)._IsReference_k__BackingField;
    }
    cVar5 = func_?(aNStack_4,MethodInfo__System__Nullable<bool>__get_HasValue__);
    if (cVar5 == '\0') {
      if (contract == (JsonContract *)0x0) goto code_?;
      aNStack_4[0] = (contract->fields)._IsReference_k__BackingField;
    }
    cVar5 = func_?(aNStack_4,MethodInfo__System__Nullable<bool>__get_HasValue__);
    if (cVar5 == '\0') {
      pJVar6 = (this->fields)._._Serializer_k__BackingField;
      iVar7 = func_?(contract,TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)
      ;
      if (iVar7 == 0) {
        if (pJVar6 == (JsonSerializer *)0x0) goto code_?;
        bVar1 = (*(code *)(pJVar6->klass->vtable).get_PreserveReferencesHandling.method)
                          (pJVar6,(pJVar6->klass->vtable).set_PreserveReferencesHandling.methodPtr);
      }
      else {
        if (pJVar6 == (JsonSerializer *)0x0) goto code_?;
        uVar8 = (*(code *)(pJVar6->klass->vtable).get_PreserveReferencesHandling.method)
                           (pJVar6,(pJVar6->klass->vtable).set_PreserveReferencesHandling.methodPtr)
        ;
        bVar1 = (byte)(uVar8 >> 1);
      }
      aNStack_9[0].value = 0;
      aNStack_9[0].has_value = 0;
      func_?(aNStack_9,bVar1 & 1,MethodInfo__System__Nullable<bool>__Nullable_bool_);
      aNStack_4[0] = aNStack_9[0];
    }
    cVar5 = func_?(aNStack_4,MethodInfo__System__Nullable<bool>__get_Value__);
    if (cVar5 != '\0') {
      pJVar6 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar6 != (JsonSerializer *)0x0) &&
         (piVar10 = (int *)(*(code *)(pJVar6->klass->vtable).get_ReferenceResolver.method)
                                     (pJVar6,(pJVar6->klass->vtable).set_ReferenceResolver.methodPtr
                                     ), piVar10 != (int *)0x0)) {
        uVar11 = 0;
        uVar12 = *(ushort *)(*piVar10 + 0xb6);
        if (uVar12 != 0) {
          iVar7 = *(int *)(*piVar10 + 0x58);
          do {
            if (*(IReferenceResolver__Class **)(iVar7 + (uint)uVar11 * 8) ==
                TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver) {
              puVar13 = (undefined4 *)
                        (*piVar10 + (*(int *)(iVar7 + 4 + (uint)uVar11 * 8) + 0x1a) * 8);
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar12);
        }
        puVar13 = (undefined4 *)
                  func_?(piVar10,
                                  TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,2);
code_?:
        bVar14 = (*(code *)*puVar13)(piVar10,this,value,puVar13[1]);
        return bVar14;
      }
code_?:
      func_?(0);
      pcVar15 = (code *)swi(3);
      bVar14 = (*pcVar15)();
      return bVar14;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  if (member == (JsonProperty *)0x0) {
    uStack_2 = 0;
    iStack_3 = 0;
  }
  else {
    iStack_3 = (member->fields)._TypeNameHandling_k__BackingField.value;
    uStack_2 = *(undefined4 *)&(member->fields)._TypeNameHandling_k__BackingField.has_value;
  }
  iStack_4 = iStack_3;
  uStack_5 = uStack_2;
  cVar6 = func_?(&iStack_4,
                          MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                         );
  if (cVar6 == '\0') {
    pJVar7 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar7 == (JsonSerializer *)0x0) goto code_?;
    TVar8 = (*(code *)(pJVar7->klass->vtable).get_TypeNameHandling.method)
                      (pJVar7,(pJVar7->klass->vtable).set_TypeNameHandling.methodPtr);
  }
  else {
    TVar8 = func_?(&iStack_4,
                            MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_Value__
                           );
  }
  if (this == (JsonSerializerInternalWriter *)0x0) {
code_?:
    func_?(0);
    pcVar9 = (code *)swi(3);
    bVar10 = (*pcVar9)();
    return bVar10;
  }
  if ((TVar8 & typeNameHandlingFlag) == typeNameHandlingFlag) {
    return 1;
  }
  if (member == (JsonProperty *)0x0) {
    if (collectionValueContract != (JsonContract *)0x0) {
      pJVar7 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar7 == (JsonSerializer *)0x0) goto code_?;
      iVar11 = (*(code *)(pJVar7->klass->vtable).get_TypeNameHandling.method)
                        (pJVar7,(pJVar7->klass->vtable).set_TypeNameHandling.methodPtr);
      if (iVar11 == 4) {
        if (contract == (JsonContract *)0x0) goto code_?;
        if ((contract->fields)._UnderlyingType_k__BackingField !=
            (collectionValueContract->fields)._UnderlyingType_k__BackingField) {
          return 1;
        }
      }
    }
  }
  else {
    NStack_1 = (member->fields)._TypeNameHandling_k__BackingField;
    cVar6 = func_?(&NStack_1,
                            MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                           );
    if (cVar6 == '\0') {
      pJVar7 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar7 == (JsonSerializer *)0x0) goto code_?;
      iVar11 = (*(code *)(pJVar7->klass->vtable).get_TypeNameHandling.method)
                        (pJVar7,(pJVar7->klass->vtable).set_TypeNameHandling.methodPtr);
    }
    else {
      iVar11 = func_?(&NStack_1,
                              MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_Value__
                             );
    }
    if (iVar11 == 4) {
      if (contract != (JsonContract *)0x0) {
        if ((contract->fields)._UnderlyingType_k__BackingField ==
            (member->fields)._PropertyType_k__BackingField) {
          return 0;
        }
        pJVar7 = (this->fields)._._Serializer_k__BackingField;
        if (((pJVar7 != (JsonSerializer *)0x0) &&
            (iVar11 = (*(code *)(pJVar7->klass->vtable).get_ContractResolver.method)
                               (pJVar7,(pJVar7->klass->vtable).set_ContractResolver.methodPtr),
            iVar11 != 0)) &&
           (iVar11 = func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                    iVar11,(member->fields)._PropertyType_k__BackingField),
           iVar11 != 0)) {
          if ((contract->fields)._UnderlyingType_k__BackingField == *(Type **)(iVar11 + 0xc)) {
            return 0;
          }
          return 1;
        }
      }
      goto code_?;
    }
  }
  return 0;
}


/* Boolean TryConvertToString(Object, Type, String ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_TryConvertToString
               (Object *value,Type *type,String **s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
  }
  this = Json::Utilities::ConvertUtils::ConvertUtils_GetConverter(type,(MethodInfo *)0x0);
  if (this != (TypeConverter *)0x0) {
    bVar1 = (TypeInfo__System__ComponentModel__ComponentConverter->_1).naturalAligment;
    if (((this->klass->_1).naturalAligment < bVar1) ||
       ((this->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__System__ComponentModel__ComponentConverter)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pTVar3 = (TypeConverter *)0x0;
    if (bVar2) {
      pTVar3 = this;
    }
    if (pTVar3 == (TypeConverter *)0x0) {
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      pIVar5 = TypeRef__System__ComponentModel__TypeConverter;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
      pIVar5 = TypeRef__System__String;
      if (pTVar4 != pTVar6) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
        value = (Object *)0x0;
        bVar7 = System.dll::System::ComponentModel::TypeConverter::TypeConverter_CanConvertTo
                          (this,pTVar4,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          _UNK_? =
               System.dll::System::ComponentModel::TypeConverter::
               TypeConverter_ConvertToInvariantString(this,(Object *)0x0,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  if (value != (Object *)0x0) {
    pOVar8 = value->klass;
    bVar1 = (pOVar8->_1).naturalAligment;
    bVar9 = (TypeInfo__System__Type->_1).naturalAligment;
    if ((bVar1 < bVar9) ||
       ((Type__Class *)(pOVar8->_1).typeHierarchy[bVar9 - 1] != TypeInfo__System__Type)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pOVar10 = (Object *)0x0;
    if (bVar2) {
      pOVar10 = value;
    }
    if (pOVar10 != (Object *)0x0) {
      bVar9 = (TypeInfo__System__Type->_1).naturalAligment;
      if ((bVar1 < bVar9) ||
         ((Type__Class *)(pOVar8->_1).typeHierarchy[bVar9 - 1] != TypeInfo__System__Type)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pOVar10 = (Object *)0x0;
      if (bVar2) {
        pOVar10 = value;
      }
      if (pOVar10 != (Object *)0x0) {
        if ((bVar1 < bVar9) ||
           ((Type__Class *)(pOVar8->_1).typeHierarchy[bVar9 - 1] != TypeInfo__System__Type)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        pOVar10 = (Object *)0x0;
        if (bVar2) {
          pOVar10 = value;
        }
        if (pOVar10 != (Object *)0x0) {
          pSVar11 = (String *)(*(code *)pOVar10->klass[1].static_fields)();
          *s = pSVar11;
          return 1;
        }
      }
      func_?();
      pcVar12 = (code *)swi(3);
      bVar7 = (*pcVar12)();
      return bVar7;
    }
  }
  *s = (String *)0x0;
  return 0;
}


/* Void WriteMemberInfoProperty(JsonWriter, Object, JsonProperty, JsonContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteMemberInfoProperty
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *memberValue,
               JsonProperty *property,JsonContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  uStack_2._0_4_ = 0;
  uStack_2._4_1_ = 0;
  uStack_2._5_3_ = 0;
  if (property != (JsonProperty *)0x0) {
    pSVar3 = (property->fields)._PropertyName_k__BackingField;
    pMStack_4 = (MethodInfo *)(property->fields)._DefaultValue_k__BackingField;
    pJVar5 = (this->fields)._._Serializer_k__BackingField;
    NStack_1 = (property->fields)._NullValueHandling_k__BackingField;
    if (pJVar5 != (JsonSerializer *)0x0) {
      uVar6 = (*(code *)(pJVar5->klass->vtable).get_NullValueHandling.method)
                        (pJVar5,(pJVar5->klass->vtable).set_NullValueHandling.methodPtr);
      iVar7 = func_?(&NStack_1,uVar6,
                              MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                             );
      if ((iVar7 == 1) && (memberValue == (Object *)0x0)) {
        return;
      }
      pJVar5 = (this->fields)._._Serializer_k__BackingField;
      uStack_2 = (property->fields)._DefaultValueHandling_k__BackingField;
      if (pJVar5 != (JsonSerializer *)0x0) {
        uVar6 = (*(code *)(pJVar5->klass->vtable).get_DefaultValueHandling.method)
                          (pJVar5,(pJVar5->klass->vtable).set_DefaultValueHandling.methodPtr);
        uVar8 = func_?(&uStack_2,uVar6,
                                MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                               );
        if (((uVar8 & 1) != 0) &&
           (bVar9 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (memberValue,(Object *)pMStack_4,(MethodInfo *)0x0), bVar9 != 0)) {
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
            NStack_1.value = (int32_t)(writer->klass->vtable).WriteEnd.methodPtr;
            uStack_2 = (Nullable_1_Newtonsoft_Json_DefaultValueHandling_)CONCAT44(pSVar3,writer);
            (*(code *)(writer->klass->vtable).WritePropertyName.method)();
            JsonSerializerInternalWriter_SerializeValue
                      (this,writer,memberValue,contract,property,(JsonContract *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          property = (JsonProperty *)0x0;
          if (writer != (JsonWriter *)0x0) {
            (*(code *)(writer->klass->vtable).WritePropertyName.method)
                      (writer,pSVar3,(writer->klass->vtable).WriteEnd.methodPtr);
            JsonSerializerInternalWriter_WriteReference(this,writer,memberValue,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(property,0);
  pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)property,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pIVar10);
  func_?(0,pIVar10);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_write_a_null_value_for_pr,(IFormatProvider *)provider,
                      args,(MethodInfo *)0x0);
  this_00 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  pMStack_4 = 
  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__WriteMemberInfoProperty_Newtonsoft__Json__JsonWriter__System__Object__Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonContract_
  ;
  NStack_1._4_4_ = 0;
  NStack_1.value = (int32_t)this_00;
  uStack_2 = (Nullable_1_Newtonsoft_Json_DefaultValueHandling_)
              CONCAT44(&UNK_?,(int32_t)uStack_2);
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void WriteReference(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteReference
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WriteStartObject.method)
              (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,StringLiteral__ref,(writer->klass->vtable).WriteEnd.methodPtr);
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_ReferenceResolver.method)
                        (pJVar1,(pJVar1->klass->vtable).set_ReferenceResolver.methodPtr);
      if (iVar2 != 0) {
        uVar3 = func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,
                                iVar2,this,value);
        (*(code *)(writer->klass->vtable).WriteValue.method)
                  (writer,uVar3,(writer->klass->vtable).WriteValue_1.methodPtr);
        (*(code *)(writer->klass->vtable).WriteEndObject.method)
                  (writer,(writer->klass->vtable).WriteStartArray.methodPtr);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  aNStack_1[0].value = 0;
  aNStack_1[0].has_value = 0;
  if (contract != (JsonArrayContract *)0x0) {
    aNStack_1[0] = (contract->fields)._._IsReference_k__BackingField;
    cVar2 = func_?(aNStack_1,MethodInfo__System__Nullable<bool>__get_HasValue__);
    if (cVar2 == '\0') {
      pJVar3 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
      uVar4 = (*(code *)(pJVar3->klass->vtable).get_PreserveReferencesHandling.method)
                        (pJVar3,(pJVar3->klass->vtable).set_PreserveReferencesHandling.methodPtr);
      bVar5 = (byte)(uVar4 >> 1) & 1;
    }
    else {
      bVar5 = func_?(aNStack_1,MethodInfo__System__Nullable<bool>__get_Value__);
    }
    bStack_6 = JsonSerializerInternalWriter_ShouldWriteType
                         (this,TypeNameHandling__Enum_Arrays,(JsonContract *)contract,member,
                          containerContract,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      contract._3_1_ = bStack_6;
      if (bStack_6 == 0) {
        return 0;
      }
    }
    else {
      contract._3_1_ = 1;
    }
    if (writer != (JsonWriter *)0x0) {
      (*(code *)(writer->klass->vtable).WriteStartObject.method)
                (writer,(writer->klass->vtable).WriteEndObject.methodPtr);
      if (bVar5 != 0) {
        (*(code *)(writer->klass->vtable).WritePropertyName.method)
                  (writer,StringLiteral__id,(writer->klass->vtable).WriteEnd.methodPtr);
        pSVar7 = JsonSerializerInternalWriter_GetReference(this,writer,values,(MethodInfo *)0x0);
        (*(code *)(writer->klass->vtable).WriteValue.method)
                  (writer,pSVar7,(writer->klass->vtable).WriteValue_1.methodPtr);
      }
      if (bStack_6 != 0) {
        if (values == (Object *)0x0) goto code_?;
        type = mscorlib.dll::System::Object::Object_GetType(values,(MethodInfo *)0x0);
        JsonSerializerInternalWriter_WriteTypeProperty(this,writer,type,(MethodInfo *)0x0);
      }
      (*(code *)(writer->klass->vtable).WritePropertyName.method)
                (writer,StringLiteral__values,(writer->klass->vtable).WriteEnd.methodPtr);
      return contract._3_1_;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void WriteTypeProperty(JsonWriter, Type) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
     JsonSerializerInternalWriter_WriteTypeProperty
               (JsonSerializerInternalWriter *this,JsonWriter *writer,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (writer != (JsonWriter *)0x0) {
    (*(code *)(writer->klass->vtable).WritePropertyName.method)
              (writer,StringLiteral__type,(writer->klass->vtable).WriteEnd.methodPtr);
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      assemblyFormat =
           (*(code *)(pJVar1->klass->vtable).get_TypeNameAssemblyFormat.method)
                     (pJVar1,(pJVar1->klass->vtable).set_TypeNameAssemblyFormat.methodPtr);
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 != (JsonSerializer *)0x0) {
        binder = (SerializationBinder *)
                 (*(code *)(pJVar1->klass->vtable).get_Binder.method)
                           (pJVar1,(pJVar1->klass->vtable).set_Binder.methodPtr);
        pSVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetTypeName_1
                           (type,assemblyFormat,binder,(MethodInfo *)0x0);
        (*(code *)(writer->klass->vtable).WriteValue.method)
                  (writer,pSVar2,(writer->klass->vtable).WriteValue_1.methodPtr);
        return;
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializer,StringLiteral_serializer,(MethodInfo *)0x0);
  (this->fields)._._Serializer_k__BackingField = serializer;
  return;
}


/* List`1[System.Object] get_SerializeStack() */

List_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::
JsonSerializerInternalWriter_get_SerializeStack
          (JsonSerializerInternalWriter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)(this->fields)._serializeStack;
  if (this_00 == (List_1_UnityEngine_Vector4_ *)0x0) {
    this_00 = (List_1_UnityEngine_Vector4_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_00,MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    (this->fields)._serializeStack = (List_1_System_Object_ *)this_00;
  }
  return (List_1_System_Object_ *)this_00;
}

