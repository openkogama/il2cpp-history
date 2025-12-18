
/* Void Activate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_Activate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum fromMode,
               MethodInfo *method)

{
  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,(char)fromMode);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = (pMVar1->fields)._.SpawnRoleModeTypes;
    aiStackX_10[0] = (this->fields)._.modeTypes;
    value = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      pIVar2 = (this->fields).avatarInputController;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_4 = 0;
        uStack_5 = 0;
        pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6,&uStack_4);
        if (pIVar2 != (IAvatarInputController *)0x0) {
          pIVar9 = pIVar2->klass;
          uVar10 = 0;
          uVar11._0_1_ = (pIVar9->_1).rank;
          uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
          if (uVar11 != 0) {
            do {
              if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                  (Il2CppClass *)TypeInfo__IMotorAPI) {
                pVVar12 = &(&pIVar9->vtable)[pIVar9->interfaceOffsets[uVar10].offset + 3].
                           HandleInput;
                goto code_?;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
          }
          pVVar12 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__IMotorAPI,3);
code_?:
          method_00 = pVVar12->method;
          (*pVVar12->methodPtr)(pIVar2);
          pTVar3 = MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
                              (this,(MethodInfo *)0x0);
          bVar13 = iRam_? != 0;
          (this->fields).flagTransform = pTVar3;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)&(this->fields).flagTransform >> 0xc);
            uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            method_00 = (MethodInfo *)(ulonglong)(uVar14 & 0x3f);
            do {
              uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar16 == *puVar17;
              if (bVar13) {
                *puVar17 = uVar16 | 1L << (longlong)method_00;
              }
              UNLOCK();
            } while (!bVar13);
          }
          pMVar1 = (this->fields)._.mvAvatar;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             (pAVar18 = (pMVar1->fields).avatarEquipable, pAVar18 != (AvatarEquipable *)0x0)) {
            (*(pAVar18->klass->vtable).Unequip.methodPtr)();
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar19 != (MVGameControllerBase *)0x0) &&
               (pFVar20 = (pMVar19->fields).flagDebriefingControl,
               pFVar20 != (FlagDebriefingControl *)0x0)) {
              bVar21 = (pFVar20->fields).IsInFlagDebriefing;
              (this->fields).isInDebriefing = bVar21;
              if (bVar21 == 0) {
                pMVar1 = (this->fields)._.mvAvatar;
                if (((pMVar1 == (MVAvatarLocal *)0x0) ||
                    (pAVar22 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                         (pMVar1,(MethodInfo *)0x0), pAVar22 == (AvatarLocal *)0x0))
                   || ((pAVar22->fields).avatarCameraController == (IAvatarCameraController *)0x0))
                goto code_?;
                FUN_?(4,TypeInfo__IAvatarCameraController);
              }
              else {
                pTVar3 = (this->fields).flagTransform;
                if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                  FUN_?();
                }
                player = (MVPlayer *)0x0;
                CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                          (pTVar3,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar19 == (MVGameControllerBase *)0x0) ||
                   (pMVar23 = (pMVar19->fields).game, pMVar23 == (MVNetworkGame *)0x0))
                goto code_?;
                this_01 = (pMVar23->fields).gameStatCounterManager;
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                if (extraout_RAX == 0) goto code_?;
                team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
                MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                if ((extraout_RAX_00 == 0) || (this_01 == (GameStatCounterManager *)0x0))
                goto code_?;
                MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,(GameStatCounterType__Enum)
                                   CONCAT71((int7)((ulonglong)player >> 8),8),team,
                           *(int32_t *)(extraout_RAX_00 + 0x5c),(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__IAvatarCameraController);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar1 = (this->fields)._.mvAvatar;
                if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
                bVar21 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(pMVar1,(MethodInfo *)0x0);
                if (bVar21 != 0) {
                  pMVar1 = (this->fields)._.mvAvatar;
                  if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
                  MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
                }
                pMVar1 = (this->fields)._.mvAvatar;
                if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                   (this_02 = (pMVar1->fields).pickupOwner, this_02 == (AvatarPickupOwner *)0x0))
                goto code_?;
                MVPickupOwner::MVPickupOwner_HandleFire
                          ((MVPickupOwner *)this_02,0,(pMVar1->fields)._.IsFiring,(MethodInfo *)0x0)
                ;
                pMVar1 = (this->fields)._.mvAvatar;
                if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                   ((pAVar22 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal
                                         (pMVar1,(MethodInfo *)0x0), pAVar22 == (AvatarLocal *)0x0
                    || ((pAVar22->fields).avatarCameraController == (IAvatarCameraController *)0x0))
                   )) goto code_?;
                FUN_?(4,TypeInfo__IAvatarCameraController);
                pMVar1 = (this->fields)._.mvAvatar;
                (this->fields).isInDebriefing = 1;
                if ((pMVar1 == (MVAvatarLocal *)0x0) ||
                   ((pAVar24 = (pMVar1->fields)._.avatar, pAVar24 == (Avatar *)0x0 ||
                    (this_03 = (pAVar24->fields).avatarFader, this_03 == (AvatarFader *)0x0))))
                goto code_?;
                AvatarFader::AvatarFader_SetTransparency(this_03,_UNK_?,(MethodInfo *)0x0);
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar19 != (MVGameControllerBase *)0x0) &&
                 (pFVar20 = (pMVar19->fields).flagDebriefingControl,
                 pFVar20 != (FlagDebriefingControl *)0x0)) {
                pAVar25 = (pFVar20->fields).OnFlagDebriefing;
                pDVar26 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                FUN_?(pDVar26,this);
                pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar25,pDVar26,(MethodInfo *)0x0);
                pAVar27 = TypeInfo__System__Action<int>;
                if (pDVar26 == (Delegate *)0x0) {
                  (pFVar20->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
                }
                else {
                  pAVar25 = (Action_1_Int32_ *)FUN_?(pDVar26,TypeInfo__System__Action<int>);
                  if (pAVar25 == (Action_1_Int32_ *)0x0) {
                    FUN_?(pDVar26,pAVar27);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  (pFVar20->fields).OnFlagDebriefing = pAVar25;
                  pAVar27 = TypeInfo__System__Action<int>;
                  lVar28 = FUN_?(pDVar26,TypeInfo__System__Action<int>);
                  if (lVar28 == 0) {
                    FUN_?(pDVar26,pAVar27);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar14 = (uint)((ulonglong)&(pFVar20->fields).OnFlagDebriefing >> 0xc);
                  uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
                  do {
                    uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
                    puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
                    LOCK();
                    bVar13 = uVar16 == *puVar17;
                    if (bVar13) {
                      *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar19 != (MVGameControllerBase *)0x0) &&
                   (pFVar20 = (pMVar19->fields).flagDebriefingControl,
                   pFVar20 != (FlagDebriefingControl *)0x0)) {
                  pAVar29 = (pFVar20->fields).OnFlagDebriefingEnd;
                  this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_04,(Object *)this,
                             MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                             ,(MethodInfo *)0x0);
                  pAVar29 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar29,(Delegate *)this_04,(MethodInfo *)0x0);
                  if (pAVar29 == (Action *)0x0) {
                    (pFVar20->fields).OnFlagDebriefingEnd = (Action *)0x0;
                  }
                  else {
                    pAVar30 = (Action *)0x0;
                    if (pAVar29->klass == TypeInfo__System__Action) {
                      pAVar30 = pAVar29;
                    }
                    if (pAVar30 == (Action *)0x0) {
                      FUN_?(pAVar29);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    (pFVar20->fields).OnFlagDebriefingEnd = pAVar30;
                    pAVar30 = (Action *)0x0;
                    if (pAVar29->klass == TypeInfo__System__Action) {
                      pAVar30 = pAVar29;
                    }
                    if (pAVar30 == (Action *)0x0) {
                      FUN_?(pAVar29);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar14 = (uint)((ulonglong)&(pFVar20->fields).OnFlagDebriefingEnd >> 0xc);
                    uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
                    do {
                      uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
                      puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
                      LOCK();
                      bVar13 = uVar16 == *puVar17;
                      if (bVar13) {
                        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar13);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IAvatarInputController CreateInputController() */

IAvatarInputController *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_CreateInputController
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarInputController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
        AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
        return (IAvatarInputController *)this_00;
      }
    }
    this_01 = (AvatarInputController *)FUN_?(TypeInfo__AvatarInputController);
    AvatarInputController::AvatarInputController__ctor(this_01,(MethodInfo *)0x0);
    return (IAvatarInputController *)this_01;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IAvatarInputController *)(*pcVar2)();
  return pIVar3;
}


/* Void DeActivate(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DeActivate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,AvatarRuntimeState__Enum toMode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarRuntimeState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnEnterTimeAttackFlagDebriefing_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DeActivate_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_attack_flag_debriefing_mode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = TypeInfo__AvatarRuntimeState;
  auStack_1._8_8_ = (MonitorData *)0xffffffffffffffff;
  uStack_2 = (char)toMode;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Time_attack_flag_debriefing_mode,pSVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  value = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_1._0_8_ = (Enum__Class *)0x0;
  auStack_1._8_8_ = (MonitorData *)0x0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (value,(ReadOnlySpan_1_Char_ *)auStack_1,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_DeActivate_,pSVar3,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pMVar6 = (this->fields)._.mvAvatar;
  if ((pMVar6 != (MVAvatarLocal *)0x0) &&
     (pAVar7 = (pMVar6->fields).interactableLocal, pAVar7 != (AvatarInteractable *)0x0)) {
    (*(pAVar7->klass->vtable).AddModifier.methodPtr)
              (pAVar7,0x11,0xffffffff,0,(pAVar7->klass->vtable).AddModifier.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pFVar9 = (pMVar8->fields).flagDebriefingControl, pFVar9 != (FlagDebriefingControl *)0x0)) {
      pAVar10 = (pFVar9->fields).OnFlagDebriefing;
      pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
      FUN_?(pDVar11,this);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
      pAVar12 = TypeInfo__System__Action<int>;
      if (pDVar11 == (Delegate *)0x0) {
        (pFVar9->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
      }
      else {
        pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
        if (pAVar10 == (Action_1_Int32_ *)0x0) {
          FUN_?(pDVar11,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pFVar9->fields).OnFlagDebriefing = pAVar10;
        pAVar12 = TypeInfo__System__Action<int>;
        lVar13 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
        if (lVar13 == 0) {
          FUN_?(pDVar11,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)&(pFVar9->fields).OnFlagDebriefing >> 0xc);
        lVar13 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
        do {
          uVar15 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar16 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar17 = uVar15 == *puVar16;
          if (bVar17) {
            *puVar16 = uVar15 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar17);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar8 != (MVGameControllerBase *)0x0) &&
         (pFVar9 = (pMVar8->fields).flagDebriefingControl, pFVar9 != (FlagDebriefingControl *)0x0))
      {
        pAVar18 = (pFVar9->fields).OnFlagDebriefingEnd;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__OnExitTimeAttackFlagDebriefing__
                   ,(MethodInfo *)0x0);
        pAVar18 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar18,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pAVar18 == (Action *)0x0) {
          (pFVar9->fields).OnFlagDebriefingEnd = (Action *)0x0;
        }
        else {
          pAVar19 = (Action *)0x0;
          if (pAVar18->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar18;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?(pAVar18);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pFVar9->fields).OnFlagDebriefingEnd = pAVar19;
          pAVar19 = (Action *)0x0;
          if (pAVar18->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar18;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?(pAVar18);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar14 = (uint)((ulonglong)&(pFVar9->fields).OnFlagDebriefingEnd >> 0xc);
          lVar13 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
          do {
            uVar15 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar16 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar14 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DieByFalling() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_DieByFalling
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && ((pMVar1->fields).game != (MVNetworkGame *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar1 != (MVGameControllerBase *)0x0) {
      cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable).__unknown_1.method);
      if (cVar2 == '\0') {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField != 0)
      {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar3 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar3->fields).gameMode == 0) {
          return;
        }
        MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar4 == MVGameMode__Enum_SpaceEdit) {
          return;
        }
      }
      pMVar5 = (this->fields)._.mvAvatar;
      if ((pMVar5 != (MVAvatarLocal *)0x0) &&
         (pMVar6 = (pMVar5->fields)._.Health,
         pMVar6 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
        pMVar7 = (pMVar6->klass->vtable).set_Value.method;
        (*(pMVar6->klass->vtable).set_Value.methodPtr)(pMVar6,0,pMVar7);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar8 = (pMVar1->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
            (pMVar9 = (pMVar8->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0)) &&
           (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar9,(MethodInfo *)0x0)
           , pMVar10 != (MVLocalPlayer *)0x0)) {
          avatarId = (pMVar10->fields)._._ActorNr_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 != (MVGameControllerBase *)0x0) &&
              (pMVar8 = (pMVar1->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
             ((pMVar9 = (pMVar8->fields).playerContainer, pMVar9 != (MVPlayerContainer *)0x0 &&
              ((pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVLocalPlayer *)0x0 &&
               (gameMsgData = GameMessages::GameMessages_MakePlayerKilledMessage
                                        (avatarId,(pMVar10->fields)._._ActorNr_k__BackingField,
                                         (PlayerKilledByType__Enum)
                                         CONCAT71((int7)((ulonglong)pMVar7 >> 8),10),
                                         (MethodInfo *)0x0),
               this_00 != (MVNetworkGame_OperationRequests *)0x0)))))) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PostGameMsg
                      (this_00,MVGameMsgType__Enum_AvatarKilled,gameMsgData,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_FixedUpdate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,IInputToPlayerMovement *movementMap
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarInputController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((obj->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
      uStack_5._0_4_ = (pMVar4->fields).worldBounds.m_Extents.y;
      uStack_5._4_4_ = (pMVar4->fields).worldBounds.m_Extents.z;
      if (0.0 < ((pMVar4->fields).worldBounds.m_Center.y - (float)(undefined4)uStack_5) -
                _UNK_?) {
        MVAvatarLocal_TimeAttackFlagDebriefingMode_DieByFalling(this,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar6 = (pMVar1->fields).avatarMotor, pAVar6 != (AvatarMotor *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar7._._.m_CachedPtr = (pAVar6->fields)._._._._._;
        if (BVar7._._.m_CachedPtr == (Object_1__Fields)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        cVar8 = (*pcRam_?)(BVar7._._.m_CachedPtr);
        pMVar1 = (this->fields)._.mvAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          if (cVar8 == '\0') {
            pAVar6 = (pMVar1->fields).avatarMotor;
            if (pAVar6 != (AvatarMotor *)0x0) {
              AvatarMotor::AvatarMotor_UpdateVelocity(pAVar6,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pAVar9 = (pMVar1->fields).interactableLocal;
            if (pAVar9 != (AvatarInteractable *)0x0) {
              (*(pAVar9->klass->vtable).AddModifier.methodPtr)
                        (pAVar9,0x13,0xffffffff,0,(pAVar9->klass->vtable).AddModifier.method);
              pVVar10 = MVAvatarLocal_TimeAttackFlagDebriefingMode_GetAvatarMoveDirection
                                  (&VStack_11,this,(MethodInfo *)0x0);
              pIVar12 = (this->fields).avatarInputController;
              uVar3._0_4_ = pVVar10->x;
              uVar3._4_4_ = pVVar10->y;
              fVar13 = pVVar10->z;
              if (movementMap != (IInputToPlayerMovement *)0x0) {
                FUN_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar1 = (this->fields)._.mvAvatar;
                if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                    (MVAvatarLocal::MVAvatarLocal_get_InFirstPersonGunMode(pMVar1,(MethodInfo *)0x0)
                    , (this->fields)._.mvAvatar != (MVAvatarLocal *)0x0)) &&
                   (pIVar12 != (IAvatarInputController *)0x0)) {
                  VStack_11._0_8_ = uVar3;
                  VStack_11.z = fVar13;
                  FUN_?();
                  pMVar1 = (this->fields)._.mvAvatar;
                  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
                     (pAVar6 = (pMVar1->fields).avatarMotor, pAVar6 != (AvatarMotor *)0x0)) {
                    AvatarMotor::AvatarMotor_FixedUpdateFunction
                              (pAVar6,(IMotorAPI *)(this->fields).avatarInputController,
                               (MethodInfo *)0x0);
                    if ((this->fields).isInDebriefing == 0) {
                      return;
                    }
                    pMVar1 = (this->fields)._.mvAvatar;
                    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                        (pMVar14 = (pMVar1->fields)._.body, pMVar14 != (MVBody *)0x0)) &&
                       ((pMVar15 = (pMVar14->fields).bodyObject, pMVar15 != (MVBodyObject *)0x0 &&
                        ((pBVar16 = (pMVar15->fields).boneAnimation, pBVar16 != (BoneAnimation *)0x0 &&
                         (this_01 = (pBVar16->fields).avatarAnimation, this_01 != (Animation *)0x0)))
                        ))) {
                      bVar17 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                               Animation_IsPlaying(this_01,StringLiteral_Jump,(MethodInfo *)0x0);
                      if (bVar17 != 0) {
                        return;
                      }
                      pMVar1 = (this->fields)._.mvAvatar;
                      if (pMVar1 != (MVAvatarLocal *)0x0) {
                        MVAvatarLocal::MVAvatarLocal_SetAnimation
                                  (pMVar1,StringLiteral_Idle,(MethodInfo *)0x0);
                        pMVar1 = (this->fields)._.mvAvatar;
                        if (pMVar1 != (MVAvatarLocal *)0x0) {
                          MVAvatarLocal::MVAvatarLocal_SetAnimation
                                    (pMVar1,StringLiteral_Jump,(MethodInfo *)0x0);
                          pMVar1 = (this->fields)._.mvAvatar;
                          if ((((pMVar1 != (MVAvatarLocal *)0x0) &&
                               (pMVar14 = (pMVar1->fields)._.body, pMVar14 != (MVBody *)0x0)) &&
                              (pMVar15 = (pMVar14->fields).bodyObject, pMVar15 != (MVBodyObject *)0x0))
                             && (pBVar16 = (pMVar15->fields).boneAnimation,
                                pBVar16 != (BoneAnimation *)0x0)) {
                            BoneAnimation::BoneAnimation_Play
                                      (pBVar16,StringLiteral_Jump,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FrameUpdate(InputToInGameAction) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_FrameUpdate
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,InputToInGameAction *interactionMap
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((Object_1__Fields)(pAVar2->fields)._._._._._ == (Object_1__Fields)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  cVar5 = (*pcRam_?)();
  if (cVar5 != '\0') {
    pMVar1 = (this->fields)._.mvAvatar;
    if ((((pMVar1 == (MVAvatarLocal *)0x0) ||
         (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 == (AvatarMotor *)0x0)) ||
        (pSVar6 = (pAVar2->fields).smoothCharacterController,
        pSVar6 == (SmoothCharacterController *)0x0)) ||
       (this_00 = (pSVar6->fields).smoothPhysicsMovement, this_00 == (SmoothPhysicsMovement *)0x0))
    goto code_?;
    SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_00,(MethodInfo *)0x0);
  }
  if ((this->fields).isInDebriefing == 0) {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar7 == (MainCameraManager *)0x0) ||
        (pMVar8 = (pMVar7->fields).cameraController, pMVar8 == (MVCameraController *)0x0)) ||
       ((pMVar9 = (pMVar8->fields).cameraStack, pMVar9 == (MVCameraController_CameraStack *)0x0 ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0))))
    goto code_?;
    iVar11 = (*(pMVar10->klass->vtable).__unknown.methodPtr)();
    if (iVar11 != 0x12) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar12 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0),
          pAVar12 == (AvatarLocal *)0x0)) ||
         ((pAVar12->fields).avatarCameraController == (IAvatarCameraController *)0x0))
      goto code_?;
      FUN_?();
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((((pMVar7 == (MainCameraManager *)0x0) ||
           (pMVar8 = (pMVar7->fields).cameraController, pMVar8 == (MVCameraController *)0x0)) ||
          (pMVar9 = (pMVar8->fields).cameraStack, pMVar9 == (MVCameraController_CameraStack *)0x0))
         || (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                 (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0))
      goto code_?;
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar10,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if ((pMVar1 == (MVAvatarLocal *)0x0) ||
         (obj = (pMVar1->fields)._._._.transform, obj == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_14._0_8_ = 0;
      stack0xffffffffffffffe0 = 0;
      pvVar15 = (obj->fields)._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar15);
      if (pTVar13 == (Transform *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      VStack_16._0_8_ = auStack_14._0_8_;
      VStack_16.z = (float)auStack_14._8_4_;
      uStack_17 = uStack_18;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pTVar13->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)();
    }
  }
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((((pMVar7 == (MainCameraManager *)0x0) ||
       (pMVar8 = (pMVar7->fields).cameraController, pMVar8 == (MVCameraController *)0x0)) ||
      (pMVar9 = (pMVar8->fields).cameraStack, pMVar9 == (MVCameraController_CameraStack *)0x0)) ||
     (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0))
  goto code_?;
  iVar11 = (*(pMVar10->klass->vtable).__unknown.methodPtr)();
  if (iVar11 == 0x11) {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar7 == (MainCameraManager *)0x0) ||
        (pMVar8 = (pMVar7->fields).cameraController, pMVar8 == (MVCameraController *)0x0)) ||
       ((pMVar9 = (pMVar8->fields).cameraStack, pMVar9 == (MVCameraController_CameraStack *)0x0 ||
        (pMVar10 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                             (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVCameraBase *)0x0))))
    goto code_?;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar10,(MethodInfo *)0x0);
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar19 = (float)(*pcRam_?)();
    if (pTVar13 == (Transform *)0x0) goto code_?;
    VStack_16.z = 0.0;
    VStack_16._0_8_ = (ulonglong)(uint)(fVar19 * _UNK_?) << 0x20;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
              (pTVar13,&VStack_16,Space__Enum_Self,(MethodInfo *)0x0);
  }
  if ((this->fields).isInDebriefing != 0) {
    return;
  }
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar20 = (this->fields).avatarInputController;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar13 = (pMVar1->fields)._._._.transform, pTVar13 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_14._0_8_ = 0;
    stack0xffffffffffffffe0 = 0;
    pvVar15 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar15,auStack_14);
    if (pIVar20 != (IAvatarInputController *)0x0) {
      FUN_?();
      pMVar1 = (this->fields)._.mvAvatar;
      pIVar20 = (this->fields).avatarInputController;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pTVar13 = (pMVar1->fields)._._._.transform, pTVar13 != (Transform *)0x0)) &&
         (pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)auStack_14,pTVar13,(MethodInfo *)0x0),
         pIVar20 != (IAvatarInputController *)0x0)) {
        VStack_16.x = pVVar21->x;
        VStack_16.y = pVVar21->y;
        VStack_16.z = pVVar21->z;
        FUN_?(VStack_16.x,TypeInfo__IMotorAPI,pIVar20,&VStack_16);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 GetAvatarMoveDirection() */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
          MVAvatarLocal_TimeAttackFlagDebriefingMode_GetAvatarMoveDirection
                    (Vector3 *__return_storage_ptr__,
                    MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if ((this->fields).isInDebriefing == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->zeroVector).y;
    fVar3 = (pVVar1->zeroVector).z;
    __return_storage_ptr__->x = (pVVar1->zeroVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  obj = (this->fields).flagTransform;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    VStack_4.z = 0.0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&VStack_4);
    pMVar9 = (this->fields)._.mvAvatar;
    if (pMVar9 != (MVAvatarLocal *)0x0) {
      puVar10 = (undefined8 *)
               (*(pMVar9->klass->vtable).get_Position.methodPtr)
                         (auStack_11,pMVar9,(pMVar9->klass->vtable).get_Position.method);
      VStack_12._0_8_ = *puVar10;
      VStack_4.z = VStack_4.z - *(float *)(puVar10 + 1);
      VStack_4.x = VStack_4.x - VStack_12.x;
      fVar2 = VStack_4.x * VStack_4.x + 0.0 + VStack_4.z * VStack_4.z;
      VStack_4._0_8_ = ZEXT48((uint)VStack_4.x);
      fVar3 = _UNK_?;
      if ((_UNK_? <= fVar2) && (fVar3 = _UNK_?, fVar2 <= _UNK_?)) {
        fVar3 = _UNK_?;
      }
      pVVar7 = MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                         (&VStack_12,this,&VStack_4,fVar3,(MethodInfo *)0x0);
      fVar2 = pVVar7->y;
      fVar3 = pVVar7->z;
      __return_storage_ptr__->x = pVVar7->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
MVAvatarLocal_TimeAttackFlagDebriefingMode_GetClosestTimeAttackFlag
          (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  pTVar2 = (Transform *)0x0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
      if ((pLVar3->fields)._size == 0) {
        uVar4 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar4);
        message = (String *)func_?(&StringLiteral_Entered_TimeAttackFlagDebriefing);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                     MethodInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode__GetClosestTimeAttackFlag__
                                    );
        FUN_?(this_01,uVar4);
        pcVar5 = (code *)swi(3);
        pTVar2 = (Transform *)(*pcVar5)();
        return pTVar2;
      }
      pMVar6 = (this->fields)._.mvAvatar;
      if (pMVar6 != (MVAvatarLocal *)0x0) {
        puVar7 = (undefined8 *)
                 (*(pMVar6->klass->vtable).get_Position.methodPtr)
                           (auStack_8,pMVar6,(pMVar6->klass->vtable).get_Position.method);
        lVar9 = 0x20;
        fVar10 = *(float *)(puVar7 + 1);
        fStack_11 = (float)((ulonglong)*puVar7 >> 0x20);
        fStack_12 = (float)*puVar7;
        pTVar13 = pTVar2;
        while( true ) {
          uVar14 = (uint)pTVar2;
          if ((pLVar3->fields)._size <= (int)uVar14) {
            return pTVar13;
          }
          if ((uint)(pLVar3->fields)._size <= uVar14) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            pTVar2 = (Transform *)(*pcVar5)();
            return pTVar2;
          }
          pMVar15 = (pLVar3->fields)._items;
          if (pMVar15 == (MVWorldObjectClient__Array *)0x0) break;
          if ((uint)pMVar15->max_length <= uVar14) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            pTVar2 = (Transform *)(*pcVar5)();
            return pTVar2;
          }
          plVar16 = *(longlong **)((longlong)pMVar15->vector + lVar9 + -0x20);
          if (plVar16 == (longlong *)0x0) break;
          puVar7 = (undefined8 *)
                   (**(code **)(*plVar16 + 0x178))
                             (auStack_8,plVar16,*(undefined8 *)(*plVar16 + 0x180));
          fVar17 = fStack_12 - (float)*puVar7;
          fVar18 = fStack_11 - (float)((ulonglong)*puVar7 >> 0x20);
          fVar17 = fVar18 * fVar18 + fVar17 * fVar17 +
                   (fVar10 - *(float *)(puVar7 + 1)) * (fVar10 - *(float *)(puVar7 + 1));
          if (fVar17 < fVar1) {
            lVar19 = FUN_?(pLVar3,pTVar2);
            if (lVar19 == 0) break;
            pTVar13 = *(Transform **)(lVar19 + 0xd8);
            fVar1 = fVar17;
          }
          pTVar2 = (Transform *)(ulonglong)(uVar14 + 1);
          lVar9 = lVar9 + 8;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pTVar2 = (Transform *)(*pcVar5)();
  return pTVar2;
}


/* Void OnEnterTimeAttackFlagDebriefing(Int32) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnEnterTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(pMVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      MVAvatarLocal::MVAvatarLocal_LeaveVehicle(pMVar1,0,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (this_00 = (pMVar1->fields).pickupOwner, this_00 != (AvatarPickupOwner *)0x0)) {
      MVPickupOwner::MVPickupOwner_HandleFire
                ((MVPickupOwner *)this_00,0,(pMVar1->fields)._.IsFiring,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.mvAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        pAVar3 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
        if ((pAVar3 != (AvatarLocal *)0x0) &&
           ((pAVar3->fields).avatarCameraController != (IAvatarCameraController *)0x0)) {
          FUN_?(4);
          pMVar1 = (this->fields)._.mvAvatar;
          (this->fields).isInDebriefing = 1;
          fVar4 = _UNK_?;
          if ((pMVar1 != (MVAvatarLocal *)0x0) &&
             ((pAVar5 = (pMVar1->fields)._.avatar, pAVar5 != (Avatar *)0x0 &&
              (this_01 = (pAVar5->fields).avatarFader, this_01 != (AvatarFader *)0x0)))) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__TextureAtlasData);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_SM3);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_CubeModel);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar6 = _UNK_?;
            if ((fVar4 == _UNK_?) && ((this_01->fields).fading == 0)) {
              return;
            }
            bVar7 = fVar4 == _UNK_?;
            (this_01->fields).fading = fVar4 < _UNK_?;
            if (bVar7) {
              (this_01->fields).changedShaders = 0;
              (this_01->fields).prevFading = 0;
            }
            pLVar8 = (this_01->fields).avatarMaterials;
            index = 0;
            if (pLVar8 != (List_1_UnityEngine_Material_ *)0x0) {
              lVar9 = 0x20;
              do {
                if ((pLVar8->fields)._size <= (int)index) {
                  if ((this_01->fields).changedShaders == 0) {
                    return;
                  }
                  (this_01->fields).prevFading = 1;
                  return;
                }
                pLVar8 = (this_01->fields).avatarMaterials;
                if (pLVar8 == (List_1_UnityEngine_Material_ *)0x0) break;
                if ((uint)(pLVar8->fields)._size <= index) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pMVar11 = (pLVar8->fields)._items;
                if (pMVar11 == (Material__Array *)0x0) break;
                if ((uint)pMVar11->max_length <= index) {
                  FUN_?();
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                this_02 = *(Material **)((longlong)pMVar11->vector + lVar9 + -0x20);
                pMStackX_20 = this_02;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this_02 == (Material *)0x0) {
code_?:
                  pLVar8 = (this_01->fields).avatarMaterials;
                  if (pLVar8 == (List_1_UnityEngine_Material_ *)0x0) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)pLVar8,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                            );
                  index = index - 1;
                  lVar9 = lVar9 + -8;
                }
                else {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((this_02->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
                  if ((this_01->fields).prevFading == 0) {
                    pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                        (this_02,(MethodInfo *)0x0);
                    pSVar12 = AvatarFader::AvatarFader_GetShader
                                        (this_01,pSVar12,(this_01->fields).fading,(MethodInfo *)0x0)
                    ;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                              (this_02,pSVar12,(MethodInfo *)0x0);
                    if ((pSVar12 == (Shader *)0x0) ||
                       (pSVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                            ((Object_1 *)pSVar12,(MethodInfo *)0x0),
                       pSVar13 == (String *)0x0)) break;
                    bVar2 = mscorlib.dll::System::String::String_Contains
                                      (pSVar13,StringLiteral_CubeModel,(MethodInfo *)0x0);
                    if (bVar2 != 0) {
                      pSVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                          ((Object_1 *)pSVar12,(MethodInfo *)0x0);
                      if (pSVar13 == (String *)0x0) break;
                      bVar2 = mscorlib.dll::System::String::String_Contains
                                        (pSVar13,StringLiteral_SM3,(MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                                (&pMStackX_20,bVar2,(MethodInfo *)0x0);
                      this_02 = pMStackX_20;
                    }
                  }
                  if (this_02 == (Material *)0x0) break;
                  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                    ((this_01->fields).transparencyProperty,(MethodInfo *)0x0);
                  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                    (this_02,iVar14,(MethodInfo *)0x0);
                  if (bVar2 == 0) {
                    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                      ((this_01->fields).colorProperty,(MethodInfo *)0x0);
                    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                      (this_02,iVar14,(MethodInfo *)0x0);
                    if (bVar2 == 0) {
                      iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                        ((this_01->fields).tintProperty,(MethodInfo *)0x0);
                      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_HasProperty(this_02,iVar14,(MethodInfo *)0x0);
                      if (bVar2 != 0) {
                        pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_GetColor(&CStack_16,this_02,
                                                    (this_01->fields).tintProperty,(MethodInfo *)0x0
                                                   );
                        CStack_17.r = pCVar15->r;
                        CStack_17.g = pCVar15->g;
                        CStack_17.b = pCVar15->b;
                        CStack_17.a = fVar4;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                  (this_02,(this_01->fields).tintProperty,&CStack_17,
                                   (MethodInfo *)0x0);
                      }
                    }
                    else {
                      pCVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                Material_get_color(&CStack_18,this_02,(MethodInfo *)0x0);
                      CStack_17.r = pCVar15->r;
                      CStack_17.g = pCVar15->g;
                      CStack_17.b = pCVar15->b;
                      CStack_17.a = fVar4;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                                (this_02,&CStack_17,(MethodInfo *)0x0);
                    }
                  }
                  else {
                    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                      ((this_01->fields).transparencyProperty,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                              (this_02,iVar14,fVar6 - fVar4,(MethodInfo *)0x0);
                  }
                }
                pLVar8 = (this_01->fields).avatarMaterials;
                index = index + 1;
                lVar9 = lVar9 + 8;
              } while (pLVar8 != (List_1_UnityEngine_Material_ *)0x0);
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnExitTimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode_OnExitTimeAttackFlagDebriefing
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.mvAvatar;
  pIVar2 = (this->fields).avatarInputController;
  (this->fields).isInDebriefing = 0;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar5 = (code *)FUN_?(&UNK_?);
      if (pcVar5 == (code *)0x0) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&stack0xffffffffffffffe8);
    if (pIVar2 != (IAvatarInputController *)0x0) {
      pIVar7 = pIVar2->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pIVar7->_1).rank;
      uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pIVar7->interfaceOffsets[uVar8].interfaceType == (Il2CppClass *)TypeInfo__IMotorAPI)
          {
            pVVar10 = &(&pIVar7->vtable)[pIVar7->interfaceOffsets[uVar8].offset + 3].HandleInput;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      pVVar10 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__IMotorAPI,3);
code_?:
      (*pVVar10->methodPtr)(pIVar2,&stack0xffffffffffffffe8,pVVar10->method);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar11 != (MainCameraManager *)0x0) &&
          (pMVar12 = (pMVar11->fields).cameraController, pMVar12 != (MVCameraController *)0x0)) &&
         (pMVar13 = (pMVar12->fields).cameraStack, pMVar13 != (MVCameraController_CameraStack *)0x0)) {
        pMVar14 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar13,(MethodInfo *)0x0);
        if (pMVar14 != (MVCameraBase *)0x0) {
          iVar15 = (*(pMVar14->klass->vtable).__unknown.methodPtr)(pMVar14);
          pMVar1 = (this->fields)._.mvAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            if (iVar15 == 0x11) {
              pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
              if ((pAVar16 == (AvatarLocal *)0x0) ||
                 (pIVar17 = (pAVar16->fields).avatarCameraController,
                 pIVar17 == (IAvatarCameraController *)0x0)) goto code_?;
              uVar6 = 6;
            }
            else {
              pAVar16 = MVAvatarLocal::MVAvatarLocal_get_AvatarLocal(pMVar1,(MethodInfo *)0x0);
              if ((pAVar16 == (AvatarLocal *)0x0) ||
                 (pIVar17 = (pAVar16->fields).avatarCameraController,
                 pIVar17 == (IAvatarCameraController *)0x0)) goto code_?;
              uVar6 = 0;
            }
            FUN_?(4,TypeInfo__IAvatarCameraController,pIVar17,uVar6);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if ((pMVar11 != (MainCameraManager *)0x0) &&
               (this_00 = (pMVar11->fields).mainCamera, this_00 != (Camera *)0x0)) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              CullingApiWrapper::CullingApiWrapper_SetDistanceReferencePoint
                        (pTVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._.mvAvatar;
              if (pMVar1 != (MVAvatarLocal *)0x0) {
                MVAvatarLocal::MVAvatarLocal_ResetAvatar(pMVar1,(MethodInfo *)0x0);
                pMVar1 = (this->fields)._.mvAvatar;
                if (pMVar1 != (MVAvatarLocal *)0x0) {
                  MVAvatarLocal::MVAvatarLocal_SetToSpawnTransform(pMVar1,(MethodInfo *)0x0);
                  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (((pMVar11 != (MainCameraManager *)0x0) &&
                      (pMVar12 = (pMVar11->fields).cameraController,
                      pMVar12 != (MVCameraController *)0x0)) &&
                     (pMVar13 = (pMVar12->fields).cameraStack,
                     pMVar13 != (MVCameraController_CameraStack *)0x0)) {
                    pMVar14 = MVCameraController+CameraStack::
                              MVCameraController_CameraStack_get_CurCamera(pMVar13,(MethodInfo *)0x0)
                    ;
                    if (pMVar14 != (MVCameraBase *)0x0) {
                      (*(pMVar14->klass->vtable).Reset.methodPtr)
                                (pMVar14,(pMVar14->klass->vtable).Reset.method);
                      name = StringLiteral_Idle;
                      pMVar1 = (this->fields)._.mvAvatar;
                      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                          (pMVar18 = (pMVar1->fields)._.body, pMVar18 != (MVBody *)0x0)) &&
                         ((pMVar19 = (pMVar18->fields).bodyObject, pMVar19 != (MVBodyObject *)0x0 &&
                          (pBVar20 = (pMVar19->fields).boneAnimation, pBVar20 != (BoneAnimation *)0x0
                          )))) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                                        ,StringLiteral_Idle,0);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        this_01 = (pBVar20->fields).playingAnimations;
                        if (this_01 != (HashSet_1_System_String_ *)0x0) {
                          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                          HashSet_1_System_Object__AddIfNotPresent
                                    ((HashSet_1_System_Object_ *)this_01,(Object *)name,
                                     MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
                                     ->klass->rgctx_data[0x15].method);
                          pAVar21 = (pBVar20->fields).avatarAnimation;
                          if (pAVar21 != (Animation *)0x0) {
                            pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                      Animation_GetState(pAVar21,name,(MethodInfo *)0x0);
                            if (pAVar22 != (AnimationState *)0x0) {
                              pvVar4 = (pAVar22->fields)._.m_Ptr;
                              if (pvVar4 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pAVar22,(MethodInfo *)0x0);
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              pcVar5 = pcRam_?;
                              if (pcRam_? == (code *)0x0) {
                                pcVar5 = (code *)FUN_?(&UNK_?);
                                if (pcVar5 == (code *)0x0) {
                                  uVar6 = func_?(&UNK_?);
                                  FUN_?(uVar6,0);
                                  pcVar5 = (code *)swi(3);
                                  (*pcVar5)();
                                  return;
                                }
                              }
                              pcRam_? = pcVar5;
                              (*pcRam_?)(pvVar4,_UNK_?);
                              pAVar21 = (pBVar20->fields).avatarAnimation;
                              if (pAVar21 != (Animation *)0x0) {
                                pAVar22 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                          Animation_GetState(pAVar21,name,(MethodInfo *)0x0);
                                if (pAVar22 != (AnimationState *)0x0) {
                                  pvVar4 = (pAVar22->fields)._.m_Ptr;
                                  if (pvVar4 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pAVar22,(MethodInfo *)0x0);
                                    pcVar5 = (code *)swi(3);
                                    (*pcVar5)();
                                    return;
                                  }
                                  pcVar5 = pcRam_?;
                                  if (pcRam_? == (code *)0x0) {
                                    pcVar5 = (code *)FUN_?(&UNK_?);
                                    if (pcVar5 == (code *)0x0) {
                                      uVar6 = func_?(&UNK_?);
                                      FUN_?(uVar6,0);
                                      pcVar5 = (code *)swi(3);
                                      (*pcVar5)();
                                      return;
                                    }
                                  }
                                  pcRam_? = pcVar5;
                                  (*pcRam_?)(pvVar4,0);
                                  pAVar21 = (pBVar20->fields).avatarAnimation;
                                  if (pAVar21 != (Animation *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animation>_UnityEngine__Animation_
                                                  ,name,4,0);
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&
                                                  MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&
                                                  MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    puStack_23 = (uint16_t *)0x0;
                                    puStack_24 = (uint16_t *)0x0;
                                    puStack_25 = (undefined *)0x0;
                                    uStack_26 = 0;
                                    ppuStack_27 = &puStack_23;
                                    if (pAVar21 != (Animation *)0x0) {
                                      pvVar4 = (pAVar21->fields)._._._.m_CachedPtr;
                                      if (pvVar4 != (void *)0x0) {
                                        if (name != (String *)0x0) {
                                          if ((name->fields)._stringLength == 0) {
                                            puStack_24 = (uint16_t *)0x1;
                                            puStack_25 = (undefined *)0x0;
                                          }
                                          else {
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                                  );
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            iVar15 = (name->fields)._stringLength;
                                            puStack_23 = &(name->fields)._firstChar;
                                            if (iVar15 == 0) {
                                              puStack_23 = (uint16_t *)0x0;
                                            }
                                            puStack_25 = (undefined *)
                                                         CONCAT44(puStack_25._4_4_,iVar15);
                                            puStack_24 = puStack_23;
                                          }
                                        }
                                        pcVar5 = pcRam_?;
                                        if ((pcRam_? != (code *)0x0) ||
                                           (pcVar5 = (code *)FUN_?(&UNK_?),
                                           pcVar5 != (code *)0x0)) {
                                          pcRam_? = pcVar5;
                                          (*pcRam_?)(pvVar4,&puStack_24,4);
                                          return;
                                        }
                                        uVar6 = func_?(&UNK_?);
                                        FUN_?(uVar6);
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pAVar21,(MethodInfo *)0x0);
                                    }
                                    FUN_?();
                                    FUN_?();
                                    pcVar5 = (code *)swi(3);
                                    (*pcVar5)();
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                        FUN_?();
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
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
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 RotateDirection(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
          MVAvatarLocal_TimeAttackFlagDebriefingMode_RotateDirection
                    (Vector3 *__return_storage_ptr__,
                    MVAvatarLocal_TimeAttackFlagDebriefingMode *this,Vector3 *direction,float angle,
                    MethodInfo *method)

{
  if ((this->fields).lastAngle != angle) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar1)();
      return pVVar3;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).directionInterpolationStartTime = fVar4;
  }
  bVar5 = cRam_? == '\0';
  (this->fields).lastAngle = angle;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = (ulonglong)(uint)(angle * _UNK_?) << 0x20;
  uStack_7 = (ulonglong)(uint)uStack_7._4_4_ << 0x20;
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((((pMVar10 == (MainCameraManager *)0x0) ||
       (pMVar11 = (pMVar10->fields).cameraController, pMVar11 == (MVCameraController *)0x0)) ||
      (this_00 = (pMVar11->fields).cameraStack, this_00 == (MVCameraController_CameraStack *)0x0)) ||
     ((this_01 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (this_00,(MethodInfo *)0x0), this_01 == (MVCameraBase *)0x0 ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_01,(MethodInfo *)0x0), obj == (Transform *)0x0)))) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_12 = 0;
  uStack_13 = 0;
  pvVar14 = (obj->fields)._._.m_CachedPtr;
  if (pvVar14 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar1)();
      return pVVar3;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar14,&uStack_12);
    fStack_15 = (float)uStack_12;
    fStack_16 = uStack_12._4_4_;
    fStack_17 = (float)uStack_13;
    fStack_18 = uStack_13._4_4_;
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar1)();
      return pVVar3;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&fStack_15,&uStack_6);
    fVar19 = ((float)uStack_6 * uStack_9._4_4_ + uStack_7._4_4_ * (float)uStack_8 +
             uStack_6._4_4_ * (float)uStack_9) - (float)uStack_7 * uStack_8._4_4_;
    fVar20 = (uStack_6._4_4_ * uStack_9._4_4_ + uStack_7._4_4_ * uStack_8._4_4_ +
             (float)uStack_7 * (float)uStack_8) - (float)uStack_6 * (float)uStack_9;
    fVar21 = ((float)uStack_7 * uStack_9._4_4_ + uStack_7._4_4_ * (float)uStack_9 +
             (float)uStack_6 * uStack_8._4_4_) - uStack_6._4_4_ * (float)uStack_8;
    fVar22 = ((uStack_7._4_4_ * uStack_9._4_4_ - (float)uStack_6 * (float)uStack_8) -
             uStack_6._4_4_ * uStack_8._4_4_) - (float)uStack_7 * (float)uStack_9;
    fVar4 = (this->fields).currentDirectionRotation.x;
    fVar23 = (this->fields).currentDirectionRotation.y;
    fVar24 = (this->fields).currentDirectionRotation.z;
    fVar25 = (this->fields).currentDirectionRotation.w;
    uStack_8 = CONCAT44(fVar20,fVar19);
    uStack_9 = CONCAT44(fVar22,fVar21);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar26 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (fVar23 * (pQVar26->identityQuaternion).y + fVar4 * (pQVar26->identityQuaternion).x +
        fVar24 * (pQVar26->identityQuaternion).z + fVar25 * (pQVar26->identityQuaternion).w <=
        _UNK_?) {
      uVar2._0_4_ = (this->fields).currentDirectionRotation.x;
      uVar2._4_4_ = (this->fields).currentDirectionRotation.y;
      uVar27._0_4_ = (this->fields).currentDirectionRotation.z;
      uVar27._4_4_ = (this->fields).currentDirectionRotation.w;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar1)();
        return pVVar3;
      }
      pcRam_? = pcVar1;
      fVar4 = (float)(*pcRam_?)();
      uStack_12 = 0;
      uStack_13 = 0;
      fVar4 = (fVar4 - (this->fields).directionInterpolationStartTime) / _UNK_?;
      pcVar1 = pcRam_?;
      uStack_8 = uVar2;
      uStack_9 = uVar27;
      fStack_15 = fVar19;
      fStack_16 = fVar20;
      fStack_17 = fVar21;
      fStack_18 = fVar22;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        pVVar3 = (Vector3 *)(*pcVar1)();
        return pVVar3;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&uStack_8,&fStack_15,fVar4,&uStack_12);
      fVar19 = (float)uStack_12;
      fVar20 = uStack_12._4_4_;
      fVar21 = (float)uStack_13;
      fVar22 = uStack_13._4_4_;
    }
    (this->fields).currentDirectionRotation.x = fVar19;
    (this->fields).currentDirectionRotation.y = fVar20;
    (this->fields).currentDirectionRotation.z = fVar21;
    (this->fields).currentDirectionRotation.w = fVar22;
    fVar4 = direction->z;
    fVar28 = fVar19 * (fVar19 + fVar19);
    fVar23 = fVar21 + fVar21;
    uVar29 = direction->x;
    uVar30 = direction->y;
    fVar31 = fVar22 * (fVar19 + fVar19);
    fVar24 = fVar20 + fVar20;
    fVar25 = _UNK_? - (fVar21 * fVar23 + fVar28);
    fVar28 = _UNK_? - (fVar20 * fVar24 + fVar28);
    __return_storage_ptr__->x =
         (_UNK_? - (fVar21 * fVar23 + fVar20 * fVar24)) * (float)uVar29 +
         (fVar19 * fVar24 - fVar22 * fVar23) * (float)uVar30 +
         (fVar22 * fVar24 + fVar19 * fVar23) * fVar4;
    __return_storage_ptr__->y =
         fVar25 * (float)uVar30 + (fVar22 * fVar23 + fVar19 * fVar24) * (float)uVar29 +
         (fVar20 * fVar23 - fVar31) * fVar4;
    __return_storage_ptr__->z =
         (fVar19 * fVar23 - fVar22 * fVar24) * (float)uVar29 +
         (fVar31 + fVar20 * fVar23) * (float)uVar30 + fVar28 * fVar4;
    return __return_storage_ptr__;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar1)();
  return pVVar3;
}


/* MVAvatarLocal+TimeAttackFlagDebriefingMode(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+TimeAttackFlagDebriefingMode::
     MVAvatarLocal_TimeAttackFlagDebriefingMode__ctor
               (MVAvatarLocal_TimeAttackFlagDebriefingMode *this,MVAvatarLocal *mvAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).x;
  fVar4 = (pQVar2->identityQuaternion).y;
  fVar5 = (pQVar2->identityQuaternion).z;
  fVar6 = (pQVar2->identityQuaternion).w;
  (this->fields)._.mvAvatar = mvAvatar;
  (this->fields).currentDirectionRotation.x = fVar3;
  (this->fields).currentDirectionRotation.y = fVar4;
  (this->fields).currentDirectionRotation.z = fVar5;
  (this->fields).currentDirectionRotation.w = fVar6;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.modeTypes = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__AvatarInputControllerTouch);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarInputController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar11 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pGVar11->fields).gameMode != 2) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
      this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputControllerTouch);
      AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  this_00 = (AvatarInputControllerTouch *)FUN_?(TypeInfo__AvatarInputController);
  AvatarInputController::AvatarInputController__ctor
            ((AvatarInputController *)this_00,(MethodInfo *)0x0);
code_?:
  bVar1 = iRam_? != 0;
  (this->fields).avatarInputController = (IAvatarInputController *)this_00;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&(this->fields).avatarInputController >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

