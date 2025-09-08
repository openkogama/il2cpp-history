
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
  method_02 = TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator;
  value = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  (this->fields).headRotationCalculator = value;
  func_?(&(this->fields).headRotationCalculator,value);
  pAVar1 = (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)
           func_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (pAVar1->fields).yawRotation.x = (pQVar2->identityQuaternion).x;
  (pAVar1->fields).yawRotation.y = fVar3;
  (pAVar1->fields).yawRotation.z = fVar4;
  (pAVar1->fields).yawRotation.w = fVar5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (pAVar1->fields).pitchRotation.x = (pQVar2->identityQuaternion).x;
  (pAVar1->fields).pitchRotation.y = fVar3;
  (pAVar1->fields).pitchRotation.z = fVar4;
  (pAVar1->fields).pitchRotation.w = fVar5;
  MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
            ((LogicEvaluateInputSignalsAnd *)pAVar1,(MethodInfo *)0x0);
  (this->fields).headRotationHandler = pAVar1;
  func_?();
  pAVar1 = (this->fields).headRotationHandler;
  if (pAVar1 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
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
    (*(code *)(pAVar1->klass->vtable).Initialize.method)();
    method_01 = TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator;
    value_00 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields).pointingRotationCalculator = value_00;
    func_?(&(this->fields).pointingRotationCalculator,value_00);
    pAVar6 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
             func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar3 = (pQVar2->identityQuaternion).y;
    fVar4 = (pQVar2->identityQuaternion).z;
    fVar5 = (pQVar2->identityQuaternion).w;
    (pAVar6->fields).yawRotation.x = (pQVar2->identityQuaternion).x;
    (pAVar6->fields).yawRotation.y = fVar3;
    (pAVar6->fields).yawRotation.z = fVar4;
    (pAVar6->fields).yawRotation.w = fVar5;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar3 = (pQVar2->identityQuaternion).y;
    fVar4 = (pQVar2->identityQuaternion).z;
    fVar5 = (pQVar2->identityQuaternion).w;
    (pAVar6->fields).pitchRotation.x = (pQVar2->identityQuaternion).x;
    (pAVar6->fields).pitchRotation.y = fVar3;
    (pAVar6->fields).pitchRotation.z = fVar4;
    (pAVar6->fields).pitchRotation.w = fVar5;
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler__ctor
              ((AvatarLimbManager_AvatarPointingHandler *)pAVar6,(MethodInfo *)0x0);
    (this->fields).pointingHandler = pAVar6;
    func_?();
    pAVar6 = (this->fields).pointingHandler;
    if (pAVar6 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
    (*(code *)(pAVar6->klass->vtable).Initialize.method)();
    pAVar7 = (AvatarLimbManager_AvatarEmoteHandler *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (AvatarLimbManager_AvatarEmoteHandler__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
              );
    pAVar7[1].klass = this_00;
    func_?();
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              (pAVar7,(MethodInfo *)0x0);
    (this->fields)._.emoteHandler = pAVar7;
    func_?();
    pAVar7 = (this->fields)._.emoteHandler;
    if (pAVar7 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar7,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,(AvatarEnabledChangeHandler *)this_00,(MethodInfo *)0x0)
    ;
    method_00 = TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal;
    pAVar8 = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar8,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this->fields).dataManager = pAVar8;
    func_?();
    pAVar8 = (this->fields).dataManager;
    if (pAVar8 == (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) goto code_?;
    (pAVar8->fields).limbRotationRuntimeData = (LimbRotationRuntimeData *)method_00;
    func_?();
    a = (this->fields).DelayHeadRotationNetworkMessage;
    pAVar1 = (this->fields).headRotationHandler;
    this_01 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_01,(Object *)pAVar1,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
               ,(MethodInfo *)0x0);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar9 == (Delegate *)0x0) {
      this_01[1].monitor = (MonitorData *)0x0;
code_?:
      func_?();
      pDVar9 = this_01[1].fields._._.method_ptr;
      object = *(Object **)&(this_01->fields)._._.method_is_virtual;
      this_02 = (UnityAction_1_System_Single_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_02,object,
                 MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
                 ,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar9,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pDVar9 != (Delegate *)0x0) {
        pvVar10 = (void *)func_?();
        if (pvVar10 != (void *)0x0) {
          this_01[1].fields._._.method_ptr = pvVar10;
          iVar11 = func_?();
          if (iVar11 != 0) goto code_?;
        }
        goto code_?;
      }
      this_01[1].fields._._.method_ptr = (void *)0x0;
code_?:
      func_?();
      pvVar10 = (this_01->fields)._._.method;
      if (pvVar10 == (void *)0x0) goto code_?;
      pDVar9 = *(Delegate **)((int)pvVar10 + 0x18);
      this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_03,(Object *)this_01,
                 MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,(MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar9,(Delegate *)this_03,(MethodInfo *)0x0);
      if (pDVar9 == (Delegate *)0x0) {
        _UNK_? = 0;
code_?:
        func_?();
        pMVar12 = (this_01->fields)._._.original_method_info;
        if (pMVar12 == (MethodInfo_1 *)0x0) goto code_?;
        pDVar9 = (Delegate *)pMVar12[7].monitor;
        pUVar13 = (UnityAction_1_UnityEngine_Color_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
        UnityAction_1_UnityEngine_Color___ctor
                  (pUVar13,(Object *)this_01,
                   MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                   ,(MethodInfo *)0x0);
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar9,(Delegate *)pUVar13,(MethodInfo *)0x0);
        if (pDVar9 == (Delegate *)0x0) {
          _UNK_? = 0;
code_?:
          func_?();
          iVar11 = *(int *)&(this_01->fields)._._.method_is_virtual;
          if (iVar11 == 0) goto code_?;
          pDVar9 = *(Delegate **)(iVar11 + 0x68);
          pUVar13 = (UnityAction_1_UnityEngine_Color_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
          UnityAction_1_UnityEngine_Color___ctor
                    (pUVar13,(Object *)this_01,
                     MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_
                     ,(MethodInfo *)0x0);
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pUVar13,(MethodInfo *)0x0);
          if (pDVar9 == (Delegate *)0x0) {
            _UNK_? = 0;
          }
          else {
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
            _UNK_? = iVar11;
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
          }
          func_?();
          iVar11 = *(int *)&(this_01->fields)._._.method_is_virtual;
          if (iVar11 == 0) goto code_?;
          pDVar9 = *(Delegate **)(iVar11 + 100);
          pUVar14 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar14,(Object *)this_01,
                     MethodInfo__AvatarLimbManagerLocal__SynchronizeHasHandEquippableValue_bool_,
                     (MethodInfo *)0x0);
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pUVar14,(MethodInfo *)0x0);
          if (pDVar9 == (Delegate *)0x0) {
            _UNK_? = 0;
          }
          else {
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
            _UNK_? = iVar11;
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
          }
          func_?();
          pvVar10 = (this_01->fields)._._.method;
          if (pvVar10 == (void *)0x0) goto code_?;
          pDVar9 = *(Delegate **)((int)pvVar10 + 0x1c);
          pUVar14 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar14,(Object *)this_01,
                     MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_,(MethodInfo *)0x0);
          pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pUVar14,(MethodInfo *)0x0);
          if (pDVar9 == (Delegate *)0x0) {
            _UNK_? = 0;
          }
          else {
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
            _UNK_? = iVar11;
            iVar11 = func_?();
            if (iVar11 == 0) goto code_?;
          }
          func_?();
          if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pAVar15 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                              (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
          pNVar16 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar16,(Object *)this_01,
                     MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,(MethodInfo *)0x0);
          pAVar17 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
          pAVar15 = (Action *)0x0;
          if (pAVar17 == (Action *)0x0) {
code_?:
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_StartShake,pAVar15,(MethodInfo *)0x0);
            pAVar15 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this_01,
                       MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,(MethodInfo *)0x0);
            pAVar17 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
            pAVar15 = (Action *)0x0;
            if (pAVar17 != (Action *)0x0) {
              if (pAVar17->klass == TypeInfo__System__Action) {
                pAVar15 = pAVar17;
              }
              if (pAVar15 == (Action *)0x0) goto code_?;
            }
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_StartNod,pAVar15,(MethodInfo *)0x0);
            pAVar15 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)this_01,
                       MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,(MethodInfo *)0x0);
            pAVar17 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
            pAVar15 = (Action *)0x0;
            if (pAVar17 == (Action *)0x0) {
code_?:
              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                        (ChatCommand__Enum_StartWave,pAVar15,(MethodInfo *)0x0);
              return;
            }
            if (pAVar17->klass == TypeInfo__System__Action) {
              pAVar15 = pAVar17;
            }
            if (pAVar15 != (Action *)0x0) goto code_?;
          }
          else {
            if (pAVar17->klass == TypeInfo__System__Action) {
              pAVar15 = pAVar17;
            }
            if (pAVar15 != (Action *)0x0) goto code_?;
          }
          goto code_?;
        }
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
        _UNK_? = iVar11;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
        goto code_?;
      }
      iVar11 = func_?();
      if (iVar11 == 0) goto code_?;
      _UNK_? = iVar11;
      iVar11 = func_?();
      if (iVar11 != 0) goto code_?;
      goto code_?;
    }
    pMVar18 = (MonitorData *)func_?();
    if (pMVar18 != (MonitorData *)0x0) {
      this_01[1].monitor = pMVar18;
      iVar11 = func_?();
      if (iVar11 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  this_00 = (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)(this->fields)._.emoteHandler;
  if (this_00 == (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0) {
    func_?();
    this_00 = extraout_EDX_00;
code_?:
    func_?(this_00);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this_00->klass->_1).naturalAligment <
       (TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).naturalAligment) ||
     ((this_00->klass->_1).typeHierarchy
      [(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).naturalAligment - 1] !=
      (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal))
  goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EmoteTypes);
    func_?(&StringLiteral_Could_not_start_and_network_);
    func_?(&StringLiteral___Please_add_it_to_the_StartEmot);
    cRam_? = '\x01';
  }
  EVar2 = emoteType & 0xff;
  if (EVar2 == EmoteTypes__Enum_Shake) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (this_00->fields)._.emoteDatas;
    if (pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar4 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,1,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar5 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this_00,pAVar4,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this_00,EmoteTypes__Enum_Shake,
                 (MethodInfo *)0x0);
      pAVar6 = (this_00->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar6 != (AvatarLimbManager *)0x0) {
        pAVar7 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar6->klass->_1).naturalAligment <
             (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
           ((pAVar6->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar3 = (this_00->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar6[1].fields.emoteHandler;
        if (pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
        goto code_?;
      }
    }
  }
  else {
    if (EVar2 != EmoteTypes__Enum_Nod) {
      if (EVar2 != EmoteTypes__Enum_Wave) {
        pSVar8 = mscorlib.dll::System::Enum::Enum_ToString
                           ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Could_not_start_and_network_,pSVar8,
                            StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar8,(MethodInfo *)0x0);
        return;
      }
      AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
      AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(this_00,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarLimbManagerLocal);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (this_00->fields)._.emoteDatas;
    if (pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
      pAVar4 = (AvatarLimbManager_EmoteData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,2,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      method_00 = (MethodInfo *)&UNK_?;
      bVar5 = AvatarLimbManager+AvatarEmoteHandler::
              AvatarLimbManager_AvatarEmoteHandler_CanStartEmote
                        ((AvatarLimbManager_AvatarEmoteHandler *)this_00,pAVar4,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this_00,EmoteTypes__Enum_Nod,
                 (MethodInfo *)0x0);
      pAVar6 = (this_00->fields)._.limbManager;
      unaff_EDI = TypeInfo__AvatarLimbManagerLocal;
      if (pAVar6 != (AvatarLimbManager *)0x0) {
        pAVar7 = TypeInfo__AvatarLimbManagerLocal;
        if (((pAVar6->klass->_1).naturalAligment <
             (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
           ((pAVar6->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
        pDVar3 = (this_00->fields)._.emoteDatas;
        unaff_EDI = (AvatarLimbManagerLocal__Class *)pAVar6[1].fields.emoteHandler;
        if (pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
          in_stack_9 = 2;
code_?:
          pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                               in_stack_9,method_00);
          if (((pOVar10 != (Object *)0x0) &&
              (pOVar11 = pOVar10[1].klass, pOVar11 != (Object__Class *)0x0)) &&
             (unaff_EDI != (AvatarLimbManagerLocal__Class *)0x0)) {
            uVar12._0_2_ = (unaff_EDI->_0).byval_arg.attrs;
            uVar12._2_1_ = (unaff_EDI->_0).byval_arg.type;
            uVar12._3_1_ = (unaff_EDI->_0).byval_arg.field_0x7;
            uVar13._0_2_ = (pOVar11->_0).this_arg.attrs;
            uVar13._2_1_ = (pOVar11->_0).this_arg.type;
            uVar13._3_1_ = (pOVar11->_0).this_arg.field_0x7;
            (*(code *)(unaff_EDI->_0).namespaze)((unaff_EDI->_0).element_class,uVar13,uVar12);
            return;
          }
        }
      }
    }
  }
  func_?();
  pAVar6 = extraout_EDX;
  pAVar7 = unaff_EDI;
code_?:
  func_?(pAVar6,pAVar7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    if (pAVar3 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
      (*(code *)(pAVar3->klass->vtable).UpdateEmotes.method)();
      this_00 = (this->fields).headRotationCalculator;
      pAVar5 = (this->fields).headRotationHandler;
      if (this_00 != (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) {
        (this_00->fields).shouldLean = 1;
        localDirection.z = fVar4;
        localDirection.x = (float)(undefined4)uStack_2;
        localDirection.y = (float)uStack_2._4_4_;
        this = (AvatarLimbManagerLocal *)
               MathFunctions::MathFunctions_SignedYawFromLocalDirection
                         (localDirection,(MethodInfo *)0x0);
        if (((float)this < _UNK_?) || (_UNK_? < (float)this)) {
          (this_00->fields).shouldLean = 0;
          this = (AvatarLimbManagerLocal *)0x0;
        }
        pAVar6 = _UNK_?;
        if (((float)this < (float)_UNK_?) ||
           (pAVar6 = _UNK_?, (float)_UNK_? < (float)this)) {
          this = pAVar6;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pQVar7 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                            (&QStack_8,(float)this,
                             TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                             (MethodInfo *)0x0);
        QStack_9.x = pQVar7->x;
        QStack_9.y = pQVar7->y;
        QStack_9.z = pQVar7->z;
        QStack_9.w = pQVar7->w;
        localDirection_00.z = fVar4;
        localDirection_00.x = (float)(undefined4)uStack_2;
        localDirection_00.y = (float)uStack_2._4_4_;
        pQVar7 = AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
                  AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
                            (&QStack_8,this_00,localDirection_00,(MethodInfo *)0x0);
        fVar4 = pQVar7->x;
        fVar10 = pQVar7->y;
        fVar11 = pQVar7->z;
        fVar12 = pQVar7->w;
        if (pAVar5 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
          (pAVar5->fields)._.shouldLean = (this_00->fields).shouldLean;
          (pAVar5->fields).pitchRotation.x = fVar4;
          (pAVar5->fields).pitchRotation.y = fVar10;
          (pAVar5->fields).pitchRotation.z = fVar11;
          (pAVar5->fields).pitchRotation.w = fVar12;
          (pAVar5->fields).yawRotation.x = QStack_9.x;
          (pAVar5->fields).yawRotation.y = QStack_9.y;
          (pAVar5->fields).yawRotation.z = QStack_9.z;
          (pAVar5->fields).yawRotation.w = QStack_9.w;
          pAVar5 = (this_02->fields).headRotationHandler;
          if (pAVar5 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
            (*(code *)(pAVar5->klass->vtable).UpdateRotation.method)();
            pAStack_13 = (this_02->fields).pointingHandler;
            pAVar14 = (this_02->fields).pointingRotationCalculator;
            if (pAStack_13 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
              pVVar15 = &(pAStack_13->fields)._.pointingDirection;
              QStack_9.z = pVVar15->x;
              QStack_9.w = pVVar15->y;
              fVar4 = (pAStack_13->fields)._.pointingDirection.z;
              if (pAVar14 != (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0) {
                this = (AvatarLimbManagerLocal *)
                       MathFunctions::MathFunctions_SignedYawFromLocalDirection
                                 (*pVVar15,(MethodInfo *)0x0);
                if ((float)this < (float)_UNK_?) {
                  this = _UNK_?;
                }
                else if ((float)_UNK_? < (float)this) {
                  this = _UNK_?;
                }
                if ((((_UNK_? <= (float)this) ||
                     (pAVar6 = (AvatarLimbManagerLocal *)(pAVar14->fields).previousYawRotation,
                     (float)pAVar6 <= _UNK_?)) &&
                    (pAVar6 = this, _UNK_? < (float)this)) &&
                   ((pAVar14->fields).previousYawRotation <= _UNK_? &&
                    _UNK_? != (pAVar14->fields).previousYawRotation)) {
                  pAVar6 = (AvatarLimbManagerLocal *)(pAVar14->fields).previousYawRotation;
                }
                this = pAVar6;
                (pAVar14->fields).previousYawRotation = (float)this;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pQVar7 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                                    (&QStack_8,(float)this,
                                     TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                     (MethodInfo *)0x0);
                QStack_8.x = pQVar7->x;
                QStack_8.y = pQVar7->y;
                QStack_8.z = pQVar7->z;
                QStack_8.w = pQVar7->w;
                gradientDirection.z = fVar4;
                gradientDirection.x = QStack_9.z;
                gradientDirection.y = QStack_9.w;
                this = (AvatarLimbManagerLocal *)
                       MVGroundState::MVGroundState_GetGradientAngle
                                 (gradientDirection,(MethodInfo *)0x0);
                pAVar6 = _UNK_?;
                if (((float)this < (float)_UNK_?) ||
                   (pAVar6 = _UNK_?, (float)_UNK_? < (float)this)) {
                  this = pAVar6;
                }
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                                    (&QStack_9,(float)this,
                                     TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                                     (MethodInfo *)0x0);
                pAVar16 = pAStack_13;
                QStack_9.x = pQVar7->x;
                QStack_9.y = pQVar7->y;
                QStack_9.z = pQVar7->z;
                QStack_9.w = pQVar7->w;
                newYawRotation.y = QStack_8.y;
                newYawRotation.x = QStack_8.x;
                newYawRotation.z = QStack_8.z;
                newYawRotation.w = QStack_8.w;
                pQVar7 = AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
                          AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                                    (&QStack_8,pAStack_13,newYawRotation,(MethodInfo *)0x0);
                fVar4 = pQVar7->y;
                fVar10 = pQVar7->z;
                fVar11 = pQVar7->w;
                (pAVar16->fields).yawRotation.x = pQVar7->x;
                (pAVar16->fields).yawRotation.y = fVar4;
                (pAVar16->fields).yawRotation.z = fVar10;
                (pAVar16->fields).yawRotation.w = fVar11;
                (pAVar16->fields).pitchRotation.x = QStack_9.x;
                (pAVar16->fields).pitchRotation.y = QStack_9.y;
                (pAVar16->fields).pitchRotation.z = QStack_9.z;
                (pAVar16->fields).pitchRotation.w = QStack_9.w;
                (pAVar16->fields)._.pointState = (pAVar16->fields).storedState;
                pAVar16 = (this_02->fields).pointingHandler;
                if (pAVar16 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                  (*(code *)(pAVar16->klass->vtable).UpdatePointing.method)();
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

