
/* Void Update() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance_Update
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      fStack_4 = 0.0;
      if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (((pSVar7 != (SpawnRoleDataMediator *)0x0) &&
          (pSVar8 = (pSVar7->fields).position,
          pSVar8 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0))
         && (pSVar9 = (pSVar8->fields)._.subscribableVariable,
            pSVar9 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
        if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
        }
        uVar10 = (pSVar9->fields)._.value.x;
        uVar11 = (pSVar9->fields)._.value.y;
        fStack_4 = fStack_4 - (pSVar9->fields)._.value.z;
        uStack_3 = CONCAT44(uStack_3._4_4_ - (float)uVar11,(float)uStack_3 - (float)uVar10);
        fVar12 = (float)FUN_?(&uStack_3);
        fVar13 = (this->fields).minDistance;
        if ((fVar12 < fVar13) || (fVar13 = (this->fields).maxDistance, fVar13 < fVar12)) {
          fVar12 = fVar13;
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        fVar13 = (this->fields).minDistance;
        uVar14 = (this->fields).scale.x;
        fVar15 = ((this->fields).scale.z * fVar12) / fVar13;
        if (pTVar2 != (Transform *)0x0) {
          uStack_3 = CONCAT44(((this->fields).scale.y * fVar12) / fVar13,
                               ((float)uVar14 * fVar12) / fVar13);
          fStack_4 = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar16 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar16 != (void *)0x0) {
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            (*pcRam_?)(pvVar16,&uStack_3);
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TeamIconScaleWithDistance() */

void Assembly-CSharp.dll::TeamIconScaleWithDistance::TeamIconScaleWithDistance__ctor
               (TeamIconScaleWithDistance *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  bVar2 = cRam_? == '\0';
  (this->fields).minDistance = 10.0;
  (this->fields).scale.x = fVar1;
  (this->fields).scale.y = fVar1;
  (this->fields).scale.z = fVar1;
  (this->fields).maxDistance = 50.0;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar4 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar5 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar6 = ppMVar4;
  if (lVar5 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar5 = lRam_?;
  }
  else {
    do {
      uVar7 = (uint)ppMVar6;
      LOCK();
      bVar2 = uVar7 != uRam_?;
      uVar8 = uVar7;
      uVar9 = uVar7 + 1;
      if (bVar2) {
        uVar8 = uRam_?;
        uVar9 = uRam_?;
      }
      uRam_? = uVar9;
      UNLOCK();
    } while ((bVar2) && (ppMVar6 = (MethodInfo **)(ulonglong)uVar8, uVar7 = uVar8, uVar8 != 2)
            );
    while (uVar7 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar7 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar5;
  puVar10 = &(pOVar3->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar10 == 1;
  if (bVar2) {
    *(undefined4 *)puVar10 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar7 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar11 = &(pOVar3->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar11 == 1;
  if (bVar2) {
    *puVar11 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar7 = GetCurrentThreadId();
    psVar12 = &(pOVar3->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar7 == *psVar12;
    if (bVar2) {
      *psVar12 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar10 = &(pOVar3->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar10 == 1;
      if (bVar2) {
        *(undefined4 *)puVar10 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar5._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
      lVar5._4_4_ = (pOVar3->_1).cctor_started;
      if (lVar5 == 0) {
        (pOVar3->_1).initializationExceptionGCHandle = 0;
        (pOVar3->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar5 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar13._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
    lVar13._4_4_ = (pOVar3->_1).cctor_started;
    if (lVar13 == 0) {
      return;
    }
  }
  else {
    uVar7 = GetCurrentThreadId();
    LOCK();
    (pOVar3->_1).cctor_thread = (ulonglong)uVar7;
    UNLOCK();
    LOCK();
    (pOVar3->_1).cctor_finished_or_no_cctor = 1;
    uVar7 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar7 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar3->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar3);
      ppMVar6 = ppMVar4;
      pIVar14 = (Il2CppClass *)pOVar3;
code_?:
      do {
        if (ppMVar6 == (MethodInfo **)0x0) {
          FUN_?(pIVar14);
          if (pIVar14->field_count != 0) {
            ppMVar6 = pIVar14->methods;
            pMVar15 = *ppMVar6;
code_?:
            if (pMVar15 != (MethodInfo *)0x0) {
              if ((*pMVar15->name == '.') && ((pMVar15->flags & 0x800) != 0)) {
                ppMVar16 = ppMVar4;
                while (ppMVar17 = ppMVar16 + 0x3052a1b1,
                      ppMVar16 = (MethodInfo **)((longlong)ppMVar16 + 1),
                      *(char *)ppMVar17 == (pMVar15->name + -1)[(longlong)ppMVar16]) {
                  if (ppMVar16 == (MethodInfo **)0x7) {
                    FUN_?(pMVar15,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar6 = ppMVar6 + 1;
          if (ppMVar6 < pIVar14->methods + pIVar14->field_count) {
            pMVar15 = *ppMVar6;
            goto code_?;
          }
        }
        pIVar14 = pIVar14->parent;
        ppMVar6 = ppMVar4;
      } while (pIVar14 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar3->_1).cctor_thread = 0;
    uVar18 = _UNK_?;
    uVar19 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar3->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_20 = 0;
    uStack_21 = _UNK_?;
    uStack_22 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar3->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_22) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_22 < 0x10) {
code_?:
      lVar5 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_23) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_21 = uVar19;
      uStack_22 = uVar18;
      lVar13 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar5 != 0) {
        *(longlong *)(lVar13 + 0x28U) = lVar5;
        if (iRam_? != 0) {
          uVar7 = (uint)(lVar13 + 0x28U >> 0xc);
          puVar24 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar25 = *puVar24;
            LOCK();
            uVar18 = *puVar24;
            if (uVar25 == uVar18) {
              *puVar24 = uVar25 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar25 != uVar18);
        }
      }
      FUN_?(pOVar3,lVar13);
      if (0xf < uStack_23) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_23 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_22 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar19 = _UNK_?;
      uVar18 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar19._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
  uVar19._4_4_ = (pOVar3->_1).cctor_started;
  uVar19 = FUN_?(uVar19);
  FUN_?(uVar19,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

