
/* Boolean CanStartEmote(AvatarLimbManager+EmoteData) */

bool Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_EmoteData *emoteData,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  if ((this->fields).isActive == 0) {
    return 0;
  }
  if ((this->fields).currentRunningEmoteData == (AvatarLimbManager_EmoteData *)0x0) {
    return 1;
  }
  if (emoteData != (AvatarLimbManager_EmoteData *)0x0) {
    if ((emoteData->fields).priority <= (((this->fields).currentRunningEmoteData)->fields).priority)
    {
      return 0;
    }
    pAStack_2 = (((this->fields).currentRunningEmoteData)->fields).emote;
    if (pAStack_2 != (AvatarLimbManager_AvatarEmote *)0x0) {
      pIStack_1 = pAStack_2->klass[1]._0.image;
      (*(code *)(pAStack_2->klass->vtable).StopEmote.method)();
      return 1;
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* AvatarLimbManager+EmoteData CreateEmoteData(AvatarLimbManager+AvatarEmote,
   AvatarLimbManager+LimbRotator, Single, Int16) */

AvatarLimbManager_EmoteData *
Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
          (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_AvatarEmote *emote,
          AvatarLimbManager_LimbRotator *limbRotator,float lifeTime,int16_t priority,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EmoteTypes>);
    func_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEmoteEnd_EmoteTypes_);
    func_?(&TypeInfo__AvatarLimbManager__EmoteData);
    cRam_? = '\x01';
  }
  if (emote != (AvatarLimbManager_AvatarEmote *)0x0) {
    (*(code *)(emote->klass->vtable).Initialize.method)
              (emote,limbRotator,lifeTime,(emote->klass->vtable).StartEmote.methodPtr);
    pAVar1 = (emote->fields).OnEmoteEnd;
    method_00 = TypeInfo__System__Action<EmoteTypes>;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEmoteEnd_EmoteTypes_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (emote->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
    }
    else {
      pAVar1 = (Action_1_EmoteTypes_ *)func_?();
      if (pAVar1 == (Action_1_EmoteTypes_ *)0x0) goto code_?;
      (emote->fields).OnEmoteEnd = pAVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    pAVar4 = (AvatarLimbManager_EmoteData *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pAVar4,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    if (pAVar4 != (AvatarLimbManager_EmoteData *)0x0) {
      (pAVar4->fields).emote = emote;
      func_?(&pAVar4->fields,emote);
      (pAVar4->fields).priority = priority;
      return pAVar4;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pAVar4 = (AvatarLimbManager_EmoteData *)(*pcVar5)();
  return pAVar4;
}


/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CreateLimbEvents
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EmoteTypes>);
    func_?(&
                    MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                   );
    func_?(&TypeInfo__AvatarLimbManager__AvatarNodEmote);
    func_?(&TypeInfo__AvatarLimbManager__AvatarShakeEmote);
    func_?(&TypeInfo__AvatarLimbManager__AvatarWaveEmote);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                   );
    cRam_? = '\x01';
  }
  method_02 = TypeInfo__AvatarLimbManager__AvatarShakeEmote;
  pAVar1 = (AvatarLimbManager_AvatarEmote *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pAVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  method_01 = (MethodInfo *)&UNK_?;
  AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
            (this,pAVar1,limbRotator,2.0,1,(MethodInfo *)0x0);
  if (pAVar1 != (AvatarLimbManager_AvatarEmote *)0x0) {
    pAVar2 = (pAVar1->fields).OnEmoteEnd;
    pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar3,(Object *)headRotationHandler,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_,
               (MethodInfo *)0x0);
    pOVar4 = (Object *)&UNK_?;
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar5 == (Delegate *)0x0) {
      (pAVar1->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_EmoteTypes_ *)func_?();
      if (pAVar2 == (Action_1_EmoteTypes_ *)0x0) goto code_?;
      (pAVar1->fields).OnEmoteEnd = pAVar2;
      iVar6 = func_?();
      if (iVar6 == 0) goto code_?;
    }
    func_?();
    if (pDRam0000000c != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                (pDRam0000000c,1,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                );
      emote = (MethodInfo *)func_?();
      method_00 = emote;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)emote,ExceptionArgument__Enum_obj,method_01);
      AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                ((AvatarLimbManager_AvatarEmoteHandler *)0x0,(AvatarLimbManager_AvatarEmote *)emote,
                 limbRotator,2.0,1,(MethodInfo *)0x0);
      if (emote != (MethodInfo *)0x0) {
        pAVar2 = ((AvatarLimbManager_AvatarEmote__Fields *)&emote->invoker_method)->OnEmoteEnd;
        pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar3,(Object *)headRotationHandler,
                   MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                   ,(MethodInfo *)0x0);
        pOVar4 = (Object *)&UNK_?;
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
        if (pDVar5 == (Delegate *)0x0) {
          ((AvatarLimbManager_AvatarEmote__Fields *)&emote->invoker_method)->OnEmoteEnd =
               (Action_1_EmoteTypes_ *)0x0;
        }
        else {
          pAVar2 = (Action_1_EmoteTypes_ *)func_?();
          if (pAVar2 == (Action_1_EmoteTypes_ *)0x0) goto code_?;
          ((AvatarLimbManager_AvatarEmote__Fields *)&emote->invoker_method)->OnEmoteEnd = pAVar2;
          iVar6 = func_?();
          if (iVar6 == 0) goto code_?;
        }
        func_?();
        if (pDRam0000000c != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__Add
                    (pDRam0000000c,2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                    );
          pAVar1 = (AvatarLimbManager_AvatarEmote *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)pAVar1,ExceptionArgument__Enum_obj,method_00);
          value = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                            ((AvatarLimbManager_AvatarEmoteHandler *)0x0,pAVar1,limbRotator,1.5,2,
                             (MethodInfo *)0x0);
          if (pDRam0000000c != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Object]::Dictionary_2_System_ByteEnum_System_Object__Add
                      (pDRam0000000c,3,(Object *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_Initialize
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__);
    func_?(&MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__);
    cRam_? = '\x01';
  }
  (this->fields).limbManager = limbManager;
  func_?(&this->fields,limbManager);
  (*(code *)(this->klass->vtable).CreateLimbEvents.method)
            (this,limbManager,lookDirectionHandler,pointingHandler,headRotationHandler,limbRotator,
             (this->klass->vtable).UpdateEmotes.methodPtr);
  if (enableChangeHandler == (AvatarEnabledChangeHandler *)0x0) {
    func_?();
    goto code_?;
  }
  pAVar1 = (enableChangeHandler->fields).OnEnabled;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (enableChangeHandler->fields).OnEnabled = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
    (enableChangeHandler->fields).OnEnabled = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) goto code_?;
  }
  func_?();
  pAVar1 = (enableChangeHandler->fields).OnDisabled;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)&(enableChangeHandler->fields).OnEnabled,
             MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__,(MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = (Action *)0x0;
    func_?();
    return;
  }
  pAVar3 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar3 = pAVar1;
  }
  if (pAVar3 != (Action *)0x0) {
    (enableChangeHandler->fields).OnDisabled = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 != (Action *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnDisable
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current._0_4_ = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((DStack_6._current.value == (Object *)0x0) ||
         (pOVar12 = DStack_6._current.value[1].klass, pOVar12 == (Object__Class *)0x0)) break;
      pIVar13 = (pOVar12->_0).image;
      (*(code *)pIVar13[5].nameToClassHashTable)(pOVar12,pIVar13[5].codeGenModule);
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnEmoteEnd(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_OnEmoteEnd
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).emoteDatas;
  pAVar1 = (this->fields).currentRunningEmoteData;
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    pAVar2 = (AvatarLimbManager_EmoteData *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,emoteType,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if (pAVar1 == pAVar2) {
      (this->fields).currentRunningEmoteData = (AvatarLimbManager_EmoteData *)0x0;
      func_?(&(this->fields).currentRunningEmoteData,0);
      if ((this->fields).OnEmoteUpdate != (Action_1_Int32_ *)0x0) {
        pAVar3 = (this->fields).OnEmoteUpdate;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,0,(pAVar3->fields)._._.method);
      }
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    func_?(&TypeInfo__EmoteTypes);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,emoteType,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (this->fields).emoteDatas;
    if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
        (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,emoteType,
                             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                            ), pOVar3 != (Object *)0x0)) &&
       (pOVar3[1].klass != (Object__Class *)0x0)) {
      (*(code *)((pOVar3[1].klass)->_0).image[5].typeCount)();
      pDVar1 = (this->fields).emoteDatas;
      if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        pAVar4 = (AvatarLimbManager_EmoteData *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,emoteType,
                            MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                           );
        (this->fields).currentRunningEmoteData = pAVar4;
        func_?();
        if ((this->fields).OnEmoteStart != (Action_1_String_ *)0x0) {
          pAVar5 = (this->fields).OnEmoteStart;
          mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          (*(pAVar5->fields)._._.invoke_impl)();
        }
        if ((this->fields).OnEmoteUpdate == (Action_1_Int32_ *)0x0) {
          return;
        }
        (*(((this->fields).OnEmoteUpdate)->fields)._._.invoke_impl)();
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StopAllEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_StopAllEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current._0_4_ = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((DStack_6._current.value == (Object *)0x0) ||
         (pOVar12 = DStack_6._current.value[1].klass, pOVar12 == (Object__Class *)0x0)) break;
      pIVar13 = (pOVar12->_0).image;
      (*(code *)pIVar13[5].nameToClassHashTable)(pOVar12,pIVar13[5].codeGenModule);
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void TryStartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_TryStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    cRam_? = '\x01';
  }
  if ((char)emoteType == '\0') {
    return;
  }
  pDVar1 = (this->fields).emoteDatas;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) goto code_?;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,emoteType,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if ((this->fields).isActive == 0) {
    return;
  }
  if ((this->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (*(short *)&pOVar2[1].monitor <= (((this->fields).currentRunningEmoteData)->fields).priority)
    {
      return;
    }
    pAVar3 = (((this->fields).currentRunningEmoteData)->fields).emote;
    if (pAVar3 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
    (*(code *)(pAVar3->klass->vtable).StopEmote.method)(pAVar3);
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    func_?(&TypeInfo__EmoteTypes);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).emoteDatas;
  if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,emoteType,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                      );
    if (bVar4 == 0) {
      return;
    }
    pDVar1 = (this->fields).emoteDatas;
    if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,emoteType,
                             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                            ), pOVar2 != (Object *)0x0)) &&
       (pOVar2[1].klass != (Object__Class *)0x0)) {
      (*(code *)((pOVar2[1].klass)->_0).image[5].typeCount)();
      pDVar1 = (this->fields).emoteDatas;
      if (pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        pAVar5 = (AvatarLimbManager_EmoteData *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,emoteType,
                            MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                           );
        (this->fields).currentRunningEmoteData = pAVar5;
        func_?(&(this->fields).currentRunningEmoteData);
        if ((this->fields).OnEmoteStart != (Action_1_String_ *)0x0) {
          pAVar6 = (this->fields).OnEmoteStart;
          mscorlib.dll::System::Enum::Enum_ToString
                    ((Enum *)0xffffffff,(MethodInfo *)(emoteType & 0xff));
          (*(pAVar6->fields)._._.invoke_impl)();
        }
        if ((this->fields).OnEmoteUpdate == (Action_1_Int32_ *)0x0) {
          return;
        }
        (*(((this->fields).OnEmoteUpdate)->fields)._._.invoke_impl)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current._0_4_ = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((DStack_6._current.value == (Object *)0x0) ||
         (pOVar12 = DStack_6._current.value[1].klass, pOVar12 == (Object__Class *)0x0)) break;
      pIVar13 = (pOVar12->_0).image;
      (*(code *)pIVar13[5].customAttributeCount)(pOVar12,pIVar13[5].metadataHandle);
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AvatarLimbManager+AvatarEmoteHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler__ctor
               (AvatarLimbManager_AvatarEmoteHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).emoteDatas;
  (this->fields).emoteDatas = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)this_00;
  func_?(method_00,this_00);
  (this->fields).isActive = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

