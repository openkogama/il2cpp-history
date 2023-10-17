
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_Initialize
               (AvatarLimbManagerLocal *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  value = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)
          func_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator);
  if (value == (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)avatarWO);
    (this->fields).headRotationCalculator = value;
    func_?();
    pAVar1 = (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)
             func_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
    if (pAVar1 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0)
    goto code_?;
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
    if (pAVar1 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0)
    goto code_?;
    (*(pAVar1->klass->vtable).Initialize.methodPtr)(pAVar1,this,(this->fields)._.limbRotator);
    value_00 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
               func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator);
    if (value_00 == (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0)
    goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)avatarWO);
    (this->fields).pointingRotationCalculator = value_00;
    func_?();
    pAVar6 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
             func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    if (pAVar6 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
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
    (*(pAVar6->klass->vtable).Initialize.methodPtr)(pAVar6,this,(this->fields)._.limbRotator);
    pAVar7 = (AvatarLimbManager_AvatarEmoteHandler *)
             func_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    if (pAVar7 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (AvatarLimbManager_AvatarEmoteHandler__Class *)func_?();
    if (this_00 == (AvatarLimbManager_AvatarEmoteHandler__Class *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
              );
    pAVar7[1].klass = this_00;
    func_?();
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              (pAVar7,(MethodInfo *)0x0);
    (this->fields)._.emoteHandler = pAVar7;
    func_?(&(this->fields)._.emoteHandler,pAVar7);
    pAVar7 = (this->fields)._.emoteHandler;
    if (pAVar7 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar7,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,enabledChangeHandler,(MethodInfo *)0x0);
    pAVar8 = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)func_?();
    if (pAVar8 == (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pAVar8,ExceptionArgument__Enum_obj,(MethodInfo *)avatarWO);
    (this->fields).dataManager = pAVar8;
    func_?();
    pAVar8 = (this->fields).dataManager;
    if (pAVar8 == (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) goto code_?;
    (pAVar8->fields).limbRotationRuntimeData = limbRotationRuntimeData;
    func_?();
    pAVar1 = (this->fields).headRotationHandler;
    pAVar9 = (this->fields).DelayHeadRotationNetworkMessage;
    pUVar10 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    if (pUVar10 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar10,(Object *)pAVar1,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
               ,(MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (this->fields).DelayHeadRotationNetworkMessage = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar9 = (Action_1_Single_ *)func_?();
      if (pAVar9 == (Action_1_Single_ *)0x0) goto code_?;
      (this->fields).DelayHeadRotationNetworkMessage = pAVar9;
      iVar12 = func_?();
      if (iVar12 == 0) goto code_?;
    }
    func_?();
    pAVar6 = (this->fields).pointingHandler;
    pAVar9 = (this->fields).DelayPointingNetworkMessage;
    pUVar10 = (UnityAction_1_System_Single_ *)func_?();
    if (pUVar10 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar10,(Object *)pAVar6,
               MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
               ,(MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (this->fields).DelayPointingNetworkMessage = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar9 = (Action_1_Single_ *)func_?();
      if (pAVar9 == (Action_1_Single_ *)0x0) goto code_?;
      (this->fields).DelayPointingNetworkMessage = pAVar9;
      iVar12 = func_?();
      if (iVar12 == 0) goto code_?;
    }
    func_?();
    pAVar7 = (this->fields)._.emoteHandler;
    if (pAVar7 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    pAVar13 = (pAVar7->fields).OnEmoteStart;
    this_01 = (Action_1_Object_ *)func_?();
    if (this_01 == (Action_1_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar13,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar11 != (Delegate *)0x0) {
      pAVar13 = (Action_1_String_ *)func_?();
      if (pAVar13 != (Action_1_String_ *)0x0) {
        (pAVar7->fields).OnEmoteStart = pAVar13;
        iVar12 = func_?();
        if (iVar12 != 0) goto code_?;
      }
      goto code_?;
    }
    (pAVar7->fields).OnEmoteStart = (Action_1_String_ *)0x0;
code_?:
    func_?();
    pAVar1 = (this->fields).headRotationHandler;
    if (pAVar1 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0)
    goto code_?;
    pAVar14 = (pAVar1->fields).OnUpdateHeadRotationValue;
    pUVar15 = (UnityAction_1_UnityEngine_Color_ *)func_?();
    if (pUVar15 == (UnityAction_1_UnityEngine_Color_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
    UnityAction_1_UnityEngine_Color___ctor
              (pUVar15,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
    if (pDVar11 != (Delegate *)0x0) {
      pAVar14 = (Action_1_UnityEngine_Quaternion_ *)func_?();
      if (pAVar14 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
        (pAVar1->fields).OnUpdateHeadRotationValue = pAVar14;
        iVar12 = func_?();
        if (iVar12 != 0) goto code_?;
      }
      goto code_?;
    }
    (pAVar1->fields).OnUpdateHeadRotationValue = (Action_1_UnityEngine_Quaternion_ *)0x0;
code_?:
    func_?();
    pAVar6 = (this->fields).pointingHandler;
    if (pAVar6 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
    pAVar14 = (pAVar6->fields).OnUpdatePointingValue;
    pUVar15 = (UnityAction_1_UnityEngine_Color_ *)func_?();
    if (pUVar15 == (UnityAction_1_UnityEngine_Color_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
    UnityAction_1_UnityEngine_Color___ctor
              (pUVar15,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar14,(Delegate *)pUVar15,(MethodInfo *)0x0);
    if (pDVar11 != (Delegate *)0x0) {
      pAVar14 = (Action_1_UnityEngine_Quaternion_ *)func_?();
      if (pAVar14 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
        (pAVar6->fields).OnUpdatePointingValue = pAVar14;
        iVar12 = func_?();
        if (iVar12 != 0) goto code_?;
      }
      goto code_?;
    }
    (pAVar6->fields).OnUpdatePointingValue = (Action_1_UnityEngine_Quaternion_ *)0x0;
code_?:
    func_?();
    pAVar7 = (this->fields)._.emoteHandler;
    if (pAVar7 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    pAVar16 = (pAVar7->fields).OnEmoteUpdate;
    this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
    if (this_02 == (UnityAction_1_System_Int32Enum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar16,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      (pAVar7->fields).OnEmoteUpdate = (Action_1_Int32_ *)0x0;
code_?:
      func_?();
      if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar17 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                          (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
      pNVar18 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar18 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar18,(Object *)this,MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,
                 (MethodInfo *)0x0);
      pAVar19 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar17,(Delegate *)pNVar18,(MethodInfo *)0x0);
      pAVar17 = (Action *)0x0;
      if (pAVar19 == (Action *)0x0) {
code_?:
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_StartShake,pAVar17,(MethodInfo *)0x0);
        pAVar17 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                            (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
        pNVar18 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar18 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar18,(Object *)this,MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,
                   (MethodInfo *)0x0);
        pAVar19 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar17,(Delegate *)pNVar18,(MethodInfo *)0x0);
        pAVar17 = (Action *)0x0;
        if (pAVar19 != (Action *)0x0) {
          if (pAVar19->klass == TypeInfo__System__Action) {
            pAVar17 = pAVar19;
          }
          if (pAVar17 == (Action *)0x0) goto code_?;
        }
        ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                  (ChatCommand__Enum_StartNod,pAVar17,(MethodInfo *)0x0);
        pAVar17 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                            (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
        pNVar18 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar18 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar18,(Object *)this,MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,
                   (MethodInfo *)0x0);
        pAVar19 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar17,(Delegate *)pNVar18,(MethodInfo *)0x0);
        pAVar17 = (Action *)0x0;
        if (pAVar19 == (Action *)0x0) {
code_?:
          ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                    (ChatCommand__Enum_StartWave,pAVar17,(MethodInfo *)0x0);
          return;
        }
        if (pAVar19->klass == TypeInfo__System__Action) {
          pAVar17 = pAVar19;
        }
        if (pAVar17 != (Action *)0x0) goto code_?;
      }
      else {
        if (pAVar19->klass == TypeInfo__System__Action) {
          pAVar17 = pAVar19;
        }
        if (pAVar17 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
    pAVar16 = (Action_1_Int32_ *)func_?();
    if (pAVar16 != (Action_1_Int32_ *)0x0) {
      (pAVar7->fields).OnEmoteUpdate = pAVar16;
      iVar12 = func_?();
      if (iVar12 != 0) goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnNodChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnNodChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(this->klass->vtable).StartEmote.methodPtr)(this,2,(this->klass->vtable).StartEmote.method);
  return;
}


/* Void OnWaveChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnWaveChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(this->klass->vtable).StartEmote.methodPtr)(this,3,(this->klass->vtable).StartEmote.method);
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
  if (((this_00->klass->_1).typeHierarchyDepth <
       (TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).typeHierarchyDepth) ||
     ((this_00->klass->_1).typeHierarchy
      [(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).typeHierarchyDepth - 1] !=
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
        if (((pAVar6->klass->_1).typeHierarchyDepth <
             (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
           ((pAVar6->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
        if (((pAVar6->klass->_1).typeHierarchyDepth <
             (TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth) ||
           ((pAVar6->klass->_1).typeHierarchy
            [(TypeInfo__AvatarLimbManagerLocal->_1).typeHierarchyDepth - 1] !=
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
      pAVar3 = (pAVar2->fields).OnIsPointingChange;
      fVar4 = (pAVar2->fields)._.prevLookDirection.x;
      fVar5 = (pAVar2->fields)._.prevLookDirection.y;
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      fVar6 = (pAVar2->fields)._.prevLookDirection.z;
      (pAVar2->fields)._.pointingDirection.x = fVar4;
      (pAVar2->fields)._.pointingDirection.y = fVar5;
      (pAVar2->fields)._.pointingDirection.z = fVar6;
      if (pAVar3 != (Action_1_Boolean_ *)0x0) {
        pAVar3 = (pAVar2->fields).OnIsPointingChange;
        puStack_1 = (pAVar3->fields)._._.method;
        uStack_7 = 1;
        pvStack_8 = (pAVar3->fields)._._.method_code;
        (*(pAVar3->fields)._._.invoke_impl)();
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
      (*(pAVar3->klass->vtable).UpdateEmotes.methodPtr)();
      this_00 = (this->fields).headRotationCalculator;
      pAVar6 = (this->fields).headRotationHandler;
      if (this_00 != (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) {
        VVar7.z = fVar4;
        VVar7.x = (float)(undefined4)uStack_2;
        VVar7.y = (float)uStack_2._4_4_;
        pAVar8 = AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
                  AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
                            ((AvatarLimbManagerLocal_HeadRotationCalculationResult *)
                             &stack0xffffff78,this_00,VVar7,(MethodInfo *)0x0);
        fVar4 = (pAVar8->PitchRotation).x;
        fVar9 = (pAVar8->PitchRotation).y;
        fVar10 = (pAVar8->PitchRotation).z;
        fVar11 = (pAVar8->PitchRotation).w;
        if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
          fVar12 = (pAVar8->YawRotation).x;
          fVar13 = (pAVar8->YawRotation).y;
          fVar14 = (pAVar8->YawRotation).z;
          fVar15 = (pAVar8->YawRotation).w;
          (pAVar6->fields)._.shouldLean = (bool)*(undefined4 *)&pAVar8->ShouldLean;
          (pAVar6->fields).yawRotation.x = fVar12;
          (pAVar6->fields).yawRotation.y = fVar13;
          (pAVar6->fields).yawRotation.z = fVar14;
          (pAVar6->fields).yawRotation.w = fVar15;
          (pAVar6->fields).pitchRotation.x = fVar4;
          (pAVar6->fields).pitchRotation.y = fVar9;
          (pAVar6->fields).pitchRotation.z = fVar10;
          (pAVar6->fields).pitchRotation.w = fVar11;
          pAVar6 = (this->fields).headRotationHandler;
          if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
            (*(pAVar6->klass->vtable).UpdateRotation.methodPtr)();
            pAVar16 = (this->fields).pointingHandler;
            pAVar17 = (this->fields).pointingRotationCalculator;
            if (pAVar16 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
              pVVar18 = &(pAVar16->fields)._.pointingDirection;
              QStack_19.z = pVVar18->x;
              QStack_19.w = pVVar18->y;
              fVar4 = (pAVar16->fields)._.pointingDirection.z;
              VVar7 = *pVVar18;
              if (pAVar17 != (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0) {
                (pAVar17->fields).shouldPoint = 1;
                this = (AvatarLimbManagerLocal *)
                       MathFunctions::MathFunctions_SignedYawFromLocalDirection
                                 (VVar7,(MethodInfo *)0x0);
                if ((float)this < _UNK_?) {
                  (pAVar17->fields).shouldPoint = 0;
                }
                if (_UNK_? < (float)this) {
                  (pAVar17->fields).shouldPoint = 0;
                }
                pAVar20 = _UNK_?;
                if (((float)this < (float)_UNK_?) ||
                   (pAVar20 = _UNK_?, (float)_UNK_? < (float)this)) {
                  this = pAVar20;
                }
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
                gradientDirection.x = QStack_19.z;
                gradientDirection.y = QStack_19.w;
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
                                    (&QStack_19,(float)this,
                                     TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                                     (MethodInfo *)0x0);
                bVar27 = (pAVar17->fields).shouldPoint;
                QStack_19.x = pQVar21->x;
                QStack_19.y = pQVar21->y;
                QStack_19.z = pQVar21->z;
                QStack_19.w = pQVar21->w;
                newYawRotation.y = fStack_24;
                newYawRotation.x = fStack_23;
                newYawRotation.z = fStack_25;
                newYawRotation.w = fStack_26;
                pQVar21 = AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
                          AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                                    (&QStack_22,pAVar16,newYawRotation,(MethodInfo *)0x0);
                fVar4 = pQVar21->x;
                fVar9 = pQVar21->y;
                fVar10 = pQVar21->z;
                fVar11 = pQVar21->w;
                (pAVar16->fields)._.shouldPoint = bVar27;
                (pAVar16->fields).yawRotation.x = fVar4;
                (pAVar16->fields).yawRotation.y = fVar9;
                (pAVar16->fields).yawRotation.z = fVar10;
                (pAVar16->fields).yawRotation.w = fVar11;
                (pAVar16->fields).pitchRotation.x = QStack_19.x;
                (pAVar16->fields).pitchRotation.y = QStack_19.y;
                (pAVar16->fields).pitchRotation.z = QStack_19.z;
                (pAVar16->fields).pitchRotation.w = QStack_19.w;
                pAVar16 = (this_02->fields).pointingHandler;
                if (pAVar16 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                  (*(pAVar16->klass->vtable).UpdatePointing.methodPtr)();
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

