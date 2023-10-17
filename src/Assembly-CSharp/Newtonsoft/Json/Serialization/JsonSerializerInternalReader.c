
/* Void CheckedRead(JsonReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_CheckedRead
               (JsonSerializerInternalReader *this,JsonReader *reader,MethodInfo *method)

{
  if (reader != (JsonReader *)0x0) {
    cVar1 = (*(reader->klass->vtable).__unknown.methodPtr)
                      (reader,(reader->klass->vtable).__unknown.method);
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    this_00 = (JsonSerializationException *)func_?(uVar2);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Unexpected_end_when_deserializin);
    JsonSerializationException::JsonSerializationException__ctor_1(this_00,message,method_00);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CheckedRead_Newtonsoft__Json__JsonReader_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Object CreateAndPopulateDictionary(JsonReader, JsonDictionaryContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateAndPopulateDictionary
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonDictionaryContract *contract,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
    cRam_? = '\x01';
  }
  if (contract != (JsonDictionaryContract *)0x0) {
    if ((contract->fields)._._DefaultCreator_k__BackingField == (Func_1_Object_ *)0x0)
    goto code_?;
    if ((contract->fields)._._DefaultCreatorNonPublic_k__BackingField != 0) {
      pJVar1 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar1 == (JsonSerializer *)0x0) goto code_?;
      iVar2 = (*(pJVar1->klass->vtable).get_ConstructorHandling.methodPtr)
                        (pJVar1,(pJVar1->klass->vtable).get_ConstructorHandling.method);
      if (iVar2 != 1) goto code_?;
    }
    pFVar3 = (contract->fields)._._DefaultCreator_k__BackingField;
    if (pFVar3 != (Func_1_Object_ *)0x0) {
      pOVar4 = (Object *)
               (*(pFVar3->fields)._._.invoke_impl)
                         ((pFVar3->fields)._._.method_code,(pFVar3->fields)._._.method);
      dictionary = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                             (contract,pOVar4,(MethodInfo *)0x0);
      JsonSerializerInternalReader_PopulateDictionary
                (this,dictionary,reader,contract,id,(MethodInfo *)0x0);
      if (dictionary != (IWrappedDictionary *)0x0) {
        pOVar4 = (Object *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                 dictionary);
        return pOVar4;
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar5);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar5 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar5);
  func_?(contract);
  pOVar4 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
           Tuple_3_Object_Object_Object__get_Item1
                     ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pOVar4);
  func_?(0,pOVar4);
  method_00 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Unable_to_find_a_default_constru);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar6,(IFormatProvider *)provider,args,method_00);
  uVar5 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_00 = (JsonSerializationException *)func_?(uVar5);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateAndPopulateDictionary_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonDictionaryContract__System__String_
                 );
  func_?();
  pcVar7 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar7)();
  return pOVar4;
}


/* Object CreateAndPopulateList(JsonReader, String, JsonArrayContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateAndPopulateList
                   (JsonSerializerInternalReader *this,JsonReader *reader,String *reference,
                   JsonArrayContract *contract,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Collections::IList,_bool>);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0___CreateAndPopulateList_b__0_System__Collections__IList__bool_
                   );
    func_?(&
                    TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           func_?(
                          TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0
                          );
  if (pOVar1 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    pOVar1[1].klass = (Object__Class *)reference;
    func_?(pOVar1 + 1,reference);
    pOVar1[1].monitor = (MonitorData *)contract;
    func_?(&pOVar1[1].monitor,contract);
    pOVar1[2].klass = (Object__Class *)this;
    func_?(pOVar1 + 2,this);
    pOVar1[2].monitor = (MonitorData *)reader;
    func_?(&pOVar1[2].monitor,reader);
    if (pOVar1[1].monitor != (MonitorData *)0x0) {
      listType = *(Type **)(pOVar1[1].monitor + 0xc);
      this_00 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                func_?(TypeInfo__System__Action<System::Collections::IList,_bool>);
      if (this_00 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                  (this_00,pOVar1,
                   MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0___CreateAndPopulateList_b__0_System__Collections__IList__bool_
                   ,(MethodInfo *)0x0);
        pOVar1 = Json::Utilities::CollectionUtils::CollectionUtils_CreateAndPopulateList
                           (listType,(Action_2_System_Collections_IList_Boolean_ *)this_00,
                            (MethodInfo *)0x0);
        return pOVar1;
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__System__Reflection__ConstructorInfo);
    cRam_? = '\x01';
  }
  if ((contract == (JsonObjectContract *)0x0) ||
     (pTVar1 = (contract->fields)._._UnderlyingType_k__BackingField, pTVar1 == (Type *)0x0)) {
code_?:
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Type::Type_get_IsInterface(pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
code_?:
      uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar3);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar3 = func_?(&TypeInfo__System__Object);
      args = (Object__Array *)func_?(uVar3);
      func_?(contract);
      pOVar4 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
               Tuple_3_Object_Object_Object__get_Item1
                         ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
      func_?(args);
      func_?(args,pOVar4);
      func_?();
      ppSVar5 = &StringLiteral_Could_not_create_an_instance_of_;
      goto code_?;
    }
    pTVar1 = (contract->fields)._._UnderlyingType_k__BackingField;
    if (pTVar1 == (Type *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Type::Type_get_IsAbstract(pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    pCVar6 = (contract->fields)._OverrideConstructor_k__BackingField;
    if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Reflection__ConstructorInfo);
    }
    bVar2 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                      (pCVar6,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pCVar6 = (contract->fields)._OverrideConstructor_k__BackingField;
      if (pCVar6 != (ConstructorInfo *)0x0) {
        iVar7 = (*(pCVar6->klass->vtable).__unknown_6.methodPtr)
                          (pCVar6,(pCVar6->klass->vtable).__unknown_6.method);
        if (iVar7 != 0) {
          pCVar6 = (contract->fields)._OverrideConstructor_k__BackingField;
          if (*(int *)(iVar7 + 0xc) != 0) {
            pOVar4 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                               (this,reader,contract,pCVar6,id,(MethodInfo *)0x0);
            return pOVar4;
          }
          if (pCVar6 != (ConstructorInfo *)0x0) {
            pOVar4 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                               (pCVar6,(Object__Array *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    if ((contract->fields)._._DefaultCreator_k__BackingField == (Func_1_Object_ *)0x0) {
code_?:
      pCVar6 = (contract->fields)._ParametrizedConstructor_k__BackingField;
      if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Reflection__ConstructorInfo);
      }
      bVar2 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                        (pCVar6,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pOVar4 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                           (this,reader,contract,
                            (contract->fields)._ParametrizedConstructor_k__BackingField,id,
                            (MethodInfo *)0x0);
        return pOVar4;
      }
    }
    else {
      if ((contract->fields)._._DefaultCreatorNonPublic_k__BackingField != 0) {
        pJVar8 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar8 == (JsonSerializer *)0x0) goto code_?;
        iVar7 = func_?(0x1a,pJVar8);
        if (iVar7 != 1) goto code_?;
      }
      pFVar9 = (contract->fields)._._DefaultCreator_k__BackingField;
      if (pFVar9 == (Func_1_Object_ *)0x0) goto code_?;
      pOVar4 = (Object *)
               (*(pFVar9->fields)._._.invoke_impl)
                         ((pFVar9->fields)._._.method_code,(pFVar9->fields)._._.method);
code_?:
      if (pOVar4 != (Object *)0x0) {
        JsonSerializerInternalReader_PopulateObject
                  (this,pOVar4,reader,contract,id,(MethodInfo *)0x0);
        return pOVar4;
      }
    }
  }
  uVar3 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar3);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar3 = func_?(&TypeInfo__System__Object,1);
  args = (Object__Array *)func_?(uVar3);
  func_?(contract);
  pOVar4 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
           Tuple_3_Object_Object_Object__get_Item1
                     ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pOVar4);
  func_?();
  ppSVar5 = &StringLiteral_Unable_to_find_a_constructor_to_;
code_?:
  method_00 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(ppSVar5);
  pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (pSVar10,(IFormatProvider *)provider,args,method_00);
  uVar3 = func_?();
  this_00 = (JsonSerializationException *)func_?(uVar3);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar10,(MethodInfo *)0x0);
  uStack11 =
       func_?(&
                       MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateAndPopulateObject_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
                      );
  pJStack12 = this_00;
  func_?();
  pcVar13 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar13)();
  return pOVar4;
}


/* Object CreateISerializable(JsonReader, JsonISerializableContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateISerializable
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonISerializableContract *contract,String *id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Runtime__Serialization__SerializationInfo);
    func_?(&TypeInfo__System__Runtime__Serialization__StreamingContext);
    cRam_? = '\x01';
  }
  if (contract == (JsonISerializableContract *)0x0) goto code_?;
  pOStack_1 = (ObjectConstructor_1_System_Object_ *)
              (contract->fields)._._UnderlyingType_k__BackingField;
  pOStack_2 = pOStack_1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
    cRam_? = '\x01';
  }
  if ((this->fields)._formatterConverter == (JsonFormatterConverter *)0x0) {
    value = JsonSerializerInternalReader_GetInternalSerializer(this,(MethodInfo *)0x0);
    pJVar3 = (JsonFormatterConverter *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
    if (pJVar3 == (JsonFormatterConverter *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_serializer);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar3,ExceptionArgument__Enum_obj,unaff_EDI);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)value,StringLiteral_serializer,(MethodInfo *)0x0);
    (pJVar3->fields)._serializer = (JsonSerializer *)value;
    func_?(&pJVar3->fields,value);
    (this->fields)._formatterConverter = pJVar3;
    func_?(&(this->fields)._formatterConverter,pJVar3);
  }
  pJVar3 = (this->fields)._formatterConverter;
  this_01 = (SerializationInfo *)
            func_?(TypeInfo__System__Runtime__Serialization__SerializationInfo);
  if (this_01 == (SerializationInfo *)0x0) goto code_?;
  mscorlib.dll::System::Runtime::Serialization::SerializationInfo::SerializationInfo__ctor
            (this_01,(Type *)pOStack_2,(IFormatterConverter *)pJVar3,(MethodInfo *)0x0);
  if (reader == (JsonReader *)0x0) goto code_?;
  do {
    iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar4 == 4) {
      piVar5 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)
                                (reader,(reader->klass->vtable).get_Value.method);
      if (piVar5 == (int *)0x0) goto code_?;
      pOStack_2 = (ObjectConstructor_1_System_Object_ *)
                  (**(code **)(*piVar5 + 0xd4))(piVar5,*(undefined4 *)(*piVar5 + 0xd8));
      cVar6 = (*(reader->klass->vtable).__unknown.methodPtr)
                        (reader,(reader->klass->vtable).__unknown.method);
      if (cVar6 == '\0') {
        uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar7);
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        uVar7 = func_?(&TypeInfo__System__Object,1);
        args = (Object__Array *)func_?(uVar7);
        func_?(args);
        pOVar8 = pOStack_2;
        func_?(args,pOStack_2);
        func_?(0,pOVar8);
        ppSVar9 = &StringLiteral_Unexpected_end_when_setting__0__;
        goto code_?;
      }
      value_00 = Linq::JToken::JToken_ReadFrom(reader,(MethodInfo *)0x0);
      mscorlib.dll::System::Runtime::Serialization::SerializationInfo::SerializationInfo_AddValue_1
                (this_01,(String *)pOStack_2,(Object *)value_00,(MethodInfo *)0x0);
    }
    else if (iVar4 != 5) {
      if (iVar4 != 0xd) {
        func_?(reader);
        contract = (JsonISerializableContract *)func_?(7,reader);
        uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&contract);
        func_?(uVar7);
        pSVar10 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_11,(MethodInfo *)0x0);
        pMVar12 = (MethodInfo *)0x0;
        str0 = (String *)func_?(&StringLiteral_Unexpected_token_when_deserializ);
        pSVar10 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar10,pMVar12);
        uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
        this_02 = (JsonSerializationException *)func_?(uVar7);
        func_?(this_02);
        JsonSerializationException::JsonSerializationException__ctor_1
                  (this_02,pSVar10,(MethodInfo *)0x0);
        pOStack_1 = (ObjectConstructor_1_System_Object_ *)
                    func_?(&
                                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateISerializable_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonISerializableContract__System__String_
                                   );
        goto code_?;
      }
      break;
    }
    cVar6 = (*(reader->klass->vtable).__unknown.methodPtr)
                      (reader,(reader->klass->vtable).__unknown.method);
  } while (cVar6 != '\0');
  if ((contract->fields)._ISerializableCreator_k__BackingField ==
      (ObjectConstructor_1_System_Object_ *)0x0) {
    uVar7 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar7);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar7 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar7);
    func_?(args);
    pOVar8 = pOStack_1;
    func_?(args,pOStack_1);
    func_?(0,pOVar8);
    ppSVar9 = &StringLiteral_ISerializable_type___0___does_no;
code_?:
    pMVar12 = (MethodInfo *)0x0;
    pSVar10 = (String *)func_?(ppSVar9);
    pSVar10 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar10,(IFormatProvider *)provider,args,pMVar12);
    uVar7 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    this_02 = (JsonSerializationException *)func_?(uVar7);
    func_?(this_02);
    JsonSerializationException::JsonSerializationException__ctor_1
              (this_02,pSVar10,(MethodInfo *)0x0);
    pOStack_1 = (ObjectConstructor_1_System_Object_ *)
                func_?(&
                                MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateISerializable_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonISerializableContract__System__String_
                               );
code_?:
    auStack_11._0_4_ = &UNK_?;
    auStack_11._4_4_ = this_02;
    func_?();
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
  }
  else {
    pOStack_2 = (contract->fields)._ISerializableCreator_k__BackingField;
    piVar5 = (int *)func_?(TypeInfo__System__Object,2);
    if (piVar5 == (int *)0x0) goto code_?;
    iVar4 = func_?(this_01,*(undefined4 *)(*piVar5 + 0x20));
    if (iVar4 == 0) goto code_?;
    if (piVar5[3] != 0) {
      piVar5[4] = (int)this_01;
      func_?(piVar5 + 4,this_01);
      pJVar13 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
      join_0x00000008_0x00000000_ =
           (*(pJVar13->klass->vtable).get_Context.methodPtr)
                     (pJVar13,(pJVar13->klass->vtable).get_Context.method);
      iVar4 = func_?(TypeInfo__System__Runtime__Serialization__StreamingContext,
                              auStack_11 + 4);
      if (iVar4 != 0) {
        iVar14 = func_?(iVar4,*(undefined4 *)(*piVar5 + 0x20));
        if (iVar14 == 0) goto code_?;
      }
      if (1 < (uint)piVar5[3]) {
        piVar5[5] = iVar4;
        func_?(piVar5 + 5,iVar4);
        pOVar15 = (Object *)
                  (*(pOStack_2->fields)._._.invoke_impl)
                            ((pOStack_2->fields)._._.method_code,piVar5,
                             (pOStack_2->fields)._._.method);
        pSVar10 = id;
        if (id != (String *)0x0) {
          pJVar13 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar13 == (JsonSerializer *)0x0) goto code_?;
          iVar4 = (*(pJVar13->klass->vtable).get_ReferenceResolver.methodPtr)
                            (pJVar13,(pJVar13->klass->vtable).get_ReferenceResolver.method);
          if (iVar4 == 0) goto code_?;
          func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar4,this
                          ,pSVar10,pOVar15);
        }
        pJVar13 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar13 != (JsonSerializer *)0x0) {
          SVar16 = (StreamingContext)
                  (*(pJVar13->klass->vtable).get_Context.methodPtr)
                            (pJVar13,(pJVar13->klass->vtable).get_Context.method);
          this_00 = contract;
          JsonContract::JsonContract_InvokeOnDeserializing
                    ((JsonContract *)contract,pOVar15,SVar16,(MethodInfo *)0x0);
          pJVar13 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar13 != (JsonSerializer *)0x0) {
            SVar16 = (StreamingContext)
                    (*(pJVar13->klass->vtable).get_Context.methodPtr)
                              (pJVar13,(pJVar13->klass->vtable).get_Context.method);
            JsonContract::JsonContract_InvokeOnDeserialized
                      ((JsonContract *)this_00,pOVar15,SVar16,(MethodInfo *)0x0);
            return pOVar15;
          }
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  pOVar15 = (Object *)(*pcVar17)();
  return pOVar15;
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
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  this_00 = (JTokenWriter *)func_?(TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
  if (this_00 != (JTokenWriter *)0x0) {
    Linq::JTokenWriter::JTokenWriter__ctor_1(this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    if (this_00 != (JTokenWriter *)0x0) {
      (*(this_00->klass->vtable).WriteStartObject.methodPtr)();
      if (reader != (JsonReader *)0x0) {
        iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
        if (iVar4 == 4) {
          iVar4 = (*(reader->klass->vtable).get_Depth.methodPtr)();
          if (this_00 == (JTokenWriter *)0x0) goto code_?;
          JsonWriter::JsonWriter_WriteToken_1
                    ((JsonWriter *)this_00,reader,iVar4 + -1,(MethodInfo *)0x0);
        }
        else {
          if (this_00 == (JTokenWriter *)0x0) goto code_?;
          (*(this_00->klass->vtable).WriteEndObject.methodPtr)();
        }
        if (this_00 != (JTokenWriter *)0x0) {
          pJVar5 = Linq::JTokenWriter::JTokenWriter_get_Token(this_00,(MethodInfo *)0x0);
          uStack_1 = 0xffffffff;
          if (this_00 != (JTokenWriter *)0x0) {
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return pJVar5;
          }
          *unaff_FS_OFFSET = uStack_3;
          return pJVar5;
        }
      }
    }
  }
code_?:
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeRef__Newtonsoft__Json__Linq__JRaw);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JTokenWriter);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_reader);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)reader,StringLiteral_reader,(MethodInfo *)0x0);
  handle = TypeRef__Newtonsoft__Json__Linq__JRaw;
  if (contract != (JsonContract *)0x0) {
    left = (contract->fields)._UnderlyingType_k__BackingField;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)left,(Object **)right,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pJVar5 = Linq::JRaw::JRaw_Create(reader,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = iStack_3;
      return (JToken *)pJVar5;
    }
  }
  this_00 = (JTokenWriter *)func_?();
  if (this_00 != (JTokenWriter *)0x0) {
    Linq::JTokenWriter::JTokenWriter__ctor_1(this_00,(MethodInfo *)0x0);
    uStack_1 = 1;
    if (this_00 != (JTokenWriter *)0x0) {
      JsonWriter::JsonWriter_WriteToken((JsonWriter *)this_00,reader,(MethodInfo *)0x0);
      if (this_00 != (JTokenWriter *)0x0) {
        iVar6 = 0;
        pJVar7 = Linq::JTokenWriter::JTokenWriter_get_Token(this_00,(MethodInfo *)0x0);
        uStack_1 = 0xffffffff;
        if (iVar6 != 0) {
          iStack_3 = iVar6;
          func_?();
          *unaff_FS_OFFSET = iStack_3;
          return pJVar7;
        }
        *unaff_FS_OFFSET = iStack_3;
        return pJVar7;
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  pJVar7 = (JToken *)(*pcVar8)();
  return pJVar7;
}


/* Object CreateList(JsonReader, Type, JsonContract, JsonProperty, Object, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateList
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   String *reference,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Collections__BitArray);
    func_?(&TypeInfo__System__Type);
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
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)objectType,(Object **)pTVar3,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (this_00 != (JsonArrayContract *)0x0) {
        wrappedList = JsonArrayContract::JsonArrayContract_CreateWrapper
                                (this_00,existingValue,(MethodInfo *)0x0);
        pOVar4 = JsonSerializerInternalReader_PopulateList
                           (this,wrappedList,(JsonReader *)0x0,(String *)0x0,this_00,
                            (MethodInfo *)0x0);
        return pOVar4;
      }
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pOVar4 = (Object *)func_?();
  if (pOVar4 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)this_00);
    pOVar4[1].klass = (Object__Class *)reference;
    func_?();
    pOVar4[1].monitor = (MonitorData *)this_00;
    func_?(&pOVar4[1].monitor);
    pOVar4[2].klass = (Object__Class *)this;
    func_?(pOVar4 + 2,this);
    pOVar4[2].monitor = (MonitorData *)reference;
    func_?(&pOVar4[2].monitor,reference);
    if (pOVar4[1].monitor != (MonitorData *)0x0) {
      pTVar3 = *(Type **)(pOVar4[1].monitor + 0xc);
      this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)func_?();
      if (this_01 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                  (this_01,pOVar4,
                   MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass27_0___CreateAndPopulateList_b__0_System__Collections__IList__bool_
                   ,(MethodInfo *)0x0);
        pOVar4 = Json::Utilities::CollectionUtils::CollectionUtils_CreateAndPopulateList
                           (pTVar3,(Action_2_System_Collections_IList_Boolean_ *)this_01,
                            (MethodInfo *)0x0);
        return pOVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* Object CreateObject(JsonReader, Type, JsonContract, JsonProperty, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateObject
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   MethodInfo *method)

{
  pJVar1 = (JsonSerializationException *)reader;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb8;
  puVar6 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__GetValueOrDefault__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::TypeNameHandling>__get_HasValue__
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral__value);
    func_?(&StringLiteral__type);
    func_?(&StringLiteral__values);
    func_?(&StringLiteral__id);
    func_?(&StringLiteral__ref);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pSStack_7 = (String *)0x0;
  pSStack_8 = (String *)0x0;
  if (reader == (JsonReader *)0x0) goto code_?;
  cVar9 = (*(reader->klass->vtable).__unknown.methodPtr)
                    (reader,(reader->klass->vtable).__unknown.method);
  if (cVar9 == '\0') {
code_?:
    func_?();
    pJVar1 = (JsonSerializationException *)func_?();
    func_?();
    pMVar10 = (MethodInfo *)0x0;
    pSVar11 = (String *)func_?();
    JsonSerializationException::JsonSerializationException__ctor_1(pJVar1,pSVar11,pMVar10);
    func_?();
    func_?();
code_?:
    uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar12);
    pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    uVar12 = func_?(&TypeInfo__System__Object);
    pOVar14 = (Object__Array *)func_?(uVar12);
    pSVar11 = pSStack_15;
    func_?(pSStack_15);
    uVar12 = func_?(0x18,pSVar11);
    func_?(pOVar14);
    func_?(pOVar14,uVar12);
    func_?(0);
    func_?(objectType);
    uVar12 = func_?(0x18,objectType);
    func_?(pOVar14);
    func_?(pOVar14,uVar12);
    func_?(1,uVar12);
    ppSVar16 = &StringLiteral_Type_specified_in_JSON___0___is_;
code_?:
    pMVar10 = (MethodInfo *)0x0;
    pSVar11 = (String *)func_?(ppSVar16);
    pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar11,(IFormatProvider *)pCVar13,pOVar14,pMVar10);
    uVar12 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    pJVar1 = (JsonSerializationException *)func_?(uVar12);
    func_?(pJVar1);
    JsonSerializationException::JsonSerializationException__ctor_1
              (pJVar1,pSVar11,(MethodInfo *)0x0);
    ppMVar17 = &
               MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateObject_Newtonsoft__Json__JsonReader__System__Type__Newtonsoft__Json__Serialization__JsonContract__Newtonsoft__Json__Serialization__JsonProperty__System__Object_
    ;
  }
  else {
    ppJVar18 = &reader->klass;
    reader = (JsonReader *)0x0;
    iVar19 = (*((*ppJVar18)->vtable).get_TokenType.methodPtr)();
    if (iVar19 == 4) {
      reader = (JsonReader *)0x0;
      do {
        piVar20 = (int *)(*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)
                                   (pJVar1,(((JsonReader *)pJVar1)->klass->vtable).get_Value.
                                            method);
        if (piVar20 == (int *)0x0) goto code_?;
        pSStack_15 = (String *)
                     (**(code **)(*piVar20 + 0xd4))(piVar20,*(undefined4 *)(*piVar20 + 0xd8));
        bVar21 = mscorlib.dll::System::String::String_Equals_4
                          (pSStack_15,StringLiteral__ref,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar21 == 0) {
          bVar21 = mscorlib.dll::System::String::String_Equals_4
                            (pSStack_15,StringLiteral__type,StringComparison__Enum_Ordinal,
                             (MethodInfo *)0x0);
          if (bVar21 == 0) {
            bVar21 = mscorlib.dll::System::String::String_Equals_4
                              (pSStack_15,StringLiteral__id,StringComparison__Enum_Ordinal,
                               (MethodInfo *)0x0);
            if (bVar21 == 0) {
              bVar21 = mscorlib.dll::System::String::String_Equals_4
                                (pSStack_15,StringLiteral__values,StringComparison__Enum_Ordinal,
                                 (MethodInfo *)0x0);
              if (bVar21 != 0) {
                JsonSerializerInternalReader_CheckedRead
                          (this,(JsonReader *)pJVar1,(MethodInfo *)0x0);
                pOVar22 = JsonSerializerInternalReader_CreateList
                                    (this,(JsonReader *)pJVar1,objectType,contract,member,
                                     existingValue,(String *)reader,(MethodInfo *)0x0);
                JsonSerializerInternalReader_CheckedRead
                          (this,(JsonReader *)pJVar1,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_4;
                return pOVar22;
              }
              break;
            }
            cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)
                              (pJVar1,(((JsonReader *)pJVar1)->klass->vtable).__unknown.method);
            if (cVar9 == '\0') goto code_?;
            iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)();
            if (iVar19 == 0) {
              reader = (JsonReader *)0x0;
            }
            else {
              piVar20 = (int *)(*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)();
              if (piVar20 == (int *)0x0) goto code_?;
              reader = (JsonReader *)
                       (**(code **)(*piVar20 + 0xd4))(piVar20,*(undefined4 *)(*piVar20 + 0xd8));
            }
            cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)();
            if (cVar9 == '\0') goto code_?;
          }
          else {
            cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)
                              (pJVar1,(((JsonReader *)pJVar1)->klass->vtable).__unknown.method);
            if (cVar9 == '\0') goto code_?;
            piVar20 = (int *)(*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)();
            if (piVar20 == (int *)0x0) goto code_?;
            pSStack_23 = (String *)
                         (**(code **)(*piVar20 + 0xd4))(piVar20,*(undefined4 *)(*piVar20 + 0xd8));
            cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)
                              (pJVar1,(((JsonReader *)pJVar1)->klass->vtable).__unknown.method);
            if (cVar9 == '\0') goto code_?;
            if (member == (JsonProperty *)0x0) {
              iStack_24 = 0;
              cVar9 = '\0';
            }
            else {
              cVar9 = (char)*(undefined4 *)&(member->fields)._TypeNameHandling_k__BackingField;
              iStack_24 = (member->fields)._TypeNameHandling_k__BackingField.value;
            }
            if (cVar9 == '\0') {
              pJVar25 = (this->fields)._._Serializer_k__BackingField;
              if (pJVar25 == (JsonSerializer *)0x0) goto code_?;
              iStack_24 = (*(pJVar25->klass->vtable).get_TypeNameHandling.methodPtr)
                                    (pJVar25,(pJVar25->klass->vtable).get_TypeNameHandling.method);
            }
            if (iStack_24 != 0) {
              Json::Utilities::ReflectionUtils::ReflectionUtils_SplitFullyQualifiedTypeName
                        (pSStack_23,&pSStack_7,&pSStack_8,(MethodInfo *)0x0);
              pJVar25 = (this->fields)._._Serializer_k__BackingField;
              uStack_2 = 0;
              if ((pJVar25 == (JsonSerializer *)0x0) ||
                 (piVar20 = (int *)(*(pJVar25->klass->vtable).get_Binder.methodPtr)(),
                 piVar20 == (int *)0x0)) goto code_?;
              pSVar11 = (String *)
                        (**(code **)(*piVar20 + 0xe4))
                                  (piVar20,pSStack_8,pSStack_7,*(undefined4 *)(*piVar20 + 0xe8));
              uStack_2 = 0xffffffff;
              pSStack_15 = pSVar11;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Type);
              }
              bVar21 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                                ((Object **)pSVar11,(Object **)0x0,(MethodInfo *)0x0);
              if (bVar21 != 0) {
                uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
                func_?(uVar12);
                pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::
                          CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                uVar12 = func_?(&TypeInfo__System__Object,1);
                pOVar14 = (Object__Array *)func_?(uVar12);
                func_?(pOVar14);
                pSVar11 = pSStack_23;
                func_?(pOVar14,pSStack_23);
                func_?(0,pSVar11);
                ppSVar16 = &StringLiteral_Type_specified_in_JSON___0___was;
                goto code_?;
              }
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Type);
              }
              bVar21 = mscorlib.dll::System::Threading::CancellationToken::
                      CancellationToken_op_Inequality
                                ((CancellationToken)objectType,(CancellationToken)0x0,
                                 (MethodInfo *)0x0);
              if (bVar21 != 0) {
                if (objectType == (Type *)0x0) goto code_?;
                cVar9 = (*(objectType->klass->vtable).IsAssignableFrom.methodPtr)
                                  (objectType,pSStack_15,
                                   (objectType->klass->vtable).IsAssignableFrom.method);
                if (cVar9 == '\0') goto code_?;
              }
              objectType = (Type *)pSStack_15;
              contract = JsonSerializerInternalReader_GetContractSafe
                                   (this,(Type *)pSStack_15,(MethodInfo *)0x0);
            }
          }
        }
        else {
          cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)
                            (pJVar1,(((JsonReader *)pJVar1)->klass->vtable).__unknown.method);
          if (cVar9 == '\0') goto code_?;
          iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_TokenType.methodPtr)();
          if ((iVar19 != 9) &&
             (iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_TokenType.methodPtr)(),
             iVar19 != 0xb)) {
            func_?();
            func_?();
            pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            func_?();
            pOVar14 = (Object__Array *)func_?();
            func_?();
            uVar12 = func_?();
            func_?(pOVar14,uVar12);
            func_?(&StringLiteral__ref);
            func_?();
            ppSVar16 = &StringLiteral_JSON_reference__0__property_must;
            goto code_?;
          }
          iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)();
          if (iVar19 == 0) {
            pSStack_23 = (String *)0x0;
          }
          else {
            piVar20 = (int *)(*(((JsonReader *)pJVar1)->klass->vtable).get_Value.methodPtr)();
            if (piVar20 == (int *)0x0) goto code_?;
            pSStack_23 = (String *)
                         (**(code **)(*piVar20 + 0xd4))(piVar20,*(undefined4 *)(*piVar20 + 0xd8));
          }
          cVar9 = (*(((JsonReader *)pJVar1)->klass->vtable).__unknown.methodPtr)();
          if (cVar9 == '\0') goto code_?;
          if (pSStack_23 != (String *)0x0) {
            iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_TokenType.methodPtr)();
            if (iVar19 == 4) {
              uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
              func_?(uVar12);
              pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::
                        CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              uVar12 = func_?(&TypeInfo__System__Object);
              pOVar14 = (Object__Array *)func_?(uVar12);
              func_?(pOVar14);
              uVar12 = func_?(&StringLiteral__ref);
              func_?(pOVar14,uVar12);
              func_?(&StringLiteral__ref);
              func_?(0);
              ppSVar16 = &StringLiteral_Additional_content_found_in_JSON;
              goto code_?;
            }
            pJVar25 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar25 == (JsonSerializer *)0x0) goto code_?;
            piVar20 = (int *)func_?(6,pJVar25);
            pJVar1 = (JsonSerializationException *)0x0;
            if (piVar20 == (int *)0x0) goto code_?;
            pSStack_15 = (String *)*piVar20;
            uVar26 = 0;
            if (*(ushort *)((int)pSStack_15 + 0xb2) == 0) goto code_?;
            goto code_?;
          }
        }
        iVar19 = (*(((JsonReader *)pJVar1)->klass->vtable).get_TokenType.methodPtr)();
      } while (iVar19 == 4);
    }
    bVar21 = JsonSerializerInternalReader_HasDefinedType(this,objectType,(MethodInfo *)0x0);
    if (bVar21 == 0) {
      pJVar27 = JsonSerializerInternalReader_CreateJObject
                          (this,(JsonReader *)pJVar1,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_4;
      return (Object *)pJVar27;
    }
    if ((JsonDictionaryContract *)contract == (JsonDictionaryContract *)0x0) {
      uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar12);
      pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar12 = func_?(&TypeInfo__System__Object);
      pOVar14 = (Object__Array *)func_?(uVar12);
      func_?(pOVar14);
      func_?(pOVar14,objectType);
      func_?(0);
      ppSVar16 = &StringLiteral_Could_not_resolve_type___0___to_;
      goto code_?;
    }
    if (((((JsonDictionaryContract *)contract)->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).typeHierarchyDepth)
       || ((((JsonDictionaryContract *)contract)->klass->_1).typeHierarchy
           [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
            typeHierarchyDepth - 1] !=
           (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
      if (((((JsonDictionaryContract *)contract)->klass->_1).typeHierarchyDepth <
           (TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).typeHierarchyDepth)
         || ((((JsonDictionaryContract *)contract)->klass->_1).typeHierarchy
             [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).typeHierarchyDepth
              - 1] != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract))
      {
        contract_00 = (JsonContract *)
                      func_?(contract,
                                      TypeInfo__Newtonsoft__Json__Serialization__JsonPrimitiveContract
                                     );
        if ((contract_00 != (JsonContract *)0x0) &&
           (iVar19 = func_?(7,pJVar1), iVar19 == 4)) {
          iVar19 = func_?(8,pJVar1);
          if (iVar19 == 0) goto code_?;
          pSVar11 = (String *)func_?(3,iVar19);
          bVar21 = mscorlib.dll::System::String::String_Equals_4
                            (pSVar11,StringLiteral__value,StringComparison__Enum_Ordinal,
                             (MethodInfo *)0x0);
          if (bVar21 != 0) {
            JsonSerializerInternalReader_CheckedRead(this,(JsonReader *)pJVar1,(MethodInfo *)0x0);
            pOVar22 = JsonSerializerInternalReader_CreateValueInternal
                                (this,(JsonReader *)pJVar1,objectType,contract_00,member,
                                 existingValue,(MethodInfo *)0x0);
            JsonSerializerInternalReader_CheckedRead(this,(JsonReader *)pJVar1,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return pOVar22;
          }
        }
        contract_01 = (JsonISerializableContract *)
                      func_?(contract,
                                      TypeInfo__Newtonsoft__Json__Serialization__JsonISerializableContract
                                     );
        if (contract_01 != (JsonISerializableContract *)0x0) {
          pOVar22 = JsonSerializerInternalReader_CreateISerializable
                              (this,(JsonReader *)pJVar1,contract_01,(String *)reader,
                               (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_4;
          return pOVar22;
        }
        uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar12);
        pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar12 = func_?(&TypeInfo__System__Object);
        pOVar14 = (Object__Array *)func_?(uVar12);
        func_?(pOVar14);
        func_?(pOVar14,objectType);
        func_?(0);
        ppSVar16 = &StringLiteral_Cannot_deserialize_JSON_object_i;
        goto code_?;
      }
      if (existingValue != (Object *)0x0) {
        pOVar22 = JsonSerializerInternalReader_PopulateObject
                            (this,existingValue,(JsonReader *)pJVar1,(JsonObjectContract *)contract
                             ,(String *)reader,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return pOVar22;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Reflection__ConstructorInfo);
        cRam_? = '\x01';
      }
      pTVar28 = (((JsonDictionaryContract *)contract)->fields)._._UnderlyingType_k__BackingField;
      if (pTVar28 == (Type *)0x0) goto code_?;
      bVar21 = mscorlib.dll::System::Type::Type_get_IsInterface(pTVar28,(MethodInfo *)0x0);
      if (bVar21 == 0) {
        pTVar28 = (((JsonDictionaryContract *)contract)->fields)._._UnderlyingType_k__BackingField;
        if (pTVar28 == (Type *)0x0) goto code_?;
        bVar21 = mscorlib.dll::System::Type::Type_get_IsAbstract(pTVar28,(MethodInfo *)0x0);
        if (bVar21 != 0) goto code_?;
        pCVar29 = *(ConstructorInfo **)
                  &(((JsonDictionaryContract *)contract)->fields)._isDictionaryValueTypeNullableType
        ;
        if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar21 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                          (pCVar29,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
        if (bVar21 == 0) {
          if ((((JsonDictionaryContract *)contract)->fields)._._DefaultCreator_k__BackingField !=
              (Func_1_Object_ *)0x0) {
            if ((((JsonDictionaryContract *)contract)->fields)._.
                _DefaultCreatorNonPublic_k__BackingField != 0) {
              pJVar25 = (this->fields)._._Serializer_k__BackingField;
              if (pJVar25 == (JsonSerializer *)0x0) goto code_?;
              iVar19 = func_?(0x1a,pJVar25);
              if (iVar19 != 1) goto code_?;
            }
            pFVar30 = (((JsonDictionaryContract *)contract)->fields)._.
                     _DefaultCreator_k__BackingField;
            if (pFVar30 == (Func_1_Object_ *)0x0) goto code_?;
            pSStack_23 = (String *)
                         (*(pFVar30->fields)._._.invoke_impl)
                                   ((pFVar30->fields)._._.method_code,(pFVar30->fields)._._.method);
            goto code_?;
          }
code_?:
          pTVar28 = (((JsonDictionaryContract *)contract)->fields)._genericCollectionDefinitionType;
          if ((TypeInfo__System__Reflection__ConstructorInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Reflection__ConstructorInfo);
          }
          bVar21 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_op_Inequality
                            ((ConstructorInfo *)pTVar28,(ConstructorInfo *)0x0,(MethodInfo *)0x0);
          if (bVar21 != 0) {
            pOVar22 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                                (this,(JsonReader *)pJVar1,(JsonObjectContract *)contract,
                                 (ConstructorInfo *)
                                 (((JsonDictionaryContract *)contract)->fields).
                                 _genericCollectionDefinitionType,(String *)reader,(MethodInfo *)0x0
                                );
            *unaff_FS_OFFSET = uStack_4;
            return pOVar22;
          }
        }
        else {
          piVar20 = *(int **)&(((JsonDictionaryContract *)contract)->fields).
                              _isDictionaryValueTypeNullableType;
          if ((piVar20 == (int *)0x0) ||
             (iVar19 = (**(code **)(*piVar20 + 0x134))(piVar20,*(undefined4 *)(*piVar20 + 0x138)),
             iVar19 == 0)) goto code_?;
          pCVar29 = *(ConstructorInfo **)
                    &(((JsonDictionaryContract *)contract)->fields).
                     _isDictionaryValueTypeNullableType;
          if (*(int *)(iVar19 + 0xc) != 0) {
            pOVar22 = JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                                (this,(JsonReader *)pJVar1,(JsonObjectContract *)contract,pCVar29,
                                 (String *)reader,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return pOVar22;
          }
          if (pCVar29 == (ConstructorInfo *)0x0) goto code_?;
          pSStack_23 = (String *)
                       mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                                 (pCVar29,(Object__Array *)0x0,(MethodInfo *)0x0);
code_?:
          if (pSStack_23 != (String *)0x0) {
            JsonSerializerInternalReader_PopulateObject
                      (this,(Object *)pSStack_23,(JsonReader *)pJVar1,
                       (JsonObjectContract *)contract,(String *)reader,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_4;
            return (Object *)pSStack_23;
          }
        }
        func_?();
        func_?();
        pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        func_?();
        pOVar14 = (Object__Array *)func_?();
        func_?();
        pOVar22 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
                  Tuple_3_Object_Object_Object__get_Item1
                            ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
        func_?();
        func_?(pOVar14,pOVar22);
        func_?();
      }
      else {
code_?:
        uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
        func_?(uVar12);
        pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        uVar12 = func_?(&TypeInfo__System__Object,1);
        pOVar14 = (Object__Array *)func_?(uVar12);
        func_?(contract);
        pOVar22 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
                  Tuple_3_Object_Object_Object__get_Item1
                            ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
        func_?(pOVar14);
        func_?(pOVar14,pOVar22);
        func_?(0,pOVar22);
      }
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?();
      pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (pSVar11,(IFormatProvider *)pCVar13,pOVar14,pMVar10);
      func_?();
      pJVar1 = (JsonSerializationException *)func_?();
      func_?();
      JsonSerializationException::JsonSerializationException__ctor_1
                (pJVar1,pSVar11,(MethodInfo *)0x0);
      ppMVar17 = &
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateAndPopulateObject_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
      ;
    }
    else {
      if (existingValue != (Object *)0x0) {
        pIVar31 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                            ((JsonDictionaryContract *)contract,existingValue,(MethodInfo *)0x0);
        pOVar22 = JsonSerializerInternalReader_PopulateDictionary
                            (this,pIVar31,(JsonReader *)pJVar1,(JsonDictionaryContract *)contract,
                             (String *)reader,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return pOVar22;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
        cRam_? = '\x01';
      }
      if ((((JsonDictionaryContract *)contract)->fields)._._DefaultCreator_k__BackingField !=
          (Func_1_Object_ *)0x0) {
        if ((((JsonDictionaryContract *)contract)->fields)._.
            _DefaultCreatorNonPublic_k__BackingField != 0) {
          pJVar25 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar25 == (JsonSerializer *)0x0) goto code_?;
          iVar19 = (*(pJVar25->klass->vtable).get_ConstructorHandling.methodPtr)
                             (pJVar25,(pJVar25->klass->vtable).get_ConstructorHandling.method);
          if (iVar19 != 1) goto code_?;
        }
        pFVar30 = (((JsonDictionaryContract *)contract)->fields)._._DefaultCreator_k__BackingField;
        if (pFVar30 != (Func_1_Object_ *)0x0) {
          pOVar22 = (Object *)
                    (*(pFVar30->fields)._._.invoke_impl)
                              ((pFVar30->fields)._._.method_code,(pFVar30->fields)._._.method);
          pIVar31 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                              ((JsonDictionaryContract *)contract,pOVar22,(MethodInfo *)0x0);
          JsonSerializerInternalReader_PopulateDictionary
                    (this,pIVar31,(JsonReader *)pJVar1,(JsonDictionaryContract *)contract,
                     (String *)reader,(MethodInfo *)0x0);
          if (pIVar31 != (IWrappedDictionary *)0x0) {
            pOVar22 = (Object *)
                      func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                      pIVar31);
            *unaff_FS_OFFSET = uStack_4;
            return pOVar22;
          }
        }
        goto code_?;
      }
code_?:
      uVar12 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar12);
      pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar12 = func_?(&TypeInfo__System__Object);
      pOVar14 = (Object__Array *)func_?(uVar12);
      func_?(contract);
      pOVar22 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
                Tuple_3_Object_Object_Object__get_Item1
                          ((Tuple_3_Object_Object_Object_ *)contract,(MethodInfo *)0x0);
      func_?(pOVar14);
      func_?(pOVar14,pOVar22);
      func_?();
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_Unable_to_find_a_default_constru);
      pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (pSVar11,(IFormatProvider *)pCVar13,pOVar14,pMVar10);
      uVar12 = func_?();
      pJVar1 = (JsonSerializationException *)func_?(uVar12);
      func_?(pJVar1);
      JsonSerializationException::JsonSerializationException__ctor_1
                (pJVar1,pSVar11,(MethodInfo *)0x0);
      ppMVar17 = &
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreateAndPopulateDictionary_Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonDictionaryContract__System__String_
      ;
    }
  }
  func_?(ppMVar17);
  func_?();
code_?:
  func_?();
  pJStack_32 = pJVar1->klass;
  func_?(&pJStack_32,&UNK_?);
  pcVar33 = (code *)swi(3);
  pOVar22 = (Object *)(*pcVar33)();
  return pOVar22;
  while (uVar26 = uVar26 + 1, uVar26 < *(ushort *)((int)pSStack_15 + 0xb2)) {
code_?:
    if (*(IReferenceResolver__Class **)(*(int *)((int)pSStack_15 + 0x58) + (uint)uVar26 * 8) ==
        TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver) {
      puVar34 = (undefined4 *)
                (*(int *)(*(int *)(*piVar20 + 0x58) + 4 + (uint)uVar26 * 8) * 8 + 0xbc + *piVar20);
      goto code_?;
    }
  }
code_?:
  puVar34 = (undefined4 *)
            func_?(piVar20,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,0)
  ;
code_?:
  pOVar22 = (Object *)(*(code *)*puVar34)(piVar20,this,pSStack_23,puVar34[1]);
  *unaff_FS_OFFSET = uStack_4;
  return pOVar22;
}


/* Object CreateObjectFromNonDefaultConstructor(JsonReader, JsonObjectContract, ConstructorInfo,
   String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateObjectFromNonDefaultConstructor
                   (JsonSerializerInternalReader *this,JsonReader *reader,
                   JsonObjectContract *contract,ConstructorInfo *constructorInfo,String *id,
                   MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__DictionaryEntry);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                   );
    func_?(&
                    System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
                   );
    func_?(&
                    System__Collections__Generic__Dictionary<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo,_System::Object>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Object>_
                   );
    func_?(&TypeInfo__System__Func<System::Reflection::ParameterInfo,_System::Object>);
    func_?(&
                    TypeInfo__System__Func<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>,_System::String>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__ICollection<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<System::Reflection::ParameterInfo,_System::Object>
                   );
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IValueProvider);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__get_Value__
                   );
    func_?(&
                    System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>,_System::String>__System__String_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_0_System__Reflection__ParameterInfo_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_1_System__Reflection__ParameterInfo_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_2_System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
    func_?(&StringLiteral_constructorInfo);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)constructorInfo,StringLiteral_constructorInfo,(MethodInfo *)0x0);
  if ((contract != (JsonObjectContract *)0x0) &&
     (pIVar4 = JsonSerializerInternalReader_ResolvePropertyAndConstructorValues
                         (this,contract,reader,(contract->fields)._._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0), constructorInfo != (ConstructorInfo *)0x0)) {
    pIVar5 = (IEnumerable_1_System_Object_ *)
             (*(constructorInfo->klass->vtable).__unknown_6.methodPtr)();
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
              static_fields->__9__33_0;
    if (this_00 == (Func_2_System_Reflection_ParameterInfo_System_Reflection_ParameterInfo_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pJVar6 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
               static_fields->__9;
      this_00 = (Func_2_System_Reflection_ParameterInfo_System_Reflection_ParameterInfo_ *)
                func_?();
      if (this_00 == (Func_2_System_Reflection_ParameterInfo_System_Reflection_ParameterInfo_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_00,
                 (Object *)pJVar6,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_0_System__Reflection__ParameterInfo_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->static_fields->
      __9__33_0 = this_00;
      func_?();
    }
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
              static_fields->__9__33_1;
    if (this_01 == (Func_2_System_Reflection_ParameterInfo_Object_ *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pJVar6 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
               static_fields->__9;
      this_01 = (Func_2_System_Reflection_ParameterInfo_Object_ *)func_?();
      if (this_01 == (Func_2_System_Reflection_ParameterInfo_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,
                 (Object *)pJVar6,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_1_System__Reflection__ParameterInfo_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->static_fields->
      __9__33_1 = this_01;
      func_?();
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_6
                       (pIVar5,(Func_2_Object_Object_ *)this_00,(Func_2_Object_Object_ *)this_01,
                        System__Collections__Generic__Dictionary<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo,_System::Object>_System__Collections__Generic__IEnumerable<System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Reflection::ParameterInfo>__System__Func<System::Reflection::ParameterInfo,_System::Object>_
                       );
    this_02 = (ParameterOverride_1_System_Object_ *)func_?();
    if ((this_02 != (ParameterOverride_1_System_Object_ *)0x0) &&
       (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
                  ),
       pIVar4 != (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)0x0)) {
      piVar7 = (int *)func_?();
      uStack_1._0_1_ = 1;
      uStack_1._1_3_ = 0;
      while (piVar7 != (int *)0x0) {
        cVar8 = func_?();
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          if (piVar7 != (int *)0x0) {
            func_?();
          }
          uStack_1._0_1_ = 0xff;
          uStack_1._1_3_ = 0xffffff;
          if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          pIVar5 = (IEnumerable_1_System_Object_ *)func_?();
          parameters = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_2
                                 (pIVar5,
                                  System__Object__MethodInfo__System__Linq__Enumerable__ToArray<System::Object>_System__Collections__Generic__IEnumerable<System::Object>_____
                                 );
          pOVar9 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                              (constructorInfo,parameters,(MethodInfo *)0x0);
          if (id != (String *)0x0) {
            pJVar10 = (this->fields)._._Serializer_k__BackingField;
            if ((pJVar10 == (JsonSerializer *)0x0) ||
               (iVar11 = (*(pJVar10->klass->vtable).get_ReferenceResolver.methodPtr)(), iVar11 == 0))
            break;
            func_?();
          }
          pJVar10 = (this->fields)._._Serializer_k__BackingField;
          if (pJVar10 != (JsonSerializer *)0x0) {
            SVar12 = (StreamingContext)(*(pJVar10->klass->vtable).get_Context.methodPtr)();
            JsonContract::JsonContract_InvokeOnDeserializing
                      ((JsonContract *)contract,pOVar9,SVar12,(MethodInfo *)0x0);
            piVar7 = (int *)func_?();
            uStack_1 = 0;
            goto code_?;
          }
          break;
        }
        if (piVar7 == (int *)0x0) break;
        iVar11 = *piVar7;
        uVar13 = 0;
        if (*(ushort *)(iVar11 + 0xb2) != 0) {
          do {
            if (*(IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object___Class
                  **)(*(int *)(iVar11 + 0x58) + (uint)uVar13 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
               ) {
              puVar14 = (undefined4 *)
                        (*(int *)(*(int *)(iVar11 + 0x58) + 4 + (uint)uVar13 * 8) * 8 + 0xbc +
                        iVar11);
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(iVar11 + 0xb2));
        }
        puVar14 = (undefined4 *)func_?();
code_?:
        iVar11 = (*(code *)*puVar14)();
        if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_03 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                  static_fields->__9__33_2;
        if (this_03 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_String_
             *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pJVar6 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                   static_fields->__9;
          this_03 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_String_
                     *)func_?();
          if (this_03 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Reflection_ParameterInfo_System_Object_String_
               *)0x0) break;
          mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,Object]::
          Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                    ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                      *)this_03,(Object *)pJVar6,
                     MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___CreateObjectFromNonDefaultConstructor_b__33_2_System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_
                     ,(MethodInfo *)0x0);
          TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
          static_fields->__9__33_2 = this_03;
          func_?();
        }
        if (iVar11 == 0) break;
        KVar15 = Json::Utilities::StringUtils::StringUtils_ForgivingCaseSensitiveFind
                           ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_
                             *)this_03,*(String **)(iVar11 + 0x14),
                            System__Collections__Generic__KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_MethodInfo__Newtonsoft__Json__Utilities__StringUtils__ForgivingCaseSensitiveFind<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>_>__System__Func<System::Collections::Generic::KeyValuePair<System::Reflection::ParameterInfo,_System::Object>,_System::String>__System__String_
                           );
        if (KVar15.key == (Object *)0x0) {
          func_?();
        }
        else {
          if (source == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar16)();
  return pOVar9;
code_?:
  do {
    uStack_1._0_1_ = 4;
code_?:
    do {
      if (piVar7 == (int *)0x0) goto code_?;
      uVar17 = 0;
      uVar13 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar13 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar17 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar14 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar17 * 8) * 8 + 0xbc +
                      *piVar7);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar13);
      }
      puVar14 = (undefined4 *)func_?();
code_?:
      cVar8 = (*(code *)*puVar14)();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar7 != (int *)0x0) {
          func_?();
        }
        uStack_1._0_1_ = 0xff;
        uStack_1._1_3_ = 0xffffff;
        pJVar10 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar10 != (JsonSerializer *)0x0) {
          SVar12 = (StreamingContext)(*(pJVar10->klass->vtable).get_Context.methodPtr)();
          JsonContract::JsonContract_InvokeOnDeserialized
                    ((JsonContract *)contract,pOVar9,SVar12,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pOVar9;
        }
        goto code_?;
      }
      if (piVar7 == (int *)0x0) goto code_?;
      uVar17 = 0;
      uVar13 = *(ushort *)(*piVar7 + 0xb2);
      if (uVar13 != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object___Class
                **)(*(int *)(*piVar7 + 0x58) + (uint)uVar17 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>_>
             ) {
            puVar14 = (undefined4 *)
                      (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar17 * 8) * 8 + 0xbc +
                      *piVar7);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar13);
      }
      puVar14 = (undefined4 *)func_?();
code_?:
      uVar18 = (*(code *)*puVar14)();
      value = (Object *)((ulonglong)uVar18 >> 0x20);
      property = (JsonProperty *)uVar18;
      bVar19 = JsonSerializerInternalReader_ShouldSetPropertyValue
                        (this,property,value,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        if ((property == (JsonProperty *)0x0) ||
           ((property->fields)._ValueProvider_k__BackingField == (IValueProvider *)0x0))
        goto code_?;
        func_?();
        goto code_?;
      }
      if (property == (JsonProperty *)0x0) goto code_?;
    } while (((property->fields)._Writable_k__BackingField != 0) || (value == (Object *)0x0));
    if (((this->fields)._._Serializer_k__BackingField == (JsonSerializer *)0x0) ||
       (iVar11 = func_?(), iVar11 == 0)) goto code_?;
    func_?();
    iVar11 = func_?();
    if (iVar11 == 0) {
      iVar11 = func_?();
      if (iVar11 != 0) {
        this_05 = (JsonDictionaryContract *)func_?();
        if ((property == (JsonProperty *)0x0) ||
           ((property->fields)._ValueProvider_k__BackingField == (IValueProvider *)0x0))
        goto code_?;
        pOVar20 = (Object *)func_?();
        if (pOVar20 != (Object *)0x0) {
          if (this_05 == (JsonDictionaryContract *)0x0) goto code_?;
          pIVar21 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                              (this_05,pOVar20,(MethodInfo *)0x0);
          pIVar22 = JsonDictionaryContract::JsonDictionaryContract_CreateWrapper
                              (this_05,value,(MethodInfo *)0x0);
          if (pIVar22 == (IWrappedDictionary *)0x0) goto code_?;
          iVar11 = func_?();
          uStack_1._0_1_ = 9;
          break;
        }
      }
      goto code_?;
    }
    this_04 = (JsonArrayContract *)func_?();
    if ((property->fields)._ValueProvider_k__BackingField == (IValueProvider *)0x0)
    goto code_?;
    pOVar20 = (Object *)func_?();
    if (pOVar20 == (Object *)0x0) goto code_?;
    if (this_04 == (JsonArrayContract *)0x0) goto code_?;
    pIVar23 = JsonArrayContract::JsonArrayContract_CreateWrapper(this_04,pOVar20,(MethodInfo *)0x0);
    pIVar24 = JsonArrayContract::JsonArrayContract_CreateWrapper(this_04,value,(MethodInfo *)0x0);
    if (pIVar24 == (IWrappedCollection *)0x0) goto code_?;
    iVar11 = func_?();
    uStack_1._0_1_ = 6;
    while( true ) {
      if (iVar11 == 0) goto code_?;
      cVar8 = func_?();
      if (cVar8 == '\0') break;
      if ((iVar11 == 0) || (func_?(), pIVar23 == (IWrappedCollection *)0x0))
      goto code_?;
      func_?();
    }
    uStack_1 = CONCAT31(uStack_1._1_3_,4);
    func_?();
  } while( true );
code_?:
  if (iVar11 == 0) goto code_?;
  cVar8 = func_?();
  if (cVar8 == '\0') goto code_?;
  if ((iVar11 == 0) || (piVar25 = (int *)func_?(), piVar25 == (int *)0x0))
  goto code_?;
  if (*(Il2CppClass **)(*piVar25 + 0x20) !=
      (TypeInfo__System__Collections__DictionaryEntry->_0).element_class) goto code_?;
  func_?();
  if (pIVar21 == (IWrappedDictionary *)0x0) goto code_?;
  func_?();
  goto code_?;
code_?:
  uStack_1 = CONCAT31(uStack_1._1_3_,4);
  func_?();
  goto code_?;
}


/* Object CreateValueInternal(JsonReader, Type, JsonContract, JsonProperty, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueInternal
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,JsonProperty *member,Object *existingValue,
                   MethodInfo *method)

{
  uVar1 = SUB42(unaff_EBX,0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (((contract != (JsonContract *)0x0) &&
      ((TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract->_1).typeHierarchyDepth <=
       (contract->klass->_1).typeHierarchyDepth)) &&
     ((contract->klass->_1).typeHierarchy
      [(TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonLinqContract)) {
    pJVar2 = JsonSerializerInternalReader_CreateJToken(this,reader,contract,(MethodInfo *)0x0);
    return (Object *)pJVar2;
  }
  if (reader == (JsonReader *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pJVar3 = (JsonSerializationException *)func_?();
    func_?();
    pMVar4 = (MethodInfo *)0x0;
    pSVar5 = (String *)func_?();
    JsonSerializationException::JsonSerializationException__ctor_1(pJVar3,pSVar5,pMVar4);
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    uVar1 = SUB42(unaff_EBX,0);
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    func_?();
    func_?();
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pMVar4 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?();
    pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar6,pSVar5,pMVar4);
    func_?();
    pJVar3 = (JsonSerializationException *)func_?();
    func_?();
    JsonSerializationException::JsonSerializationException__ctor_1
              (pJVar3,pSVar5,(MethodInfo *)0x0);
    func_?();
    cVar7 = (undefined1 *)0xffffffd7 < &stack0xffffffd8;
    uVar8 = func_?();
    iVar9 = (int)((ulonglong)uVar8 >> 0x20);
    bVar10 = (byte)extraout_ECX;
    pbVar11 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                               CONCAT11(in_stack_12,bVar10));
    bVar13 = (char)((ushort)uVar1 >> 8) + (char)uVar1 + cVar7;
    bVar14 = (JsonSerializationException__Class *)uVar8 < pJVar3->klass;
    pbVar15 = (byte *)(iVar9 + 0x6c104aae);
    bVar16 = *pbVar15;
    bVar17 = *pbVar15 + bVar13;
    *pbVar15 = bVar17 + bVar14;
    bVar18 = (byte)pSVar5->klass;
    bVar14 = CARRY1(bVar18,bVar10) ||
             CARRY1(bVar18 + bVar10,CARRY1(bVar16,bVar13) || CARRY1(bVar17,bVar14));
    pMVar19 = pSVar5->monitor;
    bVar18 = (char)((ulonglong)uVar8 >> 0x20) - 4;
    bVar16 = *pbVar11;
    bVar17 = *pbVar11;
    *pbVar11 = bVar17 + bVar18 + bVar14;
    pcVar20 = (char *)CONCAT31((int3)((uint)pMVar19 >> 8),0x4a);
    *(byte *)&(pSVar5->fields)._stringLength =
         (char)(pSVar5->fields)._stringLength + bVar18 +
         (CARRY1(bVar16,bVar18) || CARRY1(bVar17 + bVar18,bVar14));
    bVar14 = 0x4a < *(byte *)&pJVar3->monitor;
    piVar21 = &pJVar3[-2].fields._.caught_in_unmanaged;
    iVar22 = *piVar21;
    bVar16 = (char)*piVar21 + 0x4a;
    *(byte *)piVar21 = bVar16 + bVar14;
    piVar23 = (int *)(iVar9 + -6);
    *pcVar20 = *pcVar20 + 'J' + (0xb5 < (byte)iVar22 || CARRY1(bVar16,bVar14));
    *piVar23 = (int)(pcVar20 + *piVar23);
    pcVar20[*(int *)(pcVar20 + 0x6070606)] = pcVar20[*(int *)(pcVar20 + 0x6070606)] | bVar10;
    pcVar24 = (code *)swi(3);
    pOVar25 = (Object *)(*pcVar24)();
    return pOVar25;
  }
code_?:
  uVar26 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
  pIVar27 = TypeRef__System__DBNull;
  switch(uVar26) {
  case 1:
    pOVar25 = JsonSerializerInternalReader_CreateObject
                        (this,reader,objectType,contract,member,existingValue,(MethodInfo *)0x0);
    return pOVar25;
  case 2:
    pOVar25 = JsonSerializerInternalReader_CreateList
                        (this,reader,objectType,contract,member,existingValue,(String *)0x0,
                         (MethodInfo *)0x0);
    return pOVar25;
  case 3:
  case 0xf:
    piVar23 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)();
    if (piVar23 != (int *)0x0) {
      pOVar25 = (Object *)(**(code **)(*piVar23 + 0xd4))();
      return pOVar25;
    }
    goto code_?;
  default:
    goto code_?;
  case 5:
    break;
  case 6:
    pOVar25 = (Object *)func_?();
    this_00 = (JRaw *)func_?();
    if (this_00 == (JRaw *)0x0) goto code_?;
    rawJson = (Object *)0x0;
    if (pOVar25 != (Object *)0x0) {
      if ((String__Class *)pOVar25->klass == TypeInfo__System__String) {
        rawJson = pOVar25;
      }
      if (rawJson == (Object *)0x0) goto code_?;
    }
    Linq::JRaw::JRaw__ctor_1(this_00,rawJson,(MethodInfo *)0x0);
    return (Object *)this_00;
  case 7:
  case 8:
  case 10:
  case 0x10:
  case 0x11:
    pOVar25 = (Object *)(*(reader->klass->vtable).get_Value.methodPtr)();
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar28 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    pOVar25 = JsonSerializerInternalReader_EnsureType
                        (this,pOVar25,pCVar28,objectType,(MethodInfo *)0x0);
    return pOVar25;
  case 9:
    pSVar6 = (String *)func_?();
    pSVar5 = (String *)0x0;
    if (pSVar6 != (String *)0x0) {
      if (pSVar6->klass == TypeInfo__System__String) {
        pSVar5 = pSVar6;
      }
      if (pSVar5 == (String *)0x0) goto code_?;
    }
    bVar29 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (bVar29 != 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar29 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        ((CancellationToken)objectType,(CancellationToken)0x0,(MethodInfo *)0x0);
      if ((bVar29 != 0) &&
         (bVar29 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType
                            (objectType,(MethodInfo *)0x0), bVar29 != 0)) {
        return (Object *)0x0;
      }
    }
    pIVar27 = TypeRef__System__Byte;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar30 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
    bVar29 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)objectType,(Object **)pTVar30,(MethodInfo *)0x0);
    if (bVar29 == 0) {
      pOVar25 = (Object *)func_?();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar28 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar25 = JsonSerializerInternalReader_EnsureType
                          (this,pOVar25,pCVar28,objectType,(MethodInfo *)0x0);
      return pOVar25;
    }
    pSVar5 = (String *)func_?();
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar6 = (String *)0x0;
    if (pSVar5 != (String *)0x0) {
      if (pSVar5->klass == TypeInfo__System__String) {
        pSVar6 = pSVar5;
      }
      unaff_EBX = objectType;
      if (pSVar6 == (String *)0x0) goto code_?;
    }
    pBVar31 = mscorlib.dll::System::Convert::Convert_FromBase64String(pSVar6,(MethodInfo *)0x0);
    return (Object *)pBVar31;
  case 0xb:
  case 0xc:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar30 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
    bVar29 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)objectType,(Object **)pTVar30,(MethodInfo *)0x0);
    if (bVar29 == 0) {
      pOVar25 = (Object *)func_?();
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar28 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar25 = JsonSerializerInternalReader_EnsureType
                          (this,pOVar25,pCVar28,objectType,(MethodInfo *)0x0);
      return pOVar25;
    }
    if ((TypeInfo__System__DBNull->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    return (Object *)TypeInfo__System__DBNull->static_fields->Value;
  }
  cVar7 = (*(reader->klass->vtable).__unknown.methodPtr)();
  if (cVar7 == '\0') goto code_?;
  goto code_?;
}


/* Object CreateValueNonProperty(JsonReader, Type, JsonContract) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueNonProperty
                   (JsonSerializerInternalReader *this,JsonReader *reader,Type *objectType,
                   JsonContract *contract,MethodInfo *method)

{
  if (contract != (JsonContract *)0x0) {
    if ((contract->fields)._Converter_k__BackingField == (JsonConverter *)0x0) {
      this_00 = (this->fields)._._Serializer_k__BackingField;
      if (this_00 == (JsonSerializer *)0x0) {
        func_?();
        pcVar1 = (code *)swi(3);
        pOVar2 = (Object *)(*pcVar1)();
        return pOVar2;
      }
      pJVar3 = JsonSerializer::JsonSerializer_GetMatchingConverter
                         (this_00,(contract->fields)._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0);
      if (pJVar3 == (JsonConverter *)0x0) {
        if ((contract->fields)._InternalConverter_k__BackingField == (JsonConverter *)0x0)
        goto code_?;
        pJVar3 = (contract->fields)._InternalConverter_k__BackingField;
      }
    }
    else {
      pJVar3 = (contract->fields)._Converter_k__BackingField;
      if (pJVar3 == (JsonConverter *)0x0) goto code_?;
    }
    cVar4 = (*(pJVar3->klass->vtable).get_CanRead.methodPtr)
                      (pJVar3,(pJVar3->klass->vtable).get_CanRead.method);
    if (cVar4 != '\0') {
      pJVar5 = JsonSerializerInternalReader_GetInternalSerializer(this,(MethodInfo *)0x0);
      pOVar2 = (Object *)
               (*(pJVar3->klass->vtable).__unknown_1.methodPtr)
                         (pJVar3,reader,objectType,0,pJVar5,
                          (pJVar3->klass->vtable).__unknown_1.method);
      return pOVar2;
    }
  }
code_?:
  pOVar2 = JsonSerializerInternalReader_CreateValueInternal
                     (this,reader,objectType,contract,(JsonProperty *)0x0,(Object *)0x0,
                      (MethodInfo *)0x0);
  return pOVar2;
}


/* Object CreateValueProperty(JsonReader, JsonProperty, Object, Boolean, Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_CreateValueProperty
                   (JsonSerializerInternalReader *this,JsonReader *reader,JsonProperty *property,
                   Object *target,bool gottenCurrentValue,Object *currentValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IValueProvider);
    cRam_? = '\x01';
  }
  if (property == (JsonProperty *)0x0) goto code_?;
  pTVar1 = (property->fields)._PropertyType_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    cRam_? = '\x01';
  }
  if (currentValue == (Object *)0x0) {
    contract = JsonSerializerInternalReader_GetContractSafe(this,pTVar1,(MethodInfo *)0x0);
  }
  else {
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
    iVar3 = (*(pJVar2->klass->vtable).get_ContractResolver.methodPtr)
                      (pJVar2,(pJVar2->klass->vtable).get_ContractResolver.method);
    pTVar1 = mscorlib.dll::System::Object::Object_GetType(currentValue,(MethodInfo *)0x0);
    if (iVar3 == 0) goto code_?;
    contract = (JsonContract *)
               func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar3,
                               pTVar1);
  }
  pTVar1 = (property->fields)._PropertyType_k__BackingField;
  pJVar4 = (property->fields)._MemberConverter_k__BackingField;
  if (pJVar4 == (JsonConverter *)0x0) {
    if (contract == (JsonContract *)0x0) goto code_?;
    if ((contract->fields)._Converter_k__BackingField == (JsonConverter *)0x0) {
      pJVar2 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
      pJVar4 = JsonSerializer::JsonSerializer_GetMatchingConverter
                         (pJVar2,(contract->fields)._UnderlyingType_k__BackingField,
                          (MethodInfo *)0x0);
      if (pJVar4 == (JsonConverter *)0x0) {
        if ((contract->fields)._InternalConverter_k__BackingField == (JsonConverter *)0x0)
        goto code_?;
        pJVar4 = (contract->fields)._InternalConverter_k__BackingField;
      }
    }
    else {
      pJVar4 = (contract->fields)._Converter_k__BackingField;
      if (pJVar4 == (JsonConverter *)0x0) goto code_?;
    }
  }
  cVar5 = (*(pJVar4->klass->vtable).get_CanRead.methodPtr)
                    (pJVar4,(pJVar4->klass->vtable).get_CanRead.method);
  if (cVar5 != '\0') {
    if (((gottenCurrentValue == 0) && (target != (Object *)0x0)) &&
       ((property->fields)._Readable_k__BackingField != 0)) {
      pIVar6 = (property->fields)._ValueProvider_k__BackingField;
      if (pIVar6 == (IValueProvider *)0x0) {
code_?:
        func_?();
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
             (*(pJVar4->klass->vtable).__unknown_1.methodPtr)
                       (pJVar4,reader,pTVar1,currentValue,pJVar9,
                        (pJVar4->klass->vtable).__unknown_1.method);
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
  if (reader == (JsonReader *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    paramName = (String *)func_?(&StringLiteral_reader);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,method_00);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Deserialize_Newtonsoft__Json__JsonReader__System__Type_
                           );
    func_?(this_00,uVar1);
    pcVar2 = (code *)swi(3);
    pOVar3 = (Object *)(*pcVar2)();
    return pOVar3;
  }
  iVar4 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                    (reader,(reader->klass->vtable).get_TokenType.method);
  if (iVar4 == 0) {
    bVar5 = JsonSerializerInternalReader_ReadForType
                      (this,reader,objectType,(JsonConverter *)0x0,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      return (Object *)0x0;
    }
  }
  contract = JsonSerializerInternalReader_GetContractSafe(this,objectType,(MethodInfo *)0x0);
  pOVar3 = JsonSerializerInternalReader_CreateValueNonProperty
                     (this,reader,objectType,contract,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    cRam_? = '\x01';
  }
  if (contract == (JsonContract *)0x0) {
    uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar1);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar1 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar1);
    func_?(args);
    func_?(args,objectType);
    func_?(0,objectType);
    ppSVar2 = &StringLiteral_Could_not_resolve_type___0___to_;
  }
  else {
    if (((TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth <=
         (contract->klass->_1).typeHierarchyDepth) &&
       ((contract->klass->_1).typeHierarchy
        [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth - 1]
        == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
      return (JsonArrayContract *)contract;
    }
    uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar1);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar1 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar1);
    func_?(args);
    func_?(args,objectType);
    func_?(0,objectType);
    ppSVar2 = &StringLiteral_Cannot_deserialize_JSON_array_in;
  }
  method_00 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(ppSVar2);
  pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar3,(IFormatProvider *)provider,args,method_00);
  uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  this_00 = (JsonSerializationException *)func_?(uVar1);
  func_?(this_00);
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__EnsureArrayContract_System__Type__Newtonsoft__Json__Serialization__JsonContract_
                 );
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar5 = (JsonArrayContract *)(*pcVar4)();
  return pJVar5;
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
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)targetType,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    left._source = (CancellationTokenSource *)
                   Json::Utilities::ReflectionUtils::ReflectionUtils_GetObjectType
                             (value,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,(CancellationToken)targetType,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return value;
    }
    uStack_1 = 0;
    if ((TypeInfo__Newtonsoft__Json__Utilities__ConvertUtils->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__null_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  if (value == (Object *)0x0) {
    return StringLiteral__null_;
  }
  pSVar2 = (String__Class *)value->klass;
  pOVar3 = (Object *)0x0;
  if (pSVar2 == TypeInfo__System__String) {
    pOVar3 = value;
  }
  pIVar4 = (pSVar2->vtable).ToString.methodPtr;
  if (pOVar3 == (Object *)0x0) {
    pSVar1 = (String *)(*pIVar4)(value,(pSVar2->vtable).ToString.method);
    return pSVar1;
  }
  str1 = (String *)(*pIVar4)(value,(pSVar2->vtable).ToString.method);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,str1,::StringLiteral__,(MethodInfo *)0x0);
  return pSVar1;
}


/* JsonContract GetContractSafe(Type) */

JsonContract *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetContractSafe
          (JsonSerializerInternalReader *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)type,(Object **)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 != (JsonSerializer *)0x0) {
      iVar3 = (*(pJVar2->klass->vtable).get_ContractResolver.methodPtr)();
      if (iVar3 != 0) {
        pJVar4 = (JsonContract *)func_?(0);
        return pJVar4;
      }
    }
    uVar5 = func_?(&stack0xfffffffc);
    func_?(uVar5);
    pcVar6 = (code *)swi(3);
    pJVar4 = (JsonContract *)(*pcVar6)();
    return pJVar4;
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
  if ((memberConverter == (JsonConverter *)0x0) &&
     (memberConverter = (JsonConverter *)0x0, contract != (JsonContract *)0x0)) {
    if ((contract->fields)._Converter_k__BackingField != (JsonConverter *)0x0) {
      return (contract->fields)._Converter_k__BackingField;
    }
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
       (memberConverter = (JsonConverter *)0x0,
       (contract->fields)._InternalConverter_k__BackingField != (JsonConverter *)0x0)) {
      return (contract->fields)._InternalConverter_k__BackingField;
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
    cRam_? = '\x01';
  }
  if ((this->fields)._formatterConverter == (JsonFormatterConverter *)0x0) {
    value = JsonSerializerInternalReader_GetInternalSerializer(this,(MethodInfo *)0x0);
    pJVar1 = (JsonFormatterConverter *)
             func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonFormatterConverter);
    if (pJVar1 == (JsonFormatterConverter *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pJVar1 = (JsonFormatterConverter *)(*pcVar2)();
      return pJVar1;
    }
    if (cRam_? == '\0') {
      func_?(&StringLiteral_serializer);
      cRam_? = '\x01';
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pJVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)value,StringLiteral_serializer,(MethodInfo *)0x0);
    (pJVar1->fields)._serializer = (JsonSerializer *)value;
    func_?(&pJVar1->fields,value);
    (this->fields)._formatterConverter = pJVar1;
    func_?(&(this->fields)._formatterConverter,pJVar1);
  }
  return (this->fields)._formatterConverter;
}


/* JsonSerializerProxy GetInternalSerializer() */

JsonSerializerProxy *
Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
JsonSerializerInternalReader_GetInternalSerializer
          (JsonSerializerInternalReader *this,MethodInfo *method)

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
      func_?(&StringLiteral_serializerReader);
      cRam_? = '\x01';
    }
    JsonSerializer::JsonSerializer__ctor((JsonSerializer *)pJVar1,(MethodInfo *)0x0);
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)this,StringLiteral_serializerReader,(MethodInfo *)0x0);
    (pJVar1->fields)._serializerReader = this;
    func_?(&(pJVar1->fields)._serializerReader,this);
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    (pJVar1->fields)._serializer = pJVar3;
    func_?(&(pJVar1->fields)._serializer,pJVar3);
    (this->fields)._internalSerializer = pJVar1;
    func_?(&(this->fields)._internalSerializer,pJVar1);
  }
  return (this->fields)._internalSerializer;
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
      iVar1 = (*(reader->klass->vtable).get_Depth.methodPtr)(reader);
      if (iVar1 <= initialDepth + 1) break;
      (*(reader->klass->vtable).__unknown.methodPtr)(reader);
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
    func_?(&TypeRef__Newtonsoft__Json__Linq__JToken);
    func_?(&TypeRef__System__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                    ((CancellationToken)type,(CancellationToken)0x0,(MethodInfo *)0x0);
  pIVar2 = TypeRef__System__Object;
  if (bVar1 != 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    right._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      ((CancellationToken)type,right,(MethodInfo *)0x0);
    pIVar2 = TypeRef__Newtonsoft__Json__Linq__JToken;
    if (bVar1 != 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Type *)0x0) {
        pMStack4 = (pTVar3->klass->vtable).IsAssignableFrom.method;
        pTStack5 = type;
        cVar6 = (*(pTVar3->klass->vtable).IsAssignableFrom.methodPtr)();
        return cVar6 == '\0';
      }
      func_?();
      pcVar7 = (code *)swi(3);
      bVar1 = (*pcVar7)();
      return bVar1;
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
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IContractResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract);
    func_?(&StringLiteral_target);
    func_?(&StringLiteral__id);
    cRam_? = '\x01';
  }
  this_00 = target;
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            (target,StringLiteral_target,(MethodInfo *)0x0);
  if (this_00 == (Object *)0x0) {
code_?:
    func_?();
    reader = (JsonReader *)unaff_ESI;
code_?:
    uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar1);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar1 = func_?(&TypeInfo__System__Object,1);
    args = (Object__Array *)func_?(uVar1);
    func_?(reader);
    target = (Object *)func_?(7,reader);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&target);
    uVar1 = func_?(uVar1);
    func_?(args);
    func_?(args,uVar1);
    func_?(0,uVar1);
    ppSVar2 = &StringLiteral_Unexpected_initial_token___0___w;
code_?:
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(ppSVar2);
    pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                       (pSVar4,(IFormatProvider *)provider,args,pMVar3);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    contract = (JsonDictionaryContract *)func_?(uVar1);
    func_?(contract);
    JsonSerializationException::JsonSerializationException__ctor_1
              ((JsonSerializationException *)contract,pSVar4,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__Populate_Newtonsoft__Json__JsonReader__System__Object_
                   );
    this_01 = contract;
  }
  else {
    pTVar5 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
    unaff_ESI = (this->fields)._._Serializer_k__BackingField;
    if (unaff_ESI == (JsonSerializer *)0x0) goto code_?;
    iVar6 = (*(unaff_ESI->klass->vtable).get_ContractResolver.methodPtr)
                      (unaff_ESI,(unaff_ESI->klass->vtable).get_ContractResolver.method);
    if (iVar6 == 0) goto code_?;
    contract = (JsonDictionaryContract *)
               func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IContractResolver,iVar6,
                               pTVar5);
    unaff_ESI = (JsonSerializer *)reader;
    if (reader == (JsonReader *)0x0) goto code_?;
    iVar6 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar6 == 0) {
      (*(reader->klass->vtable).__unknown.methodPtr)
                (reader,(reader->klass->vtable).__unknown.method);
    }
    iVar6 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar6 == 2) {
      if (((contract != (JsonDictionaryContract *)0x0) &&
          ((TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth <=
           (contract->klass->_1).typeHierarchyDepth)) &&
         ((contract->klass->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth - 1
          ] == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
        wrappedList = Json::Utilities::CollectionUtils::CollectionUtils_CreateCollectionWrapper
                                (this_00,(MethodInfo *)0x0);
        pJVar7 = (JsonObjectContract__Class *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract;
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth
             <= (contract->klass->_1).typeHierarchyDepth) &&
           ((contract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract->_1).typeHierarchyDepth -
             1] == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonArrayContract)) {
          JsonSerializerInternalReader_PopulateList
                    (this,wrappedList,reader,(String *)0x0,(JsonArrayContract *)contract,
                     (MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar1);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar8 = 1;
      uVar1 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar1);
      func_?(args);
      func_?(args,uVar8);
      func_?(0,uVar8);
      ppSVar2 = &StringLiteral_Cannot_populate_JSON_array_onto_;
      goto code_?;
    }
    iVar6 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar6 != 1) goto code_?;
    cVar9 = (*(reader->klass->vtable).__unknown.methodPtr)
                      (reader,(reader->klass->vtable).__unknown.method);
    if (cVar9 != '\0') {
      target = (Object *)0x0;
      iVar6 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                        (reader,(reader->klass->vtable).get_TokenType.method);
      if (iVar6 == 4) {
        piVar10 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)
                                  (reader,(reader->klass->vtable).get_Value.method);
        if (piVar10 == (int *)0x0) goto code_?;
        pSVar4 = (String *)(**(code **)(*piVar10 + 0xd4))(piVar10,*(undefined4 *)(*piVar10 + 0xd8));
        bVar11 = mscorlib.dll::System::String::String_Equals_4
                          (pSVar4,StringLiteral__id,StringComparison__Enum_Ordinal,(MethodInfo *)0x0
                          );
        if (bVar11 != 0) {
          JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
          iVar6 = (*(reader->klass->vtable).get_Value.methodPtr)
                            (reader,(reader->klass->vtable).get_Value.method);
          if (iVar6 == 0) {
            target = (Object *)0x0;
          }
          else {
            iVar6 = func_?(8,reader);
            if (iVar6 == 0) goto code_?;
            target = (Object *)func_?(3,iVar6);
          }
          JsonSerializerInternalReader_CheckedRead(this,reader,(MethodInfo *)0x0);
        }
      }
      if (contract != (JsonDictionaryContract *)0x0) {
        if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
           ((contract->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
             typeHierarchyDepth - 1] ==
            (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
          dictionary = Json::Utilities::CollectionUtils::CollectionUtils_CreateDictionaryWrapper
                                 (this_00,(MethodInfo *)0x0);
          pJVar7 = (JsonObjectContract__Class *)
                   TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract;
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
               typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
             ((contract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonDictionaryContract)) {
            JsonSerializerInternalReader_PopulateDictionary
                      ((JsonSerializerInternalReader *)0x0,dictionary,reader,contract,
                       (String *)target,(MethodInfo *)0x0);
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
          pJVar7 = TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract;
          if (((TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth <= (contract->klass->_1).typeHierarchyDepth) &&
             ((contract->klass->_1).typeHierarchy
              [(TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract->_1).
               typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__Newtonsoft__Json__Serialization__JsonObjectContract)) {
            JsonSerializerInternalReader_PopulateObject
                      (this,this_00,reader,(JsonObjectContract *)contract,(String *)target,
                       (MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar1);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar1 = func_?(&TypeInfo__System__Object);
      args = (Object__Array *)func_?(uVar1);
      pOVar12 = args;
      func_?(args);
      func_?(args,pOVar12);
      func_?(0);
      ppSVar2 = &StringLiteral_Cannot_populate_JSON_object_onto;
      goto code_?;
    }
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    this_01 = (JsonDictionaryContract *)func_?(uVar1);
    func_?(this_01);
    pMVar3 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(&StringLiteral_Unexpected_end_when_deserializin);
    JsonSerializationException::JsonSerializationException__ctor_1
              ((JsonSerializationException *)this_01,pSVar4,pMVar3);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CheckedRead_Newtonsoft__Json__JsonReader_
                   );
  }
  func_?(this_01);
  pJVar7 = (JsonObjectContract__Class *)extraout_EDX;
code_?:
  func_?(contract,pJVar7);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Object PopulateDictionary(IWrappedDictionary, JsonReader, JsonDictionaryContract, String) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
         JsonSerializerInternalReader_PopulateDictionary
                   (JsonSerializerInternalReader *this,IWrappedDictionary *dictionary,
                   JsonReader *reader,JsonDictionaryContract *contract,String *id,MethodInfo *method
                   )

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Collections__IDictionary);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = id;
  uStack_7 = 0;
  if (id == (String *)0x0) {
    if (dictionary == (IWrappedDictionary *)0x0) goto code_?;
  }
  else {
    pJVar8 = (this->fields)._._Serializer_k__BackingField;
    if (((pJVar8 == (JsonSerializer *)0x0) ||
        (id = (String *)
              (*(pJVar8->klass->vtable).get_ReferenceResolver.methodPtr)
                        (pJVar8,(pJVar8->klass->vtable).get_ReferenceResolver.method),
        dictionary == (IWrappedDictionary *)0x0)) ||
       (uVar9 = func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                dictionary), id == (String *)0x0)) goto code_?;
    func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,id,this,pSVar6,
                    uVar9);
  }
  id = (String *)
       func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,dictionary);
  pJVar8 = (this->fields)._._Serializer_k__BackingField;
  if (((pJVar8 != (JsonSerializer *)0x0) &&
      (SVar10 = (StreamingContext)
               (*(pJVar8->klass->vtable).get_Context.methodPtr)
                         (pJVar8,(pJVar8->klass->vtable).get_Context.method),
      contract != (JsonDictionaryContract *)0x0)) &&
     (JsonContract::JsonContract_InvokeOnDeserializing
                ((JsonContract *)contract,(Object *)id,SVar10,(MethodInfo *)0x0),
     reader != (JsonReader *)0x0)) {
    uStack_11 = (*(reader->klass->vtable).get_Depth.methodPtr)
                          (reader,(reader->klass->vtable).get_Depth.method);
    do {
      iVar12 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                        (reader,(reader->klass->vtable).get_TokenType.method);
      if (iVar12 == 4) {
        id = (String *)
             (*(reader->klass->vtable).get_Value.methodPtr)
                       (reader,(reader->klass->vtable).get_Value.method);
        iStack_1._0_1_ = 1;
        iStack_1._1_3_ = 0;
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        culture = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        id = (String *)
             JsonSerializerInternalReader_EnsureType
                       (this,(Object *)id,culture,
                        (contract->fields)._DictionaryKeyType_k__BackingField,(MethodInfo *)0x0);
        iStack_1 = (uint)iStack_1._1_3_ << 8;
        pSStack_13 = id;
        bVar14 = JsonSerializerInternalReader_ReadForType
                          (this,reader,(contract->fields)._DictionaryValueType_k__BackingField,
                           (JsonConverter *)0x0,(MethodInfo *)0x0);
        if (bVar14 == 0) goto code_?;
        pTStack_15 = (contract->fields)._DictionaryValueType_k__BackingField;
        contract_00 = JsonSerializerInternalReader_GetContractSafe
                                (this,pTStack_15,(MethodInfo *)0x0);
        pOStack_16 = JsonSerializerInternalReader_CreateValueNonProperty
                               (this,reader,pTStack_15,contract_00,(MethodInfo *)0x0);
        if (dictionary == (IWrappedDictionary *)0x0) break;
        pIStack_17 = dictionary->klass;
        uVar18 = 0;
        pTStack_15 = (Type *)0x0;
        uVar19 = (pIStack_17->_1).interface_offsets_count;
        if (uVar19 != 0) {
          do {
            if (pIStack_17->interfaceOffsets[uVar18].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IDictionary) {
              ppIVar20 = &dictionary->klass[1]._0.image +
                         dictionary->klass->interfaceOffsets[uVar18].offset * 2;
              goto code_?;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        ppIVar20 = (Il2CppImage **)
                   func_?(dictionary,TypeInfo__System__Collections__IDictionary,1);
code_?:
        (*(code *)*ppIVar20)(dictionary,pSStack_13,pOStack_16,ppIVar20[1]);
        iStack_1 = -1;
      }
      else if (iVar12 != 5) {
        if (iVar12 == 0xd) {
          if (dictionary != (IWrappedDictionary *)0x0) {
            id = (String *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                 dictionary);
            pJVar8 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar8 != (JsonSerializer *)0x0) {
              SVar10 = (StreamingContext)
                      (*(pJVar8->klass->vtable).get_Context.methodPtr)
                                (pJVar8,(pJVar8->klass->vtable).get_Context.method);
              JsonContract::JsonContract_InvokeOnDeserialized
                        ((JsonContract *)contract,(Object *)id,SVar10,(MethodInfo *)0x0);
              pOVar21 = (Object *)
                        func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedDictionary,
                                        dictionary);
              *unaff_FS_OFFSET = uStack_3;
              return pOVar21;
            }
          }
        }
        else {
          func_?(reader);
          id = (String *)func_?(7,reader);
          uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&id);
          func_?(uVar9);
          pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_22,(MethodInfo *)0x0);
          pMVar23 = (MethodInfo *)0x0;
          str0 = (String *)func_?(&StringLiteral_Unexpected_token_when_deserializ);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar6,pMVar23);
          uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
          pJVar24 = (JsonSerializationException *)func_?(uVar9);
          func_?(pJVar24);
          JsonSerializationException::JsonSerializationException__ctor_1
                    (pJVar24,pSVar6,(MethodInfo *)0x0);
          uStack_25 = func_?(&
                                      MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateDictionary_Newtonsoft__Json__Utilities__IWrappedDictionary__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonDictionaryContract__System__String_
                                     );
          EStack_22.klass = (Enum__Class *)&UNK_?;
          EStack_22.monitor = (MonitorData *)pJVar24;
          func_?();
        }
        break;
      }
      cVar26 = (*(reader->klass->vtable).__unknown.methodPtr)
                        (reader,(reader->klass->vtable).__unknown.method);
      if (cVar26 == '\0') {
        uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
        pJVar24 = (JsonSerializationException *)func_?(uVar9);
        func_?(pJVar24);
        pMVar23 = (MethodInfo *)0x0;
        pSVar6 = (String *)func_?(&StringLiteral_Unexpected_end_when_deserializin);
        JsonSerializationException::JsonSerializationException__ctor_1(pJVar24,pSVar6,pMVar23);
        func_?(&
                        MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateDictionary_Newtonsoft__Json__Utilities__IWrappedDictionary__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonDictionaryContract__System__String_
                       );
        func_?();
        pcVar27 = (code *)swi(3);
        pOVar21 = (Object *)(*pcVar27)();
        return pOVar21;
      }
    } while( true );
  }
code_?:
  func_?();
code_?:
  uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
  pJVar24 = (JsonSerializationException *)func_?(uVar9);
  func_?(pJVar24);
  pSVar6 = (String *)func_?(&StringLiteral_Unexpected_end_when_deserializin);
  JsonSerializationException::JsonSerializationException__ctor_1(pJVar24,pSVar6,(MethodInfo *)0x0);
  uVar9 = func_?(&
                          MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateDictionary_Newtonsoft__Json__Utilities__IWrappedDictionary__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonDictionaryContract__System__String_
                         );
  func_?(pJVar24,uVar9);
  func_?(pJVar24->klass);
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
  puStack_4 = &stack0xffffffc0;
  puVar5 = &stack0xffffffc0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (wrappedList != (IWrappedCollection *)0x0) {
    pOStack_6 = (Object *)
                 func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,
                                 wrappedList);
    cVar7 = func_?(6,TypeInfo__System__Collections__IList,wrappedList);
    if (cVar7 == '\0') {
      unaff_EDI = (JsonReader *)reference;
      if (reference == (String *)0x0) {
code_?:
        pJVar8 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar8 != (JsonSerializer *)0x0) {
          SVar9 = (StreamingContext)
                  (*(pJVar8->klass->vtable).get_Context.methodPtr)
                            (pJVar8,(pJVar8->klass->vtable).get_Context.method);
          if (contract != (JsonArrayContract *)0x0) {
            JsonContract::JsonContract_InvokeOnDeserializing
                      ((JsonContract *)contract,pOStack_6,SVar9,(MethodInfo *)0x0);
            unaff_EDI = reader;
            if (reader != (JsonReader *)0x0) {
              pOStack_10 = (Object *)
                           (*(reader->klass->vtable).get_Depth.methodPtr)
                                     (reader,(reader->klass->vtable).get_Depth.method);
              while( true ) {
                bVar11 = JsonSerializerInternalReader_ReadForTypeArrayHack
                                  (this,reader,
                                   (contract->fields)._CollectionItemType_k__BackingField,
                                   (MethodInfo *)0x0);
                if (bVar11 == 0) break;
                iVar12 = (*(reader->klass->vtable).get_TokenType.methodPtr)();
                if (iVar12 != 5) {
                  if (iVar12 == 0xe) {
                    pJVar8 = (this->fields)._._Serializer_k__BackingField;
                    if (pJVar8 != (JsonSerializer *)0x0) {
                      SVar9 = (StreamingContext)func_?(0x1f,pJVar8);
                      JsonContract::JsonContract_InvokeOnDeserialized
                                ((JsonContract *)contract,pOStack_6,SVar9,(MethodInfo *)0x0);
                      pOVar13 = (Object *)
                               func_?(0,
                                               TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection
                                               ,wrappedList);
                      *unaff_FS_OFFSET = uStack_3;
                      return pOVar13;
                    }
                    goto code_?;
                  }
                  pTStack_14 = (contract->fields)._CollectionItemType_k__BackingField;
                  uStack_1 = 0;
                  contract_00 = JsonSerializerInternalReader_GetContractSafe
                                          (this,pTStack_14,(MethodInfo *)0x0);
                  pOStack_10 = JsonSerializerInternalReader_CreateValueNonProperty
                                         (this,reader,pTStack_14,contract_00,(MethodInfo *)0x0);
                  pJStack_15 = (JsonReader__Class *)wrappedList;
                  func_?();
                  uStack_1 = 0xffffffff;
                }
              }
              goto code_?;
            }
          }
        }
      }
      else {
        pJVar8 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar8 != (JsonSerializer *)0x0) {
          iVar12 = (*(pJVar8->klass->vtable).get_ReferenceResolver.methodPtr)
                            (pJVar8,(pJVar8->klass->vtable).get_ReferenceResolver.method);
          if (iVar12 != 0) {
            func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar12,
                            this,reference,pOStack_6);
            goto code_?;
          }
        }
      }
    }
    else if (reader != (JsonReader *)0x0) {
      JsonReader::JsonReader_Skip(reader,(MethodInfo *)0x0);
      pOVar13 = (Object *)
               func_?(0,TypeInfo__Newtonsoft__Json__Utilities__IWrappedCollection,
                               wrappedList);
      *unaff_FS_OFFSET = uStack_3;
      return pOVar13;
    }
  }
code_?:
  func_?();
  uVar16 = func_?();
  func_?(uVar16);
  pJStack_15 = unaff_EDI->klass;
  func_?(&pJStack_15,&UNK_?);
code_?:
  func_?();
  this_00 = (JsonSerializationException *)func_?();
  func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  JsonSerializationException::JsonSerializationException__ctor_1(this_00,message,method_00);
  pJStack_15 = (JsonReader__Class *)func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pOVar13 = (Object *)(*pcVar17)();
  return pOVar13;
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
  puStack_4 = &stack0xffffff98;
  pJStack_5 = reader;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Peek__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Pop__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Push_System__Collections__IList_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Stack__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Stack<System::Collections::IList>);
    cRam_? = '\x01';
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  uStack_7 = 0;
  if ((contract != (JsonArrayContract *)0x0) &&
     (pTVar8 = (contract->fields)._._UnderlyingType_k__BackingField, pTVar8 != (Type *)0x0)) {
    iStack_9 = (*(pTVar8->klass->vtable).GetArrayRank.methodPtr)
                          (pTVar8,(pTVar8->klass->vtable).GetArrayRank.method);
    if (reference != (String *)0x0) {
      pJVar10 = (this->fields)._._Serializer_k__BackingField;
      if ((pJVar10 == (JsonSerializer *)0x0) ||
         (iVar11 = (*(pJVar10->klass->vtable).get_ReferenceResolver.methodPtr)
                            (pJVar10,(pJVar10->klass->vtable).get_ReferenceResolver.method),
         iVar11 == 0)) goto code_?;
      func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar11,this,
                      reference,list);
    }
    pJVar10 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar10 != (JsonSerializer *)0x0) {
      SVar12 = (StreamingContext)
              (*(pJVar10->klass->vtable).get_Context.methodPtr)
                        (pJVar10,(pJVar10->klass->vtable).get_Context.method);
      JsonContract::JsonContract_InvokeOnDeserializing
                ((JsonContract *)contract,(Object *)list,SVar12,(MethodInfo *)0x0);
      pSVar13 = (Stack_1_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Stack<System::Collections::IList>
                               );
      pSStack_14 = pSVar13;
      if (pSVar13 != (Stack_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object___ctor
                  (pSVar13,
                   MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Stack__
                  );
        pSStack_15 = pSVar13;
        mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
        Stack_1_System_Object__Push
                  (pSVar13,(Object *)list,
                   MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Push_System__Collections__IList_
                  );
        pLStack_16 = (LowLevelList_1_System_Object_ *)list;
        pJVar17 = reader;
        pLVar18 = (LowLevelList_1_System_Object_ *)list;
        if (reader != (JsonReader *)0x0) {
code_?:
          uStack_19 = (*(reader->klass->vtable).get_Depth.methodPtr)
                                (reader,(reader->klass->vtable).get_Depth.method);
code_?:
          do {
            while ((pSStack_14->fields)._size == iStack_9) {
              bVar20 = JsonSerializerInternalReader_ReadForTypeArrayHack
                                (this,reader,(contract->fields)._CollectionItemType_k__BackingField,
                                 (MethodInfo *)0x0);
              if (bVar20 == 0) {
code_?:
                func_?(reader);
                contract = (JsonArrayContract *)func_?(7,reader);
                uVar21 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&contract);
                func_?(uVar21);
                pSVar22 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_23,(MethodInfo *)0x0);
                ppSVar24 = &StringLiteral_Unexpected_end_when_deserializin;
code_?:
                method_00 = (MethodInfo *)0x0;
                str0 = (String *)func_?(ppSVar24);
                pSVar22 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar22,method_00);
                uVar21 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
                reader = (JsonReader *)func_?(uVar21);
                func_?(reader);
                JsonSerializationException::JsonSerializationException__ctor_1
                          ((JsonSerializationException *)reader,pSVar22,(MethodInfo *)0x0);
                func_?(&
                                MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateMultidimensionalArray_System__Collections__IList__Newtonsoft__Json__JsonReader__System__String__Newtonsoft__Json__Serialization__JsonArrayContract_
                               );
                func_?();
                goto code_?;
              }
              iVar11 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                                (reader,(reader->klass->vtable).get_TokenType.method);
              pSVar13 = pSStack_14;
              if (iVar11 == 5) goto code_?;
              if (iVar11 == 0xe) {
                mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                Stack_1_System_Object__Pop
                          (pSStack_14,
                           MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Pop__
                          );
                pLVar18 = (LowLevelList_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                          Stack_1_System_Object__Peek
                                    (pSVar13,
                                     MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Peek__
                                    );
                pLStack_16 = pLVar18;
                uStack_19 = (*(pJVar17->klass->vtable).get_Depth.methodPtr)
                                      (pJVar17,(pJVar17->klass->vtable).get_Depth.method);
              }
              else {
                uStack_1 = 0;
                pTVar8 = (contract->fields)._CollectionItemType_k__BackingField;
                contract_00 = JsonSerializerInternalReader_GetContractSafe
                                        (this,pTVar8,(MethodInfo *)0x0);
                pOStack_25 = JsonSerializerInternalReader_CreateValueNonProperty
                                       (this,reader,pTVar8,contract_00,(MethodInfo *)0x0);
                if (pLVar18 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
                uVar26 = 0;
                pLStack_27 = (LowLevelList_1_System_Object_ *)0x0;
                uVar28 = (pLVar18->klass->_1).interface_offsets_count;
                uStack_29 = (uint)uVar28;
                if (uVar28 != 0) {
                  do {
                    if (pLVar18->klass->interfaceOffsets[uVar26].interfaceType ==
                        (Il2CppClass *)TypeInfo__System__Collections__IList) {
                      ppIVar30 = &(&(pLVar18->klass->vtable).GetHashCode)
                                  [pLVar18->klass->interfaceOffsets[uVar26].offset].methodPtr;
                      goto code_?;
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uVar28);
                }
                ppIVar30 = (Il2CppMethodPointer *)
                           func_?(pLVar18,TypeInfo__System__Collections__IList,2);
code_?:
                (**ppIVar30)(pLVar18,pOStack_25,(MethodInfo *)ppIVar30[1]);
                pJVar17 = pJStack_5;
                uStack_1 = 0xffffffff;
                uStack_19 = (*(pJStack_5->klass->vtable).get_Depth.methodPtr)
                                      (pJStack_5,(pJStack_5->klass->vtable).get_Depth.method);
              }
            }
            cVar31 = (*(reader->klass->vtable).__unknown.methodPtr)
                              (reader,(reader->klass->vtable).__unknown.method);
            if (cVar31 == '\0') goto code_?;
            iVar11 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                              (reader,(reader->klass->vtable).get_TokenType.method);
            pSVar13 = pSStack_14;
            if (iVar11 != 2) {
              if (iVar11 != 5) {
                if (iVar11 != 0xe) {
                  func_?(reader);
                  contract = (JsonArrayContract *)func_?(7,reader);
                  uVar21 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&contract);
                  func_?(uVar21);
                  pSVar22 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_32,(MethodInfo *)0x0);
                  ppSVar24 = &StringLiteral_Unexpected_token_when_deserializ;
                  goto code_?;
                }
                mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                Stack_1_System_Object__Pop
                          (pSStack_14,
                           MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Pop__
                          );
                if ((pSVar13->fields)._size < 1) {
                  pJVar10 = (this->fields)._._Serializer_k__BackingField;
                  if (pJVar10 != (JsonSerializer *)0x0) {
                    SVar12 = (StreamingContext)
                            (*(pJVar10->klass->vtable).get_Context.methodPtr)
                                      (pJVar10,(pJVar10->klass->vtable).get_Context.method);
                    JsonContract::JsonContract_InvokeOnDeserialized
                              ((JsonContract *)contract,(Object *)list,SVar12,(MethodInfo *)0x0);
                    *unaff_FS_OFFSET = uStack_3;
                    return (Object *)list;
                  }
                  break;
                }
                pLVar18 = (LowLevelList_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
                          Stack_1_System_Object__Peek
                                    (pSVar13,
                                     MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Peek__
                                    );
                pLStack_16 = pLVar18;
                uStack_19 = (*(pJVar17->klass->vtable).get_Depth.methodPtr)
                                      (pJVar17,(pJVar17->klass->vtable).get_Depth.method);
                goto code_?;
              }
              goto code_?;
            }
            pLStack_27 = (LowLevelList_1_System_Object_ *)
                         func_?(
                                        TypeInfo__System__Collections__Generic__List<System::Object>
                                        );
            if ((pLStack_27 == (LowLevelList_1_System_Object_ *)0x0) ||
               (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                LowLevelList_1_System_Object___ctor
                          (pLStack_27,
                           MethodInfo__System__Collections__Generic__List<System::Object>__List__),
               pLVar18 == (LowLevelList_1_System_Object_ *)0x0)) break;
            uVar26 = 0;
            pLStack_16 = (LowLevelList_1_System_Object_ *)0x0;
            uVar28 = (pLVar18->klass->_1).interface_offsets_count;
            uStack_19 = (uint)uVar28;
            if (uVar28 != 0) {
              do {
                if (pLVar18->klass->interfaceOffsets[uVar26].interfaceType ==
                    (Il2CppClass *)TypeInfo__System__Collections__IList) {
                  ppIVar30 = &(&(pLVar18->klass->vtable).GetHashCode)
                              [pLVar18->klass->interfaceOffsets[uVar26].offset].methodPtr;
                  goto code_?;
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 < uVar28);
            }
            ppIVar30 = (Il2CppMethodPointer *)
                       func_?(pLVar18,TypeInfo__System__Collections__IList,2);
code_?:
            item = pLStack_27;
            (**ppIVar30)(pLVar18,pLStack_27,(MethodInfo *)ppIVar30[1]);
            mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
            Stack_1_System_Object__Push
                      (pSStack_14,(Object *)item,
                       MethodInfo__System__Collections__Generic__Stack<System::Collections::IList>__Push_System__Collections__IList_
                      );
            pJVar17 = pJStack_5;
            pLStack_16 = item;
            uStack_19 = (*(pJStack_5->klass->vtable).get_Depth.methodPtr)
                                  (pJStack_5,(pJStack_5->klass->vtable).get_Depth.method);
            pLVar18 = item;
          } while( true );
        }
      }
    }
  }
code_?:
  func_?();
  uVar21 = func_?();
  func_?(uVar21);
  pJStack_33 = ((JsonSerializationException *)reader)->klass;
  func_?(&pJStack_33,&UNK_?);
  pcVar34 = (code *)swi(3);
  pOVar35 = (Object *)(*pcVar34)();
  return pOVar35;
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
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__GetEnumerator__
                   );
    func_?(&
                    System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_MethodInfo__System__Linq__Enumerable__ToDictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Current__
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>
                   );
    func_?(&
                    TypeInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IValueProvider);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___PopulateObject_b__36_0_Newtonsoft__Json__Serialization__JsonProperty_
                   );
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___PopulateObject_b__36_1_Newtonsoft__Json__Serialization__JsonProperty_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pJVar6 = this;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  pDStack_8 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)0x0;
  DStack_7._current.value = 0;
  DStack_7._getEnumeratorRetType = 0;
  pJVar9 = (this->fields)._._Serializer_k__BackingField;
  NStack_10.hasValue = 0;
  NStack_10._1_3_ = 0;
  NStack_10.value = 0;
  if ((pJVar9 != (JsonSerializer *)0x0) &&
     (SVar11 = (StreamingContext)
              (*(pJVar9->klass->vtable).get_Context.methodPtr)
                        (pJVar9,(pJVar9->klass->vtable).get_Context.method), pJVar12 = contract,
     contract != (JsonObjectContract *)0x0)) {
    JsonContract::JsonContract_InvokeOnDeserializing
              ((JsonContract *)contract,newObject,SVar11,(MethodInfo *)0x0);
    pCStack_13 = (CultureInfo *)(pJVar12->fields)._Properties_k__BackingField;
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
    }
    pJStack_14 = (JsonProperty *)
                 TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                 static_fields->__9__36_0;
    if (pJStack_14 == (JsonProperty *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c
                       );
      }
      pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)
                   TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                   static_fields->__9;
      pJVar16 = (JsonProperty *)
               func_?(
                              TypeInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>
                              );
      pJStack_14 = pJVar16;
      if (pJVar16 == (JsonProperty *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)pJVar16,
                 (Object *)pDStack_15,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___PopulateObject_b__36_0_Newtonsoft__Json__Serialization__JsonProperty_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->static_fields->
      __9__36_0 = (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonProperty_
                   *)pJVar16;
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c
                       ->static_fields->__9__36_0,pJVar16);
    }
    if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
    }
    this_01 = TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
              static_fields->__9__36_1;
    if (this_01 ==
        (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
         *)0x0) {
      if ((TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c
                       );
      }
      pDStack_15 = (Dictionary_2_System_Object_System_Object_ *)
                   TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->
                   static_fields->__9;
      this_01 = (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
                 *)func_?(
                                  TypeInfo__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>
                                  );
      if (this_01 ==
          (Func_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
           *)0x0) goto code_?;
      mscorlib.dll::System::Reflection::RuntimePropertyInfo+Getter`2[System::Object,System::Object]
      ::RuntimePropertyInfo_Getter_2_System_Object_System_Object___ctor
                ((RuntimePropertyInfo_Getter_2_System_Object_System_Object_ *)this_01,
                 (Object *)pDStack_15,
                 MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c___PopulateObject_b__36_1_Newtonsoft__Json__Serialization__JsonProperty_
                 ,(MethodInfo *)0x0);
      TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c->static_fields->
      __9__36_1 = this_01;
      func_?(&TypeInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c
                       ->static_fields->__9__36_1,this_01);
    }
    pDStack_15 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_6
                           ((IEnumerable_1_System_Object_ *)pCStack_13,
                            (Func_2_Object_Object_ *)pJStack_14,(Func_2_Object_Object_ *)this_01,
                            System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_MethodInfo__System__Linq__Enumerable__ToDictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonProperty>__System__Func<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>_
                           );
    pJVar16 = (JsonProperty *)id;
    if (id != (String *)0x0) {
      pJVar9 = (pJVar6->fields)._._Serializer_k__BackingField;
      if ((pJVar9 == (JsonSerializer *)0x0) ||
         (iVar17 = (*(pJVar9->klass->vtable).get_ReferenceResolver.methodPtr)
                             (pJVar9,(pJVar9->klass->vtable).get_ReferenceResolver.method),
         iVar17 == 0)) goto code_?;
      func_?(3,TypeInfo__Newtonsoft__Json__Serialization__IReferenceResolver,iVar17,pJVar6,
                      pJVar16,newObject);
    }
    this_00 = reader;
    if (reader != (JsonReader *)0x0) {
      pCStack_18 = (CultureInfo *)
                   (*(reader->klass->vtable).get_Depth.methodPtr)
                             (reader,(reader->klass->vtable).get_Depth.method);
      do {
        pMVar19 = (MethodInfo *)this_00;
        iVar17 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                           (this_00,(this_00->klass->vtable).get_TokenType.method);
        if (iVar17 == 4) {
          piVar20 = (int *)(*(this_00->klass->vtable).get_Value.methodPtr)
                                     (this_00,(this_00->klass->vtable).get_Value.method);
          if (piVar20 == (int *)0x0) goto code_?;
          pJVar16 = (JsonProperty *)
                   (**(code **)(*piVar20 + 0xd4))(piVar20,*(undefined4 *)(*piVar20 + 0xd8));
          uStack_1 = 0;
          pCStack_13 = (CultureInfo *)(contract->fields)._Properties_k__BackingField;
          pJStack_21 = pJVar16;
          if (pCStack_13 == (CultureInfo *)0x0) goto code_?;
          pJStack_14 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                 ((JsonPropertyCollection *)pCStack_13,(String *)pJVar16,
                                  StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
          if ((pJStack_14 == (JsonProperty *)0x0) &&
             (pJStack_14 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                     ((JsonPropertyCollection *)pCStack_13,(String *)pJVar16,
                                      StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0),
             pJStack_14 == (JsonProperty *)0x0)) {
            pJVar9 = (this->fields)._._Serializer_k__BackingField;
            if (pJVar9 == (JsonSerializer *)0x0) goto code_?;
            iVar17 = (*(pJVar9->klass->vtable).get_MissingMemberHandling.methodPtr)
                               (pJVar9,(pJVar9->klass->vtable).get_MissingMemberHandling.method);
            if (iVar17 == 1) {
              uVar22 = func_?(&TypeInfo__System__Globalization__CultureInfo);
              func_?(uVar22);
              pCStack_13 = mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
              uVar22 = func_?(&TypeInfo__System__Object);
              args = (Object__Array *)func_?(uVar22,2);
              func_?(args);
              func_?(args,pJVar16);
              func_?(0,pJVar16);
              pJVar12 = contract;
              func_?(contract);
              pOVar23 = mscorlib.dll::System::Tuple`3[Object,Object,Object]::
                        Tuple_3_Object_Object_Object__get_Item1
                                  ((Tuple_3_Object_Object_Object_ *)pJVar12,(MethodInfo *)0x0);
              func_?(pOVar23);
              uVar22 = func_?(7,pOVar23);
              func_?(args);
              func_?(args,uVar22);
              func_?(1,uVar22);
              pSVar24 = (String *)func_?(&StringLiteral_Could_not_find_member___0___on_o);
              pCVar25 = pCStack_13;
              goto code_?;
            }
            JsonReader::JsonReader_Skip(this_00,(MethodInfo *)0x0);
            uStack_1 = 0xffffffff;
          }
          else {
            bVar26 = JsonSerializerInternalReader_ReadForType
                              (this,this_00,(pJStack_14->fields)._PropertyType_k__BackingField,
                               (pJStack_14->fields)._Converter_k__BackingField,(MethodInfo *)0x0);
            if (bVar26 == 0) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            iVar17 = (*(this_00->klass->vtable).get_TokenType.methodPtr)();
            if (iVar17 == 0xb) {
code_?:
              pOVar23 = (Object *)0x1;
            }
            else {
              iVar17 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                                 (this_00,(this_00->klass->vtable).get_TokenType.method);
              pOVar23 = (Object *)0x2;
              if (iVar17 == 0xc) goto code_?;
            }
            pJVar16 = pJStack_14;
            if (pDStack_15 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDStack_15,(Object *)pJStack_14,pOVar23,
                       MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__set_Item_Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_
                      );
            JsonSerializerInternalReader_SetPropertyValue
                      (this,pJVar16,this_00,newObject,(MethodInfo *)0x0);
            uStack_1 = 0xffffffff;
          }
        }
        else if (iVar17 != 5) {
          if (iVar17 != 0xd) {
            func_?(this_00);
            this = (JsonSerializerInternalReader *)func_?(7,this_00);
            uVar22 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
            func_?(uVar22);
            pSVar24 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_27,(MethodInfo *)0x0);
            pMVar19 = (MethodInfo *)0x0;
            str0 = (String *)func_?(&StringLiteral_Unexpected_token_when_deserializ);
            pSVar24 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar24,pMVar19);
            uVar22 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
            pJVar16 = (JsonProperty *)func_?(uVar22);
            func_?(pJVar16);
            JsonSerializationException::JsonSerializationException__ctor_1
                      ((JsonSerializationException *)pJVar16,pSVar24,(MethodInfo *)0x0);
            func_?(&
                            MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateObject_System__Object__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
                           );
            goto code_?;
          }
          if (pDStack_15 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          pDVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff7c,pDStack_15,
                               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__GetEnumerator__
                              );
          uStack_29 = 0;
          DStack_7._dictionary =
               (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar28->_dictionary;
          DStack_7._version = pDVar28->_version;
          DStack_7._index = pDVar28->_index;
          DStack_7._current.key = (pDVar28->_current).key;
          DStack_7._16_8_ = *(undefined8 *)&(pDVar28->_current).value;
          uStack_1 = 3;
          pDStack_8 = &DStack_7;
          goto code_?;
        }
        cVar30 = (*(this_00->klass->vtable).__unknown.methodPtr)
                          (this_00,(this_00->klass->vtable).__unknown.method);
      } while (cVar30 != '\0');
      uVar22 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
      pJVar31 = (JsonSerializationException *)func_?(uVar22);
      func_?(pJVar31);
      pMVar19 = (MethodInfo *)0x0;
      pSVar24 = (String *)func_?(&StringLiteral_Unexpected_end_when_deserializin);
      JsonSerializationException::JsonSerializationException__ctor_1(pJVar31,pSVar24,pMVar19);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PopulateObject_System__Object__Newtonsoft__Json__JsonReader__Newtonsoft__Json__Serialization__JsonObjectContract__System__String_
                     );
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pCStack_13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
  func_?();
  args = (Object__Array *)func_?();
  func_?();
  func_?();
  func_?();
  pSVar24 = (String *)func_?();
  pCVar25 = pCStack_13;
  goto code_?;
  while( true ) {
    if ((Tuple_3_Object_Object_Object_ *)DStack_7._current.key ==
        (Tuple_3_Object_Object_Object_ *)0x0) goto code_?;
    if ((((Tuple_3_Object_Object_Object_ *)((int)DStack_7._current.key + 0x28))->fields).m_Item1 ==
        (Object *)0x2) break;
code_?:
    do {
      bVar26 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__MoveNext__
                        );
      pOVar23 = DStack_7._current.key;
      if (bVar26 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__Dispose__
                   ,pMVar19);
        uStack_1 = 0xffffffff;
        pJVar9 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar9 != (JsonSerializer *)0x0) {
          SVar11 = (StreamingContext)
                  (*(pJVar9->klass->vtable).get_Context.methodPtr)
                            (pJVar9,(pJVar9->klass->vtable).get_Context.method);
          pOVar23 = newObject;
          JsonContract::JsonContract_InvokeOnDeserialized
                    ((JsonContract *)contract,newObject,SVar11,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pOVar23;
        }
        goto code_?;
      }
      if (DStack_7._current.value == 0) {
        if ((Tuple_3_Object_Object_Object_ *)DStack_7._current.key ==
            (Tuple_3_Object_Object_Object_ *)0x0) goto code_?;
        if (((((Tuple_3_Object_Object_Object_ *)((int)DStack_7._current.key + 0x28))->fields).
             m_Item1 == (Object *)0x1) ||
           ((((Tuple_3_Object_Object_Object_ *)((int)DStack_7._current.key + 0x28))->fields).
            m_Item1 == (Object *)0x2)) {
          uVar22 = func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(uVar22);
          pCStack_18 = mscorlib.dll::System::Globalization::CultureInfo::
                       CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar22 = func_?(&TypeInfo__System__Object);
          args = (Object__Array *)func_?(uVar22,1);
          func_?(pOVar23);
          mscorlib.dll::System::Tuple`3[Object,Object,Object]::
          Tuple_3_Object_Object_Object__get_Item1
                    ((Tuple_3_Object_Object_Object_ *)pOVar23,(MethodInfo *)0x0);
          func_?(args);
          func_?(args);
          func_?(0);
          pSVar24 = (String *)func_?(&StringLiteral_Required_property___0___not_foun);
          pCVar25 = pCStack_18;
          goto code_?;
        }
        NStack_10 = *(Nullable_1_UInt32_ *)
                     &((Tuple_3_Object_Object_Object_ *)((int)DStack_7._current.key + 0x3c))->
                      monitor;
        pJVar9 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar9 == (JsonSerializer *)0x0) goto code_?;
        uVar32 = func_?(0x16,pJVar9);
        uVar32 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                           (&NStack_10,uVar32,
                            MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                           );
        if ((uVar32 >> 1 & 1) != 0) {
          if ((Tuple_3_Object_Object_Object_ *)pOVar23 == (Tuple_3_Object_Object_Object_ *)0x0)
          goto code_?;
          if (*(char *)((int)&((Tuple_3_Object_Object_Object_ *)((int)pOVar23 + 0x28))->klass + 2)
              != '\0') {
            pJStack_21 = (JsonProperty *)
                         ((Tuple_3_Object_Object_Object_ *)((int)pOVar23 + 0x14))->monitor;
            pCStack_18 = (CultureInfo *)
                         ((Tuple_3_Object_Object_Object_ *)((int)pOVar23 + 0x28))->monitor;
            if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0)
            {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar25 = mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            pOVar23 = JsonSerializerInternalReader_EnsureType
                                (this,(Object *)pCStack_18,pCVar25,
                                 (Type *)(((Tuple_3_Object_Object_Object_ *)((int)pOVar23 + 0x14))->
                                         fields).m_Item1,(MethodInfo *)0x0);
            if (pJStack_21 == (JsonProperty *)0x0) goto code_?;
            pMVar19 = (MethodInfo *)newObject;
            func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,pJStack_21,
                            newObject,pOVar23);
          }
        }
        goto code_?;
      }
    } while (DStack_7._current.value != 1);
  }
  uVar22 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar22);
  pCStack_18 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
  uVar22 = func_?(&TypeInfo__System__Object);
  args = (Object__Array *)func_?(uVar22,1);
  func_?(pOVar23);
  mscorlib.dll::System::Tuple`3[Object,Object,Object]::Tuple_3_Object_Object_Object__get_Item1
            ((Tuple_3_Object_Object_Object_ *)pOVar23,(MethodInfo *)0x0);
  func_?(args);
  func_?(args);
  func_?(0);
  pSVar24 = (String *)func_?(&StringLiteral_Required_property___0___expects_);
  pCVar25 = pCStack_18;
code_?:
  pJVar16 = (JsonProperty *)
           Json::Utilities::StringUtils::StringUtils_FormatWith
                     (pSVar24,(IFormatProvider *)pCVar25,args,(MethodInfo *)0x0);
  func_?();
  pJVar31 = (JsonSerializationException *)func_?();
  func_?();
  JsonSerializationException::JsonSerializationException__ctor_1
            (pJVar31,(String *)pJVar16,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  func_?();
  func_?();
  pSStack_33 = (String__Class *)pJVar16->klass;
  uVar22 = func_?(&pSStack_33,&UNK_?);
  func_?(uVar22);
  pcVar34 = (code *)swi(3);
  pOVar23 = (Object *)(*pcVar34)();
  return pOVar23;
}


/* Boolean ReadForType(JsonReader, Type, JsonConverter) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ReadForType
               (JsonSerializerInternalReader *this,JsonReader *reader,Type *t,
               JsonConverter *propertyConverter,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Byte);
    func_?(&TypeRef__System__DateTimeOffset);
    func_?(&TypeRef__System__Decimal);
    func_?(&TypeRef__System__Nullable<System::Decimal>);
    func_?(&TypeRef__System__Nullable<System::DateTimeOffset>);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pJVar1 = JsonSerializerInternalReader_GetContractSafe(this,t,(MethodInfo *)0x0);
  if (propertyConverter == (JsonConverter *)0x0) {
    if (pJVar1 != (JsonContract *)0x0) {
      if ((pJVar1->fields)._Converter_k__BackingField == (JsonConverter *)0x0) {
        this_00 = (this->fields)._._Serializer_k__BackingField;
        if (this_00 == (JsonSerializer *)0x0) goto code_?;
        pJVar2 = JsonSerializer::JsonSerializer_GetMatchingConverter
                           (this_00,(pJVar1->fields)._UnderlyingType_k__BackingField,
                            (MethodInfo *)0x0);
        if (pJVar2 != (JsonConverter *)0x0) goto code_?;
        if ((pJVar1->fields)._InternalConverter_k__BackingField == (JsonConverter *)0x0)
        goto code_?;
        pJVar2 = (pJVar1->fields)._InternalConverter_k__BackingField;
      }
      else {
        pJVar2 = (pJVar1->fields)._Converter_k__BackingField;
      }
      if (pJVar2 != (JsonConverter *)0x0) goto code_?;
    }
code_?:
    pIVar3 = TypeRef__System__Byte;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
    pIVar3 = TypeRef__System__Decimal;
    if (bVar5 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
      bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
      pIVar3 = TypeRef__System__Nullable<System::Decimal>;
      if (bVar5 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                          ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
        pIVar3 = TypeRef__System__DateTimeOffset;
        if (bVar5 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
          pIVar3 = TypeRef__System__Nullable<System::DateTimeOffset>;
          if (bVar5 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
            mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)t,(Object **)pTVar4,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      if (reader != (JsonReader *)0x0) {
        (*(reader->klass->vtable).__unknown_2.methodPtr)
                  (auStack_6,reader,(reader->klass->vtable).__unknown_2.method);
        return 1;
      }
    }
    else if (reader != (JsonReader *)0x0) {
      (*(reader->klass->vtable).__unknown_1.methodPtr)
                (reader,(reader->klass->vtable).__unknown_1.method);
      return 1;
    }
  }
  else {
code_?:
    if (reader != (JsonReader *)0x0) {
      bVar5 = (*(reader->klass->vtable).__unknown.methodPtr)
                        (reader,(reader->klass->vtable).__unknown.method);
      return bVar5;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean ReadForTypeArrayHack(JsonReader, Type) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ReadForTypeArrayHack
               (JsonSerializerInternalReader *this,JsonReader *reader,Type *t,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  uStack_3 = 0;
  bVar4 = JsonSerializerInternalReader_ReadForType
                    (this,reader,t,(JsonConverter *)0x0,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = uStack_2;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (ParameterOverride_1_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                           );
  if ((this_00 == (ParameterOverride_1_System_Object_ *)0x0) ||
     (Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>__Dictionary__
                ), reader == (JsonReader *)0x0)) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(uVar1);
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    uVar1 = func_?(&TypeInfo__System__Object,2);
    args = (Object__Array *)func_?(uVar1);
    func_?(args);
    func_?(args,pJStack_2);
    func_?(0,pJStack_2);
    func_?(objectType);
    uVar1 = func_?(7,objectType);
    func_?(args);
    func_?(args,uVar1);
    func_?(1,uVar1);
    ppSVar3 = &StringLiteral_Could_not_find_member___0___on_o;
code_?:
    method_00 = (MethodInfo *)0x0;
    pSVar4 = (String *)func_?(ppSVar3);
    pSVar4 = Json::Utilities::StringUtils::StringUtils_FormatWith
                        (pSVar4,(IFormatProvider *)provider,args,method_00);
    uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonSerializationException);
    pJVar5 = (JsonSerializationException *)func_?(uVar1);
    func_?(pJVar5);
    JsonSerializationException::JsonSerializationException__ctor_1
              (pJVar5,pSVar4,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                   );
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    pIVar7 = (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)(*pcVar6)()
    ;
    return pIVar7;
  }
  do {
    iVar8 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    if (iVar8 == 4) {
      piVar9 = (int *)(*(reader->klass->vtable).get_Value.methodPtr)(reader);
      if (((piVar9 == (int *)0x0) ||
          (propertyName = (JsonProperty *)
                          (**(code **)(*piVar9 + 0xd4))(piVar9,*(undefined4 *)(*piVar9 + 0xd8)),
          pJStack_2 = propertyName, contract == (JsonObjectContract *)0x0)) ||
         (pJVar10 = (contract->fields)._ConstructorParameters_k__BackingField,
         pJVar10 == (JsonPropertyCollection *)0x0)) goto code_?;
      pJStack_2 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                             (pJVar10,(String *)propertyName,StringComparison__Enum_Ordinal,
                              (MethodInfo *)0x0);
      if ((pJStack_2 == (JsonProperty *)0x0) &&
         (pJStack_2 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                 (pJVar10,(String *)propertyName,
                                  StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0),
         pJStack_2 == (JsonProperty *)0x0)) {
        pJVar10 = (contract->fields)._Properties_k__BackingField;
        pJStack_2 = propertyName;
        if (pJVar10 == (JsonPropertyCollection *)0x0) goto code_?;
        pJStack_2 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                               (pJVar10,(String *)propertyName,StringComparison__Enum_Ordinal,
                                (MethodInfo *)0x0);
        if ((pJStack_2 != (JsonProperty *)0x0) ||
           (pJStack_2 = JsonPropertyCollection::JsonPropertyCollection_GetProperty
                                   (pJVar10,(String *)propertyName,
                                    StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0),
           pJStack_2 != (JsonProperty *)0x0)) goto code_?;
        cVar11 = (*(reader->klass->vtable).__unknown.methodPtr)
                          (reader,(reader->klass->vtable).__unknown.method);
        if (cVar11 != '\0') {
          pJVar12 = (this->fields)._._Serializer_k__BackingField;
          pJStack_2 = propertyName;
          if (pJVar12 != (JsonSerializer *)0x0) {
            iVar8 = (*(pJVar12->klass->vtable).get_MissingMemberHandling.methodPtr)
                              (pJVar12,(pJVar12->klass->vtable).get_MissingMemberHandling.method);
            if (iVar8 != 1) {
              JsonReader::JsonReader_Skip(reader,(MethodInfo *)0x0);
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
      else {
code_?:
        bVar13 = JsonSerializerInternalReader_ReadForType
                          (this,reader,(pJStack_2->fields)._PropertyType_k__BackingField,
                           (pJStack_2->fields)._Converter_k__BackingField,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          if ((pJStack_2->fields)._Ignored_k__BackingField == 0) {
            JsonSerializerInternalReader_CreateValueProperty
                      (this,reader,pJStack_2,(Object *)0x0,1,(Object *)0x0,(MethodInfo *)0x0);
            uVar14 = 0;
            uVar15 = (this_00->klass->_1).interface_offsets_count;
            if (uVar15 != 0) {
              do {
                if (this_00->klass->interfaceOffsets[uVar14].interfaceType ==
                    (Il2CppClass *)
                    TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Serialization::JsonProperty,_System::Object>
                   ) {
                  (*(&(this_00->klass->vtable).Finalize)
                    [this_00->klass->interfaceOffsets[uVar14].offset].methodPtr)();
                  goto code_?;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar15);
            }
            puVar16 = (undefined4 *)func_?();
            (*(code *)*puVar16)();
          }
          else {
            JsonReader::JsonReader_Skip(reader,(MethodInfo *)0x0);
            pJStack_2 = propertyName;
          }
          goto code_?;
        }
      }
      uVar1 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar1);
      provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
      uVar1 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar1);
      func_?(args);
      func_?(args,propertyName);
      func_?(0,propertyName);
      ppSVar3 = &StringLiteral_Unexpected_end_when_setting__0__;
      goto code_?;
    }
    if (iVar8 != 5) {
      if (iVar8 == 0xd) {
        return (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)this_00;
      }
      func_?();
      func_?(7,reader);
      uVar1 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken);
      func_?(uVar1);
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffdc,(MethodInfo *)0x0);
      method_01 = (Enum__Class *)0x0;
      str0 = (String *)func_?(&StringLiteral_Unexpected_token_when_deserializ);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar4,(MethodInfo *)method_01);
      uVar1 = func_?();
      pJVar5 = (JsonSerializationException *)func_?(uVar1);
      func_?(pJVar5);
      JsonSerializationException::JsonSerializationException__ctor_1
                (pJVar5,pSVar4,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__ResolvePropertyAndConstructorValues_Newtonsoft__Json__Serialization__JsonObjectContract__Newtonsoft__Json__JsonReader__System__Type_
                     );
      goto code_?;
    }
code_?:
    cVar11 = (*(reader->klass->vtable).__unknown.methodPtr)(reader);
    if (cVar11 == '\0') {
      return (IDictionary_2_Newtonsoft_Json_Serialization_JsonProperty_System_Object_ *)this_00;
    }
  } while( true );
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__set_Item_Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_
                   );
    cRam_? = '\x01';
  }
  if (property == (JsonProperty *)0x0) {
    return;
  }
  if (reader == (JsonReader *)0x0) goto code_?;
  iVar1 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                    (reader,(reader->klass->vtable).get_TokenType.method);
  if (iVar1 == 0xb) {
code_?:
    value = (Object *)0x1;
  }
  else {
    iVar1 = (*(reader->klass->vtable).get_TokenType.methodPtr)
                      (reader,(reader->klass->vtable).get_TokenType.method);
    value = (Object *)0x2;
    if (iVar1 == 0xc) goto code_?;
  }
  if (requiredProperties !=
      (Dictionary_2_Newtonsoft_Json_Serialization_JsonProperty_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)requiredProperties,(Object *)property,
               value,
               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Serialization::JsonProperty,_Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence>__set_Item_Newtonsoft__Json__Serialization__JsonProperty__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_
              );
    return;
  }
code_?:
  func_?();
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
  reader_00 = reader;
  property_00 = property;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__IValueProvider);
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__GetValueOrDefault_Newtonsoft__Json__ObjectCreationHandling_
                   );
    func_?(&
                    MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                   );
    func_?(&TypeRef__System__Collections__ObjectModel__ReadOnlyCollection);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (property_00 == (JsonProperty *)0x0) goto code_?;
  if ((property_00->fields)._Ignored_k__BackingField != 0) {
    if (reader_00 == (JsonReader *)0x0) goto code_?;
    goto code_?;
  }
  NStack_1.hasValue = (property_00->fields)._ObjectCreationHandling_k__BackingField.hasValue;
  NStack_1._1_3_ =
       *(undefined3 *)&(property_00->fields)._ObjectCreationHandling_k__BackingField.field_0x1;
  NStack_1.value = (property_00->fields)._ObjectCreationHandling_k__BackingField.value;
  pOStack_2 = (Object *)0x0;
  pJVar3 = (this->fields)._._Serializer_k__BackingField;
  pTStack_4 = (Type *)((uint)pTStack_4 & 0xffffff00);
  property = (JsonProperty *)((uint)property & 0xffffff);
  if (pJVar3 == (JsonSerializer *)0x0) goto code_?;
  uVar5 = (*(pJVar3->klass->vtable).get_ObjectCreationHandling.methodPtr)
                    (pJVar3,(pJVar3->klass->vtable).get_ObjectCreationHandling.method);
  uVar5 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                    (&NStack_1,uVar5,
                     MethodInfo__System__Nullable<Newtonsoft::Json::ObjectCreationHandling>__GetValueOrDefault_Newtonsoft__Json__ObjectCreationHandling_
                    );
  if ((uVar5 == 0) || (uVar5 == 1)) {
    if (reader_00 == (JsonReader *)0x0) goto code_?;
    iVar6 = (*(reader_00->klass->vtable).get_TokenType.methodPtr)
                      (reader_00,(reader_00->klass->vtable).get_TokenType.method);
    if (((iVar6 == 2) ||
        (iVar6 = (*(reader_00->klass->vtable).get_TokenType.methodPtr)
                           (reader_00,(reader_00->klass->vtable).get_TokenType.method), iVar6 == 1))
       && ((property_00->fields)._Readable_k__BackingField != 0)) {
      pIVar7 = (property_00->fields)._ValueProvider_k__BackingField;
      if (pIVar7 == (IValueProvider *)0x0) goto code_?;
      pOStack_2 = (Object *)
                  func_?(1,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,pIVar7
                                  ,target);
      property = (JsonProperty *)CONCAT13(1,property._0_3_);
      if (pOStack_2 != (Object *)0x0) {
        pTVar8 = (property_00->fields)._PropertyType_k__BackingField;
        if (pTVar8 == (Type *)0x0) goto code_?;
        bVar9 = mscorlib.dll::System::Type::Type_get_IsArray(pTVar8,(MethodInfo *)0x0);
        handle = TypeRef__System__Collections__ObjectModel__ReadOnlyCollection;
        if (bVar9 == 0) {
          pTStack_4 = (property_00->fields)._PropertyType_k__BackingField;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar9 = Json::Utilities::ReflectionUtils::ReflectionUtils_InheritsGenericDefinition
                            (pTStack_4,pTVar8,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            pTVar8 = (property_00->fields)._PropertyType_k__BackingField;
            if (pTVar8 == (Type *)0x0) goto code_?;
            bVar9 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar8,(MethodInfo *)0x0);
            pTStack_4 = (Type *)(uint)(bVar9 == 0);
            goto code_?;
          }
        }
      }
      pTStack_4 = (Type *)0x0;
    }
  }
code_?:
  uVar10 = property._3_1_;
  property = (JsonProperty *)CONCAT31(property._1_3_,uVar10);
  if (((property_00->fields)._Writable_k__BackingField == 0) && ((char)pTStack_4 == '\0')) {
    if (reader_00 != (JsonReader *)0x0) {
code_?:
      JsonReader::JsonReader_Skip(reader_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pJVar3 = (this->fields)._._Serializer_k__BackingField;
    NStack_11.hasValue = (property_00->fields)._NullValueHandling_k__BackingField.hasValue;
    NStack_11._1_3_ =
         *(undefined3 *)&(property_00->fields)._NullValueHandling_k__BackingField.field_0x1;
    NStack_11.value = (property_00->fields)._NullValueHandling_k__BackingField.value;
    if (pJVar3 != (JsonSerializer *)0x0) {
      uVar5 = (*(pJVar3->klass->vtable).get_NullValueHandling.methodPtr)
                        (pJVar3,(pJVar3->klass->vtable).get_NullValueHandling.method);
      uVar5 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                        (&NStack_11,uVar5,
                         MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                        );
      if (uVar5 == 1) {
        if (reader_00 == (JsonReader *)0x0) goto code_?;
        iVar6 = (*(reader_00->klass->vtable).get_TokenType.methodPtr)
                          (reader_00,(reader_00->klass->vtable).get_TokenType.method);
        if (iVar6 == 0xb) goto code_?;
      }
      pJVar3 = (this->fields)._._Serializer_k__BackingField;
      if (pJVar3 != (JsonSerializer *)0x0) {
        uVar5 = (*(pJVar3->klass->vtable).get_DefaultValueHandling.methodPtr)
                          (pJVar3,(pJVar3->klass->vtable).get_DefaultValueHandling.method);
        uVar5 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                          ((Nullable_1_UInt32_ *)&stack0xffffffdc,uVar5,
                           MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                          );
        if ((uVar5 & 1) != 0) {
          if (reader_00 == (JsonReader *)0x0) goto code_?;
          token = (*(reader_00->klass->vtable).get_TokenType.methodPtr)
                            (reader_00,(reader_00->klass->vtable).get_TokenType.method);
          bVar9 = JsonReader::JsonReader_IsPrimitiveToken(token,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pOVar12 = (Object *)
                      (*(reader_00->klass->vtable).get_Value.methodPtr)
                                (reader_00,(reader_00->klass->vtable).get_Value.method);
            bVar9 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (pOVar12,(property_00->fields)._DefaultValue_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar9 != 0) goto code_?;
          }
        }
        if ((char)pTStack_4 == '\0') {
          pOVar12 = JsonSerializerInternalReader_CreateValueProperty
                              (this,reader_00,property_00,target,(bool)property,(Object *)0x0,
                               (MethodInfo *)0x0);
        }
        else {
          pOVar12 = JsonSerializerInternalReader_CreateValueProperty
                              (this,reader_00,property_00,target,(bool)property,pOStack_2,
                               (MethodInfo *)0x0);
          if (pOVar12 == pOStack_2) {
            return;
          }
        }
        bVar9 = JsonSerializerInternalReader_ShouldSetPropertyValue
                          (this,property_00,pOVar12,(MethodInfo *)0x0);
        pOVar13 = target;
        if (bVar9 != 0) {
          pIVar7 = (property_00->fields)._ValueProvider_k__BackingField;
          if (pIVar7 == (IValueProvider *)0x0) goto code_?;
          func_?(0,TypeInfo__Newtonsoft__Json__Serialization__IValueProvider,pIVar7,target,
                          pOVar12);
          if ((property_00->fields)._SetIsSpecified_k__BackingField !=
              (Action_2_Object_Object_ *)0x0) {
            pAVar14 = (property_00->fields)._SetIsSpecified_k__BackingField;
            property = (JsonProperty *)CONCAT13(1,property._0_3_);
            uVar15 = func_?(TypeInfo__System__Boolean,(int)&property + 3);
            (*(pAVar14->fields)._._.invoke_impl)
                      ((pAVar14->fields)._._.method_code,pOVar13,uVar15,(pAVar14->fields)._._.method);
            return;
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean ShouldSetPropertyValue(JsonProperty, Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Serialization::JsonSerializerInternalReader::
     JsonSerializerInternalReader_ShouldSetPropertyValue
               (JsonSerializerInternalReader *this,JsonProperty *property,Object *value,
               MethodInfo *method)

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
    NStack_1.hasValue = (property->fields)._NullValueHandling_k__BackingField.hasValue;
    NStack_1._1_3_ = *(undefined3 *)&(property->fields)._NullValueHandling_k__BackingField.field_0x1
    ;
    NStack_1.value = (property->fields)._NullValueHandling_k__BackingField.value;
    pJVar2 = (this->fields)._._Serializer_k__BackingField;
    if (pJVar2 != (JsonSerializer *)0x0) {
      uVar3 = (*(pJVar2->klass->vtable).get_NullValueHandling.methodPtr)
                        (pJVar2,(pJVar2->klass->vtable).get_NullValueHandling.method);
      uVar3 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                        (&NStack_1,uVar3,
                         MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__GetValueOrDefault_Newtonsoft__Json__NullValueHandling_
                        );
      if ((uVar3 != 1) || (value != (Object *)0x0)) {
        pJVar2 = (this->fields)._._Serializer_k__BackingField;
        if (pJVar2 == (JsonSerializer *)0x0) goto code_?;
        uVar3 = (*(pJVar2->klass->vtable).get_DefaultValueHandling.methodPtr)
                          (pJVar2,(pJVar2->klass->vtable).get_DefaultValueHandling.method);
        uVar3 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                          ((Nullable_1_UInt32_ *)&stack0xffffffec,uVar3,
                           MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault_Newtonsoft__Json__DefaultValueHandling_
                          );
        if (((uVar3 & 1) != 0) &&
           (bVar4 = Json::Utilities::MiscellaneousUtils::MiscellaneousUtils_ValueEquals
                              (value,(property->fields)._DefaultValue_k__BackingField,
                               (MethodInfo *)0x0), bVar4 != 0)) {
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
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

