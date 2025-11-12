
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_Initialize
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterGameCoin__OnActivationChange_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField, pMVar3 != (MVGameCoinManager *)0x0
     )) {
    pMVar4 = (pMVar3->fields).OnActivationChange;
    this_00 = (UnityAction_1_System_ByteEnum_ *)
              FUN_?(TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
               (MethodInfo *)0x0);
    pMVar5 = (MVGameCoinManager_OnActivationChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar4 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
    if (pMVar5 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
      (pMVar3->fields).OnActivationChange = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
    }
    else {
      pMVar6 = pMVar4;
      if (pMVar5->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
        pMVar6 = pMVar5;
      }
      if (pMVar6 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar3->fields).OnActivationChange = pMVar6;
      pMVar6 = pMVar4;
      if (pMVar5->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
        pMVar6 = pMVar5;
      }
      if (pMVar6 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnActivationChange >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField,
       pMVar3 != (MVGameCoinManager *)0x0)) {
      a = (pMVar3->fields).OnGameCoinAmountChange;
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,
                 (MethodInfo *)0x0);
      pMVar5 = (MVGameCoinManager_OnActivationChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pMVar5 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
        (pMVar3->fields).OnGameCoinAmountChange =
             (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
      }
      else {
        pMVar6 = pMVar4;
        if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)pMVar5->klass ==
            TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
          pMVar6 = pMVar5;
        }
        if (pMVar6 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          FUN_?(pMVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).OnGameCoinAmountChange =
             (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)pMVar6;
        if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)pMVar5->klass ==
            TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
          pMVar4 = pMVar5;
        }
        if (pMVar4 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          FUN_?(pMVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnGameCoinAmountChange >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnActivationChange(Boolean) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnActivationChange
               (GameMeterGameCoin *this,bool wantToShow,MethodInfo *method)

{
  pGVar1 = this->klass;
  (this->fields)._.meterActive = wantToShow;
  (*(pGVar1->vtable).SetShowGameMeter.methodPtr)
            (this,CONCAT71(in_register_00000011,wantToShow),(pGVar1->vtable).SetShowGameMeter.method
            );
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,wantToShow,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,wantToShow);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnDestroy
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterGameCoin__OnActivationChange_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields)._GameCoinManager_k__BackingField,
       pMVar4 != (MVGameCoinManager *)0x0)) {
      pMVar5 = (pMVar4->fields).OnActivationChange;
      this_00 = (UnityAction_1_System_ByteEnum_ *)
                FUN_?(TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)this,MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
                 (MethodInfo *)0x0);
      pMVar6 = (MVGameCoinManager_OnActivationChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pMVar5 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
      if (pMVar6 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
        (pMVar4->fields).OnActivationChange = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
      }
      else {
        pMVar7 = pMVar5;
        if (pMVar6->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pMVar4->fields).OnActivationChange = pMVar7;
        pMVar7 = pMVar5;
        if (pMVar6->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).OnActivationChange >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pMVar4 = (pMVar3->fields)._GameCoinManager_k__BackingField,
         pMVar4 != (MVGameCoinManager *)0x0)) {
        source = (pMVar4->fields).OnGameCoinAmountChange;
        this_01 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,(MethodInfo *)0x0);
        pMVar6 = (MVGameCoinManager_OnActivationChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pMVar6 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          (pMVar4->fields).OnGameCoinAmountChange =
               (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
        }
        else {
          pMVar7 = pMVar5;
          if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)pMVar6->klass ==
              TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
            FUN_?(pMVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pMVar4->fields).OnGameCoinAmountChange =
               (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)pMVar7;
          if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)pMVar6->klass ==
              TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
            pMVar5 = pMVar6;
          }
          if (pMVar5 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
            FUN_?(pMVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? == 0) {
          return;
        }
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).OnGameCoinAmountChange >> 0xc);
        lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar12 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGameCoinAmountChanged(Int32) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnGameCoinAmountChanged
               (GameMeterGameCoin *this,int32_t amount,MethodInfo *method)

{
  aIStackX_10[0].m_value = amount;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).useText == 0) {
    pRVar1 = (this->fields).counter;
    if (pRVar1 != (RollingNumberCounterAndroid *)0x0) {
      aIStackX_10[0].m_value = amount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pRVar2 = (pRVar1->fields).digits;
      if (pRVar2 != (RollingNumberDigitAndroid__Array *)0x0) {
        iVar3 = (int)pRVar2->max_length;
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
        if (pSVar4 != (String *)0x0) {
          uVar5 = 0;
          iVar6 = (pSVar4->fields)._stringLength;
          if (iVar3 < iVar6) {
            if (0 < iVar3) {
              lVar7 = 0x20;
              uVar8 = uVar5;
              do {
                pRVar2 = (pRVar1->fields).digits;
                if (pRVar2 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
                if ((uint)pRVar2->max_length <= (uint)uVar8) goto code_?;
                pRVar9 = *(RollingNumberDigitAndroid **)((longlong)pRVar2->vector + lVar7 + -0x20);
                if (pRVar9 == (RollingNumberDigitAndroid *)0x0) goto code_?;
                RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                          (pRVar9,9,(MethodInfo *)0x0);
                uVar8 = (ulonglong)((uint)uVar8 + 1);
                uVar5 = uVar5 + 1;
                lVar7 = lVar7 + 8;
              } while ((longlong)uVar5 < (longlong)iVar3);
            }
          }
          else {
            pSVar10 = ::StringLiteral__;
            uVar8 = uVar5;
            if (iVar6 < iVar3) {
              for (; (int)uVar8 < iVar3 - (pSVar4->fields)._stringLength;
                  uVar8 = (ulonglong)((int)uVar8 + 1)) {
                pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                   (pSVar10,StringLiteral__0,(MethodInfo *)0x0);
              }
              pSVar4 = mscorlib.dll::System::String::String_Concat_4
                                 (pSVar10,pSVar4,(MethodInfo *)0x0);
            }
            if (0 < iVar3) {
              lVar7 = 0x20;
              do {
                pRVar2 = (pRVar1->fields).digits;
                if (pRVar2 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
                startIndex = (uint)uVar5;
                if ((uint)pRVar2->max_length <= startIndex) {
code_?:
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pRVar9 = *(RollingNumberDigitAndroid **)((longlong)pRVar2->vector + lVar7 + -0x20);
                if (pSVar4 == (String *)0x0) goto code_?;
                pSVar10 = mscorlib.dll::System::String::String_Substring_1
                                   (pSVar4,startIndex,1,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Globalization__CultureInfo);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                value = 0;
                if (pSVar10 != (String *)0x0) {
                  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  this_00 = mscorlib.dll::System::Threading::Thread::Thread_get_CurrentThread
                                      ((MethodInfo *)0x0);
                  if (this_00 == (Thread *)0x0) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  provider = mscorlib.dll::System::Threading::Thread::Thread_GetCurrentCultureNoAppX
                                       (this_00,(MethodInfo *)0x0);
                  value = mscorlib.dll::System::Int32::Int32_Parse_2
                                    (pSVar10,(IFormatProvider *)provider,(MethodInfo *)0x0);
                }
                if (pRVar9 == (RollingNumberDigitAndroid *)0x0) goto code_?;
                RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                          (pRVar9,value,(MethodInfo *)0x0);
                uVar5 = (ulonglong)(startIndex + 1);
                lVar7 = lVar7 + 8;
              } while ((int)(startIndex + 1) < iVar3);
            }
          }
          return;
        }
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    pTVar12 = (this->fields).counterText;
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    pSVar4 = ::StringLiteral__;
    if (pSVar10 != (String *)0x0) {
      pSVar4 = pSVar10;
    }
    if (pTVar12 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pTVar12->klass->vtable).set_text.methodPtr)
                (pTVar12,pSVar4,(pTVar12->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetGameMeterVisibility
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField, pMVar3 != (MVGameCoinManager *)0x0
     )) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4._0_1_ = (pMVar3->fields).isActive.currentCryptoKey;
    uVar4._1_3_ = *(undefined3 *)&(pMVar3->fields).isActive.field_0x1;
    uVar4._4_4_ = (pMVar3->fields).isActive.hiddenValue;
    uVar5._0_1_ = (pMVar3->fields).isActive.fakeValue;
    uVar5._1_1_ = (pMVar3->fields).isActive.fakeValueChanged;
    uVar5._2_1_ = (pMVar3->fields).isActive.inited;
    uVar5._3_1_ = (pMVar3->fields).isActive.field_0xb;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    OStack_6._0_8_ = uVar4;
    OStack_6._8_4_ = uVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt(&OStack_6,(MethodInfo *)0x0);
    pGVar8 = this->klass;
    (this->fields)._.meterActive = bVar7;
    (*(pGVar8->vtable).SetShowGameMeter.methodPtr)(this);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,bVar7,(MethodInfo *)0x0);
      return bVar7;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetShowGameMeter
               (GameMeterGameCoin *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).gameCoinBar;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,show,(MethodInfo *)0x0);
    obj = (this->fields).coinAmount;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,show,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (obj->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,show);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

