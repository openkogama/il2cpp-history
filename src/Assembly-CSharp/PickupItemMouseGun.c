
/* InteractionData GetPackageData() */

InteractionData * Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun_GetPackageData(InteractionData *__return_storage_ptr__,PickupItemMouseGun *this,MethodInfo *method)

{
  uVar1 = SUB84(this,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_2.interactionType = 0;
  IStack_2.playerKilledByType = 0;
  IStack_2._18_2_ = 0;
  IStack_2.damage = 0.0;
  IStack_2.impulse.x = 0.0;
  IStack_2.impulse.y = 0.0;
  IStack_2.impulse.z = 0.0;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5(&IStack_2,CONCAT31((int3)((uint)uVar1 >> 8),0x10),0.0,&VStack_4,in_stack_5 & 0xffffff00,(MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_2.damage;
  (__return_storage_ptr__->impulse).x = IStack_2.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_2.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_2.impulse.z;
  __return_storage_ptr__->interactionType = IStack_2.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_2.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_2._18_2_;
  return __return_storage_ptr__;
}


/* PickupItemMouseGun() */

void Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun__ctor(PickupItemMouseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.range = 300.0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1._4_4_ = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_Encrypt(5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar2 = 0;
  uStack_1._0_4_ = (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar2 = 5;
  }
  uStack_4 = (ulonglong)CONCAT14(1,uVar2);
  *(undefined8 *)&(this->fields)._.maxAmmo = uStack_1;
  (this->fields)._.maxAmmo.fakeValue = (undefined4)uStack_4;
  (this->fields)._.maxAmmo.inited = uStack_4._4_1_;
  *(undefined3 *)&(this->fields)._.maxAmmo.field_0xd = uStack_4._5_3_;
  (this->fields)._.missColor.r = 0.9;
  (this->fields)._.missColor.g = 0.3;
  (this->fields)._.missColor.b = 0.2;
  (this->fields)._.missColor.a = 1.0;
  (this->fields)._.hitColor.r = 0.2;
  (this->fields)._.hitColor.g = 0.3;
  (this->fields)._.hitColor.b = 0.9;
  (this->fields)._.hitColor.a = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._._.crossHairCannotFireLow.r = 1.0;
  (this->fields)._._.crossHairCannotFireLow.g = 0.0;
  (this->fields)._._.crossHairCannotFireLow.b = 0.0;
  (this->fields)._._.crossHairCannotFireLow.a = 1.0;
  (this->fields)._._.crossHairCanFire.r = 0.0;
  (this->fields)._._.crossHairCanFire.g = 1.0;
  (this->fields)._._.crossHairCanFire.b = 0.0;
  (this->fields)._._.crossHairCanFire.a = 1.0;
  (this->fields)._._.crossHairCannotFireHigh.r = 1.0;
  (this->fields)._._.crossHairCannotFireHigh.g = 0.92156863;
  (this->fields)._._.crossHairCannotFireHigh.b = 0.015686275;
  (this->fields)._._.crossHairCannotFireHigh.a = 1.0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_InternalEncrypt(1.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 1.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar5 = iRam_? != 0;
  pSVar6 = &(this->fields)._;
  (this->fields)._._.fireInterval.currentCryptoKey = 0;
  (pSVar6->_).fireInterval.hiddenValue.b1 = 0;
  (pSVar6->_).fireInterval.hiddenValue.b2 = 0;
  (pSVar6->_).fireInterval.hiddenValue.b3 = 0;
  (pSVar6->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  pPVar7 = &this->fields;
  (pPVar7->_)._.fireInterval.fakeValue = (float)uStack_1;
  (pPVar7->_)._.fireInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(pPVar7->_)._.fireInterval.field_0x15 = uStack_1._5_3_;
  if (bVar5) {
    uVar8 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar10 == *puVar11;
      if (bVar5) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar5 = iRam_? != 0;
  (this->fields)._._._.meshRenderers = pMVar12;
  if (bVar5) {
    uVar8 = (uint)((ulonglong)&(this->fields)._._._.meshRenderers >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar11;
      LOCK();
      uVar9 = *puVar11;
      if (uVar10 == uVar9) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar9);
  }
  bVar5 = cRam_? == '\0';
  (this->fields)._._._._AbleToFire_k__BackingField = 1;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar13 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar14 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar15 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar16 = ppMVar14;
    if (lVar15 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar15 = lRam_?;
    }
    else {
      do {
        uVar8 = (uint)ppMVar16;
        LOCK();
        bVar5 = uVar8 != uRam_?;
        uVar17 = uVar8;
        uVar18 = uVar8 + 1;
        if (bVar5) {
          uVar17 = uRam_?;
          uVar18 = uRam_?;
        }
        uRam_? = uVar18;
        UNLOCK();
      } while ((bVar5) && (ppMVar16 = (MethodInfo **)(ulonglong)uVar17, uVar8 = uVar17, uVar17 != 2));
      while (uVar8 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar8 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar15;
    puVar19 = &(pOVar13->_1).field_0x1c;
    LOCK();
    bVar5 = *(int *)puVar19 == 1;
    if (bVar5) {
      *(undefined4 *)puVar19 = 1;
    }
    uVar8 = uRam_?;
    UNLOCK();
    if (bVar5) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar8 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar20 = &(pOVar13->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar5 = *puVar20 == 1;
      if (bVar5) {
        *puVar20 = 1;
      }
      uVar8 = uRam_?;
      UNLOCK();
      if (bVar5) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar8 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar8 = GetCurrentThreadId();
        psVar21 = &(pOVar13->_1).cctor_thread;
        LOCK();
        bVar5 = (ulonglong)uVar8 == *psVar21;
        if (bVar5) {
          *psVar21 = (ulonglong)uVar8;
        }
        UNLOCK();
        if (bVar5) {
          return;
        }
        while( true ) {
          puVar19 = &(pOVar13->_1).field_0x1c;
          LOCK();
          bVar5 = *(int *)puVar19 == 1;
          if (bVar5) {
            *(undefined4 *)puVar19 = 1;
          }
          UNLOCK();
          if (bVar5) break;
          LOCK();
          lVar15._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
          lVar15._4_4_ = (pOVar13->_1).cctor_started;
          if (lVar15 == 0) {
            (pOVar13->_1).initializationExceptionGCHandle = 0;
            (pOVar13->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar15 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar8 = GetCurrentThreadId();
        LOCK();
        (pOVar13->_1).cctor_thread = (ulonglong)uVar8;
        UNLOCK();
        LOCK();
        (pOVar13->_1).cctor_finished_or_no_cctor = 1;
        uVar8 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar8 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar13->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar13);
          ppMVar16 = ppMVar14;
          pIVar22 = (Il2CppClass *)pOVar13;
code_?:
          do {
            if (ppMVar16 == (MethodInfo **)0x0) {
              FUN_?(pIVar22);
              if (pIVar22->field_count != 0) {
                ppMVar16 = pIVar22->methods;
                pMVar23 = *ppMVar16;
code_?:
                if (pMVar23 != (MethodInfo *)0x0) {
                  if ((*pMVar23->name == '.') && ((pMVar23->flags & 0x800) != 0)) {
                    ppMVar24 = ppMVar14;
                    while (ppMVar25 = ppMVar24 + 0x30529dd4, ppMVar24 = (MethodInfo **)((longlong)ppMVar24 + 1), *(char *)ppMVar25 == (pMVar23->name + -1)[(longlong)ppMVar24]) {
                      if (ppMVar24 == (MethodInfo **)0x7) {
                        FUN_?(pMVar23,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar16 = ppMVar16 + 1;
              if (ppMVar16 < pIVar22->methods + pIVar22->field_count) {
                pMVar23 = *ppMVar16;
                goto code_?;
              }
            }
            pIVar22 = pIVar22->parent;
            ppMVar16 = ppMVar14;
          } while (pIVar22 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar13->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar13->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar26._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
      lVar26._4_4_ = (pOVar13->_1).cctor_started;
      if (lVar26 != 0) {
        uVar27._0_4_ = (pOVar13->_1).initializationExceptionGCHandle;
        uVar27._4_4_ = (pOVar13->_1).cctor_started;
        uVar27 = FUN_?(uVar27);
        FUN_?(uVar27,0);
        FUN_?(0,0,0,0,0);
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
    }
  }
  return;
}

