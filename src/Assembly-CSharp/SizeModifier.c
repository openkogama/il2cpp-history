
/* Single BlockStep(Single, Single, Single, Single) */

float Assembly-CSharp.dll::SizeModifier::SizeModifier_BlockStep
                (SizeModifier *this,float t,float steps,float clampMin,float clampMax,
                MethodInfo *method)

{
  fVar1 = (float)FUN_?(t * steps);
  fVar1 = fVar1 / steps;
  if ((clampMin <= fVar1) && (clampMin = fVar1, clampMax < fVar1)) {
    return clampMax;
  }
  return clampMin;
}


/* IEnumerator DoForSeconds(Single, SizeModifier+ActionDelegate) */

IEnumerator *
Assembly-CSharp.dll::SizeModifier::SizeModifier_DoForSeconds
          (SizeModifier *this,float duration,SizeModifier_ActionDelegate *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SizeModifier___DoForSeconds_d__17);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__SizeModifier___DoForSeconds_d__17);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  *(float *)&pIVar1[3].klass = duration;
  pIVar1[2].monitor = (MonitorData *)body;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnActivated
               (SizeModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  (this->fields).isDeactivating = 0;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  bVar5 = iRam_? != 0;
  (this->fields)._.timeStamp = fVar4;
  (this->fields)._.owner = target;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pAVar10 = (this->fields)._.owner;
  if ((((pAVar10 != (Avatar *)0x0) && (pMVar11 = (pAVar10->fields).mvAvatar, pMVar11 != (MVAvatar *)0x0)
       ) && (pMVar12 = (pMVar11->fields).body, pMVar12 != (MVBody *)0x0)) &&
     ((pMVar13 = (pMVar12->fields).bodyObject, pMVar13 != (MVBodyObject *)0x0 &&
      (this_00 = (pMVar13->fields).avatarBlobShadowController,
      this_00 != (AvatarBlobShadowController *)0x0)))) {
    AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
              (this_00,(this->fields).sizeModifier,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar14 != (MVGameControllerBase *)0x0) &&
         (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
        ((this_01 = (pMVar15->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
         (((pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_01,(MethodInfo *)0x0), pMVar16 != (MVLocalPlayer *)0x0 &&
           (pSVar17 = (pMVar16->fields).spawnRoleDataMediator, pSVar17 != (SpawnRoleDataMediator *)0x0
           )) && (pSVar18 = (pSVar17->fields).defaultScale,
                 pSVar18 !=
                 (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0))))))
       && (pSVar19 = (pSVar18->fields)._.subscribableVariable,
          pSVar19 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      fVar4 = (pSVar19->fields)._.value.z;
      pSVar20 = this->klass;
      fVar21 = (pSVar19->fields)._.value.y;
      (this->fields).defaultScale.x = (pSVar19->fields)._.value.x;
      (this->fields).defaultScale.y = fVar21;
      (this->fields).defaultScale.z = fVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar20->vtable).Scale.methodPtr)(this,(pSVar20->vtable).Scale.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_OnDeactivated
               (SizeModifier *this,Avatar *target,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).isDeactivating = 1;
  (this->fields)._.owner = target;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields)._.owner;
  if ((((pAVar6 != (Avatar *)0x0) && (pMVar7 = (pAVar6->fields).mvAvatar, pMVar7 != (MVAvatar *)0x0)
       ) && (pMVar8 = (pMVar7->fields).body, pMVar8 != (MVBody *)0x0)) &&
     ((pMVar9 = (pMVar8->fields).bodyObject, pMVar9 != (MVBodyObject *)0x0 &&
      (this_00 = (pMVar9->fields).avatarBlobShadowController,
      this_00 != (AvatarBlobShadowController *)0x0)))) {
    AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
              (this_00,_UNK_?,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).UnScale.methodPtr)(this,(this->klass->vtable).UnScale.method);
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetTimeStamp() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_ResetTimeStamp
               (SizeModifier *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pAVar4 = (this->fields)._.owner;
  (this->fields)._.timeStamp = fVar3;
  if (pAVar4 != (Avatar *)0x0) {
    uStack_5._0_4_ = (this->fields).defaultScale.x;
    uStack_5._4_4_ = (this->fields).defaultScale.y;
    fVar3 = (this->fields).sizeModifier;
    pMVar6 = (pAVar4->fields).mvAvatar;
    fStack_7 = fVar3 * (this->fields).defaultScale.z;
    if (pMVar6 != (MVAvatar *)0x0) {
      uStack_5 = CONCAT44(fVar3 * (float)uStack_5._4_4_,fVar3 * (float)(undefined4)uStack_5);
      (*(pMVar6->klass->vtable).set_Scale.methodPtr)
                (pMVar6,&uStack_5,(pMVar6->klass->vtable).set_Scale.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Unstablize() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier_Unstablize
               (SizeModifier *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields)._.timeStamp;
  pfVar4 = &(this->fields).sizeUnstableAfterSeconds;
  if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
    return;
  }
  fVar5 = (this->fields).unstableSpeed;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar6 = (float)(*pcRam_?)();
  pAVar7 = (this->fields)._.owner;
  fVar6 = fVar6 + fVar5;
  (this->fields).unstableSpeed = fVar6;
  if (pAVar7 != (Avatar *)0x0) {
    pMVar8 = (pAVar7->fields).mvAvatar;
    uVar2._0_4_ = (this->fields).defaultScale.x;
    uVar2._4_4_ = (this->fields).defaultScale.y;
    fVar5 = (this->fields).sizeModifier;
    fVar3 = (float)FUN_?((fVar3 - (this->fields).sizeUnstableAfterSeconds) * fVar6);
    fVar3 = _UNK_? - fVar3;
    fStack_9 = (this->fields).defaultScale.z * _UNK_? * fVar3 +
                fVar5 * (this->fields).defaultScale.z;
    uStack_10 = uVar2;
    if (pMVar8 != (MVAvatar *)0x0) {
      uStack_10 = CONCAT44((float)uVar2._4_4_ * _UNK_? * fVar3 + fVar5 * (float)uVar2._4_4_,
                           (float)(undefined4)uVar2 * _UNK_? * fVar3 +
                           fVar5 * (float)(undefined4)uVar2);
      (*(pMVar8->klass->vtable).set_Scale.methodPtr)
                (pMVar8,&uStack_10,(pMVar8->klass->vtable).set_Scale.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SizeModifier() */

void Assembly-CSharp.dll::SizeModifier::SizeModifier__ctor(SizeModifier *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).timeToSize = 1.5;
  (this->fields).sizeModifier = 1.0;
  (this->fields).sizeUnstableAfterSeconds = 28.0;
  (this->fields).unstableSpeed = 10.0;
  (this->fields).sineStrength = 14.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields).defaultScale.x = (pVVar2->oneVector).x;
  (this->fields).defaultScale.y = fVar3;
  (this->fields).defaultScale.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar1 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar9 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (ppMVar19 = ppMVar18 + 0x30529dd4,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_24 < 0x10) {
code_?:
      lVar7 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar26 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar27 = *puVar26;
            LOCK();
            uVar20 = *puVar26;
            if (uVar27 == uVar20) {
              *puVar26 = uVar27 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar27 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar19 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar21 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar5->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

