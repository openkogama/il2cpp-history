
/* Void Awake() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker_Awake
               (VehicleBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Blinker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar2._0_4_ = (this->fields).blinkDamageColor.r;
  uVar2._4_4_ = (this->fields).blinkDamageColor.g;
  uVar3._0_4_ = (this->fields).blinkDamageColor.b;
  uVar3._4_4_ = (this->fields).blinkDamageColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar2;
  aCStack_6[0]._8_8_ = uVar3;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar8._0_4_ = (this->fields).blinkHealingColor.r;
  uVar8._4_4_ = (this->fields).blinkHealingColor.g;
  uVar9._0_4_ = (this->fields).blinkHealingColor.b;
  uVar9._4_4_ = (this->fields).blinkHealingColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar8;
  aCStack_6[0]._8_8_ = uVar9;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,8,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields)._.blinkMaterial;
  uVar10._0_4_ = (this->fields).blinkAboutToExpireColor.r;
  uVar10._4_4_ = (this->fields).blinkAboutToExpireColor.g;
  uVar11._0_4_ = (this->fields).blinkAboutToExpireColor.b;
  uVar11._4_4_ = (this->fields).blinkAboutToExpireColor.a;
  pBVar4 = (Blinker *)FUN_?(TypeInfo__Blinker);
  pCVar5 = aCStack_6;
  aCStack_6[0]._0_8_ = uVar10;
  aCStack_6[0]._8_8_ = uVar11;
  Blinker::Blinker__ctor(pBVar4,_UNK_?,pMVar1,pCVar5,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pBVar4,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pCVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
             ->klass->rgctx_data[0x22].method);
  bVar12 = iRam_? != 0;
  (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
  if (bVar12) {
    uVar13 = (uint)((ulonglong)&(this->fields)._.blinkers >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  return;
}


/* VehicleBlinker() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker__ctor
               (VehicleBlinker *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  bVar4 = cRam_? == '\0';
  uVar5 = _UNK_?;
  (this->fields).blinkDamageColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields).blinkDamageColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields).blinkDamageColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar3 = _UNK_?;
  (this->fields).blinkDamageColor.a = (float)uVar5;
  uVar5 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar3 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.a = (float)uVar5;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields).blinkHealingColor.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields).blinkHealingColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields).blinkHealingColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields).blinkHealingColor.a = (float)uVar5;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar11 = (uint)ppMVar10;
      LOCK();
      bVar4 = uVar11 != uRam_?;
      uVar12 = uVar11;
      uVar13 = uVar11 + 1;
      if (bVar4) {
        uVar12 = uRam_?;
        uVar13 = uRam_?;
      }
      uRam_? = uVar13;
      UNLOCK();
    } while ((bVar4) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar12, uVar11 = uVar12, uVar12 != 2)
            );
    while (uVar11 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar11 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar14 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar4 = *(int *)puVar14 == 1;
  if (bVar4) {
    *(undefined4 *)puVar14 = 1;
  }
  uVar11 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar11 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar15 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar4 = *puVar15 == 1;
  if (bVar4) {
    *puVar15 = 1;
  }
  uVar11 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar11 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar11 = GetCurrentThreadId();
    psVar16 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar4 = (ulonglong)uVar11 == *psVar16;
    if (bVar4) {
      *psVar16 = (ulonglong)uVar11;
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
    while( true ) {
      puVar14 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar4 = *(int *)puVar14 == 1;
      if (bVar4) {
        *(undefined4 *)puVar14 = 1;
      }
      UNLOCK();
      if (bVar4) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar17._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar17._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar17 == 0) {
      return;
    }
  }
  else {
    uVar11 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar11;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar11 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar11 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar18 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar18);
          if (pIVar18->field_count != 0) {
            ppMVar10 = pIVar18->methods;
            pMVar19 = *ppMVar10;
code_?:
            if (pMVar19 != (MethodInfo *)0x0) {
              if ((*pMVar19->name == '.') && ((pMVar19->flags & 0x800) != 0)) {
                ppMVar20 = ppMVar8;
                while (ppMVar21 = ppMVar20 + 0x3052af36,
                      ppMVar20 = (MethodInfo **)((longlong)ppMVar20 + 1),
                      *(char *)ppMVar21 == (pMVar19->name + -1)[(longlong)ppMVar20]) {
                  if (ppMVar20 == (MethodInfo **)0x7) {
                    FUN_?(pMVar19,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar18->methods + pIVar18->field_count) {
            pMVar19 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar18 = pIVar18->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar18 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar22 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar20 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar20 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar20);
    if (uStack_25 < 0x10) {
code_?:
      lVar9 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar20 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar20 = apppppppuStack_58[0];
      }
      uStack_24 = uVar3;
      uStack_25 = uVar22;
      lVar17 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar20);
      if (lVar9 != 0) {
        *(longlong *)(lVar17 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar11 = (uint)(lVar17 + 0x28U >> 0xc);
          puVar27 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar28 = *puVar27;
            LOCK();
            uVar22 = *puVar27;
            if (uVar28 == uVar22) {
              *puVar27 = uVar28 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar28 != uVar22);
        }
      }
      FUN_?(pOVar7,lVar17);
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
      uVar3 = _UNK_?;
      uVar22 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar3._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar3._4_4_ = (pOVar7->_1).cctor_started;
  uVar3 = FUN_?(uVar3);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}

