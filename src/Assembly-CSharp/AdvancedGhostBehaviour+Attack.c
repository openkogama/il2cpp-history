
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_Enter
               (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
     (this_00 = (ghostBehaviour->fields).perception,
     this_00 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMStackX_10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_03,(this_00->fields).currentWoID,(MethodInfo *)0x0);
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&pMStackX_10 >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (pMStackX_10 == (MVWorldObjectClient *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Entering_attack_without_valid_at,(MethodInfo *)0x0);
  }
  else {
    puVar6 = (undefined8 *)(*(pMStackX_10->klass->vtable).GetTargetPosition.methodPtr)(auStack_7);
    VStack_8._0_8_ = *puVar6;
    VStack_8.z = *(float *)(puVar6 + 1);
    bVar9 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                      (this_00,&VStack_8,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
    if (pMStackX_10 == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar10 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (pMStackX_10,(MethodInfo *)0x0);
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
    if (pIVar10 == (InteractionDataHandlerBase *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar10->fields)._._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    if ((pMStackX_10 == (MVWorldObjectClient *)0x0) ||
       (pIVar10 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (pMStackX_10,(MethodInfo *)0x0),
       pIVar10 == (InteractionDataHandlerBase *)0x0)) goto code_?;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pIVar10,(MethodInfo *)0x0);
    if (bVar9 == 0) goto code_?;
  }
  pAVar11 = (ghostBehaviour->fields).weapon;
  if (pAVar11 != (AdvancedGhostBodyRotateWeapon *)0x0) {
    (pAVar11->fields).factor = 1.0;
    pAVar12 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar12 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_01 = (pAVar12->fields).moving, this_01 != (AudioSource *)0x0)) {
      fVar13 = (this->fields).attackRotationSpeed;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (this_01,fVar13 * _UNK_?,(MethodInfo *)0x0);
      pGVar14 = (pAVar12->fields).ghostBody;
      if (pGVar14 != (GhostBody *)0x0) {
        (pGVar14->fields).angularMaxRotation = fVar13 * (pGVar14->fields).angularMaxRotationBase;
        pAVar12 = (ghostBehaviour->fields).GhostVisualization;
        if (((pAVar12 != (AdvancedGhostVisualizaton *)0x0) &&
            (this_02 = (pAVar12->fields).ghostEye, pMStackX_10 != (MVWorldObjectClient *)0x0)) &&
           (puVar6 = (undefined8 *)
                     (*(pMStackX_10->klass->vtable).GetTargetPosition.methodPtr)(auStack_7),
           this_02 != (GhostEye *)0x0)) {
          VStack_8._0_8_ = *puVar6;
          VStack_8.z = *(float *)(puVar6 + 1);
          GhostEye::GhostEye_UpdateLookAtTarget(this_02,&VStack_8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Exit(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_Exit
               (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
      (pAVar1 = (ghostBehaviour->fields).GhostVisualization,
      this = (AdvancedGhostBehaviour_Attack *)0x0, pAVar1 == (AdvancedGhostVisualizaton *)0x0)) ||
     (pGVar2 = (pAVar1->fields).ghostEye, this = (AdvancedGhostBehaviour_Attack *)0x0,
     pGVar2 == (GhostEye *)0x0)) {
    FUN_?(this);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pGVar2->fields).currentEyeState != 1) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GhostEye__IGhostEyeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pGVar2->fields).ghostEyeStates;
  uVar5 = 0;
  (pGVar2->fields).currentTransitionTime = 0.0;
  if (pDVar4 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (pDVar4,(pGVar2->fields).currentEyeState,
                        MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                       );
    if (pOVar6 != (Object *)0x0) {
      FUN_?(2,TypeInfo__GhostEye__IGhostEyeState,pOVar6);
      pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pGVar2->fields).ghostEyeStates;
      if (pDVar4 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           (pDVar4,0,
                            MethodInfo__System__Collections__Generic__Dictionary<GhostEye::GhostEyeState,_GhostEye::IGhostEyeState>__get_Item_GhostEye__GhostEyeState_
                           );
        if (pOVar6 != (Object *)0x0) {
          pOVar7 = pOVar6->klass;
          uVar8._0_1_ = (pOVar7->_1).rank;
          uVar8._1_1_ = (pOVar7->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pOVar7->interfaceOffsets[uVar5].interfaceType ==
                  (Il2CppClass *)TypeInfo__GhostEye__IGhostEyeState) {
                pVVar9 = &(pOVar7->vtable).Equals + pOVar7->interfaceOffsets[uVar5].offset;
                goto code_?;
              }
              uVar10 = (short)uVar5 + 1;
              uVar5 = (ulonglong)uVar10;
            } while (uVar10 < uVar8);
          }
          pVVar9 = (VirtualInvokeData *)FUN_?(pOVar6,TypeInfo__GhostEye__IGhostEyeState,0);
code_?:
          (*pVVar9->methodPtr)(pOVar6,pGVar2,pVVar9->method);
          (pGVar2->fields).currentEyeState = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack_UpdateState
                 (AdvancedGhostBehaviour_Attack *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((ghostBehaviour == (AdvancedGhostBehaviour *)0x0) ||
     (pAVar1 = (ghostBehaviour->fields).perception,
     pAVar1 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
  apMStackX_10[0] =
       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                 (this_02,(pAVar1->fields).currentWoID,(MethodInfo *)0x0);
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)apMStackX_10 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (apMStackX_10[0] == (MVWorldObjectClient *)0x0) {
code_?:
    pAVar1 = (ghostBehaviour->fields).perception;
    if ((pAVar1 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) ||
       (this_00 = (pAVar1->fields).perception, this_00 == (OptimizedPerception *)0x0))
    goto code_?;
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_00,(pAVar1->fields).alliedTeam,(MethodInfo *)0x0);
    bVar6 = AdvancedGhostBehaviour+AdvancedGhostPerception::
             AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                       (pAVar1,targets,apMStackX_10,(MethodInfo *)0x0);
    pIVar7 = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar6 == 0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar7 == (Il2CppType *)0x0) {
        return (Type *)0x0;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar8 = FUN_?(pIVar7,1);
      pTVar9 = (Type *)FUN_?(lVar8 + 0x20);
      return pTVar9;
    }
    if (apMStackX_10[0] == (MVWorldObjectClient *)0x0) goto code_?;
    (pAVar1->fields).currentWoID = (apMStackX_10[0]->fields)._.id;
  }
  else {
    puVar10 = (undefined8 *)
              (*(apMStackX_10[0]->klass->vtable).GetTargetPosition.methodPtr)(auStack_11);
    VStack_12._0_8_ = *puVar10;
    VStack_12.z = *(float *)(puVar10 + 1);
    bVar6 = AdvancedGhostBehaviour+AdvancedGhostPerception::
             AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                       (pAVar1,&VStack_12,(MethodInfo *)0x0);
    if (bVar6 == 0) goto code_?;
    if (apMStackX_10[0] == (MVWorldObjectClient *)0x0) goto code_?;
    pIVar13 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (apMStackX_10[0],(MethodInfo *)0x0);
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
    if (pIVar13 == (InteractionDataHandlerBase *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar13->fields)._._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    if ((apMStackX_10[0] == (MVWorldObjectClient *)0x0) ||
       (pIVar13 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (apMStackX_10[0],(MethodInfo *)0x0),
       pIVar13 == (InteractionDataHandlerBase *)0x0)) goto code_?;
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                       ((Behaviour *)pIVar13,(MethodInfo *)0x0);
    if (bVar6 == 0) goto code_?;
  }
  if (apMStackX_10[0] != (MVWorldObjectClient *)0x0) {
    puVar10 = (undefined8 *)
              (*(apMStackX_10[0]->klass->vtable).GetTargetPosition.methodPtr)(auStack_11);
    pAVar14 = (ghostBehaviour->fields).GhostVisualization;
    if ((pAVar14 != (AdvancedGhostVisualizaton *)0x0) &&
       (this_01 = (pAVar14->fields).ghostEye, this_01 != (GhostEye *)0x0)) {
      VStack_12._0_8_ = *puVar10;
      VStack_12.z = *(float *)(puVar10 + 1);
      GhostEye::GhostEye_UpdateLookAtTarget(this_01,&VStack_12,(MethodInfo *)0x0);
      if (apMStackX_10[0] != (MVWorldObjectClient *)0x0) {
        puVar10 = (undefined8 *)
                  (*(apMStackX_10[0]->klass->vtable).GetTargetPosition.methodPtr)
                            (auStack_11,apMStackX_10[0],
                             (apMStackX_10[0]->klass->vtable).GetTargetPosition.method);
        fVar15 = *(float *)(puVar10 + 1);
        uVar16 = *puVar10;
        (ghostBehaviour->fields).nextPosition.x = (float)(int)uVar16;
        (ghostBehaviour->fields).nextPosition.y = (float)(int)((ulonglong)uVar16 >> 0x20);
        (ghostBehaviour->fields).nextPosition.z = fVar15;
        pAVar17 = (ghostBehaviour->fields).currentState;
        if (pAVar17 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
          pTVar9 = (Type *)FUN_?(&(pAVar17->klass->_0).byval_arg);
          return pTVar9;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  pTVar9 = (Type *)(*pcVar18)();
  return pTVar9;
}


/* AdvancedGhostBehaviour+Attack() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Attack::AdvancedGhostBehaviour_Attack__ctor
               (AdvancedGhostBehaviour_Attack *this,MethodInfo *method)

{
  (this->fields).attackRotationSpeed = 1.0;
  return;
}

