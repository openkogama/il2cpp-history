
/* Void Update() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup_Update
               (PleaseWaitPopup *this,MethodInfo *method)

{
  fVar1 = (this->fields).timeSinceStart;
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
  fVar4 = (float)(*pcRam_?)();
  fVar4 = fVar4 + fVar1;
  pfVar5 = &(this->fields).fullyRevealedTime;
  (this->fields).timeSinceStart = fVar4;
  if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
    (this->fields).timeSinceStart = (this->fields).fullyRevealedTime;
  }
  pAVar6 = (this->fields).alphaCurveOverTime;
  if (pAVar6 != (AnimationCurve *)0x0) {
    pvVar7 = (pAVar6->fields).m_Ptr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar1 = (this->fields).timeSinceStart;
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
    fVar1 = (float)(*pcRam_?)(pvVar7,fVar1);
    pfVar5 = &(this->fields).fullScreenBackGroundMaxAlpha;
    if (*pfVar5 <= fVar1 && fVar1 != *pfVar5) {
      fVar1 = (this->fields).fullScreenBackGroundMaxAlpha;
    }
    pIVar8 = (this->fields).fullScreenBackGround;
    if (pIVar8 != (Image *)0x0) {
      pfVar5 = (float *)(*(pIVar8->klass->vtable).get_color.methodPtr)
                                  (&VStack_9,pIVar8,(pIVar8->klass->vtable).get_color.method);
      pIVar10 = (this->fields).fullScreenBackGround;
      fVar4 = *pfVar5;
      if (pIVar10 != (Image *)0x0) {
        lVar11 = (*(pIVar10->klass->vtable).get_color.methodPtr)
                          (&VStack_9,pIVar10,(pIVar10->klass->vtable).get_color.method);
        pIVar10 = (this->fields).fullScreenBackGround;
        fVar12 = *(float *)(lVar11 + 4);
        if (pIVar10 != (Image *)0x0) {
          lVar11 = (*(pIVar10->klass->vtable).get_color.methodPtr)
                            (&VStack_9,pIVar10,(pIVar10->klass->vtable).get_color.method);
          VStack_9.z = *(float *)(lVar11 + 8);
          VStack_9.y = fVar12;
          VStack_9.x = fVar4;
          fStack_13 = fVar1;
          (*(pIVar8->klass->vtable).set_color.methodPtr)(pIVar8);
          pAVar6 = (this->fields).alphaCurveOverTime;
          this_00 = (this->fields).popUpcanvasGroup;
          if (pAVar6 != (AnimationCurve *)0x0) {
            pvVar7 = (pAVar6->fields).m_Ptr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            fVar1 = (this->fields).timeSinceStart;
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
            fVar1 = (float)(*pcRam_?)(pvVar7,fVar1);
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,fVar1,(MethodInfo *)0x0);
              VStack_9.x = (this->fields).direction.x;
              VStack_9.y = (this->fields).direction.y;
              fVar1 = (this->fields).spinSpeed;
              this_01 = (Transform *)(this->fields).rectTransform;
              fVar4 = (this->fields).direction.z;
              fVar14 = fVar1 * VStack_9.y;
              fVar12 = fVar1 * VStack_9.x;
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
              fVar15 = (float)(*pcRam_?)();
              if (this_01 != (Transform *)0x0) {
                VStack_9.y = fVar14 * fVar15 * _UNK_?;
                VStack_9.x = fVar12 * fVar15 * _UNK_?;
                VStack_9.z = fVar1 * fVar4 * fVar15 * _UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                          (this_01,&VStack_9,Space__Enum_Self,(MethodInfo *)0x0);
                return;
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


/* PleaseWaitPopup() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup__ctor
               (PleaseWaitPopup *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  bVar2 = cRam_? == '\0';
  (this->fields).direction.x = 0.0;
  (this->fields).direction.y = 0.0;
  (this->fields).direction.z = fVar1;
  (this->fields).spinSpeed = 5.0;
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
                while (ppMVar17 = ppMVar16 + 0x3052af3c,
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

