
/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun_GetPackageData
          (InteractionData *__return_storage_ptr__,PickupItemMouseGun *this,MethodInfo *method)

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
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_2,CONCAT31((int3)((uint)uVar1 >> 8),0x10),0.0,&VStack_4,
             in_stack_5 & 0xffffff00,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun__ctor
               (PickupItemMouseGun *this,MethodInfo *method)

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
  uStack_1._4_4_ =
       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
       ObscuredInt_Encrypt(5,(MethodInfo *)0x0);
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
  uStack_1._0_4_ =
       (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  if (bVar3 != 0) {
    uVar2 = 5;
  }
  uStack_6 = (ulonglong)CONCAT14(1,uVar2);
  *(undefined8 *)&(this->fields)._.maxAmmo = uStack_1;
  (this->fields)._.maxAmmo.fakeValue = (undefined4)uStack_6;
  uVar7 = _UNK_?;
  (this->fields)._.maxAmmo.inited = uStack_6._4_1_;
  *(undefined3 *)&(this->fields)._.maxAmmo.field_0xd = uStack_6._5_3_;
  uVar2 = _UNK_?;
  (this->fields)._.missColor.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._.missColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.missColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields)._.missColor.a = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.hitColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (this->fields)._.hitColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar2 = _UNK_?;
  (this->fields)._.hitColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._.hitColor.a = (float)uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar8 = _UNK_?;
  uVar7 = _UNK_?;
  uVar5 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar5 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar5 = _UNK_?;
  (this->fields)._._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar8;
  _UNK_? = SUB84(uVar8,4);
  uVar2 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._._.crossHairCannotFireHigh.a = (float)uVar2;
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
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 1.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar9 = iRam_? != 0;
  pSVar10 = &(this->fields)._;
  (this->fields)._._.fireInterval.currentCryptoKey = 0;
  (pSVar10->_).fireInterval.hiddenValue.b1 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b2 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b3 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  pPVar11 = &this->fields;
  (pPVar11->_)._.fireInterval.fakeValue = (float)uStack_1;
  (pPVar11->_)._.fireInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(pPVar11->_)._.fireInterval.field_0x15 = uStack_1._5_3_;
  if (bVar9) {
    uVar12 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar14 == *puVar15;
      if (bVar9) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar9 = iRam_? != 0;
  (this->fields)._._._.meshRenderers = pMVar16;
  if (bVar9) {
    uVar12 = (uint)((ulonglong)&(this->fields)._._._.meshRenderers >> 0xc);
    puVar15 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar14 = *puVar15;
      LOCK();
      uVar13 = *puVar15;
      if (uVar14 == uVar13) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (uVar14 != uVar13);
  }
  bVar9 = cRam_? == '\0';
  (this->fields)._._._._AbleToFire_k__BackingField = 1;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar17 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar18 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar19 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar20 = ppMVar18;
    if (lVar19 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar19 = lRam_?;
    }
    else {
      do {
        uVar12 = (uint)ppMVar20;
        LOCK();
        bVar9 = uVar12 != uRam_?;
        uVar21 = uVar12;
        uVar22 = uVar12 + 1;
        if (bVar9) {
          uVar21 = uRam_?;
          uVar22 = uRam_?;
        }
        uRam_? = uVar22;
        UNLOCK();
      } while ((bVar9) &&
              (ppMVar20 = (MethodInfo **)(ulonglong)uVar21, uVar12 = uVar21, uVar21 != 2));
      while (uVar12 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar12 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar19;
    puVar23 = &(pOVar17->_1).field_0x1c;
    LOCK();
    bVar9 = *(int *)puVar23 == 1;
    if (bVar9) {
      *(undefined4 *)puVar23 = 1;
    }
    uVar12 = uRam_?;
    UNLOCK();
    if (bVar9) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar12 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar24 = &(pOVar17->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar9 = *puVar24 == 1;
      if (bVar9) {
        *puVar24 = 1;
      }
      uVar12 = uRam_?;
      UNLOCK();
      if (bVar9) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar12 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar12 = GetCurrentThreadId();
        psVar25 = &(pOVar17->_1).cctor_thread;
        LOCK();
        bVar9 = (ulonglong)uVar12 == *psVar25;
        if (bVar9) {
          *psVar25 = (ulonglong)uVar12;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
        while( true ) {
          puVar23 = &(pOVar17->_1).field_0x1c;
          LOCK();
          bVar9 = *(int *)puVar23 == 1;
          if (bVar9) {
            *(undefined4 *)puVar23 = 1;
          }
          UNLOCK();
          if (bVar9) break;
          LOCK();
          lVar19._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
          lVar19._4_4_ = (pOVar17->_1).cctor_started;
          if (lVar19 == 0) {
            (pOVar17->_1).initializationExceptionGCHandle = 0;
            (pOVar17->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar19 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar12 = GetCurrentThreadId();
        LOCK();
        (pOVar17->_1).cctor_thread = (ulonglong)uVar12;
        UNLOCK();
        LOCK();
        (pOVar17->_1).cctor_finished_or_no_cctor = 1;
        uVar12 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar12 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar17->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar17);
          ppMVar20 = ppMVar18;
          pIVar26 = (Il2CppClass *)pOVar17;
code_?:
          do {
            if (ppMVar20 == (MethodInfo **)0x0) {
              FUN_?(pIVar26);
              if (pIVar26->field_count != 0) {
                ppMVar20 = pIVar26->methods;
                pMVar27 = *ppMVar20;
code_?:
                if (pMVar27 != (MethodInfo *)0x0) {
                  if ((*pMVar27->name == '.') && ((pMVar27->flags & 0x800) != 0)) {
                    ppMVar28 = ppMVar18;
                    while (ppMVar29 = ppMVar28 + 0x3052af36,
                          ppMVar28 = (MethodInfo **)((longlong)ppMVar28 + 1),
                          *(char *)ppMVar29 == (pMVar27->name + -1)[(longlong)ppMVar28]) {
                      if (ppMVar28 == (MethodInfo **)0x7) {
                        FUN_?(pMVar27,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar20 = ppMVar20 + 1;
              if (ppMVar20 < pIVar26->methods + pIVar26->field_count) {
                pMVar27 = *ppMVar20;
                goto code_?;
              }
            }
            pIVar26 = pIVar26->parent;
            ppMVar20 = ppMVar18;
          } while (pIVar26 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar17->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar17->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar30._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
      lVar30._4_4_ = (pOVar17->_1).cctor_started;
      if (lVar30 != 0) {
        uVar5._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
        uVar5._4_4_ = (pOVar17->_1).cctor_started;
        uVar5 = FUN_?(uVar5);
        FUN_?(uVar5,0);
        FUN_?(0,0,0,0,0);
        pcVar31 = (code *)swi(3);
        (*pcVar31)();
        return;
      }
    }
  }
  return;
}

