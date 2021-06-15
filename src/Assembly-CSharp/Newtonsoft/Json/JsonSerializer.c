
/* JsonSerializer Create(JsonSerializerSettings) */

JsonSerializer *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Create
          (JsonSerializerSettings *settings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (JsonSerializer *)func_?(TypeInfo__Newtonsoft__Json__JsonSerializer);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._referenceLoopHandling = 0;
  (this->fields)._missingMemberHandling = 0;
  (this->fields)._nullValueHandling = 0;
  (this->fields)._defaultValueHandling = 0;
  (this->fields)._objectCreationHandling = 0;
  ((Vector3 *)&(this->fields)._preserveReferencesHandling)->x = 0.0;
  (this->fields)._constructorHandling = 0;
  (((MonoBehaviour__Fields *)&(this->fields)._typeNameHandling)->_)._._.m_CachedPtr = (void *)0x0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonSerializerSettings->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
  }
  pOVar1 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
           additional;
  (this->fields)._context.state =
       (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).state;
  (this->fields)._context.additional = pOVar1;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  (this->fields)._binder =
       (SerializationBinder *)
       TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
       Instance;
  if (settings != (JsonSerializerSettings *)0x0) {
    bVar2 = Json::Utilities::CollectionUtils::CollectionUtils_IsNullOrEmpty_5
                      ((ICollection_1_System_Reflection_ParameterInfo_ *)
                       (settings->fields)._Converters_k__BackingField,
                       bool_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__IsNullOrEmpty<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__ICollection<Newtonsoft::Json::JsonConverter>_
                      );
    if (bVar2 == 0) {
      initial = (IList_1_System_Reflection_MemberInfo_ *)
                (*(code *)(this->klass->vtable).get_Converters.method)(this);
      Json::Utilities::CollectionUtils::CollectionUtils_AddRange_4
                (initial,(IEnumerable_1_System_Reflection_MemberInfo_ *)
                         (settings->fields)._Converters_k__BackingField,
                 void_MethodInfo__Newtonsoft__Json__Utilities__CollectionUtils__AddRange<Newtonsoft::Json::JsonConverter>_System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>__System__Collections__Generic__IEnumerable<Newtonsoft::Json::JsonConverter>_
                );
    }
    (*(code *)(this->klass->vtable).set_TypeNameHandling.method)
              (this,(settings->fields)._TypeNameHandling_k__BackingField);
    (*(code *)(this->klass->vtable).set_TypeNameAssemblyFormat.method)
              (this,(settings->fields)._TypeNameAssemblyFormat_k__BackingField,
               (this->klass->vtable).get_PreserveReferencesHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_PreserveReferencesHandling.method)
              (this,(settings->fields)._PreserveReferencesHandling_k__BackingField,
               (this->klass->vtable).get_ReferenceLoopHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_ReferenceLoopHandling.method)
              (this,(settings->fields)._ReferenceLoopHandling_k__BackingField,
               (this->klass->vtable).get_MissingMemberHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_MissingMemberHandling.method)
              (this,(settings->fields)._MissingMemberHandling_k__BackingField,
               (this->klass->vtable).get_NullValueHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_ObjectCreationHandling.method)
              (this,(settings->fields)._ObjectCreationHandling_k__BackingField,
               (this->klass->vtable).get_ConstructorHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_NullValueHandling.method)
              (this,(settings->fields)._NullValueHandling_k__BackingField);
    (*(code *)(this->klass->vtable).set_DefaultValueHandling.method)
              (this,(settings->fields)._DefaultValueHandling_k__BackingField,
               (this->klass->vtable).get_ObjectCreationHandling.methodPtr);
    (*(code *)(this->klass->vtable).set_ConstructorHandling.method)
              (this,(settings->fields)._ConstructorHandling_k__BackingField,
               (this->klass->vtable).get_Converters.methodPtr);
    (*(code *)(this->klass->vtable).set_Context.method)
              (this,(settings->fields)._Context_k__BackingField.state,
               (settings->fields)._Context_k__BackingField.additional,
               (this->klass->vtable).PopulateInternal.methodPtr);
    pEVar3 = (settings->fields)._Error_k__BackingField;
    if (pEVar3 != (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)0x0) {
      (*(code *)(this->klass->vtable).add_Error.method)(this,pEVar3);
    }
    pIVar4 = (settings->fields)._ContractResolver_k__BackingField;
    if (pIVar4 != (IContractResolver *)0x0) {
      (*(code *)(this->klass->vtable).set_ContractResolver.method)(this,pIVar4);
    }
    pIVar5 = (settings->fields)._ReferenceResolver_k__BackingField;
    if (pIVar5 != (IReferenceResolver *)0x0) {
      (*(code *)(this->klass->vtable).set_ReferenceResolver.method)(this,pIVar5);
    }
    pSVar6 = (settings->fields)._Binder_k__BackingField;
    if (pSVar6 != (SerializationBinder *)0x0) {
      (*(code *)(this->klass->vtable).set_Binder.method)(this,pSVar6);
    }
  }
  return this;
}


/* Object Deserialize(JsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize
                   (JsonSerializer *this,JsonReader *reader,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(code *)(this->klass->vtable).DeserializeInternal.method)
                     (this,reader,0,(this->klass->vtable).SerializeInternal.methodPtr);
  return pOVar1;
}


/* Object DeserializeInternal(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_DeserializeInternal
                   (JsonSerializer *this,JsonReader *reader,Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalReader *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader)
  ;
  Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
            ((JsonSerializerInternalWriter *)this_00,this,(MethodInfo *)0x0);
  if (this_00 != (JsonSerializerInternalReader *)0x0) {
    pOVar1 = Json::Serialization::JsonSerializerInternalReader::
             JsonSerializerInternalReader_Deserialize
                       (this_00,(JsonReader *)0x0,(Type *)0x0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_00,reader,(MethodInfo *)0x0);
  pOVar1 = (Object *)
           (*(code *)(this->klass->vtable).DeserializeInternal.method)
                     (this,this_00,objectType,(this->klass->vtable).SerializeInternal.methodPtr);
  return pOVar1;
}


/* Object Deserialize(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize_2
                   (JsonSerializer *this,JsonReader *reader,Type *objectType,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*(code *)(this->klass->vtable).DeserializeInternal.method)
                     (this,reader,objectType,(this->klass->vtable).SerializeInternal.methodPtr);
  return pOVar1;
}


/* Object Deserialize[Object](JsonReader) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Deserialize_3
                   (JsonSerializer *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  objectType = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (this == (JsonSerializer *)0x0) {
    func_?();
  }
  else {
    pOVar1 = JsonSerializer_Deserialize_2(this,reader,objectType,(MethodInfo *)0x0);
    if ((method->parameters[1][0x17].type & 1) == 0) {
      func_?();
    }
    if (pOVar1 == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar1 = (Object *)func_?();
    if (pOVar1 != (Object *)0x0) {
      return pOVar1;
    }
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
    func_?(_UNK_?);
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
      uVar6._0_1_ = (pJVar4->_1).rank;
      uVar6._1_1_ = (pJVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pJVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>) {
            ppMVar7 = &(&(pJVar4->vtable).ToString)[pJVar4->interfaceOffsets[uVar5].offset].method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)
                func_?(pJVar1,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>
                                ,3,pJVar4,0);
code_?:
      pJVar8 = (JsonConverter *)(*(code *)*ppMVar7)(pJVar1,iVar2,ppMVar7[1]);
      if (pJVar8 == (JsonConverter *)0x0) {
        func_?(0);
        pcVar9 = (code *)swi(3);
        pJVar8 = (JsonConverter *)(*pcVar9)();
        return pJVar8;
      }
      cVar10 = (*(code *)(pJVar8->klass->vtable).__unknown_2.method)
                        (pJVar8,type,(pJVar8->klass->vtable).GetSchema.methodPtr);
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
    func_?(_UNK_?);
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
      uVar5._0_1_ = (pIVar3->_1).rank;
      uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar5 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>) {
            ppMVar6 = &(&(pIVar3->vtable).get_Item)[pIVar3->interfaceOffsets[uVar4].offset].method;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      ppMVar6 = (MethodInfo **)
                func_?(converters,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::JsonConverter>
                                ,3,pIVar3,0);
code_?:
      pJVar7 = (JsonConverter *)(*(code *)*ppMVar6)(converters,iVar1,ppMVar6[1]);
      if (pJVar7 == (JsonConverter *)0x0) {
        func_?(0);
        pcVar8 = (code *)swi(3);
        pJVar7 = (JsonConverter *)(*pcVar8)();
        return pJVar7;
      }
      cVar9 = (*(code *)(pJVar7->klass->vtable).__unknown_2.method)
                        (pJVar7,objectType,(pJVar7->klass->vtable).GetSchema.methodPtr);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).Error;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)e,
               MethodInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>__Invoke_System__Object__Newtonsoft__Json__Serialization__ErrorEventArgs_
              );
  }
  return;
}


/* Void Populate(TextReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Populate
               (JsonSerializer *this,TextReader *reader,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonTextReader *)func_?(TypeInfo__Newtonsoft__Json__JsonTextReader);
  JsonTextReader::JsonTextReader__ctor(this_00,reader,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).PopulateInternal.method)
            (this,this_00,target,(this->klass->vtable).DeserializeInternal.methodPtr);
  return;
}


/* Void PopulateInternal(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_PopulateInternal
               (JsonSerializer *this,JsonReader *reader,Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalReader *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader)
  ;
  Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
            ((JsonSerializerInternalWriter *)this_00,this,(MethodInfo *)0x0);
  if (this_00 != (JsonSerializerInternalReader *)0x0) {
    Json::Serialization::JsonSerializerInternalReader::JsonSerializerInternalReader_Populate
              (this_00,reader,target,(MethodInfo *)0x0);
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
  (*(code *)(this->klass->vtable).PopulateInternal.method)
            (this,reader,target,(this->klass->vtable).DeserializeInternal.methodPtr);
  return;
}


/* Void Serialize(TextWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_Serialize
               (JsonSerializer *this,TextWriter *textWriter,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (JsonTextWriter *)func_?(TypeInfo__Newtonsoft__Json__JsonTextWriter);
  JsonTextWriter::JsonTextWriter__ctor(this_00,textWriter,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).SerializeInternal.method)
            (this,this_00,value,this->klass[1]._0.image);
  return;
}


/* Void SerializeInternal(JsonWriter, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_SerializeInternal
               (JsonSerializer *this,JsonWriter *jsonWriter,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)jsonWriter,StringLiteral_jsonWriter,(MethodInfo *)0x0);
  this_00 = (JsonSerializerInternalWriter *)
            func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalWriter)
  ;
  Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter__ctor
            (this_00,this,(MethodInfo *)0x0);
  if (this_00 != (JsonSerializerInternalWriter *)0x0) {
    Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter_Serialize
              (this_00,(JsonWriter *)0x0,(Object *)0x0,(MethodInfo *)0x0);
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
  (*(code *)(this->klass->vtable).SerializeInternal.method)
            (this,jsonWriter,value,this->klass[1]._0.image);
  return;
}


/* JsonSerializer() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer__ctor
               (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._referenceLoopHandling = 0;
  (this->fields)._missingMemberHandling = 0;
  (this->fields)._nullValueHandling = 0;
  (this->fields)._defaultValueHandling = 0;
  (this->fields)._objectCreationHandling = 0;
  (this->fields)._preserveReferencesHandling = 0;
  (this->fields)._constructorHandling = 0;
  (this->fields)._typeNameHandling = 0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonSerializerSettings->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__JsonSerializerSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonSerializerSettings);
  }
  pOVar1 = (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).
           additional;
  (this->fields)._context.state =
       (TypeInfo__Newtonsoft__Json__JsonSerializerSettings->static_fields->DefaultContext).state;
  (this->fields)._context.additional = pOVar1;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->vtable).Equals
              .methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->_1).cctor_started == 0
     )) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder);
  }
  (this->fields)._binder =
       (SerializationBinder *)
       TypeInfo__Newtonsoft__Json__Serialization__DefaultSerializationBinder->static_fields->
       Instance;
  return;
}


/* Void add_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_add_Error
               (JsonSerializer *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Error;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._contractResolver == (IContractResolver *)0x0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pIVar1 = Json::Serialization::DefaultContractResolver::DefaultContractResolver_get_Instance
                       ((MethodInfo *)0x0);
    (this->fields)._contractResolver = pIVar1;
  }
  return (this->fields)._contractResolver;
}


/* JsonConverterCollection get_Converters() */

JsonConverterCollection *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_Converters
          (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Collection_1_Newtonsoft_Json_JsonConverter_ *)(this->fields)._converters;
  if (this_00 == (Collection_1_Newtonsoft_Json_JsonConverter_ *)0x0) {
    this_00 = (Collection_1_Newtonsoft_Json_JsonConverter_ *)
              func_?(TypeInfo__Newtonsoft__Json__JsonConverterCollection);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::JsonConverter]::
    Collection_1_Newtonsoft_Json_JsonConverter___ctor
              (this_00,
               MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::JsonConverter>__Collection__
              );
    (this->fields)._converters = (JsonConverterCollection *)this_00;
  }
  return (JsonConverterCollection *)this_00;
}


/* IReferenceResolver get_ReferenceResolver() */

IReferenceResolver *
Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_get_ReferenceResolver
          (JsonSerializer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            (this->fields)._referenceResolver;
  if (this_00 == (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultReferenceResolver);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._referenceResolver = (IReferenceResolver *)this_00;
  }
  return (IReferenceResolver *)this_00;
}


/* Void remove_Error(EventHandler`1[Newtonsoft.Json.Serialization.ErrorEventArgs]) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_remove_Error
               (JsonSerializer *this,
               EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).Error;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs>
                       );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ *)
             func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_Binder(SerializationBinder) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_Binder
               (JsonSerializer *this,SerializationBinder *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (SerializationBinder *)0x0) {
    (this->fields)._binder = value;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_00,StringLiteral_value,StringLiteral_Serialization_binder_cannot_be_n,
             (MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ConstructorHandling(ConstructorHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ConstructorHandling
               (JsonSerializer *this,ConstructorHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 2) {
    (this->fields)._constructorHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Context(StreamingContext) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_Context
               (JsonSerializer *this,StreamingContext value,MethodInfo *method)

{
  (this->fields)._context.state = value.state;
  (this->fields)._context.additional = value.additional;
  return;
}


/* Void set_DefaultValueHandling(DefaultValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_DefaultValueHandling
               (JsonSerializer *this,DefaultValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 4) {
    (this->fields)._defaultValueHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_MissingMemberHandling(MissingMemberHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_MissingMemberHandling
               (JsonSerializer *this,MissingMemberHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 2) {
    (this->fields)._missingMemberHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_NullValueHandling(NullValueHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_NullValueHandling
               (JsonSerializer *this,NullValueHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 2) {
    (this->fields)._nullValueHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ObjectCreationHandling(ObjectCreationHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_ObjectCreationHandling
               (JsonSerializer *this,ObjectCreationHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < (ObjectCreationHandling__Enum_Replace|ObjectCreationHandling__Enum_Reuse)) {
    (this->fields)._objectCreationHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_PreserveReferencesHandling(PreserveReferencesHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_PreserveReferencesHandling
               (JsonSerializer *this,PreserveReferencesHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 4) {
    (this->fields)._preserveReferencesHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ReferenceLoopHandling(ReferenceLoopHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ReferenceLoopHandling
               (JsonSerializer *this,ReferenceLoopHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < (ReferenceLoopHandling__Enum_Serialize|ReferenceLoopHandling__Enum_Ignore)) {
    (this->fields)._referenceLoopHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_ReferenceResolver(IReferenceResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_ReferenceResolver
               (JsonSerializer *this,IReferenceResolver *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != (IReferenceResolver *)0x0) {
    (this->fields)._referenceResolver = value;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_2
            (this_00,StringLiteral_value,StringLiteral_Reference_resolver_cannot_be_nul,
             (MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_TypeNameAssemblyFormat(FormatterAssemblyStyle) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::
     JsonSerializer_set_TypeNameAssemblyFormat
               (JsonSerializer *this,FormatterAssemblyStyle__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < 2) {
    (this->fields)._typeNameAssemblyFormat = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_TypeNameHandling(TypeNameHandling) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonSerializer::JsonSerializer_set_TypeNameHandling
               (JsonSerializer *this,TypeNameHandling__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value < (TypeNameHandling__Enum_Auto|TypeNameHandling__Enum_Objects)) {
    (this->fields)._typeNameHandling = value;
    return;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,StringLiteral_value,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

