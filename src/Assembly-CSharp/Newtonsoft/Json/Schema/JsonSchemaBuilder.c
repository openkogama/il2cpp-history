
/* JsonSchema BuildSchema() */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_BuildSchema
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  pJVar1 = this;
  pIStack_2 = in_ECX;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar3 = (this->fields)._reader;
  if (pJVar3 == (JsonReader *)0x0) {
code_?:
    func_?(0);
  }
  else {
    iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                      (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
    if (iVar4 != 1) {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      uVar7 = func_?();
      func_?(uVar7,0);
      pIStack_2 = (IsolatedStorageException *)func_?(7,uVar7);
      uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&pIStack_2);
      func_?(pOVar6,0);
      func_?(pOVar6,uVar7);
      func_?(0,uVar7);
      pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Expected_StartObject_while_parsi,(IFormatProvider *)pCVar5,
                           pOVar6,(MethodInfo *)0x0);
      pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
      pIStack_2 = pIVar9;
      func_?();
      goto code_?;
    }
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) goto code_?;
    (*(code *)(pJVar3->klass->vtable).__unknown.method)
              (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) goto code_?;
    iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                      (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
    if (iVar4 == 0xd) {
      pJVar10 = (JsonSchema *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
      JsonSchema::JsonSchema__ctor(pJVar10,(MethodInfo *)0x0);
      JsonSchemaBuilder_Push(this,pJVar10,(MethodInfo *)0x0);
      pJVar10 = JsonSchemaBuilder_Pop(this,(MethodInfo *)0x0);
      return pJVar10;
    }
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) goto code_?;
    pOVar11 = (Object *)
             (*(code *)(pJVar3->klass->vtable).get_Value.method)
                       (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar8 = mscorlib.dll::System::Convert::Convert_ToString_2
                        (pOVar11,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) goto code_?;
    (*(code *)(pJVar3->klass->vtable).__unknown.method)
              (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar12 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar8,StringLiteral__ref,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      pJVar10 = (JsonSchema *)func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchema);
      JsonSchema::JsonSchema__ctor(pJVar10,(MethodInfo *)0x0);
      JsonSchemaBuilder_Push(this,pJVar10,(MethodInfo *)0x0);
      JsonSchemaBuilder_ProcessSchemaProperty(this,pSVar8,(MethodInfo *)0x0);
      pJVar3 = (this->fields)._reader;
      while (pJVar3 != (JsonReader *)0x0) {
        cVar13 = (*(code *)(pJVar3->klass->vtable).__unknown.method)
                          (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
        if (cVar13 == '\0') {
code_?:
          pJVar10 = JsonSchemaBuilder_Pop(this,(MethodInfo *)0x0);
          return pJVar10;
        }
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                          (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
        if (iVar4 == 0xd) goto code_?;
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        pOVar11 = (Object *)func_?(8,pJVar3);
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        pSVar8 = mscorlib.dll::System::Convert::Convert_ToString_2
                            (pOVar11,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
        pJVar3 = (this->fields)._reader;
        if (pJVar3 == (JsonReader *)0x0) break;
        func_?(0xb,pJVar3);
        JsonSchemaBuilder_ProcessSchemaProperty(this,pSVar8,(MethodInfo *)0x0);
        pJVar3 = (this->fields)._reader;
      }
      goto code_?;
    }
    pJVar3 = (this->fields)._reader;
    if (pJVar3 == (JsonReader *)0x0) goto code_?;
    pJVar14 = (JsonSchemaBuilder *)
              (*(code *)(pJVar3->klass->vtable).get_Value.method)
                        (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr);
    pJVar15 = (JsonSchemaBuilder *)0x0;
    if (pJVar14 == (JsonSchemaBuilder *)0x0) {
      this = (JsonSchemaBuilder *)0x0;
    }
    else {
      if ((String__Class *)pJVar14->klass == TypeInfo__System__String) {
        pJVar15 = pJVar14;
      }
      pSVar16 = TypeInfo__System__String;
      this = pJVar15;
      if (pJVar15 == (JsonSchemaBuilder *)0x0) goto code_?;
    }
    do {
      pJVar3 = (pJVar1->fields)._reader;
      if (pJVar3 == (JsonReader *)0x0) goto code_?;
      cVar13 = (*(code *)(pJVar3->klass->vtable).__unknown.method)
                        (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
      if (cVar13 == '\0') {
code_?:
        pJVar17 = (pJVar1->fields)._resolver;
        if (pJVar17 == (JsonSchemaResolver *)0x0) goto code_?;
        pJVar10 = (JsonSchema *)
                  (*(code *)(pJVar17->klass->vtable).GetSchema.method)
                            (pJVar17,pJVar15,pJVar17->klass[1]._0.image);
        if (pJVar10 != (JsonSchema *)0x0) {
          return pJVar10;
        }
        goto code_?;
      }
      pJVar3 = (pJVar1->fields)._reader;
      if (pJVar3 == (JsonReader *)0x0) goto code_?;
      iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                        (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
      if (iVar4 == 0xd) goto code_?;
      pJVar3 = (pJVar1->fields)._reader;
      if (pJVar3 == (JsonReader *)0x0) goto code_?;
      iVar4 = func_?(7,pJVar3);
    } while (iVar4 != 1);
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar6,0);
  func_?(pOVar6,this);
  func_?(0,this);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Found_StartObject_within_the_sch,(IFormatProvider *)pCVar5,
                       pOVar6,(MethodInfo *)0x0);
  pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
  pIStack_2 = pIVar9;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar6,0);
  func_?(pOVar6,this);
  func_?(0,this);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Could_not_resolve_schema_referen,(IFormatProvider *)pCVar5,
                       pOVar6,(MethodInfo *)0x0);
  pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
  pIStack_2 = pIVar9;
  pJVar14 = (JsonSchemaBuilder *)func_?();
  pSVar16 = extraout_ECX;
code_?:
  func_?(pJVar14,pSVar16);
  pcVar18 = (code *)swi(3);
  pJVar10 = (JsonSchema *)(*pcVar18)();
  return pJVar10;
}


/* JsonSchemaType MapType(String) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_MapType
          (String *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (IsolatedStorageException *)0x0;
  if ((((uint)(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
  }
  pIVar2 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->
           JsonSchemaTypeMapping;
  if (pIVar2 == (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) {
    func_?(0);
  }
  else {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
           ) {
          ppMVar6 = &(&(pIVar2->klass->vtable).TryGetValue)[pIVar3->interfaceOffsets[uVar4].offset].
                     method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)
              func_?(pIVar2,
                              TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>
                              ,3);
code_?:
    cVar7 = (*(code *)*ppMVar6)(pIVar2,type,&pIStack_1,ppMVar6[1]);
    if (cVar7 != '\0') {
      return (JsonSchemaType__Enum)pIStack_1;
    }
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,type);
  func_?(0,type);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Invalid_JSON_schema_type___0_,(IFormatProvider *)provider,args,
                       (MethodInfo *)0x0);
  this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,message,(MethodInfo *)0x0);
  pIStack_1 = this;
  func_?();
  pcVar8 = (code *)swi(3);
  JVar9 = (*pcVar8)();
  return JVar9;
}


/* String MapType(JsonSchemaType) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
         JsonSchemaBuilder_MapType_1(JsonSchemaType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KStack_1.key = (Object *)0x0;
  KStack_1.value = 0;
  this = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
         func_?(
                        TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder___MapType_c__AnonStorey0
                        );
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this,(MethodInfo *)0x0);
  if (this != (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
    (this->fields)._this = (WinningConditionDebriefing *)type;
    if ((((uint)(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants);
    }
    source = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaConstants->static_fields->
             JsonSchemaTypeMapping;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder___MapType_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_
               ,
               MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>__Func_System__Object__void__
              );
    KStack_1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Single_3
                         ((IEnumerable_1_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_
                           *)source,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_Newtonsoft_Json_Schema_JsonSchemaType_Boolean_
                           *)this_00,
                          System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_MethodInfo__System__Linq__Enumerable__Single<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>_>__System__Func<System::Collections::Generic::KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>,_bool>_
                         );
    pSVar2 = (String *)
             func_?(&KStack_1,
                             MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_Newtonsoft::Json::Schema::JsonSchemaType>__get_Key__
                            );
    return pSVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* JsonSchema Parse(JsonReader) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Parse
          (JsonSchemaBuilder *this,JsonReader *reader,MethodInfo *method)

{
  (this->fields)._reader = reader;
  if (reader != (JsonReader *)0x0) {
    iVar1 = (*(code *)(reader->klass->vtable).get_TokenType.method)
                      (reader,(reader->klass->vtable).get_Value.methodPtr);
    if (iVar1 == 0) {
      pJVar2 = (this->fields)._reader;
      if (pJVar2 == (JsonReader *)0x0) goto code_?;
      (*(code *)(pJVar2->klass->vtable).__unknown.method)
                (pJVar2,(pJVar2->klass->vtable).__unknown_1.methodPtr);
    }
    pJVar3 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
    return pJVar3;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  pJVar3 = (JsonSchema *)(*pcVar4)();
  return pJVar3;
}


/* JsonSchema Pop() */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Pop
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._stack;
  pJVar2 = (this->fields)._currentSchema;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    iVar3 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                            ,pIVar1);
    func_?(2,
                    TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchema>
                    ,pIVar1,iVar3 + -1);
    pJVar4 = (JsonSchema *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault_3
                       ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)
                        (this->fields)._stack,
                        Newtonsoft__Json__Schema__JsonSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchema>_
                       );
    (this->fields)._currentSchema = pJVar4;
    return pJVar2;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pJVar2 = (JsonSchema *)(*pcVar5)();
  return pJVar2;
}


/* Void ProcessAdditionalProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessAdditionalProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    pJVar3 = (this->fields)._currentSchema;
    if (iVar2 == 10) {
      pJVar1 = (this->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        piVar4 = (int *)(*(code *)(pJVar1->klass->vtable).get_Value.method)
                                  (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
        uVar5 = CONCAT44(TypeInfo__System__Boolean,piVar4);
        if ((pJVar3 != (JsonSchema *)0x0) && (piVar4 != (int *)0x0)) {
          if (*(Il2CppClass **)(*piVar4 + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
            pbVar6 = (bool *)func_?(piVar4);
            (pJVar3->fields)._AllowAdditionalProperties_k__BackingField = *pbVar6;
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pJVar7 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
      if (pJVar3 != (JsonSchema *)0x0) {
        (pJVar3->fields)._AdditionalProperties_k__BackingField = pJVar7;
        return;
      }
    }
  }
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ProcessDefault() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessDefault(JsonSchemaBuilder *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._currentSchema;
  pJVar2 = Json::Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
  if (pJVar1 != (JsonSchema *)0x0) {
    (pJVar1->fields)._Default_k__BackingField = pJVar2;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ProcessEnum() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_ProcessEnum
               (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    if (iVar2 != 2) goto code_?;
    pJVar3 = (this->fields)._currentSchema;
    this_00 = (List_1_UnityEngine_Vector4_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
              );
    if (pJVar3 != (JsonSchema *)0x0) {
      (pJVar3->fields)._Enum_k__BackingField = (IList_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
      pJVar1 = (this->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        while( true ) {
          cVar4 = (*(code *)(pJVar1->klass->vtable).__unknown.method)
                            (pJVar1,(pJVar1->klass->vtable).__unknown_1.methodPtr);
          if (cVar4 == '\0') {
            return;
          }
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
          iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                            (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
          if (iVar2 == 0xe) {
            return;
          }
          pIStack_5 = (IsolatedStorageException *)
                      Json::Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
          pJVar3 = (this->fields)._currentSchema;
          if ((pJVar3 == (JsonSchema *)0x0) ||
             (pIVar6 = (pJVar3->fields)._Enum_k__BackingField,
             pIVar6 == (IList_1_Newtonsoft_Json_Linq_JToken_ *)0x0)) break;
          pIStack_7 = pIVar6->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIStack_7->_1).rank;
          uVar9._1_1_ = (pIStack_7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              if (pIStack_7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                 ) {
                ppMVar10 = &(&(pIStack_7->vtable).RemoveAt)
                           [pIStack_7->interfaceOffsets[uVar8].offset].method;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppMVar10 = (MethodInfo **)
                    func_?(pIVar6,
                                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                    ,2);
code_?:
          (*(code *)*ppMVar10)(pIVar6,pIStack_5,ppMVar10[1]);
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) break;
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
  uVar11 = func_?();
  func_?(uVar11,0);
  pIStack_5 = (IsolatedStorageException *)func_?(7,uVar11);
  uVar11 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&pIStack_5);
  func_?(args,0);
  func_?(args,uVar11);
  func_?(0,uVar11);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Expected_StartArray_token_while_,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_01,message,(MethodInfo *)0x0);
  pIStack_7 = (IList_1_Newtonsoft_Json_Linq_JToken___Class *)0x0;
  pIStack_5 = this_01;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ProcessExtends() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessExtends(JsonSchemaBuilder *this,MethodInfo *method)

{
  pJVar1 = (this->fields)._currentSchema;
  pJVar2 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
  if (pJVar1 != (JsonSchema *)0x0) {
    (pJVar1->fields)._Extends_k__BackingField = pJVar2;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ProcessIdentity() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessIdentity(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  pJVar2 = (this->fields)._currentSchema;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (pJVar2 != (JsonSchema *)0x0) {
    (pJVar2->fields)._Identity_k__BackingField = (IList_1_System_String_ *)this_00;
    pJVar3 = (pJVar1->fields)._reader;
    if (pJVar3 != (JsonReader *)0x0) {
      iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                        (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
      if (iVar4 == 9) {
        pJVar2 = (pJVar1->fields)._currentSchema;
        if (pJVar2 != (JsonSchema *)0x0) {
          pJVar3 = (pJVar1->fields)._reader;
          pIVar5 = (pJVar2->fields)._Identity_k__BackingField;
          if (((pJVar3 != (JsonReader *)0x0) &&
              (piVar6 = (int *)(*(code *)(pJVar3->klass->vtable).get_Value.method)
                                         (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr),
              piVar6 != (int *)0x0)) &&
             (uVar7 = (**(code **)(*piVar6 + 0xd8))(piVar6,*(undefined4 *)(*piVar6 + 0xdc)),
             pIVar5 != (IList_1_System_String_ *)0x0)) {
            func_?(2,TypeInfo__System__Collections__Generic__ICollection<System::String>,
                            pIVar5,uVar7);
            return;
          }
        }
      }
      else if (iVar4 == 2) {
        pJVar3 = (pJVar1->fields)._reader;
        if (pJVar3 != (JsonReader *)0x0) {
          while( true ) {
            cVar8 = (*(code *)(pJVar3->klass->vtable).__unknown.method)
                              (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
            if (cVar8 == '\0') {
              return;
            }
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
            iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                              (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
            if (iVar4 == 0xe) {
              return;
            }
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
            iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                              (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
            if (iVar4 != 9) goto code_?;
            pJVar2 = (pJVar1->fields)._currentSchema;
            if (pJVar2 == (JsonSchema *)0x0) break;
            pIVar5 = (pJVar2->fields)._Identity_k__BackingField;
            pJVar3 = (pJVar1->fields)._reader;
            if (((pJVar3 == (JsonReader *)0x0) || (iVar4 = func_?(8,pJVar3), iVar4 == 0))
               || (uVar7 = func_?(3,iVar4), pIVar5 == (IList_1_System_String_ *)0x0))
            break;
            func_?(2,TypeInfo__System__Collections__Generic__ICollection<System::String>,
                            pIVar5,uVar7);
            pJVar3 = (pJVar1->fields)._reader;
            if (pJVar3 == (JsonReader *)0x0) break;
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pOVar10 = (Object__Array *)func_?(TypeInfo__System__Object,1);
        uVar7 = func_?();
        func_?(uVar7,0);
        this = (JsonSchemaBuilder *)func_?(7,uVar7);
        uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
        func_?(pOVar10,0);
        func_?(pOVar10,uVar7);
        func_?(0,uVar7);
        pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Expected_array_or_JSON_property_,
                             (IFormatProvider *)pCVar9,pOVar10,(MethodInfo *)0x0);
        pIVar12 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
        mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
        IsolatedStorageException__ctor_1(pIVar12,pSVar11,(MethodInfo *)0x0);
        in_stack_13 =
             MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessIdentity__;
        method = (MethodInfo *)0x0;
        this = (JsonSchemaBuilder *)pIVar12;
        func_?();
      }
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar9 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar10 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  uVar7 = func_?();
  func_?(uVar7,0);
  this = (JsonSchemaBuilder *)func_?(7,uVar7);
  uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
  func_?(pOVar10,0);
  func_?(pOVar10,uVar7);
  func_?(0,uVar7);
  pSVar11 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Exception_JSON_property_name_str,(IFormatProvider *)pCVar9,
                       pOVar10,(MethodInfo *)0x0);
  pIVar12 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar12,pSVar11,(MethodInfo *)0x0);
  in_stack_13 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessIdentity__;
  method = (MethodInfo *)0x0;
  this = (JsonSchemaBuilder *)pIVar12;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ProcessItems() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessItems(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  pJVar1 = (this->fields)._currentSchema;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  if (pJVar1 != (JsonSchema *)0x0) {
    (pJVar1->fields)._Items_k__BackingField = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_01;
    pJVar2 = (this_00->fields)._reader;
    if (pJVar2 != (JsonReader *)0x0) {
      iVar3 = (*(code *)(pJVar2->klass->vtable).get_TokenType.method)
                        (pJVar2,(pJVar2->klass->vtable).get_Value.methodPtr);
      if (iVar3 == 1) {
        pJVar1 = (this_00->fields)._currentSchema;
        if (pJVar1 != (JsonSchema *)0x0) {
          pIVar4 = (pJVar1->fields)._Items_k__BackingField;
          pJVar1 = JsonSchemaBuilder_BuildSchema(this_00,(MethodInfo *)0x0);
          if (pIVar4 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
            func_?(2,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                            ,pIVar4,pJVar1);
            return;
          }
        }
      }
      else if (iVar3 == 2) {
        pJVar2 = (this_00->fields)._reader;
        while (pJVar2 != (JsonReader *)0x0) {
          cVar5 = (*(code *)(pJVar2->klass->vtable).__unknown.method)
                            (pJVar2,(pJVar2->klass->vtable).__unknown_1.methodPtr);
          if (cVar5 == '\0') {
            return;
          }
          pJVar2 = (this_00->fields)._reader;
          if (pJVar2 == (JsonReader *)0x0) break;
          iVar3 = (*(code *)(pJVar2->klass->vtable).get_TokenType.method)
                            (pJVar2,(pJVar2->klass->vtable).get_Value.methodPtr);
          if (iVar3 == 0xe) {
            return;
          }
          pJVar1 = (this_00->fields)._currentSchema;
          if (pJVar1 == (JsonSchema *)0x0) break;
          pJVar6 = (JsonSchemaBuilder *)(pJVar1->fields)._Items_k__BackingField;
          this = pJVar6;
          pJVar1 = JsonSchemaBuilder_BuildSchema(this_00,(MethodInfo *)0x0);
          if (pJVar6 == (JsonSchemaBuilder *)0x0) break;
          pIVar7 = (IList_1_Newtonsoft_Json_Schema_JsonSchema___Class *)pJVar6->klass;
          uVar8 = 0;
          uVar9._0_1_ = (pIVar7->_1).rank;
          uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
          if (uVar9 != 0) {
            do {
              pJVar6 = this;
              if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                 ) {
                ppMVar10 = &(&(pIVar7->vtable).RemoveAt)[pIVar7->interfaceOffsets[uVar8].offset].
                           method;
                goto code_?;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
          }
          ppMVar10 = (MethodInfo **)
                    func_?(pJVar6,
                                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                                    ,2);
code_?:
          (*(code *)*ppMVar10)(pJVar6,pJVar1,ppMVar10[1]);
          pJVar2 = (this_00->fields)._reader;
        }
      }
      else {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        provider = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        args = (Object__Array *)func_?(TypeInfo__System__Object,1);
        uVar11 = func_?();
        func_?(uVar11,0);
        this = (JsonSchemaBuilder *)func_?(7,uVar11);
        uVar11 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
        func_?(args,0);
        func_?(args,uVar11);
        func_?(0,uVar11);
        message = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Expected_array_or_JSON_schema_ob,
                             (IFormatProvider *)provider,args,(MethodInfo *)0x0);
        this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
        mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
        IsolatedStorageException__ctor_1(this_02,message,(MethodInfo *)0x0);
        func_?(this_02,0);
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ProcessOptions() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessOptions(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  a = (this->fields)._currentSchema;
  method_00 = TypeInfo__Newtonsoft__Json__Linq__JTokenEqualityComparer;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  this = (JsonSchemaBuilder *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor_1
            ((HashSet_1_UnityEngine_Vector3_ *)this,
             (IEqualityComparer_1_UnityEngine_Vector3_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary_System__Collections__Generic__IEqualityComparer<Newtonsoft::Json::Linq::JToken>_
            );
  if (a != (JsonSchema *)0x0) {
    (a->fields)._Options_k__BackingField =
         (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)this;
    pJVar2 = (pJVar1->fields)._reader;
    if (pJVar2 != (JsonReader *)0x0) {
      iVar3 = (*(code *)(pJVar2->klass->vtable).get_TokenType.method)
                        (pJVar2,(pJVar2->klass->vtable).get_Value.methodPtr);
      if (iVar3 != 2) goto code_?;
      pJVar2 = (pJVar1->fields)._reader;
      if (pJVar2 != (JsonReader *)0x0) {
        while( true ) {
          cVar4 = (*(code *)(pJVar2->klass->vtable).__unknown.method)
                            (pJVar2,(pJVar2->klass->vtable).__unknown_1.methodPtr);
          if (cVar4 == '\0') {
            return;
          }
          pJVar2 = (pJVar1->fields)._reader;
          if (pJVar2 == (JsonReader *)0x0) break;
          iVar3 = (*(code *)(pJVar2->klass->vtable).get_TokenType.method)
                            (pJVar2,(pJVar2->klass->vtable).get_Value.methodPtr);
          if (iVar3 == 0xe) {
            return;
          }
          pJVar2 = (pJVar1->fields)._reader;
          if (pJVar2 == (JsonReader *)0x0) break;
          iVar3 = (*(code *)(pJVar2->klass->vtable).get_TokenType.method)
                            (pJVar2,(pJVar2->klass->vtable).get_Value.methodPtr);
          if (iVar3 != 1) goto code_?;
          this = (JsonSchemaBuilder *)0x0;
          while( true ) {
            pJVar5 = this;
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) goto code_?;
            pJVar6 = (JsonSchema *)0xb;
            cVar4 = func_?(0xb,pJVar2);
            if (cVar4 == '\0') break;
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) goto code_?;
            pJVar6 = (JsonSchema *)0x7;
            iVar3 = func_?(7,pJVar2);
            if (iVar3 == 0xd) break;
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) goto code_?;
            value = (Object *)func_?(8,pJVar2);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Globalization__CultureInfo);
            }
            pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Convert);
            }
            a = (JsonSchema *)
                mscorlib.dll::System::Convert::Convert_ToString_2
                          (value,(IFormatProvider *)pCVar7,(MethodInfo *)0x0);
            pJVar2 = (pJVar1->fields)._reader;
            if (pJVar2 == (JsonReader *)0x0) goto code_?;
            func_?(0xb,pJVar2);
            if (a == (JsonSchema *)0x0) goto code_?;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            bVar8 = mscorlib.dll::System::String::String_op_Equality
                              ((String *)a,StringLiteral_value,(MethodInfo *)0x0);
            if (bVar8 == 0) {
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                method = (MethodInfo *)TypeInfo__System__String;
                this = (JsonSchemaBuilder *)&UNK_?;
                func_?();
              }
              bVar8 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)a,StringLiteral_label,(MethodInfo *)0x0);
              if (bVar8 == 0) goto code_?;
              pJVar2 = (pJVar1->fields)._reader;
              if (pJVar2 == (JsonReader *)0x0) goto code_?;
              uVar9 = func_?(8,pJVar2);
              this = (JsonSchemaBuilder *)func_?(uVar9,TypeInfo__System__String);
            }
            else {
              method = (MethodInfo *)0x0;
              this = (JsonSchemaBuilder *)(pJVar1->fields)._reader;
              Json::Linq::JToken::JToken_ReadFrom((JsonReader *)this,(MethodInfo *)0x0);
            }
          }
          a = pJVar6;
          if (a == (JsonSchema *)0x0) goto code_?;
          pJVar6 = (pJVar1->fields)._currentSchema;
          if ((pJVar6 == (JsonSchema *)0x0) ||
             (pIVar10 = (pJVar6->fields)._Options_k__BackingField,
             pIVar10 == (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0)) break;
          cVar4 = func_?(1,
                                  TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                                  ,pIVar10,a);
          if (cVar4 != '\0') goto code_?;
          pJVar6 = (pJVar1->fields)._currentSchema;
          if ((pJVar6 == (JsonSchema *)0x0) ||
             (pIVar10 = (pJVar6->fields)._Options_k__BackingField,
             pIVar10 == (IDictionary_2_Newtonsoft_Json_Linq_JToken_System_String_ *)0x0)) break;
          func_?(0,
                          TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                          ,pIVar10,a,pJVar5);
          pJVar2 = (pJVar1->fields)._reader;
          if (pJVar2 == (JsonReader *)0x0) break;
        }
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
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar11,0);
  func_?(pOVar11,a);
  func_?(0);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_property_in_JSON_sche,(IFormatProvider *)pCVar7,
                       pOVar11,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar12,(MethodInfo *)0x0);
  in_stack_14 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__;
  in_stack_15 = 0;
  method = (MethodInfo *)&UNK_?;
  in_stack_16 = pIVar13;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar11,0);
  func_?(pOVar11,a);
  func_?(0);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Duplicate_value_in_JSON_schema_o,(IFormatProvider *)pCVar7,
                       pOVar11,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar12,(MethodInfo *)0x0);
  in_stack_14 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__;
  in_stack_15 = 0;
  method = (MethodInfo *)&UNK_?;
  in_stack_16 = pIVar13;
  func_?();
code_?:
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (pIVar13,StringLiteral_No_value_specified_for_JSON_sche,(MethodInfo *)0x0);
  method = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__;
  this = (JsonSchemaBuilder *)0x0;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  uVar9 = func_?();
  func_?(uVar9);
  this = (JsonSchemaBuilder *)func_?(7,uVar9);
  uVar9 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
  func_?(pOVar11,0);
  func_?(pOVar11,uVar9);
  func_?(0);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Expect_object_token__got__0__,(IFormatProvider *)pCVar7,pOVar11
                       ,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar12,(MethodInfo *)0x0);
  in_stack_14 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__;
  in_stack_15 = 0;
  method = (MethodInfo *)&UNK_?;
  in_stack_16 = pIVar13;
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar7 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar11 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  uVar9 = func_?();
  func_?(uVar9);
  this = (JsonSchemaBuilder *)func_?(7,uVar9);
  uVar9 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
  func_?(pOVar11,0);
  func_?(pOVar11,uVar9);
  func_?(0);
  pSVar12 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Expected_array_token__got__0__,(IFormatProvider *)pCVar7,
                       pOVar11,(MethodInfo *)0x0);
  pIVar13 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar13,pSVar12,(MethodInfo *)0x0);
  in_stack_14 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessOptions__;
  in_stack_15 = 0;
  method = (MethodInfo *)&UNK_?;
  in_stack_16 = pIVar13;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ProcessPatternProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessPatternProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
            );
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 1) {
      pJVar1 = (this->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        while (cVar3 = (*(code *)(pJVar1->klass->vtable).__unknown.method)
                                 (pJVar1,(pJVar1->klass->vtable).__unknown_1.methodPtr),
              cVar3 != '\0') {
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
          iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                            (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
          if (iVar2 == 0xd) break;
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
          value = (Object *)
                  (*(code *)(pJVar1->klass->vtable).get_Value.method)
                            (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          unaff_EBX = mscorlib.dll::System::Convert::Convert_ToString_2
                                (value,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
          pJVar1 = (this->fields)._reader;
          if ((pJVar1 == (JsonReader *)0x0) ||
             (func_?(0xb,pJVar1),
             this_00 ==
             (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)0x0)) goto code_?;
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_00,unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__ContainsKey_System__String_
                            );
          if (bVar5 != 0) goto code_?;
          pJVar6 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)this_00,unaff_EBX,(CrossPlatformInputManager_VirtualButton *)pJVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Add_System__String__Newtonsoft__Json__Schema__JsonSchema_
                    );
          pJVar1 = (this->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
        }
        pJVar6 = (this->fields)._currentSchema;
        if (pJVar6 != (JsonSchema *)0x0) {
          (pJVar6->fields)._PatternProperties_k__BackingField =
               (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
          return;
        }
      }
    }
    else {
      pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1
                (pIVar7,StringLiteral_Expected_start_object_token_,(MethodInfo *)0x0);
      func_?(pIVar7,0);
    }
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(args,0);
  func_?(args,unaff_EBX);
  func_?(0,unaff_EBX);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Property__0__has_already_been_de,(IFormatProvider *)pCVar4,args
                       ,(MethodInfo *)0x0);
  pIVar7 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar7,message,(MethodInfo *)0x0);
  func_?(pIVar7,0,
                  MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessPatternProperties__
                 );
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ProcessProperties() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessProperties(JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
            );
  this_00 = this;
  pJVar1 = (this->fields)._reader;
  if (pJVar1 != (JsonReader *)0x0) {
    iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                      (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
    if (iVar2 == 1) {
      pJVar1 = (this_00->fields)._reader;
      if (pJVar1 != (JsonReader *)0x0) {
        while (cVar3 = (*(code *)(pJVar1->klass->vtable).__unknown.method)
                                 (pJVar1,(pJVar1->klass->vtable).__unknown_1.methodPtr),
              cVar3 != '\0') {
          pJVar1 = (this_00->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
          iVar2 = (*(code *)(pJVar1->klass->vtable).get_TokenType.method)
                            (pJVar1,(pJVar1->klass->vtable).get_Value.methodPtr);
          if (iVar2 == 0xd) break;
          pJVar1 = (this_00->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
          this = (JsonSchemaBuilder *)
                 (*(code *)(pJVar1->klass->vtable).get_Value.method)
                           (pJVar1,(pJVar1->klass->vtable).get_ValueType.methodPtr);
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          unaff_EBX = (CultureInfo *)
                      mscorlib.dll::System::Convert::Convert_ToString_2
                                ((Object *)this,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
          pJVar1 = (this_00->fields)._reader;
          if ((pJVar1 == (JsonReader *)0x0) ||
             (func_?(0xb,pJVar1),
             this_01 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0))
          goto code_?;
          cVar3 = func_?(1,
                                  TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                                  ,this_01,unaff_EBX);
          if (cVar3 != '\0') goto code_?;
          pJVar5 = JsonSchemaBuilder_BuildSchema(this_00,(MethodInfo *)0x0);
          func_?(0,
                          TypeInfo__System__Collections__Generic__IDictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                          ,this_01,unaff_EBX,pJVar5);
          pJVar1 = (this_00->fields)._reader;
          if (pJVar1 == (JsonReader *)0x0) goto code_?;
        }
        pJVar5 = (this_00->fields)._currentSchema;
        if (pJVar5 != (JsonSchema *)0x0) {
          (pJVar5->fields)._Properties_k__BackingField =
               (IDictionary_2_System_String_Newtonsoft_Json_Schema_JsonSchema_ *)this_01;
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      unaff_EBX = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      uVar7 = func_?();
      func_?(uVar7,0);
      this = (JsonSchemaBuilder *)func_?(7,uVar7);
      uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
      func_?(pOVar6,0);
      func_?(pOVar6,uVar7);
      func_?(0,uVar7);
      pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (StringLiteral_Expected_StartObject_token_while,
                          (IFormatProvider *)unaff_EBX,pOVar6,(MethodInfo *)0x0);
      pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
      in_stack_10 =
           MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessProperties__;
      method = (MethodInfo *)0x0;
      this = (JsonSchemaBuilder *)pIVar9;
      func_?();
    }
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar6 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  func_?(pOVar6,0);
  func_?(pOVar6,unaff_EBX);
  func_?(0,unaff_EBX);
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Property__0__has_already_been_de,(IFormatProvider *)pCVar4,
                      pOVar6,(MethodInfo *)0x0);
  pIVar9 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar9,pSVar8,(MethodInfo *)0x0);
  in_stack_10 = MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessProperties__;
  method = (MethodInfo *)0x0;
  this = (JsonSchemaBuilder *)pIVar9;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void ProcessSchemaProperty(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::
     JsonSchemaBuilder_ProcessSchemaProperty
               (JsonSchemaBuilder *this,String *propertyName,MethodInfo *method)

{
  pcVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (JsonSchema *)propertyName;
  iStack_2 = 0;
  if (propertyName == (String *)0x0) goto code_?;
  if (TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder->static_fields->__f__switch_map0 ==
      (Dictionary_2_System_String_System_Int32_ *)0x0) {
    this = (JsonSchemaBuilder *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)this,0x1d,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary_int_
              );
    bVar3 = 0;
    if ((Dictionary_2_System_String_System_Int32_ *)this !=
        (Dictionary_2_System_String_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_type,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_id,1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_title,2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_description,3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      method = (MethodInfo *)0x4;
      propertyName = StringLiteral_properties;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_properties
                 ,4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      method = (MethodInfo *)0x5;
      propertyName = StringLiteral_items;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_items,5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      method = (MethodInfo *)0x6;
      propertyName = StringLiteral_additionalProperties;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_additionalProperties,6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      method = (MethodInfo *)0x7;
      propertyName = StringLiteral_patternProperties;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_patternProperties,7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_required,8
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_requires,9
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_identity,
                 10,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_minimum,
                 0xb,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_maximum,
                 0xc,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_exclusiveMinimum,0xd,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_exclusiveMaximum,0xe,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_maxLength,
                 0xf,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_minLength,
                 0x10,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_maxItems,
                 0x11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_minItems,
                 0x12,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,
                 (Object *)StringLiteral_divisibleBy,0x13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_disallow,
                 0x14,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_default,
                 0x15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_hidden,
                 0x16,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_readonly,
                 0x17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_format,
                 0x18,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_pattern,
                 0x19,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_options,
                 0x1a,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_enum,0x1b,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_extends,
                 0x1c,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder->static_fields->__f__switch_map0 =
           (Dictionary_2_System_String_System_Int32_ *)this;
      goto code_?;
    }
  }
  else {
code_?:
    this_00 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder->static_fields->__f__switch_map0
    ;
    bVar3 = 0;
    if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Int32]::Dictionary_2_System_Object_System_Int32__TryGetValue
                         ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)key,
                          &iStack_2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__TryGetValue_System__String__System__Int32__
                         );
      if (bVar4 == 0) {
code_?:
        pJVar5 = (this->fields)._reader;
        bVar3 = 0;
        if (pJVar5 != (JsonReader *)0x0) {
          JsonReader::JsonReader_Skip(pJVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        switch(iStack_2) {
        case 0:
          pJVar6 = (this->fields)._currentSchema;
          NVar7 = JsonSchemaBuilder_ProcessType(this,(MethodInfo *)0x0);
          bVar3 = 0;
          if (pJVar6 != (JsonSchema *)0x0) {
            (pJVar6->fields)._Type_k__BackingField = NVar7;
            return;
          }
          break;
        case 1:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Id_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 2:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Title_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 3:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Description_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 4:
          JsonSchemaBuilder_ProcessProperties(this,(MethodInfo *)0x0);
          return;
        case 5:
          JsonSchemaBuilder_ProcessItems(this,(MethodInfo *)0x0);
          return;
        case 6:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pJVar5 = (this->fields)._reader;
          bVar3 = 0;
          if (pJVar5 != (JsonReader *)0x0) {
            iVar10 = (*(code *)(pJVar5->klass->vtable).get_TokenType.method)
                               (pJVar5,(pJVar5->klass->vtable).get_Value.methodPtr);
            key = (this->fields)._currentSchema;
            if (iVar10 == 10) {
              pJVar5 = (this->fields)._reader;
              bVar3 = 0;
              if (pJVar5 != (JsonReader *)0x0) {
                piVar11 = (int *)(*(code *)(pJVar5->klass->vtable).get_Value.method)
                                           (pJVar5,(pJVar5->klass->vtable).get_ValueType.methodPtr);
                bVar3 = 0;
                if ((key != (JsonSchema *)0x0) && (bVar3 = 0, piVar11 != (int *)0x0)) {
                  pIVar12 = (TypeInfo__System__Boolean->_0).element_class;
                  bVar3 = *(Il2CppClass **)(*piVar11 + 0x20) < pIVar12;
                  if (*(Il2CppClass **)(*piVar11 + 0x20) == pIVar12) {
                    pbVar13 = (bool *)func_?(piVar11);
                    (key->fields)._AllowAdditionalProperties_k__BackingField = *pbVar13;
                    return;
                  }
                  func_?(piVar11,TypeInfo__System__Boolean);
                }
              }
            }
            else {
              pJVar6 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
              bVar3 = 0;
              if (key != (JsonSchema *)0x0) {
                (key->fields)._AdditionalProperties_k__BackingField = pJVar6;
                return;
              }
            }
          }
          break;
        case 7:
          JsonSchemaBuilder_ProcessPatternProperties(this,(MethodInfo *)0x0);
          return;
        case 8:
          key = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            pMVar14 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            puVar15 = (undefined1 *)func_?(uVar8,TypeInfo__System__Boolean);
            uStack_16._0_5_ = CONCAT14(*puVar15,(int32_t)uStack_16);
            func_?(&propertyName,uStack_16._4_4_,pMVar14);
            bVar3 = 0;
            if (key != (JsonSchema *)0x0) {
              (key->fields)._Required_k__BackingField = propertyName._0_2_;
              return;
            }
          }
          break;
        case 9:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Requires_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 10:
          JsonSchemaBuilder_ProcessIdentity(this,(MethodInfo *)0x0);
          return;
        case 0xb:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            dVar17 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                               (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            puVar15 = &stack0xffffffe0;
            puVar18 = &UNK_?;
            uStack_16 = dVar17;
            func_?();
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              uStack_19 = SUB84(dVar17,0);
              uStack_20 = (undefined4)((ulonglong)dVar17 >> 0x20);
              *(undefined **)&(pJVar6->fields)._Minimum_k__BackingField.value = puVar18;
              *(undefined1 **)((int)&(pJVar6->fields)._Minimum_k__BackingField.value + 4) = puVar15
              ;
              *(undefined4 *)&(pJVar6->fields)._Minimum_k__BackingField.has_value = uStack_19;
              *(undefined4 *)&(pJVar6->fields)._Minimum_k__BackingField.field_0xc = uStack_20;
              return;
            }
          }
          break;
        case 0xc:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            dVar17 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                               (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            puVar15 = &stack0xffffffe0;
            puVar18 = &UNK_?;
            uStack_16 = dVar17;
            func_?();
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              uStack_19 = SUB84(dVar17,0);
              uStack_20 = (undefined4)((ulonglong)dVar17 >> 0x20);
              *(undefined **)&(pJVar6->fields)._Maximum_k__BackingField.value = puVar18;
              *(undefined1 **)((int)&(pJVar6->fields)._Maximum_k__BackingField.value + 4) = puVar15
              ;
              *(undefined4 *)&(pJVar6->fields)._Maximum_k__BackingField.has_value = uStack_19;
              *(undefined4 *)&(pJVar6->fields)._Maximum_k__BackingField.field_0xc = uStack_20;
              return;
            }
          }
          break;
        case 0xd:
          key = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            pMVar14 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            puVar15 = (undefined1 *)func_?(uVar8,TypeInfo__System__Boolean);
            uStack_16._0_5_ = CONCAT14(*puVar15,(int32_t)uStack_16);
            func_?(&propertyName,uStack_16._4_4_,pMVar14);
            bVar3 = 0;
            if (key != (JsonSchema *)0x0) {
              (key->fields)._ExclusiveMinimum_k__BackingField = propertyName._0_2_;
              return;
            }
          }
          break;
        case 0xe:
          key = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            pMVar14 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            puVar15 = (undefined1 *)func_?(uVar8,TypeInfo__System__Boolean);
            uStack_16._0_5_ = CONCAT14(*puVar15,(int32_t)uStack_16);
            func_?(&propertyName,uStack_16._4_4_,pMVar14);
            bVar3 = 0;
            if (key != (JsonSchema *)0x0) {
              (key->fields)._ExclusiveMaximum_k__BackingField = propertyName._0_2_;
              return;
            }
          }
          break;
        case 0xf:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_17
                      (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            uStack_16 = 0.0;
            func_?(&uStack_16);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              (pJVar6->fields)._MaximumLength_k__BackingField.value = (int32_t)uStack_16;
              *(undefined4 *)&(pJVar6->fields)._MaximumLength_k__BackingField.has_value =
                   uStack_16._4_4_;
              return;
            }
          }
          break;
        case 0x10:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_17
                      (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            uStack_16 = 0.0;
            func_?(&uStack_16);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              (pJVar6->fields)._MinimumLength_k__BackingField.value = (int32_t)uStack_16;
              *(undefined4 *)&(pJVar6->fields)._MinimumLength_k__BackingField.has_value =
                   uStack_16._4_4_;
              return;
            }
          }
          break;
        case 0x11:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_17
                      (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            uStack_16 = 0.0;
            func_?(&uStack_16);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              (pJVar6->fields)._MaximumItems_k__BackingField.value = (int32_t)uStack_16;
              *(undefined4 *)&(pJVar6->fields)._MaximumItems_k__BackingField.has_value =
                   uStack_16._4_4_;
              return;
            }
          }
          break;
        case 0x12:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32_17
                      (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            uStack_16 = 0.0;
            func_?(&uStack_16);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              (pJVar6->fields)._MinimumItems_k__BackingField.value = (int32_t)uStack_16;
              *(undefined4 *)&(pJVar6->fields)._MinimumItems_k__BackingField.has_value =
                   uStack_16._4_4_;
              return;
            }
          }
          break;
        case 0x13:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            unaff_EBX = (Object *)func_?(8);
            if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
              func_?();
            }
            key = (JsonSchema *)
                  mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            dVar17 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                               (unaff_EBX,(IFormatProvider *)key,(MethodInfo *)0x0);
            puVar15 = &stack0xffffffe0;
            puVar18 = &UNK_?;
            uStack_16 = dVar17;
            func_?();
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              uStack_19 = SUB84(dVar17,0);
              uStack_20 = (undefined4)((ulonglong)dVar17 >> 0x20);
              *(undefined **)&(pJVar6->fields)._DivisibleBy_k__BackingField.value = puVar18;
              *(undefined1 **)((int)&(pJVar6->fields)._DivisibleBy_k__BackingField.value + 4) =
                   puVar15;
              *(undefined4 *)&(pJVar6->fields)._DivisibleBy_k__BackingField.has_value = uStack_19;
              *(undefined4 *)&(pJVar6->fields)._DivisibleBy_k__BackingField.field_0xc = uStack_20;
              return;
            }
          }
          break;
        case 0x14:
          pJVar6 = (this->fields)._currentSchema;
          NVar7 = JsonSchemaBuilder_ProcessType(this,(MethodInfo *)0x0);
          bVar3 = 0;
          if (pJVar6 != (JsonSchema *)0x0) {
            (pJVar6->fields)._Disallow_k__BackingField = NVar7;
            return;
          }
          break;
        case 0x15:
          pJVar6 = (this->fields)._currentSchema;
          pJVar21 = Json::Linq::JToken::JToken_ReadFrom((this->fields)._reader,(MethodInfo *)0x0);
          bVar3 = 0;
          if (pJVar6 != (JsonSchema *)0x0) {
            (pJVar6->fields)._Default_k__BackingField = pJVar21;
            return;
          }
          break;
        case 0x16:
          key = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            pMVar14 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            puVar15 = (undefined1 *)func_?(uVar8,TypeInfo__System__Boolean);
            uStack_16._0_5_ = CONCAT14(*puVar15,(int32_t)uStack_16);
            func_?(&propertyName,uStack_16._4_4_,pMVar14);
            bVar3 = 0;
            if (key != (JsonSchema *)0x0) {
              (key->fields)._Hidden_k__BackingField = propertyName._0_2_;
              return;
            }
          }
          break;
        case 0x17:
          key = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            pMVar14 = MethodInfo__System__Nullable<bool>__Nullable_bool_;
            propertyName = (String *)((uint)propertyName & 0xffff0000);
            puVar15 = (undefined1 *)func_?(uVar8,TypeInfo__System__Boolean);
            uStack_16._0_5_ = CONCAT14(*puVar15,(int32_t)uStack_16);
            func_?(&propertyName,uStack_16._4_4_,pMVar14);
            bVar3 = 0;
            if (key != (JsonSchema *)0x0) {
              (key->fields)._ReadOnly_k__BackingField = propertyName._0_2_;
              return;
            }
          }
          break;
        case 0x18:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Format_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 0x19:
          pJVar6 = (this->fields)._currentSchema;
          bVar3 = 0;
          if ((this->fields)._reader != (JsonReader *)0x0) {
            uVar8 = func_?(8);
            bVar3 = 0;
            if (pJVar6 != (JsonSchema *)0x0) {
              pSVar9 = (String *)func_?(uVar8,TypeInfo__System__String);
              (pJVar6->fields)._Pattern_k__BackingField = pSVar9;
              return;
            }
          }
          break;
        case 0x1a:
          JsonSchemaBuilder_ProcessOptions(this,(MethodInfo *)0x0);
          return;
        case 0x1b:
          JsonSchemaBuilder_ProcessEnum(this,(MethodInfo *)0x0);
          return;
        case 0x1c:
          pJVar6 = (this->fields)._currentSchema;
          pJVar22 = JsonSchemaBuilder_BuildSchema(this,(MethodInfo *)0x0);
          bVar3 = 0;
          if (pJVar6 != (JsonSchema *)0x0) {
            (pJVar6->fields)._Extends_k__BackingField = pJVar22;
            return;
          }
          break;
        default:
          goto code_?;
        }
      }
    }
  }
  uVar23 = func_?(0);
  pcVar24 = (char *)((ulonglong)uVar23 >> 0x20);
  iVar10 = (int)uVar23;
  puVar25 = (uint *)(pcVar24 + 0x70);
  bVar26 = (undefined1 *)*puVar25 < &stack0xfffffffc ||
           *puVar25 - (int)&stack0xfffffffc < (uint)bVar3;
  *puVar25 = (*puVar25 - (int)&stack0xfffffffc) - (uint)bVar3;
  bVar27 = (byte)((uint)unaff_EBX >> 8);
  bVar3 = *(char *)&key->klass + bVar27;
  bVar28 = CARRY1(*(byte *)&key->klass,bVar27) || CARRY1(bVar3,bVar26);
  *(byte *)&key->klass = bVar3 + bVar26;
  pbVar29 = (byte *)(pcVar24 + (int)&stack0xfffffffc * 2 + 0x70);
  bVar26 = CARRY1(*pbVar29,bVar27) || CARRY1(*pbVar29 + bVar27,bVar28);
  *pbVar29 = *pbVar29 + bVar27 + bVar28;
  pbVar29 = (byte *)((int)extraout_ECX + -0x9ef8f96);
  bVar30 = *pbVar29;
  bVar3 = *pbVar29;
  *pbVar29 = bVar3 + bVar27 + bVar26;
  uVar31 = 0x70;
  *pcVar24 = *pcVar24 + (char)extraout_ECX +
             (CARRY1(bVar30,bVar27) || CARRY1(bVar3 + bVar27,bVar26));
  lVar32 = (longlong)*(int *)(iVar10 + 0x10) * 0x52;
  pcVar33 = (char *)lVar32;
  pJVar34 = (JsonSchema__Fields *)((int)&key->klass + 1);
  uVar35 = (undefined2)((ulonglong)uVar23 >> 0x20);
  uVar36 = in(uVar35);
  *(undefined1 *)&key->klass = uVar36;
  uVar37 = uVar31;
  if ((int)pcVar33 == lVar32) {
    uVar35 = (undefined2)uVar23;
    bVar4 = in(uVar35);
    *(bool *)&pJVar34->_Id_k__BackingField = bVar4;
    pbVar29 = (byte *)(pcVar33 + 1);
    cVar38 = *pcVar33;
    uVar36 = in(uVar35);
    *(undefined1 *)((int)&key->klass + 3) = uVar36;
    if (!SBORROW1(cVar38,*(char *)((int)&key->klass + 2))) {
      uVar23 = CONCAT44(iVar10,0x70);
      pJVar34 = &key->fields;
      pMVar39 = (MonitorData *)in(uVar35);
      key->monitor = pMVar39;
      goto code_?;
    }
    lVar32 = (longlong)(int)(key->fields)._MaximumItems_k__BackingField.value * 0x70700e10;
    pcVar1 = (char *)lVar32;
    piVar11 = extraout_ECX;
    bVar26 = (int)pcVar1 != lVar32;
    uVar40 = CONCAT44(iVar10,pcVar24);
code_?:
    pbVar41 = (byte *)((ulonglong)uVar40 >> 0x20);
    pcVar24 = (char *)uVar40;
    pOVar42 = unaff_EBX + 0xb020e0e;
    bVar30 = (byte)((ulonglong)uVar40 >> 0x28);
    cVar38 = *(char *)&pOVar42->klass;
    bVar3 = *(char *)&pOVar42->klass + bVar30;
    bVar28 = CARRY1(*(byte *)&pOVar42->klass,bVar30) || CARRY1(bVar3,bVar26);
    *(byte *)&pOVar42->klass = bVar3 + bVar26;
    if (SCARRY1(cVar38,bVar30) == SCARRY1(bVar3,bVar26)) {
      *pcVar24 = *pcVar24 + (char)uVar40;
      pcVar24 = (char *)*piVar11;
      goto code_?;
    }
    bVar3 = *pbVar41;
    bVar27 = *pbVar41 + (byte)piVar11;
    *pbVar41 = bVar27 + bVar28;
    if (CARRY1(bVar3,(byte)piVar11) || CARRY1(bVar27,bVar28)) goto code_?;
    bVar3 = *pbVar29;
    *pbVar29 = *pbVar29 + bVar30;
    bVar26 = false;
    uVar23 = uVar40;
    uVar31 = uVar37;
    if (CARRY1(bVar3,bVar30)) goto code_?;
code_?:
    pcVar33 = (char *)uVar23;
    pbVar41 = pbVar29 + 0x72;
    bVar30 = *pbVar41;
    bVar43 = (byte)unaff_EBX;
    bVar3 = *pbVar41;
    bVar27 = *pbVar41 + bVar43;
    bVar28 = CARRY1(bVar30,bVar43) || CARRY1(bVar27,bVar26);
    *pbVar41 = bVar27 + bVar26;
    pcVar24 = pcVar1;
    if (SCARRY1(bVar3,bVar43) != SCARRY1(bVar27,bVar26)) {
      bVar26 = false;
      pcVar1 = pcVar33;
code_?:
      pbVar29 = (byte *)((int)piVar11 + -0x42ef8f8d);
      bVar3 = *pbVar29;
      bVar27 = (byte)((uint)piVar11 >> 8);
      bVar30 = *pbVar29 + bVar27;
      *pbVar29 = bVar30 + bVar26;
      if (!CARRY1(bVar3,bVar27) && !CARRY1(bVar30,bVar26)) {
        *pcVar1 = *pcVar1 + (char)pcVar1;
        goto code_?;
      }
      bVar43 = (byte)((uint)unaff_EBX >> 8);
      pcVar33 = pcVar24;
      if (CARRY1(bVar43,(byte)unaff_EBX) ||
          CARRY1(bVar43 + (byte)unaff_EBX,CARRY1(bVar3,bVar27) || CARRY1(bVar30,bVar26))) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      goto code_?;
    }
    unaff_EBX = (Object *)0x18107072;
    if (!CARRY1(bVar30,bVar43) && !CARRY1(bVar27,bVar26)) goto code_?;
    pbVar29 = (byte *)(pcVar33 + 0x73);
    bVar30 = *pbVar29;
    bVar3 = *pbVar29;
    bVar27 = *pbVar29 + 0x72;
    bVar26 = 0x8d < bVar30 || CARRY1(bVar27,bVar28);
    *pbVar29 = bVar27 + bVar28;
    if (SCARRY1(bVar3,'r') != SCARRY1(bVar27,bVar28)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    pcVar24 = pcVar33;
    if (0x8d < bVar30 || CARRY1(bVar27,bVar28)) goto code_?;
    pcVar33[0x72840fc9] = pcVar33[0x72840fc9] | (byte)pcVar1;
    piVar45 = (int *)CONCAT31((int3)((uint)pcVar1 >> 8),(byte)pcVar1 + *pcVar1);
    cRam_? = cRam_? + (char)piVar11;
    *piVar45 = *piVar45 + (int)piVar45;
    cRam_? = cRam_? + (char)piVar11;
    *(char *)((int)piVar11 + -1) = *(char *)((int)piVar11 + -1) + (char)((ulonglong)uVar23 >> 0x20);
    bRam_? = bRam_? >> 1 | bRam_? << 7;
  }
  else {
    puVar15 = (undefined1 *)segment(in_DS,(short)lVar32);
    pbVar29 = (byte *)CONCAT22((short)((ulonglong)lVar32 >> 0x10),(short)lVar32 + 1);
    out(*puVar15,uVar35);
code_?:
    pcVar24 = (char *)uVar23;
    bVar27 = (byte)((uint)extraout_ECX >> 8) | pbVar29[0x70];
    piVar11 = (int *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                              CONCAT11(bVar27,(char)extraout_ECX));
    pbVar41 = (byte *)((int)&(pJVar34->_MaximumItems_k__BackingField).value + 2);
    bVar30 = (byte)((ulonglong)uVar23 >> 8);
    bVar28 = CARRY1(*pbVar41,bVar30);
    bVar3 = *pbVar41;
    *pbVar41 = *pbVar41 + bVar30;
    bVar26 = bVar28;
    uVar40 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),0x70);
    if (SCARRY1(bVar3,bVar30)) goto code_?;
    pcVar1 = (char *)*(undefined6 *)(pbVar29 + 0x70);
    pbVar41 = (byte *)((int)piVar11 + 0x6f);
    bVar30 = *pbVar41;
    bVar3 = *pbVar41;
    bVar43 = *pbVar41 + bVar27;
    bVar26 = CARRY1(bVar30,bVar27) || CARRY1(bVar43,bVar28);
    *pbVar41 = bVar43 + bVar28;
    uVar40 = uVar23;
    uVar37 = in_CS;
    if (SCARRY1(bVar3,bVar27) == SCARRY1(bVar43,bVar28)) goto code_?;
    if (!CARRY1(bVar30,bVar27) && !CARRY1(bVar43,bVar28)) goto code_?;
code_?:
    *pcVar24 = *pcVar24 + (char)pcVar24;
    uVar37 = uVar31;
code_?:
    pcVar33 = (char *)(**(code **)(pcVar24 + 0xf8))(piVar11,uVar37,0x70);
    pcVar24 = pcVar1;
code_?:
    if (pcVar33 != (char *)0x9) {
      if (pcVar33 == (char *)0x2) {
        pcVar24[-0xffffffff00000010] = '\0';
        pcVar24[-0xffffffff0000000f] = '\0';
        pcVar24[-0xffffffff0000000e] = '\0';
        pcVar24[-0xffffffff0000000d] = '\0';
        pcVar24[-0xffffffff0000000c] = '\0';
        pcVar24[-0xffffffff0000000b] = '\0';
        pcVar24[-0xffffffff0000000a] = '\0';
        pcVar24[-0xffffffff00000009] = '\0';
        func_?(pcVar24 + -0x10,0,
                        MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                       );
        piVar11 = *(int **)(pbVar29 + 8);
        *(undefined4 *)(pcVar24 + -8) = *(undefined4 *)(pcVar24 + -0x10);
        *(undefined4 *)(pcVar24 + -4) = *(undefined4 *)(pcVar24 + -0xc);
        if (piVar11 != (int *)0x0) {
          while( true ) {
            cVar38 = (**(code **)(*piVar11 + 0x118))(piVar11,*(undefined4 *)(*piVar11 + 0x11c));
            if (cVar38 == '\0') {
              return;
            }
            piVar11 = *(int **)(pbVar29 + 8);
            if (piVar11 == (int *)0x0) break;
            iVar10 = (**(code **)(*piVar11 + 0xf8))(piVar11,*(undefined4 *)(*piVar11 + 0xfc));
            if (iVar10 == 0xe) {
              return;
            }
            piVar11 = *(int **)(pbVar29 + 8);
            if (piVar11 == (int *)0x0) break;
            iVar10 = (**(code **)(*piVar11 + 0xf8))(piVar11,*(undefined4 *)(*piVar11 + 0xfc));
            if (iVar10 != 9) goto code_?;
            cVar38 = func_?(pcVar24 + -8,
                                     MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                                    );
            if (cVar38 == '\0') {
              pcVar24[-0xffffffff00000018] = '\0';
              pcVar24[-0xffffffff00000017] = '\0';
              pcVar24[-0xffffffff00000016] = '\0';
              pcVar24[-0xffffffff00000015] = '\0';
              pcVar24[-0xffffffff00000014] = '\0';
              pcVar24[-0xffffffff00000013] = '\0';
              pcVar24[-0xffffffff00000012] = '\0';
              pcVar24[-0xffffffff00000011] = '\0';
              uVar8 = *(undefined4 *)(pcVar24 + -0x14);
              uVar46 = *(undefined4 *)(pcVar24 + -0x18);
            }
            else {
              JVar47 = func_?(pcVar24 + -8,
                                       MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                                      );
              if ((*(int *)(pbVar29 + 8) == 0) ||
                 (iVar10 = func_?(8,*(int *)(pbVar29 + 8)), iVar10 == 0)) break;
              pSVar9 = (String *)func_?(3,iVar10);
              JVar48 = JsonSchemaBuilder_MapType(pSVar9,(MethodInfo *)0x0);
              pcVar24[-0xffffffff00000010] = '\0';
              pcVar24[-0xffffffff0000000f] = '\0';
              pcVar24[-0xffffffff0000000e] = '\0';
              pcVar24[-0xffffffff0000000d] = '\0';
              pcVar24[-0xffffffff0000000c] = '\0';
              pcVar24[-0xffffffff0000000b] = '\0';
              pcVar24[-0xffffffff0000000a] = '\0';
              pcVar24[-0xffffffff00000009] = '\0';
              func_?(pcVar24 + -0x10,JVar48 | JVar47,
                              MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                             );
              uVar46 = *(undefined4 *)(pcVar24 + -0x10);
              uVar8 = *(undefined4 *)(pcVar24 + -0xc);
            }
            *(undefined4 *)(pcVar24 + -8) = uVar46;
            piVar11 = *(int **)(pbVar29 + 8);
            *(undefined4 *)(pcVar24 + -4) = uVar8;
            if (piVar11 == (int *)0x0) break;
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar49 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        pOVar50 = (Object__Array *)func_?(TypeInfo__System__Object,1);
        uVar8 = func_?();
        func_?(uVar8,0);
        uVar8 = func_?(7,uVar8);
        *(undefined4 *)(pcVar24 + 8) = uVar8;
        uVar8 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,pcVar24 + 8);
        func_?(pOVar50,0);
        func_?(pOVar50,uVar8);
        func_?(0,uVar8);
        pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                            (StringLiteral_Expected_array_or_JSON_schema_ty,
                             (IFormatProvider *)pCVar49,pOVar50,(MethodInfo *)0x0);
        pIVar51 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
        mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
        IsolatedStorageException__ctor_1(pIVar51,pSVar9,(MethodInfo *)0x0);
        func_?(pIVar51,0,
                        MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessType__);
      }
      goto code_?;
    }
    piVar11 = *(int **)(pbVar29 + 8);
    if (piVar11 == (int *)0x0) goto code_?;
code_?:
    pcVar1 = (char *)*piVar11;
    pcVar33 = pcVar24;
code_?:
    piVar11 = (int *)(**(code **)(pcVar1 + 0x100))(piVar11,*(undefined4 *)(pcVar1 + 0x104));
  }
  pcVar24 = pcVar33;
  if (piVar11 != (int *)0x0) {
    pSVar9 = (String *)(**(code **)(*piVar11 + 0xd8))(piVar11,*(undefined4 *)(*piVar11 + 0xdc));
    JVar47 = JsonSchemaBuilder_MapType(pSVar9,(MethodInfo *)0x0);
    pcVar33[-0xffffffff00000010] = '\0';
    pcVar33[-0xffffffff0000000f] = '\0';
    pcVar33[-0xffffffff0000000e] = '\0';
    pcVar33[-0xffffffff0000000d] = '\0';
    pcVar33[-0xffffffff0000000c] = '\0';
    pcVar33[-0xffffffff0000000b] = '\0';
    pcVar33[-0xffffffff0000000a] = '\0';
    pcVar33[-0xffffffff00000009] = '\0';
    func_?(pcVar33 + -0x10,JVar47,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
    return;
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar49 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar50 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  uVar8 = func_?();
  func_?(uVar8,0);
  uVar8 = func_?(7,uVar8);
  *(undefined4 *)(pcVar24 + 8) = uVar8;
  uVar8 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,pcVar24 + 8);
  func_?(pOVar50,0);
  func_?(pOVar50,uVar8);
  func_?(0,uVar8);
  pSVar9 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Exception_JSON_schema_type_strin,(IFormatProvider *)pCVar49,
                       pOVar50,(MethodInfo *)0x0);
  pIVar51 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar51,pSVar9,(MethodInfo *)0x0);
  func_?(pIVar51,0,MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessType__);
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType] ProcessType() */

Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_ProcessType
          (JsonSchemaBuilder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = this;
  NStack_2.value = 0;
  NStack_2.has_value = 0;
  NStack_2._5_3_ = 0;
  pJVar3 = (this->fields)._reader;
  if (pJVar3 != (JsonReader *)0x0) {
    iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                      (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
    if (iVar4 == 9) {
      pJVar3 = (pJVar1->fields)._reader;
      if ((pJVar3 != (JsonReader *)0x0) &&
         (piVar5 = (int *)(*(code *)(pJVar3->klass->vtable).get_Value.method)
                                    (pJVar3,(pJVar3->klass->vtable).get_ValueType.methodPtr),
         piVar5 != (int *)0x0)) {
        pSVar6 = (String *)(**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
        JVar7 = JsonSchemaBuilder_MapType(pSVar6,(MethodInfo *)0x0);
        NStack_8.value = 0;
        NStack_8.has_value = 0;
        NStack_8._5_3_ = 0;
        func_?(&NStack_8,JVar7,
                        MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                       );
        return NStack_8;
      }
    }
    else if (iVar4 == 2) {
      NStack_8.value = 0;
      NStack_8.has_value = 0;
      NStack_8._5_3_ = 0;
      func_?(&NStack_8,0,
                      MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                     );
      pJVar3 = (pJVar1->fields)._reader;
      NStack_2 = NStack_8;
      if (pJVar3 != (JsonReader *)0x0) {
        while( true ) {
          cVar9 = (*(code *)(pJVar3->klass->vtable).__unknown.method)
                            (pJVar3,(pJVar3->klass->vtable).__unknown_1.methodPtr);
          if (cVar9 == '\0') {
            return NStack_2;
          }
          pJVar3 = (pJVar1->fields)._reader;
          if (pJVar3 == (JsonReader *)0x0) break;
          iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                            (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
          if (iVar4 == 0xe) {
            return NStack_2;
          }
          pJVar3 = (pJVar1->fields)._reader;
          if (pJVar3 == (JsonReader *)0x0) break;
          iVar4 = (*(code *)(pJVar3->klass->vtable).get_TokenType.method)
                            (pJVar3,(pJVar3->klass->vtable).get_Value.methodPtr);
          if (iVar4 != 9) goto code_?;
          cVar9 = func_?(&NStack_2,
                                  MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                                 );
          if (cVar9 == '\0') {
            uVar10._0_1_ = 0;
            uVar10._1_3_ = 0;
            NStack_2.value = 0;
          }
          else {
            JVar7 = func_?(&NStack_2,
                                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                                   );
            pJVar3 = (pJVar1->fields)._reader;
            if ((pJVar3 == (JsonReader *)0x0) || (iVar4 = func_?(8,pJVar3), iVar4 == 0))
            break;
            pSVar6 = (String *)func_?(3,iVar4);
            JVar11 = JsonSchemaBuilder_MapType(pSVar6,(MethodInfo *)0x0);
            NStack_8.value = 0;
            NStack_8.has_value = 0;
            NStack_8._5_3_ = 0;
            func_?(&NStack_8,JVar11 | JVar7,
                            MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                           );
            uVar10 = NStack_8._4_4_;
            NStack_2.value = NStack_8.value;
          }
          pJVar3 = (pJVar1->fields)._reader;
          NStack_2.has_value = (bool)uVar10;
          NStack_2._5_3_ = SUB43(uVar10,1);
          if (pJVar3 == (JsonReader *)0x0) break;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pOVar13 = (Object__Array *)func_?(TypeInfo__System__Object,1);
      uVar10 = func_?();
      func_?(uVar10,0);
      this = (JsonSchemaBuilder *)func_?(7,uVar10);
      uVar10 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
      func_?(pOVar13,0);
      func_?(pOVar13,uVar10);
      func_?(0,uVar10);
      pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                         (StringLiteral_Expected_array_or_JSON_schema_ty,(IFormatProvider *)pCVar12,
                          pOVar13,(MethodInfo *)0x0);
      pIVar14 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar14,pSVar6,(MethodInfo *)0x0);
      NStack_8.value =
           (int32_t)MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessType__;
      func_?(pIVar14,0);
    }
  }
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pOVar13 = (Object__Array *)func_?(TypeInfo__System__Object,1);
  uVar10 = func_?();
  func_?(uVar10,0);
  this = (JsonSchemaBuilder *)func_?(7,uVar10);
  uVar10 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
  func_?(pOVar13,0);
  func_?(pOVar13,uVar10);
  func_?(0,uVar10);
  pSVar6 = Json::Utilities::StringUtils::StringUtils_FormatWith
                     (StringLiteral_Exception_JSON_schema_type_strin,(IFormatProvider *)pCVar12,
                      pOVar13,(MethodInfo *)0x0);
  pIVar14 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar14,pSVar6,(MethodInfo *)0x0);
  NStack_8.value = (int32_t)MethodInfo__Newtonsoft__Json__Schema__JsonSchemaBuilder__ProcessType__;
  func_?(pIVar14,0);
  pcVar15 = (code *)swi(3);
  NVar16 = (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)(*pcVar15)();
  return NVar16;
}


/* Void Push(JsonSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder_Push
               (JsonSchemaBuilder *this,JsonSchema *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._stack;
  (this->fields)._currentSchema = value;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0) {
    func_?(2,
                    TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                    ,pIVar1,value);
    this_00 = (Collection_1_VoxelHit_ *)(this->fields)._resolver;
    if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
      if (pIVar2 != (IList_1_VoxelHit_ *)0x0) {
        func_?(2,
                        TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                        ,pIVar2,value);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JsonSchemaBuilder(JsonSchemaResolver) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder__ctor
               (JsonSchemaBuilder *this,JsonSchemaResolver *resolver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  (this->fields)._stack = (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)this_00;
  (this->fields)._resolver = resolver;
  return;
}

