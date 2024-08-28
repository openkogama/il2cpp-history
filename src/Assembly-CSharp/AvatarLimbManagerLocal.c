
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
  method_01 = TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator;
  value = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  }
  else {
    (*(code *)(pAVar2->klass->vtable).Initialize.method)();
    method_02 = TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator;
    value_00 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
    ppAVar8 = &(this->fields).pointingRotationCalculator;
    *ppAVar8 = value_00;
    func_?(ppAVar8,value_00);
    this_00 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
              func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar3->identityQuaternion).y;
    fVar5 = (pQVar3->identityQuaternion).z;
    fVar6 = (pQVar3->identityQuaternion).w;
    (this_00->fields).yawRotation.x = (pQVar3->identityQuaternion).x;
    (this_00->fields).yawRotation.y = fVar4;
    (this_00->fields).yawRotation.z = fVar5;
    (this_00->fields).yawRotation.w = fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar3->identityQuaternion).y;
    fVar5 = (pQVar3->identityQuaternion).z;
    fVar6 = (pQVar3->identityQuaternion).w;
    (this_00->fields).pitchRotation.x = (pQVar3->identityQuaternion).x;
    (this_00->fields).pitchRotation.y = fVar4;
    (this_00->fields).pitchRotation.z = fVar5;
    (this_00->fields).pitchRotation.w = fVar6;
    AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler__ctor
              ((AvatarLimbManager_AvatarPointingHandler *)this_00,(MethodInfo *)0x0);
    ppAVar9 = &(this->fields).pointingHandler;
    *ppAVar9 = this_00;
    func_?();
    if (*ppAVar9 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
    (*(code *)((*ppAVar9)->klass->vtable).Initialize.method)();
    pAVar10 = (AvatarLimbManager_AvatarEmoteHandler *)
              func_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (AvatarLimbManager_AvatarEmoteHandler__Class *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
              ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
              );
    pAVar10[1].klass = this_01;
    func_?();
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
              (pAVar10,(MethodInfo *)0x0);
    ppAVar11 = &(this->fields)._.emoteHandler;
    *ppAVar11 = pAVar10;
    func_?();
    pAVar10 = *ppAVar11;
    if (pAVar10 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
              (pAVar10,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
               (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
               (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
               (this->fields)._.limbRotator,(AvatarEnabledChangeHandler *)0x0,(MethodInfo *)0x0);
    method_00 = TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal;
    pAVar12 = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pAVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    ppAVar13 = &(this->fields).dataManager;
    *ppAVar13 = pAVar12;
    func_?();
    pAVar12 = *ppAVar13;
    if (pAVar12 == (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) goto code_?;
    pAVar14 = &pAVar12->fields;
    pAVar14->limbRotationRuntimeData = (LimbRotationRuntimeData *)ppAVar9;
    func_?();
    pAVar15 = TypeInfo__System__Action<float>;
    ppAVar16 = &(this->fields).DelayHeadRotationNetworkMessage;
    pAVar17 = *ppAVar16;
    object = pAVar14->limbRotationRuntimeData;
    pUVar18 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar18,(Object *)object,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
               ,(MethodInfo *)0x0);
    piVar19 = (int *)&UNK_?;
    pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar17,(Delegate *)pUVar18,(MethodInfo *)0x0);
    if (pDVar20 != (Delegate *)0x0) {
      pAVar17 = (Action_1_Single_ *)func_?();
      if (pAVar17 != (Action_1_Single_ *)0x0) {
        *ppAVar16 = pAVar17;
        iVar21 = func_?();
        if (iVar21 != 0) goto code_?;
      }
      goto code_?;
    }
    *ppAVar16 = (Action_1_Single_ *)0x0;
code_?:
    func_?();
    pDVar20 = pDRam00000048;
    object_00 = (pAVar15->_0).image;
    pUVar18 = (UnityAction_1_System_Single_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (pUVar18,(Object *)object_00,
               MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
               ,(MethodInfo *)0x0);
    pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar20,(Delegate *)pUVar18,(MethodInfo *)0x0);
    if (pDVar20 == (Delegate *)0x0) {
      _UNK_? = 0;
    }
    else {
      iVar21 = func_?();
      if (iVar21 == 0) goto code_?;
      _UNK_? = iVar21;
      iVar21 = func_?();
      if (iVar21 == 0) goto code_?;
    }
    func_?();
    pAVar22 = TypeInfo__System__Action<System::String>;
    if (*piVar19 == 0) goto code_?;
    pDVar20 = *(Delegate **)(*piVar19 + 0x18);
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)0x0,MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
               (MethodInfo *)0x0);
    pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar20,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar20 == (Delegate *)0x0) {
      (pAVar22->_0).this_arg.data.dummy = (void *)0x0;
code_?:
      func_?();
      pAVar23 = TypeInfo__System__Action<UnityEngine::Quaternion>;
      if (iRam_? == 0) goto code_?;
      pDVar20 = *(Delegate **)(iRam_? + 0x3c);
      pUVar24 = (UnityAction_1_UnityEngine_Color_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
      UnityAction_1_UnityEngine_Color___ctor
                (pUVar24,(Object *)0x0,
                 MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                 ,(MethodInfo *)0x0);
      pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar20,(Delegate *)pUVar24,(MethodInfo *)0x0);
      if (pDVar20 == (Delegate *)0x0) {
        (pAVar23->_0).klass = (Il2CppClass *)0x0;
code_?:
        func_?();
        pAVar23 = TypeInfo__System__Action<UnityEngine::Quaternion>;
        if (iRam_? == 0) goto code_?;
        pDVar20 = *(Delegate **)(iRam_? + 0x5c);
        pUVar24 = (UnityAction_1_UnityEngine_Color_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
        UnityAction_1_UnityEngine_Color___ctor
                  (pUVar24,(Object *)0x0,
                   MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_,
                   (MethodInfo *)0x0);
        pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar20,(Delegate *)pUVar24,(MethodInfo *)0x0);
        if (pDVar20 == (Delegate *)0x0) {
          pAVar23->static_fields = (Action_1_UnityEngine_Quaternion___StaticFields *)0x0;
code_?:
          func_?();
          pAVar25 = TypeInfo__System__Action<int>;
          if (iRam_? == 0) goto code_?;
          pDVar20 = *(Delegate **)(iRam_? + 0x1c);
          this_03 = (UnityAction_1_System_Int32Enum_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_03,(Object *)0x0,MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_
                     ,(MethodInfo *)0x0);
          pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar20,(Delegate *)this_03,(MethodInfo *)0x0);
          if (pDVar20 == (Delegate *)0x0) {
            (pAVar25->_0).this_arg.attrs = 0;
            (pAVar25->_0).this_arg.type = 0;
            (pAVar25->_0).this_arg.field_0x7 = 0;
code_?:
            func_?();
            if ((TypeInfo__ChatCommandManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pAVar26 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
            pNVar27 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar27,(Object *)0x0,
                       MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,(MethodInfo *)0x0);
            pAVar28 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar26,(Delegate *)pNVar27,(MethodInfo *)0x0);
            pAVar26 = (Action *)0x0;
            if (pAVar28 == (Action *)0x0) {
code_?:
              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                        (ChatCommand__Enum_StartShake,pAVar26,(MethodInfo *)0x0);
              pAVar26 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                  (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
              pNVar27 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar27,(Object *)0x0,
                         MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,(MethodInfo *)0x0);
              pAVar28 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar26,(Delegate *)pNVar27,(MethodInfo *)0x0);
              pAVar26 = (Action *)0x0;
              if (pAVar28 != (Action *)0x0) {
                if (pAVar28->klass == TypeInfo__System__Action) {
                  pAVar26 = pAVar28;
                }
                if (pAVar26 == (Action *)0x0) goto code_?;
              }
              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                        (ChatCommand__Enum_StartNod,pAVar26,(MethodInfo *)0x0);
              pAVar26 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                  (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
              pNVar27 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar27,(Object *)0x0,
                         MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,(MethodInfo *)0x0);
              pAVar28 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar26,(Delegate *)pNVar27,(MethodInfo *)0x0);
              pAVar26 = (Action *)0x0;
              if (pAVar28 == (Action *)0x0) {
code_?:
                ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                          (ChatCommand__Enum_StartWave,pAVar26,(MethodInfo *)0x0);
                return;
              }
              if (pAVar28->klass == TypeInfo__System__Action) {
                pAVar26 = pAVar28;
              }
              if (pAVar26 != (Action *)0x0) goto code_?;
            }
            else {
              if (pAVar28->klass == TypeInfo__System__Action) {
                pAVar26 = pAVar28;
              }
              if (pAVar26 != (Action *)0x0) goto code_?;
            }
            goto code_?;
          }
          iVar21 = func_?();
          if (iVar21 == 0) goto code_?;
          (pAVar25->_0).this_arg.attrs = (short)iVar21;
          (pAVar25->_0).this_arg.type = (char)((uint)iVar21 >> 0x10);
          (pAVar25->_0).this_arg.field_0x7 = (char)((uint)iVar21 >> 0x18);
          iVar21 = func_?();
          if (iVar21 != 0) goto code_?;
          goto code_?;
        }
        pAVar29 = (Action_1_UnityEngine_Quaternion___StaticFields *)func_?();
        if (pAVar29 == (Action_1_UnityEngine_Quaternion___StaticFields *)0x0) goto code_?;
        pAVar23->static_fields = pAVar29;
        iVar21 = func_?();
        if (iVar21 != 0) goto code_?;
        goto code_?;
      }
      pIVar30 = (Il2CppClass *)func_?();
      if (pIVar30 == (Il2CppClass *)0x0) goto code_?;
      (pAVar23->_0).klass = pIVar30;
      iVar21 = func_?();
      if (iVar21 != 0) goto code_?;
      goto code_?;
    }
    pvVar31 = (void *)func_?();
    if (pvVar31 == (void *)0x0) goto code_?;
    (pAVar22->_0).this_arg.data.dummy = pvVar31;
    iVar21 = func_?();
    if (iVar21 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
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
      (*(code *)(pAVar3->klass->vtable).UpdateEmotes.method)();
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
            (*(code *)(pAVar6->klass->vtable).UpdateRotation.method)();
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

