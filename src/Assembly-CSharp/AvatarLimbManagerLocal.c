
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_Initialize
               (AvatarLimbManagerLocal *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  method_01 = TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_01);
  (this->fields).headRotationCalculator =
       (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)pSVar1;
  pAVar2 = (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)
            func_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&pAStack_4,(MethodInfo *)0x0);
  fVar5 = pQVar3->y;
  pSVar6 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pQVar3->z;
  fVar7 = pQVar3->w;
  (pAVar2->fields).yawRotation.x = (float)pQVar3->x;
  (pAVar2->fields).yawRotation.y = fVar5;
  (pAVar2->fields).yawRotation.z = (float)pSVar6;
  (pAVar2->fields).yawRotation.w = fVar7;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&pAStack_4,(MethodInfo *)0x0);
  fVar5 = pQVar3->x;
  fVar7 = pQVar3->y;
  fVar8 = pQVar3->z;
  fVar9 = pQVar3->w;
  *(undefined1 *)&((Vector3 *)&(pAVar2->fields)._.shouldLean)->x = 1;
  (pAVar2->fields).pitchRotation.x = fVar5;
  (pAVar2->fields).pitchRotation.y = fVar7;
  (pAVar2->fields).pitchRotation.z = fVar8;
  (pAVar2->fields).pitchRotation.w = fVar9;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pAVar2,0.0,unaff_retaddr);
  (this->fields).headRotationHandler = pAVar2;
  pAStack_10 = (this->fields)._.limbRotator;
  pAStack_11 = this;
  pAStack_4 = pAVar2;
  (*(code *)(pAVar2->klass->vtable).Initialize.method)();
  method_02 = TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_02);
  (this->fields).pointingRotationCalculator =
       (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)pSVar1;
  this_00 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
            func_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&pAStack_4,(MethodInfo *)0x0);
  fVar5 = pQVar3->y;
  fVar7 = pQVar3->z;
  fVar8 = pQVar3->w;
  (this_00->fields).yawRotation.x = pQVar3->x;
  (this_00->fields).yawRotation.y = fVar5;
  (this_00->fields).yawRotation.z = fVar7;
  (this_00->fields).yawRotation.w = fVar8;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&pAStack_4,(MethodInfo *)0x0);
  fVar5 = pQVar3->x;
  fVar7 = pQVar3->y;
  fVar8 = pQVar3->z;
  fVar9 = pQVar3->w;
  (this_00->fields)._.pointingDuration = 0.8;
  (this_00->fields)._.shouldPoint = 1;
  (this_00->fields)._.isActive = 1;
  (this_00->fields).pitchRotation.x = fVar5;
  (this_00->fields).pitchRotation.y = fVar7;
  (this_00->fields).pitchRotation.z = fVar8;
  (this_00->fields).pitchRotation.w = fVar9;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this_00,0.0,in_stack_12);
  (this->fields).pointingHandler = this_00;
  (*(code *)(this_00->klass->vtable).Initialize.method)();
  this_01 = (AvatarLimbManager_AvatarEmoteHandler *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_02 = (AvatarLimbManager_AvatarEmoteHandler__Class *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
            );
  this_01[1].klass = this_02;
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
            (this_01,(MethodInfo *)0x0);
  (this->fields)._.emoteHandler = this_01;
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
            (this_01,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
             (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
             (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler,
             (this->fields)._.limbRotator,(AvatarEnabledChangeHandler *)this,(MethodInfo *)0x0);
  method_00 = TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal;
  pSVar1 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  (this->fields).dataManager = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)pSVar1;
  if (pSVar1 != (ScaleAnimationBase *)0x0) {
    (pSVar1->fields)._._._._.m_CachedPtr = this_01;
    a = (this->fields).DelayHeadRotationNetworkMessage;
    pAVar2 = (this->fields).headRotationHandler;
    pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar13,(Object *)pAVar2,
               MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
               ,MethodInfo__System__Action<float>__Action_System__Object__void__);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)pUVar13,(MethodInfo *)0x0);
    pDVar15 = _UNK_?;
    pOVar16 = _UNK_?;
    pDVar17 = (Delegate *)0x0;
    if (pDVar14 != (Delegate *)0x0) {
      if ((Action_1_Single___Class *)pDVar14->klass == TypeInfo__System__Action<float>) {
        pDVar17 = pDVar14;
      }
      if (pDVar17 == (Delegate *)0x0) goto code_?;
    }
    _UNK_? = pDVar17;
    pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar13,pOVar16,
               MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
               ,MethodInfo__System__Action<float>__Action_System__Object__void__);
    pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar15,(Delegate *)pUVar13,(MethodInfo *)0x0);
    iVar18 = _UNK_?;
    pDVar15 = (Delegate *)0x0;
    if (pDVar17 != (Delegate *)0x0) {
      if ((Action_1_Single___Class *)pDVar17->klass == TypeInfo__System__Action<float>) {
        pDVar15 = pDVar17;
      }
      if (pDVar15 == (Delegate *)0x0) goto code_?;
    }
    _UNK_? = pDVar15;
    if (_UNK_? != 0) {
      pDVar15 = *(Delegate **)(_UNK_? + 0x18);
      pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar13,(Object *)&UNK_?,
                 MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,
                 MethodInfo__System__Action<System::String>__Action_System__Object__void__);
      pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar15,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pDVar15 = (Delegate *)0x0;
      if (pDVar17 != (Delegate *)0x0) {
        if ((Action_1_String___Class *)pDVar17->klass == TypeInfo__System__Action<System::String>) {
          pDVar15 = pDVar17;
        }
        if (pDVar15 == (Delegate *)0x0) goto code_?;
      }
      *(Delegate **)(iVar18 + 0x18) = pDVar15;
      iVar18 = _UNK_?;
      if (_UNK_? != 0) {
        pDVar15 = *(Delegate **)(_UNK_? + 0x3c);
        pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar13,(Object *)&UNK_?,
                   MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                   ,
                   MethodInfo__System__Action<UnityEngine::Quaternion>__Action_System__Object__void__
                  );
        pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar15,(Delegate *)pUVar13,(MethodInfo *)0x0);
        pDVar15 = (Delegate *)0x0;
        if (pDVar17 != (Delegate *)0x0) {
          if ((Action_1_UnityEngine_Quaternion___Class *)pDVar17->klass ==
              TypeInfo__System__Action<UnityEngine::Quaternion>) {
            pDVar15 = pDVar17;
          }
          if (pDVar15 == (Delegate *)0x0) goto code_?;
        }
        *(Delegate **)(iVar18 + 0x3c) = pDVar15;
        pOVar16 = _UNK_?;
        if (_UNK_? != (Object *)0x0) {
          pDVar15 = (Delegate *)_UNK_?[0xb].monitor;
          pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar13,(Object *)&UNK_?,
                     MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_
                     ,
                     MethodInfo__System__Action<UnityEngine::Quaternion>__Action_System__Object__void__
                    );
          pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar15,(Delegate *)pUVar13,(MethodInfo *)0x0);
          pDVar15 = (Delegate *)0x0;
          if (pDVar17 != (Delegate *)0x0) {
            if ((Action_1_UnityEngine_Quaternion___Class *)pDVar17->klass ==
                TypeInfo__System__Action<UnityEngine::Quaternion>) {
              pDVar15 = pDVar17;
            }
            if (pDVar15 == (Delegate *)0x0) goto code_?;
          }
          pOVar16[0xb].monitor = (MonitorData *)pDVar15;
          iVar18 = _UNK_?;
          if (_UNK_? != 0) {
            pDVar15 = *(Delegate **)(_UNK_? + 0x1c);
            pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar13,(Object *)&UNK_?,
                       MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_,
                       MethodInfo__System__Action<int>__Action_System__Object__void__);
            pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar15,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pDVar15 = (Delegate *)0x0;
            if (pDVar17 != (Delegate *)0x0) {
              if ((Action_1_Int32___Class *)pDVar17->klass == TypeInfo__System__Action<int>) {
                pDVar15 = pDVar17;
              }
              if (pDVar15 == (Delegate *)0x0) goto code_?;
            }
            *(Delegate **)(iVar18 + 0x1c) = pDVar15;
            if ((((uint)(TypeInfo__ChatCommandManager->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__ChatCommandManager->_1).cctor_started == 0)) {
              func_?();
            }
            pAVar19 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
            pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar13,(Object *)&UNK_?,
                       MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,(MethodInfo *)0x0);
            pAVar20 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar19,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar19 = (Action *)0x0;
            if (pAVar20 != (Action *)0x0) {
              if (pAVar20->klass == TypeInfo__System__Action) {
                pAVar19 = pAVar20;
              }
              if (pAVar19 == (Action *)0x0) goto code_?;
            }
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_StartShake,pAVar19,(MethodInfo *)0x0);
            pAVar19 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
            pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar13,(Object *)&UNK_?,
                       MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,(MethodInfo *)0x0);
            pAVar20 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar19,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar19 = (Action *)0x0;
            if (pAVar20 != (Action *)0x0) {
              if (pAVar20->klass == TypeInfo__System__Action) {
                pAVar19 = pAVar20;
              }
              if (pAVar19 == (Action *)0x0) goto code_?;
            }
            ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                      (ChatCommand__Enum_StartNod,pAVar19,(MethodInfo *)0x0);
            pAVar19 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
            pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar13,(Object *)&UNK_?,
                       MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,(MethodInfo *)0x0);
            pAVar20 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar19,(Delegate *)pUVar13,(MethodInfo *)0x0);
            pAVar19 = (Action *)0x0;
            if (pAVar20 == (Action *)0x0) {
code_?:
              ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                        (ChatCommand__Enum_StartWave,pAVar19,(MethodInfo *)0x0);
              return;
            }
            if (pAVar20->klass == TypeInfo__System__Action) {
              pAVar19 = pAVar20;
            }
            if (pAVar19 != (Action *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnNodChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnNodChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).StartEmote.method)(this,2,this->klass[1]._0.image);
  return;
}


/* Void OnShakeChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnShakeChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).StartEmote.method)(this,1,this->klass[1]._0.image);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)(this->fields)._.emoteHandler;
  if (pAVar1 == (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0) {
    func_?(0);
    pAVar1 = extraout_ECX;
    pAVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).naturalAligment;
    pAVar4 = pAVar1->klass;
    bVar5 = (pAVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pAVar4->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pAVar7 = (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0;
    if (bVar6) {
      pAVar7 = pAVar1;
    }
    pAVar2 = TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal;
    if (pAVar7 != (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pAVar4->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pAVar7 = (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0;
      if (bVar6) {
        pAVar7 = pAVar1;
      }
      if (pAVar7 != (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        uVar8 = (undefined1)emoteType;
        EVar9 = emoteType & 0xff;
        if (EVar9 == EmoteTypes__Enum_Shake) {
          AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
          AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart(pAVar7,(MethodInfo *)0x0)
          ;
          return;
        }
        if (EVar9 == EmoteTypes__Enum_Nod) {
          AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
          AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart(pAVar7,(MethodInfo *)0x0);
          return;
        }
        if (EVar9 != EmoteTypes__Enum_Wave) {
          emoteType = CONCAT13(uVar8,(undefined3)emoteType);
          arg1 = (Object *)func_?(TypeInfo__EmoteTypes,(byte *)((int)&emoteType + 3));
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          message = mscorlib.dll::System::String::String_Concat_1
                              ((Object *)StringLiteral_Could_not_start_and_network_,arg1,
                               (Object *)StringLiteral___Please_add_it_to_the_StartEmot,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)message,(MethodInfo *)0x0);
          return;
        }
        AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
        AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart(pAVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(pAVar1,pAVar2);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartPointing() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((pAVar1->fields)._.isActive != 0) {
      fVar2 = (pAVar1->fields)._.prevLookDirection.x;
      fVar3 = (pAVar1->fields)._.prevLookDirection.y;
      (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
      fVar4 = (pAVar1->fields)._.prevLookDirection.z;
      (pAVar1->fields)._.pointingDirection.x = fVar2;
      (pAVar1->fields)._.pointingDirection.y = fVar3;
      (pAVar1->fields)._.pointingDirection.z = fVar4;
      this_00 = (Action_1_UIPushOption_ *)(pAVar1->fields).OnIsPointingChange;
      if (this_00 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_00,UIPushOption__Enum_Blocking,
                   MethodInfo__System__Action<bool>__Invoke_bool_);
      }
    }
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SynchronizeEmote(Int32) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizeEmote
               (AvatarLimbManagerLocal *this,int32_t newEmote,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
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
  func_?(0);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
      pMVar7 = (pLVar6->fields).HeadRotationYaw;
      puVar8 = (undefined8 *)func_?(auStack_9,&fStack_2,0);
      uStack_10._4_4_ = (AvatarLimbManagerLocal *)((ulonglong)*puVar8 >> 0x20);
      this = uStack_10._4_4_;
      uStack_10 = *puVar8;
      pOVar11 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar11,(MethodInfo *)0x0);
        pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
          pMVar7 = (pLVar6->fields).HeadRotationPitch;
          puVar8 = (undefined8 *)func_?(auStack_9,&fStack_2,0);
          uStack_10 = *puVar8;
          newHeadRotation.w = (float)uStack_10;
          pOVar11 = (Object *)func_?(TypeInfo__System__Single,&newHeadRotation.w);
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
      pMVar7 = (pLVar6->fields).PointRotationYaw;
      puVar8 = (undefined8 *)func_?(auStack_9,&fStack_2,0);
      uStack_10._4_4_ = (AvatarLimbManagerLocal *)((ulonglong)*puVar8 >> 0x20);
      this = uStack_10._4_4_;
      uStack_10 = *puVar8;
      pOVar11 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar11,(MethodInfo *)0x0);
        pLVar6 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar6 != (LimbRotationRuntimeData *)0x0) {
          pMVar7 = (pLVar6->fields).PointRotationPitch;
          puVar8 = (undefined8 *)func_?(auStack_9,&fStack_2,0);
          uStack_10 = *puVar8;
          newPointRotation.w = (float)uStack_10;
          pOVar11 = (Object *)func_?(TypeInfo__System__Single,&newPointRotation.w);
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_UpdateLimbRotations
               (AvatarLimbManagerLocal *this,Vector3 lookDirection,MethodInfo *method)

{
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) goto code_?;
  AvatarLimbManager+AvatarLookDirectionHandler::AvatarLimbManager_AvatarLookDirectionHandler_Update
            (pAVar1,lookDirection,(MethodInfo *)0x0);
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 == (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) goto code_?;
  uStack_2._0_4_ = (pAVar1->fields).localLookDirection.x;
  uStack_2._4_4_ = (pAVar1->fields).localLookDirection.y;
  pAVar3 = (this->fields)._.emoteHandler;
  fVar4 = (pAVar1->fields).localLookDirection.z;
  if (pAVar3 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
  (*(code *)(pAVar3->klass->vtable).UpdateEmotes.method)();
  this_00 = (this->fields).headRotationCalculator;
  pAVar5 = (this->fields).headRotationHandler;
  if (this_00 == (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) goto code_?;
  localLookDirection.z = fVar4;
  localLookDirection.x = (float)(undefined4)uStack_2;
  localLookDirection.y = (float)uStack_2._4_4_;
  pAVar6 = AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
            AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
                      ((AvatarLimbManagerLocal_HeadRotationCalculationResult *)&stack0xffffff50,
                       this_00,localLookDirection,(MethodInfo *)0x0);
  if (pAVar5 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) goto code_?;
  fVar4 = (pAVar6->YawRotation).y;
  fVar7 = (pAVar6->YawRotation).z;
  fVar8 = (pAVar6->YawRotation).w;
  fVar9 = (pAVar6->PitchRotation).x;
  fVar10 = (pAVar6->PitchRotation).y;
  fVar11 = (pAVar6->PitchRotation).z;
  fVar12 = (pAVar6->PitchRotation).w;
  uVar13 = *(undefined4 *)&pAVar6->ShouldLean;
  (pAVar5->fields).yawRotation.x = (pAVar6->YawRotation).x;
  (pAVar5->fields).yawRotation.y = fVar4;
  (pAVar5->fields).yawRotation.z = fVar7;
  (pAVar5->fields).yawRotation.w = fVar8;
  (pAVar5->fields)._.shouldLean = (bool)uVar13;
  (pAVar5->fields).pitchRotation.x = fVar9;
  (pAVar5->fields).pitchRotation.y = fVar10;
  (pAVar5->fields).pitchRotation.z = fVar11;
  (pAVar5->fields).pitchRotation.w = fVar12;
  pAVar5 = (this->fields).headRotationHandler;
  if (pAVar5 == (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) goto code_?;
  (*(code *)(pAVar5->klass->vtable).UpdateRotation.method)();
  pAVar14 = (this->fields).pointingHandler;
  if ((pAVar14 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) ||
     (this_01 = (this->fields).pointingRotationCalculator,
     this_01 == (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0))
  goto code_?;
  pAVar15 = AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
            AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
                      ((AvatarLimbManagerLocal_PointingRotationCalculationResult *)&stack0xffffff50,
                       this_01,(pAVar14->fields)._.pointingDirection,(MethodInfo *)0x0);
  if (pAVar14 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) goto code_?;
  QStack_16.x = (pAVar15->YawRotation).x;
  QStack_16.y = (pAVar15->YawRotation).y;
  QStack_16.z = (pAVar15->YawRotation).z;
  QStack_16.w = (pAVar15->YawRotation).w;
  fStack_17 = (pAVar15->PitchRotation).x;
  fStack_18 = (pAVar15->PitchRotation).y;
  fStack_19 = (pAVar15->PitchRotation).z;
  fStack_20 = (pAVar15->PitchRotation).w;
  uVar13 = *(undefined4 *)&pAVar15->ShouldPoint;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      (aQStack_22,(MethodInfo *)0x0);
  fStack_23 = pQVar21->x;
  fStack_24 = pQVar21->y;
  fStack_25 = pQVar21->z;
  fStack_26 = pQVar21->w;
  puVar27 = (undefined8 *)func_?();
  uStack_28 = *(undefined4 *)(puVar27 + 1);
  uStack_29._4_4_ = (float)((ulonglong)*puVar27 >> 0x20);
  if (uStack_29._4_4_ < _UNK_?) {
code_?:
    uStack_28 = 0;
    uStack_29 = 0;
    func_?();
  }
  else {
    uStack_29 = *puVar27;
    puVar27 = (undefined8 *)func_?();
    uStack_28 = *(undefined4 *)(puVar27 + 1);
    uStack_29._4_4_ = (float)((ulonglong)*puVar27 >> 0x20);
    if (_UNK_? < uStack_29._4_4_) goto code_?;
    uStack_30 = 0;
    uStack_31 = 0;
    uStack_29 = *puVar27;
    func_?();
  }
  func_?();
  fStack_32 = fStack_23;
  fStack_33 = fStack_24;
  fStack_34 = fStack_25;
  fStack_35 = fStack_26;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  lhs.y = QStack_16.y;
  lhs.x = QStack_16.x;
  lhs.z = QStack_16.z;
  lhs.w = QStack_16.w;
  rhs.y = fStack_33;
  rhs.x = fStack_32;
  rhs.z = fStack_34;
  rhs.w = fStack_35;
  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      (&QStack_16,lhs,rhs,(MethodInfo *)0x0);
  fVar4 = pQVar21->x;
  fVar7 = pQVar21->y;
  fVar8 = pQVar21->z;
  fVar9 = pQVar21->w;
  (pAVar14->fields)._.shouldPoint = (bool)uVar13;
  (pAVar14->fields).yawRotation.x = fVar4;
  (pAVar14->fields).yawRotation.y = fVar7;
  (pAVar14->fields).yawRotation.z = fVar8;
  (pAVar14->fields).yawRotation.w = fVar9;
  (pAVar14->fields).pitchRotation.x = fStack_17;
  (pAVar14->fields).pitchRotation.y = fStack_18;
  (pAVar14->fields).pitchRotation.z = fStack_19;
  (pAVar14->fields).pitchRotation.w = fStack_20;
  pAVar14 = (this->fields).pointingHandler;
  if (pAVar14 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    (*(code *)(pAVar14->klass->vtable).UpdatePointing.method)(pAVar14,uStack_2);
    AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
              ((AvatarLimbManager *)this,(MethodInfo *)0x0);
    this_02 = (this->fields)._.limbRotator;
    if (this_02 != (AvatarLimbManager_LimbRotator *)0x0) {
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_UpdateLimbs
                (this_02,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}

