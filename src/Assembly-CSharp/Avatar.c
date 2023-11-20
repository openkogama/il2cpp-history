
/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::Avatar::Avatar_HasModifierEffect
               (Avatar *this,AvatarModifierEffect__Enum modifierEffect,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields).modifierEffectCount;
  if (pBVar2 == (Byte__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (modifierEffect < pBVar2->max_length) {
    return pBVar2->vector[modifierEffect] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::Avatar::Avatar_Initialize
               (Avatar *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                   );
    cRam_? = '\x01';
  }
  (this->fields).mvAvatar = mvAvatar;
  func_?(&(this->fields).mvAvatar,mvAvatar);
  if (((mvAvatar != (MVAvatar *)0x0) && (pMVar1 = (mvAvatar->fields).body, pMVar1 != (MVBody *)0x0))
     && (pAVar2 = (this->fields).avatarFader, pAVar2 != (AvatarFader *)0x0)) {
    pTVar3 = (pMVar1->fields)._._._.transform;
    (pAVar2->fields).bodyTransform = pTVar3;
    func_?(&(pAVar2->fields).bodyTransform,pTVar3);
    (this->fields).isLocal = isLocal;
    pIVar4 = (InteractionDataHandlerBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        InteractionDataHandlerBase_MethodInfo__UnityEngine__Component__GetComponent<InteractionDataHandlerBase>__
                       );
    (this->fields).interactionDataHandler = pIVar4;
    func_?(&(this->fields).interactionDataHandler,pIVar4);
    pCVar5 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields).avatarCollider = pCVar5;
    func_?(&(this->fields).avatarCollider,pCVar5);
    this_00 = (this->fields).avatarLevelUp;
    if (this_00 != (AvatarLevelUp *)0x0) {
      AvatarLevelUp::AvatarLevelUp_Init
                (this_00,(mvAvatar->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
      pWVar6 = (this->fields).waterSplashComponent;
      if (pWVar6 != (WaterSplashComponent *)0x0) {
        (*(code *)(pWVar6->klass->vtable).Initialize.method)
                  (pWVar6,this,(pWVar6->klass->vtable).Start.methodPtr);
        pAVar7 = (this->fields).avatarUIHandler;
        if (pAVar7 != (AvatarUIHandler *)0x0) {
          (*(code *)(pAVar7->klass->vtable).Initialize.method)
                    (pAVar7,(this->fields).isLocal,mvAvatar,(mvAvatar->fields)._._._.ownerActorNr,
                     (this->fields).chatBubbleAnchor,(pAVar7->klass->vtable).Activate.methodPtr);
          this_01 = (this->fields).chatBubbleAnchor;
          if (this_01 != (ChatAnchor *)0x0) {
            ChatAnchor::ChatAnchor_Initialize(this_01,isLocal,this,(MethodInfo *)0x0);
            this_02 = (this->fields).avatarPaused;
            if (this_02 != (AvatarPaused *)0x0) {
              WorldObjectTypes::Avatar::Shared::AvatarPaused::AvatarPaused_Init
                        (this_02,(mvAvatar->fields)._._._.ownerActorNr,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_OnEnterVehicle(Avatar *this,MethodInfo *method)

{
  this_00 = (this->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnExitVehicle() */

void Assembly-CSharp.dll::Avatar::Avatar_OnExitVehicle(Avatar *this,MethodInfo *method)

{
  this_00 = (this->fields).waterSplashComponent;
  if (this_00 != (WaterSplashComponent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_StartBlinking
               (Avatar *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if ((pMVar1 != (MVAvatar *)0x0) && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StartBlinking(this_00,type,duration,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::Avatar::Avatar_StopBlinking
               (Avatar *this,BlinkType__Enum type,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if ((((pMVar1 != (MVAvatar *)0x0) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
      (pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0)) &&
     (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 != (AvatarBlinker *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pAVar4->fields)._.blinkers;
    if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                           ), pOVar5 != (Object *)0x0)) {
      pOVar5[2].klass = (Object__Class *)0x0;
      pOVar5[1].monitor = (MonitorData *)0x0;
      return;
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateModifiers(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Avatar::Avatar_UpdateModifiers
               (Avatar *this,Dictionary_2_System_Object_System_Object_ *newModifiers,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffee0;
  puVar5 = &stack0xfffffee0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&TypeRef__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__Type);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Byte__Array__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Il2CppArrayBounds *)0x0;
  auStack_6._12_4_ = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)0x0;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pAVar8 = (AvatarModifierPackage_AvatarModifier__Array *)
           func_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
  pAStack_9 = pAVar8;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pAVar8,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).modifiers;
  pAStack_10 = pAVar8;
  pAStack_11 = pAVar8;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                          ),
     this_02 !=
     (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffff38,
                        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                       );
    uStack_13 = 0;
    auStack_6._0_4_ = pDVar12->_dictionary;
    auStack_6._4_4_ = pDVar12->_index;
    auStack_6._8_4_ = pDVar12->_version;
    auStack_6._12_4_ = pDVar12->_currentValue;
    uStack_1 = 1;
    pBStack_14 = (Byte__Array *)auStack_6;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                   UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                               *)auStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__MoveNext__
                             ), bVar15 != 0) {
      EStack_16.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
      pDStack_17 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                   auStack_6._12_4_;
      EStack_16.monitor = (MonitorData *)0xffffffff;
      in_stack_18 =
           (AvatarModifierPackage_AvatarModifier__Array *)
           mscorlib.dll::System::Enum::Enum_ToString(&EStack_16,(MethodInfo *)0x0);
      pSStack_19 = mscorlib.dll::System::String::String_Concat_3
                             (::StringLiteral__,(String *)in_stack_18,(MethodInfo *)0x0);
      if (newModifiers == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      in_stack_20 =
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         newModifiers,(Object *)pSStack_19,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      pIVar21 = TypeRef__AvatarModifierPackageType;
      if (bVar15 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAStack_22 = (AvatarModifier *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar21,(MethodInfo *)0x0);
        if (pSStack_19 == (String *)0x0) goto code_?;
        value = mscorlib.dll::System::String::String_TrimStart(pSStack_19,0x5f,(MethodInfo *)0x0);
        if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar23 = mscorlib.dll::System::Enum::Enum_Parse((Type *)pAStack_22,value,(MethodInfo *)0x0)
        ;
        if (pOVar23 == (Object *)0x0) goto code_?;
        if ((pOVar23->klass->_0).element_class !=
            (TypeInfo__AvatarModifierPackageType->_0).element_class) goto code_?;
        puVar24 = (undefined4 *)func_?();
        pAVar8 = pAStack_9;
        if (pAStack_9 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
        in_stack_18 = (AvatarModifierPackage_AvatarModifier__Array *)*puVar24;
        func_?();
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__Dispose__
               ,(MethodInfo *)in_stack_18);
    uStack_1 = 0xffffffff;
    pSStack_19 = (String *)0x0;
    if (pAVar8 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      for (; (int)pSStack_19 < (int)pAStack_11->max_length;
          pSStack_19 = (String *)((int)&pSStack_19->klass + 1)) {
        key = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         pAStack_9,(int32_t)pSStack_19,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                        );
        pDVar25 = (this->fields).modifiers;
        if ((pDVar25 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) ||
           (this_03 = (AvatarModifier *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar25,
                                 (Int32Enum__Enum)key,
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                                ), this_03 == (AvatarModifier *)0x0)) goto code_?;
        in_stack_20 = (MethodInfo *)&UNK_?;
        AvatarModifier::AvatarModifier_Deactivate(this_03,this,(MethodInfo *)0x0);
        pDVar25 = (this->fields).modifiers;
        if (pDVar25 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar25,(Int32Enum__Enum)key,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                  );
        this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                  (this->fields).currentModifierByteState;
        if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
        Dictionary_2_System_Int32Enum_System_Single__Remove
                  (this_01,(Int32Enum__Enum)key,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                  );
        if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pAVar26 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                            ((AvatarModifierPackage *)&stack0xfffffeec,
                             (AvatarModifierPackageType__Enum)key,(MethodInfo *)0x0);
        iVar27 = 0;
        pAVar8 = pAVar26->avatarModifiers;
        while( true ) {
          if (pAVar8 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
          if ((int)pAVar8->max_length <= iVar27) break;
          pAStack_10 = (AvatarModifierPackage_AvatarModifier__Array *)
                       (this->fields).modifierEffectCount;
          func_?();
          if (pAStack_10 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
          goto code_?;
          pcVar28 = (char *)func_?();
          *pcVar28 = *pcVar28 + -1;
          iVar27 = iVar27 + 1;
        }
      }
      if (newModifiers != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                  Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffff30,
                             (Dictionary_2_System_UInt32_System_Object_ *)newModifiers,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                            );
        EStack_16.monitor = (MonitorData *)0x0;
        DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar29->_dictionary;
        DStack_7._version = pDVar29->_version;
        DStack_7._index = pDVar29->_index;
        DStack_7._current.key = (Object *)(pDVar29->_current).key;
        DStack_7._16_8_ = *(undefined8 *)&(pDVar29->_current).value;
        uStack_1 = 4;
        pDStack_17 = &DStack_7;
        do {
          bVar15 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          pIVar21 = TypeRef__AvatarModifierPackageType;
          if (bVar15 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,in_stack_20);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pSStack_19 = (String *)DStack_7._current.value;
          if ((AvatarModifierPackage_AvatarModifier__Array *)DStack_7._current.key ==
              (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
            pAStack_9 = (AvatarModifierPackage_AvatarModifier__Array *)DStack_7._current.key;
          }
          else {
            pAStack_9 = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
            if ((String__Class *)(DStack_7._current.key)->klass == TypeInfo__System__String) {
              pAStack_9 = (AvatarModifierPackage_AvatarModifier__Array *)DStack_7._current.key;
            }
            if (pAStack_9 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
            goto code_?;
          }
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAStack_11 = (AvatarModifierPackage_AvatarModifier__Array *)
                       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar21,(MethodInfo *)0x0);
          if (pAStack_9 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) break;
          in_stack_20 = (MethodInfo *)0x5f;
          method_00 = (MethodInfo *)
                      mscorlib.dll::System::String::String_TrimStart
                                ((String *)pAStack_9,0x5f,(MethodInfo *)0x0);
          if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar23 = mscorlib.dll::System::Enum::Enum_Parse
                              ((Type *)pAStack_11,(String *)method_00,(MethodInfo *)0x0);
          if (pOVar23 == (Object *)0x0) break;
          if ((pOVar23->klass->_0).element_class !=
              (TypeInfo__AvatarModifierPackageType->_0).element_class) goto code_?;
          pIVar30 = (Int32Enum__Enum *)func_?();
          pAStack_9 = (AvatarModifierPackage_AvatarModifier__Array *)*pIVar30;
          pDVar25 = (this->fields).modifiers;
          if (pDVar25 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) break;
          bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar25,
                             (Int32Enum__Enum)pAStack_9,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                            );
          if (bVar15 == 0) {
            pAStack_22 = AvatarModifier::AvatarModifier_CreateFromType
                                   ((AvatarModifierPackageType__Enum)pAStack_9,this,
                                    (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)pAStack_22,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar15 != 0) {
              if (pAStack_22 == (AvatarModifier *)0x0) break;
              cVar31 = func_?();
              if (cVar31 == '\0') {
                obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAStack_22,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                          ((Object_1 *)obj,(MethodInfo *)0x0);
              }
              else {
                pAStack_11 = (AvatarModifierPackage_AvatarModifier__Array *)
                             UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pAStack_22,(MethodInfo *)0x0);
                value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pAStack_11 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          ((Transform *)pAStack_11,value_00,(MethodInfo *)0x0);
                pAStack_11 = (AvatarModifierPackage_AvatarModifier__Array *)
                             UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pAStack_22,(MethodInfo *)0x0);
                pVVar32 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                          MVWorldObject_get_WorldPosition
                                    ((Vector3 *)&stack0xffffff3c,(MVWorldObject *)0x0,method_00);
                if (pAStack_11 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) break;
                in_stack_20 = (MethodInfo *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          ((Transform *)pAStack_11,*pVVar32,(MethodInfo *)0x0);
                pDVar25 = (this->fields).modifiers;
                if (pDVar25 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) break;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar25,
                           (Int32Enum__Enum)pAStack_9,(Object *)pAStack_22,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                          );
                pBStack_14 = (Byte__Array *)(this->fields).currentModifierByteState;
                if ((pBStack_14 == (Byte__Array *)0x0) ||
                   (pAStack_11 = (AvatarModifierPackage_AvatarModifier__Array *)
                                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                   , pSStack_19 == (String *)0x0)) break;
                if ((pSStack_19->klass->_0).element_class !=
                    (TypeInfo__System__Byte->_0).element_class) goto code_?;
                puVar33 = (uint8_t *)func_?();
                uStack_34 = *puVar33;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Byte]::Dictionary_2_System_Int32Enum_System_Byte__Add
                          ((Dictionary_2_System_Int32Enum_System_Byte_ *)pBStack_14,
                           (Int32Enum__Enum)pAStack_9,*puVar33,(MethodInfo *)pAStack_11);
                AvatarModifier::AvatarModifier_Activate(pAStack_22,this,(MethodInfo *)0x0);
                packageType = func_?();
                if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pAVar26 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                    ((AvatarModifierPackage *)&stack0xfffffeec,packageType,
                                     (MethodInfo *)0x0);
                pAStack_11 = pAVar26->avatarModifiers;
                iVar27 = 0;
                if (pAStack_11 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) break;
                for (; iVar27 < (int)pAStack_11->max_length; iVar27 = iVar27 + 1) {
                  pBStack_14 = (this->fields).modifierEffectCount;
                  func_?();
                  if (pBStack_14 == (Byte__Array *)0x0) goto code_?;
                  pcVar28 = (char *)func_?();
                  *pcVar28 = *pcVar28 + '\x01';
                }
              }
            }
          }
          else {
            pDVar35 = (this->fields).currentModifierByteState;
            if ((pDVar35 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0) ||
               (uStack_36 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Byte]::
                            Dictionary_2_System_Int32Enum_System_Byte__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar35,
                                       (Int32Enum__Enum)pAStack_9,
                                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                                      ), pSStack_19 == (String *)0x0)) break;
            if ((pSStack_19->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
            goto code_?;
            puVar33 = (uint8_t *)func_?();
            if (*puVar33 != uStack_36) {
              pDVar25 = (this->fields).modifiers;
              if ((pDVar25 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0) ||
                 (pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar25,
                                       (Int32Enum__Enum)pAStack_9,
                                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                                      ), pOVar23 == (Object *)0x0)) break;
              func_?();
              pDVar35 = (this->fields).currentModifierByteState;
              if (pDVar35 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0) break;
              pAStack_11 = (AvatarModifierPackage_AvatarModifier__Array *)
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
              ;
              if ((pSStack_19->klass->_0).element_class !=
                  (TypeInfo__System__Byte->_0).element_class) goto code_?;
              puVar33 = (uint8_t *)func_?();
              pAStack_10 = (AvatarModifierPackage_AvatarModifier__Array *)
                           CONCAT31(pAStack_10._1_3_,*puVar33);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Byte]::Dictionary_2_System_Int32Enum_System_Byte__set_Item
                        ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar35,
                         (Int32Enum__Enum)pAStack_9,*puVar33,(MethodInfo *)pAStack_11);
            }
          }
        } while( true );
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void VisualizeBulletImpact(VoxelHit, Ray, Int32, Single) */

void Assembly-CSharp.dll::Avatar::Avatar_VisualizeBulletImpact
               (Avatar *this,VoxelHit voxelHit,Ray lineOfFire,int32_t shooterActorNumber,
               float damage,MethodInfo *method)

{
  pAVar1 = (this->fields).bulletImpactVisualizer;
  if (pAVar1 != (AvatarBulletImpactVisualizer *)0x0) {
    (*(code *)(pAVar1->klass->vtable).VisualizeBulletImpact_1.method)(pAVar1);
    return;
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Avatar() */

void Assembly-CSharp.dll::Avatar::Avatar__ctor(Avatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  (this->fields).modifiers = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)pDVar1;
  func_?(&(this->fields).modifiers,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
            );
  (this->fields).currentModifierByteState =
       (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)pDVar1;
  func_?(&(this->fields).currentModifierByteState,pDVar1);
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1b);
  (this->fields).modifierEffectCount = pBVar2;
  func_?(&(this->fields).modifierEffectCount,pBVar2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Bounds get_Bounds() */

Bounds * Assembly-CSharp.dll::Avatar::Avatar_get_Bounds
                   (Bounds *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    pfVar2 = (float *)(*(code *)(pMVar1->klass->vtable).GetLocalBounds.method)
                                (auStack_3,pMVar1,3,(pMVar1->klass->vtable).Select.methodPtr);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    (__return_storage_ptr__->m_Center).x = *pfVar2;
    (__return_storage_ptr__->m_Center).y = fVar4;
    (__return_storage_ptr__->m_Center).z = fVar5;
    (__return_storage_ptr__->m_Extents).x = fVar6;
    fVar4 = pfVar2[5];
    (__return_storage_ptr__->m_Extents).y = pfVar2[4];
    (__return_storage_ptr__->m_Extents).z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pBVar8 = (Bounds *)(*pcVar7)();
  return pBVar8;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_get_Position
                    (Vector3 *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::Avatar::Avatar_get_Velocity
                    (Vector3 *__return_storage_ptr__,Avatar *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 != (MVAvatar *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                       (auStack_3,pMVar1,(pMVar1->klass->vtable).OnAnimationChange.methodPtr);
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}

