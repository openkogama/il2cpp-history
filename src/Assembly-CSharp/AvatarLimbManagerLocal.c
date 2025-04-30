
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_Initialize
               (AvatarLimbManagerLocal *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<float>);
    func_?(&TypeInfo__System__Action<System::String>);
    func_?(&TypeInfo__System__Action<UnityEngine::Quaternion>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator);
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
                   );
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal);
    func_?(&MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__);
    func_?(&MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__);
    func_?(&MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__);
    func_?(&MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_);
    func_?(&MethodInfo__AvatarLimbManagerLocal__SynchronizeHasHandEquippableValue_bool_);
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                   );
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_
                   );
    func_?(&MethodInfo__AvatarLimbManager__OnStartEmote_System__String_);
    func_?(&
                    MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
                   );
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    func_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator);
    func_?(&TypeInfo__ChatCommandManager);
    cRam_? = '\x01';
  }
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  method_01 = TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator;
  value = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  ppAVar1 = &(this->fields).headRotationCalculator;
  *ppAVar1 = value;
  func_?(ppAVar1,value);
  pAVar2 = (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)
            func_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  (pAVar2->fields).yawRotation.x = (pQVar3->identityQuaternion).x;
  (pAVar2->fields).yawRotation.y = fVar4;
  (pAVar2->fields).yawRotation.z = fVar5;
  (pAVar2->fields).yawRotation.w = fVar6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar3->identityQuaternion).y;
  fVar5 = (pQVar3->identityQuaternion).z;
  fVar6 = (pQVar3->identityQuaternion).w;
  (pAVar2->fields).pitchRotation.x = (pQVar3->identityQuaternion).x;
  (pAVar2->fields).pitchRotation.y = fVar4;
  (pAVar2->fields).pitchRotation.z = fVar5;
  (pAVar2->fields).pitchRotation.w = fVar6;
  MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
            ((LogicEvaluateInputSignalsAnd *)pAVar2,(MethodInfo *)0x0);
  ppAVar7 = &(this->fields).headRotationHandler;
  *ppAVar7 = pAVar2;
  func_?();
  pAVar2 = *ppAVar7;
  if (pAVar2 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    (*(code *)(pAVar2->klass->vtable).Initialize.method)();
    method_02 = TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator;
    value_00 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    ppAVar8 = &(this->fields).pointingRotationCalculator;
    *ppAVar8 = value_00;
    func_?(ppAVar8,value_00);
    this_01 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
              func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar3->identityQuaternion).y;
    fVar5 = (pQVar3->identityQuaternion).z;
    fVar6 = (pQVar3->identityQuaternion).w;
    (this_01->fields).yawRotation.x = (pQVar3->identityQuaternion).x;
    (this_01->fields).yawRotation.y = fVar4;
    (this_01->fields).yawRotation.z = fVar5;
    (this_01->fields).yawRotation.w = fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar3->identityQuaternion).y;
    fVar5 = (pQVar3->identityQuaternion).z;
    fVar6 = (pQVar3->identityQuaternion).w;
    (this_01->fields).pitchRotation.x = (pQVar3->identityQuaternion).x;
    (this_01->fields).pitchRotation.y = fVar4;
    (this_01->fields).pitchRotation.z = fVar5;
    (this_01->fields).pitchRotation.w = fVar6;
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler__ctor
              ((AvatarLimbManager_AvatarPointingHandler *)this_01,(MethodInfo *)0x0);
    ppAVar9 = &(this->fields).pointingHandler;
    *ppAVar9 = this_01;
    func_?();
    if (*ppAVar9 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
    (*(code *)((*ppAVar9)->klass->vtable).Initialize.method)();
    func_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_02 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)func_?();
    pMVar10 = 
    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
              );
    (pMVar10->field8_0x20).genericMethod = (Il2CppGenericMethod *)this_02;
    func_?();
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              ((AvatarLimbManager_AvatarEmoteHandler *)this_02,(MethodInfo *)0x0);
    (this->fields)._.emoteHandler = (AvatarLimbManager_AvatarEmoteHandler *)this_02;
    func_?();
    this_00 = (this->fields)._.emoteHandler;
    if (this_00 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (this_00,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)*ppAVar9,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,(AvatarEnabledChangeHandler *)0x0,(MethodInfo *)0x0);
    method_00 = TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal;
    pAVar11 = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    ppAVar12 = &(this->fields).dataManager;
    *ppAVar12 = pAVar11;
    func_?();
    pAVar11 = *ppAVar12;
    if (pAVar11 == (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) goto code_?;
    pAVar13 = &pAVar11->fields;
    pAVar13->limbRotationRuntimeData = (LimbRotationRuntimeData *)ppAVar9;
    func_?();
    ppAVar14 = &(this->fields).DelayHeadRotationNetworkMessage;
    pAVar15 = *ppAVar14;
    object = (TypeInfo__System__Action<float>->_0).image;
    pUVar16 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar16,(Object *)object,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
               ,(MethodInfo *)0x0);
    puVar17 = (undefined4 *)&UNK_?;
    pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar15,(Delegate *)pUVar16,(MethodInfo *)0x0);
    if (pDVar18 != (Delegate *)0x0) {
      pAVar15 = (Action_1_Single_ *)func_?();
      if (pAVar15 != (Action_1_Single_ *)0x0) {
        *ppAVar14 = pAVar15;
        iVar19 = func_?();
        if (iVar19 != 0) goto code_?;
      }
      goto code_?;
    }
    *ppAVar14 = (Action_1_Single_ *)0x0;
code_?:
    func_?();
    pDVar18 = pDRam00000048;
    object_00 = (Object *)*puVar17;
    pUVar16 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar16,object_00,
               MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
               ,(MethodInfo *)0x0);
    pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar18,(Delegate *)pUVar16,(MethodInfo *)0x0);
    if (pDVar18 == (Delegate *)0x0) {
      _UNK_? = 0;
    }
    else {
      iVar19 = func_?();
      if (iVar19 == 0) goto code_?;
      _UNK_? = iVar19;
      iVar19 = func_?();
      if (iVar19 == 0) goto code_?;
    }
    func_?();
    pAVar20 = TypeInfo__System__Action<System::String>;
    pLVar21 = pAVar13->limbRotationRuntimeData;
    if (pLVar21 == (LimbRotationRuntimeData *)0x0) goto code_?;
    pDVar18 = (Delegate *)(pLVar21->fields).HasHandEquippableItem;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,(Object *)0x0,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
               (MethodInfo *)0x0);
    pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar18,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar18 == (Delegate *)0x0) {
      (pAVar20->_0).this_arg.data.dummy = (void *)0x0;
code_?:
      func_?();
      pAVar22 = TypeInfo__System__Action<UnityEngine::Quaternion>;
      if (iRam_? == 0) goto code_?;
      pDVar18 = *(Delegate **)(iRam_? + 0x3c);
      pUVar23 = (UnityAction_1_UnityEngine_Color_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
      UnityAction_1_UnityEngine_Color___ctor
                (pUVar23,(Object *)0x0,
                 MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                 ,(MethodInfo *)0x0);
      pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar18,(Delegate *)pUVar23,(MethodInfo *)0x0);
      if (pDVar18 == (Delegate *)0x0) {
        (pAVar22->_0).klass = (Il2CppClass *)0x0;
code_?:
        func_?();
        pAVar22 = TypeInfo__System__Action<UnityEngine::Quaternion>;
        if (iRam_? == 0) goto code_?;
        pDVar18 = *(Delegate **)(iRam_? + 0x68);
        pUVar23 = (UnityAction_1_UnityEngine_Color_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
        UnityAction_1_UnityEngine_Color___ctor
                  (pUVar23,(Object *)0x0,
                   MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_,
                   (MethodInfo *)0x0);
        pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar18,(Delegate *)pUVar23,(MethodInfo *)0x0);
        if (pDVar18 == (Delegate *)0x0) {
          (pAVar22->_1).unity_user_data = (void *)0x0;
code_?:
          func_?();
          pAVar24 = TypeInfo__System__Action<bool>;
          if (iRam_? == 0) goto code_?;
          pDVar18 = *(Delegate **)(iRam_? + 100);
          pUVar25 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar25,(Object *)0x0,
                     MethodInfo__AvatarLimbManagerLocal__SynchronizeHasHandEquippableValue_bool_,
                     (MethodInfo *)0x0);
          pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar18,(Delegate *)pUVar25,(MethodInfo *)0x0);
          if (pDVar18 == (Delegate *)0x0) {
            (pAVar24->_1).typeHierarchy = (Il2CppClass **)0x0;
code_?:
            func_?();
            pAVar26 = TypeInfo__System__Action<int>;
            if (iRam_? == 0) goto code_?;
            pDVar18 = *(Delegate **)(iRam_? + 0x1c);
            pUVar25 = (UnityAction_1_System_Int32Enum_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar25,(Object *)0x0,
                       MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_,(MethodInfo *)0x0);
            pDVar18 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar18,(Delegate *)pUVar25,(MethodInfo *)0x0);
            if (pDVar18 == (Delegate *)0x0) {
              (pAVar26->_0).this_arg.attrs = 0;
              (pAVar26->_0).this_arg.type = 0;
              (pAVar26->_0).this_arg.field_0x7 = 0;
code_?:
              func_?();
              if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pAVar27 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                  (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
              pNVar28 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar28,(Object *)0x0,
                         MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,(MethodInfo *)0x0)
              ;
              pAVar29 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar27,(Delegate *)pNVar28,(MethodInfo *)0x0);
              pAVar27 = (Action *)0x0;
              if (pAVar29 == (Action *)0x0) {
code_?:
                ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                          (ChatCommand__Enum_StartShake,pAVar27,(MethodInfo *)0x0);
                pAVar27 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                    (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
                pNVar28 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar28,(Object *)0x0,
                           MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,(MethodInfo *)0x0)
                ;
                pAVar29 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar27,(Delegate *)pNVar28,(MethodInfo *)0x0);
                pAVar27 = (Action *)0x0;
                if (pAVar29 != (Action *)0x0) {
                  if (pAVar29->klass == TypeInfo__System__Action) {
                    pAVar27 = pAVar29;
                  }
                  if (pAVar27 == (Action *)0x0) goto code_?;
                }
                ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                          (ChatCommand__Enum_StartNod,pAVar27,(MethodInfo *)0x0);
                pAVar27 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                    (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
                pNVar28 = (NavMesh_OnNavMeshPreUpdate *)func_?();
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar28,(Object *)0x0,
                           MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,(MethodInfo *)0x0
                          );
                pAVar29 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar27,(Delegate *)pNVar28,(MethodInfo *)0x0);
                pAVar27 = (Action *)0x0;
                if (pAVar29 == (Action *)0x0) {
code_?:
                  ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                            (ChatCommand__Enum_StartWave,pAVar27,(MethodInfo *)0x0);
                  return;
                }
                if (pAVar29->klass == TypeInfo__System__Action) {
                  pAVar27 = pAVar29;
                }
                if (pAVar27 != (Action *)0x0) goto code_?;
              }
              else {
                if (pAVar29->klass == TypeInfo__System__Action) {
                  pAVar27 = pAVar29;
                }
                if (pAVar27 != (Action *)0x0) goto code_?;
              }
              goto code_?;
            }
            iVar19 = func_?();
            if (iVar19 == 0) goto code_?;
            (pAVar26->_0).this_arg.attrs = (short)iVar19;
            (pAVar26->_0).this_arg.type = (char)((uint)iVar19 >> 0x10);
            (pAVar26->_0).this_arg.field_0x7 = (char)((uint)iVar19 >> 0x18);
            iVar19 = func_?();
            if (iVar19 != 0) goto code_?;
            goto code_?;
          }
          ppIVar30 = (Il2CppClass **)func_?();
          if (ppIVar30 == (Il2CppClass **)0x0) goto code_?;
          (pAVar24->_1).typeHierarchy = ppIVar30;
          iVar19 = func_?();
          if (iVar19 != 0) goto code_?;
          goto code_?;
        }
        pvVar31 = (void *)func_?();
        if (pvVar31 == (void *)0x0) goto code_?;
        (pAVar22->_1).unity_user_data = pvVar31;
        iVar19 = func_?();
        if (iVar19 != 0) goto code_?;
        goto code_?;
      }
      pIVar32 = (Il2CppClass *)func_?();
      if (pIVar32 == (Il2CppClass *)0x0) goto code_?;
      (pAVar22->_0).klass = pIVar32;
      iVar19 = func_?();
      if (iVar19 != 0) goto code_?;
      goto code_?;
    }
    pvVar31 = (void *)func_?();
    if (pvVar31 == (void *)0x0) goto code_?;
    (pAVar20->_0).this_arg.data.dummy = pvVar31;
    iVar19 = func_?();
    if (iVar19 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnNodChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnNodChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).StartEmote.method)(this,2,this->klass[1]._0.image);
  return;
}


/* Void OnWaveChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnWaveChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).StartEmote.method)(this,3,this->klass[1]._0.image);
  return;
}


/* Void SetHandEquippableItem(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SetHandEquippableItem
               (AvatarLimbManagerLocal *this,bool value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).pointingHandler;
  if (pAVar2 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    pAVar3 = (pAVar2->fields).OnHasHandEquippableItemChange;
    if (pAVar3 != (Action_1_Boolean_ *)0x0) {
      puStack_1 = (pAVar3->fields)._._.method;
      uStack_4 = _value;
      pvStack_5 = (pAVar3->fields)._._.method_code;
      (*(pAVar3->fields)._._.invoke_impl)();
    }
    return;
  }
  uVar6 = func_?(&pvStack_5);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartEmote
               (AvatarLimbManagerLocal *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Enum__Class *)(this->fields)._.emoteHandler;
  if (this_00 == (Enum__Class *)0x0) {
    func_?();
    this_00 = extraout_EDX_00;
code_?:
    pEStack_1 = (EmoteTypes__Enum__Class *)this_00;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__Class *)(this_00->_0).image;
  bVar4 = (TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).naturalAligment;
  if (((pAVar3->_1).naturalAligment < bVar4) ||
     ((pAVar3->_1).typeHierarchy[bVar4 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal))
  goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmoteTypes);
    func_?(&StringLiteral_Could_not_start_and_network_);
    func_?(&StringLiteral___Please_add_it_to_the_StartEmot);
    cRam_? = '\x01';
  }
  EVar5 = emoteType & 0xff;
  if (EVar5 == EmoteTypes__Enum_Shake) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar6 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)(this_00->_0).namespaze;
    if (pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar7 = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,1,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
      method_00 = (MethodInfo *)&UNK_?;
      bVar8 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this_00,pAVar7,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this_00,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar9 = (((AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__Fields *)&(this_00->_0).name)->_)
                .limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar9 != (AvatarLimbManager *)0x0) {
        bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar10 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar9->klass->_1).naturalAligment < bVar4) ||
           ((pAVar9->klass->_1).typeHierarchy[bVar4 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar6 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)(this_00->_0).namespaze;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar9[1].fields.emoteHandler;
        if (pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
        goto code_?;
      }
    }
  }
  else {
    if (EVar5 != EmoteTypes__Enum_Nod) {
      if (EVar5 != EmoteTypes__Enum_Wave) {
        pEStack_1 = TypeInfo__EmoteTypes;
        pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pEStack_1,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_start_and_network_,pSVar11,
                            StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar11,(MethodInfo *)0x0);
        return;
      }
      AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
      AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart
                ((AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)this_00,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar6 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)(this_00->_0).namespaze;
    if (pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar7 = (AvatarLimbManager_EmoteData *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,2,
                           MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                          );
      method_00 = (MethodInfo *)&UNK_?;
      bVar8 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this_00,pAVar7,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this_00,EmoteTypes__Enum_Nod,
                 (MethodInfo *)0x0);
      pAVar9 = (((AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__Fields *)&(this_00->_0).name)->_)
                .limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar9 != (AvatarLimbManager *)0x0) {
        bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        pAVar10 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar9->klass->_1).naturalAligment < bVar4) ||
           ((pAVar9->klass->_1).typeHierarchy[bVar4 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar6 = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)(this_00->_0).namespaze;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar9[1].fields.emoteHandler;
        if (pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
          in_stack_12 = 2;
code_?:
          pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                               in_stack_12,method_00);
          if (((pOVar13 != (Object *)0x0) &&
              (pOVar14 = pOVar13[1].klass, pOVar14 != (Object__Class *)0x0)) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            uVar15._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar15._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar15._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            uVar16._0_2_ = (pOVar14->_0).this_arg.attrs;
            uVar16._2_1_ = (pOVar14->_0).this_arg.type;
            uVar16._3_1_ = (pOVar14->_0).this_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar16,uVar15);
            return;
          }
        }
      }
    }
  }
  func_?();
  pAVar9 = extraout_EDX;
  pAVar10 = unaff_EDI;
code_?:
  func_?(pAVar9,pAVar10);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartPointing() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).pointingHandler;
  if (pAVar2 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if ((pAVar2->fields)._.isActive != 0) {
      fVar3 = (pAVar2->fields)._.prevLookDirection.x;
      fVar4 = (pAVar2->fields)._.prevLookDirection.y;
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      fVar5 = (pAVar2->fields)._.prevLookDirection.z;
      (pAVar2->fields)._.pointingDirection.x = fVar3;
      (pAVar2->fields)._.pointingDirection.y = fVar4;
      (pAVar2->fields)._.pointingDirection.z = fVar5;
      pAVar6 = (pAVar2->fields).OnIsPointingChange;
      (pAVar2->fields).storedState = 1;
      if (pAVar6 != (Action_1_Boolean_ *)0x0) {
        puStack_1 = (pAVar6->fields)._._.method;
        uStack_7 = 1;
        pvStack_8 = (pAVar6->fields)._._.method_code;
        (*(pAVar6->fields)._._.invoke_impl)();
      }
    }
    return;
  }
  uVar9 = func_?(&pvStack_8);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartPointingWeapon() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointingWeapon
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).pointingHandler;
  if (pAVar2 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if ((pAVar2->fields)._.isActive != 0) {
      fVar3 = (pAVar2->fields)._.prevLookDirection.x;
      fVar4 = (pAVar2->fields)._.prevLookDirection.y;
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      fVar5 = (pAVar2->fields)._.prevLookDirection.z;
      (pAVar2->fields)._.pointingDirection.x = fVar3;
      (pAVar2->fields)._.pointingDirection.y = fVar4;
      (pAVar2->fields).storedState = 2;
      (pAVar2->fields)._.pointingDirection.z = fVar5;
    }
    return;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartPointingWeaponOnlyNetworked() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::
     AvatarLimbManagerLocal_StartPointingWeaponOnlyNetworked
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).pointingHandler;
  if (pAVar2 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if ((pAVar2->fields)._.isActive != 0) {
      fVar3 = (pAVar2->fields)._.prevLookDirection.x;
      fVar4 = (pAVar2->fields)._.prevLookDirection.y;
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      fVar5 = (pAVar2->fields)._.prevLookDirection.z;
      (pAVar2->fields)._.pointingDirection.x = fVar3;
      (pAVar2->fields)._.pointingDirection.y = fVar4;
      (pAVar2->fields).storedState = 3;
      (pAVar2->fields)._.pointingDirection.z = fVar5;
    }
    return;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SynchronizeEmote(Int32) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizeEmote
               (AvatarLimbManagerLocal *this,int32_t newEmote,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    pLVar2 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
      this_00 = (pLVar2->fields).Emote;
      this = (AvatarLimbManagerLocal *)newEmote;
      value = (Object *)func_?(TypeInfo__System__Int32,&this);
      if (this_00 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SynchronizeHasHandEquippableValue(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::
     AvatarLimbManagerLocal_SynchronizeHasHandEquippableValue
               (AvatarLimbManagerLocal *this,bool newHasHandEquippableItemValue,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      cRam_? = '\x01';
    }
    pLVar2 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
      this_00 = (pLVar2->fields).HasHandEquippableItem;
      in_stack_3 = newHasHandEquippableItemValue;
      value = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
      if (this_00 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SynchronizeHeadRotation(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizeHeadRotation
               (AvatarLimbManagerLocal *this,Quaternion newHeadRotation,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    fStack_2 = newHeadRotation.x;
    fStack_3 = newHeadRotation.y;
    fStack_4 = newHeadRotation.z;
    fStack_5 = newHeadRotation.w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
      pMVar7 = (pLVar6->fields).HeadRotationYaw;
      iVar8 = func_?(auStack_9,&fStack_2,0);
      this = *(AvatarLimbManagerLocal **)(iVar8 + 4);
      pOVar10 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar10,(MethodInfo *)0x0);
        pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
          pMVar7 = (pLVar6->fields).HeadRotationPitch;
          pfVar11 = (float *)func_?(auStack_9,&fStack_2,0);
          newHeadRotation.w = *pfVar11;
          pOVar10 = (Object *)func_?(TypeInfo__System__Single,&newHeadRotation.w);
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SynchronizePointing(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizePointing
               (AvatarLimbManagerLocal *this,Quaternion newPointRotation,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    fStack_2 = newPointRotation.x;
    fStack_3 = newPointRotation.y;
    fStack_4 = newPointRotation.z;
    fStack_5 = newPointRotation.w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
      pMVar7 = (pLVar6->fields).PointRotationYaw;
      iVar8 = func_?(auStack_9,&fStack_2,0);
      this = *(AvatarLimbManagerLocal **)(iVar8 + 4);
      pOVar10 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar10,(MethodInfo *)0x0);
        pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
          pMVar7 = (pLVar6->fields).PointRotationPitch;
          pfVar11 = (float *)func_?(auStack_9,&fStack_2,0);
          newPointRotation.w = *pfVar11;
          pOVar10 = (Object *)func_?(TypeInfo__System__Single,&newPointRotation.w);
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_UpdateLimbRotations
               (AvatarLimbManagerLocal *this,Vector3 lookDirection,MethodInfo *method)

{
  this_02 = this;
  AvatarLimbManager::AvatarLimbManager_UpdateLimbRotations
            ((AvatarLimbManager *)this,lookDirection,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    uStack_2._0_4_ = (pAVar1->fields).localLookDirection.x;
    uStack_2._4_4_ = (pAVar1->fields).localLookDirection.y;
    pAVar3 = (this->fields)._.emoteHandler;
    fVar4 = (pAVar1->fields).localLookDirection.z;
    fStack_5 = fVar4;
    if (pAVar3 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
      (*(code *)(pAVar3->klass->vtable).UpdateEmotes.method)();
      this_00 = (this->fields).headRotationCalculator;
      pAVar6 = (this->fields).headRotationHandler;
      if (this_00 != (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) {
        localLookDirection.z = fVar4;
        localLookDirection.x = (float)(undefined4)uStack_2;
        localLookDirection.y = (float)uStack_2._4_4_;
        pAVar7 = AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
                  AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
                            ((AvatarLimbManagerLocal_HeadRotationCalculationResult *)
                             &stack0xffffff78,this_00,localLookDirection,(MethodInfo *)0x0);
        fVar4 = (pAVar7->PitchRotation).x;
        fVar8 = (pAVar7->PitchRotation).y;
        fVar9 = (pAVar7->PitchRotation).z;
        fVar10 = (pAVar7->PitchRotation).w;
        if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
          fVar11 = (pAVar7->YawRotation).x;
          fVar12 = (pAVar7->YawRotation).y;
          fVar13 = (pAVar7->YawRotation).z;
          fVar14 = (pAVar7->YawRotation).w;
          (pAVar6->fields)._.shouldLean = (bool)*(undefined4 *)&pAVar7->ShouldLean;
          (pAVar6->fields).yawRotation.x = fVar11;
          (pAVar6->fields).yawRotation.y = fVar12;
          (pAVar6->fields).yawRotation.z = fVar13;
          (pAVar6->fields).yawRotation.w = fVar14;
          (pAVar6->fields).pitchRotation.x = fVar4;
          (pAVar6->fields).pitchRotation.y = fVar8;
          (pAVar6->fields).pitchRotation.z = fVar9;
          (pAVar6->fields).pitchRotation.w = fVar10;
          pAVar6 = (this->fields).headRotationHandler;
          if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
            (*(code *)(pAVar6->klass->vtable).UpdateRotation.method)();
            pAVar15 = (this->fields).pointingHandler;
            pAVar16 = (this->fields).pointingRotationCalculator;
            if (pAVar15 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
              pVVar17 = &(pAVar15->fields)._.pointingDirection;
              QStack_18.z = pVVar17->x;
              QStack_18.w = pVVar17->y;
              fVar4 = (pAVar15->fields)._.pointingDirection.z;
              if (pAVar16 != (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0) {
                pAVar19 = (AvatarLimbManagerLocal *)
                          MathFunctions::MathFunctions_SignedYawFromLocalDirection
                                    (*pVVar17,(MethodInfo *)0x0);
                pAVar20 = _UNK_?;
                if (((((float)_UNK_? <= (float)pAVar19) &&
                     (this = _UNK_?, pAVar20 = pAVar19, (float)_UNK_? < (float)pAVar19
                     )) || (((_UNK_? <= (float)pAVar20 ||
                             (this = (AvatarLimbManagerLocal *)(pAVar16->fields).previousYawRotation,
                             (float)this <= _UNK_?)) &&
                            (this = pAVar20, _UNK_? < (float)pAVar20)))) &&
                   (pAVar20 = (AvatarLimbManagerLocal *)(pAVar16->fields).previousYawRotation,
                   (float)pAVar20 < _UNK_?)) {
                  this = pAVar20;
                }
                (pAVar16->fields).previousYawRotation = (float)this;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pQVar21 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                                    (&QStack_22,(float)this,
                                     TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                     (MethodInfo *)0x0);
                fStack_23 = pQVar21->x;
                fStack_24 = pQVar21->y;
                fStack_25 = pQVar21->z;
                fStack_26 = pQVar21->w;
                gradientDirection.z = fVar4;
                gradientDirection.x = QStack_18.z;
                gradientDirection.y = QStack_18.w;
                this = (AvatarLimbManagerLocal *)
                       MVGroundState::MVGroundState_GetGradientAngle
                                 (gradientDirection,(MethodInfo *)0x0);
                pAVar20 = _UNK_?;
                if (((float)this < (float)_UNK_?) ||
                   (pAVar20 = _UNK_?, (float)_UNK_? < (float)this)) {
                  this = pAVar20;
                }
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                                    (&QStack_18,(float)this,
                                     TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                                     (MethodInfo *)0x0);
                QStack_18.x = pQVar21->x;
                QStack_18.y = pQVar21->y;
                QStack_18.z = pQVar21->z;
                QStack_18.w = pQVar21->w;
                newYawRotation.y = fStack_24;
                newYawRotation.x = fStack_23;
                newYawRotation.z = fStack_25;
                newYawRotation.w = fStack_26;
                pQVar21 = AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
                          AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                                    (&QStack_22,pAVar15,newYawRotation,(MethodInfo *)0x0);
                fVar4 = pQVar21->y;
                fVar8 = pQVar21->z;
                fVar9 = pQVar21->w;
                (pAVar15->fields).yawRotation.x = pQVar21->x;
                (pAVar15->fields).yawRotation.y = fVar4;
                (pAVar15->fields).yawRotation.z = fVar8;
                (pAVar15->fields).yawRotation.w = fVar9;
                (pAVar15->fields).pitchRotation.x = QStack_18.x;
                (pAVar15->fields).pitchRotation.y = QStack_18.y;
                (pAVar15->fields).pitchRotation.z = QStack_18.z;
                (pAVar15->fields).pitchRotation.w = QStack_18.w;
                (pAVar15->fields)._.pointState = (pAVar15->fields).storedState;
                pAVar15 = (this_02->fields).pointingHandler;
                if (pAVar15 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                  (*(code *)(pAVar15->klass->vtable).UpdatePointing.method)();
                  AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
                            ((AvatarLimbManager *)this_02,(MethodInfo *)0x0);
                  this_01 = (this_02->fields)._.limbRotator;
                  if (this_01 != (AvatarLimbManager_LimbRotator *)0x0) {
                    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
                              (this_01,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

