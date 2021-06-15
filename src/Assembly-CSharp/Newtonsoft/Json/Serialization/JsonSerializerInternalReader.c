
/* Void CheckedRead(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_CheckedRead
               (JsonSerializerInternalReader *this,JsonReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    cVar1 = (*(code *)(reader->klass->vtable).__unknown.method)
                      (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    if (cVar1 != '\0') {
      return;
    }
    this_00 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (this_00,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
    func_?(this_00,0);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Object CreateAndPopulateDictionary(JsonReader, JsonDictionaryContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateAndPopulateDictionary
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonDictionaryContract *contract,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (contract != (JsonDictionaryContract *)0x0) {
    if ((contract->fields)._._DefaultCreator_k__BackingField == (Func_1_Object_ *)0x0)
    goto code_?;
    if ((contract->fields)._._DefaultCreatorNonPublic_k__BackingField != 0) {
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 == (JsonSerializer *)0x0) goto code_?;
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_ConstructorHandling.method)
                        (pJVar1,(pJVar1->klass->vtable).set_ConstructorHandling.methodPtr);
      if (iVar2 != 1) goto code_?;
    }
    this_00 = (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)
              (contract->fields)._._DefaultCreator_k__BackingField;
    if (this_00 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) {
      dictionary = System.Core.dll::System::Func`1[System::Collections::Generic::
                   List`1[MVOverlapResult]]::
                   Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                             (this_00,MethodInfo__System__Func<System::Object>__Invoke__);
      dictionary_00 =
           JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                     (contract,(Object *)dictionary,(MethodInfo *)0x0);
      JsonSerializerInternalReader_PopulateDictionary
                (this,dictionary_00,reader,contract,id,(MethodInfo *)0x0);
      if (dictionary_00 != (IWrappedDictionary *)0x0) {
        pIStack3 = dictionary_00;
        pOVar4 = (Object *)func_?();
        return pOVar4;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(contract,0);
  pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)contract,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pIVar5);
  func_?(0,pIVar5);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unable_to_find_a_default_constru,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,message,(MethodInfo *)0x0);
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* Object CreateAndPopulateList(JsonReader, String, JsonArrayContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateAndPopulateList
                   (JsonSerializerInternalReader *this,JsonReader *reader,String *reference,
                   JsonArrayContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateAndPopulateList_c__AnonStorey0
  ;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)reader;
    (this_00->fields)._._._._.m_CachedPtr = reference;
    (this_00->fields).state = (int32_t)contract;
    (this_00->fields).originalScale.y = (float)this;
    if (contract != (JsonArrayContract *)0x0) {
      listType = (contract->fields)._._CreatedType_k__BackingField;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<System::Collections::IList,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateAndPopulateList_c__AnonStorey0____m__0_System__Collections__IList__bool_
                 ,
                 MethodInfo__System__Action<System::Collections::IList,_bool>__Action_System__Object__void__
                );
      pOVar1 = Json::Utilities::CollectionUtils::CollectionUtils_CreateAndPopulateList
                         (listType,(Action_2_System_Collections_IList_Boolean_ *)this_01,
                          (MethodInfo *)0x0);
      return pOVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Object CreateAndPopulateObject(JsonReader, JsonObjectContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateAndPopulateObject
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonObjectContract *contract,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((contract == (JsonObjectContract *)0x0) ||
     (pTVar1 = (contract->fields)._._UnderlyingType_k__BackingField, pTVar1 == (Type *)0x0)) {
code_?:
    func_?(0);
  }
  else {
    bVar2 = mscorlib.dll::System::Type::Type_get_IsInterface(pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    pTVar1 = (contract->fields)._._UnderlyingType_k__BackingField;
    if (pTVar1 == (Type *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Type::Type_get_IsAbstract(pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    pCVar3 = (contract->fields)._OverrideConstructor_k__BackingField;
    if (pCVar3 != (ConstructorInfo *)0x0) {
      iVar4 = (*(code *)(pCVar3->klass->vtable).__unknown_6.method)
                        (pCVar3,(pCVar3->klass->vtable).GetParameterCount.methodPtr);
      if (iVar4 != 0) {
        pCVar3 = (contract->fields)._OverrideConstructor_k__BackingField;
        if (0 < *(int *)(iVar4 + 0xc)) {
          pOVar5 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                              (this,reader,contract,pCVar3,id,(MethodInfo *)0x0);
          return pOVar5;
        }
        if (pCVar3 != (ConstructorInfo *)0x0) {
          newObject = (List_1_MVOverlapResult_ *)
                      mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                                (pCVar3,(Object__Array *)0x0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((contract->fields)._._DefaultCreator_k__BackingField == (Func_1_Object_ *)0x0) {
code_?:
      pCVar3 = (contract->fields)._ParametrizedConstructor_k__BackingField;
      if (pCVar3 != (ConstructorInfo *)0x0) {
        pOVar5 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                            (this,reader,contract,pCVar3,id,(MethodInfo *)0x0);
        return pOVar5;
      }
    }
    else {
      if ((contract->fields)._._DefaultCreatorNonPublic_k__BackingField != 0) {
        pJVar6 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar6 == (JsonSerializer *)0x0) goto code_?;
        iVar4 = func_?(0x1a,pJVar6);
        if (iVar4 != 1) goto code_?;
      }
      this_00 = (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)
                (contract->fields)._._DefaultCreator_k__BackingField;
      if (this_00 == (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0)
      goto code_?;
      newObject = System.Core.dll::System::Func`1[System::Collections::Generic::
                  List`1[MVOverlapResult]]::
                  Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                            (this_00,MethodInfo__System__Func<System::Object>__Invoke__);
code_?:
      if (newObject != (List_1_MVOverlapResult_ *)0x0) {
        JsonSerializerInternalReader_PopulateObject
                  (this,(Object *)newObject,(JsonReader *)0x0,contract,id,(MethodInfo *)0x0);
        return (Object *)newObject;
      }
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar8 = (Object__Array *)func_?();
  func_?(contract);
  pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)contract,(MethodInfo *)0x0);
  func_?(pOVar8,0);
  func_?(pOVar8,pIVar9);
  func_?();
  contract = (JsonObjectContract *)
             Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Unable_to_find_a_constructor_to_,(IFormatProvider *)pCVar7,
                        pOVar8,(MethodInfo *)0x0);
  pJVar10 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (pJVar10,(String *)contract,(MethodInfo *)0x0);
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar8 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(contract,0);
  pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)contract,(MethodInfo *)0x0);
  func_?(pOVar8,0);
  func_?(pOVar8,pIVar9);
  func_?();
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Could_not_create_an_instance_of_,(IFormatProvider *)pCVar7,
                       pOVar8,(MethodInfo *)0x0);
  pJVar10 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar10,message,(MethodInfo *)0x0);
  uStack11 = 0;
  func_?();
  pcVar12 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar12)();
  return pOVar5;
}


/* Object CreateISerializable(JsonReader, JsonISerializableContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateISerializable
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonISerializableContract *contract,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (contract != (JsonISerializableContract *)0x0) {
    type = (contract->fields)._._UnderlyingType_k__BackingField;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (ScaleAnimationBase *)(this->fields)._formatterConverter;
    if (this_01 == (ScaleAnimationBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (this->fields)._internalSerializer;
      if (this_00 == (JsonSerializerProxy *)0x0) {
        this_00 = (JsonSerializerProxy *)
                  func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
        in_stack_1 = (MethodInfo *)0x0;
        JsonSerializerProxy::JsonSerializerProxy__ctor(this_00,this,(MethodInfo *)0x0);
        (this->fields)._internalSerializer = this_00;
      }
      this_01 = (ScaleAnimationBase *)
                func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_1);
      Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                ((Object *)this_00,StringLiteral_serializer,(MethodInfo *)0x0);
      (this_01->fields)._._._._.m_CachedPtr = this_00;
      (this->fields)._formatterConverter = (JsonFormatterConverter *)this_01;
    }
    this_02 = (Object__Class *)
              func_?(TypeInfo__System__Runtime__Serialization__SerializationInfo);
    mscorlib.dll::System::Runtime::Serialization::SerializationInfo::SerializationInfo__ctor
              ((SerializationInfo *)this_02,type,(IFormatterConverter *)this_01,(MethodInfo *)0x0);
    do {
      if (reader == (JsonReader *)0x0) goto code_?;
      iVar2 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                        (reader,(reader->klass->vtable).get_Value.methodPtr);
      if (iVar2 == 4) {
        piVar3 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)();
        if (piVar3 == (int *)0x0) goto code_?;
        name = (JsonSerializationException__Class *)
               (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
        cVar4 = (*(code *)(reader->klass->vtable).__unknown.method)
                          (reader,(reader->klass->vtable).__unknown_1.methodPtr);
        if (cVar4 == '\0') {
code_?:
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
          func_?(pOVar6,0);
          func_?(pOVar6,name);
          func_?(0,name);
          pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_Unexpected_end_when_setting__0__,
                               (IFormatProvider *)pCVar5,pOVar6,(MethodInfo *)0x0);
          pJVar8 = (JsonSchemaException *)
                    func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (pJVar8,pSVar7,(MethodInfo *)0x0);
          func_?();
          goto code_?;
        }
        value = Json::Linq::JToken::JToken_ReadFrom(reader,(MethodInfo *)0x0);
        if (this_02 == (Object__Class *)0x0) goto code_?;
        mscorlib.dll::System::Runtime::Serialization::SerializationInfo::
        SerializationInfo_AddValue_9
                  ((SerializationInfo *)this_02,(String *)name,(Object *)value,(MethodInfo *)0x0);
      }
      else if (iVar2 != 5) {
        if (iVar2 != 0xd) {
          (*(code *)(reader->klass->vtable).get_TokenType.method)();
          pOVar9 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar7 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_Unexpected_token_when_deserializ,pOVar9,
                               (MethodInfo *)0x0);
          name = TypeInfo__Newtonsoft__Json__JsonSerializationException;
          pJVar8 = (JsonSchemaException *)func_?();
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (pJVar8,pSVar7,(MethodInfo *)0x0);
          func_?();
          goto code_?;
        }
        break;
      }
      cVar4 = (*(code *)(reader->klass->vtable).__unknown.method)();
    } while (cVar4 != '\0');
    if ((contract->fields)._ISerializableCreator_k__BackingField ==
        (ObjectConstructor_1_System_Object_ *)0x0) goto code_?;
    this_03 = (Func_2_Object_Int32_ *)0x2;
    pOVar9 = (Object *)func_?();
    if (pOVar9 == (Object *)0x0) goto code_?;
    if ((this_02 == (Object__Class *)0x0) ||
       (iVar2 = func_?(this_02,(pOVar9->klass->_0).element_class), iVar2 != 0)) {
      if (pOVar9[1].monitor == (MonitorData *)0x0) goto code_?;
      pOVar9[2].klass = this_02;
      pJVar10 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar10 == (JsonSerializer *)0x0) goto code_?;
      (*(code *)(pJVar10->klass->vtable).get_Context.method)
                (pJVar10,(pJVar10->klass->vtable).set_Context.methodPtr);
      pMVar11 = (MonitorData *)
               func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                               &stack0xfffffff0);
      if ((pMVar11 != (MonitorData *)0x0) &&
         (iVar2 = func_?(pMVar11,(pOVar9->klass->_0).element_class), iVar2 == 0))
      goto code_?;
      if ((MonitorData *)0x1 < pOVar9[1].monitor) {
        pOVar9[2].monitor = pMVar11;
        if (this_03 != (Func_2_Object_Int32_ *)0x0) {
          pOVar9 = (Object *)
                   System.Core.dll::System::Func`2[Object,Int32]::Func_2_Object_Int32__Invoke
                             (this_03,pOVar9,
                              MethodInfo__Newtonsoft__Json__Serialization__ObjectConstructor<System::Object>__Invoke_System__Object____
                             );
          if (id != (String *)0x0) {
            pJVar10 = (this->fields)._._Serializer_k__BackingField;
            if ((pJVar10 == (JsonSerializer *)0x0) ||
               (iVar2 = (*(code *)(pJVar10->klass->vtable).get_ReferenceResolver.method)(),
               iVar2 == 0)) goto code_?;
            func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar2,
                            this,id,pOVar9);
          }
          pJVar10 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar10 != (JsonSerializer *)0x0) {
            SVar12 = (StreamingContext)
                    (*(code *)(pJVar10->klass->vtable).get_Context.method)
                              (pJVar10,(pJVar10->klass->vtable).set_Context.methodPtr);
            JsonContract::JsonContract_InvokeOnDeserializing
                      ((JsonContract *)contract,pOVar9,SVar12,(MethodInfo *)0x0);
            pJVar10 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar10 != (JsonSerializer *)0x0) {
              SVar12 = (StreamingContext)
                      (*(code *)(pJVar10->klass->vtable).get_Context.method)
                                (pJVar10,(pJVar10->klass->vtable).set_Context.methodPtr);
              JsonContract::JsonContract_InvokeOnDeserialized
                        ((JsonContract *)contract,pOVar9,SVar12,(MethodInfo *)0x0);
              return pOVar9;
            }
          }
        }
        goto code_?;
      }
    }
    else {
code_?:
      uVar13 = func_?(0,0);
      func_?(uVar13);
code_?:
      uVar13 = func_?(0,0);
      func_?(uVar13);
code_?:
      uVar13 = func_?(0,0);
      func_?(uVar13);
    }
    uVar13 = func_?(0,0);
    func_?(uVar13);
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar14 = TypeInfo__System__Object;
  pOVar6 = (Object__Array *)func_?();
  func_?(pOVar6);
  func_?(pOVar6,pOVar14);
  func_?();
  pSVar7 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_ISerializable_type___0___does_no,(IFormatProvider *)pCVar5,
                       pOVar6,(MethodInfo *)0x0);
  pJVar8 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar8,pSVar7,(MethodInfo *)0x0);
  func_?();
  pcVar15 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar15)();
  return pOVar9;
}


/* JToken CreateJObject(JsonReader) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateJObject
                   (JsonSerializerInternalReader *this,JsonReader *reader,MethodInfo *method)

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
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  this_00 = (JTokenWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  Json::Linq::JTokenWriter::JTokenWriter__ctor_1(this_00,(MethodInfo *)0x0);
  uStack_1 = 0;
  if ((this_00 != (JTokenWriter *)0x0) &&
     ((*(code *)(this_00->klass->vtable).WriteStartObject.method)(), reader != (JsonReader *)0x0)) {
    iVar4 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
    if (iVar4 == 4) {
      iVar4 = (*(code *)(reader->klass->vtable).get_Depth.method)();
      JsonWriter::JsonWriter_WriteToken_1((JsonWriter *)this_00,reader,iVar4 + -1,(MethodInfo *)0x0)
      ;
    }
    else {
      (*(code *)(this_00->klass->vtable).WriteEndObject.method)();
    }
    pJVar5 = Json::Linq::JTokenWriter::JTokenWriter_get_Token(this_00,(MethodInfo *)0x0);
    uStack_1 = 0xffffffff;
    if (this_00 != (JTokenWriter *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = uStack_3;
    return pJVar5;
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar6)();
  return pJVar5;
}


/* JToken CreateJToken(JsonReader, JsonContract) */

JToken * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateJToken
                   (JsonSerializerInternalReader *this,JsonReader *reader,JsonContract *contract,
                   MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  handle = TypeRef__Newtonsoft__Json__Linq__JRaw;
  if (contract != (JsonContract *)0x0) {
    pTVar2 = (contract->fields)._UnderlyingType_k__BackingField;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar2 == pTVar3) {
      pJVar4 = Json::Linq::JRaw::JRaw_Create(reader,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar1;
      return (JToken *)pJVar4;
    }
  }
  this_00 = (JTokenWriter *)func_?();
  Json::Linq::JTokenWriter::JTokenWriter__ctor_1(this_00,(MethodInfo *)0x0);
  if (this_00 != (JTokenWriter *)0x0) {
    JsonWriter::JsonWriter_WriteToken((JsonWriter *)this_00,reader,(MethodInfo *)0x0);
    uVar1 = 0;
    pJVar5 = Json::Linq::JTokenWriter::JTokenWriter_get_Token(this_00,(MethodInfo *)0x0);
    _UNK_? = 0x53;
    if (this_00 != (JTokenWriter *)0x0) {
      uVar1 = 0;
      func_?();
    }
    *unaff_FS_OFFSET = uVar1;
    return pJVar5;
  }
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  pJVar5 = (JToken *)(*pcVar6)();
  return pJVar5;
}


/* Object CreateList(JsonReader, Type, JsonContract, JsonProperty, Object, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateList
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = JsonSerializerInternalReader_HasDefinedType(this,objectType,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pJVar2 = JsonSerializerInternalReader_CreateJToken(this,reader,contract,(MethodInfo *)0x0);
    return (Object *)pJVar2;
  }
  this_00 = JsonSerializerInternalReader_EnsureArrayContract
                      (this,objectType,contract,(MethodInfo *)0x0);
  handle = TypeRef__System__Collections__BitArray;
  if (existingValue != (Object *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    unaff_EBP = (MethodInfo *)&UNK_?;
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (objectType != pTVar3) {
      if (this_00 != (JsonArrayContract *)0x0) {
        wrappedList = JsonArrayContract::JsonArrayContract_CreateWrapper
                                (this_00,existingValue,(MethodInfo *)0x0);
        pOVar4 = JsonSerializerInternalReader_PopulateList
                           (this,wrappedList,(JsonReader *)this_00,reference,this_00,
                            (MethodInfo *)0x0);
        return pOVar4;
      }
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase *)func_?();
  iVar5 = 0;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_EBP);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = reference;
    (this_01->fields).state = iVar5;
    (this_01->fields).originalScale.x = (float)reader;
    (this_01->fields).originalScale.y = (float)this;
    if (iVar5 != 0) {
      pTVar3 = *(Type **)(iVar5 + 0xc);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateAndPopulateList_c__AnonStorey0____m__0_System__Collections__IList__bool_
                 ,
                 MethodInfo__System__Action<System::Collections::IList,_bool>__Action_System__Object__void__
                );
      pOVar4 = Json::Utilities::CollectionUtils::CollectionUtils_CreateAndPopulateList
                         (pTVar3,(Action_2_System_Collections_IList_Boolean_ *)this_02,
                          (MethodInfo *)0x0);
      return pOVar4;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}


/* Object CreateObject(JsonReader, Type, JsonContract, JsonProperty, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateObject
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   MethodInfo *method)

{
  reader_00 = reader;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MethodInfo *)0x0;
  pSStack_7 = (String *)0x0;
  func_?();
  puStack_4 = &stack0xffffffb4;
  JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
  pSStack_8 = (String *)0x0;
  if (reader != (JsonReader *)0x0) {
    iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
    pJStack_10 = contract;
    if (iVar9 == 4) {
      reader = (JsonReader *)objectType;
      do {
        piVar11 = (int *)(*(code *)(reader_00->klass->vtable).get_Value.method)();
        if (piVar11 == (int *)0x0) goto code_?;
        unaff_ESI = (JsonReader *)(**(code **)(*piVar11 + 0xd8))();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar12 = mscorlib.dll::System::String::String_Equals_3
                          ((String *)unaff_ESI,StringLiteral__ref,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar12 != 0) {
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          iVar9 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)
                            (reader_00,(reader_00->klass->vtable).get_Value.methodPtr);
          if ((iVar9 == 9) ||
             (iVar9 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)
                                (reader_00,(reader_00->klass->vtable).get_Value.methodPtr),
             iVar9 == 0xb)) {
            iVar9 = (*(code *)(reader_00->klass->vtable).get_Value.method)
                              (reader_00,(reader_00->klass->vtable).get_ValueType.methodPtr);
            if (iVar9 == 0) {
              unaff_ESI = (JsonReader *)0x0;
            }
            else {
              piVar11 = (int *)(*(code *)(reader_00->klass->vtable).get_Value.method)
                                        (reader_00,
                                         (reader_00->klass->vtable).get_ValueType.methodPtr);
              if (piVar11 == (int *)0x0) goto code_?;
              unaff_ESI = (JsonReader *)(**(code **)(*piVar11 + 0xd8))();
            }
            JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
            if (unaff_ESI == (JsonReader *)0x0) goto code_?;
            iVar9 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)
                              (reader_00,(reader_00->klass->vtable).get_Value.methodPtr);
            if (iVar9 != 4) {
              if (((this->fields)._._Serializer_k__BackingField == (JsonSerializer *)0x0) ||
                 (pJStack_13 = (JsonReader *)func_?(), pJStack_13 == (JsonReader *)0x0))
              goto code_?;
              pSVar14 = (String__Class *)pJStack_13->klass;
              uVar15 = 0;
              pJStack_10 = (JsonContract *)0x0;
              uVar16._0_1_ = (pSVar14->_1).rank;
              uVar16._1_1_ = (pSVar14->_1).minimumAlignment;
              pSStack_8 = (String *)(uint)uVar16;
              if (uVar16 == 0) goto code_?;
              goto code_?;
            }
          }
          else {
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            pOVar18 = (Object__Array *)func_?(TypeInfo__System__Object,1);
            func_?(pOVar18,0);
            func_?(pOVar18,StringLiteral__ref);
            func_?(0,StringLiteral__ref);
            pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                                (StringLiteral_JSON_reference__0__property_must,
                                 (IFormatProvider *)pCVar17,pOVar18,(MethodInfo *)0x0);
            pJVar20 = (JsonSchemaException *)
                      func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
            Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                      (pJVar20,pSVar19,(MethodInfo *)0x0);
            func_?(pJVar20,0,
                            MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateObject_Newtonsoft__Json__JsonReader__System__Type__Newtonsoft__Json__Serialization__JsonContract__Newtonsoft__Json__Serialization__JsonProperty__System__Object_
                           );
          }
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar18 = (Object__Array *)func_?();
          func_?(pOVar18);
          func_?(pOVar18,StringLiteral__ref);
          func_?();
          pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                              (StringLiteral_Additional_content_found_in_JSON,
                               (IFormatProvider *)pCVar17,pOVar18,(MethodInfo *)0x0);
          pJVar20 = (JsonSchemaException *)func_?();
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (pJVar20,pSVar19,(MethodInfo *)0x0);
          func_?();
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        bVar12 = mscorlib.dll::System::String::String_Equals_3
                          ((String *)unaff_ESI,StringLiteral__type,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar12 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar12 = mscorlib.dll::System::String::String_Equals_3
                            ((String *)unaff_ESI,StringLiteral__id,StringComparison__Enum_Ordinal,
                             (MethodInfo *)0x0);
          if (bVar12 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            bVar12 = mscorlib.dll::System::String::String_Equals_3
                              ((String *)unaff_ESI,StringLiteral__values,
                               StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
            if (bVar12 != 0) {
              JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
              pOVar21 = JsonSerializerInternalReader_CreateList
                                  (this,reader_00,(Type *)reader,pJStack_10,member,existingValue,
                                   pSStack_8,(MethodInfo *)0x0);
              JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
              goto code_?;
            }
            break;
          }
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          pSVar19 = (String *)
                    (*(code *)(reader_00->klass->vtable).get_Value.method)
                              (reader_00,(reader_00->klass->vtable).get_ValueType.methodPtr);
          if (pSVar19 == (String *)0x0) {
            pSStack_8 = pSVar19;
            JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          }
          else {
            piVar11 = (int *)(*(code *)(reader_00->klass->vtable).get_Value.method)
                                      (reader_00,(reader_00->klass->vtable).get_ValueType.methodPtr)
            ;
            if (piVar11 == (int *)0x0) goto code_?;
            pSStack_8 = (String *)(**(code **)(*piVar11 + 0xd8))();
            JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          }
        }
        else {
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          piVar11 = (int *)(*(code *)(reader_00->klass->vtable).get_Value.method)
                                    (reader_00,(reader_00->klass->vtable).get_ValueType.methodPtr);
          if (piVar11 == (int *)0x0) goto code_?;
          pJStack_13 = (JsonReader *)(**(code **)(*piVar11 + 0xd8))();
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          cVar22 = func_?();
          unaff_ESI = pJStack_13;
          if (cVar22 == '\0') {
            pJVar23 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar23 == (JsonSerializer *)0x0) goto code_?;
            iVar9 = (*(code *)(pJVar23->klass->vtable).get_TypeNameHandling.method)();
          }
          else {
            iVar9 = func_?();
          }
          if (iVar9 != 0) {
            Json::Utilities::ReflectionUtils::ReflectionUtils_SplitFullyQualifiedTypeName
                      ((String *)pJStack_13,(String **)&pMStack_6,&pSStack_7,(MethodInfo *)0x0);
            pJVar23 = (this->fields)._._Serializer_k__BackingField;
            uStack_1 = 0;
            if ((pJVar23 == (JsonSerializer *)0x0) ||
               (piVar11 = (int *)(*(code *)(pJVar23->klass->vtable).get_Binder.method)(),
               piVar11 == (int *)0x0)) goto code_?;
            unaff_ESI = (JsonReader *)(**(code **)(*piVar11 + 0xe0))(piVar11);
            uStack_1 = 0xffffffff;
            if (unaff_ESI == (JsonReader *)0x0) goto code_?;
            if ((reader != (JsonReader *)0x0) &&
               (cVar22 = (*reader->klass[1].vtable.Equals.methodPtr)
                                  (reader,unaff_ESI,reader->klass[1].vtable.Equals.method),
               cVar22 == '\0')) goto code_?;
            pJStack_10 = JsonSerializerInternalReader_GetContractSafe
                                   (this,(Type *)unaff_ESI,(MethodInfo *)0x0);
            reader = unaff_ESI;
          }
        }
code_?:
        iVar9 = (*(code *)(reader_00->klass->vtable).get_TokenType.method)
                          (reader_00,(reader_00->klass->vtable).get_Value.methodPtr);
      } while (iVar9 == 4);
    }
    else {
      reader = (JsonReader *)objectType;
    }
    bVar12 = JsonSerializerInternalReader_HasDefinedType(this,(Type *)reader,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      pJVar24 = JsonSerializerInternalReader_CreateJObject(this,reader_00,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return (Object *)pJVar24;
    }
    if (pJStack_10 != (JsonContract *)0x0) {
      contract_00 = (JsonDictionaryContract *)func_?();
      if (contract_00 != (JsonDictionaryContract *)0x0) {
        if (existingValue != (Object *)0x0) {
          dictionary = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                                 (contract_00,existingValue,(MethodInfo *)0x0);
          pOVar21 = JsonSerializerInternalReader_PopulateDictionary
                              (this,dictionary,reader_00,contract_00,pSStack_8,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pOVar21;
        }
        pOVar21 = JsonSerializerInternalReader_CreateAndPopulateDictionary
                            (this,reader_00,contract_00,pSStack_8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pOVar21;
      }
      contract_01 = (JsonObjectContract *)func_?();
      if (contract_01 != (JsonObjectContract *)0x0) {
        if (existingValue != (Object *)0x0) {
          pOVar21 = JsonSerializerInternalReader_PopulateObject
                              (this,existingValue,reader_00,contract_01,pSStack_8,(MethodInfo *)0x0
                              );
          *unaff_FS_OFFSET = uStack_3;
          return pOVar21;
        }
        pOVar21 = JsonSerializerInternalReader_CreateAndPopulateObject
                            (this,reader_00,contract_01,pSStack_8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pOVar21;
      }
      contract_02 = (JsonContract *)func_?();
      if ((contract_02 != (JsonContract *)0x0) && (iVar9 = func_?(), iVar9 == 4)) {
        iVar9 = func_?();
        unaff_ESI = reader;
        if (iVar9 == 0) goto code_?;
        pSVar19 = (String *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar12 = mscorlib.dll::System::String::String_Equals_3
                          (pSVar19,StringLiteral__value,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar12 != 0) {
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
          pOVar21 = JsonSerializerInternalReader_CreateValueInternal
                              (this,reader_00,(Type *)reader,contract_02,member,existingValue,
                               (MethodInfo *)0x0);
          JsonSerializerInternalReader_CheckedRead(this,reader_00,(MethodInfo *)0x0);
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return pOVar21;
        }
      }
      contract_03 = (JsonISerializableContract *)func_?();
      if (contract_03 != (JsonISerializableContract *)0x0) {
        pOVar21 = JsonSerializerInternalReader_CreateISerializable
                            (this,reader_00,contract_03,pSStack_8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return pOVar21;
      }
code_?:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar18 = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Cannot_deserialize_JSON_object_i,(IFormatProvider *)pCVar17
                           ,pOVar18,(MethodInfo *)0x0);
      pJVar20 = (JsonSchemaException *)func_?();
      Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                (pJVar20,pSVar19,(MethodInfo *)0x0);
      pMStack_6 = 
      MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateObject_Newtonsoft__Json__JsonReader__System__Type__Newtonsoft__Json__Serialization__JsonContract__Newtonsoft__Json__Serialization__JsonProperty__System__Object_
      ;
      pSStack_7 = (String *)0x0;
      func_?();
    }
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar18 = (Object__Array *)func_?();
    func_?();
    func_?();
    func_?();
    pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Could_not_resolve_type___0___to_,(IFormatProvider *)pCVar17,
                         pOVar18,(MethodInfo *)0x0);
    pJVar20 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar20,pSVar19,(MethodInfo *)0x0);
    pMStack_6 = 
    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateObject_Newtonsoft__Json__JsonReader__System__Type__Newtonsoft__Json__Serialization__JsonContract__Newtonsoft__Json__Serialization__JsonProperty__System__Object_
    ;
    pSStack_7 = (String *)0x0;
    func_?();
    pcVar25 = (code *)swi(3);
    pOVar21 = (Object *)(*pcVar25)();
    return pOVar21;
  }
code_?:
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar18 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?(unaff_ESI,0);
  uVar26 = func_?(0xf,unaff_ESI);
  func_?(pOVar18,0);
  func_?(pOVar18,uVar26);
  func_?(0,uVar26);
  func_?(reader,0);
  uVar26 = func_?(0xf,reader);
  func_?(pOVar18,0);
  func_?(pOVar18,uVar26);
  func_?(1,uVar26);
  pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Type_specified_in_JSON___0___is_,(IFormatProvider *)pCVar17,
                       pOVar18,(MethodInfo *)0x0);
  pJVar20 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar20,pSVar19,(MethodInfo *)0x0);
  func_?(pJVar20,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateObject_Newtonsoft__Json__JsonReader__System__Type__Newtonsoft__Json__Serialization__JsonContract__Newtonsoft__Json__Serialization__JsonProperty__System__Object_
                 );
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar18 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar18,0);
  func_?(pOVar18,pJStack_13);
  func_?(0,pJStack_13);
  pSVar19 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Type_specified_in_JSON___0___was,(IFormatProvider *)pCVar17,
                       pOVar18,(MethodInfo *)0x0);
  pJVar20 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar20,pSVar19,(MethodInfo *)0x0);
  func_?(pJVar20);
  return (Object *)&UNK_?;
  while (uVar15 = uVar15 + 1, uVar15 < uVar16) {
code_?:
    if (pSVar14->interfaceOffsets[uVar15].interfaceType ==
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver) {
      ppMVar27 = &(&(pSVar14->vtable).Equals)[pSVar14->interfaceOffsets[uVar15].offset].method;
      goto code_?;
    }
  }
code_?:
  ppMVar27 = (MethodInfo **)func_?();
code_?:
  pOVar21 = (Object *)(*(code *)*ppMVar27)(pJStack_13);
  *unaff_FS_OFFSET = uStack_3;
  return pOVar21;
}


/* Object CreateObjectFromNonDefaultConstructor(JsonReader, JsonObjectContract, ConstructorInfo,
   String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonObjectContract *contract,ConstructorInfo *constructorInfo,String *id,
                   MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)constructorInfo,StringLiteral_constructorInfo,(MethodInfo *)0x0);
  if ((contract != (JsonObjectContract *)0x0) &&
     (pIVar5 = JsonSerializerInternalReader_ResolvePropertyAndConstructorValues
                         (this,contract,reader,(contract->fields)._._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0), constructorInfo != (ConstructorInfo *)0x0)) {
    source = (IEnumerable_1_System_Object_ *)
             (*(code *)(constructorInfo->klass->vtable).__unknown_6.method)();
    if (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
        __f__am_cache0 ==
        (Func_2_System_Reflection_ParameterInfo_System_Reflection_ParameterInfo_ *)0x0) {
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateObjectFromNonDefaultConstructor_m__0_System__Reflection__ParameterInfo_
                 ,
                 MethodInfo__System__Func<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
      __f__am_cache0 =
           (Func_2_System_Reflection_ParameterInfo_System_Reflection_ParameterInfo_ *)pUVar6;
    }
    keySelector = (Func_2_Object_Object_ *)
                  TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->
                  static_fields->__f__am_cache0;
    if (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
        __f__am_cache1 == (Func_2_System_Reflection_ParameterInfo_Object_ *)0x0) {
      pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar6,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateObjectFromNonDefaultConstructor_m__1_System__Reflection__ParameterInfo_
                 ,
                 MethodInfo__System__Func<System::Reflection::ParameterInfo,_System::Object>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
      __f__am_cache1 = (Func_2_System_Reflection_ParameterInfo_Object_ *)pUVar6;
    }
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                          (source,keySelector,
                           (Func_2_Object_Boolean_ *)
                           TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->
                           static_fields->__f__am_cache1,
                           System__Collections__Generic__Dictionary<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo,_System::Object>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Object>_
                          );
    this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
              );
    if (pIVar5 != (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)0x0) {
      piVar7 = (int *)func_?();
      uStack_1 = 0;
      uStack_2 = 0;
      while (piVar7 != (int *)0x0) {
        cVar8 = func_?();
        iVar9 = 0;
        if (cVar8 == '\0') {
          iVar10 = 0xfb;
          uStack_1 = 0xff;
          uStack_2 = 0xffffff;
          if (piVar7 != (int *)0x0) {
            func_?();
          }
          if (iVar10 == 0xfb) {
            iVar9 = -1;
          }
          if (source_00 == (Dictionary_2_System_Object_System_Boolean_ *)0x0) break;
          source_01 = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)func_?()
          ;
          parameters = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                                 (source_01,
                                  System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
                                 );
          if (constructorInfo == (ConstructorInfo *)0x0) break;
          pOVar11 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                              (constructorInfo,(Object__Array *)parameters,(MethodInfo *)0x0);
          if (id != (String *)0x0) {
            pJVar12 = (this->fields)._._Serializer_k__BackingField;
            if ((pJVar12 == (JsonSerializer *)0x0) ||
               (iVar10 = (*(code *)(pJVar12->klass->vtable).get_ReferenceResolver.method)(),
               iVar10 == 0)) break;
            func_?();
          }
          pJVar12 = (this->fields)._._Serializer_k__BackingField;
          if (((pJVar12 != (JsonSerializer *)0x0) &&
              (SVar13 = (StreamingContext)(*(code *)(pJVar12->klass->vtable).get_Context.method)(),
              contract != (JsonObjectContract *)0x0)) &&
             (JsonContract::JsonContract_InvokeOnDeserializing
                        ((JsonContract *)contract,pOVar11,SVar13,(MethodInfo *)0x0),
             this_00 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)) {
            piVar7 = (int *)func_?();
            uStack_1 = 2;
            uStack_2 = 0;
            goto code_?;
          }
          break;
        }
        uVar14 = 0;
        uVar15 = *(ushort *)(*piVar7 + 0xb6);
        if (uVar15 != 0) {
          iVar9 = *(int *)(*piVar7 + 0x58);
          do {
            if (*(IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object___Class
                  **)(iVar9 + (uint)uVar14 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
               ) {
              puVar16 = (undefined4 *)
                        (*piVar7 + (*(int *)(iVar9 + 4 + (uint)uVar14 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar15);
        }
        puVar16 = (undefined4 *)func_?();
code_?:
        (*(code *)*puVar16)();
        if (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
            __f__am_cache2 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_String_
             *)0x0) {
          pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar6,(Object *)0x0,
                     MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___CreateObjectFromNonDefaultConstructor_m__2_System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_
                     ,
                     MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>,_System::String>__Func_System__Object__void__
                    );
          TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
          __f__am_cache2 =
               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_String_
                *)pUVar6;
        }
        valueSelector =
             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ *
             )TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields
              ->__f__am_cache2;
        iVar9 = func_?();
        if (iVar9 == 0) break;
        Json::Utilities::StringUtils::StringUtils_ForgivingCaseSensitiveFind_2
                  ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source_00,
                   valueSelector,*(String **)(iVar9 + 0x14),
                   System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>,_System::String>__System__String_
                  );
        iVar9 = func_?();
        if (iVar9 == 0) {
          if (this_00 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) break;
          func_?();
        }
        else {
          func_?();
          if (source_00 == (Dictionary_2_System_Object_System_Boolean_ *)0x0) break;
          func_?();
        }
      }
    }
  }
  goto code_?;
code_?:
  iVar10 = iVar9;
  if (piVar7 != (int *)0x0) {
    uVar14 = 0;
    uVar15 = *(ushort *)(*piVar7 + 0xb6);
    if (uVar15 != 0) {
      iVar9 = *(int *)(*piVar7 + 0x58);
      do {
        if (*(IEnumerator__Class **)(iVar9 + (uint)uVar14 * 8) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar16 = (undefined4 *)(*piVar7 + 200 + *(int *)(iVar9 + 4 + (uint)uVar14 * 8) * 8);
          goto code_?;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    puVar16 = (undefined4 *)func_?();
code_?:
    cVar8 = (*(code *)*puVar16)();
    if (cVar8 == '\0') {
      *(undefined4 *)(&stack0xffffff98 + iVar10 * 4) = 0x30a;
      uStack_1 = 0xff;
      uStack_2 = 0xffffff;
      if (piVar7 != (int *)0x0) {
        func_?();
      }
      pJVar12 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar12 != (JsonSerializer *)0x0) &&
         (SVar13 = (StreamingContext)(*(code *)(pJVar12->klass->vtable).get_Context.method)(),
         contract != (JsonObjectContract *)0x0)) {
        JsonContract::JsonContract_InvokeOnDeserialized
                  ((JsonContract *)contract,pOVar11,SVar13,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return pOVar11;
      }
      goto code_?;
    }
    uVar14 = 0;
    uVar15 = *(ushort *)(*piVar7 + 0xb6);
    if (uVar15 != 0) {
      iVar9 = *(int *)(*piVar7 + 0x58);
      do {
        if (*(IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object___Class
              **)(iVar9 + (uint)uVar14 * 8) ==
            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
           ) {
          puVar16 = (undefined4 *)(*piVar7 + 0xc0 + *(int *)(iVar9 + 4 + (uint)uVar14 * 8) * 8);
          goto code_?;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
    puVar16 = (undefined4 *)func_?();
code_?:
    (*(code *)*puVar16)();
    iVar17 = func_?();
    list = (Object *)func_?();
    property = (JsonProperty *)func_?();
    pOVar18 = (Object *)func_?();
    bVar19 = JsonSerializerInternalReader_ShouldSetPropertyValue
                      (this,property,pOVar18,(MethodInfo *)0x0);
    iVar9 = iVar10;
    if (bVar19 == 0) {
      if (iVar17 == 0) goto code_?;
      if ((*(char *)(iVar17 + 0x2a) == '\0') && (list != (Object *)0x0)) {
        if (((this->fields)._._Serializer_k__BackingField == (JsonSerializer *)0x0) ||
           (iVar20 = func_?(), iVar20 == 0)) goto code_?;
        func_?();
        iVar20 = func_?();
        if (iVar20 == 0) {
          iVar20 = func_?();
          if (iVar20 != 0) {
            this_01 = (JsonDictionaryContract *)func_?();
            if (*(int *)(iVar17 + 0x18) == 0) goto code_?;
            pOVar18 = (Object *)func_?();
            if (pOVar18 != (Object *)0x0) {
              if (this_01 == (JsonDictionaryContract *)0x0) goto code_?;
              pIVar21 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                                  (this_01,pOVar18,(MethodInfo *)0x0);
              pIVar22 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                                  (this_01,list,(MethodInfo *)0x0);
              if (pIVar22 == (IWrappedDictionary *)0x0) goto code_?;
              iVar9 = func_?();
              uStack_1 = 5;
              while( true ) {
                if (iVar9 == 0) goto code_?;
                cVar8 = func_?();
                if (cVar8 == '\0') break;
                func_?();
                func_?();
                func_?();
                func_?();
                if (pIVar21 == (IWrappedDictionary *)0x0) goto code_?;
                func_?();
              }
              iVar17 = iVar10 + 1;
              uStack_1 = 2;
              *(undefined4 *)(&stack0xffffff94 + iVar17 * 4) = 0x2ea;
              iVar9 = func_?();
              if (iVar9 != 0) {
                func_?();
              }
              iVar9 = iVar17;
              if (((iVar17 != -1) && (*(int *)(&stack0xffffff94 + iVar17 * 4) == 0x2ea)) &&
                 (iVar9 = iVar10, iVar17 < 0)) {
                iVar9 = iVar17;
              }
            }
          }
        }
        else {
          this_02 = (JsonArrayContract *)func_?();
          if (*(int *)(iVar17 + 0x18) == 0) goto code_?;
          pOVar18 = (Object *)func_?();
          if (pOVar18 != (Object *)0x0) {
            if (this_02 == (JsonArrayContract *)0x0) goto code_?;
            pIVar23 = JsonArrayContract::JsonArrayContract_CreateWrapper
                                (this_02,pOVar18,(MethodInfo *)0x0);
            pIVar24 = JsonArrayContract::JsonArrayContract_CreateWrapper
                                (this_02,list,(MethodInfo *)0x0);
            if (pIVar24 == (IWrappedCollection *)0x0) goto code_?;
            iVar9 = func_?();
            uStack_1 = 3;
            while( true ) {
              if (iVar9 == 0) goto code_?;
              cVar8 = func_?();
              if (cVar8 == '\0') break;
              func_?();
              if (pIVar23 == (IWrappedCollection *)0x0) goto code_?;
              func_?();
            }
            iVar9 = iVar10 + 1;
            uStack_1 = 2;
            *(undefined4 *)(&stack0xffffff94 + iVar9 * 4) = 0x24a;
            iVar17 = func_?();
            if (iVar17 != 0) {
              func_?();
            }
            if (((iVar9 != -1) && (*(int *)(&stack0xffffff94 + iVar9 * 4) == 0x24a)) &&
               (-1 < iVar9)) {
              iVar9 = iVar10;
            }
          }
        }
      }
    }
    else {
      if ((iVar17 == 0) || (*(int *)(iVar17 + 0x18) == 0)) goto code_?;
      func_?();
    }
    goto code_?;
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  pOVar11 = (Object *)(*pcVar25)();
  return pOVar11;
}


/* Object CreateValueInternal(JsonReader, Type, JsonContract, JsonProperty, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueInternal
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  contract_00 = contract;
  if (contract != (JsonContract *)0x0) {
    bVar1 = (TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract->_1).naturalAligment;
    if (((contract->klass->_1).naturalAligment < bVar1) ||
       ((contract->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract)) {
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
      pJVar4 = JsonSerializerInternalReader_CreateJToken(this,reader,contract,(MethodInfo *)0x0);
      return (Object *)pJVar4;
    }
  }
code_?:
  if (reader != (JsonReader *)0x0) {
    uVar5 = (*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    pIVar6 = TypeRef__System__DBNull;
    switch(uVar5) {
    case 1:
      pOVar7 = JsonSerializerInternalReader_CreateObject
                          (this,reader,objectType,contract_00,member,existingValue,(MethodInfo *)0x0
                          );
      return pOVar7;
    case 2:
      pOVar7 = JsonSerializerInternalReader_CreateList
                          (this,reader,objectType,contract_00,member,existingValue,(String *)0x0,
                           (MethodInfo *)0x0);
      return pOVar7;
    case 3:
    case 0xf:
      piVar8 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)(reader);
      if (piVar8 != (int *)0x0) {
        pOVar7 = (Object *)(**(code **)(*piVar8 + 0xd8))(piVar8);
        return pOVar7;
      }
      break;
    default:
      goto code_?;
    case 5:
      goto code_?;
    case 6:
      uVar5 = func_?(8);
      this_00 = (JRaw *)func_?(TypeInfo__Newtonsoft__Json__Linq__JRaw);
      pMVar9 = (MethodInfo *)0x0;
      pOVar7 = (Object *)func_?(uVar5,TypeInfo__System__String);
      Json::Linq::JRaw::JRaw__ctor_1(this_00,pOVar7,pMVar9);
      return (Object *)this_00;
    case 7:
    case 8:
    case 10:
    case 0x10:
    case 0x11:
      pOVar7 = (Object *)(*(code *)(reader->klass->vtable).get_Value.method)(reader);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar7 = JsonSerializerInternalReader_EnsureType
                          (this,pOVar7,pCVar10,objectType,(MethodInfo *)0x0);
      return pOVar7;
    case 9:
      uVar5 = func_?(8);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar9 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(uVar5,TypeInfo__System__String);
      bVar12 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar11,pMVar9);
      if (((bVar12 != 0) && (objectType != (Type *)0x0)) &&
         (bVar12 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                            (objectType,(MethodInfo *)0x0), bVar12 != 0)) {
        return (Object *)0x0;
      }
      pIVar6 = TypeRef__System__Byte;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      pOVar7 = (Object *)func_?();
      if (objectType != pTVar13) {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        pOVar7 = JsonSerializerInternalReader_EnsureType
                            ((JsonSerializerInternalReader *)0x0,pOVar7,pCVar10,objectType,
                             (MethodInfo *)0x0);
        return pOVar7;
      }
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar11 = (String *)func_?();
      pBVar14 = mscorlib.dll::System::Convert::Convert_FromBase64String(pSVar11,(MethodInfo *)0x0);
      return (Object *)pBVar14;
    case 0xb:
    case 0xc:
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)pIVar6,(MethodInfo *)0x0);
      if (objectType != pTVar13) {
        pOVar7 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        pOVar7 = JsonSerializerInternalReader_EnsureType
                            (this,pOVar7,pCVar10,objectType,(MethodInfo *)0x0);
        return pOVar7;
      }
      if ((((uint)(TypeInfo__System__DBNull->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__DBNull->_1).cctor_started == 0)) {
        func_?();
      }
      return (Object *)TypeInfo__System__DBNull->static_fields->Value;
    }
  }
  func_?();
  goto code_?;
code_?:
  cVar15 = (*(code *)(reader->klass->vtable).__unknown.method)(reader);
  if (cVar15 == '\0') {
code_?:
    pJVar16 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar16,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
    func_?();
code_?:
    contract = (JsonContract *)(*(code *)(reader->klass->vtable).get_TokenType.method)(reader);
    pOVar7 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&contract);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar11 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Unexpected_token_while_deseriali,pOVar7,
                         (MethodInfo *)0x0);
    pJVar16 = (JsonSchemaException *)func_?();
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar16,pSVar11,(MethodInfo *)0x0);
    cVar15 = (undefined1 *)0xffffffe3 < &stack0xfffffff0;
    uVar17 = func_?();
    puVar18 = (uint *)((int)((ulonglong)uVar17 >> 0x20) + 0x10);
    uVar19 = *puVar18;
    *puVar18 = uVar19 << 0x11 | (uint)(CONCAT14(cVar15 == '\0',uVar19) >> 0x10);
    return (Object *)uVar17;
  }
  goto code_?;
}


/* Object CreateValueNonProperty(JsonReader, Type, JsonContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueNonProperty
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,MethodInfo *method)

{
  if (contract != (JsonContract *)0x0) {
    pJVar1 = (contract->fields)._Converter_k__BackingField;
    if (pJVar1 == (JsonConverter *)0x0) {
      this_00 = (this->fields)._._Serializer_k__BackingField;
      if (this_00 == (JsonSerializer *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pJVar1 = JsonSerializer::JsonSerializer_GetMatchingConverter
                         (this_00,(contract->fields)._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0);
      if ((pJVar1 == (JsonConverter *)0x0) &&
         ((pJVar1 = (contract->fields)._InternalConverter_k__BackingField,
          pJVar1 == (JsonConverter *)0x0 || (pJVar1 == (JsonConverter *)0x0))))
      goto code_?;
    }
    cVar4 = (*(code *)(pJVar1->klass->vtable).get_CanRead.method)
                      (pJVar1,(pJVar1->klass->vtable).get_CanWrite.methodPtr);
    if (cVar4 != '\0') {
      pJVar5 = JsonSerializerInternalReader_GetInternalSerializer(this,(MethodInfo *)0x0);
      pOVar3 = (Object *)
               (*(code *)(pJVar1->klass->vtable).__unknown_1.method)
                         (pJVar1,reader,objectType,0,pJVar5,
                          (pJVar1->klass->vtable).__unknown_2.methodPtr);
      return pOVar3;
    }
  }
code_?:
  pOVar3 = JsonSerializerInternalReader_CreateValueInternal
                     (this,reader,objectType,contract,(JsonProperty *)0x0,(Object *)0x0,
                      (MethodInfo *)0x0);
  return pOVar3;
}


/* Object CreateValueProperty(JsonReader, JsonProperty, Object, Boolean, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueProperty
                   (JsonSerializerInternalReader *this,JsonReader *reader,JsonProperty *property,
                   Object *target,bool gottenCurrentValue,Object *currentValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property == (JsonProperty *)0x0) goto code_?;
  pTVar1 = (property->fields)._PropertyType_k__BackingField;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (currentValue == (Object *)0x0) {
    contract = JsonSerializerInternalReader_GetContractSafe(this,pTVar1,(MethodInfo *)0x0);
  }
  else {
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
    iVar3 = (*(code *)(pJVar2->klass->vtable).get_ContractResolver.method)
                      (pJVar2,(pJVar2->klass->vtable).set_ContractResolver.methodPtr);
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(currentValue,(MethodInfo *)0x0);
    if (iVar3 == 0) goto code_?;
    contract = (JsonContract *)
               func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar3,
                               pTVar1);
  }
  pJVar4 = (property->fields)._MemberConverter_k__BackingField;
  pTVar1 = (property->fields)._PropertyType_k__BackingField;
  if (pJVar4 == (JsonConverter *)0x0) {
    if (contract == (JsonContract *)0x0) goto code_?;
    pJVar4 = (contract->fields)._Converter_k__BackingField;
    if (pJVar4 == (JsonConverter *)0x0) {
      pJVar2 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
      pJVar4 = JsonSerializer::JsonSerializer_GetMatchingConverter
                         (pJVar2,(contract->fields)._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0);
      if ((pJVar4 == (JsonConverter *)0x0) &&
         (pJVar4 = (contract->fields)._InternalConverter_k__BackingField,
         pJVar4 == (JsonConverter *)0x0)) goto code_?;
    }
  }
  cVar5 = (*(code *)(pJVar4->klass->vtable).get_CanRead.method)
                    (pJVar4,(pJVar4->klass->vtable).get_CanWrite.methodPtr);
  if (cVar5 != '\0') {
    if (((gottenCurrentValue == 0) && (target != (Object *)0x0)) &&
       ((property->fields)._Readable_k__BackingField != 0)) {
      pIVar6 = (property->fields)._ValueProvider_k__BackingField;
      if (pIVar6 == (IValueProvider *)0x0) {
code_?:
        func_?(0);
        pcVar7 = (code *)swi(3);
        pOVar8 = (Object *)(*pcVar7)();
        return pOVar8;
      }
      currentValue = (Object *)
                     func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,
                                     pIVar6,target);
    }
    pJVar9 = JsonSerializerInternalReader_GetInternalSerializer(this,(MethodInfo *)0x0);
    pOVar8 = (Object *)
             (*(code *)(pJVar4->klass->vtable).__unknown_1.method)
                       (pJVar4,reader,pTVar1,currentValue,pJVar9,
                        (pJVar4->klass->vtable).__unknown_2.methodPtr);
    return pOVar8;
  }
code_?:
  pOVar8 = JsonSerializerInternalReader_CreateValueInternal
                     (this,reader,pTVar1,contract,property,currentValue,(MethodInfo *)0x0);
  return pOVar8;
}


/* Object Deserialize(JsonReader, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_Deserialize
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar1 == 0) {
      bVar2 = JsonSerializerInternalReader_ReadForType
                        (this,reader,objectType,(JsonConverter *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return (Object *)0x0;
      }
    }
    contract = JsonSerializerInternalReader_GetContractSafe(this,objectType,(MethodInfo *)0x0);
    pOVar3 = JsonSerializerInternalReader_CreateValueNonProperty
                       (this,reader,objectType,contract,(MethodInfo *)0x0);
    return pOVar3;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,StringLiteral_reader,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Deserialize_Newtonsoft__Json__JsonReader__System__Type_
                 );
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* JsonArrayContract EnsureArrayContract(Type, JsonContract) */

JsonArrayContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_EnsureArrayContract
          (JsonSerializerInternalReader *this,Type *objectType,JsonContract *contract,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (contract == (JsonContract *)0x0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    pOVar2 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(pOVar2,0);
    func_?(pOVar2,objectType);
    func_?(0,objectType);
    pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (StringLiteral_Could_not_resolve_type___0___to_,(IFormatProvider *)pCVar1,
                        pOVar2,(MethodInfo *)0x0);
    pJVar4 = (JsonSchemaException *)
             func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar4,pSVar3,(MethodInfo *)0x0);
    func_?(pJVar4);
  }
  else {
    bVar5 = (TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).naturalAligment;
    if (((contract->klass->_1).naturalAligment < bVar5) ||
       ((contract->klass->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pJVar7 = (JsonArrayContract *)0x0;
    if (bVar6) {
      pJVar7 = (JsonArrayContract *)contract;
    }
    if (pJVar7 != (JsonArrayContract *)0x0) {
      return pJVar7;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar2 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar2,0);
  func_?(pOVar2,objectType);
  func_?(0,objectType);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Cannot_deserialize_JSON_array_in,(IFormatProvider *)pCVar1,
                      pOVar2,(MethodInfo *)0x0);
  pJVar4 = (JsonSchemaException *)
           func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar4,pSVar3,(MethodInfo *)0x0);
  func_?(pJVar4);
  pcVar8 = (code *)swi(3);
  pJVar7 = (JsonArrayContract *)(*pcVar8)();
  return pJVar7;
}


/* Object EnsureType(Object, CultureInfo, Type) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_EnsureType
                   (JsonSerializerInternalReader *this,Object *value,CultureInfo *culture,
                   Type *targetType,MethodInfo *method)

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
  if (targetType != (Type *)0x0) {
    pTVar4 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetObjectType
                       (value,(MethodInfo *)0x0);
    if (pTVar4 == targetType) {
      *unaff_FS_OFFSET = uStack_3;
      return value;
    }
    uStack_1 = 0;
    if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar5 = Json::Utilities::ConvertUtils::ConvertUtils_ConvertOrCast
                       (value,culture,targetType,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return pOVar5;
  }
  *unaff_FS_OFFSET = uStack_3;
  return value;
}


/* String FormatValueForPrint(Object) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_FormatValueForPrint
                   (JsonSerializerInternalReader *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value == (Object *)0x0) {
    return StringLiteral__null_;
  }
  pSVar1 = (String__Class *)value->klass;
  pOVar2 = (Object *)0x0;
  if (pSVar1 == TypeInfo__System__String) {
    pOVar2 = value;
  }
  if (pOVar2 == (Object *)0x0) {
    pSVar3 = (String *)
             (*(code *)(pSVar1->vtable).ToString.method)
                       (value,(pSVar1->vtable).GetTypeCode.methodPtr);
    return pSVar3;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_1
                     ((Object *)::StringLiteral__,value,(Object *)::StringLiteral__,
                      (MethodInfo *)0x0);
  return pSVar3;
}


/* JsonContract GetContractSafe(Type) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetContractSafe
          (JsonSerializerInternalReader *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type != (Type *)0x0) {
    pJVar1 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar1 != (JsonSerializer *)0x0) {
      iVar2 = (*(code *)(pJVar1->klass->vtable).get_ContractResolver.method)
                        (pJVar1,(pJVar1->klass->vtable).set_ContractResolver.methodPtr);
      if (iVar2 != 0) {
        pJVar3 = (JsonContract *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                 iVar2,type);
        return pJVar3;
      }
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pJVar3 = (JsonContract *)(*pcVar4)();
    return pJVar3;
  }
  return (JsonContract *)0x0;
}


/* JsonContract GetContractSafe(Type, Object) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetContractSafe_1
          (JsonSerializerInternalReader *this,Type *type,Object *value,MethodInfo *method)

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
  pJVar4 = JsonSerializerInternalReader_GetContractSafe(this,type,(MethodInfo *)0x0);
  return pJVar4;
}


/* JsonConverter GetConverter(JsonContract, JsonConverter) */

JsonConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetConverter
          (JsonSerializerInternalReader *this,JsonContract *contract,JsonConverter *memberConverter,
          MethodInfo *method)

{
  if (memberConverter == (JsonConverter *)0x0) {
    if (contract == (JsonContract *)0x0) {
      return (JsonConverter *)0x0;
    }
    memberConverter = (contract->fields)._Converter_k__BackingField;
    if (memberConverter == (JsonConverter *)0x0) {
      this_00 = (this->fields)._._Serializer_k__BackingField;
      if (this_00 == (JsonSerializer *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        pJVar2 = (JsonConverter *)(*pcVar1)();
        return pJVar2;
      }
      memberConverter =
           JsonSerializer::JsonSerializer_GetMatchingConverter
                     (this_00,(contract->fields)._UnderlyingType_k__BackingField,(MethodInfo *)0x0);
      if ((memberConverter == (JsonConverter *)0x0) &&
         (memberConverter = (contract->fields)._InternalConverter_k__BackingField,
         memberConverter == (JsonConverter *)0x0)) {
        return (JsonConverter *)0x0;
      }
    }
  }
  return memberConverter;
}


/* JsonFormatterConverter GetFormatterConverter() */

JsonFormatterConverter *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetFormatterConverter
          (JsonSerializerInternalReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ScaleAnimationBase *)(this->fields)._formatterConverter;
  if (this_01 == (ScaleAnimationBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._internalSerializer;
    if (this_00 == (JsonSerializerProxy *)0x0) {
      this_00 = (JsonSerializerProxy *)
                func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
      JsonSerializerProxy::JsonSerializerProxy__ctor(this_00,this,(MethodInfo *)0x0);
      (this->fields)._internalSerializer = this_00;
    }
    this_01 = (ScaleAnimationBase *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,unaff_ESI);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this_00,StringLiteral_serializer,(MethodInfo *)0x0);
    (this_01->fields)._._._._.m_CachedPtr = this_00;
    (this->fields)._formatterConverter = (JsonFormatterConverter *)this_01;
  }
  return (JsonFormatterConverter *)this_01;
}


/* JsonSerializerProxy GetInternalSerializer() */

JsonSerializerProxy *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetInternalSerializer
          (JsonSerializerInternalReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._internalSerializer;
  if (this_00 == (JsonSerializerProxy *)0x0) {
    this_00 = (JsonSerializerProxy *)
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerProxy);
    JsonSerializerProxy::JsonSerializerProxy__ctor(this_00,this,(MethodInfo *)0x0);
    (this->fields)._internalSerializer = this_00;
  }
  return this_00;
}


/* Void HandleError(JsonReader, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_HandleError
               (JsonSerializerInternalReader *this,JsonReader *reader,int32_t initialDepth,
               MethodInfo *method)

{
  JsonSerializerInternalBase::JsonSerializerInternalBase_ClearErrorContext
            ((JsonSerializerInternalBase *)this,(MethodInfo *)0x0);
  if (reader != (JsonReader *)0x0) {
    JsonReader::JsonReader_Skip(reader,(MethodInfo *)0x0);
    while( true ) {
      iVar1 = (*(code *)(reader->klass->vtable).get_Depth.method)(reader);
      if (iVar1 <= initialDepth + 1) break;
      (*(code *)(reader->klass->vtable).__unknown.method)(reader);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean HasDefinedType(Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_HasDefinedType
               (JsonSerializerInternalReader *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__System__Object;
  if (type != (Type *)0x0) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
    pIVar1 = TypeRef__Newtonsoft__Json__Linq__JToken;
    if (type != pTVar2) {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Type *)0x0) {
        cVar3 = (*(code *)(pTVar2->klass->vtable).IsAssignableFrom.method)(pTVar2,type);
        return cVar3 == '\0';
      }
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  return 0;
}


/* Void Populate(JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_Populate
               (JsonSerializerInternalReader *this,JsonReader *reader,Object *target,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = target;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  if (this_00 == (Object *)0x0) {
code_?:
    func_?(0);
code_?:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar2 = (Object__Array *)func_?(TypeInfo__System__Object,1);
    func_?(reader,0);
    target = (Object *)func_?(7,reader);
    uVar3 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&target);
    func_?(pOVar2,0);
    func_?(pOVar2,uVar3);
    func_?(0,uVar3);
    pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_initial_token___0___w,(IFormatProvider *)pCVar1,
                         pOVar2,(MethodInfo *)0x0);
    pJVar5 = (JsonSchemaException *)
              func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
    Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
              (pJVar5,pSVar4,(MethodInfo *)0x0);
    func_?();
  }
  else {
    pTVar6 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
    pJVar7 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar7 == (JsonSerializer *)0x0) goto code_?;
    pJVar8 = (JsonSerializationException__Class *)
              (pJVar7->klass->vtable).set_ContractResolver.methodPtr;
    iVar9 = (*(code *)(pJVar7->klass->vtable).get_ContractResolver.method)(pJVar7,pJVar8);
    if (iVar9 == 0) goto code_?;
    piVar10 = (int *)func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,
                                    iVar9,pTVar6);
    if (reader == (JsonReader *)0x0) goto code_?;
    iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar9 == 0) {
      (*(code *)(reader->klass->vtable).__unknown.method)
                (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    }
    iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar9 == 2) {
      if (piVar10 != (int *)0x0) {
        bVar11 = (TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).naturalAligment;
        if ((*(byte *)(*piVar10 + 0xb8) < bVar11) ||
           (*(JsonArrayContract__Class **)(*(int *)(*piVar10 + 100) + -4 + (uint)bVar11 * 4) !=
            TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        piVar13 = (int *)0x0;
        if (bVar12) {
          piVar13 = piVar10;
        }
        if (piVar13 != (int *)0x0) {
          wrappedList = Json::Utilities::CollectionUtils::CollectionUtils_CreateCollectionWrapper
                                  (this_00,(MethodInfo *)0x0);
          pMVar14 = (MethodInfo *)0x0;
          contract_01 = (JsonArrayContract *)
                        func_?(piVar10,
                                        TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract
                                       );
          JsonSerializerInternalReader_PopulateList
                    (this,wrappedList,reader,(String *)0x0,contract_01,pMVar14);
          return;
        }
      }
      goto code_?;
    }
    iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar9 != 1) goto code_?;
    JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
    target = (Object *)0x0;
    iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar9 == 4) {
      piVar13 = (int *)(*(code *)(reader->klass->vtable).get_Value.method)
                                (reader,(reader->klass->vtable).get_ValueType.methodPtr);
      if (piVar13 == (int *)0x0) goto code_?;
      pSVar4 = (String *)(**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar15 = mscorlib.dll::System::String::String_Equals_3
                        (pSVar4,StringLiteral__id,StringComparison__Enum_Ordinal,(MethodInfo *)0x0)
      ;
      if (bVar15 != 0) {
        JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
        iVar9 = (*(code *)(reader->klass->vtable).get_Value.method)
                          (reader,(reader->klass->vtable).get_ValueType.methodPtr);
        if (iVar9 == 0) {
          target = (Object *)0x0;
        }
        else {
          iVar9 = func_?(8,reader);
          if (iVar9 == 0) goto code_?;
          target = (Object *)func_?(3,iVar9);
        }
        JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
      }
    }
    iVar9 = func_?(piVar10,TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract
                           );
    if (iVar9 != 0) {
      dictionary = Json::Utilities::CollectionUtils::CollectionUtils_CreateDictionaryWrapper
                             (this_00,(MethodInfo *)0x0);
      pSVar4 = (String *)target;
      contract_00 = (JsonDictionaryContract *)
                    func_?(piVar10,
                                    TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract
                                   );
      JsonSerializerInternalReader_PopulateDictionary
                ((JsonSerializerInternalReader *)0x0,dictionary,reader,contract_00,pSVar4,
                 (MethodInfo *)0x0);
      return;
    }
    iVar9 = func_?(piVar10,TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    if (iVar9 != 0) {
      pMVar14 = (MethodInfo *)0x0;
      pSVar4 = (String *)target;
      contract = (JsonObjectContract *)
                 func_?(piVar10,
                                 TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
      JsonSerializerInternalReader_PopulateObject(this,this_00,reader,contract,pSVar4,pMVar14);
      return;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar16 = TypeInfo__System__Object;
  pOVar2 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar2,0);
  func_?(pOVar2,pOVar16);
  func_?(0);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_populate_JSON_object_onto,(IFormatProvider *)pCVar1,
                       pOVar2,(MethodInfo *)0x0);
  pJVar8 = TypeInfo__Newtonsoft__Json__JsonSerializationException;
  pJVar5 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar5,pSVar4,(MethodInfo *)0x0);
  in_stack_17 =
       MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Populate_Newtonsoft__Json__JsonReader__System__Object_
  ;
  method = (MethodInfo *)0x0;
  target = (Object *)pJVar5;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar2 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar2,0);
  func_?(pOVar2,pJVar8);
  func_?(0,pJVar8);
  pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Cannot_populate_JSON_array_onto_,(IFormatProvider *)pCVar1,
                       pOVar2,(MethodInfo *)0x0);
  pJVar5 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar5,pSVar4,(MethodInfo *)0x0);
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Object PopulateDictionary(IWrappedDictionary, JsonReader, JsonDictionaryContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_PopulateDictionary
                   (JsonSerializerInternalReader *this,IWrappedDictionary *dictionary,
                   JsonReader *reader,JsonDictionaryContract *contract,String *id,MethodInfo *method
                   )

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (id != (String *)0x0) {
    pJVar5 = (this->fields)._._Serializer_k__BackingField;
    if (((pJVar5 == (JsonSerializer *)0x0) ||
        (iVar6 = (*(code *)(pJVar5->klass->vtable).get_ReferenceResolver.method)
                           (pJVar5,(pJVar5->klass->vtable).set_ReferenceResolver.methodPtr),
        dictionary == (IWrappedDictionary *)0x0)) ||
       (uVar7 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                 dictionary), iVar6 == 0)) goto code_?;
    func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar6,this,id,
                    uVar7);
  }
  if (dictionary != (IWrappedDictionary *)0x0) {
    pOVar8 = (Object *)
              func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,dictionary
                             );
    pJVar5 = (this->fields)._._Serializer_k__BackingField;
    if (((pJVar5 != (JsonSerializer *)0x0) &&
        (SVar9 = (StreamingContext)
                 (*(code *)(pJVar5->klass->vtable).get_Context.method)
                           (pJVar5,(pJVar5->klass->vtable).set_Context.methodPtr),
        contract != (JsonDictionaryContract *)0x0)) &&
       (JsonContract::JsonContract_InvokeOnDeserializing
                  ((JsonContract *)contract,pOVar8,SVar9,(MethodInfo *)0x0),
       reader != (JsonReader *)0x0)) {
      puStack_10 = (undefined *)(*(code *)(reader->klass->vtable).get_Depth.method)();
      do {
        iVar6 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
        if (iVar6 == 4) {
          pOVar8 = (Object *)
                    (*(code *)(reader->klass->vtable).get_Value.method)
                              (reader,(reader->klass->vtable).get_ValueType.methodPtr);
          uStack_1 = 1;
          uStack_2 = 0;
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          culture = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if (contract == (JsonDictionaryContract *)0x0) break;
          pOVar8 = JsonSerializerInternalReader_EnsureType
                              (this,pOVar8,culture,
                               (contract->fields)._DictionaryKeyType_k__BackingField,
                               (MethodInfo *)0x0);
          uStack_1 = 0;
          bVar11 = JsonSerializerInternalReader_ReadForType
                            (this,reader,(contract->fields)._DictionaryValueType_k__BackingField,
                             (JsonConverter *)0x0,(MethodInfo *)0x0);
          if (bVar11 == 0) goto code_?;
          objectType = (contract->fields)._DictionaryValueType_k__BackingField;
          if (cRam_? == '\0') {
            pOVar8 = (Object *)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          if (objectType == (Type *)0x0) {
            contract_00 = (JsonContract *)0x0;
          }
          else {
            pJVar5 = (this->fields)._._Serializer_k__BackingField;
            if ((pJVar5 == (JsonSerializer *)0x0) ||
               (iVar6 = (*(code *)(pJVar5->klass->vtable).get_ContractResolver.method)
                                  (pJVar5,(pJVar5->klass->vtable).set_ContractResolver.methodPtr),
               iVar6 == 0)) break;
            contract_00 = (JsonContract *)
                          func_?(0,
                                          TypeInfo__Newtonsoft__Json__Serialization__IContractResolver
                                          ,iVar6,objectType);
          }
          pOVar12 = JsonSerializerInternalReader_CreateValueNonProperty
                              (this,reader,objectType,contract_00,(MethodInfo *)0x0);
          if (dictionary == (IWrappedDictionary *)0x0) break;
          pIVar13 = dictionary->klass;
          uVar14 = 0;
          uVar15._0_1_ = (pIVar13->_1).rank;
          uVar15._1_1_ = (pIVar13->_1).minimumAlignment;
          if (uVar15 != 0) {
            do {
              if (pIVar13->interfaceOffsets[uVar14].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IDictionary) {
                puVar16 = &(&dictionary->klass[1]._0.byval_arg)
                           [dictionary->klass->interfaceOffsets[uVar14].offset].attrs;
                goto code_?;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar15);
          }
          puVar16 = (ushort *)
                    func_?(dictionary,TypeInfo__System__Collections__IDictionary,3);
code_?:
          (**(code **)puVar16)(dictionary,pOVar8,pOVar12,*(undefined4 *)(puVar16 + 2));
          uStack_1 = 0xff;
          uStack_2 = 0xffffff;
        }
        else if (iVar6 != 5) {
          if (iVar6 == 0xd) {
            if (dictionary != (IWrappedDictionary *)0x0) {
              pOVar8 = (Object *)
                        func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                        dictionary);
              pJVar5 = (this->fields)._._Serializer_k__BackingField;
              if ((pJVar5 != (JsonSerializer *)0x0) &&
                 (SVar9 = (StreamingContext)
                          (*(code *)(pJVar5->klass->vtable).get_Context.method)
                                    (pJVar5,(pJVar5->klass->vtable).set_Context.methodPtr),
                 contract != (JsonDictionaryContract *)0x0)) {
                JsonContract::JsonContract_InvokeOnDeserialized
                          ((JsonContract *)contract,pOVar8,SVar9,(MethodInfo *)0x0);
                pOVar8 = (Object *)
                          func_?(0,
                                          TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                          dictionary);
                *unaff_FS_OFFSET = uStack_4;
                return pOVar8;
              }
            }
          }
          else {
            puStack_10 = (undefined *)
                         (*(code *)(reader->klass->vtable).get_TokenType.method)
                                   (reader,(reader->klass->vtable).get_Value.methodPtr);
            pOVar8 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&puStack_10);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            message = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_Unexpected_token_when_deserializ,pOVar8,
                                 (MethodInfo *)0x0);
            pJVar17 = (JsonSchemaException *)
                      func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
            Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                      (pJVar17,message,(MethodInfo *)0x0);
            func_?();
          }
          break;
        }
        cVar18 = (*(code *)(reader->klass->vtable).__unknown.method)
                          (reader,(reader->klass->vtable).__unknown_1.methodPtr);
        if (cVar18 == '\0') {
          pJVar17 = (JsonSchemaException *)func_?();
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (pJVar17,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
          puStack_10 = (undefined *)0x0;
          func_?();
          pcVar19 = (code *)swi(3);
          pOVar8 = (Object *)(*pcVar19)();
          return pOVar8;
        }
      } while( true );
    }
  }
code_?:
  func_?(0);
code_?:
  pJVar17 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (pJVar17,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
  func_?();
  return (Object *)&UNK_?;
}


/* Object PopulateList(IWrappedCollection, JsonReader, String, JsonArrayContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_PopulateList
                   (JsonSerializerInternalReader *this,IWrappedCollection *wrappedList,
                   JsonReader *reader,String *reference,JsonArrayContract *contract,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc8;
  puVar5 = &stack0xffffffc8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  o = unaff_EBX;
  puStack_4 = &stack0xffffffc8;
  if (wrappedList != (IWrappedCollection *)0x0) {
    puStack_4 = &stack0xffffffc8;
    o = (JsonReader *)
        func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,wrappedList);
    pJStack_6 = o;
    cVar7 = func_?(0,TypeInfo__System__Collections__IList,wrappedList);
    if (cVar7 == '\0') {
      if (reference != (String *)0x0) {
        pJVar8 = (this->fields)._._Serializer_k__BackingField;
        if ((pJVar8 == (JsonSerializer *)0x0) ||
           (iVar9 = (*(code *)(pJVar8->klass->vtable).get_ReferenceResolver.method)
                              (pJVar8,(pJVar8->klass->vtable).set_ReferenceResolver.methodPtr),
           iVar9 == 0)) goto code_?;
        func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar9,this,
                        reference,o);
      }
      pJVar8 = (this->fields)._._Serializer_k__BackingField;
      if (((pJVar8 != (JsonSerializer *)0x0) &&
          (SVar10 = (StreamingContext)
                   (*(code *)(pJVar8->klass->vtable).get_Context.method)
                             (pJVar8,(pJVar8->klass->vtable).set_Context.methodPtr),
          contract != (JsonArrayContract *)0x0)) &&
         (JsonContract::JsonContract_InvokeOnDeserializing
                    ((JsonContract *)contract,(Object *)o,SVar10,(MethodInfo *)0x0), o = reader,
         reader != (JsonReader *)0x0)) {
        pIStack_11 = (IWrappedCollection__Class *)(reader->klass->vtable).__unknown.methodPtr;
        uStack_12 = (*(code *)(reader->klass->vtable).get_Depth.method)();
        while (contract != (JsonArrayContract *)0x0) {
          bVar13 = JsonSerializerInternalReader_ReadForTypeArrayHack
                            (this,reader,(contract->fields)._CollectionItemType_k__BackingField,
                             (MethodInfo *)0x0);
          if (bVar13 == 0) goto code_?;
          if (reader == (JsonReader *)0x0) break;
          iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
          if (iVar9 == 0xe) {
            pJVar8 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar8 != (JsonSerializer *)0x0) {
              SVar10 = (StreamingContext)func_?(0x1f,pJVar8);
              JsonContract::JsonContract_InvokeOnDeserialized
                        ((JsonContract *)contract,(Object *)pJStack_6,SVar10,(MethodInfo *)0x0);
              if (wrappedList != (IWrappedCollection *)0x0) {
                pOVar14 = (Object *)
                         func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection
                                         ,wrappedList);
                *unaff_FS_OFFSET = uStack_3;
                return pOVar14;
              }
            }
            break;
          }
          if (iVar9 != 5) {
            uStack_1 = 0;
            pTStack_15 = (contract->fields)._CollectionItemType_k__BackingField;
            contract_00 = JsonSerializerInternalReader_GetContractSafe
                                    (this,pTStack_15,(MethodInfo *)0x0);
            pOVar14 = JsonSerializerInternalReader_CreateValueNonProperty
                               (this,reader,pTStack_15,contract_00,(MethodInfo *)0x0);
            if (wrappedList == (IWrappedCollection *)0x0) break;
            func_?(4,TypeInfo__System__Collections__IList,wrappedList,pOVar14);
            uStack_1 = 0xffffffff;
          }
        }
      }
    }
    else if (reader != (JsonReader *)0x0) {
      JsonReader::JsonReader_Skip(reader,(MethodInfo *)0x0);
      pOVar14 = (Object *)
               func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,
                               wrappedList);
      *unaff_FS_OFFSET = uStack_3;
      return pOVar14;
    }
  }
code_?:
  func_?(0);
  func_?(o,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateList_Newtonsoft__Json__Utilities__IWrappedCollection__Newtonsoft__Json__JsonReader__System__String__Newtonsoft__Json__Serialization__JsonArrayContract_
                 );
  pIStack_11 = wrappedList->klass;
  func_?(&pIStack_11,&UNK_?);
code_?:
  this_00 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
            (this_00,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
  func_?();
  pcVar16 = (code *)swi(3);
  pOVar14 = (Object *)(*pcVar16)();
  return pOVar14;
}


/* Object PopulateMultidimensionalArray(IList, JsonReader, String, JsonArrayContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_PopulateMultidimensionalArray
                   (JsonSerializerInternalReader *this,IList *list,JsonReader *reader,
                   String *reference,JsonArrayContract *contract,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  this_00 = contract;
  puStack_4 = &stack0xffffffb4;
  if ((contract != (JsonArrayContract *)0x0) &&
     (pTVar6 = (contract->fields)._._UnderlyingType_k__BackingField, puStack_4 = &stack0xffffffb4,
     pTVar6 != (Type *)0x0)) {
    puStack_4 = &stack0xffffffb4;
    pOStack_7 = (Object *)
                 (*(code *)(pTVar6->klass->vtable).GetArrayRank.method)
                           (pTVar6,(pTVar6->klass->vtable).__unknown_12.methodPtr);
    if (reference != (String *)0x0) {
      pJVar8 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar8 == (JsonSerializer *)0x0) ||
         (iVar9 = (*(code *)(pJVar8->klass->vtable).get_ReferenceResolver.method)
                             (pJVar8,(pJVar8->klass->vtable).set_ReferenceResolver.methodPtr),
         iVar9 == 0)) goto code_?;
      func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar9,this,
                      reference,list);
    }
    pJVar8 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar8 != (JsonSerializer *)0x0) {
      SVar10 = (StreamingContext)
              (*(code *)(pJVar8->klass->vtable).get_Context.method)
                        (pJVar8,(pJVar8->klass->vtable).set_Context.methodPtr);
      JsonContract::JsonContract_InvokeOnDeserializing
                ((JsonContract *)this_00,(Object *)list,SVar10,(MethodInfo *)0x0);
      pTVar11 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Stack<System::Collections::IList>
                               );
      pTStack_12 = pTVar11;
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
      TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
                (pTVar11,
                 MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Stack__
                );
      pTStack_13 = pTVar11;
      if (pTVar11 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
        System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
        Stack_1_ShortcutManager_ShortcutKey__Push
                  ((Stack_1_ShortcutManager_ShortcutKey_ *)pTVar11,
                   (ShortcutManager_ShortcutKey *)list,
                   MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Push_System__Collections__IList_
                  );
        pLStack_14 = (List_1_UnityEngine_Vector4_ *)list;
        pLVar15 = (List_1_UnityEngine_Vector4_ *)list;
code_?:
        do {
          this_00 = (JsonArrayContract *)reader;
          if ((reader == (JsonReader *)0x0) ||
             (puStack_16 = (undefined *)
                           (*(code *)(reader->klass->vtable).get_Depth.method)
                                     (reader,(reader->klass->vtable).__unknown.methodPtr),
             pTVar11 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)) break;
          pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar11,
                               MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__get_Count__
                              );
          if (pOVar17 == pOStack_7) {
            if (contract == (JsonArrayContract *)0x0) break;
            bVar18 = JsonSerializerInternalReader_ReadForTypeArrayHack
                              (this,reader,(contract->fields)._CollectionItemType_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar18 == 0) {
code_?:
              pTStack_13 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                           (*(code *)(reader->klass->vtable).get_TokenType.method)();
              pOVar17 = (Object *)func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              this_00 = (JsonArrayContract *)
                        mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_Unexpected_end_when_deserializin,pOVar17,
                                   (MethodInfo *)0x0);
              pJVar19 = (JsonSchemaException *)func_?();
              Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                        (pJVar19,(String *)this_00,(MethodInfo *)0x0);
              pMStack_20 = 
              MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateMultidimensionalArray_System__Collections__IList__Newtonsoft__Json__JsonReader__System__String__Newtonsoft__Json__Serialization__JsonArrayContract_
              ;
              pOStack_21 = (Object *)0x0;
              pJStack_22 = pJVar19;
              func_?();
              break;
            }
            iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
            if (iVar9 == 0xe) {
              System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
              Stack_1_ShortcutManager_ShortcutKey__Pop
                        ((Stack_1_ShortcutManager_ShortcutKey_ *)pTVar11,
                         MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Pop__
                        );
              pLVar15 = (List_1_UnityEngine_Vector4_ *)
                        System.dll::System::Collections::Generic::Stack`1[System::Collections::
                        IList]::Stack_1_System_Collections_IList__Peek
                                  ((Stack_1_System_Collections_IList_ *)pTVar11,
                                   MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Peek__
                                  );
              pLStack_14 = pLVar15;
            }
            else if (iVar9 != 5) {
              uStack_1 = 0;
              pTStack_23 = (contract->fields)._CollectionItemType_k__BackingField;
              contract_00 = JsonSerializerInternalReader_GetContractSafe
                                      (this,pTStack_23,(MethodInfo *)0x0);
              pOStack_21 = JsonSerializerInternalReader_CreateValueNonProperty
                                     (this,reader,pTStack_23,contract_00,(MethodInfo *)0x0);
              if (pLVar15 == (List_1_UnityEngine_Vector4_ *)0x0) break;
              uVar24 = 0;
              pTStack_23 = (Type *)0x0;
              uVar25._0_1_ = (pLVar15->klass->_1).rank;
              uVar25._1_1_ = (pLVar15->klass->_1).minimumAlignment;
              pMStack_20 = (MethodInfo *)(uint)uVar25;
              if (uVar25 != 0) {
                do {
                  pTVar11 = pTStack_12;
                  if (pLVar15->klass->interfaceOffsets[uVar24].interfaceType ==
                      (Il2CppClass *)TypeInfo__System__Collections__IList) {
                    ppMVar26 = &(&(pLVar15->klass->vtable).
                                  System_Collections_IEnumerable_GetEnumerator)
                                [pLVar15->klass->interfaceOffsets[uVar24].offset].method;
                    goto code_?;
                  }
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar25);
              }
              ppMVar26 = (MethodInfo **)
                         func_?(pLVar15,TypeInfo__System__Collections__IList,4);
code_?:
              (*(code *)*ppMVar26)(pLVar15,pOStack_21,ppMVar26[1]);
              uStack_1 = 0xffffffff;
            }
            goto code_?;
          }
          cVar27 = (*(code *)(reader->klass->vtable).__unknown.method)
                            (reader,(reader->klass->vtable).__unknown_1.methodPtr);
          if (cVar27 == '\0') goto code_?;
          iVar9 = (*(code *)(reader->klass->vtable).get_TokenType.method)();
          switch(iVar9) {
          case 2:
            pLStack_14 = (List_1_UnityEngine_Vector4_ *)
                         func_?(
                                        TypeInfo__System__Collections__Generic__List<System::Object>
                                        );
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
            List_1_UnityEngine_Vector4___ctor
                      (pLStack_14,
                       MethodInfo__System__Collections__Generic__List<System::Object>__List__);
            if (pLVar15 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
            func_?(4,TypeInfo__System__Collections__IList,pLVar15,pLStack_14);
            pLVar15 = pLStack_14;
            System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
            Stack_1_ShortcutManager_ShortcutKey__Push
                      ((Stack_1_ShortcutManager_ShortcutKey_ *)pTVar11,
                       (ShortcutManager_ShortcutKey *)pLStack_14,
                       MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Push_System__Collections__IList_
                      );
            pLStack_14 = pLVar15;
            break;
          default:
            if (iVar9 != 0xe) goto code_?;
            System.dll::System::Collections::Generic::Stack`1[ShortcutManager+ShortcutKey]::
            Stack_1_ShortcutManager_ShortcutKey__Pop
                      ((Stack_1_ShortcutManager_ShortcutKey_ *)pTVar11,
                       MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Pop__
                      );
            pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar11
                                 ,
                                 MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__get_Count__
                                );
            if ((int)pOVar17 < 1) {
              pJVar8 = (this->fields)._._Serializer_k__BackingField;
              if ((pJVar8 != (JsonSerializer *)0x0) &&
                 (SVar10 = (StreamingContext)
                          (*(code *)(pJVar8->klass->vtable).get_Context.method)
                                    (pJVar8,(pJVar8->klass->vtable).set_Context.methodPtr),
                 contract != (JsonArrayContract *)0x0)) {
                JsonContract::JsonContract_InvokeOnDeserialized
                          ((JsonContract *)contract,(Object *)list,SVar10,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return (Object *)list;
              }
              goto code_?;
            }
            pLVar15 = (List_1_UnityEngine_Vector4_ *)
                      System.dll::System::Collections::Generic::Stack`1[System::Collections::IList]
                      ::Stack_1_System_Collections_IList__Peek
                                ((Stack_1_System_Collections_IList_ *)pTVar11,
                                 MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Peek__
                                );
            pLStack_14 = pLVar15;
            break;
          case 5:
            break;
          }
        } while( true );
      }
    }
  }
code_?:
  func_?(0);
code_?:
  contract = (JsonArrayContract *)
             (*(code *)(((String__Class *)this_00->klass)->vtable).System_IConvertible_ToChar.method
             )(this_00,(((String__Class *)this_00->klass)->vtable).System_IConvertible_ToDateTime.
                       methodPtr);
  pOVar17 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&contract);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unexpected_token_when_deserializ,pOVar17,
                       (MethodInfo *)0x0);
  pJVar19 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar19,message,(MethodInfo *)0x0);
  func_?(pJVar19,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateMultidimensionalArray_System__Collections__IList__Newtonsoft__Json__JsonReader__System__String__Newtonsoft__Json__Serialization__JsonArrayContract_
                 );
  func_?(message,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateMultidimensionalArray_System__Collections__IList__Newtonsoft__Json__JsonReader__System__String__Newtonsoft__Json__Serialization__JsonArrayContract_
                 );
  pSStack_28 = message->klass;
  fVar29 = (float10)func_?(&pSStack_28,&UNK_?);
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar29);
  uVar30 = in((short)extraout_EDX);
  *(undefined1 *)&pJVar19->klass = uVar30;
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar29);
  uVar30 = in((short)extraout_EDX);
  *(undefined1 *)((int)&pJVar19->klass + 1) = uVar30;
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar29);
  pcVar31 = (code *)swi(3);
  pOVar17 = (Object *)(*pcVar31)();
  return pOVar17;
}


/* Object PopulateObject(Object, JsonReader, JsonObjectContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_PopulateObject
                   (JsonSerializerInternalReader *this,Object *newObject,JsonReader *reader,
                   JsonObjectContract *contract,String *id,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  aKStack_6[0].key = 0;
  aKStack_6[0].value = 0;
  pJStack_7 = (JsonSchemaException *)0x0;
  uStack_8 = 0;
  func_?();
  this_00 = this;
  pJVar9 = (this->fields)._._Serializer_k__BackingField;
  puStack_10 = (undefined4 *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if ((pJVar9 != (JsonSerializer *)0x0) &&
     (puStack_10 = (undefined4 *)&stack0xffffff7c, puStack_4 = &stack0xffffff7c,
     SVar11 = (StreamingContext)
             (*(code *)(pJVar9->klass->vtable).get_Context.method)
                       (pJVar9,(pJVar9->klass->vtable).set_Context.methodPtr), pJVar12 = contract,
     contract != (JsonObjectContract *)0x0)) {
    JsonContract::JsonContract_InvokeOnDeserializing
              ((JsonContract *)contract,newObject,SVar11,(MethodInfo *)0x0);
    pJStack_13 = (JsonProperty *)(pJVar12->fields)._Properties_k__BackingField;
    if (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
        __f__am_cache3 ==
        (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_
         *)0x0) {
      pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar14,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___PopulateObject_m__3_Newtonsoft__Json__Serialization__JsonProperty_
                 ,
                 MethodInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
      __f__am_cache3 =
           (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_
            *)pUVar14;
    }
    pDStack_15 = (Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                  *)TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->
                    static_fields->__f__am_cache3;
    if (TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
        __f__am_cache4 ==
        (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
         *)0x0) {
      pUVar14 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar14,(Object *)0x0,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader___PopulateObject_m__4_Newtonsoft__Json__Serialization__JsonProperty_
                 ,
                 MethodInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__Func_System__Object__void__
                );
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader->static_fields->
      __f__am_cache4 =
           (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
            *)pUVar14;
    }
    pDStack_15 = (Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                  *)System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_13
                              ((IEnumerable_1_System_Object_ *)pJStack_13,
                               (Func_2_Object_Object_ *)pDStack_15,
                               (Func_2_Object_Boolean_ *)
                               TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader
                               ->static_fields->__f__am_cache4,
                               System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_MethodInfo__System__Linq__Enumerable__ToDictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_
                              );
    pSVar16 = id;
    if (id != (String *)0x0) {
      pJVar9 = (this_00->fields)._._Serializer_k__BackingField;
      if ((pJVar9 == (JsonSerializer *)0x0) ||
         (iVar17 = (*(code *)(pJVar9->klass->vtable).get_ReferenceResolver.method)(), iVar17 == 0))
      goto code_?;
      func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar17,this_00
                      ,pSVar16,newObject);
    }
    this_01 = (JsonSchemaException *)reader;
    if (reader != (JsonReader *)0x0) {
      pCStack_18 = (CultureInfo *)
                   (*(code *)(reader->klass->vtable).get_Depth.method)
                             (reader,(reader->klass->vtable).__unknown.methodPtr);
      do {
        iVar17 = (*(code *)(((JsonReader *)this_01)->klass->vtable).get_TokenType.method)
                           (this_01,(((JsonReader *)this_01)->klass->vtable).get_Value.methodPtr);
        if (iVar17 == 4) {
          piVar19 = (int *)(*(code *)(((JsonReader *)this_01)->klass->vtable).get_Value.method)
                                     (this_01,(((JsonReader *)this_01)->klass->vtable).get_ValueType
                                              .methodPtr);
          if (piVar19 == (int *)0x0) goto code_?;
          this_00 = (JsonSerializerInternalReader *)
                    (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
          uStack_1 = 0;
          pJStack_20 = this_00;
          if ((contract == (JsonObjectContract *)0x0) ||
             (pCStack_21 = (CultureInfo *)(contract->fields)._Properties_k__BackingField,
             pCStack_21 == (CultureInfo *)0x0)) goto code_?;
          pJStack_13 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                 ((JsonPropertyCollection *)pCStack_21,(String *)this_00,
                                  StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
          if ((pJStack_13 == (JsonProperty *)0x0) &&
             (pJStack_13 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                     ((JsonPropertyCollection *)pCStack_21,(String *)this_00,
                                      StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0),
             pJStack_13 == (JsonProperty *)0x0)) {
            pJVar9 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar9 == (JsonSerializer *)0x0) goto code_?;
            iVar17 = (*(code *)(pJVar9->klass->vtable).get_MissingMemberHandling.method)();
            if (iVar17 == 1) goto code_?;
            JsonReader::JsonReader_Skip((JsonReader *)this_01,(MethodInfo *)0x0);
            uStack_1 = 0xffffffff;
            this_00 = this;
          }
          else {
            bVar22 = JsonSerializerInternalReader_ReadForType
                              (this,(JsonReader *)this_01,
                               (pJStack_13->fields)._PropertyType_k__BackingField,
                               (pJStack_13->fields)._Converter_k__BackingField,(MethodInfo *)0x0);
            if (bVar22 == 0) {
              if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
                func_?();
              }
              pCStack_21 = mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              args = (Object__Array *)func_?();
              func_?();
              func_?();
              func_?();
              pSVar16 = StringLiteral_Unexpected_end_when_setting__0__;
              pCVar23 = pCStack_21;
              goto code_?;
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            iVar17 = (*(code *)(((JsonReader *)this_01)->klass->vtable).get_TokenType.method)();
            if (iVar17 == 0xb) {
code_?:
              value = JsonSerializerInternalReader_PropertyPresence__Enum_Null;
            }
            else {
              iVar17 = (*(code *)(((JsonReader *)this_01)->klass->vtable).get_TokenType.method)
                                 (this_01,(((JsonReader *)this_01)->klass->vtable).get_Value.
                                          methodPtr);
              value = JsonSerializerInternalReader_PropertyPresence__Enum_Value;
              if (iVar17 == 0xc) goto code_?;
            }
            property = pJStack_13;
            if (pDStack_15 ==
                (Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json
            ::Serialization::JsonSerializerInternalReader+PropertyPresence]::
            Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence__set_Item
                      (pDStack_15,(Object *)pJStack_13,value,
                       MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__set_Item_Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_
                      );
            this_00 = this;
            JsonSerializerInternalReader_SetPropertyValue
                      (this,property,(JsonReader *)this_01,newObject,(MethodInfo *)0x0);
            uStack_1 = 0xffffffff;
          }
        }
        else if (iVar17 != 5) {
          if (iVar17 == 0xd) {
            if (pDStack_15 ==
                (Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                       &stack0xffffff88,
                       (Dictionary_2_WinningConditionType_System_Object_ *)pDStack_15,
                       MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__GetEnumerator__
                      );
            uStack_1 = 2;
            goto code_?;
          }
          this = (JsonSerializerInternalReader *)
                 (*(code *)(((JsonReader *)this_01)->klass->vtable).get_TokenType.method)
                           (this_01,(((JsonReader *)this_01)->klass->vtable).get_Value.methodPtr);
          pOVar24 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          this_01 = (JsonSchemaException *)
                    mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_Unexpected_token_when_deserializ,pOVar24,
                               (MethodInfo *)0x0);
          this_02 = (JsonSchemaException *)
                    func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (this_02,(String *)this_01,(MethodInfo *)0x0);
          pMVar25 = 
          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateObject_System__Object__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
          ;
          goto code_?;
        }
        cVar26 = (*(code *)(((JsonReader *)this_01)->klass->vtable).__unknown.method)
                          (this_01,(((JsonReader *)this_01)->klass->vtable).__unknown_1.methodPtr);
      } while (cVar26 != '\0');
      this_01 = (JsonSchemaException *)
                func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
      Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                (this_01,StringLiteral_Unexpected_end_when_deserializin,(MethodInfo *)0x0);
      this_02 = this_01;
      pMVar25 = 
      MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateObject_System__Object__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
      ;
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCStack_21 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?(args,0);
  func_?(args,this_00);
  func_?(0,this_00);
  pJVar12 = contract;
  func_?(contract,0);
  pIVar27 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pJVar12,(MethodInfo *)0x0);
  func_?(pIVar27,0);
  uVar28 = func_?(8,pIVar27);
  func_?(args,0);
  func_?(args,uVar28);
  func_?(1,uVar28);
  pSVar16 = StringLiteral_Could_not_find_member___0___on_o;
  pCVar23 = pCStack_21;
  goto code_?;
  while( true ) {
    if (this_01 == (JsonSchemaException *)0x0) goto code_?;
    if ((this_01->fields)._._data == (IDictionary *)0x2) break;
code_?:
    do {
      cVar26 = func_?(&stack0xffffff9c,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__MoveNext__
                             );
      if (cVar26 == '\0') {
        *puStack_10 = 0x2b2;
        uStack_1 = 0xffffffff;
        func_?(&stack0xffffff9c,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__Dispose__
                       );
        if (pJStack_7 == (JsonSchemaException *)0x0) {
          pJVar9 = (this_00->fields)._._Serializer_k__BackingField;
          if ((pJVar9 != (JsonSerializer *)0x0) &&
             (SVar11 = (StreamingContext)func_?(0x1f,pJVar9), pOVar24 = newObject,
             contract != (JsonObjectContract *)0x0)) {
            JsonContract::JsonContract_InvokeOnDeserialized
                      ((JsonContract *)contract,newObject,SVar11,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return pOVar24;
          }
          goto code_?;
        }
        this_02 = pJStack_7;
        pMVar25 = (MethodInfo *)0x0;
        goto code_?;
      }
      aKStack_6[0] =
           LevelRewardsManager::LevelRewardsManager_get_NextReward
                     ((LevelRewardsManager *)&stack0xffffff9c,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Current__
                     );
      this_01 = (JsonSchemaException *)
                func_?(aKStack_6,
                                MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Key__
                               );
      iVar17 = func_?(aKStack_6,
                               MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Value__
                              );
      if (iVar17 == 0) {
        if (this_01 == (JsonSchemaException *)0x0) goto code_?;
        pIVar29 = (this_01->fields)._._data;
        if ((pIVar29 == (IDictionary *)0x1) || (pIVar29 == (IDictionary *)0x2)) {
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCStack_18 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          args = (Object__Array *)func_?(TypeInfo__System__Object);
          func_?(this_01);
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          func_?(args);
          func_?();
          func_?();
          pSVar16 = StringLiteral_Required_property___0___not_foun;
          pCVar23 = pCStack_18;
          goto code_?;
        }
        uStack_8._0_4_ = this_01[1].monitor;
        uStack_8._4_4_ = this_01[1].fields._.trace_ips;
        pJVar9 = (this_00->fields)._._Serializer_k__BackingField;
        if (pJVar9 == (JsonSerializer *)0x0) goto code_?;
        uVar28 = func_?(0x16,pJVar9);
        uVar30 = func_?(&uStack_8,uVar28,
                                 MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                                );
        if (((uVar30 >> 1 & 1) != 0) && (*(char *)((int)&(this_01->fields)._.hresult + 2) != '\0'))
        {
          pJStack_20 = (JsonSerializerInternalReader *)(this_01->fields)._.class_name;
          pCStack_18 = (CultureInfo *)(this_01->fields)._.source;
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar23 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pOVar24 = JsonSerializerInternalReader_EnsureType
                              (this_00,(Object *)pCStack_18,pCVar23,
                               (Type *)(this_01->fields)._.stack_trace,(MethodInfo *)0x0);
          if (pJStack_20 == (JsonSerializerInternalReader *)0x0) goto code_?;
          func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,pJStack_20,
                          newObject,pOVar24);
        }
        goto code_?;
      }
    } while (iVar17 != 1);
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCStack_18 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  func_?(this_01);
  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
  func_?(args);
  func_?();
  func_?();
  pSVar16 = StringLiteral_Required_property___0___expects_;
  pCVar23 = pCStack_18;
code_?:
  pSVar16 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar16,(IFormatProvider *)pCVar23,args,(MethodInfo *)0x0);
  this_01 = (JsonSchemaException *)func_?();
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(this_01,pSVar16,(MethodInfo *)0x0);
  this_02 = this_01;
  pMVar25 = 
  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateObject_System__Object__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
  ;
code_?:
  func_?(this_02,0,pMVar25);
  pJStack_31 = this_01->klass;
  func_?(&pJStack_31,&UNK_?);
  pcVar32 = (code *)swi(3);
  pOVar24 = (Object *)(*pcVar32)();
  return pOVar24;
}


/* Boolean ReadForType(JsonReader, Type, JsonConverter) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ReadForType
               (JsonSerializerInternalReader *this,JsonReader *reader,Type *t,
               JsonConverter *propertyConverter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = JsonSerializerInternalReader_GetContractSafe(this,t,(MethodInfo *)0x0);
  if (propertyConverter == (JsonConverter *)0x0) {
    if (pJVar1 == (JsonContract *)0x0) {
code_?:
      pIVar2 = TypeRef__System__Byte;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      pIVar2 = TypeRef__System__Decimal;
      if (t == pTVar3) {
        if (reader != (JsonReader *)0x0) {
          (*(code *)(reader->klass->vtable).__unknown_1.method)
                    (reader,(reader->klass->vtable).__unknown_2.methodPtr);
          return 1;
        }
      }
      else {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
        pIVar2 = TypeRef__System__Nullable<System::Decimal>;
        if (t != pTVar3) {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
          pIVar2 = TypeRef__System__DateTimeOffset;
          if (t != pTVar3) {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?();
            }
            pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
            pIVar2 = TypeRef__System__Nullable<System::DateTimeOffset>;
            if (t != pTVar3) {
              if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                func_?();
              }
              pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
              if (t != pTVar3) {
                while (reader != (JsonReader *)0x0) {
                  cVar4 = (*(code *)(reader->klass->vtable).__unknown.method)
                                    (reader,(reader->klass->vtable).__unknown_1.methodPtr);
                  if (cVar4 == '\0') {
                    return 0;
                  }
                  iVar5 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                                    (reader,(reader->klass->vtable).get_Value.methodPtr);
                  if (iVar5 != 5) {
                    return 1;
                  }
                }
                goto code_?;
              }
            }
            if (reader != (JsonReader *)0x0) {
              (*(code *)(reader->klass->vtable).__unknown_3.method)
                        (&stack0xffffffdc,reader,(reader->klass->vtable).SetToken.methodPtr);
              return 1;
            }
            goto code_?;
          }
        }
        if (reader != (JsonReader *)0x0) {
          (*(code *)(reader->klass->vtable).__unknown_2.method)
                    (&stack0xffffffe8,reader,(reader->klass->vtable).__unknown_3.methodPtr);
          return 1;
        }
      }
      goto code_?;
    }
    if ((pJVar1->fields)._Converter_k__BackingField == (JsonConverter *)0x0) {
      this_00 = (this->fields)._._Serializer_k__BackingField;
      if (this_00 == (JsonSerializer *)0x0) goto code_?;
      pJVar6 = JsonSerializer::JsonSerializer_GetMatchingConverter
                         (this_00,(pJVar1->fields)._UnderlyingType_k__BackingField,(MethodInfo *)0x0
                         );
      if ((pJVar6 == (JsonConverter *)0x0) &&
         ((pJVar1->fields)._InternalConverter_k__BackingField == (JsonConverter *)0x0))
      goto code_?;
    }
  }
  if (reader != (JsonReader *)0x0) {
    bVar7 = (*(code *)(reader->klass->vtable).__unknown.method)
                      (reader,(reader->klass->vtable).__unknown_1.methodPtr);
    return bVar7;
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean ReadForTypeArrayHack(JsonReader, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ReadForTypeArrayHack
               (JsonSerializerInternalReader *this,JsonReader *reader,Type *t,MethodInfo *method)

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
  bVar4 = JsonSerializerInternalReader_ReadForType
                    (this,reader,t,(JsonConverter *)0x0,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_3;
  return bVar4;
}


/* IDictionary`2[Newtonsoft.Json.Serialization.JsonProperty,System.Object]
   ResolvePropertyAndConstructorValues(JsonObjectContract, JsonReader, Type) */

IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_ResolvePropertyAndConstructorValues
          (JsonSerializerInternalReader *this,JsonObjectContract *contract,JsonReader *reader,
          Type *objectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                           );
  pHVar1 = this_00;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
            );
  pJVar2 = (JsonSchemaException *)reader;
  while( true ) {
    if (pJVar2 == (JsonSchemaException *)0x0) break;
    iVar3 = (*(code *)(pJVar2->klass->vtable).get_Source.method)
                      (pJVar2,(pJVar2->klass->vtable).get_StackTrace.methodPtr);
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        if (iVar3 == 0xd) {
          return (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)this_00;
        }
        goto code_?;
      }
      goto code_?;
    }
    piVar4 = (int *)(*(code *)(pJVar2->klass->vtable).get_StackTrace.method)
                               (pJVar2,(pJVar2->klass->vtable).GetObjectData_1.methodPtr);
    if (piVar4 == (int *)0x0) break;
    propertyName = (CultureInfo *)
                   (**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
    pCStack_5 = propertyName;
    if (contract == (JsonObjectContract *)0x0) break;
    pJVar6 = (contract->fields)._ConstructorParameters_k__BackingField;
    if (pJVar6 == (JsonPropertyCollection *)0x0) break;
    property = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                         (pJVar6,(String *)propertyName,StringComparison__Enum_Ordinal,
                          (MethodInfo *)0x0);
    this_00 = pHVar1;
    if (property == (JsonProperty *)0x0) {
      property = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                           (pJVar6,(String *)propertyName,StringComparison__Enum_OrdinalIgnoreCase,
                            (MethodInfo *)0x0);
      this_00 = pHVar1;
      if (property != (JsonProperty *)0x0) goto code_?;
      pJVar6 = (contract->fields)._Properties_k__BackingField;
      if (pJVar6 == (JsonPropertyCollection *)0x0) break;
      property = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                           (pJVar6,(String *)propertyName,StringComparison__Enum_Ordinal,
                            (MethodInfo *)0x0);
      this_00 = pHVar1;
      if (property != (JsonProperty *)0x0) goto code_?;
      property = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                           (pJVar6,(String *)propertyName,StringComparison__Enum_OrdinalIgnoreCase,
                            (MethodInfo *)0x0);
      this_00 = pHVar1;
      if (property != (JsonProperty *)0x0) goto code_?;
      cVar7 = (*pJVar2->klass[1]._0.gc_desc)(pJVar2,pJVar2->klass[1]._0.name);
      if (cVar7 != '\0') {
        pJVar8 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar8 == (JsonSerializer *)0x0) break;
        iVar3 = (*(code *)(pJVar8->klass->vtable).get_MissingMemberHandling.method)
                          (pJVar8,(pJVar8->klass->vtable).set_MissingMemberHandling.methodPtr);
        if (iVar3 != 1) {
          this_00 = pHVar1;
          JsonReader::JsonReader_Skip((JsonReader *)pJVar2,(MethodInfo *)0x0);
          pHVar1 = this_00;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    bVar9 = JsonSerializerInternalReader_ReadForType
                      (this,(JsonReader *)pJVar2,(property->fields)._PropertyType_k__BackingField,
                       (property->fields)._Converter_k__BackingField,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    if ((property->fields)._Ignored_k__BackingField == 0) {
      pCStack_5 = (CultureInfo *)
                   JsonSerializerInternalReader_CreateValueProperty
                             (this,(JsonReader *)pJVar2,property,(Object *)0x0,1,(Object *)0x0,
                              (MethodInfo *)0x0);
      pJVar10 = reader;
      if (this_00 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) break;
      uVar11 = 0;
      uVar12._0_1_ = (this_00->klass->_1).rank;
      uVar12._1_1_ = (this_00->klass->_1).minimumAlignment;
      pHVar1 = this_00;
      if (uVar12 != 0) {
        do {
          if (this_00->klass->interfaceOffsets[uVar11].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
             ) {
            pHVar13 = this_00->klass;
            iVar3 = pHVar13->interfaceOffsets[uVar11].offset;
            (*(code *)(&(pHVar13->vtable).System_Collections_Generic_ICollection_T__get_IsReadOnly)
                      [iVar3].method)
                      (this_00,property,pCStack_5,
                       (&(pHVar13->vtable).System_Collections_Generic_ICollection_T__Add)[iVar3].
                       methodPtr);
            pJVar2 = (JsonSchemaException *)pJVar10;
            goto code_?;
          }
          uVar11 = uVar11 + 1;
          pJVar2 = (JsonSchemaException *)reader;
        } while (uVar11 < uVar12);
      }
      puVar14 = (undefined4 *)
                func_?(this_00,
                                TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                                ,5);
      (*(code *)*puVar14)(this_00,property,pCStack_5,puVar14[1]);
    }
    else {
      JsonReader::JsonReader_Skip((JsonReader *)pJVar2,(MethodInfo *)0x0);
      pHVar1 = this_00;
    }
code_?:
    cVar7 = (*pJVar2->klass[1]._0.gc_desc)(pJVar2,pJVar2->klass[1]._0.name);
    if (cVar7 == '\0') {
      return (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)this_00;
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  propertyName = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
  pOVar15 = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?(pOVar15,0);
  func_?(pOVar15,pCStack_5);
  func_?(0,pCStack_5);
  pTVar16 = objectType;
  func_?(objectType,0);
  uVar17 = func_?(8,pTVar16);
  func_?(pOVar15,0);
  func_?(pOVar15,uVar17);
  func_?(1,uVar17);
  pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Could_not_find_member___0___on_o,
                       (IFormatProvider *)propertyName,pOVar15,(MethodInfo *)0x0);
  pJVar2 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar2,pSVar18,(MethodInfo *)0x0);
  func_?(pJVar2,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                 );
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar15 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar15,0);
  func_?(pOVar15,propertyName);
  func_?(0,propertyName);
  pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_end_when_setting__0__,(IFormatProvider *)pCVar19,
                       pOVar15,(MethodInfo *)0x0);
  pJVar2 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar2,pSVar18,(MethodInfo *)0x0);
  func_?(pJVar2,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                 );
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar15 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar15,0);
  func_?(pOVar15,propertyName);
  func_?(0,propertyName);
  pSVar18 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_end_when_setting__0__,(IFormatProvider *)pCVar19,
                       pOVar15,(MethodInfo *)0x0);
  pJVar2 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar2,pSVar18,(MethodInfo *)0x0);
  func_?(pJVar2,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                 );
code_?:
  reader = (JsonReader *)
           (*(code *)(pJVar2->klass->vtable).get_Source.method)
                     (pJVar2,(pJVar2->klass->vtable).get_StackTrace.methodPtr);
  arg1 = (Object *)func_?(TypeInfo__Newtonsoft__Json__JsonToken,&reader);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar18 = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unexpected_token_when_deserializ,arg1,
                       (MethodInfo *)0x0);
  pJVar2 = (JsonSchemaException *)
            func_?(TypeInfo__Newtonsoft__Json__JsonSerializationException);
  Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1(pJVar2,pSVar18,(MethodInfo *)0x0);
  func_?(pJVar2,0,
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                 );
  pcVar20 = (code *)swi(3);
  pIVar21 = (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)(*pcVar20)();
  return pIVar21;
}


/* Void SetPropertyPresence(JsonReader, JsonProperty,
   Dictionary`2[Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader+PropertyPresence])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_SetPropertyPresence
               (JsonSerializerInternalReader *this,JsonReader *reader,JsonProperty *property,
               Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
               *requiredProperties,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (property == (JsonProperty *)0x0) {
    return;
  }
  if (reader == (JsonReader *)0x0) goto code_?;
  iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                    (reader,(reader->klass->vtable).get_Value.methodPtr);
  if (iVar1 == 0xb) {
code_?:
    value = JsonSerializerInternalReader_PropertyPresence__Enum_Null;
  }
  else {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    value = JsonSerializerInternalReader_PropertyPresence__Enum_Value;
    if (iVar1 == 0xc) goto code_?;
  }
  if (requiredProperties !=
      (Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,Newtonsoft::Json::
    Serialization::JsonSerializerInternalReader+PropertyPresence]::
    Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence__set_Item
              ((Dictionary_2_System_Object_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                *)requiredProperties,(Object *)property,value,
               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__set_Item_Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_
              );
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPropertyValue(JsonProperty, JsonReader, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_SetPropertyValue
               (JsonSerializerInternalReader *this,JsonProperty *property,JsonReader *reader,
               Object *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  property_00 = property;
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  NStack_2.value = 0;
  NStack_2.has_value = 0;
  NStack_2._5_3_ = 0;
  if (property == (JsonProperty *)0x0) goto code_?;
  this_02 = reader;
  if ((property->fields)._Ignored_k__BackingField == 0) {
    NStack_1 = (property->fields)._ObjectCreationHandling_k__BackingField;
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    pOStack_4 = (Object *)0x0;
    property = (JsonProperty *)((uint)property & 0xffffff00);
    uStack_5 = uStack_5 & 0xffffff00;
    if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
    uVar6 = (*(code *)(pJVar3->klass->vtable).get_ObjectCreationHandling.method)
                      (pJVar3,(pJVar3->klass->vtable).set_ObjectCreationHandling.methodPtr);
    iVar7 = func_?(&NStack_1,uVar6,
                            MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__GetValueOrDefault_Newtonsoft__Json__ObjectCreationHandling_
                           );
    this_02 = reader;
    if ((iVar7 == 0) || (iVar7 == 1)) {
      if (reader == (JsonReader *)0x0) goto code_?;
      iVar7 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                        (reader,(reader->klass->vtable).get_Value.methodPtr);
      if (((iVar7 == 2) ||
          (iVar7 = (*(code *)(this_02->klass->vtable).get_TokenType.method)
                             (this_02,(this_02->klass->vtable).get_Value.methodPtr), iVar7 == 1)) &&
         ((property_00->fields)._Readable_k__BackingField != 0)) {
        pIVar8 = (property_00->fields)._ValueProvider_k__BackingField;
        if (pIVar8 == (IValueProvider *)0x0) goto code_?;
        pOStack_4 = (Object *)
                    func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,
                                    pIVar8,target);
        uStack_5 = CONCAT31(uStack_5._1_3_,1);
        if (pOStack_4 != (Object *)0x0) {
          this_00 = (MVSimpleOneSeatVehicle *)(property_00->fields)._PropertyType_k__BackingField;
          if (this_00 == (MVSimpleOneSeatVehicle *)0x0) goto code_?;
          MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle_DeSelect(this_00,(MethodInfo *)0x0);
          handle = TypeRef__System__Collections__ObjectModel__ReadOnlyCollection;
          if (extraout_AL == '\0') {
            property = (JsonProperty *)(property_00->fields)._PropertyType_k__BackingField;
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
            bVar10 = Json::Utilities::ReflectionUtils::ReflectionUtils_InheritsGenericDefinition
                              ((Type *)property,pTVar9,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              pTVar9 = (property_00->fields)._PropertyType_k__BackingField;
              if (pTVar9 == (Type *)0x0) goto code_?;
              bVar10 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar9,(MethodInfo *)0x0);
              property = (JsonProperty *)(uint)(bVar10 == 0);
              goto code_?;
            }
          }
        }
        property = (JsonProperty *)0x0;
      }
    }
code_?:
    if (((property_00->fields)._Writable_k__BackingField != 0) || ((char)property != '\0')) {
      pJVar3 = (this->fields)._._Serializer_k__BackingField;
      NStack_2 = (property_00->fields)._NullValueHandling_k__BackingField;
      if (pJVar3 != (JsonSerializer *)0x0) {
        uVar6 = (*(code *)(pJVar3->klass->vtable).get_NullValueHandling.method)
                          (pJVar3,(pJVar3->klass->vtable).set_NullValueHandling.methodPtr);
        iVar7 = func_?(&NStack_2,uVar6,
                                MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                               );
        if (iVar7 == 1) {
          if (this_02 == (JsonReader *)0x0) goto code_?;
          iVar7 = (*(code *)(this_02->klass->vtable).get_TokenType.method)
                            (this_02,(this_02->klass->vtable).get_Value.methodPtr);
          if (iVar7 == 0xb) goto code_?;
        }
        pJVar3 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
        uVar6 = (*(code *)(pJVar3->klass->vtable).get_DefaultValueHandling.method)
                          (pJVar3,(pJVar3->klass->vtable).set_DefaultValueHandling.methodPtr);
        uVar11 = func_?(&stack0xffffffdc,uVar6,
                                MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                               );
        if ((uVar11 & 1) != 0) {
          if (this_02 == (JsonReader *)0x0) goto code_?;
          token = (*(code *)(this_02->klass->vtable).get_TokenType.method)
                            (this_02,(this_02->klass->vtable).get_Value.methodPtr);
          bVar10 = JsonReader::JsonReader_IsPrimitiveToken(token,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pOVar12 = (Object *)
                     (*(code *)(this_02->klass->vtable).get_Value.method)
                               (this_02,(this_02->klass->vtable).get_ValueType.methodPtr);
            bVar10 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (pOVar12,(property_00->fields)._DefaultValue_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar10 != 0) goto code_?;
          }
        }
        pOVar12 = (Object *)0x0;
        if ((char)property != '\0') {
          pOVar12 = pOStack_4;
        }
        pOVar12 = JsonSerializerInternalReader_CreateValueProperty
                           (this,this_02,property_00,target,(bool)uStack_5,pOVar12,(MethodInfo *)0x0)
        ;
        if ((((char)property == '\0') || (pOVar12 != pOStack_4)) &&
           (bVar10 = JsonSerializerInternalReader_ShouldSetPropertyValue
                              (this,property_00,pOVar12,(MethodInfo *)0x0), arg1 = target, bVar10 != 0
           )) {
          pIVar8 = (property_00->fields)._ValueProvider_k__BackingField;
          if (pIVar8 == (IValueProvider *)0x0) goto code_?;
          func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,pIVar8,target,
                          pOVar12);
          this_01 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                    (property_00->fields)._SetIsSpecified_k__BackingField;
          if (this_01 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
            property = (JsonProperty *)CONCAT13(1,property._0_3_);
            arg2 = func_?(TypeInfo__System__Boolean,(int)&property + 3);
            System.Core.dll::System::Action`2[Object,UnityEngine::
            ReflectionProbe+ReflectionProbeEvent]::
            Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                      (this_01,arg1,arg2,
                       MethodInfo__System__Action<System::Object,_System::Object>__Invoke_System__Object__System__Object_
                      );
          }
        }
        return;
      }
      goto code_?;
    }
  }
  if (this_02 != (JsonReader *)0x0) {
code_?:
    JsonReader::JsonReader_Skip(this_02,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean ShouldSetPropertyValue(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ShouldSetPropertyValue
               (JsonSerializerInternalReader *this,JsonProperty *property,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NStack_1.value = 0;
  NStack_1.has_value = 0;
  NStack_1._5_3_ = 0;
  NStack_2.value = 0;
  NStack_2.has_value = 0;
  NStack_2._5_3_ = 0;
  if (property != (JsonProperty *)0x0) {
    NStack_1 = (property->fields)._NullValueHandling_k__BackingField;
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar3 != (JsonSerializer *)0x0) {
      uVar4 = (*(code *)(pJVar3->klass->vtable).get_NullValueHandling.method)
                        (pJVar3,(pJVar3->klass->vtable).set_NullValueHandling.methodPtr);
      iVar5 = func_?(&NStack_1,uVar4,
                              MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                             );
      if ((iVar5 != 1) || (value != (Object *)0x0)) {
        pJVar3 = (this->fields)._._Serializer_k__BackingField;
        NStack_2 = (property->fields)._DefaultValueHandling_k__BackingField;
        if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
        uVar4 = (*(code *)(pJVar3->klass->vtable).get_DefaultValueHandling.method)
                          (pJVar3,(pJVar3->klass->vtable).set_DefaultValueHandling.methodPtr);
        uVar6 = func_?(&NStack_2,uVar4,
                                MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                               );
        if (((uVar6 & 1) != 0) &&
           (bVar7 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (value,(property->fields)._DefaultValue_k__BackingField,
                               (MethodInfo *)0x0), bVar7 != 0)) {
          return 0;
        }
        if ((property->fields)._Writable_k__BackingField != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* String 
   <CreateObjectFromNonDefaultConstructor>m__2(KeyValuePair`2[System.Reflection.ParameterInfo,System.Object])
    */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader__CreateObjectFromNonDefaultConstructor_m__2
                   (KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_ kv,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(&kv,
                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>__get_Key__
                                 );
  if (piVar1 != (int *)0x0) {
    pSVar2 = (String *)(**(code **)(*piVar1 + 0x108))(piVar1,*(undefined4 *)(*piVar1 + 0x10c));
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}

