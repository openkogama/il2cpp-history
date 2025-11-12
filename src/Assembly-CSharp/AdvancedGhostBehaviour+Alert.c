
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_Enter
               (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Entering_alert_without_valid_att);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStackX_10 = (MVWorldObjectClient *)0x0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar1 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,&pMStackX_10,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Entering_alert_without_valid_att,(MethodInfo *)0x0);
    }
    else {
      if (pMStackX_10 == (MVWorldObjectClient *)0x0) goto code_?;
      (this_00->fields).currentWoID = (pMStackX_10->fields)._.id;
    }
    pAVar2 = (ghostBehaviour->fields).weapon;
    if (pAVar2 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      (pAVar2->fields).factor = 0.5;
      pAVar3 = (ghostBehaviour->fields).GhostVisualization;
      if ((pAVar3 != (AdvancedGhostVisualizaton *)0x0) &&
         (this_02 = (pAVar3->fields).moving, this_02 != (AudioSource *)0x0)) {
        fVar4 = (this->fields).alertRotationSpeed;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (this_02,fVar4 * _UNK_?,(MethodInfo *)0x0);
        pGVar5 = (pAVar3->fields).ghostBody;
        if (pGVar5 != (GhostBody *)0x0) {
          (pGVar5->fields).angularMaxRotation = fVar4 * (pGVar5->fields).angularMaxRotationBase;
          pAVar3 = (ghostBehaviour->fields).GhostVisualization;
          if (pAVar3 != (AdvancedGhostVisualizaton *)0x0) {
            this_03 = (pAVar3->fields).ghostEye;
            if (pMStackX_10 != (MVWorldObjectClient *)0x0) {
              puVar6 = (undefined8 *)
                       (*(pMStackX_10->klass->vtable).GetTargetPosition.methodPtr)(auStack_7);
              if (this_03 != (GhostEye *)0x0) {
                VStack_8._0_8_ = *puVar6;
                VStack_8.z = *(float *)(puVar6 + 1);
                GhostEye::GhostEye_UpdateLookAtTarget(this_03,&VStack_8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Type UpdateState(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert_UpdateState
                 (AdvancedGhostBehaviour_Alert *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Attack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)0x0;
  pMStackX_10 = (MVWorldObjectClient *)0x0;
  if (((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
      (this_00 = (ghostBehaviour->fields).perception,
      this_00 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0)) &&
     (this_01 = (this_00->fields).perception, this_01 != (OptimizedPerception *)0x0)) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_01,(this_00->fields).alliedTeam,(MethodInfo *)0x0);
    bVar2 = AdvancedGhostBehaviour+AdvancedGhostPerception::
            AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this_00,targets,&pMStackX_10,(MethodInfo *)0x0);
    pIVar3 = TypeRef__AdvancedGhostBehaviour__Idle;
    if (bVar2 == 0) {
code_?:
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar3 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar4 = FUN_?(pIVar3,1);
        pTVar1 = (Type *)FUN_?(lVar4 + 0x20);
      }
      return pTVar1;
    }
    if (pMStackX_10 != (MVWorldObjectClient *)0x0) {
      (this_00->fields).currentWoID = (pMStackX_10->fields)._.id;
      pAVar5 = (ghostBehaviour->fields).networkedValues;
      if (pAVar5 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
        fVar6 = (pAVar5->fields).nextPosition.y;
        fVar7 = (pAVar5->fields).nextPosition.z;
        pAVar8 = (ghostBehaviour->fields).GhostVisualization;
        (ghostBehaviour->fields).nextPosition.x = (pAVar5->fields).nextPosition.x;
        (ghostBehaviour->fields).nextPosition.y = fVar6;
        (ghostBehaviour->fields).nextPosition.z = fVar7;
        if (((pAVar8 != (AdvancedGhostVisualizaton *)0x0) &&
            (this_02 = (pAVar8->fields).ghostEye, pMStackX_10 != (MVWorldObjectClient *)0x0)) &&
           (puVar9 = (undefined8 *)
                     (*(pMStackX_10->klass->vtable).GetTargetPosition.methodPtr)(&uStack_10),
           this_02 != (GhostEye *)0x0)) {
          VStack_11._0_8_ = *puVar9;
          VStack_11.z = *(float *)(puVar9 + 1);
          GhostEye::GhostEye_UpdateLookAtTarget(this_02,&VStack_11,(MethodInfo *)0x0);
          if (((pMStackX_10 != (MVWorldObjectClient *)0x0) &&
              (this_03 = (pMStackX_10->fields).gameObject, this_03 != (GameObject *)0x0)) &&
             (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this_03,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_10 = 0;
            fStack_13 = 0.0;
            pvVar14 = (pTVar12->fields)._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              pTVar1 = (Type *)(*pcVar15)();
              return pTVar1;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar15 = (code *)swi(3);
              pTVar1 = (Type *)(*pcVar15)();
              return pTVar1;
            }
            pcRam_? = pcVar15;
            (*pcRam_?)(pvVar14);
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)ghostBehaviour,(MethodInfo *)0x0);
            if (pTVar12 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_11.x = 0.0;
              VStack_11.y = 0.0;
              VStack_11.z = 0.0;
              pvVar14 = (pTVar12->fields)._._.m_CachedPtr;
              if (pvVar14 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                pTVar1 = (Type *)(*pcVar15)();
                return pTVar1;
              }
              pcVar15 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                uVar16 = func_?(&UNK_?);
                FUN_?(uVar16,0);
                pcVar15 = (code *)swi(3);
                pTVar1 = (Type *)(*pcVar15)();
                return pTVar1;
              }
              pcRam_? = pcVar15;
              (*pcRam_?)(pvVar14,&VStack_11);
              uVar16._0_4_ = (float)uStack_10 - VStack_11.x;
              VStack_11.z = fStack_13 - VStack_11.z;
              uVar16._4_4_ = uStack_10._4_4_ - VStack_11.y;
              VStack_11._0_8_ = uVar16;
              fVar7 = (float)FUN_?(&VStack_11);
              pIVar3 = TypeRef__AdvancedGhostBehaviour__Attack;
              if (fVar7 < (ghostBehaviour->fields).perceptionRadius *
                           (this->fields).alertMultiplier) goto code_?;
              pAVar17 = (ghostBehaviour->fields).currentState;
              if (pAVar17 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
                pTVar1 = (Type *)FUN_?(&(pAVar17->klass->_0).byval_arg);
                return pTVar1;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  pTVar1 = (Type *)(*pcVar15)();
  return pTVar1;
}


/* AdvancedGhostBehaviour+Alert() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Alert::AdvancedGhostBehaviour_Alert__ctor
               (AdvancedGhostBehaviour_Alert *this,MethodInfo *method)

{
  (this->fields).alertRotationSpeed = 0.7;
  (this->fields).alertMultiplier = 0.8;
  return;
}

