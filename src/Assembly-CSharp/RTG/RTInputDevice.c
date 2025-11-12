
/* Void Awake() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_Awake
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__MouseInputDevice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (InputDeviceBase *)FUN_?(TypeInfo__RTG__MouseInputDevice);
  InputDeviceBase::InputDeviceBase__ctor(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  uStack_3 = 0;
  uStack_4 = 0;
  this_00[1].klass =
       *(InputDeviceBase__Class **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  *(float *)&this_00[1].monitor = fVar2;
  pcVar5 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcVar1)(&uStack_3);
  bVar7 = iRam_? != 0;
  *(undefined8 *)((longlong)&this_00[1].monitor + 4) = uStack_3;
  *(undefined4 *)((longlong)&this_00[1].fields.DoubleTap + 4) = uStack_4;
  (this->fields)._inputDevice = (IInputDevice *)this_00;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._inputDevice >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_Update_SystemCall
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._inputDevice;
  if (pIVar1 != (IInputDevice *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          pVVar5 = &(pIVar3->vtable).add_DoubleTap + (pIVar3->interfaceOffsets[uVar2].offset + 0x11)
          ;
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar6 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(pIVar1,puVar6[1],(code *)*puVar6);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* RTInputDevice() */

void Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice__ctor
               (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar2 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar4 = ppMVar2;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar4;
      LOCK();
      bVar6 = uVar5 != uRam_?;
      uVar7 = uVar5;
      uVar8 = uVar5 + 1;
      if (bVar6) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar6) && (ppMVar4 = (MethodInfo **)(ulonglong)uVar7, uVar5 = uVar7, uVar7 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar9 = &(pOVar1->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar9 == 1;
  if (bVar6) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar1->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar10 == 1;
  if (bVar6) {
    *puVar10 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar11 = &(pOVar1->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar5 == *psVar11;
    if (bVar6) {
      *psVar11 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar1->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar9 == 1;
      if (bVar6) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pOVar1->_1).cctor_started;
      if (lVar3 == 0) {
        (pOVar1->_1).initializationExceptionGCHandle = 0;
        (pOVar1->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar1->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar1->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar1->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar1->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar1);
      ppMVar4 = ppMVar2;
      pIVar13 = (Il2CppClass *)pOVar1;
code_?:
      do {
        if (ppMVar4 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar4 = pIVar13->methods;
            pMVar14 = *ppMVar4;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar2;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar4 = ppMVar4 + 1;
          if (ppMVar4 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar4;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar4 = ppMVar2;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar1->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar1->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar1->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar3 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar3 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar1,lVar12);
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
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar1->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* InputDeviceType get_DeviceType() */

InputDeviceType__Enum
Assembly-CSharp.dll::RTG::RTInputDevice::RTInputDevice_get_DeviceType
          (RTInputDevice *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._inputDevice;
  if (pIVar1 != (IInputDevice *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__RTG__IInputDevice) {
          pVVar5 = &(pIVar3->vtable).add_DoubleTap + (pIVar3->interfaceOffsets[uVar2].offset + 5);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          IVar6 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return IVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return IVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  IVar6 = (*pcVar8)();
  return IVar6;
}

