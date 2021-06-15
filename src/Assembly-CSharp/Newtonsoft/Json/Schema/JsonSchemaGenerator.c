
/* JsonSchemaType AddNullType(JsonSchemaType, Required) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_AddNullType
          (JsonSchemaGenerator *this,JsonSchemaType__Enum type,Required__Enum valueRequired,
          MethodInfo *method)

{
  if (valueRequired != Required__Enum_Always) {
    type = type | JsonSchemaType__Enum_Null;
  }
  return type;
}


/* JsonSchema Generate(Type) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate
          (JsonSchemaGenerator *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  pJVar1 = JsonSchemaGenerator_Generate_3
                     (this,type,(JsonSchemaResolver *)this_00,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* Void GenerateISerializableContract(Type, JsonISerializableContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_GenerateISerializableContract
               (JsonSchemaGenerator *this,Type *type,JsonISerializableContract *contract,
               MethodInfo *method)

{
  this_00 = (this->fields)._currentSchema;
  if (this_00 != (JsonSchema *)0x0) {
    JetPackMotor::JetPackMotor_set_Thrust((JetPackMotor *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* JsonSchema GenerateInternal(Type, Required, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_GenerateInternal
          (JsonSchemaGenerator *this,Type *type,Required__Enum valueRequired,bool required,
          MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  _Stack_18._0_2_ = 0;
  _Stack_1c.rgctx_data = (Il2CppRGCTXData *)0x0;
  iVar6 = 0;
  uVar7 = 0;
  func_?();
  method_00 = 
  TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator___GenerateInternal_c__AnonStorey0;
  puStack_4 = &stack0xffffff90;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = type;
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
    pSVar8 = JsonSchemaGenerator_GetTypeId
                        (this,(this_02->fields)._._._._.m_CachedPtr,0,(MethodInfo *)0x0);
    JsonSchemaGenerator_GetTypeId(this,(this_02->fields)._._._._.m_CachedPtr,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      pJVar10 = (this->fields)._resolver;
      if (pJVar10 == (JsonSchemaResolver *)0x0) goto code_?;
      pJVar11 = (JsonSchema *)(*(code *)(pJVar10->klass->vtable).GetSchema.method)();
      if (pJVar11 != (JsonSchema *)0x0) {
        if (valueRequired != Required__Enum_Always) {
          System.Core.dll::System::Linq::QuickSort`1[TElement]+<Sort>c__Iterator21[System::
          Collections::Generic::KeyValuePair`2[System::Int32,System::Int32]]::
          QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                    ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                      *)pJVar11,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          cVar12 = func_?();
          if (cVar12 != '\0') {
            cVar12 = func_?();
            if (cVar12 != '\0') {
              func_?();
              func_?();
            }
            iVar13 = func_?();
            if ((iVar13 != 0x40) || (cVar12 = func_?(), cVar12 == '\0')) {
              System.Core.dll::System::Linq::QuickSort`1[TElement]+<Sort>c__Iterator21[System::
              Collections::Generic::KeyValuePair`2[System::Int32,System::Int32]]::
              QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                        ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                          *)pJVar11,(MethodInfo *)0x0);
              cVar12 = func_?();
              if (cVar12 != '\0') {
                func_?();
                iVar6 = 0;
                uVar7 = 0;
                func_?();
              }
              value_03._4_4_ = uVar7;
              value_03.value = iVar6;
              JsonSchema::JsonSchema_set_Type(pJVar11,value_03,(MethodInfo *)0x0);
            }
          }
        }
        if (required != 0) {
          _Stack_18._0_2_ =
               Json::Serialization::JsonContract::JsonContract_get_IsReference
                         ((JsonContract *)pJVar11,(MethodInfo *)0x0);
          cVar12 = func_?();
          if ((cVar12 != '\x01') || (cVar12 = func_?(), cVar12 == '\0')) {
            type = (Type *)((uint)type & 0xffff0000);
            func_?();
            Json::Serialization::JsonContract::JsonContract_set_IsReference
                      ((JsonContract *)pJVar11,SUB42(type,0),(MethodInfo *)0x0);
          }
        }
        goto code_?;
      }
    }
    pIVar14 = (this->fields)._stack;
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,(Object *)this_02,
               MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator___GenerateInternal_c__AnonStorey0____m__0_Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_
               ,
               MethodInfo__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>__Func_System__Object__void__
              );
    bVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_8
                       ((IEnumerable_1_System_Reflection_ConstructorInfo_ *)pIVar14,
                        (Func_2_System_Reflection_ConstructorInfo_Boolean_ *)this_03,
                        bool_MethodInfo__System__Linq__Enumerable__Any<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__System__Func<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema,_bool>_
                       );
    if (bVar9 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar15 = (this->fields)._contractResolver;
      if (pIVar15 == (IContractResolver *)0x0) {
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
            == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).
                    Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started
            == 0)) {
          func_?();
        }
        pIVar15 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields
                  ->_instance;
      }
      if ((pIVar15 != (IContractResolver *)0x0) &&
         (pJVar16 = (JsonSchemaGenerator_TypeSchema__Class *)func_?(),
         pJVar16 != (JsonSchemaGenerator_TypeSchema__Class *)0x0)) {
        pIVar17 = *(Il2CppArrayType **)&(pJVar16->_0).byval_arg.attrs;
        if (((pIVar17 != (Il2CppArrayType *)0x0) ||
            (pIVar17 = (pJVar16->_0).this_arg.data.array, pIVar17 != (Il2CppArrayType *)0x0)) &&
           (pJVar11 = (JsonSchema *)(*(code *)pIVar17->etype[0x1f].data)(),
           pJVar11 != (JsonSchema *)0x0)) {
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return pJVar11;
        }
        pIVar18 = (this_02->fields)._._._._.m_CachedPtr;
        pTVar19 = (Type__Class *)func_?();
        JsonSchema::JsonSchema__ctor((JsonSchema *)pTVar19,(MethodInfo *)0x0);
        pJVar20 = TypeInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema;
        type = (Type *)func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)type,0.0,in_stack_21);
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)pIVar18,StringLiteral_type,(MethodInfo *)0x0);
        pMVar22 = (MethodInfo *)&UNK_?;
        Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
                  ((Object *)pTVar19,StringLiteral_schema,(MethodInfo *)0x0);
        bVar23 = cRam_? == '\0';
        (type->fields)._impl.value = pIVar18;
        type[1].klass = pTVar19;
        if (bVar23) {
          pJVar20 = (JsonSchemaGenerator_TypeSchema__Class *)&UNK_?;
          func_?();
          cRam_? = '\x01';
          pTVar19 = type[1].klass;
        }
        (this->fields)._currentSchema = (JsonSchema *)pTVar19;
        pIVar14 = (this->fields)._stack;
        if (pIVar14 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
          pIVar24 = pIVar14->klass;
          uVar25 = 0;
          uVar26._0_1_ = (pIVar24->_1).rank;
          uVar26._1_1_ = (pIVar24->_1).minimumAlignment;
          if (uVar26 != 0) {
            do {
              if (pIVar24->interfaceOffsets[uVar25].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                 ) {
                ppMVar27 = &(&(pIVar24->vtable).RemoveAt)[pIVar24->interfaceOffsets[uVar25].offset].
                            method;
                goto code_?;
              }
              uVar25 = uVar25 + 1;
              pJVar16 = pJVar20;
            } while (uVar25 < uVar26);
          }
          pJVar20 = pJVar16;
          ppMVar27 = (MethodInfo **)func_?();
code_?:
          (*(code *)*ppMVar27)();
          pJVar10 = (this->fields)._resolver;
          if ((pJVar10 != (JsonSchemaResolver *)0x0) &&
             ((pJVar10->fields)._LoadedSchemas_k__BackingField !=
              (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
            coroutineContainer = (MonoBehaviour *)0x2;
            func_?();
            if (coroutineContainer != (MonoBehaviour *)0x0) {
              pJVar11 = (this->fields)._currentSchema;
              if (pJVar11 == (JsonSchema *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[ColorTween]::
              TweenRunner_1_ColorTween__Init
                        ((TweenRunner_1_ColorTween_ *)pJVar11,coroutineContainer,in_stack_28);
            }
            if (required != 0) {
              pJVar11 = (this->fields)._currentSchema;
              type = (Type *)((uint)type & 0xffff0000);
              pMVar29 = (MethodInfo *)&UNK_?;
              func_?(&type,1,MethodInfo__System__Nullable<bool>__Nullable_bool_);
              if (pJVar11 == (JsonSchema *)0x0) goto code_?;
              Json::Serialization::JsonContract::JsonContract_set_IsReference
                        ((JsonContract *)pJVar11,SUB42(type,0),pMVar29);
            }
            pJVar11 = (this->fields)._currentSchema;
            type = (this_02->fields)._._._._.m_CachedPtr;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started ==
                0)) {
              func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
            }
            this_04 = Json::Serialization::JsonTypeReflector::
                      JsonTypeReflector_GetJsonContainerAttribute(type,(MethodInfo *)0x0);
            if (this_04 == (JsonContainerAttribute *)0x0) {
code_?:
              value_06 = (Action_1_Boolean_ *)0x0;
            }
            else {
              type = (Type *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                        this_04,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 ((String *)type,(MethodInfo *)0x0);
              if (bVar9 != 0) goto code_?;
              pMVar22 = (MethodInfo *)0x0;
              value_06 = (Action_1_Boolean_ *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    this_04,(MethodInfo *)0x0);
            }
            if (pJVar11 != (JsonSchema *)0x0) {
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)pJVar11,value_06,pMVar22);
              pJVar11 = (this->fields)._currentSchema;
              type = (this_02->fields)._._._._.m_CachedPtr;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started
                  == 0)) {
                func_?();
              }
              pMVar22 = (MethodInfo *)0x0;
              this_05 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)Json::Serialization::JsonTypeReflector::
                           JsonTypeReflector_GetJsonContainerAttribute(type,(MethodInfo *)0x0);
              if (this_05 ==
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
code_?:
                pMVar29 = (MethodInfo *)&UNK_?;
                pDVar30 = Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttribute_2
                                    ((ICustomAttributeProvider *)type,
                                     System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                                    );
                if (pDVar30 == (DescriptionAttribute *)0x0) {
                  avatarBody = (MVBody *)0x0;
                }
                else {
                  avatarBody = (MVBody *)
                               (*(code *)(pDVar30->klass->vtable).get_Description.method)();
                }
              }
              else {
                pMVar22 = (MethodInfo *)&UNK_?;
                pSVar8 = (String *)
                          System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    (this_05,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar9 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                   (pSVar8,(MethodInfo *)0x0);
                if (bVar9 != 0) goto code_?;
                pMVar29 = (MethodInfo *)&UNK_?;
                avatarBody = (MVBody *)
                             System.dll::System::Collections::Generic::
                             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                             ::Single,System::Object]::
                             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                       (this_05,(MethodInfo *)0x0);
              }
              if (pJVar11 != (JsonSchema *)0x0) {
                AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                          ((AccessoryPreviewPopup *)pJVar11,avatarBody,(MethodInfo *)0x0);
                if (pIVar17 == (Il2CppArrayType *)0x0) {
                  iVar13 = func_?();
                  if (iVar13 != 0) {
                    pJVar11 = (this->fields)._currentSchema;
                    pMVar22 = (MethodInfo *)0x0;
                    func_?();
                    if (pJVar11 == (JsonSchema *)0x0) goto code_?;
                    value_02._4_4_ = pMVar22;
                    value_02.value = (int32_t)pMVar22;
                    JsonSchema::JsonSchema_set_Type(pJVar11,value_02,pMVar22);
                    Json::Utilities::ReflectionUtils::ReflectionUtils_GetDictionaryKeyValueTypes
                              ((this_02->fields)._._._._.m_CachedPtr,
                               (Type **)&_Stack_1c.methodMetadataHandle,(Type **)&stack0xffffffd0,
                               (MethodInfo *)0x0);
                    pIVar18 = TypeRef__System__IConvertible;
                    if (_Stack_1c.rgctx_data != (Il2CppRGCTXData *)0x0) {
                      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) !=
                           0) && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pTVar31 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
                      if (pTVar31 == (Type *)0x0) goto code_?;
                      pTVar31 = (Type *)&UNK_?;
                      cVar12 = func_?();
                      if (cVar12 != '\0') {
                        pJVar11 = (this->fields)._currentSchema;
                        pJVar32 = JsonSchemaGenerator_GenerateInternal
                                            (this,pTVar31,Required__Enum_Default,0,(MethodInfo *)0x0
                                            );
                        if (pJVar11 == (JsonSchema *)0x0) goto code_?;
                        DayNightCycle::DayNightCycle_set_CurrentSunParam
                                  ((DayNightCycle *)pJVar11,(CelestialParam *)pJVar32,
                                   (MethodInfo *)0x0);
                      }
                    }
                    goto code_?;
                  }
                  iVar13 = func_?();
                  if (iVar13 == 0) {
                    iVar13 = func_?();
                    if (iVar13 == 0) {
                      iVar13 = func_?();
                      if (iVar13 == 0) {
                        iVar13 = func_?();
                        if (iVar13 == 0) {
                          iVar13 = func_?();
                          if (iVar13 != 0) {
                            avatarBody = (MVBody *)&UNK_?;
                            Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullable
                                      ((Type *)(pJVar20->_0).name,(MethodInfo *)0x0);
                            goto code_?;
                          }
                          iVar13 = func_?();
                          if (iVar13 == 0) goto code_?;
                          pJVar11 = (this->fields)._currentSchema;
                          pMVar22 = (MethodInfo *)&stack0xffffffc8;
                          uVar33 = 0;
                          func_?();
                          if (pJVar11 != (JsonSchema *)0x0) {
                            JsonSchema::JsonSchema_set_Type
                                      (pJVar11,(Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_)
                                               (uVar33 & 0xffffffff00000000),pMVar22);
                            goto code_?;
                          }
                        }
                        else {
                          type = (Type *)(this->fields)._currentSchema;
                          iVar6 = 0;
                          uVar7 = 0;
                          func_?();
                          if (type != (Type *)0x0) {
                            value_00._4_4_ = uVar7;
                            value_00.value = iVar6;
                            JsonSchema::JsonSchema_set_Type((JsonSchema *)type,value_00,pMVar22);
                            type = (Type *)(this->fields)._currentSchema;
                            pSVar8 = JsonSchemaGenerator_GetTypeId
                                                (this,(this_02->fields)._._._._.m_CachedPtr,0,
                                                 (MethodInfo *)0x0);
                            if (type != (Type *)0x0) {
                              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                              TweenRunner`1[ColorTween]::TweenRunner_1_ColorTween__Init
                                        ((TweenRunner_1_ColorTween_ *)type,(MonoBehaviour *)pSVar8,
                                         (MethodInfo *)0x0);
                              func_?();
                              pJVar11 = (this->fields)._currentSchema;
                              if (pJVar11 != (JsonSchema *)0x0) {
                                JetPackMotor::JetPackMotor_set_Thrust
                                          ((JetPackMotor *)pJVar11,1,(MethodInfo *)0x0);
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                      else {
                        type = (Type *)(this->fields)._currentSchema;
                        iVar6 = 0;
                        uVar7 = 0;
                        func_?();
                        if (type != (Type *)0x0) {
                          value_01._4_4_ = uVar7;
                          value_01.value = iVar6;
                          JsonSchema::JsonSchema_set_Type((JsonSchema *)type,value_01,pMVar22);
                          type = (Type *)(this->fields)._currentSchema;
                          pMVar22 = (MethodInfo *)
                                    JsonSchemaGenerator_GetTypeId
                                              (this,(this_02->fields)._._._._.m_CachedPtr,0,
                                               (MethodInfo *)0x0);
                          if (type != (Type *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                            TweenRunner`1[ColorTween]::TweenRunner_1_ColorTween__Init
                                      ((TweenRunner_1_ColorTween_ *)type,(MonoBehaviour *)pMVar22,
                                       (MethodInfo *)0x0);
                            pTVar31 = (this_02->fields)._._._._.m_CachedPtr;
                            contract = (JsonObjectContract *)func_?();
                            JsonSchemaGenerator_GenerateObjectSchema(this,pTVar31,contract,pMVar22);
                            goto code_?;
                          }
                        }
                      }
                    }
                    else {
                      pJVar11 = (this->fields)._currentSchema;
                      JsonSchemaGenerator_GetJsonSchemaType
                                (this,(this_02->fields)._._._._.m_CachedPtr,valueRequired,
                                 (MethodInfo *)0x0);
                      pMVar22 = (MethodInfo *)0x0;
                      uVar7 = 0;
                      func_?();
                      if (pJVar11 != (JsonSchema *)0x0) {
                        value_04._4_4_ = uVar7;
                        value_04.value = (int32_t)pMVar22;
                        JsonSchema::JsonSchema_set_Type(pJVar11,value_04,pMVar22);
                        pJVar11 = (this->fields)._currentSchema;
                        if (pJVar11 != (JsonSchema *)0x0) {
                          System.Core.dll::System::Linq::
                          QuickSort`1[TElement]+<Sort>c__Iterator21[System::Collections::Generic::
                          KeyValuePair`2[System::Int32,System::Int32]]::
                          QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_Generic_IEnumerator_TElement__get_Current
                                    ((QuickSort_1_TElement_Sort_c_Iterator21_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
                                      *)pJVar11,(MethodInfo *)0x0);
                          iVar13 = func_?();
                          if (iVar13 == 4) {
                            pMVar22 = (MethodInfo *)&UNK_?;
                            cVar12 = func_?();
                            if (cVar12 != '\0') {
                              pTVar31 = (this_02->fields)._._._._.m_CachedPtr;
                              if (pTVar31 != (Type *)0x0) {
                                bVar9 = mscorlib.dll::System::Type::Type_get_IsEnum
                                                   (pTVar31,pMVar22);
                                pIVar18 = TypeRef__System__FlagsAttribute;
                                if (bVar9 == 0) goto code_?;
                                pvVar34 = (this_02->fields)._._._._.m_CachedPtr;
                                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                                  func_?();
                                }
                                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)pIVar18,(MethodInfo *)0x0);
                                if (pvVar34 != (void *)0x0) {
                                  cVar12 = func_?();
                                  if (cVar12 != '\0') goto code_?;
                                  this_00 = (MVNetworkGame *)(this->fields)._currentSchema;
                                  type = (Type *)func_?();
                                  puVar35 = (undefined4 *)&UNK_?;
                                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                  Vector4]::List_1_UnityEngine_Vector4___ctor
                                            ((List_1_UnityEngine_Vector4_ *)type,
                                             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JToken>__List__
                                            );
                                  if (this_00 != (MVNetworkGame *)0x0) {
                                    MVNetworkGame::MVNetworkGame_set_AvatarShopRepository
                                              (this_00,(AvatarRepository *)type,(MethodInfo *)0x0);
                                    this_01 = (MVWorldObjectClient *)(this->fields)._currentSchema;
                                    value_07 = (MVGroup *)func_?();
                                    System.Core.dll::System::Collections::Generic::
                                    HashSet`1[AvatarModifierPackage+AvatarModifier]::
                                    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                                              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                                               value_07,
                                               MethodInfo__System__Collections__Generic__Dictionary<Newtonsoft::Json::Linq::JToken,_System::String>__Dictionary__
                                              );
                                    if (this_01 != (MVWorldObjectClient *)0x0) {
                                      MVWorldObjectClient::MVWorldObjectClient_set_Group
                                                (this_01,value_07,(MethodInfo *)0x0);
                                      this_06 = Json::Utilities::EnumUtils::
                                                EnumUtils_GetNamesAndValues
                                                          ((this_02->fields)._._._._.m_CachedPtr,
                                                                                                                      
                                                  Newtonsoft__Json__Utilities__EnumValues<long>_MethodInfo__Newtonsoft__Json__Utilities__EnumUtils__GetNamesAndValues<long>_System__Type_
                                                  );
                                      if (this_06 != (EnumValues_1_System_Int64_ *)0x0) {
                                        type = (Type *)mscorlib.dll::System::Collections::
                                                       ObjectModel::Collection`1[Newtonsoft::Json::
                                                       Serialization::JsonProperty]::
                                                                                                              
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_IEnumerable_GetEnumerator
                                                            ((
                                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)this_06,
                                                  MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Utilities::EnumValue<long>_>__GetEnumerator__
                                                  );
                                        uStack_1 = 0;
                                        while (pTVar31 = type, type != (Type *)0x0) {
                                          cVar12 = func_?();
                                          if (cVar12 == '\0') {
                                            *puVar35 = 0x428;
                                            uStack_1 = 0xffffffff;
                                            if (pTVar31 != (Type *)0x0) {
                                              func_?();
                                            }
                                            goto code_?;
                                          }
                                          pTVar19 = pTVar31->klass;
                                          uVar26 = 0;
                                          uVar25._0_1_ = (pTVar19->_1).rank;
                                          uVar25._1_1_ = (pTVar19->_1).minimumAlignment;
                                          if (uVar25 != 0) {
                                            do {
                                              if (pTVar19->interfaceOffsets[uVar26].interfaceType ==
                                                  (Il2CppClass *)
                                                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Utilities::EnumValue<long>_>
                                                 ) {
                                                ppMVar27 = &(&(pTVar19->vtable).Equals)
                                                            [pTVar19->interfaceOffsets[uVar26].
                                                             offset].method;
                                                goto code_?;
                                              }
                                              uVar26 = uVar26 + 1;
                                            } while (uVar26 < uVar25);
                                          }
                                          ppMVar27 = (MethodInfo **)func_?();
code_?:
                                          this_07 = (
                                                  Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                                                  *)(*(code *)*ppMVar27)();
                                          if (this_07 ==
                                              (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                                               *)0x0) break;
                                          mscorlib.dll::System::
                                          Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System
                                          ::Reflection::CustomAttributeTypedArgument]::
                                          Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                                                    (this_07,
                                                  MethodInfo__Newtonsoft__Json__Utilities__EnumValue<long>__get_Value__
                                                  );
                                          o = (Object *)func_?();
                                          Json::Linq::JToken::JToken_FromObject(o,(MethodInfo *)0x0)
                                          ;
                                          pPVar36 = (PrefabPool *)(this->fields)._currentSchema;
                                          if ((pPVar36 == (PrefabPool *)0x0) ||
                                             (pOVar37 = PrefabPool::PrefabPool_get_MVPulseBoxPrefab
                                                                  (pPVar36,(MethodInfo *)0x0),
                                             pOVar37 == (ObjectPrefab *)0x0)) break;
                                          pOVar38 = pOVar37->klass;
                                          uVar26 = 0;
                                          uVar39._0_1_ = (pOVar38->_1).rank;
                                          uVar39._1_1_ = (pOVar38->_1).minimumAlignment;
                                          if (uVar39 != 0) {
                                            do {
                                              if (pOVar38->interfaceOffsets[uVar26].interfaceType ==
                                                  (Il2CppClass *)
                                                  TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Linq::JToken>
                                                 ) {
                                                ppMVar27 = &(&(pOVar37->klass->vtable).GetHashCode)
                                                            [pOVar38->interfaceOffsets[uVar26].offset
                                                            ].method;
                                                goto code_?;
                                              }
                                              uVar26 = uVar26 + 1;
                                            } while (uVar26 < uVar39);
                                          }
                                          ppMVar27 = (MethodInfo **)func_?();
code_?:
                                          this_09 = (Collection_1_VoxelHit_ *)&UNK_?;
                                          (*(code *)*ppMVar27)();
                                          pPVar36 = (PrefabPool *)(this->fields)._currentSchema;
                                          if (pPVar36 == (PrefabPool *)0x0) break;
                                          pOVar37 = PrefabPool::PrefabPool_get_MVRandomBoxPrefab
                                                              (pPVar36,(MethodInfo *)0x0);
                                          mscorlib.dll::System::Collections::ObjectModel::
                                          Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                    (this_09,
                                                  MethodInfo__Newtonsoft__Json__Utilities__EnumValue<long>__get_Name__
                                                  );
                                          if (pOVar37 == (ObjectPrefab *)0x0) break;
                                          pOVar38 = pOVar37->klass;
                                          uVar26 = 0;
                                          uVar40._0_1_ = (pOVar38->_1).rank;
                                          uVar40._1_1_ = (pOVar38->_1).minimumAlignment;
                                          if (uVar40 != 0) {
                                            do {
                                              if (pOVar38->interfaceOffsets[uVar26].interfaceType ==
                                                  (Il2CppClass *)
                                                  TypeInfo__System__Collections__Generic__IDictionary<Newtonsoft::Json::Linq::JToken,_System::String>
                                                 ) {
                                                ppMVar27 = &(&(pOVar37->klass->vtable).Equals)
                                                            [pOVar38->interfaceOffsets[uVar26].offset
                                                            ].method;
                                                goto code_?;
                                              }
                                              uVar26 = uVar26 + 1;
                                            } while (uVar26 < uVar40);
                                          }
                                          ppMVar27 = (MethodInfo **)func_?();
code_?:
                                          (*(code *)*ppMVar27)();
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto code_?;
                            }
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
                  else {
                    pJVar11 = (this->fields)._currentSchema;
                    iVar6 = 0;
                    uVar7 = 0;
                    func_?();
                    if (pJVar11 != (JsonSchema *)0x0) {
                      value._4_4_ = uVar7;
                      value.value = iVar6;
                      JsonSchema::JsonSchema_set_Type(pJVar11,value,(MethodInfo *)value_06);
                      pJVar11 = (this->fields)._currentSchema;
                      pSVar8 = JsonSchemaGenerator_GetTypeId
                                          (this,(this_02->fields)._._._._.m_CachedPtr,0,
                                           (MethodInfo *)0x0);
                      if (pJVar11 != (JsonSchema *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[ColorTween]::TweenRunner_1_ColorTween__Init
                                  ((TweenRunner_1_ColorTween_ *)pJVar11,(MonoBehaviour *)pSVar8,
                                   pMVar29);
                        pTVar31 = (this_02->fields)._._._._.m_CachedPtr;
                        if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->
                                    vtable).Equals.methodPtr & 0x2000000) != 0) &&
                           ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).
                            cctor_started == 0)) {
                          func_?();
                        }
                        pMVar22 = (MethodInfo *)&UNK_?;
                        pEVar41 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)
                                  Json::Serialization::JsonTypeReflector::
                                  JsonTypeReflector_GetJsonContainerAttribute
                                            (pTVar31,(MethodInfo *)0x0);
                        if (pEVar41 ==
                            (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0) {
code_?:
                          uVar42 = 1;
                        }
                        else {
                          this_08 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0;
                          if (pEVar41->klass ==
                              (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte___Class *)
                              TypeInfo__Newtonsoft__Json__JsonArrayAttribute) {
                            this_08 = pEVar41;
                          }
                          if (this_08 ==
                              (Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)0x0)
                          goto code_?;
                          uVar43 = System.Core.dll::System::Linq::
                                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::
                                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                                             (this_08,(MethodInfo *)0x0);
                          uVar42 = (uint)uVar43;
                        }
                        pTVar31 = Json::Utilities::ReflectionUtils::
                                  ReflectionUtils_GetCollectionItemType
                                            ((this_02->fields)._._._._.m_CachedPtr,(MethodInfo *)0x0
                                            );
                        if (pTVar31 == (Type *)0x0) {
code_?:
                          pJVar44 = JsonSchemaGenerator_Pop(this,(MethodInfo *)0x0);
                          if (pJVar44 != (JsonSchemaGenerator_TypeSchema *)0x0) {
                            pJVar11 = (pJVar44->fields)._Schema_k__BackingField;
                            *unaff_FS_OFFSET = uStack_3;
                            return pJVar11;
                          }
                        }
                        else {
                          pJVar11 = (this->fields)._currentSchema;
                          type = (Type *)func_?();
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
                          List_1_UnityEngine_Vector4___ctor
                                    ((List_1_UnityEngine_Vector4_ *)type,
                                     MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
                                    );
                          if (pJVar11 != (JsonSchema *)0x0) {
                            DayNightCycle::DayNightCycle_set_CurrentSkyParam
                                      ((DayNightCycle *)pJVar11,(SkyParam *)type,pMVar22);
                            pJVar32 = (this->fields)._currentSchema;
                            if (pJVar32 != (JsonSchema *)0x0) {
                              pSVar45 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                                  ((DayNightCycle *)pJVar32,(MethodInfo *)0x0);
                              _Var29.methodMetadataHandle =
                                   (Il2CppMetadataMethodDefinitionHandle)
                                   JsonSchemaGenerator_GenerateInternal
                                             (this,(Type *)pJVar11,(uVar42 ^ 1) * 2,0,
                                              (MethodInfo *)0x0);
                              if (pSVar45 != (SkyParam *)0x0) {
                                _Stack_1c.methodMetadataHandle = _Var29.methodMetadataHandle;
                                func_?();
                                goto code_?;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
code_?:
                  pJVar11 = (this->fields)._currentSchema;
                  uVar7 = 0;
                  uVar46 = 0;
                  func_?();
                  if (pJVar11 != (JsonSchema *)0x0) {
                    value_05._4_2_ = (short)uVar46;
                    value_05.value = uVar7;
                    value_05._6_2_ = (short)((uint)uVar46 >> 0x10);
                    JsonSchema::JsonSchema_set_Type(pJVar11,value_05,(MethodInfo *)avatarBody);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar47 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      pOVar48 = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                          (StringLiteral_Unresolved_circular_reference_fo,(IFormatProvider *)pCVar47
                           ,pOVar48,(MethodInfo *)0x0);
      pIVar49 = (IsolatedStorageException *)func_?();
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(pIVar49,pSVar8,(MethodInfo *)0x0);
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar47 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                      ((MethodInfo *)0x0);
  pOVar48 = (Object__Array *)func_?();
  func_?();
  func_?();
  func_?();
  pSVar8 = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_contract_type___0_,(IFormatProvider *)pCVar47,
                       pOVar48,(MethodInfo *)0x0);
  pIVar49 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar49,pSVar8,(MethodInfo *)0x0);
  _Stack_1c.methodMetadataHandle =
       (Il2CppMetadataMethodDefinitionHandle)
       MethodInfo__Newtonsoft__Json__Schema__JsonSchemaGenerator__GenerateInternal_System__Type__Newtonsoft__Json__Required__bool_
  ;
  func_?();
  func_?();
  pcVar50 = (code *)swi(3);
  pJVar11 = (JsonSchema *)(*pcVar50)();
  return pJVar11;
}


/* Void GenerateObjectSchema(Type, JsonObjectContract) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_GenerateObjectSchema
               (JsonSchemaGenerator *this,Type *type,JsonObjectContract *contract,MethodInfo *method
               )

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
  pJVar4 = (this->fields)._currentSchema;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_Newtonsoft::Json::Schema::JsonSchema>__Dictionary__
            );
  if (((pJVar4 != (JsonSchema *)0x0) &&
      (DayNightCycle::DayNightCycle_set_CurrentStarsParam
                 ((DayNightCycle *)pJVar4,(StarsParam *)this_01,(MethodInfo *)0x0),
      contract != (JsonObjectContract *)0x0)) &&
     (this_00 = (contract->fields)._Properties_k__BackingField,
     this_00 != (JsonPropertyCollection *)0x0)) {
    pMVar5 = (MethodInfo *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_IEnumerable_GetEnumerator
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__ObjectModel__Collection<Newtonsoft::Json::Serialization::JsonProperty>__GetEnumerator__
                       );
    uStack_1 = 0;
    while (pMVar5 != (MethodInfo *)0x0) {
      pMVar6 = (MethodInfo *)0x1;
      cVar7 = func_?();
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (pMVar5 != (MethodInfo *)0x0) {
          func_?();
          pMVar6 = pMVar5;
        }
        if (type == (Type *)0x0) break;
        bVar8 = mscorlib.dll::System::Type::Type_get_IsSealed(type,pMVar6);
        if (bVar8 != 0) {
          pJVar4 = (this->fields)._currentSchema;
          if (pJVar4 == (JsonSchema *)0x0) break;
          JetPackMotor::JetPackMotor_set_Thrust((JetPackMotor *)pJVar4,0,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pIVar9 = (IEnumerator__Class *)pMVar5->methodPointer;
      uVar10 = 0;
      uVar11._0_1_ = (pIVar9->_1).rank;
      uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Serialization::JsonProperty>
             ) {
            ppMVar12 = &(&(((IEnumerator__Class *)pMVar5->methodPointer)->vtable).get_Current)
                       [pIVar9->interfaceOffsets[uVar10].offset].method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      ppMVar12 = (MethodInfo **)func_?();
code_?:
      pMVar6 = pMVar5;
      iVar13 = (*(code *)*ppMVar12)();
      if (iVar13 == 0) break;
      if (*(char *)(iVar13 + 0x28) == '\0') {
        iVar14 = func_?();
        if ((iVar14 == 1) &&
           (cVar7 = func_?(&stack0xffffffd4,
                                    MethodInfo__System__Nullable<Newtonsoft::Json::NullValueHandling>__get_HasValue__
                                   ), cVar7 != '\0')) {
code_?:
          required = false;
        }
        else {
          pMVar6 = (MethodInfo *)*(undefined8 *)(iVar13 + 0x40);
          uVar15 = func_?(&stack0xffffffcc,
                                   MethodInfo__System__Nullable<Newtonsoft::Json::DefaultValueHandling>__GetValueOrDefault__
                                  );
          if (((uVar15 & 1) != 0) || (*(int *)(iVar13 + 0x60) != 0)) goto code_?;
          required = *(int *)(iVar13 + 100) == 0;
        }
        this_02 = (MVNetworkGame *)
                  JsonSchemaGenerator_GenerateInternal
                            (this,*(Type **)(iVar13 + 0x1c),*(Required__Enum *)(iVar13 + 0x30),
                             required,(MethodInfo *)0x0);
        if (*(Object **)(iVar13 + 0x2c) != (Object *)0x0) {
          value = Json::Linq::JToken::JToken_FromObject
                            (*(Object **)(iVar13 + 0x2c),(MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame *)0x0) break;
          MVNetworkGame::MVNetworkGame_set_PlayerController
                    (this_02,(MVLocalObjectController *)value,pMVar6);
        }
        pJVar4 = (this->fields)._currentSchema;
        if ((pJVar4 == (JsonSchema *)0x0) ||
           (pSVar16 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                ((DayNightCycle *)pJVar4,(MethodInfo *)0x0),
           pSVar16 == (StarsParam *)0x0)) break;
        func_?();
      }
    }
  }
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* JsonSchema Generate(Type, JsonSchemaResolver) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_1
          (JsonSchemaGenerator *this,Type *type,JsonSchemaResolver *resolver,MethodInfo *method)

{
  pJVar1 = JsonSchemaGenerator_Generate_3(this,type,resolver,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Generate(Type, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_2
          (JsonSchemaGenerator *this,Type *type,bool rootSchemaNullable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__Newtonsoft__Json__Schema__JsonSchemaResolver);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchema>__List__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  pJVar1 = JsonSchemaGenerator_Generate_3
                     (this,type,(JsonSchemaResolver *)this_00,rootSchemaNullable,(MethodInfo *)0x0);
  return pJVar1;
}


/* JsonSchema Generate(Type, JsonSchemaResolver, Boolean) */

JsonSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Generate_3
          (JsonSchemaGenerator *this,Type *type,JsonSchemaResolver *resolver,bool rootSchemaNullable
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)type,StringLiteral_type,(MethodInfo *)0x0);
  Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)resolver,StringLiteral_resolver,(MethodInfo *)0x0);
  (this->fields)._resolver = resolver;
  pJVar1 = JsonSchemaGenerator_GenerateInternal
                     (this,type,(rootSchemaNullable ^ 1) * 2,0,(MethodInfo *)0x0);
  return pJVar1;
}


/* String GetDescription(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetDescription(JsonSchemaGenerator *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)Json::Serialization::JsonTypeReflector::JsonTypeReflector_GetJsonContainerAttribute
                         (type,(MethodInfo *)0x0);
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    pSVar1 = (String *)
             System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = (String *)
               System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_00,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  pDStack3 =
       Json::Utilities::ReflectionUtils::ReflectionUtils_GetAttribute_2
                 ((ICustomAttributeProvider *)type,
                  System__ComponentModel__DescriptionAttribute_MethodInfo__Newtonsoft__Json__Utilities__ReflectionUtils__GetAttribute<System::ComponentModel::DescriptionAttribute>_System__Reflection__ICustomAttributeProvider_
                 );
  if (pDStack3 == (DescriptionAttribute *)0x0) {
    return (String *)0x0;
  }
  pIStack4 = pDStack3->klass[1]._0.image;
  pSVar1 = (String *)(*(code *)(pDStack3->klass->vtable).get_Description.method)();
  return pSVar1;
}


/* JsonSchemaType GetJsonSchemaType(Type, Required) */

JsonSchemaType__Enum
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_GetJsonSchemaType
          (JsonSchemaGenerator *this,Type *type,Required__Enum valueRequired,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JVar1 = JsonSchemaType__Enum_None;
  if ((valueRequired != Required__Enum_Always) &&
     (bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullable(type,(MethodInfo *)0x0),
     bVar2 != 0)) {
    JVar1 = JsonSchemaType__Enum_Null;
    bVar2 = Json::Utilities::ReflectionUtils::ReflectionUtils_IsNullableType(type,(MethodInfo *)0x0)
    ;
    if (bVar2 != 0) {
      type = mscorlib.dll::System::Nullable::Nullable_GetUnderlyingType(type,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  TVar3 = mscorlib.dll::System::Type::Type_GetTypeCode(type,(MethodInfo *)0x0);
  switch(TVar3) {
  case TypeCode__Enum_Empty:
  case TypeCode__Enum_Object:
  case TypeCode__Enum_Char:
  case TypeCode__Enum_DateTime:
  case TypeCode__Enum_String:
    return JVar1 | JsonSchemaType__Enum_String;
  case TypeCode__Enum_DBNull:
    return JsonSchemaType__Enum_Null;
  case TypeCode__Enum_Boolean:
    return JVar1 | JsonSchemaType__Enum_Boolean;
  case TypeCode__Enum_SByte:
  case TypeCode__Enum_Byte:
  case TypeCode__Enum_Int16:
  case TypeCode__Enum_UInt16:
  case TypeCode__Enum_Int32:
  case TypeCode__Enum_UInt32:
  case TypeCode__Enum_Int64:
  case TypeCode__Enum_UInt64:
    return JVar1 | JsonSchemaType__Enum_Integer;
  case TypeCode__Enum_Single:
  case TypeCode__Enum_Double:
  case TypeCode__Enum_Decimal:
    return JVar1 | JsonSchemaType__Enum_Float;
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object);
  uVar4 = func_?(TypeInfo__System__TypeCode,&stack0xfffffff8);
  func_?(args,0);
  func_?(args,uVar4);
  func_?();
  func_?(args,0);
  func_?(args,type);
  func_?(1,type);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (StringLiteral_Unexpected_type_code___0___for_t,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  uVar5 = func_?();
  pbVar6 = (byte *)((uint)provider ^ *(uint *)((int)((ulonglong)uVar5 >> 0x20) + 0x52));
  bVar7 = *pbVar6;
  bVar8 = (byte)uVar5;
  *pbVar6 = *pbVar6 + bVar8;
  bVar9 = *(char *)&this_00->klass + (byte)extraout_ECX;
  bVar10 = CARRY1(*(byte *)&this_00->klass,(byte)extraout_ECX) || CARRY1(bVar9,CARRY1(bVar7,bVar8));
  *(byte *)&this_00->klass = bVar9 + CARRY1(bVar7,bVar8);
  bVar7 = *pbVar6 + (byte)pbVar6;
  bVar11 = CARRY1(*pbVar6,(byte)pbVar6) || CARRY1(bVar7,bVar10);
  *pbVar6 = bVar7 + bVar10;
  bVar9 = (byte)((ulonglong)uVar5 >> 8);
  bVar7 = *(char *)&this_00->klass + bVar9;
  bVar10 = CARRY1(*(byte *)&this_00->klass,bVar9) || CARRY1(bVar7,bVar11);
  *(byte *)&this_00->klass = bVar7 + bVar11;
  bVar7 = *(byte *)&this_00->klass;
  bVar12 = (byte)((uint)pbVar6 >> 8);
  bVar9 = *(char *)&this_00->klass + bVar12;
  *(byte *)&this_00->klass = bVar9 + bVar10;
  *(char *)uVar5 = *(char *)uVar5 + bVar8 + (CARRY1(bVar7,bVar12) || CARRY1(bVar9,bVar10));
  *extraout_ECX = *extraout_ECX + bVar8;
  pcVar13 = (code *)swi(3);
  JVar1 = (*pcVar13)();
  return JVar1;
}


/* String GetTitle(Type) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetTitle(JsonSchemaGenerator *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_00 = Json::Serialization::JsonTypeReflector::JsonTypeReflector_GetJsonContainerAttribute
                      (type,(MethodInfo *)0x0);
  if (this_00 != (JsonContainerAttribute *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          (MethodInfo *)0x0);
      return pSVar1;
    }
  }
  return (String *)0x0;
}


/* String GetTypeId(Type, Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
         JsonSchemaGenerator_GetTypeId
                   (JsonSchemaGenerator *this,Type *type,bool explicitOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__JsonTypeReflector);
  }
  this_00 = Json::Serialization::JsonTypeReflector::JsonTypeReflector_GetJsonContainerAttribute
                      (type,(MethodInfo *)0x0);
  if (this_00 != (JsonContainerAttribute *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar1 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
      return pSVar1;
    }
  }
  if (explicitOnly != 0) {
    return (String *)0x0;
  }
  iVar3 = (this->fields)._UndefinedSchemaIdHandling_k__BackingField;
  if (iVar3 == 1) {
    if (type != (Type *)0x0) {
      pSVar1 = (String *)
               (*(code *)(type->klass->vtable).__unknown_8.method)
                         (type,(type->klass->vtable).get_HasElementType.methodPtr);
      return pSVar1;
    }
  }
  else {
    if (iVar3 != 2) {
      return (String *)0x0;
    }
    if (type != (Type *)0x0) {
      pSVar1 = (String *)
               (*(code *)(type->klass->vtable).__unknown_6.method)
                         (type,(type->klass->vtable).get_Attributes.methodPtr);
      return pSVar1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Boolean HasFlag(Nullable`1[Newtonsoft.Json.Schema.JsonSchemaType], JsonSchemaType) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
     JsonSchemaGenerator_HasFlag_1
               (Nullable_1_Newtonsoft_Json_Schema_JsonSchemaType_ value,JsonSchemaType__Enum flag,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&value,
                          MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                         );
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = func_?(&value,
                          MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                         );
  if (cVar1 == '\0') {
    uStack_2 = 0;
  }
  else {
    JVar3 = func_?(&value,
                            MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                           );
    uStack_2 = 0;
    func_?(&uStack_2,JVar3 & flag,
                    MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__Nullable_Newtonsoft__Json__Schema__JsonSchemaType_
                   );
  }
  uStack_4 = uStack_2._4_4_;
  uStack_5 = (undefined4)uStack_2;
  JVar3 = func_?(&uStack_5,
                          MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__GetValueOrDefault__
                         );
  if (JVar3 != flag) {
    return 0;
  }
  bVar6 = func_?(&uStack_5,
                          MethodInfo__System__Nullable<Newtonsoft::Json::Schema::JsonSchemaType>__get_HasValue__
                         );
  return bVar6;
}


/* JsonSchemaGenerator+TypeSchema Pop() */

JsonSchemaGenerator_TypeSchema *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Pop
          (JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._stack;
  if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
    iVar2 = func_?(0,
                            TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                            ,pIVar1);
    pIVar3 = pIVar1->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
            (Il2CppClass *)
            TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
           ) {
          ppMVar6 = &(&(pIVar1->klass->vtable).get_Item)[pIVar3->interfaceOffsets[uVar4].offset].
                     method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)
              func_?(pIVar1,
                              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                              ,3);
code_?:
    pJVar7 = (JsonSchemaGenerator_TypeSchema *)(*(code *)*ppMVar6)(pIVar1,iVar2 + -1,ppMVar6[1]);
    pIVar1 = (this->fields)._stack;
    if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
      iVar2 = func_?(0,
                              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                              ,pIVar1);
      pIVar3 = pIVar1->klass;
      uVar5 = 0;
      uVar4._0_1_ = (pIVar3->_1).rank;
      uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
             ) {
            ppMVar6 = &(&(pIVar1->klass->vtable).RemoveAt)[pIVar3->interfaceOffsets[uVar5].offset].
                       method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      ppMVar6 = (MethodInfo **)
                func_?(pIVar1,
                                TypeInfo__System__Collections__Generic__IList<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                ,2);
code_?:
      (*(code *)*ppMVar6)(pIVar1,iVar2 + -1,ppMVar6[1]);
      pJVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_LastOrDefault_3
                         ((IEnumerable_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)
                          (this->fields)._stack,
                          Newtonsoft__Json__Schema__JsonSchemaGenerator__TypeSchema_MethodInfo__System__Linq__Enumerable__LastOrDefault<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_System__Collections__Generic__IEnumerable<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>_
                         );
      if (pJVar8 == (JsonSchemaGenerator_TypeSchema *)0x0) {
        (this->fields)._currentSchema = (JsonSchema *)0x0;
        return pJVar7;
      }
      (this->fields)._currentSchema = (pJVar8->fields)._Schema_k__BackingField;
      return pJVar7;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pJVar7 = (JsonSchemaGenerator_TypeSchema *)(*pcVar9)();
  return pJVar7;
}


/* Void Push(JsonSchemaGenerator+TypeSchema) */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator_Push
               (JsonSchemaGenerator *this,JsonSchemaGenerator_TypeSchema *typeSchema,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (typeSchema != (JsonSchemaGenerator_TypeSchema *)0x0) {
    pIVar1 = (this->fields)._stack;
    (this->fields)._currentSchema = (typeSchema->fields)._Schema_k__BackingField;
    if (pIVar1 != (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)0x0) {
      pIVar2 = pIVar1->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)
              TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
             ) {
            ppMVar5 = &(&(pIVar1->klass->vtable).RemoveAt)
                       [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      ppMVar5 = (MethodInfo **)
                func_?(pIVar1,
                                TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                                ,2);
code_?:
      (*(code *)*ppMVar5)(pIVar1,typeSchema,ppMVar5[1]);
      pJVar6 = (this->fields)._resolver;
      if ((pJVar6 != (JsonSchemaResolver *)0x0) &&
         (pIVar7 = (pJVar6->fields)._LoadedSchemas_k__BackingField,
         pIVar7 != (IList_1_Newtonsoft_Json_Schema_JsonSchema_ *)0x0)) {
        func_?(2,
                        TypeInfo__System__Collections__Generic__ICollection<Newtonsoft::Json::Schema::JsonSchema>
                        ,pIVar7,(typeSchema->fields)._Schema_k__BackingField);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* JsonSchemaGenerator() */

void Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator__ctor
               (JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Schema::JsonSchemaGenerator::TypeSchema>__List__
            );
  (this->fields)._stack = (IList_1_Newtonsoft_Json_Schema_JsonSchemaGenerator_TypeSchema_ *)this_00;
  return;
}


/* IContractResolver get_ContractResolver() */

IContractResolver *
Assembly-CSharp.dll::Newtonsoft::Json::Schema::JsonSchemaGenerator::
JsonSchemaGenerator_get_ContractResolver(JsonSchemaGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._contractResolver;
  if (pIVar1 == (IContractResolver *)0x0) {
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).cctor_started == 0)
       ) {
      func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    }
    pIVar1 = TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->static_fields->
             _instance;
  }
  return pIVar1;
}

