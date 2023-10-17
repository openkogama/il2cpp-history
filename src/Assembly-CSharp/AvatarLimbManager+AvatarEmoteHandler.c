
/* Boolean CanStartEmote(AvatarLimbManager+EmoteData) */

bool Assembly-CSharp.dll::AvatarLimbManager+AvatarEmoteHandler::
     AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
               (AvatarLimbManager_AvatarEmoteHandler *this,AvatarLimbManager_EmoteData *emoteData,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
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
      pMStack_1 = (pAStack_2->klass->vtable).StopEmote.method;
      (*(pAStack_2->klass->vtable).StopEmote.methodPtr)();
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
    (*(emote->klass->vtable).Initialize.methodPtr)
              (emote,limbRotator,lifeTime,(emote->klass->vtable).Initialize.method);
    pAVar1 = (emote->fields).OnEmoteEnd;
    this_00 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__System__Action<EmoteTypes>);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
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
      if (pAVar4 != (AvatarLimbManager_EmoteData *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pAVar4,ExceptionArgument__Enum_obj,unaff_EDI);
        (pAVar4->fields).emote = emote;
        func_?(&pAVar4->fields,emote);
        (pAVar4->fields).priority = priority;
        return pAVar4;
      }
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
  pDVar1 = unaff_EDI;
  emote = (Delegate *)func_?(TypeInfo__AvatarLimbManager__AvatarShakeEmote);
  if (emote == (Delegate *)0x0) {
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)emote,ExceptionArgument__Enum_obj,(MethodInfo *)pDVar1);
    pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                       (this,(AvatarLimbManager_AvatarEmote *)emote,limbRotator,2.0,1,
                        (MethodInfo *)0x0);
    pAVar3 = (emote->fields).method_ptr;
    method_00 = (MethodInfo *)&UNK_?;
    pUVar4 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<EmoteTypes>)
    ;
    unaff_EDI = (Delegate *)0x0;
    if (pUVar4 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (pUVar4,(Object *)headRotationHandler,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_,
               (MethodInfo *)0x0);
    unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (unaff_EDI == (Delegate *)0x0) {
      (emote->fields).method_ptr = (Action_1_EmoteTypes_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_EmoteTypes_ *)func_?(unaff_EDI);
      if (pAVar3 == (Action_1_EmoteTypes_ *)0x0) goto code_?;
      (emote->fields).method_ptr = pAVar3;
      iVar5 = func_?(unaff_EDI);
      if (iVar5 == 0) goto code_?;
    }
    func_?(&emote->fields);
    pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar6,(Object *)0x1,(Object *)pAVar2,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
              );
    unaff_EDI = (Delegate *)func_?(TypeInfo__AvatarLimbManager__AvatarNodEmote);
    if (unaff_EDI == (Delegate *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)unaff_EDI,ExceptionArgument__Enum_obj,method_00);
    AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
              (this,(AvatarLimbManager_AvatarEmote *)unaff_EDI,limbRotator,2.0,1,(MethodInfo *)0x0);
    pDVar1 = (unaff_EDI->fields).method_ptr;
    pUVar4 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<EmoteTypes>)
    ;
    emote = (Delegate *)0x0;
    if (pUVar4 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (pUVar4,(Object *)headRotationHandler,
               MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_,
               (MethodInfo *)0x0);
    emote = mscorlib.dll::System::Delegate::Delegate_Combine
                      (pDVar1,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (emote == (Delegate *)0x0) {
      (unaff_EDI->fields).method_ptr = (void *)0x0;
code_?:
      func_?(&unaff_EDI->fields);
      pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
      if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar1 = (Delegate *)0x2;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar6,(Object *)0x2,(Object *)&UNK_?,
                   MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                  );
        pDVar7 = (Delegate *)&UNK_?;
        emote_00 = (AvatarLimbManager_AvatarEmote *)
                   func_?(TypeInfo__AvatarLimbManager__AvatarWaveEmote);
        emote = (Delegate *)0x0;
        if (emote_00 != (AvatarLimbManager_AvatarEmote *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)emote_00,ExceptionArgument__Enum_obj,in_stack_8);
          unaff_EDI = pDVar1;
          emote = pDVar7;
          pAVar2 = AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                             (this,emote_00,limbRotator,1.5,2,(MethodInfo *)0x0);
          pDVar6 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
          if (pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar6,(Object *)0x3,(Object *)pAVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                      );
            return;
          }
        }
      }
      goto code_?;
    }
    pvVar9 = (void *)func_?(emote);
    if (pvVar9 != (void *)0x0) {
      (unaff_EDI->fields).method_ptr = pvVar9;
      iVar5 = func_?(emote);
      if (iVar5 != 0) goto code_?;
    }
  }
  func_?(emote);
code_?:
  func_?(unaff_EDI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  (*(this->klass->vtable).CreateLimbEvents.methodPtr)
            (this,limbManager,lookDirectionHandler,pointingHandler,headRotationHandler,limbRotator,
             (this->klass->vtable).CreateLimbEvents.method);
  if (enableChangeHandler != (AvatarEnabledChangeHandler *)0x0) {
    pAVar1 = (enableChangeHandler->fields).OnEnabled;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar2,(Object *)this,MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnEnable__
                 ,(MethodInfo *)0x0);
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
      if (pNVar2 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar2,(Object *)this,
                   MethodInfo__AvatarLimbManager__AvatarEmoteHandler__OnDisable__,(MethodInfo *)0x0)
        ;
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
        goto code_?;
      }
    }
  }
  func_?();
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (Object *)0x0;
  uStack_8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar9->_dictionary;
    auStack_6._4_4_ = pDVar9->_version;
    auStack_6._8_4_ = pDVar9->_index;
    pOStack_7 = (pDVar9->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((Object *)uStack_8 == (Object *)0x0) ||
         (pOVar14 = ((Object *)uStack_8)[1].klass, pOVar14 == (Object__Class *)0x0)) break;
      pIVar15 = (pOVar14->_0).image;
      (*(code *)pIVar15[5].metadataHandle)(pOVar14,pIVar15[5].nameToClassHashTable);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)emoteType,
                       MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__ContainsKey_EmoteTypes_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).emoteDatas;
    if (((pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
        (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType,
                             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                            ), pOVar3 != (Object *)0x0)) &&
       (pOVar3[1].klass != (Object__Class *)0x0)) {
      (*(code *)((pOVar3[1].klass)->_0).image[5].assembly)();
      pDVar2 = (this->fields).emoteDatas;
      if (pDVar2 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
        pAVar4 = (AvatarLimbManager_EmoteData *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,emoteType,
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (Object *)0x0;
  uStack_8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar9->_dictionary;
    auStack_6._4_4_ = pDVar9->_version;
    auStack_6._8_4_ = pDVar9->_index;
    pOStack_7 = (pDVar9->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((Object *)uStack_8 == (Object *)0x0) ||
         (pOVar14 = ((Object *)uStack_8)[1].klass, pOVar14 == (Object__Class *)0x0)) break;
      pIVar15 = (pOVar14->_0).image;
      (*(code *)pIVar15[5].metadataHandle)(pOVar14,pIVar15[5].nameToClassHashTable);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    (*(pAVar3->klass->vtable).StopEmote.methodPtr)(pAVar3);
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
    func_?(&TypeInfo__EmoteTypes);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)emoteType,
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
      (*(code *)((pOVar2[1].klass)->_0).image[5].assembly)();
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
  auStack_6._0_4_ = (Object__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = 0;
  pOStack_7 = (Object *)0x0;
  uStack_8._0_4_ = (Object *)0x0;
  uStack_8._4_4_ = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).emoteDatas;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_10,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__GetEnumerator__
                       );
    uStack_11 = 0;
    auStack_6._0_4_ = pDVar9->_dictionary;
    auStack_6._4_4_ = pDVar9->_version;
    auStack_6._8_4_ = pDVar9->_index;
    pOStack_7 = (pDVar9->_current).key;
    uStack_8 = *(undefined8 *)&(pDVar9->_current).value;
    uStack_1 = 1;
    pOStack_12 = (Object *)auStack_6;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         auStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)auStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManager::EmoteData>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (((Object *)uStack_8 == (Object *)0x0) ||
         (pOVar14 = ((Object *)uStack_8)[1].klass, pOVar14 == (Object__Class *)0x0)) break;
      pIVar15 = (pOVar14->_0).image;
      (*(code *)pIVar15[5].exportedTypeCount)(pOVar14,pIVar15[5].customAttributeCount);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  this_00 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                           );
  if (this_00 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields).emoteDatas;
    (this->fields).emoteDatas = this_00;
    func_?(method_00,this_00);
    (this->fields).isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

