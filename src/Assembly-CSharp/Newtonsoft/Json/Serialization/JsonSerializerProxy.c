
/* Object DeserializeInternal(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
         JsonSerializerProxy_DeserializeInternal
                   (JsonSerializerProxy *this,JsonReader *reader,Type *objectType,MethodInfo *method
                   )

{
  if ((this->fields)._serializerReader == (JsonSerializerInternalReader *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      pOVar2 = (Object *)
               (*(pJVar1->klass->vtable).DeserializeInternal.methodPtr)
                         (pJVar1,reader,objectType,
                          (pJVar1->klass->vtable).DeserializeInternal.method);
      return pOVar2;
    }
  }
  else {
    this_00 = (this->fields)._serializerReader;
    if (this_00 != (JsonSerializerInternalReader *)0x0) {
      if (reader != (JsonReader *)0x0) {
        iVar3 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                          (reader,(reader->klass->vtable).get_TokenType.method);
        if (iVar3 == 0) {
          bVar4 = JsonSerializerInternalReader::JsonSerializerInternalReader_ReadForType
                            (this_00,reader,objectType,(JsonConverter *)0x0,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return (Object *)0x0;
          }
        }
        contract = JsonSerializerInternalReader::JsonSerializerInternalReader_GetContractSafe
                             (this_00,objectType,(MethodInfo *)0x0);
        pOVar2 = JsonSerializerInternalReader::JsonSerializerInternalReader_CreateValueNonProperty
                           (this_00,reader,objectType,contract,(MethodInfo *)0x0);
        return pOVar2;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar5);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_reader);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,method_00);
  uVar5 = func_?(&
                          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Deserialize_Newtonsoft__Json__JsonReader__System__Type_
                         );
  func_?(this_01,uVar5);
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* JsonSerializerInternalBase GetInternalSerializer() */

JsonSerializerInternalBase *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_GetInternalSerializer(JsonSerializerProxy *this,MethodInfo *method)

{
  if ((this->fields)._serializerReader == (JsonSerializerInternalReader *)0x0) {
    return (JsonSerializerInternalBase *)(this->fields)._serializerWriter;
  }
  return (JsonSerializerInternalBase *)(this->fields)._serializerReader;
}


/* Void PopulateInternal(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_PopulateInternal
               (JsonSerializerProxy *this,JsonReader *reader,Object *target,MethodInfo *method)

{
  newObject = target;
  if ((this->fields)._serializerReader == (JsonSerializerInternalReader *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      (*(pJVar1->klass->vtable).PopulateInternal.methodPtr)(pJVar1);
      return;
    }
code_?:
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pJVar4 = (this->fields)._serializerReader;
  if (pJVar4 == (JsonSerializerInternalReader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&StringLiteral_target);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  if (target == (Object *)0x0) goto code_?;
  mscorlib.dll::System::Object::Object_GetType(target,(MethodInfo *)0x0);
  pJVar1 = (pJVar4->fields)._._Serializer_k__BackingField;
  if (((pJVar1 == (JsonSerializer *)0x0) ||
      (iVar5 = (*(pJVar1->klass->vtable).get_ContractResolver.methodPtr)(), iVar5 == 0)) ||
     (contract = (JsonArrayContract *)func_?(), reader == (JsonReader *)0x0))
  goto code_?;
  iVar5 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
  if (iVar5 == 0) {
    (*(reader->klass->vtable).__unknown.methodPtr)();
  }
  iVar5 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
  if (iVar5 == 2) {
    if (((contract != (JsonArrayContract *)0x0) &&
        ((TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth <=
         (contract->klass->_1).typeHierarchyDepth)) &&
       ((contract->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth - 1]
        == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
      wrappedList = Json::Utilities::CollectionUtils::CollectionUtils_CreateCollectionWrapper
                              (target,(MethodInfo *)0x0);
      if (((TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth <=
           (contract->klass->_1).typeHierarchyDepth) &&
         ((contract->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth - 1
          ] == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
        JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateList
                  ((JsonSerializerInternalReader *)0x0,wrappedList,reader,(String *)0x0,contract,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    func_?();
    func_?();
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
code_?:
    pMVar6 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?();
    pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar7,(IFormatProvider *)provider,args,pMVar6);
    func_?();
    pJVar8 = (JsonSerializationException *)func_?();
    func_?();
    JsonSerializationException::JsonSerializationException__ctor_1(pJVar8,pSVar7,(MethodInfo *)0x0)
    ;
    func_?();
  }
  else {
    iVar5 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
    if (iVar5 != 1) {
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      goto code_?;
    }
    cVar9 = (*(reader->klass->vtable).__unknown.methodPtr)();
    if (cVar9 != '\0') {
      target = (Object *)0x0;
      iVar5 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
      if (iVar5 == 4) {
        piVar10 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
        if (piVar10 == (int *)0x0) goto code_?;
        pSVar7 = (String *)(**(code **)(*piVar10 + 0xd4))();
        bVar11 = mscorlib.dll::System::String::String_Equals_4
                          (pSVar7,StringLiteral__id,StringComparison__Enum_Ordinal,(MethodInfo *)0x0
                          );
        if (bVar11 != 0) {
          JsonSerializerInternalReader::JsonSerializerInternalReader_CheckedRead
                    ((JsonSerializerInternalReader *)0x0,reader,(MethodInfo *)0x0);
          pMVar6 = (reader->klass->vtable).get_Value.method;
          iVar5 = (*(reader->klass->vtable).get_Value.methodPtr)();
          if (iVar5 == 0) {
            target = (Object *)0x0;
          }
          else {
            iVar5 = func_?();
            if (iVar5 == 0) goto code_?;
            target = (Object *)func_?();
          }
          JsonSerializerInternalReader::JsonSerializerInternalReader_CheckedRead
                    ((JsonSerializerInternalReader *)pMVar6,reader,(MethodInfo *)0x0);
        }
      }
      if (contract != (JsonArrayContract *)0x0) {
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
           ((contract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
          dictionary = Json::Utilities::CollectionUtils::CollectionUtils_CreateDictionaryWrapper
                                 (newObject,(MethodInfo *)0x0);
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
               typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
             ((contract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
            JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateDictionary
                      ((JsonSerializerInternalReader *)contract,dictionary,reader,
                       (JsonDictionaryContract *)contract,(String *)0x0,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).typeHierarchyDepth
             <= (contract->klass->_1).typeHierarchyDepth) &&
           ((contract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).typeHierarchyDepth
             - 1] == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract))
        {
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
             ((contract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract)) {
            JsonSerializerInternalReader::JsonSerializerInternalReader_PopulateObject
                      ((JsonSerializerInternalReader *)0x0,newObject,reader,
                       (JsonObjectContract *)contract,(String *)target,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      func_?();
      func_?();
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      func_?();
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      goto code_?;
    }
    func_?();
    pJVar8 = (JsonSerializationException *)func_?();
    func_?();
    pMVar6 = (MethodInfo *)0x0;
    pSVar7 = (String *)func_?();
    JsonSerializationException::JsonSerializationException__ctor_1(pJVar8,pSVar7,pMVar6);
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SerializeInternal(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_SerializeInternal
               (JsonSerializerProxy *this,JsonWriter *jsonWriter,Object *value,MethodInfo *method)

{
  if ((this->fields)._serializerWriter == (JsonSerializerInternalWriter *)0x0) {
    pJVar1 = (this->fields)._serializer;
    if (pJVar1 != (JsonSerializer *)0x0) {
      (*(pJVar1->klass->vtable).SerializeInternal.methodPtr)
                (pJVar1,jsonWriter,value,(pJVar1->klass->vtable).SerializeInternal.method);
      return;
    }
  }
  else {
    this_00 = (this->fields)._serializerWriter;
    if (this_00 != (JsonSerializerInternalWriter *)0x0) {
      if (jsonWriter == (JsonWriter *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
        cRam_? = '\x01';
      }
      if (value == (Object *)0x0) {
        valueContract = (JsonContract *)0x0;
code_?:
        JsonSerializerInternalWriter::JsonSerializerInternalWriter_SerializeValue
                  (this_00,jsonWriter,value,valueContract,(JsonProperty *)0x0,(JsonContract *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
      pJVar1 = (this_00->fields)._._Serializer_k__BackingField;
      if (pJVar1 != (JsonSerializer *)0x0) {
        iVar2 = (*(pJVar1->klass->vtable).get_ContractResolver.methodPtr)
                          (pJVar1,(pJVar1->klass->vtable).get_ContractResolver.method);
        pTVar3 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
        if (iVar2 != 0) {
          valueContract =
               (JsonContract *)
               func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar2,
                               pTVar3);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar4);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_jsonWriter);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,method_00);
  uVar4 = func_?(&
                          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter__Serialize_Newtonsoft__Json__JsonWriter__System__Object_
                         );
  func_?(this_01,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* JsonSerializerProxy(JsonSerializerInternalReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy__ctor
               (JsonSerializerProxy *this,JsonSerializerInternalReader *serializerReader,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_serializerReader);
    cRam_? = '\x01';
  }
  JsonSerializer::JsonSerializer__ctor((JsonSerializer *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializerReader,StringLiteral_serializerReader,(MethodInfo *)0x0);
  (this->fields)._serializerReader = serializerReader;
  func_?(&(this->fields)._serializerReader,serializerReader);
  if (serializerReader != (JsonSerializerInternalReader *)0x0) {
    (this->fields)._serializer = (serializerReader->fields)._._Serializer_k__BackingField;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JsonSerializerProxy(JsonSerializerInternalWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy__ctor_1
               (JsonSerializerProxy *this,JsonSerializerInternalWriter *serializerWriter,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_serializerWriter);
    cRam_? = '\x01';
  }
  JsonSerializer::JsonSerializer__ctor((JsonSerializer *)this,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)serializerWriter,StringLiteral_serializerWriter,(MethodInfo *)0x0);
  (this->fields)._serializerWriter = serializerWriter;
  func_?(&(this->fields)._serializerWriter,serializerWriter);
  if (serializerWriter != (JsonSerializerInternalWriter *)0x0) {
    (this->fields)._serializer = (serializerWriter->fields)._._Serializer_k__BackingField;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_add_Error
               (JsonSerializerProxy *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).add_Error.method;
    pEStack_3 = value;
    (*(pJStack_2->klass->vtable).add_Error.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* SerializationBinder get_Binder() */

SerializationBinder *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Binder(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_Binder.method;
    pSVar3 = (SerializationBinder *)(*(pJStack_2->klass->vtable).get_Binder.methodPtr)();
    return pSVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pSVar3 = (SerializationBinder *)(*pcVar6)();
  return pSVar3;
}


/* ConstructorHandling get_ConstructorHandling() */

ConstructorHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ConstructorHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ConstructorHandling.method;
    CVar3 = (*(pJStack_2->klass->vtable).get_ConstructorHandling.methodPtr)();
    return CVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  CVar3 = (*pcVar6)();
  return CVar3;
}


/* StreamingContext get_Context() */

StreamingContext
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Context(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_Context.method;
    SVar3 = (StreamingContext)(*(pJStack_2->klass->vtable).get_Context.methodPtr)();
    return SVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  SVar3 = (StreamingContext)(*pcVar6)();
  return SVar3;
}


/* IContractResolver get_ContractResolver() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ContractResolver(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ContractResolver.method;
    pIVar3 = (IContractResolver *)(*(pJStack_2->klass->vtable).get_ContractResolver.methodPtr)();
    return pIVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pIVar3 = (IContractResolver *)(*pcVar6)();
  return pIVar3;
}


/* JsonConverterCollection get_Converters() */

JsonConverterCollection *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_Converters(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_Converters.method;
    pJVar3 = (JsonConverterCollection *)(*(pJStack_2->klass->vtable).get_Converters.methodPtr)();
    return pJVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pJVar3 = (JsonConverterCollection *)(*pcVar6)();
  return pJVar3;
}


/* DefaultValueHandling get_DefaultValueHandling() */

DefaultValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_DefaultValueHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_DefaultValueHandling.method;
    DVar3 = (*(pJStack_2->klass->vtable).get_DefaultValueHandling.methodPtr)();
    return DVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  DVar3 = (*pcVar6)();
  return DVar3;
}


/* MissingMemberHandling get_MissingMemberHandling() */

MissingMemberHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_MissingMemberHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_MissingMemberHandling.method;
    MVar3 = (*(pJStack_2->klass->vtable).get_MissingMemberHandling.methodPtr)();
    return MVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  MVar3 = (*pcVar6)();
  return MVar3;
}


/* NullValueHandling get_NullValueHandling() */

NullValueHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_NullValueHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_NullValueHandling.method;
    NVar3 = (*(pJStack_2->klass->vtable).get_NullValueHandling.methodPtr)();
    return NVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  NVar3 = (*pcVar6)();
  return NVar3;
}


/* ObjectCreationHandling get_ObjectCreationHandling() */

ObjectCreationHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ObjectCreationHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ObjectCreationHandling.method;
    OVar3 = (*(pJStack_2->klass->vtable).get_ObjectCreationHandling.methodPtr)();
    return OVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  OVar3 = (*pcVar6)();
  return OVar3;
}


/* PreserveReferencesHandling get_PreserveReferencesHandling() */

PreserveReferencesHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_PreserveReferencesHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_PreserveReferencesHandling.method;
    PVar3 = (*(pJStack_2->klass->vtable).get_PreserveReferencesHandling.methodPtr)();
    return PVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  PVar3 = (*pcVar6)();
  return PVar3;
}


/* ReferenceLoopHandling get_ReferenceLoopHandling() */

ReferenceLoopHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ReferenceLoopHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ReferenceLoopHandling.method;
    RVar3 = (*(pJStack_2->klass->vtable).get_ReferenceLoopHandling.methodPtr)();
    return RVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  RVar3 = (*pcVar6)();
  return RVar3;
}


/* IReferenceResolver get_ReferenceResolver() */

IReferenceResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_ReferenceResolver(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_ReferenceResolver.method;
    pIVar3 = (IReferenceResolver *)(*(pJStack_2->klass->vtable).get_ReferenceResolver.methodPtr)();
    return pIVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pIVar3 = (IReferenceResolver *)(*pcVar6)();
  return pIVar3;
}


/* FormatterAssemblyStyle get_TypeNameAssemblyFormat() */

FormatterAssemblyStyle__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_TypeNameAssemblyFormat(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_TypeNameAssemblyFormat.method;
    FVar3 = (*(pJStack_2->klass->vtable).get_TypeNameAssemblyFormat.methodPtr)();
    return FVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  FVar3 = (*pcVar6)();
  return FVar3;
}


/* TypeNameHandling get_TypeNameHandling() */

TypeNameHandling__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
JsonSerializerProxy_get_TypeNameHandling(JsonSerializerProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).get_TypeNameHandling.method;
    TVar3 = (*(pJStack_2->klass->vtable).get_TypeNameHandling.methodPtr)();
    return TVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  TVar3 = (*pcVar6)();
  return TVar3;
}


/* Void remove_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_remove_Error
               (JsonSerializerProxy *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).remove_Error.method;
    pEStack_3 = value;
    (*(pJStack_2->klass->vtable).remove_Error.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Binder(SerializationBinder) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_Binder
               (JsonSerializerProxy *this,SerializationBinder *value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_Binder.method;
    pSStack_3 = value;
    (*(pJStack_2->klass->vtable).set_Binder.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_ConstructorHandling(ConstructorHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ConstructorHandling
               (JsonSerializerProxy *this,ConstructorHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_ConstructorHandling.method;
    CStack_3 = value;
    (*(pJStack_2->klass->vtable).set_ConstructorHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Context(StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_Context
               (JsonSerializerProxy *this,StreamingContext value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJVar2 = (this->fields)._serializer;
  if (pJVar2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJVar2->klass->vtable).set_Context.method;
    iStack_3 = value.m_state;
    pOStack_4 = value.m_additionalContext;
    (*(pJVar2->klass->vtable).set_Context.methodPtr)(pJVar2);
    return;
  }
  uVar5 = func_?(&pOStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_ContractResolver(IContractResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ContractResolver
               (JsonSerializerProxy *this,IContractResolver *value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_ContractResolver.method;
    pIStack_3 = value;
    (*(pJStack_2->klass->vtable).set_ContractResolver.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_DefaultValueHandling
               (JsonSerializerProxy *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_DefaultValueHandling.method;
    DStack_3 = value;
    (*(pJStack_2->klass->vtable).set_DefaultValueHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_MissingMemberHandling(MissingMemberHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_MissingMemberHandling
               (JsonSerializerProxy *this,MissingMemberHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_MissingMemberHandling.method;
    MStack_3 = value;
    (*(pJStack_2->klass->vtable).set_MissingMemberHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_NullValueHandling
               (JsonSerializerProxy *this,NullValueHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_NullValueHandling.method;
    NStack_3 = value;
    (*(pJStack_2->klass->vtable).set_NullValueHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ObjectCreationHandling
               (JsonSerializerProxy *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_ObjectCreationHandling.method;
    OStack_3 = value;
    (*(pJStack_2->klass->vtable).set_ObjectCreationHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_PreserveReferencesHandling(PreserveReferencesHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_PreserveReferencesHandling
               (JsonSerializerProxy *this,PreserveReferencesHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_PreserveReferencesHandling.method;
    PStack_3 = value;
    (*(pJStack_2->klass->vtable).set_PreserveReferencesHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ReferenceLoopHandling
               (JsonSerializerProxy *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_ReferenceLoopHandling.method;
    RStack_3 = value;
    (*(pJStack_2->klass->vtable).set_ReferenceLoopHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_ReferenceResolver(IReferenceResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_ReferenceResolver
               (JsonSerializerProxy *this,IReferenceResolver *value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_ReferenceResolver.method;
    pIStack_3 = value;
    (*(pJStack_2->klass->vtable).set_ReferenceResolver.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_TypeNameAssemblyFormat(FormatterAssemblyStyle) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_TypeNameAssemblyFormat
               (JsonSerializerProxy *this,FormatterAssemblyStyle__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_TypeNameAssemblyFormat.method;
    FStack_3 = value;
    (*(pJStack_2->klass->vtable).set_TypeNameAssemblyFormat.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerProxy::
     JsonSerializerProxy_set_TypeNameHandling
               (JsonSerializerProxy *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pJStack_2 = (this->fields)._serializer;
  if (pJStack_2 != (JsonSerializer *)0x0) {
    pMStack_1 = (pJStack_2->klass->vtable).set_TypeNameHandling.method;
    TStack_3 = value;
    (*(pJStack_2->klass->vtable).set_TypeNameHandling.methodPtr)();
    return;
  }
  uVar4 = func_?(&pJStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

