
/* JsonSerializer Create(JsonSerializerSettings) */

JsonSerializer *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Create
          (JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_
                   );
    func_?(&
                    bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializer);
    cRam_? = '\x01';
  }
  pJVar1 = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (pJVar1 != (JsonSerializer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
      func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    (pJVar1->fields)._referenceLoopHandling = 0;
    (pJVar1->fields)._missingMemberHandling = 0;
    (pJVar1->fields)._nullValueHandling = 0;
    (pJVar1->fields)._defaultValueHandling = 0;
    (pJVar1->fields)._objectCreationHandling = 0;
    (pJVar1->fields)._preserveReferencesHandling = 0;
    (pJVar1->fields)._constructorHandling = 0;
    (pJVar1->fields)._typeNameHandling = 0;
    if ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    }
    pOVar2 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
             m_additionalContext;
    (pJVar1->fields)._context.m_state =
         (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).m_state
    ;
    (pJVar1->fields)._context.m_additionalContext = pOVar2;
    func_?(&(pJVar1->fields)._context,0);
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
    }
    pDVar3 = TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
             Instance;
    (pJVar1->fields)._binder = (SerializationBinder *)pDVar3;
    func_?(&(pJVar1->fields)._binder,pDVar3);
    if (settings != (JsonSerializerSettings *)0x0) {
      bVar4 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_1
                        ((ICollection_1_System_Object_ *)
                         (settings->fields)._Converters_k__BackingField,
                         bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>_
                        );
      if (bVar4 == 0) {
        initial = (IList_1_System_Object_ *)
                  (*(pJVar1->klass->vtable).get_Converters.methodPtr)(pJVar1);
        Json::Utilities::CollectionUtils::CollectionUtils_AddRange_1
                  (initial,(IEnumerable_1_System_Object_ *)
                           (settings->fields)._Converters_k__BackingField,
                   void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_
                  );
      }
      (*(pJVar1->klass->vtable).set_TypeNameHandling.methodPtr)
                (pJVar1,(settings->fields)._TypeNameHandling_k__BackingField);
      (*(pJVar1->klass->vtable).set_TypeNameAssemblyFormat.methodPtr)
                (pJVar1,(settings->fields)._TypeNameAssemblyFormat_k__BackingField,
                 (pJVar1->klass->vtable).set_TypeNameAssemblyFormat.method);
      (*(pJVar1->klass->vtable).set_PreserveReferencesHandling.methodPtr)
                (pJVar1,(settings->fields)._PreserveReferencesHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_PreserveReferencesHandling.method);
      (*(pJVar1->klass->vtable).set_ReferenceLoopHandling.methodPtr)
                (pJVar1,(settings->fields)._ReferenceLoopHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_ReferenceLoopHandling.method);
      (*(pJVar1->klass->vtable).set_MissingMemberHandling.methodPtr)
                (pJVar1,(settings->fields)._MissingMemberHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_MissingMemberHandling.method);
      (*(pJVar1->klass->vtable).set_ObjectCreationHandling.methodPtr)
                (pJVar1,(settings->fields)._ObjectCreationHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_ObjectCreationHandling.method);
      (*(pJVar1->klass->vtable).set_NullValueHandling.methodPtr)
                (pJVar1,(settings->fields)._NullValueHandling_k__BackingField);
      (*(pJVar1->klass->vtable).set_DefaultValueHandling.methodPtr)
                (pJVar1,(settings->fields)._DefaultValueHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_DefaultValueHandling.method);
      (*(pJVar1->klass->vtable).set_ConstructorHandling.methodPtr)
                (pJVar1,(settings->fields)._ConstructorHandling_k__BackingField,
                 (pJVar1->klass->vtable).set_ConstructorHandling.method);
      (*(pJVar1->klass->vtable).set_Context.methodPtr)
                (pJVar1,(settings->fields)._Context_k__BackingField.m_additionalContext,
                 (settings->fields)._Context_k__BackingField.m_state,
                 (pJVar1->klass->vtable).set_Context.method);
      if ((settings->fields)._Error_k__BackingField !=
          (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)0x0) {
        (*(pJVar1->klass->vtable).add_Error.methodPtr)
                  (pJVar1,(settings->fields)._Error_k__BackingField);
      }
      if ((settings->fields)._ContractResolver_k__BackingField != (IContractResolver *)0x0) {
        (*(pJVar1->klass->vtable).set_ContractResolver.methodPtr)
                  (pJVar1,(settings->fields)._ContractResolver_k__BackingField);
      }
      if ((settings->fields)._ReferenceResolver_k__BackingField != (IReferenceResolver *)0x0) {
        (*(pJVar1->klass->vtable).set_ReferenceResolver.methodPtr)
                  (pJVar1,(settings->fields)._ReferenceResolver_k__BackingField);
      }
      if ((settings->fields)._Binder_k__BackingField != (SerializationBinder *)0x0) {
        (*(pJVar1->klass->vtable).set_Binder.methodPtr)
                  (pJVar1,(settings->fields)._Binder_k__BackingField);
      }
    }
    return pJVar1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pJVar1 = (JsonSerializer *)(*pcVar5)();
  return pJVar1;
}


/* Object Deserialize(JsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize
                   (JsonSerializer *this,JsonReader *reader,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(this->klass->vtable).DeserializeInternal.methodPtr)
                     (this,reader,0,(this->klass->vtable).DeserializeInternal.method);
  return pOVar1;
}


/* Object DeserializeInternal(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_DeserializeInternal
                   (JsonSerializer *this,JsonReader *reader,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalReader *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader)
  ;
  if (this_00 != (JsonSerializerInternalReader *)0x0) {
    Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
              ((JsonSerializerInternalWriter *)this_00,this,(MethodInfo *)0x0);
    pOVar1 = Json::Serialization::JsonSerializerInternalReader::
             JsonSerializerInternalReader_Deserialize(this_00,reader,objectType,(MethodInfo *)0x0);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object Deserialize(TextReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize_1
                   (JsonSerializer *this,TextReader *reader,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    cRam_? = '\x01';
  }
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  if (this_00 != (JsonTextReader *)0x0) {
    JsonTextReader::JsonTextReader__ctor(this_00,reader,(MethodInfo *)0x0);
    pOVar1 = (Object *)
             (*(this->klass->vtable).DeserializeInternal.methodPtr)
                       (this,this_00,objectType,(this->klass->vtable).DeserializeInternal.method);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object Deserialize(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize_2
                   (JsonSerializer *this,JsonReader *reader,Type *objectType,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(this->klass->vtable).DeserializeInternal.methodPtr)
                     (this,reader,objectType,(this->klass->vtable).DeserializeInternal.method);
  return pOVar1;
}


/* Object Deserialize[Object](JsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize_3
                   (JsonSerializer *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = *(method->field7_0x1c).rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  objectType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  pOVar1 = JsonSerializer_Deserialize_2(this,reader,objectType,(MethodInfo *)0x0);
  if ((*(byte *)((int)(method->field7_0x1c).rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar1 = (Object *)func_?();
  if (pOVar1 != (Object *)0x0) {
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* JsonConverter GetMatchingConverter(Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_GetMatchingConverter
          (JsonSerializer *this,Type *type,MethodInfo *method)

{
  pJVar1 = (this->fields)._converters;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>)
    ;
    func_?(&StringLiteral_objectType);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_objectType,(MethodInfo *)0x0);
  if (pJVar1 != (JsonConverterCollection *)0x0) {
    for (iVar2 = 0;
        iVar3 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>
                                ,pJVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      pJVar4 = pJVar1->klass;
      uVar5 = 0;
      uVar6 = (pJVar4->_1).interface_offsets_count;
      if (uVar6 != 0) {
        do {
          if (pJVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>) {
            pVVar7 = &(pJVar4->vtable).Equals + pJVar4->interfaceOffsets[uVar5].offset;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      pVVar7 = (VirtualInvokeData *)
               func_?(pJVar1,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>
                               ,0,pJVar4,0);
code_?:
      pJVar8 = (JsonConverter *)(*pVVar7->methodPtr)(pJVar1,iVar2,pVVar7->method);
      if (pJVar8 == (JsonConverter *)0x0) {
        func_?();
        pcVar9 = (code *)swi(3);
        pJVar8 = (JsonConverter *)(*pcVar9)();
        return pJVar8;
      }
      cVar10 = (*(pJVar8->klass->vtable).__unknown_2.methodPtr)
                        (pJVar8,type,(pJVar8->klass->vtable).__unknown_2.method);
      if (cVar10 != '\0') {
        return pJVar8;
      }
    }
  }
  return (JsonConverter *)0x0;
}


/* JsonConverter GetMatchingConverter(IList`1[Newtonsoft.Json.JsonConverter], Type) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_GetMatchingConverter_1
          (IList_1_Newtonsoft_Json_JsonConverter_ *converters,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>)
    ;
    func_?(&StringLiteral_objectType);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)objectType,StringLiteral_objectType,(MethodInfo *)0x0);
  if (converters != (IList_1_Newtonsoft_Json_JsonConverter_ *)0x0) {
    for (iVar1 = 0;
        iVar2 = func_?(0,
                                TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>
                                ,converters), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      pIVar3 = converters->klass;
      uVar4 = 0;
      uVar5 = (pIVar3->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>) {
            pVVar6 = &(pIVar3->vtable).get_Item + pIVar3->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pVVar6 = (VirtualInvokeData *)
               func_?(converters,
                               TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>
                               ,0,pIVar3,0);
code_?:
      pJVar7 = (JsonConverter *)(*pVVar6->methodPtr)(converters,iVar1,pVVar6->method);
      if (pJVar7 == (JsonConverter *)0x0) {
        func_?();
        pcVar8 = (code *)swi(3);
        pJVar7 = (JsonConverter *)(*pcVar8)();
        return pJVar7;
      }
      cVar9 = (*(pJVar7->klass->vtable).__unknown_2.methodPtr)
                        (pJVar7,objectType,(pJVar7->klass->vtable).__unknown_2.method);
      if (cVar9 != '\0') {
        return pJVar7;
      }
    }
  }
  return (JsonConverter *)0x0;
}


/* Void OnError(ErrorEventArgs) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_OnError
               (JsonSerializer *this,ErrorEventArgs *e,MethodInfo *method)

{
  pEVar1 = (this->fields).Error;
  if (pEVar1 != (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)0x0) {
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,e,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void Populate(TextReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Populate
               (JsonSerializer *this,TextReader *reader,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextReader);
    cRam_? = '\x01';
  }
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  if (this_00 != (JsonTextReader *)0x0) {
    JsonTextReader::JsonTextReader__ctor(this_00,reader,(MethodInfo *)0x0);
    (*(this->klass->vtable).PopulateInternal.methodPtr)
              (this,this_00,target,(this->klass->vtable).PopulateInternal.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PopulateInternal(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_PopulateInternal
               (JsonSerializer *this,JsonReader *reader,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader);
    func_?(&StringLiteral_target);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalReader *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader)
  ;
  if (this_00 != (JsonSerializerInternalReader *)0x0) {
    Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
              ((JsonSerializerInternalWriter *)this_00,this,(MethodInfo *)0x0);
    Json::Serialization::JsonSerializerInternalReader::JsonSerializerInternalReader_Populate
              (this_00,(JsonReader *)0x0,(Object *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Populate(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Populate_1
               (JsonSerializer *this,JsonReader *reader,Object *target,MethodInfo *method)

{
  (*(this->klass->vtable).PopulateInternal.methodPtr)
            (this,reader,target,(this->klass->vtable).PopulateInternal.method);
  return;
}


/* Void Serialize(TextWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Serialize
               (JsonSerializer *this,TextWriter *textWriter,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonTextWriter);
    cRam_? = '\x01';
  }
  this_00 = (JsonWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
  if (this_00 == (JsonWriter *)0x0) {
    func_?();
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__JsonWriter);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Newtonsoft__Json__JsonWriter->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__JsonWriter);
    }
    JsonWriter::JsonWriter__ctor(this_00,(MethodInfo *)0x0);
    if (textWriter != (TextWriter *)0x0) {
      this_00[1].klass = (JsonWriter__Class *)textWriter;
      func_?(this_00 + 1,textWriter);
      *(undefined1 *)((int)&this_00[1].fields._currentState + 2) = 1;
      *(undefined2 *)&this_00[1].fields._currentState = 0x22;
      *(undefined2 *)&this_00[1].fields._top = 0x20;
      this_00[1].fields._stack = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x2;
      (*(this->klass->vtable).SerializeInternal.methodPtr)
                (this,this_00,value,(this->klass->vtable).SerializeInternal.method);
      return;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_01 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_textWriter);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonTextWriter__JsonTextWriter_System__IO__TextWriter_
                 );
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SerializeInternal(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_SerializeInternal
               (JsonSerializer *this,JsonWriter *jsonWriter,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter);
    func_?(&StringLiteral_jsonWriter);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonWriter,StringLiteral_jsonWriter,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalWriter *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter)
  ;
  if (this_00 != (JsonSerializerInternalWriter *)0x0) {
    Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
              (this_00,this,(MethodInfo *)0x0);
    Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter_Serialize
              (this_00,jsonWriter,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Serialize(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Serialize_1
               (JsonSerializer *this,JsonWriter *jsonWriter,Object *value,MethodInfo *method)

{
  (*(this->klass->vtable).SerializeInternal.methodPtr)
            (this,jsonWriter,value,(this->klass->vtable).SerializeInternal.method);
  return;
}


/* JsonSerializer() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer__ctor
               (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
    func_?(&TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._referenceLoopHandling = 0;
  (this->fields)._missingMemberHandling = 0;
  (this->fields)._nullValueHandling = 0;
  (this->fields)._defaultValueHandling = 0;
  (this->fields)._objectCreationHandling = 0;
  (this->fields)._preserveReferencesHandling = 0;
  (this->fields)._constructorHandling = 0;
  (this->fields)._typeNameHandling = 0;
  if ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
  }
  pOVar1 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
           m_additionalContext;
  (this->fields)._context.m_state =
       (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).m_state;
  (this->fields)._context.m_additionalContext = pOVar1;
  func_?(&(this->fields)._context,0);
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  pDVar2 = TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
           Instance;
  (this->fields)._binder = (SerializationBinder *)pDVar2;
  func_?(&(this->fields)._binder,pDVar2);
  return;
}


/* Void add_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_add_Error
               (JsonSerializer *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                   );
    cRam_? = '\x01';
  }
  a = (this->fields).Error;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)
             func_?(&(this->fields).Error,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* StreamingContext get_Context() */

StreamingContext
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_Context
          (JsonSerializer *this,MethodInfo *method)

{
  return (this->fields)._context;
}


/* IContractResolver get_ContractResolver() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_ContractResolver
          (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((this->fields)._contractResolver == (IContractResolver *)0x0) {
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
      cRam_? = '\x01';
    }
    if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pIVar1 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
             _instance;
    (this->fields)._contractResolver = pIVar1;
    func_?(&(this->fields)._contractResolver,pIVar1);
  }
  return (this->fields)._contractResolver;
}


/* JsonConverterCollection get_Converters() */

JsonConverterCollection *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_Converters
          (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConverterCollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._converters == (JsonConverterCollection *)0x0) {
    this_00 = (DictionaryWithChangeEvent_2_System_Object_System_Object_ *)
              func_?(TypeInfo__Newtonsoft__Json__JsonConverterCollection);
    if (this_00 == (DictionaryWithChangeEvent_2_System_Object_System_Object_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pJVar2 = (JsonConverterCollection *)(*pcVar1)();
      return pJVar2;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::JsonConverter>__Collection__
                     );
      cRam_? = '\x01';
    }
    DictionaryWithChangeEvent`2[System::Object,System::Object]::
    DictionaryWithChangeEvent_2_System_Object_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::JsonConverter>__Collection__
              );
    (this->fields)._converters = (JsonConverterCollection *)this_00;
    func_?(&(this->fields)._converters,this_00);
  }
  return (this->fields)._converters;
}


/* IReferenceResolver get_ReferenceResolver() */

IReferenceResolver *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_ReferenceResolver
          (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultReferenceResolver);
    cRam_? = '\x01';
  }
  if ((this->fields)._referenceResolver == (IReferenceResolver *)0x0) {
    this_00 = (TweenRunner_1_FloatTween_ *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultReferenceResolver);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pIVar2 = (IReferenceResolver *)(*pcVar1)();
      return pIVar2;
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._referenceResolver = (IReferenceResolver *)this_00;
    func_?(&(this->fields)._referenceResolver,this_00);
  }
  return (this->fields)._referenceResolver;
}


/* Void remove_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_remove_Error
               (JsonSerializer *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                   );
    cRam_? = '\x01';
  }
  source = (this->fields).Error;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)
             func_?(&(this->fields).Error,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_Binder(SerializationBinder) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_Binder
               (JsonSerializer *this,SerializationBinder *value,MethodInfo *method)

{
  if (value != (SerializationBinder *)0x0) {
    (this->fields)._binder = value;
    func_?(&(this->fields)._binder,value);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  message = (String *)func_?(&StringLiteral_Serialization_binder_cannot_be_n);
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_00,paramName,message,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_Binder_System__Runtime__Serialization__SerializationBinder_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ConstructorHandling(ConstructorHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ConstructorHandling
               (JsonSerializer *this,ConstructorHandling__Enum value,MethodInfo *method)

{
  if (value < 2) {
    (this->fields)._constructorHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_ConstructorHandling_Newtonsoft__Json__ConstructorHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Context(StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_Context
               (JsonSerializer *this,StreamingContext value,MethodInfo *method)

{
  (this->fields)._context.m_additionalContext = value.m_additionalContext;
  (this->fields)._context.m_state = value.m_state;
  func_?(&(this->fields)._context,0);
  return;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_DefaultValueHandling
               (JsonSerializer *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  if (value < 4) {
    (this->fields)._defaultValueHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_DefaultValueHandling_Newtonsoft__Json__DefaultValueHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MissingMemberHandling(MissingMemberHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_MissingMemberHandling
               (JsonSerializer *this,MissingMemberHandling__Enum value,MethodInfo *method)

{
  if (value < 2) {
    (this->fields)._missingMemberHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_MissingMemberHandling_Newtonsoft__Json__MissingMemberHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_NullValueHandling
               (JsonSerializer *this,NullValueHandling__Enum value,MethodInfo *method)

{
  if (value < 2) {
    (this->fields)._nullValueHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_NullValueHandling_Newtonsoft__Json__NullValueHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_ObjectCreationHandling
               (JsonSerializer *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  if (value < (ObjectCreationHandling__Enum_Replace|ObjectCreationHandling__Enum_Reuse)) {
    (this->fields)._objectCreationHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_ObjectCreationHandling_Newtonsoft__Json__ObjectCreationHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_PreserveReferencesHandling(PreserveReferencesHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_PreserveReferencesHandling
               (JsonSerializer *this,PreserveReferencesHandling__Enum value,MethodInfo *method)

{
  if (value < 4) {
    (this->fields)._preserveReferencesHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_PreserveReferencesHandling_Newtonsoft__Json__PreserveReferencesHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ReferenceLoopHandling
               (JsonSerializer *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  if (value < (ReferenceLoopHandling__Enum_Serialize|ReferenceLoopHandling__Enum_Ignore)) {
    (this->fields)._referenceLoopHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_ReferenceLoopHandling_Newtonsoft__Json__ReferenceLoopHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_ReferenceResolver(IReferenceResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ReferenceResolver
               (JsonSerializer *this,IReferenceResolver *value,MethodInfo *method)

{
  if (value != (IReferenceResolver *)0x0) {
    (this->fields)._referenceResolver = value;
    func_?(&(this->fields)._referenceResolver,value);
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar1);
  func_?(this_00);
  message = (String *)func_?(&StringLiteral_Reference_resolver_cannot_be_nul);
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_00,paramName,message,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_ReferenceResolver_Newtonsoft__Json__Serialization__IReferenceResolver_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TypeNameAssemblyFormat(FormatterAssemblyStyle) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_TypeNameAssemblyFormat
               (JsonSerializer *this,FormatterAssemblyStyle__Enum value,MethodInfo *method)

{
  if (value < 2) {
    (this->fields)._typeNameAssemblyFormat = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_TypeNameAssemblyFormat_System__Runtime__Serialization__Formatters__FormatterAssemblyStyle_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_TypeNameHandling
               (JsonSerializer *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  if (value < (TypeNameHandling__Enum_Auto|TypeNameHandling__Enum_Objects)) {
    (this->fields)._typeNameHandling = value;
    return;
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,method_00);
  func_?(&
                  MethodInfo__Newtonsoft__Json__JsonSerializer__set_TypeNameHandling_Newtonsoft__Json__TypeNameHandling_
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

