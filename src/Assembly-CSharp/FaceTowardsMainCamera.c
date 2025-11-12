
/* Void LateUpdate() */

void Assembly-CSharp.dll::FaceTowardsMainCamera::FaceTowardsMainCamera_LateUpdate
               (FaceTowardsMainCamera *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar2 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar2->fields).mainCamera, this_00 != (Camera *)0x0)) {
    target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                (pTVar1,target,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        VStack_3.z = (this->fields).setRotation.z;
        VStack_3.x = (this->fields).setRotation.x;
        VStack_3.y = (this->fields).setRotation.y;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                  (pTVar1,&VStack_3,Space__Enum_Self,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FaceTowardsMainCamera() */

void Assembly-CSharp.dll::FaceTowardsMainCamera::FaceTowardsMainCamera__ctor
               (FaceTowardsMainCamera *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).setRotation.x = (float)(int)uVar2;
  (this->fields).setRotation.y = (float)(int)(uVar2 >> 0x20);
  (this->fields).setRotation.z = 0.0;
  if (bVar1) {
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
      bVar1 = uVar7 != uRam_?;
      uVar8 = uVar7;
      uVar9 = uVar7 + 1;
      if (bVar1) {
        uVar8 = uRam_?;
        uVar9 = uRam_?;
      }
      uRam_? = uVar9;
      UNLOCK();
    } while ((bVar1) && (ppMVar6 = (MethodInfo **)(ulonglong)uVar8, uVar7 = uVar8, uVar8 != 2)
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
  bVar1 = *(int *)puVar10 == 1;
  if (bVar1) {
    *(undefined4 *)puVar10 = 1;
  }
  uVar7 = uRam_?;
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
  bVar1 = *puVar11 == 1;
  if (bVar1) {
    *puVar11 = 1;
  }
  uVar7 = uRam_?;
  UNLOCK();
  if (bVar1) {
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
    bVar1 = (ulonglong)uVar7 == *psVar12;
    if (bVar1) {
      *psVar12 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar10 = &(pOVar3->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar10 == 1;
      if (bVar1) {
        *(undefined4 *)puVar10 = 1;
      }
      UNLOCK();
      if (bVar1) break;
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
                while (ppMVar17 = ppMVar16 + 0x30528cee,
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
    uVar2 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar3->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar3->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar5 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar2;
      lVar13 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar5 != 0) {
        *(longlong *)(lVar13 + 0x28U) = lVar5;
        if (iRam_? != 0) {
          uVar7 = (uint)(lVar13 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar2 = *puVar23;
            if (uVar24 == uVar2) {
              *puVar23 = uVar24 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar2);
        }
      }
      FUN_?(pOVar3,lVar13);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar2 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar3->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar3->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

