
/* Object DeserializeInternal(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
         JsonSerializerProxy_DeserializeInternal
                   (JsonSerializerProxy *this,JsonReader *reader,Type *objectType,MethodInfo *method
                   )

{
  this_00 = (this->fields)._serializerReader;
  if (this_00 == (JsonSerializerInternalReader *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      pOVar2 = (Object *)
               (*(code *)(pJVar1->klass->vtable).DeserializeInternal.method)
                         (pJVar1,reader,objectType,
                          (pJVar1->klass->vtable).SerializeInternal.methodPtr);
      return pOVar2;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar3)();
    return pOVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar4 == 0) {
      bVar5 = JsonSerializerInternalReader::JsonSerializerInternalReader_ReadForType
                        (this_00,reader,objectType,(JsonConverter *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return (Object *)0x0;
      }
    }
    contract = JsonSerializerInternalReader::JsonSerializerInternalReader_GetContractSafe
                         (this_00,objectType,(MethodInfo *)0x0);
    pOVar2 = JsonSerializerInternalReader::JsonSerializerInternalReader_CreateValueNonProperty
                       (this_00,reader,objectType,contract,(MethodInfo *)0x0);
    return pOVar2;
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_reader,(MethodInfo *)0x0);
  func_?(this_01,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Deserialize_Newtonsoft__Json__JsonReader__System__Type_
                 );
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* JsonSerializerInternalBase GetInternalSerializer() */

JsonSerializerInternalBase *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_GetInternalSerializer(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializerReader;
  if (pJVar1 == (JsonSerializerInternalReader *)0x0) {
    return (JsonSerializerInternalBase *)(this->fields)._serializerWriter;
  }
  return (JsonSerializerInternalBase *)pJVar1;
}


/* Void PopulateInternal(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_PopulateInternal
               (JsonSerializerProxy *this,JsonReader *reader,Object *target,MethodInfo *method)

{
  this_00 = (MethodInfo *)(this->fields)._serializerReader;
  if (this_00 == (MethodInfo *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      method = this_00;
      (*(code *)(pJVar1->klass->vtable).PopulateInternal.method)
                (pJVar1,reader,target,(pJVar1->klass->vtable).DeserializeInternal.methodPtr);
      return;
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = target;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  if (this_01 == (Object *)0x0) {
code_?:
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(reader,0);
    target = (Object *)func_?(7,reader);
    uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&target);
    func_?(pOVar4,0);
    func_?(pOVar4,uVar5);
    func_?(0,uVar5);
    pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_initial_token___0___w,(IFormatProvider *)pCVar3,
                         pOVar4,(MethodInfo *)0x0);
    pJVar7 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar7,pSVar6,(MethodInfo *)0x0);
    func_?();
  }
  else {
    pTVar8 = mscorlib.dll::System::Object::Object_GetType(this_01,(MethodInfo *)0x0);
    pIVar9 = this_00->klass;
    if (pIVar9 == (Il2CppClass *)0x0) goto code_?;
    pJVar10 = (JsonSerializationException__Class *)
              (((JsonSerializer__Class *)pIVar9->image)->vtable).set_ContractResolver.methodPtr;
    iVar11 = (*(code *)(((JsonSerializer__Class *)pIVar9->image)->vtable).get_ContractResolver.method
            )(pIVar9,pJVar10);
    if (iVar11 == 0) goto code_?;
    piVar12 = (int *)func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                    iVar11,pTVar8);
    if (reader == (JsonReader *)0x0) goto code_?;
    iVar11 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar11 == 0) {
      (*(code *)(reader->klass->vtable).__unknown.method)
                (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    }
    iVar11 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar11 == 2) {
      if (piVar12 != (int *)0x0) {
        bVar13 = (TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).naturalAligment;
        if ((*(byte *)(*piVar12 + 0xb8) < bVar13) ||
           (*(JsonArrayContract__Class **)(*(int *)(*piVar12 + 100) + -4 + (uint)bVar13 * 4) !=
            TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        piVar15 = (int *)0x0;
        if (bVar14) {
          piVar15 = piVar12;
        }
        if (piVar15 != (int *)0x0) {
          wrappedList = Json::Utilities::CollectionUtils::CollectionUtils_CreateCollectionWrapper
                                  (this_01,(MethodInfo *)0x0);
          pMVar16 = (MethodInfo *)0x0;
          contract_01 = (JsonArrayContract *)
                        func_?(piVar12,
                                        TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract
                                       );
          JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateList
                    ((JsonSerializerInternalReader *)this_00,wrappedList,reader,(String *)0x0,
                     contract_01,pMVar16);
          return;
        }
      }
      goto code_?;
    }
    iVar11 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar11 != 1) goto code_?;
    JsonSerializerInternalReader::JsonSerializerInternalReader_CheckedRead
              ((JsonSerializerInternalReader *)this_00,reader,(MethodInfo *)0x0);
    target = (Object *)0x0;
    iVar11 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar11 == 4) {
      piVar15 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)
                                 (reader,(reader->klass->vtable).get_ValueType.methodPtr);
      if (piVar15 == (int *)0x0) goto code_?;
      pSVar6 = (String *)(**(code **)(*piVar15 + 0xd8))(piVar15,*(undefined4 *)(*piVar15 + 0xdc));
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar17 = mscorlib.dll::System::String::String_Equals_3
                        (pSVar6,StringLiteral__id,StringComparison__Enum_Ordinal,(MethodInfo *)0x0)
      ;
      if (bVar17 != 0) {
        JsonSerializerInternalReader::JsonSerializerInternalReader_CheckedRead
                  ((JsonSerializerInternalReader *)this_00,reader,(MethodInfo *)0x0);
        iVar11 = (*(code *)(reader->klass->vtable).get_Value.method)
                          (reader,(reader->klass->vtable).get_ValueType.methodPtr);
        if (iVar11 == 0) {
          target = (Object *)0x0;
        }
        else {
          iVar11 = func_?(8,reader);
          if (iVar11 == 0) goto code_?;
          target = (Object *)func_?(3,iVar11);
        }
        JsonSerializerInternalReader::JsonSerializerInternalReader_CheckedRead
                  ((JsonSerializerInternalReader *)this_00,reader,(MethodInfo *)0x0);
      }
    }
    iVar11 = func_?(piVar12,TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract
                           );
    if (iVar11 != 0) {
      dictionary = Json::Utilities::CollectionUtils::CollectionUtils_CreateDictionaryWrapper
                             (this_01,(MethodInfo *)0x0);
      pSVar6 = (String *)target;
      contract_00 = (JsonDictionaryContract *)
                    func_?(piVar12,
                                    TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract
                                   );
      JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateDictionary
                ((JsonSerializerInternalReader *)0x0,dictionary,reader,contract_00,pSVar6,
                 (MethodInfo *)0x0);
      return;
    }
    iVar11 = func_?(piVar12,TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    if (iVar11 != 0) {
      pMVar16 = (MethodInfo *)0x0;
      pSVar6 = (String *)target;
      contract = (JsonObjectContract *)
                 func_?(piVar12,
                                 TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
      JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateObject
                ((JsonSerializerInternalReader *)this_00,this_01,reader,contract,pSVar6,pMVar16);
      return;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar18 = TypeInfo__System__Object;
  pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar4,0);
  func_?(pOVar4,pOVar18);
  func_?(0);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_populate_JSON_object_onto,(IFormatProvider *)pCVar3,
                       pOVar4,(MethodInfo *)0x0);
  pJVar10 = TypeInfo__Newtonsoft__Json__JsonSerializationException;
  pJVar7 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar7,pSVar6,(MethodInfo *)0x0);
  in_stack_19 =
       MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Populate_Newtonsoft__Json__JsonReader__System__Object_
  ;
  method = (MethodInfo *)0x0;
  target = (Object *)pJVar7;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar4,0);
  func_?(pOVar4,pJVar10);
  func_?(0,pJVar10);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_populate_JSON_array_onto_,(IFormatProvider *)pCVar3,
                       pOVar4,(MethodInfo *)0x0);
  pJVar7 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar7,pSVar6,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SerializeInternal(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_SerializeInternal
               (JsonSerializerProxy *this,JsonWriter *jsonWriter,Object *value,MethodInfo *method)

{
  this_00 = (this->fields)._serializerWriter;
  if (this_00 == (JsonSerializerInternalWriter *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      (*(code *)(pJVar1->klass->vtable).SerializeInternal.method)
                (pJVar1,jsonWriter,value,pJVar1->klass[1]._0.image);
      return;
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (jsonWriter != (JsonWriter *)0x0) {
    valueContract =
         JsonSerializerInternalWriter::JsonSerializerInternalWriter_GetContractSafe
                   (this_00,value,(MethodInfo *)0x0);
    JsonSerializerInternalWriter::JsonSerializerInternalWriter_SerializeValue
              (this_00,jsonWriter,value,valueContract,(JsonProperty *)0x0,(JsonContract *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_jsonWriter,(MethodInfo *)0x0);
  func_?(this_01,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JsonSerializerProxy(JsonSerializerInternalReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy__ctor
               (JsonSerializerProxy *this,JsonSerializerInternalReader *serializerReader,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonSerializer::JsonSerializer__ctor((JsonSerializer *)this,(MethodInfo *)0x0);
  paramName = StringLiteral_serializerReader;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (serializerReader != (JsonSerializerInternalReader *)0x0) {
    (this->fields)._serializerReader = serializerReader;
    pJVar1 = (JsonSerializer *)
             System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)serializerReader,(MethodInfo *)0x0);
    (this->fields)._serializer = pJVar1;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* JsonSerializerProxy(JsonSerializerInternalWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy__ctor_1
               (JsonSerializerProxy *this,JsonSerializerInternalWriter *serializerWriter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonSerializer::JsonSerializer__ctor((JsonSerializer *)this,(MethodInfo *)0x0);
  paramName = StringLiteral_serializerWriter;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (serializerWriter != (JsonSerializerInternalWriter *)0x0) {
    (this->fields)._serializerWriter = serializerWriter;
    pJVar1 = (JsonSerializer *)
             System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)serializerWriter,(MethodInfo *)0x0);
    (this->fields)._serializer = pJVar1;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void add_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_add_Error
               (JsonSerializerProxy *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).add_Error.method)
              (pJVar1,value,(pJVar1->klass->vtable).remove_Error.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SerializationBinder get_Binder() */

SerializationBinder *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Binder(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    pSVar2 = (SerializationBinder *)
             (*(code *)(pJVar1->klass->vtable).get_Binder.method)
                       (pJVar1,(pJVar1->klass->vtable).set_Binder.methodPtr);
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (SerializationBinder *)(*pcVar3)();
  return pSVar2;
}


/* ConstructorHandling get_ConstructorHandling() */

ConstructorHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ConstructorHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    CVar2 = (*(code *)(pJVar1->klass->vtable).get_ConstructorHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_ConstructorHandling.methodPtr);
    return CVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  CVar2 = (*pcVar3)();
  return CVar2;
}


/* StreamingContext get_Context() */

StreamingContext
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Context(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    SVar2 = (StreamingContext)
            (*(code *)(pJVar1->klass->vtable).get_Context.method)
                      (pJVar1,(pJVar1->klass->vtable).set_Context.methodPtr);
    return SVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  SVar2 = (StreamingContext)(*pcVar3)();
  return SVar2;
}


/* IContractResolver get_ContractResolver() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ContractResolver(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    pIVar2 = (IContractResolver *)
             (*(code *)(pJVar1->klass->vtable).get_ContractResolver.method)
                       (pJVar1,(pJVar1->klass->vtable).set_ContractResolver.methodPtr);
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IContractResolver *)(*pcVar3)();
  return pIVar2;
}


/* JsonConverterCollection get_Converters() */

JsonConverterCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Converters(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    pJVar2 = (JsonConverterCollection *)
             (*(code *)(pJVar1->klass->vtable).get_Converters.method)
                       (pJVar1,(pJVar1->klass->vtable).get_ContractResolver.methodPtr);
    return pJVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pJVar2 = (JsonConverterCollection *)(*pcVar3)();
  return pJVar2;
}


/* DefaultValueHandling get_DefaultValueHandling() */

DefaultValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_DefaultValueHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    DVar2 = (*(code *)(pJVar1->klass->vtable).get_DefaultValueHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_DefaultValueHandling.methodPtr);
    return DVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  DVar2 = (*pcVar3)();
  return DVar2;
}


/* MissingMemberHandling get_MissingMemberHandling() */

MissingMemberHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_MissingMemberHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    MVar2 = (*(code *)(pJVar1->klass->vtable).get_MissingMemberHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_MissingMemberHandling.methodPtr);
    return MVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  MVar2 = (*pcVar3)();
  return MVar2;
}


/* NullValueHandling get_NullValueHandling() */

NullValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_NullValueHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    NVar2 = (*(code *)(pJVar1->klass->vtable).get_NullValueHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_NullValueHandling.methodPtr);
    return NVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  NVar2 = (*pcVar3)();
  return NVar2;
}


/* ObjectCreationHandling get_ObjectCreationHandling() */

ObjectCreationHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ObjectCreationHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    OVar2 = (*(code *)(pJVar1->klass->vtable).get_ObjectCreationHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_ObjectCreationHandling.methodPtr);
    return OVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  OVar2 = (*pcVar3)();
  return OVar2;
}


/* PreserveReferencesHandling get_PreserveReferencesHandling() */

PreserveReferencesHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_PreserveReferencesHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    PVar2 = (*(code *)(pJVar1->klass->vtable).get_PreserveReferencesHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_PreserveReferencesHandling.methodPtr);
    return PVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  PVar2 = (*pcVar3)();
  return PVar2;
}


/* ReferenceLoopHandling get_ReferenceLoopHandling() */

ReferenceLoopHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ReferenceLoopHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    RVar2 = (*(code *)(pJVar1->klass->vtable).get_ReferenceLoopHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_ReferenceLoopHandling.methodPtr);
    return RVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  RVar2 = (*pcVar3)();
  return RVar2;
}


/* IReferenceResolver get_ReferenceResolver() */

IReferenceResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ReferenceResolver(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    pIVar2 = (IReferenceResolver *)
             (*(code *)(pJVar1->klass->vtable).get_ReferenceResolver.method)
                       (pJVar1,(pJVar1->klass->vtable).set_ReferenceResolver.methodPtr);
    return pIVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pIVar2 = (IReferenceResolver *)(*pcVar3)();
  return pIVar2;
}


/* FormatterAssemblyStyle get_TypeNameAssemblyFormat() */

FormatterAssemblyStyle__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_TypeNameAssemblyFormat(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    FVar2 = (*(code *)(pJVar1->klass->vtable).get_TypeNameAssemblyFormat.method)
                      (pJVar1,(pJVar1->klass->vtable).set_TypeNameAssemblyFormat.methodPtr);
    return FVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  FVar2 = (*pcVar3)();
  return FVar2;
}


/* TypeNameHandling get_TypeNameHandling() */

TypeNameHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_TypeNameHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    TVar2 = (*(code *)(pJVar1->klass->vtable).get_TypeNameHandling.method)
                      (pJVar1,(pJVar1->klass->vtable).set_TypeNameHandling.methodPtr);
    return TVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  TVar2 = (*pcVar3)();
  return TVar2;
}


/* Void remove_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_remove_Error
               (JsonSerializerProxy *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).remove_Error.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_ReferenceResolver.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Binder(SerializationBinder) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_Binder
               (JsonSerializerProxy *this,SerializationBinder *value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_Binder.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_TypeNameHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ConstructorHandling(ConstructorHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ConstructorHandling
               (JsonSerializerProxy *this,ConstructorHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_ConstructorHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_Converters.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Context(StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_Context
               (JsonSerializerProxy *this,StreamingContext value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_Context.method)
              (pJVar1,value.state,value.additional,
               (pJVar1->klass->vtable).PopulateInternal.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ContractResolver(IContractResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ContractResolver
               (JsonSerializerProxy *this,IContractResolver *value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_ContractResolver.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_Context.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_DefaultValueHandling
               (JsonSerializerProxy *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_DefaultValueHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_ObjectCreationHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MissingMemberHandling(MissingMemberHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_MissingMemberHandling
               (JsonSerializerProxy *this,MissingMemberHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_MissingMemberHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_NullValueHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_NullValueHandling
               (JsonSerializerProxy *this,NullValueHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_NullValueHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_DefaultValueHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ObjectCreationHandling
               (JsonSerializerProxy *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_ObjectCreationHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_ConstructorHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_PreserveReferencesHandling(PreserveReferencesHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_PreserveReferencesHandling
               (JsonSerializerProxy *this,PreserveReferencesHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_PreserveReferencesHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_ReferenceLoopHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ReferenceLoopHandling
               (JsonSerializerProxy *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_ReferenceLoopHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_MissingMemberHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ReferenceResolver(IReferenceResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ReferenceResolver
               (JsonSerializerProxy *this,IReferenceResolver *value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_ReferenceResolver.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_Binder.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TypeNameAssemblyFormat(FormatterAssemblyStyle) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_TypeNameAssemblyFormat
               (JsonSerializerProxy *this,FormatterAssemblyStyle__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_TypeNameAssemblyFormat.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_PreserveReferencesHandling.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_TypeNameHandling
               (JsonSerializerProxy *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  pJVar1 = (this->fields)._serializer;
  if (pJVar1 != (JsonSerializer *)0x0) {
    (*(code *)(pJVar1->klass->vtable).set_TypeNameHandling.method)
              (pJVar1,value,(pJVar1->klass->vtable).get_TypeNameAssemblyFormat.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

