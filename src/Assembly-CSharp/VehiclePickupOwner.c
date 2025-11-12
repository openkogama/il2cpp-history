
/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, Transform) */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Init
               (VehiclePickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,Transform *mountTransform,
               MethodInfo *method)

{
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeVariable,isFiringRuntimeVariable,
             (MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).mountTransform = mountTransform;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).mountTransform >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void OnLocalObjectsDestroyed() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_OnLocalObjectsDestroyed
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnLocalObjectsDestroyed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnLocalObjectsDestroyed,(MethodInfo *)0x0);
  (this->fields)._._IsLocal_k__BackingField = 0;
  return;
}


/* Void SetupItemTransform() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_SetupItemTransform
               (VehiclePickupOwner *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._.currentItem;
  if ((pPVar1 != (PickupItem *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar2,(this->fields).mountTransform,(MethodInfo *)0x0);
    pPVar1 = (this->fields)._.currentItem;
    if (pPVar1 != (PickupItem *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
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
        (*pcRam_?)(pvVar3);
        pPVar1 = (this->fields)._.currentItem;
        if (pPVar1 != (PickupItem *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pPVar1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if (pTVar2 != (Transform *)0x0) {
            fStack_7 = (pQVar6->identityQuaternion).x;
            fStack_8 = (pQVar6->identityQuaternion).y;
            fStack_9 = (pQVar6->identityQuaternion).z;
            fStack_10 = (pQVar6->identityQuaternion).w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
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
            (*pcRam_?)(pvVar3,&fStack_7);
            pPVar1 = (this->fields)._.currentItem;
            if (pPVar1 != (PickupItem *)0x0) {
              (*(pPVar1->klass->vtable).OnEquip.methodPtr)
                        (pPVar1,(pPVar1->klass->vtable).OnEquip.method);
              return;
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Unequip
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
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
  if (pPVar1 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 == (PickupItem *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
        (*(pPVar1->klass->vtable).OnUnequip.methodPtr)(pPVar1);
        pPVar1 = (this->fields)._.currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields)._.currentItem = (PickupItem *)0x0;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields)._.currentItem >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pMVar8 = (this->fields)._.onUnequipItem;
        if (pMVar8 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          (*(pMVar8->fields)._._.invoke_impl)
                    ((pMVar8->fields)._._.method_code,0,(pMVar8->fields)._._.method);
        }
      }
    }
  }
  return;
}


/* VehiclePickupOwner() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner__ctor
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields)._.lookOrigin.x = (pVVar2->oneVector).x;
  (this->fields)._.lookOrigin.y = fVar3;
  (this->fields)._.lookOrigin.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields)._.lookDirection.x = (pVVar2->oneVector).x;
  (this->fields)._.lookDirection.y = fVar3;
  (this->fields)._.lookDirection.z = fVar4;
  (this->fields)._._.findWorldObjectParent = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar9;
      LOCK();
      bVar5 = uVar10 != uRam_?;
      uVar11 = uVar10;
      uVar12 = uVar10 + 1;
      if (bVar5) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar5) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar11, uVar10 = uVar11, uVar11 != 2)
            );
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar13 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar5 = *(int *)puVar13 == 1;
  if (bVar5) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar5 = *puVar14 == 1;
  if (bVar5) {
    *puVar14 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar5) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar15 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar5 = (ulonglong)uVar10 == *psVar15;
    if (bVar5) {
      *psVar15 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar5) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar5 = *(int *)puVar13 == 1;
      if (bVar5) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar5) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar17 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar9 = pIVar17->methods;
            pMVar18 = *ppMVar9;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar7;
                while (ppMVar20 = ppMVar19 + 0x30528cee,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar21 = _UNK_?;
    uVar22 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar20 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar20 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar20);
    if (uStack_25 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar20 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
      }
      uStack_24 = uVar22;
      uStack_25 = uVar21;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar20);
      if (lVar8 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar27 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar28 = *puVar27;
            LOCK();
            uVar21 = *puVar27;
            if (uVar28 == uVar21) {
              *puVar27 = uVar28 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar28 != uVar21);
        }
      }
      FUN_?(pOVar6,lVar16);
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
        if ((0xfff < uStack_26 + 1) &&
           (pppppppuVar20 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar20))))
        goto code_?;
        func_?(pppppppuVar20);
      }
      goto code_?;
    }
    pppppppuVar20 = pppppppuStack_78;
    if ((uStack_25 + 1 < 0x1000) ||
       (pppppppuVar20 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar20)) < 0x20)) {
      func_?(pppppppuVar20);
      uVar22 = _UNK_?;
      uVar21 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar22._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar22._4_4_ = (pOVar6->_1).cctor_started;
  uVar22 = FUN_?(uVar22);
  FUN_?(uVar22,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

