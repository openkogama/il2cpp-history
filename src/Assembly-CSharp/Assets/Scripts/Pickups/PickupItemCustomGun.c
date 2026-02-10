
/* IEnumerator ChargeRoutine(Int32) */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_ChargeRoutine
          (PickupItemCustomGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__70,
                  CONCAT44(in_register_00000014,instigatorActorNr));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__70
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* IEnumerator FetchFOV() */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_FetchFOV
          (PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__54);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__54);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void FireSemiAutomaticWithCharge() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_FireSemiAutomaticWithCharge(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  pMVar4 = (this->fields)._._._.owner;
  (this->fields)._._.lastFireTime = fVar3;
  if (pMVar4 == (MVPickupOwner *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(this->klass->vtable).OnFire.methodPtr)
            (this,(ulonglong)(pMVar4->fields)._IsLocal_k__BackingField,
             (this->klass->vtable).OnFire.method);
  aOStack_5[0].currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
  aOStack_5[0].hiddenValue = (this->fields).currentAmmo.hiddenValue;
  aOStack_5[0].fakeValue = (this->fields).currentAmmo.fakeValue;
  aOStack_5[0].inited = (this->fields).currentAmmo.inited;
  aOStack_5[0]._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
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
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  if ((iVar6 < 1) &&
     (cVar7 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                        (this,(this->klass->vtable).get_HasUnlimitedAmmo.method), cVar7 == '\0')) {
    pMVar4 = (this->fields)._._._.owner;
    if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)pMVar4,
                        MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__)
    ;
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
    if (pOVar8 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar8[1].klass != (Object__Class *)0x0) {
        pOVar9 = pOVar8->klass;
        uVar2._0_2_ = pOVar9[1]._0.byval_arg.attrs;
        uVar2._2_1_ = pOVar9[1]._0.byval_arg.type;
        uVar2._3_5_ = *(undefined5 *)&pOVar9[1]._0.byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)pOVar9[1]._0.byval_arg.data)(pOVar8,uVar2);
        return;
      }
    }
  }
  return;
}


/* Void FireWithCharge(CustomGunData+FireMode) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_FireWithCharge
               (PickupItemCustomGun *this,CustomGunData_FireMode__Enum fireMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).chargeRoutine != (IEnumerator *)0x0) {
    routine = (this->fields).chargeRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_00 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_00,routine,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).chargeRoutine = (IEnumerator *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).chargeRoutine >> 0xc);
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
  }
  if (fireMode == CustomGunData_FireMode__Enum_Semi) {
    uVar6._0_4_ = (this->fields).currentCharge.currentCryptoKey;
    uVar6._4_4_ = (this->fields).currentCharge.hiddenValue;
    pBVar7 = (this->fields).currentCharge.hiddenValueOld;
    uVar8._0_4_ = (this->fields).currentCharge.fakeValue;
    uVar8._4_1_ = (this->fields).currentCharge.inited;
    uVar8._5_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_9[0]._0_8_ = uVar6;
    aOStack_9[0].hiddenValueOld = pBVar7;
    aOStack_9[0]._16_8_ = uVar8;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_9,(MethodInfo *)0x0);
    if (_UNK_? <= fVar10) {
      PickupItemCustomGun_FireSemiAutomaticWithCharge(this,(MethodInfo *)0x0);
    }
  }
  pPVar11 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar11 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar11->fields).chargeParticlesEnabled != 0) {
      this_01 = (this->fields).chargeParticles;
      if (this_01 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                (this_01,1,(MethodInfo *)0x0);
    }
    this_02 = (this->fields).chargeAudioPlayer;
    if (this_02 != (CustomItemAudioPlayer *)0x0) {
      CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(this_02,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_9[0].fakeValue = 0.0;
      aOStack_9[0].inited = 0;
      aOStack_9[0]._21_3_ = 0;
      aOStack_9[0].currentCryptoKey = 0;
      aOStack_9[0].hiddenValue.b1 = 0;
      aOStack_9[0].hiddenValue.b2 = 0;
      aOStack_9[0].hiddenValue.b3 = 0;
      aOStack_9[0].hiddenValue.b4 = 0;
      aOStack_9[0].hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat__ctor(aOStack_9,value,(MethodInfo *)0x0);
      bVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
              ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar12 != 0) {
        aOStack_9[0]._16_8_ = aOStack_9[0]._16_8_ & 0xffffffff00000000;
      }
      bVar1 = iRam_? != 0;
      (this->fields).currentCharge.currentCryptoKey = aOStack_9[0].currentCryptoKey;
      (this->fields).currentCharge.hiddenValue = aOStack_9[0].hiddenValue;
      (this->fields).currentCharge.hiddenValueOld = aOStack_9[0].hiddenValueOld;
      (this->fields).currentCharge.fakeValue = aOStack_9[0].fakeValue;
      (this->fields).currentCharge.inited = aOStack_9[0].inited;
      *(undefined3 *)&(this->fields).currentCharge.field_0x15 = aOStack_9[0]._21_3_;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).currentCharge.hiddenValueOld >> 0xc);
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
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_GetDefaultConfiguration(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileTrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectilesPerShot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SmokeOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeedWhileHeld);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomAmmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ThirdPersonCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksOnHit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BurstCooldownBetweenShots);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShotsPerBurst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeEnabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           FUN_?(
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                        );
  PickupItemEditable+EditableItemConfiguration::PickupItemEditable_EditableItemConfiguration__ctor
            (pPVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = (String *)
           WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                     (StringLiteral_Name,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    if (pSVar2 == (String *)0x0) {
      (pPVar1->fields).name = (String *)0x0;
    }
    else {
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dc2f60) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2,pSRam0000000182dc2f60);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      (pPVar1->fields).name = pSVar3;
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dc2f60) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                        (StringLiteral_MaxAmmo,(MethodInfo *)0x0);
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10,lRam_?);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      (pPVar1->fields).maxAmmo = *(float *)&pOVar10[1].klass;
      pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                          (StringLiteral_Damage,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10,lRam_?);
          pcVar4 = (code *)swi(3);
          pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
          return pPVar1;
        }
        (pPVar1->fields).damage = *(float *)&pOVar10[1].klass;
        pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                            (StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar10,lRam_?);
            pcVar4 = (code *)swi(3);
            pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
            return pPVar1;
          }
          (pPVar1->fields).impulseStrength = *(float *)&pOVar10[1].klass;
          pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                              (StringLiteral_RecoilStrength,(MethodInfo *)0x0);
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar10,lRam_?);
              pcVar4 = (code *)swi(3);
              pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
              return pPVar1;
            }
            (pPVar1->fields).recoilStrength = *(float *)&pOVar10[1].klass;
            pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                (StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar4 = (code *)swi(3);
                pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                return pPVar1;
              }
              (pPVar1->fields).fireAnimationTime = *(float *)&pOVar10[1].klass;
              pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                  (StringLiteral_AttackCooldown,(MethodInfo *)0x0);
              if (pOVar10 != (Object *)0x0) {
                if ((pOVar10->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar10,lRam_?);
                  pcVar4 = (code *)swi(3);
                  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                  return pPVar1;
                }
                (pPVar1->fields).attackCooldown = *(float *)&pOVar10[1].klass;
                pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                    (StringLiteral_Radius,(MethodInfo *)0x0);
                if (pOVar10 != (Object *)0x0) {
                  if ((pOVar10->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar10,lRam_?);
                    pcVar4 = (code *)swi(3);
                    pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                    return pPVar1;
                  }
                  (pPVar1->fields).radius = *(float *)&pOVar10[1].klass;
                  pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                      (StringLiteral_FireSoundEffect,(MethodInfo *)0x0);
                  if (pOVar10 != (Object *)0x0) {
                    if ((pOVar10->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar10,lRam_?);
                      pcVar4 = (code *)swi(3);
                      pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                      return pPVar1;
                    }
                    (pPVar1->fields).fireSoundEffect = *(int32_t *)&pOVar10[1].klass;
                    pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                        (StringLiteral_FireSoundEffectVolume,(MethodInfo *)0x0);
                    if (pOVar10 != (Object *)0x0) {
                      if ((pOVar10->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar10,lRam_?);
                        pcVar4 = (code *)swi(3);
                        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                        return pPVar1;
                      }
                      (pPVar1->fields).fireSoundEffectVolume = *(float *)&pOVar10[1].klass;
                      pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                CustomGunData_DefaultValue
                                          (StringLiteral_HitSoundEffect,(MethodInfo *)0x0);
                      if (pOVar10 != (Object *)0x0) {
                        if ((pOVar10->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar10,lRam_?);
                          pcVar4 = (code *)swi(3);
                          pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                          return pPVar1;
                        }
                        (pPVar1->fields).hitSoundEffect = *(int32_t *)&pOVar10[1].klass;
                        pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                  CustomGunData_DefaultValue
                                            (StringLiteral_HitSoundEffectVolume,(MethodInfo *)0x0);
                        if (pOVar10 != (Object *)0x0) {
                          if ((pOVar10->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar10,lRam_?);
                            pcVar4 = (code *)swi(3);
                            pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                            return pPVar1;
                          }
                          (pPVar1->fields).hitSoundEffectVolume = *(float *)&pOVar10[1].klass;
                          pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                    CustomGunData_DefaultValue
                                              (StringLiteral_MovementSpeedWhileHeld,
                                               (MethodInfo *)0x0);
                          if (pOVar10 != (Object *)0x0) {
                            if ((pOVar10->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar10,lRam_?);
                              pcVar4 = (code *)swi(3);
                              pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                              return pPVar1;
                            }
                            *(undefined4 *)&pPVar1[1].klass = *(undefined4 *)&pOVar10[1].klass;
                            pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                      CustomGunData_DefaultValue
                                                (StringLiteral_FireMode,(MethodInfo *)0x0);
                            if (pOVar10 != (Object *)0x0) {
                              if ((pOVar10->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar10,lRam_?);
                                pcVar4 = (code *)swi(3);
                                pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)()
                                ;
                                return pPVar1;
                              }
                              *(undefined4 *)((longlong)&pPVar1[1].klass + 4) =
                                   *(undefined4 *)&pOVar10[1].klass;
                              pVVar11 = WorldObjectTypes::CustomGun::CustomGunData::
                                        CustomGunData_DefaultVector3
                                                  ((Vector3 *)&CStack_12,
                                                   StringLiteral_MuzzlePosition,(MethodInfo *)0x0);
                              fVar13 = pVVar11->z;
                              pPVar1[1].monitor = *(MonitorData **)pVVar11;
                              *(float *)&pPVar1[1].fields.name = fVar13;
                              pVVar11 = WorldObjectTypes::CustomGun::CustomGunData::
                                        CustomGunData_DefaultVector3
                                                  ((Vector3 *)&CStack_12,
                                                   StringLiteral_MuzzleDirection,(MethodInfo *)0x0);
                              fVar13 = pVVar11->z;
                              *(undefined8 *)((longlong)&pPVar1[1].fields.name + 4) =
                                   *(undefined8 *)pVVar11;
                              pPVar1[1].fields.maxAmmo = fVar13;
                              pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                        CustomGunData_DefaultValue
                                                  (StringLiteral_MuzzleFlareOnFire,(MethodInfo *)0x0
                                                  );
                              if (pOVar10 != (Object *)0x0) {
                                if ((pOVar10->klass->_0).element_class !=
                                    *(Il2CppClass **)(lRam_? + 0x40)) {
                                  FUN_?(pOVar10,lRam_?);
                                  pcVar4 = (code *)swi(3);
                                  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
                                           (*pcVar4)();
                                  return pPVar1;
                                }
                                *(undefined1 *)&pPVar1[1].fields.damage =
                                     *(undefined1 *)&pOVar10[1].klass;
                                pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                          CustomGunData_DefaultValue
                                                    (StringLiteral_MuzzleFlareSize,(MethodInfo *)0x0
                                                    );
                                if (pOVar10 != (Object *)0x0) {
                                  if ((pOVar10->klass->_0).element_class !=
                                      *(Il2CppClass **)(lRam_? + 0x40)) {
                                    FUN_?(pOVar10,lRam_?);
                                    pcVar4 = (code *)swi(3);
                                    pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
                                             (*pcVar4)();
                                    return pPVar1;
                                  }
                                  pPVar1[1].fields.impulseStrength = *(float *)&pOVar10[1].klass;
                                  pCVar14 = WorldObjectTypes::CustomGun::CustomGunData::
                                            CustomGunData_DefaultColor
                                                      (&CStack_12,StringLiteral_MuzzleFlareColor,
                                                       (MethodInfo *)0x0);
                                  fVar13 = pCVar14->g;
                                  fVar15 = pCVar14->b;
                                  fVar16 = pCVar14->a;
                                  pPVar1[1].fields.recoilStrength = pCVar14->r;
                                  pPVar1[1].fields.fireAnimationTime = fVar13;
                                  pPVar1[1].fields.attackCooldown = fVar15;
                                  pPVar1[1].fields.range = fVar16;
                                  pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                            CustomGunData_DefaultValue
                                                      (StringLiteral_ThirdPersonCamera,
                                                       (MethodInfo *)0x0);
                                  if (pOVar10 != (Object *)0x0) {
                                    if ((pOVar10->klass->_0).element_class !=
                                        *(Il2CppClass **)(lRam_? + 0x40)) {
                                      FUN_?(pOVar10,lRam_?);
                                      pcVar4 = (code *)swi(3);
                                      pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
                                               (*pcVar4)();
                                      return pPVar1;
                                    }
                                    *(undefined1 *)&pPVar1[1].fields.radius =
                                         *(undefined1 *)&pOVar10[1].klass;
                                    pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                              CustomGunData_DefaultValue
                                                        (StringLiteral_SmokeOnFire,(MethodInfo *)0x0
                                                        );
                                    if (pOVar10 != (Object *)0x0) {
                                      if ((pOVar10->klass->_0).element_class !=
                                          *(Il2CppClass **)(lRam_? + 0x40)) {
                                        FUN_?(pOVar10,lRam_?);
                                        pcVar4 = (code *)swi(3);
                                        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
                                                 (*pcVar4)();
                                        return pPVar1;
                                      }
                                      *(undefined1 *)((longlong)&pPVar1[1].fields.radius + 1) =
                                           *(undefined1 *)&pOVar10[1].klass;
                                      pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                                CustomGunData_DefaultValue
                                                          (StringLiteral_ShotsPerBurst,
                                                           (MethodInfo *)0x0);
                                      if (pOVar10 != (Object *)0x0) {
                                        if ((pOVar10->klass->_0).element_class !=
                                            *(Il2CppClass **)(lRam_? + 0x40)) {
                                          FUN_?(pOVar10,lRam_?);
                                          pcVar4 = (code *)swi(3);
                                          pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
                                                   (*pcVar4)();
                                          return pPVar1;
                                        }
                                        pPVar1[1].fields.fireSoundEffect =
                                             *(int32_t *)&pOVar10[1].klass;
                                        pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                                  CustomGunData_DefaultValue
                                                            (StringLiteral_BurstCooldownBetweenShots
                                                             ,(MethodInfo *)0x0);
                                        if (pOVar10 != (Object *)0x0) {
                                          if ((pOVar10->klass->_0).element_class !=
                                              *(Il2CppClass **)(lRam_? + 0x40)) {
                                            FUN_?(pOVar10,lRam_?);
                                            pcVar4 = (code *)swi(3);
                                            pPVar1 = (PickupItemEditable_EditableItemConfiguration *
                                                     )(*pcVar4)();
                                            return pPVar1;
                                          }
                                          pPVar1[1].fields.fireSoundEffectVolume =
                                               *(float *)&pOVar10[1].klass;
                                          pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                                    CustomGunData_DefaultValue
                                                              (StringLiteral_ProjectilesPerShot,
                                                               (MethodInfo *)0x0);
                                          if (pOVar10 != (Object *)0x0) {
                                            if ((pOVar10->klass->_0).element_class !=
                                                *(Il2CppClass **)(lRam_? + 0x40)) {
                                              FUN_?(pOVar10,lRam_?);
                                              pcVar4 = (code *)swi(3);
                                              pPVar1 = (PickupItemEditable_EditableItemConfiguration
                                                        *)(*pcVar4)();
                                              return pPVar1;
                                            }
                                            pPVar1[1].fields.hitSoundEffect =
                                                 *(int32_t *)&pOVar10[1].klass;
                                            pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                                      CustomGunData_DefaultValue
                                                                (StringLiteral_ChargeEnabled,
                                                                 (MethodInfo *)0x0);
                                            if (pOVar10 != (Object *)0x0) {
                                              if ((pOVar10->klass->_0).element_class !=
                                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                                FUN_?(pOVar10,lRam_?);
                                                pcVar4 = (code *)swi(3);
                                                pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                return pPVar1;
                                              }
                                              *(undefined1 *)&pPVar1[1].fields.hitSoundEffectVolume
                                                   = *(undefined1 *)&pOVar10[1].klass;
                                              pOVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                                        CustomGunData_DefaultValue
                                                                  (StringLiteral_ChargeTime,
                                                                   (MethodInfo *)0x0);
                                              if (pOVar10 != (Object *)0x0) {
                                                if ((pOVar10->klass->_0).element_class !=
                                                    *(Il2CppClass **)(lRam_? + 0x40))
                                                {
                                                  FUN_?(pOVar10,lRam_?);
                                                  pcVar4 = (code *)swi(3);
                                                  pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                }
                                                *(undefined4 *)&pPVar1[1].fields.field_0x3c =
                                                     *(undefined4 *)&pOVar10[1].klass;
                                                pOVar10 = WorldObjectTypes::CustomGun::CustomGunData
                                                          ::CustomGunData_DefaultValue
                                                                    (StringLiteral_ChargeSoundEffect
                                                                     ,(MethodInfo *)0x0);
                                                if (pOVar10 != (Object *)0x0) {
                                                  if ((pOVar10->klass->_0).element_class !=
                                                      *(Il2CppClass **)(lRam_? + 0x40)
                                                     ) {
                                                    FUN_?(pOVar10,lRam_?);
                                                    pcVar4 = (code *)swi(3);
                                                    pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined4 *)&pPVar1[2].klass =
                                                       *(undefined4 *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (
                                                  StringLiteral_ChargeSoundEffectVolume,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined4 *)((longlong)&pPVar1[2].klass + 4) =
                                                       *(undefined4 *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (
                                                  StringLiteral_ChargeParticlesEnabled,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined1 *)&pPVar1[2].monitor =
                                                       *(undefined1 *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (
                                                  StringLiteral_ChargeParticlesSize,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined4 *)((longlong)&pPVar1[2].monitor + 4)
                                                       = *(undefined4 *)&pOVar10[1].klass;
                                                  pCVar14 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultColor
                                                                      (&CStack_12,
                                                                                                                                              
                                                  StringLiteral_ChargeParticlesColor,
                                                  (MethodInfo *)0x0);
                                                  fVar13 = pCVar14->b;
                                                  fVar15 = pCVar14->a;
                                                  pPVar1[2].fields.name = *(String **)pCVar14;
                                                  pPVar1[2].fields.cubeModelId = (int32_t)fVar13;
                                                  pPVar1[2].fields.maxAmmo = fVar15;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (
                                                  StringLiteral_ChargeZoomEnabled,(MethodInfo *)0x0)
                                                  ;
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined1 *)&pPVar1[2].fields.damage =
                                                       *(undefined1 *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (
                                                  StringLiteral_ChargeZoomAmmount,(MethodInfo *)0x0)
                                                  ;
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  pPVar1[2].fields.impulseStrength =
                                                       *(float *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_ChargeZoomTime,
                                                                       (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  pPVar1[2].fields.recoilStrength =
                                                       *(float *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_Range,
                                                                       (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  (pPVar1->fields).range =
                                                       *(float *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_ProjectileSpeed
                                                                       ,(MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  pPVar1[2].fields.fireAnimationTime =
                                                       *(float *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_ProjectileSize,
                                                                       (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  pPVar1[2].fields.attackCooldown =
                                                       *(float *)&pOVar10[1].klass;
                                                  pCVar14 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultColor
                                                                      (&CStack_12,
                                                                       StringLiteral_ProjectileColor
                                                                       ,(MethodInfo *)0x0);
                                                  fVar13 = pCVar14->g;
                                                  fVar15 = pCVar14->b;
                                                  fVar16 = pCVar14->a;
                                                  pPVar1[2].fields.range = pCVar14->r;
                                                  pPVar1[2].fields.radius = fVar13;
                                                  pPVar1[2].fields.fireSoundEffect = (int32_t)fVar15;
                                                  pPVar1[2].fields.fireSoundEffectVolume = fVar16;
                                                  pCVar14 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultColor
                                                                      (&CStack_12,
                                                                                                                                              
                                                  StringLiteral_ProjectileTrailColor,
                                                  (MethodInfo *)0x0);
                                                  fVar13 = pCVar14->g;
                                                  uVar17 = *(undefined8 *)&pCVar14->b;
                                                  pPVar1[2].fields.hitSoundEffect =
                                                       (int32_t)pCVar14->r;
                                                  pPVar1[2].fields.hitSoundEffectVolume = fVar13;
                                                  *(undefined8 *)&pPVar1[2].fields.field_0x3c =
                                                       uVar17;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_SparksOnHit,
                                                                       (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined1 *)((longlong)&pPVar1[3].klass + 4) =
                                                       *(undefined1 *)&pOVar10[1].klass;
                                                  pOVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultValue
                                                                      (StringLiteral_SparksSize,
                                                                       (MethodInfo *)0x0);
                                                  if (pOVar10 != (Object *)0x0) {
                                                    if ((pOVar10->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar10,lRam_?);
                                                      pcVar4 = (code *)swi(3);
                                                      pPVar1 = (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  (*pcVar4)();
                                                  return pPVar1;
                                                  }
                                                  *(undefined4 *)&pPVar1[3].monitor =
                                                       *(undefined4 *)&pOVar10[1].klass;
                                                  pCVar14 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultColor
                                                                      (&CStack_12,
                                                                       StringLiteral_SparksColor,
                                                                       (MethodInfo *)0x0);
                                                  uVar17 = *(undefined8 *)&pCVar14->b;
                                                  *(undefined8 *)((longlong)&pPVar1[3].monitor + 4)
                                                       = *(undefined8 *)pCVar14;
                                                  *(undefined8 *)
                                                   ((longlong)&pPVar1[3].fields.name + 4) = uVar17;
                                                  return pPVar1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
  return pPVar1;
}


/* Vector3 HandleBulletGenerationOnFire(Boolean) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
          PickupItemCustomGun_HandleBulletGenerationOnFire
                    (Vector3 *__return_storage_ptr__,PickupItemCustomGun *this,bool isLocal,
                    MethodInfo *method)

{
  pMVar1 = (MethodInfo *)CONCAT71(in_register_00000081,isLocal);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun__OnLocalHit_VoxelHit__UnityEngine__Ray_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._._._.owner;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  VStack_5.z = 0.0;
  fStack_6 = 0.0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&VStack_8,&(pMVar2->fields).lookDirection,pMVar1);
    uStack_9._0_4_ = pVVar7->x;
    uStack_9._4_4_ = pVVar7->y;
    fStack_10 = pVVar7->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_12._0_4_ = (pVVar11->upVector).x;
    uStack_12._4_4_ = (pVVar11->upVector).y;
    fStack_13 = (pVVar11->upVector).z;
    CStack_14.r = 0.0;
    CStack_14.g = 0.0;
    CStack_14.b = 0.0;
    CStack_14.a = 0.0;
    pcVar15 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar15 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar15)();
      return pVVar7;
    }
    pcRam_? = pcVar15;
    (*pcRam_?)(&uStack_9,&uStack_12,&CStack_14);
    pPVar17 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar17 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      VStack_8.x = (pPVar17->fields).muzzleDirection.x;
      VStack_8.y = (pPVar17->fields).muzzleDirection.y;
      fStack_18 = (pPVar17->fields).muzzleDirection.z * _UNK_?;
      uStack_19 = CONCAT44(VStack_8.y * _UNK_?,VStack_8.x * _UNK_?);
      uStack_20 = 0;
      uStack_21 = 0;
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar15 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar15)();
        return pVVar7;
      }
      pcRam_? = pcVar15;
      (*pcRam_?)(&uStack_19,&uStack_20);
      fVar22 = ((float)uStack_20 * CStack_14.a + uStack_21._4_4_ * CStack_14.r +
               (float)uStack_21 * CStack_14.g) - uStack_20._4_4_ * CStack_14.b;
      fVar23 = (uStack_20._4_4_ * CStack_14.a + uStack_21._4_4_ * CStack_14.g +
               (float)uStack_20 * CStack_14.b) - (float)uStack_21 * CStack_14.r;
      fVar24 = ((float)uStack_21 * CStack_14.a + uStack_21._4_4_ * CStack_14.b +
               uStack_20._4_4_ * CStack_14.r) - (float)uStack_20 * CStack_14.g;
      fVar25 = ((uStack_21._4_4_ * CStack_14.a - (float)uStack_20 * CStack_14.r) -
               uStack_20._4_4_ * CStack_14.g) - (float)uStack_21 * CStack_14.b;
      fStack_26 = fVar23;
      fStack_27 = fVar25;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar28 = fVar24 + fVar24;
      fVar29 = fVar23 + fVar23;
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_30.x = (pVVar11->rightVector).x;
      VStack_30.y = (pVVar11->rightVector).y;
      fVar31 = (fVar22 + fVar22) * fVar25;
      fVar32 = (fVar22 + fVar22) * fVar22;
      fVar33 = (_UNK_? - (fVar28 * fVar24 + fVar29 * fVar23)) * VStack_30.x;
      fVar34 = (fVar29 * fVar22 - fVar28 * fVar25) * VStack_30.y;
      fVar35 = (fVar28 * fVar25 + fVar29 * fVar22) * VStack_30.x;
      fVar36 = (pVVar11->rightVector).z;
      fVar37 = (_UNK_? - (fVar28 * fVar24 + fVar32)) * VStack_30.y;
      fVar38 = (fVar31 + fVar28 * fVar23) * VStack_30.y;
      fVar32 = _UNK_? - (fVar29 * fVar23 + fVar32);
      fVar39 = (fVar28 * fVar22 - fVar29 * fVar25) * VStack_30.x;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar40 = fVar23 + fVar23;
      fVar41 = fVar24 + fVar24;
      VStack_30.x = (pVVar11->upVector).x;
      VStack_30.y = (pVVar11->upVector).y;
      fVar42 = (pVVar11->upVector).z;
      fVar43 = (fVar22 + fVar22) * fVar25;
      fVar44 = (fVar22 + fVar22) * fVar22;
      fVar45 = (_UNK_? - (fVar41 * fVar24 + fVar40 * fVar23)) * VStack_30.x;
      fVar46 = (fVar40 * fVar22 - fVar41 * fVar25) * VStack_30.y;
      fVar47 = (fVar41 * fVar22 - fVar40 * fVar25) * VStack_30.x;
      fVar48 = (fVar43 + fVar41 * fVar23) * VStack_30.y;
      fStack_49 = (_UNK_? - (fVar41 * fVar24 + fVar44)) * VStack_30.y +
                   (fVar41 * fVar25 + fVar40 * fVar22) * VStack_30.x +
                   (fVar41 * fVar23 - fVar43) * fVar42;
      fVar44 = _UNK_? - (fVar40 * fVar23 + fVar44);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      iVar50 = 0;
      fVar43 = fVar24 + fVar24;
      uStack_51._0_4_ = (pVVar11->zeroVector).x;
      uStack_51._4_4_ = (pVVar11->zeroVector).y;
      fStack_52 = (pVVar11->zeroVector).z;
      fStack_53 = fVar23 + fVar23;
      while( true ) {
        uVar54 = _UNK_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        if ((float)pPVar55[1].fields.hitSoundEffect <= (float)iVar50) break;
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcRam_? = pcVar15;
        fVar57 = (float)(*pcRam_?)(uVar54);
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcRam_? = pcVar15;
        fVar58 = (float)(*pcRam_?)(uVar54);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar59 = fStack_53 * fStack_27;
        VStack_8.x = (pVVar11->forwardVector).x;
        VStack_8.y = (pVVar11->forwardVector).y;
        fVar60 = (pVVar11->forwardVector).z;
        fVar61 = (fVar22 + fVar22) * fVar22;
        fVar62 = (fVar22 + fVar22) * fStack_27;
        fVar63 = (_UNK_? - (fVar43 * fVar24 + fStack_53 * fStack_26)) * VStack_8.x;
        fVar64 = (fStack_53 * fVar22 - fVar43 * fStack_27) * VStack_8.y;
        fVar65 = (fVar43 * fVar22 - fVar59) * VStack_8.x;
        fVar66 = (fVar62 + fVar43 * fStack_26) * VStack_8.y;
        fStack_67 = (_UNK_? - (fVar43 * fVar24 + fVar61)) * VStack_8.y +
                     (fVar43 * fStack_27 + fStack_53 * fVar22) * VStack_8.x +
                     (fVar43 * fStack_26 - fVar62) * fVar60;
        fVar62 = _UNK_? - (fStack_53 * fStack_26 + fVar61);
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        fVar57 = fVar57 * (pPVar55->fields).radius;
        fVar61 = (fVar37 + fVar35 + (fVar28 * fVar23 - fVar31) * fVar36) * fVar57 + fStack_67;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        fVar58 = fVar58 * (pPVar55->fields).radius;
        fVar64 = (fVar45 + fVar46 + (fVar40 * fVar25 + fVar41 * fVar22) * fVar42) * fVar58 +
                 (fVar33 + fVar34 + (fVar29 * fVar25 + fVar28 * fVar22) * fVar36) * fVar57 +
                 fVar63 + fVar64 + (fVar59 + fVar43 * fVar22) * fVar60;
        fVar61 = fStack_49 * fVar58 + fVar61;
        fVar57 = (fVar47 + fVar48 + fVar44 * fVar42) * fVar58 +
                 (fVar39 + fVar38 + fVar32 * fVar36) * fVar57 + fVar65 + fVar66 + fVar62 * fVar60;
        fStack_52 = fStack_52 + fVar57;
        pTVar68 = (this->fields).staticMuzzlePoint;
        uStack_51 = CONCAT44(uStack_51._4_4_ + fVar61,(float)uStack_51 + fVar64);
        if (pTVar68 == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_9 = 0;
        fStack_10 = 0.0;
        pvVar69 = (pTVar68->fields)._._.m_CachedPtr;
        if (pvVar69 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar68,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar69);
        pTVar68 = (this->fields)._.weaponHandle;
        if (pTVar68 == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_12 = 0;
        fStack_13 = 0.0;
        pvVar69 = (pTVar68->fields)._._.m_CachedPtr;
        if (pvVar69 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar68,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar69);
        pTVar68 = (this->fields).staticMuzzlePoint;
        fVar58 = fStack_10 - fStack_13;
        if (pTVar68 == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_70.x = 0.0;
        VStack_70.y = 0.0;
        VStack_70.z = 0.0;
        pvVar69 = (pTVar68->fields)._._.m_CachedPtr;
        if (pvVar69 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar68,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar69,&VStack_70);
        VStack_71.x = VStack_70.x;
        VStack_71.y = VStack_70.y;
        VStack_71.z = VStack_70.z;
        this_00 = Bullet::Bullet_CreateBullet
                            (PoolEnums__Enum_CustomGunBullet,&VStack_71,fVar58,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        uVar16._0_4_ = pPVar55[2].fields.range;
        uVar16._4_4_ = pPVar55[2].fields.radius;
        uVar72._0_4_ = (float)pPVar55[2].fields.fireSoundEffect;
        uVar72._4_4_ = pPVar55[2].fields.fireSoundEffectVolume;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        uVar73._0_4_ = (float)pPVar55[2].fields.hitSoundEffect;
        uVar73._4_4_ = pPVar55[2].fields.hitSoundEffectVolume;
        uVar74 = *(undefined8 *)&pPVar55[2].fields.field_0x3c;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        fVar58 = pPVar55[2].fields.fireAnimationTime;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar55 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar55 == (PickupItemEditable_EditableItemConfiguration *)0x0)
        goto code_?;
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if (((pPVar55->klass->_1).naturalAligment < bVar56) ||
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          FUN_?(pPVar55);
          pcVar15 = (code *)swi(3);
          pVVar7 = (Vector3 *)(*pcVar15)();
          return pVVar7;
        }
        if (this_00 == (Bullet *)0x0) goto code_?;
        CStack_14._0_8_ = uVar73;
        CStack_14._8_8_ = uVar74;
        RStack_75.m_Origin._0_8_ = uVar16;
        RStack_75._8_8_ = uVar72;
        Bullet::Bullet_SetBulletAndTrailSettings
                  (this_00,(Color *)&RStack_75,&CStack_14,fVar58,pPVar55[2].fields.attackCooldown,
                   (MethodInfo *)0x0);
        pBVar76 = (this_00->fields).onHit;
        b = (Delegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
        bVar77 = iRam_? != 0;
        pMVar1 = (this->klass->vtable).OnHit.method;
        (b->fields).method_ptr = pMVar1->virtualMethodPointer;
        (b->fields).method = pMVar1;
        (b->fields).m_target = (Object *)this;
        if (bVar77) {
          uVar78 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
          uVar79 = (ulonglong)((uVar78 & 0x1fffff) >> 6);
          do {
            uVar80 = *(ulonglong *)(uVar79 * 8 + 0xADDR);
            puVar81 = (ulonglong *)(uVar79 * 8 + 0xADDR);
            LOCK();
            bVar77 = uVar80 == *puVar81;
            if (bVar77) {
              *puVar81 = uVar80 | 1L << (uVar78 & 0x3f);
            }
            UNLOCK();
          } while (!bVar77);
        }
        uVar82 = pMVar1->parameters_count;
        (b->fields).method_code = b;
        if ((pMVar1->flags & 0x10) == 0) {
          (b->fields).method_code = (b->fields).m_target;
          pDVar83 = (Delegate *)0x18;
          pcVar15 = (b->fields).method_ptr;
          pDVar84 = b;
        }
        else {
          pDVar83 = b;
          if (uVar82 == 2) {
            pcVar15 = FUN_?;
            pDVar84 = (Delegate *)0x18;
          }
          else {
            (b->fields).method_code = (b->fields).m_target;
            pcVar15 = (b->fields).method_ptr;
            pDVar84 = (Delegate *)0x18;
          }
        }
        *(code **)((longlong)&pDVar84->klass + (longlong)&pDVar83->klass) = pcVar15;
        pMVar1 = (MethodInfo *)0x0;
        (b->fields).extra_arg = FUN_?;
        pBVar76 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar76,b,(MethodInfo *)0x0);
        if (pBVar76 == (Bullet_OnHitDelegate *)0x0) {
          (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar85 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar76->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar85 = pBVar76;
          }
          if (pBVar85 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            pVVar7 = (Vector3 *)(*pcVar15)();
            return pVVar7;
          }
          (this_00->fields).onHit = pBVar85;
          pBVar85 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar76->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar85 = pBVar76;
          }
          if (pBVar85 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            pVVar7 = (Vector3 *)(*pcVar15)();
            return pVVar7;
          }
        }
        if (iRam_? != 0) {
          uVar78 = (uint)((ulonglong)&(this_00->fields).onHit >> 0xc);
          uVar79 = (ulonglong)((uVar78 & 0x1fffff) >> 6);
          pMVar1 = (MethodInfo *)(ulonglong)(uVar78 & 0x3f);
          do {
            uVar80 = *(ulonglong *)(uVar79 * 8 + 0xADDR);
            puVar81 = (ulonglong *)(uVar79 * 8 + 0xADDR);
            LOCK();
            bVar77 = uVar80 == *puVar81;
            if (bVar77) {
              *puVar81 = uVar80 | 1L << (longlong)pMVar1;
            }
            UNLOCK();
          } while (!bVar77);
        }
        if (isLocal != 0) {
          pBVar76 = (this_00->fields).onHitLocal;
          this_01 = (BulletThrowingStar_OnHitDelegate *)
                    FUN_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun__OnLocalHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          pMVar1 = (MethodInfo *)0x0;
          pBVar76 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar76,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pBVar76 == (Bullet_OnHitDelegate *)0x0) {
            (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar85 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar76->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar85 = pBVar76;
            }
            if (pBVar85 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              pVVar7 = (Vector3 *)(*pcVar15)();
              return pVVar7;
            }
            (this_00->fields).onHitLocal = pBVar85;
            pBVar85 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar76->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar85 = pBVar76;
            }
            if (pBVar85 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              pVVar7 = (Vector3 *)(*pcVar15)();
              return pVVar7;
            }
          }
          func_?(&(this_00->fields).onHitLocal);
        }
        pMVar2 = (this->fields)._._._.owner;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        VStack_5.x = (pMVar2->fields).lookOrigin.x;
        VStack_5.y = (pMVar2->fields).lookOrigin.y;
        VStack_5.z = (pMVar2->fields).lookOrigin.z;
        VStack_30.y = fVar61;
        VStack_30.x = fVar64;
        VStack_30.z = fVar57;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_86,&VStack_30,pMVar1);
        uVar87 = pVVar7->x;
        uVar88 = pVVar7->y;
        fStack_4 = pVVar7->z;
        fStack_6 = (float)uVar87;
        fStack_3 = (float)uVar88;
        pPVar17 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar17 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        if ((pPVar17->fields).thirdPersonCamera != 0) {
          pTVar68 = (this->fields)._.weaponHandle;
          if (pTVar68 == (Transform *)0x0) goto code_?;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (aVStack_89,pTVar68,(MethodInfo *)0x0);
          pMVar2 = (this->fields)._._._.owner;
          if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
          CStack_14.r = (pMVar2->fields).lookOrigin.x;
          CStack_14.g = (pMVar2->fields).lookOrigin.y;
          uVar90 = pVVar7->x;
          uVar91 = pVVar7->y;
          fVar58 = ((float)uVar91 - CStack_14.g) * fVar61 + ((float)uVar90 - CStack_14.r) * fVar64 +
                   (pVVar7->z - (pMVar2->fields).lookOrigin.z) * fVar57;
          VStack_5.z = fVar57 * fVar58 + VStack_5.z;
          VStack_5.y = fVar61 * fVar58 + VStack_5.y;
          VStack_5.x = fVar64 * fVar58 + VStack_5.x;
        }
        pMVar2 = (this->fields)._._._.owner;
        pPVar17 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar17 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
           (pMVar2 == (MVPickupOwner *)0x0)) goto code_?;
        fVar57 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                           (pMVar2,(pPVar17->fields).projectileSpeed,(MethodInfo *)0x0);
        pPVar17 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar17 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        pMVar2 = (this->fields)._._._.owner;
        fVar58 = (pPVar17->fields)._.range;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)
                      (*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)();
        pPVar17 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar17 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        RStack_75.m_Direction.z = fStack_4;
        RStack_75.m_Direction.y = fStack_3;
        RStack_75.m_Direction.x = fStack_6;
        RStack_75.m_Origin.z = VStack_5.z;
        RStack_75.m_Origin.x = VStack_5.x;
        RStack_75.m_Origin.y = VStack_5.y;
        Bullet::Bullet_Fire(this_00,fVar57,fVar58,&RStack_75,ignoreWoIDs,
                            (pPVar17->fields).thirdPersonCamera,(MethodInfo *)0x0);
        iVar50 = iVar50 + 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar55 = (this->fields)._._Configuration_k__BackingField;
      if (pPVar55 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
        bVar56 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1
                ).naturalAligment;
        if ((bVar56 <= (pPVar55->klass->_1).naturalAligment) &&
           ((pPVar55->klass->_1).typeHierarchy[(ulonglong)bVar56 - 1] ==
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
          fVar24 = (float)pPVar55[1].fields.hitSoundEffect;
          __return_storage_ptr__->x = (float)uStack_51 / fVar24;
          __return_storage_ptr__->y = uStack_51._4_4_ / fVar24;
          __return_storage_ptr__->z = fStack_52 / fVar24;
          return __return_storage_ptr__;
        }
        FUN_?(pPVar55);
        pcVar15 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar15)();
        return pVVar7;
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar15)();
  return pVVar7;
}


/* Void HandleFireEffects(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_HandleFireEffects
               (PickupItemCustomGun *this,bool isLocal,MethodInfo *method)

{
  this_00 = (this->fields).fireEffectTimeout;
  if (this_00 != (TimeoutClock *)0x0) {
    bVar1 = TimeoutClock::TimeoutClock_IsInTimeout(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    PickupItemEditable::PickupItemEditable_PlayAnimation
              ((PickupItemEditable *)this,(MethodInfo *)0x0);
    PickupItemCustomGun_PlayFireSoundEffect(this,isLocal,(MethodInfo *)0x0);
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar2->fields).smokeOnFire != 0) {
        pPVar3 = (this->fields).smokeParticles;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar3,1,(MethodInfo *)0x0);
      }
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((pPVar2->fields).muzzleFlareOnFire != 0) {
          pPVar3 = (this->fields).flareParticles;
          if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                    (pPVar3,1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleFiringStateAndAmmoOnFire() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_HandleFiringStateAndAmmoOnFire
               (PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  iVar2 = (pPVar1->fields).fireMode;
  if (iVar2 == 0) {
    uVar3._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
    uVar3._4_4_ = (ACTkByte4)(this->fields).currentAmmo.hiddenValue;
    pBVar4 = *(Byte__Array **)&(this->fields).currentAmmo.fakeValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar3;
    aOStack_5[0].hiddenValueOld = pBVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
    AVar7 = (ACTkByte4)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt_1(iVar6 + -1,aOStack_5[0].currentCryptoKey,(MethodInfo *)0x0);
    aOStack_5[0].hiddenValue = AVar7;
    bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar2 = (int)aOStack_5[0].hiddenValueOld;
    if (bVar8 != 0) {
      iVar2 = iVar6 + -1;
    }
    aOStack_5[0].hiddenValueOld =
         (Byte__Array *)CONCAT44(aOStack_5[0].hiddenValueOld._4_4_,iVar2);
    (this->fields).currentAmmo.currentCryptoKey = aOStack_5[0].currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = (int32_t)aOStack_5[0].hiddenValue;
    *(Byte__Array **)&(this->fields).currentAmmo.fakeValue = aOStack_5[0].hiddenValueOld;
    (this->fields)._._.isFiring = 0;
  }
  else if (iVar2 == 1) {
    uVar9._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
    uVar9._4_4_ = (ACTkByte4)(this->fields).currentAmmo.hiddenValue;
    pBVar4 = *(Byte__Array **)&(this->fields).currentAmmo.fakeValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar9;
    aOStack_5[0].hiddenValueOld = pBVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
    AVar7 = (ACTkByte4)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt_1(iVar6 + -1,aOStack_5[0].currentCryptoKey,(MethodInfo *)0x0);
    aOStack_5[0].hiddenValue = AVar7;
    bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar2 = (int)aOStack_5[0].hiddenValueOld;
    if (bVar8 != 0) {
      iVar2 = iVar6 + -1;
    }
    aOStack_5[0].hiddenValueOld =
         (Byte__Array *)CONCAT44(aOStack_5[0].hiddenValueOld._4_4_,iVar2);
    (this->fields).currentAmmo.currentCryptoKey = aOStack_5[0].currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = (int32_t)aOStack_5[0].hiddenValue;
    *(Byte__Array **)&(this->fields).currentAmmo.fakeValue = aOStack_5[0].hiddenValueOld;
  }
  else if (iVar2 == 2) {
    uVar10._0_4_ = (this->fields).firedInBurst.currentCryptoKey;
    uVar10._4_4_ = (ACTkByte4)(this->fields).firedInBurst.hiddenValue;
    pBVar4 = *(Byte__Array **)&(this->fields).firedInBurst.fakeValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar10;
    aOStack_5[0].hiddenValueOld = pBVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      uVar11._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
      uVar11._4_4_ = (ACTkByte4)(this->fields).currentAmmo.hiddenValue;
      pBVar4 = *(Byte__Array **)&(this->fields).currentAmmo.fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      aOStack_5[0]._0_8_ = uVar11;
      aOStack_5[0].hiddenValueOld = pBVar4;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_5[0].currentCryptoKey = 0;
      aOStack_5[0].hiddenValue.b1 = 0;
      aOStack_5[0].hiddenValue.b2 = 0;
      aOStack_5[0].hiddenValue.b3 = 0;
      aOStack_5[0].hiddenValue.b4 = 0;
      aOStack_5[0].hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      AVar7 = (ACTkByte4)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_Encrypt(iVar6 + -1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      aOStack_5[0].hiddenValueOld._0_5_ = CONCAT14(1,(int)aOStack_5[0].hiddenValueOld);
      aOStack_5[0].hiddenValue = AVar7;
      aOStack_5[0].currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
      bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      iVar2 = 0;
      if (bVar8 != 0) {
        iVar2 = iVar6 + -1;
      }
      aOStack_5[0].hiddenValueOld =
           (Byte__Array *)CONCAT44(aOStack_5[0].hiddenValueOld._4_4_,iVar2);
      iVar6 = aOStack_5[0].currentCryptoKey;
      AVar7 = aOStack_5[0].hiddenValue;
      uVar12 = aOStack_5[0].hiddenValueOld._4_4_;
    }
    else {
      iVar6 = (this->fields).currentAmmo.currentCryptoKey;
      AVar7 = (ACTkByte4)(this->fields).currentAmmo.hiddenValue;
      iVar2 = (this->fields).currentAmmo.fakeValue;
      uVar12 = *(undefined4 *)&(this->fields).currentAmmo.inited;
    }
    (this->fields).currentAmmo.currentCryptoKey = iVar6;
    (this->fields).currentAmmo.hiddenValue = (int32_t)AVar7;
    (this->fields).currentAmmo.fakeValue = iVar2;
    *(undefined4 *)&(this->fields).currentAmmo.inited = uVar12;
    uVar13._0_4_ = (this->fields).firedInBurst.currentCryptoKey;
    uVar13._4_4_ = (ACTkByte4)(this->fields).firedInBurst.hiddenValue;
    pBVar4 = *(Byte__Array **)&(this->fields).firedInBurst.fakeValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar13;
    aOStack_5[0].hiddenValueOld = pBVar4;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
    AVar7 = (ACTkByte4)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt_1(iVar6 + 1,aOStack_5[0].currentCryptoKey,(MethodInfo *)0x0);
    aOStack_5[0].hiddenValue = AVar7;
    bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar2 = (int)aOStack_5[0].hiddenValueOld;
    if (bVar8 != 0) {
      iVar2 = iVar6 + 1;
    }
    aOStack_5[0].hiddenValueOld =
         (Byte__Array *)CONCAT44(aOStack_5[0].hiddenValueOld._4_4_,iVar2);
    (this->fields).firedInBurst.currentCryptoKey = aOStack_5[0].currentCryptoKey;
    (this->fields).firedInBurst.hiddenValue = (int32_t)aOStack_5[0].hiddenValue;
    *(Byte__Array **)&(this->fields).firedInBurst.fakeValue = aOStack_5[0].hiddenValueOld;
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    aOStack_5[0].currentCryptoKey = (this->fields).firedInBurst.currentCryptoKey;
    aOStack_5[0].hiddenValue = (ACTkByte4)(this->fields).firedInBurst.hiddenValue;
    aOStack_5[0].hiddenValueOld = *(Byte__Array **)&(this->fields).firedInBurst.fakeValue;
    fVar15 = (pPVar1->fields).shotsPerBurst;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_5,(MethodInfo *)0x0);
    iVar2 = (int)fVar15 - iVar6;
    (this->fields)._._.isFiring = 0 < iVar2;
    if (iVar2 < 1) {
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar15 = (pPVar1->fields)._.attackCooldown;
    }
    else {
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar15 = (pPVar1->fields).burstCooldownBetweenShots;
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_5[0].fakeValue = 0.0;
    aOStack_5[0].inited = 0;
    aOStack_5[0]._21_3_ = 0;
    aOStack_5[0].currentCryptoKey = 0;
    aOStack_5[0].hiddenValue.b1 = 0;
    aOStack_5[0].hiddenValue.b2 = 0;
    aOStack_5[0].hiddenValue.b3 = 0;
    aOStack_5[0].hiddenValue.b4 = 0;
    aOStack_5[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    AVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalEncrypt(fVar15,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_5,AVar7,(MethodInfo *)0x0);
    bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar8 != 0) {
      aOStack_5[0].fakeValue = fVar15;
    }
    bVar16 = iRam_? != 0;
    (this->fields)._._.fireInterval.currentCryptoKey = aOStack_5[0].currentCryptoKey;
    (this->fields)._._.fireInterval.hiddenValue = aOStack_5[0].hiddenValue;
    *(int *)&(this->fields)._._.fireInterval.hiddenValueOld = (int)aOStack_5[0].hiddenValueOld;
    *(undefined4 *)((longlong)&(this->fields)._._.fireInterval.hiddenValueOld + 4) =
         aOStack_5[0].hiddenValueOld._4_4_;
    pPVar17 = &this->fields;
    (pPVar17->_)._.fireInterval.fakeValue = aOStack_5[0].fakeValue;
    (pPVar17->_)._.fireInterval.inited = aOStack_5[0].inited;
    *(undefined3 *)&(pPVar17->_)._.fireInterval.field_0x15 = aOStack_5[0]._21_3_;
    if (bVar16) {
      uVar18 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
      uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
      do {
        uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
        puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
        LOCK();
        bVar16 = uVar20 == *puVar21;
        if (bVar16) {
          *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    if ((this->fields)._._.isFiring == 0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_5[0].currentCryptoKey = 0;
      aOStack_5[0].hiddenValue.b1 = 0;
      aOStack_5[0].hiddenValue.b2 = 0;
      aOStack_5[0].hiddenValue.b3 = 0;
      aOStack_5[0].hiddenValue.b4 = 0;
      aOStack_5[0].hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      AVar7 = (ACTkByte4)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      aOStack_5[0].hiddenValueOld =
           (Byte__Array *)
           CONCAT35((int3)((ulonglong)aOStack_5[0].hiddenValueOld >> 0x28),0x100000000);
      aOStack_5[0].hiddenValue = AVar7;
      aOStack_5[0].currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
      ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      iVar6 = aOStack_5[0].currentCryptoKey;
      AVar7 = aOStack_5[0].hiddenValue;
      iVar22 = (int)aOStack_5[0].hiddenValueOld;
      uVar12 = aOStack_5[0].hiddenValueOld._4_4_;
    }
    else {
      iVar6 = (this->fields).firedInBurst.currentCryptoKey;
      AVar7 = (ACTkByte4)(this->fields).firedInBurst.hiddenValue;
      iVar22 = (this->fields).firedInBurst.fakeValue;
      uVar12 = *(undefined4 *)&(this->fields).firedInBurst.inited;
    }
    (this->fields).firedInBurst.currentCryptoKey = iVar6;
    (this->fields).firedInBurst.hiddenValue = (int32_t)AVar7;
    (this->fields).firedInBurst.fakeValue = iVar22;
    *(undefined4 *)&(this->fields).firedInBurst.inited = uVar12;
    if ((this->fields)._._.isFiring == 0) {
      pCVar23 = (this->fields)._.fireAudioPlayer;
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (((pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
          (pCVar23 == (CustomItemAudioPlayer *)0x0)) ||
         (pCVar24 = (pCVar23->fields).audioClips,
         pCVar24 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0))
      goto code_?;
      uVar18 = (pPVar1->fields)._.fireSoundEffect;
      if ((uint)pCVar24->max_length <= uVar18) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (pCVar24->vector[(int)uVar18].isLooped != 0) {
        pCVar23 = (this->fields)._.fireAudioPlayer;
        if (pCVar23 == (CustomItemAudioPlayer *)0x0) goto code_?;
        CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(pCVar23,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void HandleRecoil(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_HandleRecoil
               (PickupItemCustomGun *this,Vector3 *direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.owner;
  if (this_00 == (MVPickupOwner *)0x0) goto code_?;
  this_01 = (MVRigidBody *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this_00,
                       MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
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
  if (this_01 != (MVRigidBody *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_01->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon < (pPVar1->fields)._.recoilStrength)
      {
        aVStack_3[0].x = direction->x;
        aVStack_3[0].y = direction->y;
        fVar4 = (float)((uint)aVStack_3[0].x ^ _UNK_?);
        fVar5 = (float)((uint)aVStack_3[0].y ^ _UNK_?);
        fVar6 = (float)((uint)direction->z ^ _UNK_?);
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        fVar7 = (pPVar1->fields)._.recoilStrength;
        aVStack_3[0].x = fVar7 * fVar4;
        aVStack_3[0].z = fVar7 * fVar6;
        aVStack_3[0].y = fVar7 * fVar5;
        MVRigidBody::MVRigidBody_AddImpulse_1(this_01,aVStack_3,0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void InitializeAudioPlayers() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_InitializeAudioPlayers(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (CustomItemAudioPlayer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                      ((Object *)pCVar1,pTVar2,
                       CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                      );
  bVar3 = iRam_? != 0;
  (this->fields)._.fireAudioPlayer = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.fireAudioPlayer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields)._.hitAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pCVar1 = (CustomItemAudioPlayer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                      ((Object *)pCVar1,pTVar2,
                       CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                      );
  bVar3 = iRam_? != 0;
  (this->fields)._.hitAudioPlayer = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.hitAudioPlayer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields).chargeAudioPlayer;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pCVar1 = (CustomItemAudioPlayer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                      ((Object *)pCVar1,pTVar2,
                       CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                      );
  bVar3 = iRam_? != 0;
  (this->fields).chargeAudioPlayer = pCVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).chargeAudioPlayer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pCVar1 = (this->fields)._.fireAudioPlayer;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              (pCVar1,TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                       static_fields->fireSoundEffects,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chargeAudioPlayer;
    if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
      CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
                (pCVar1,TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                         static_fields->chargeSoundEffects,(MethodInfo *)0x0);
      pCVar1 = (this->fields)._.hitAudioPlayer;
      if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
        pSVar8 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                 static_fields->hitSoundEffects;
        if (cRam_? == '\0') {
          FUN_?(&
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__GameObject);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_AuidoClipStream);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_9 = (ValueAnimation_1_StyleValues_ *)0x0;
        uStack_10 = 0;
        pAVar11 = (AudioSource *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)pCVar1,
                            UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                           );
        bVar3 = iRam_? != 0;
        (pCVar1->fields).audioSource = pAVar11;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pCVar1->fields).audioSource >> 0xc);
          uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar12 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar12 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pAVar11 = (pCVar1->fields).audioSource;
        if (pAVar11 != (AudioSource *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (pAVar11->fields)._._._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcRam_? = pcVar14;
          fVar16 = (float)(*pcRam_?)(pvVar13);
          bVar3 = iRam_? != 0;
          (pCVar1->fields).baseVolume = fVar16;
          (pCVar1->fields).clipNames = pSVar8;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(pCVar1->fields).clipNames >> 0xc);
            uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar12 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar12 | 1L << (ulonglong)(uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pCVar17 = (pCVar1->fields).audioClips;
          uVar4 = 0;
          if (pCVar17 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
            lVar5 = 0;
            ppSVar18 = pSVar8->vector;
            do {
              if ((int)pCVar17->max_length <= (int)uVar4) {
                return;
              }
              pCVar17 = (pCVar1->fields).audioClips;
              if (pCVar17 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
              if ((uint)pCVar17->max_length <= uVar4) goto code_?;
              puVar19 = (undefined8 *)((longlong)&pCVar17->vector[0].clipURL + lVar5);
              value = (Func_2_Single_Single_ *)*puVar19;
              uStack_9 = (ValueAnimation_1_StyleValues_ *)puVar19[1];
              uStack_10 = *(undefined8 *)((longlong)&pCVar17->vector[0].pitchVariation + lVar5);
              pSVar20 = *(String **)((longlong)&pCVar17->vector[0].clipURL + lVar5);
              if ((pSVar20 != ::StringLiteral__) &&
                 ((((pSVar20 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
                   ((pSVar20->fields)._stringLength != (::StringLiteral__->fields)._stringLength))
                  || (bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(pSVar20->fields)._firstChar,
                                         (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                         (longlong)(pSVar20->fields)._stringLength * 2,
                                         (MethodInfo *)0x0), bVar21 == 0)))) {
                if (pSVar8 == (String__Array *)0x0) break;
                if ((uint)pSVar8->max_length <= uVar4) {
code_?:
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pSVar20 = mscorlib.dll::System::String::String_Concat_4
                                    (*ppSVar18,StringLiteral_AuidoClipStream,(MethodInfo *)0x0);
                this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                          (this_00,pSVar20,(MethodInfo *)0x0);
                if (this_00 == (GameObject *)0x0) break;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_00,(MethodInfo *)0x0);
                value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0);
                if (pTVar2 == (Transform *)0x0) break;
                method_00 = (MethodInfo *)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar2,value_00,(MethodInfo *)0x0);
                uStack_9 = (ValueAnimation_1_StyleValues_ *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (this_00,
                                       StreamedAudioClipManual_MethodInfo__UnityEngine__GameObject__AddComponent<StreamedAudioClipManual>__
                                      );
                if (iRam_? != 0) {
                  uVar22 = (uint)((ulonglong)&uStack_9 >> 0xc);
                  uVar6 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                  method_00 = (MethodInfo *)(ulonglong)(uVar22 & 0x3f);
                  do {
                    uVar12 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar3 = uVar12 == *puVar7;
                    if (bVar3) {
                      *puVar7 = uVar12 | 1L << (longlong)method_00;
                    }
                    UNLOCK();
                  } while (!bVar3);
                }
                if (uStack_9 == (ValueAnimation_1_StyleValues_ *)0x0) break;
                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
                ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                          (uStack_9,value,method_00);
                pCVar17 = (pCVar1->fields).audioClips;
                if (pCVar17 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) break;
                if ((uint)pCVar17->max_length <= uVar4) goto code_?;
                uStack_23 = SUB84(value,0);
                uStack_24 = (undefined4)((ulonglong)value >> 0x20);
                puVar25 = (undefined4 *)((longlong)&pCVar17->vector[0].clipURL + lVar5);
                *puVar25 = uStack_23;
                puVar25[1] = uStack_24;
                puVar25[2] = (undefined4)uStack_9;
                puVar25[3] = uStack_9._4_4_;
                *(undefined8 *)((longlong)&pCVar17->vector[0].pitchVariation + lVar5) = uStack_10;
                func_?((longlong)&pCVar17->vector[0].clipURL + lVar5);
              }
              pCVar17 = (pCVar1->fields).audioClips;
              uVar4 = uVar4 + 1;
              ppSVar18 = ppSVar18 + 1;
              lVar5 = lVar5 + 0x18;
            } while (pCVar17 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0);
          }
        }
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_InterruptFire(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItemEditable::PickupItemEditable_InterruptFire((PickupItemEditable *)this,(MethodInfo *)0x0)
  ;
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  pMVar2 = (pMVar1->fields)._.worldObjectParent;
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    pMVar3 = pMVar2->klass;
    bVar4 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((((bVar4 <= (pMVar3->_1).naturalAligment) &&
         ((MVAvatar__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] == TypeInfo__MVAvatar)
         ) && (bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment,
              bVar4 <= (pMVar3->_1).naturalAligment)) &&
       ((MVAvatarLocal__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
        TypeInfo__MVAvatarLocal)) {
      pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((float)(int)(pPVar5->fields).movementSpeedWhileHeld != _UNK_?) {
          this_00 = (AvatarMotor *)pMVar2[1].fields.interactionDataHandlerBase;
          if (this_00 == (AvatarMotor *)0x0) goto code_?;
          (this_00->fields).walkSpeedBase = 8.0;
          AvatarMotor::AvatarMotor_HandleMovementBoost(this_00,(MethodInfo *)0x0);
        }
        pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          if ((pPVar5->fields).chargeEnabled == 0) {
            return;
          }
          if ((this->fields).chargeRoutine != (IEnumerator *)0x0) {
            Coroutines::Coroutines_Stop((this->fields).chargeRoutine,(MethodInfo *)0x0);
            (this->fields).chargeRoutine = (IEnumerator *)0x0;
            func_?(&(this->fields).chargeRoutine);
          }
          pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            if ((pPVar5->fields).chargeZoomEnabled != 0) {
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
              this_01 = (pMVar6->fields).mainCamera;
              uVar7._0_4_ = (this->fields).initialFOV.currentCryptoKey;
              uVar7._4_4_ = (this->fields).initialFOV.hiddenValue;
              pBVar8 = (this->fields).initialFOV.hiddenValueOld;
              uVar9._0_4_ = (this->fields).initialFOV.fakeValue;
              uVar9._4_1_ = (this->fields).initialFOV.inited;
              uVar9._5_3_ = *(undefined3 *)&(this->fields).initialFOV.field_0x15;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              aOStack_10[0]._0_8_ = uVar7;
              aOStack_10[0].hiddenValueOld = pBVar8;
              aOStack_10[0]._16_8_ = uVar9;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_InternalDecrypt(aOStack_10,(MethodInfo *)0x0);
              if (this_01 == (Camera *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                        (this_01,value_00,(MethodInfo *)0x0);
              aOStack_10[0].currentCryptoKey =
                   (this->fields).initialMouseSensitivity.currentCryptoKey;
              aOStack_10[0].hiddenValue = (this->fields).initialMouseSensitivity.hiddenValue;
              aOStack_10[0].hiddenValueOld = (this->fields).initialMouseSensitivity.hiddenValueOld;
              aOStack_10[0].fakeValue = (this->fields).initialMouseSensitivity.fakeValue;
              aOStack_10[0].inited = (this->fields).initialMouseSensitivity.inited;
              aOStack_10[0]._21_3_ =
                   *(undefined3 *)&(this->fields).initialMouseSensitivity.field_0x15;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_InternalDecrypt(aOStack_10,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                FUN_?();
              }
              FUN_?();
            }
            pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              if ((pPVar5->fields).chargeParticlesEnabled != 0) {
                this_02 = (this->fields).chargeParticles;
                if (this_02 == (ParticleSystem *)0x0) goto code_?;
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_Stop_1(this_02,1,(MethodInfo *)0x0);
              }
              this_03 = (this->fields).chargeAudioPlayer;
              if (this_03 != (CustomItemAudioPlayer *)0x0) {
                CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(this_03,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                aOStack_10[0].fakeValue = 0.0;
                aOStack_10[0].inited = 0;
                aOStack_10[0]._21_3_ = 0;
                aOStack_10[0].currentCryptoKey = 0;
                aOStack_10[0].hiddenValue.b1 = 0;
                aOStack_10[0].hiddenValue.b2 = 0;
                aOStack_10[0].hiddenValue.b3 = 0;
                aOStack_10[0].hiddenValue.b4 = 0;
                aOStack_10[0].hiddenValueOld = (Byte__Array *)0x0;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredFloat::ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat__ctor(aOStack_10,value,(MethodInfo *)0x0);
                bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                        ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                  ((MethodInfo *)0x0);
                if (bVar11 != 0) {
                  aOStack_10[0]._16_8_ = aOStack_10[0]._16_8_ & 0xffffffff00000000;
                }
                (this->fields).currentCharge.currentCryptoKey = aOStack_10[0].currentCryptoKey;
                (this->fields).currentCharge.hiddenValue = aOStack_10[0].hiddenValue;
                (this->fields).currentCharge.hiddenValueOld = aOStack_10[0].hiddenValueOld;
                (this->fields).currentCharge.fakeValue = aOStack_10[0].fakeValue;
                (this->fields).currentCharge.inited = aOStack_10[0].inited;
                *(undefined3 *)&(this->fields).currentCharge.field_0x15 = aOStack_10[0]._21_3_;
                func_?(&(this->fields).currentCharge.hiddenValueOld);
                return;
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_IsSameItemData
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__ERROR_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileTrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectilesPerShot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SmokeOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeedWhileHeld);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomAmmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ThirdPersonCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksOnHit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BurstCooldownBetweenShots);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShotsPerBurst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeEnabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    pSVar2 = (pPVar1->fields)._.name;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = (String *)
              Extensions::Extensions_GetValueOrDefault_3
                        (itemData,StringLiteral_Name,(Object *)StringLiteral__ERROR_,
                         System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                        );
    if ((pSVar2 != pSVar3) &&
       ((((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
         ((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength)) ||
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar2->fields)._firstChar,
                            (uint8_t *)&(pSVar3->fields)._firstChar,
                            (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 == 0)))) {
      return 0;
    }
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fVar5 = (pPVar1->fields)._.damage;
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = _UNK_?;
      fVar7 = Extensions::Extensions_GetValueOrDefault_4
                         (itemData,StringLiteral_Damage,_UNK_?,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      if (fVar5 != fVar7) {
        return 0;
      }
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        fVar5 = (pPVar1->fields)._.maxAmmo;
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar7 = Extensions::Extensions_GetValueOrDefault_4
                           (itemData,StringLiteral_MaxAmmo,fVar6,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
        if (fVar5 != fVar7) {
          return 0;
        }
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          fVar5 = (pPVar1->fields)._.impulseStrength;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar7 = Extensions::Extensions_GetValueOrDefault_4
                             (itemData,StringLiteral_ImpulseStrength,fVar6,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
          if (fVar5 != fVar7) {
            return 0;
          }
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            fVar5 = (pPVar1->fields)._.recoilStrength;
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            fVar7 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_RecoilStrength,fVar6,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (fVar5 != fVar7) {
              return 0;
            }
            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              fVar5 = (pPVar1->fields)._.fireAnimationTime;
              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                FUN_?();
              }
              fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_AttackAnimationTime,fVar6,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              if (fVar5 != fVar7) {
                return 0;
              }
              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                fVar5 = (pPVar1->fields)._.attackCooldown;
                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_AttackCooldown,fVar6,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (fVar5 != fVar7) {
                  return 0;
                }
                pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  fVar5 = (pPVar1->fields)._.radius;
                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_Radius,fVar6,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (fVar5 != fVar7) {
                    return 0;
                  }
                  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                    IVar8 = (pPVar1->fields)._.fireSoundEffect;
                    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    IVar9 = Extensions::Extensions_GetValueOrDefault_2
                                       (itemData,StringLiteral_FireSoundEffect,0xffffffff,
                                        int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                       );
                    if (IVar8 != IVar9) {
                      return 0;
                    }
                    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                      fVar5 = (pPVar1->fields)._.fireSoundEffectVolume;
                      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                         (itemData,StringLiteral_FireSoundEffectVolume,fVar6,
                                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                         );
                      if (fVar5 != fVar7) {
                        return 0;
                      }
                      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                        IVar8 = (pPVar1->fields)._.hitSoundEffect;
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        IVar9 = Extensions::Extensions_GetValueOrDefault_2
                                           (itemData,StringLiteral_HitSoundEffect,0xffffffff,
                                            int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                           );
                        if (IVar8 != IVar9) {
                          return 0;
                        }
                        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                          fVar5 = (pPVar1->fields)._.hitSoundEffectVolume;
                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                             (itemData,StringLiteral_HitSoundEffectVolume,fVar6,
                                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                             );
                          if (fVar5 != fVar7) {
                            return 0;
                          }
                          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                            fVar5 = (pPVar1->fields).movementSpeedWhileHeld;
                            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            fVar7 = Extensions::Extensions_GetValueOrDefault_4
                                               (itemData,StringLiteral_MovementSpeedWhileHeld,fVar6
                                                ,
                                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                               );
                            if (fVar5 != fVar7) {
                              return 0;
                            }
                            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                              IVar8 = (pPVar1->fields).fireMode;
                              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                FUN_?();
                              }
                              IVar9 = Extensions::Extensions_GetValueOrDefault_2
                                                 (itemData,StringLiteral_FireMode,0xffffffff,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                 );
                              if (IVar8 != IVar9) {
                                return 0;
                              }
                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                  (this,(MethodInfo *)0x0);
                              if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                CStack_10.r = (pPVar1->fields).muzzlePosition.x;
                                CStack_10.g = (pPVar1->fields).muzzlePosition.y;
                                fVar5 = (pPVar1->fields).muzzlePosition.z;
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                                uVar12._0_4_ = (pVVar11->negativeInfinityVector).x;
                                uVar12._4_4_ = (pVVar11->negativeInfinityVector).y;
                                fVar7 = (pVVar11->negativeInfinityVector).z;
                                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                VStack_13._0_8_ = uVar12;
                                VStack_13.z = fVar7;
                                pVVar14 = Extensions::Extensions_GetVector3OrDefault
                                                    ((Vector3 *)aCStack_15,itemData,
                                                     StringLiteral_MuzzlePosition,&VStack_13,
                                                     (MethodInfo *)0x0);
                                fVar7 = _UNK_?;
                                uVar16._0_4_ = pVVar14->x;
                                uVar16._4_4_ = pVVar14->y;
                                fVar5 = fVar5 - pVVar14->z;
                                if (_UNK_? <=
                                    (CStack_10.g - uVar16._4_4_) * (CStack_10.g - uVar16._4_4_) +
                                    (CStack_10.r - (float)uVar16) * (CStack_10.r - (float)uVar16) +
                                    fVar5 * fVar5) {
                                  return 0;
                                }
                                CStack_10._0_8_ = uVar16;
                                pPVar1 = PickupItemCustomGun_get_Configuration
                                                    (this,(MethodInfo *)0x0);
                                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                  VStack_13.x = (pPVar1->fields).muzzleDirection.x;
                                  VStack_13.y = (pPVar1->fields).muzzleDirection.y;
                                  fVar5 = (pPVar1->fields).muzzleDirection.z;
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  uVar17._0_4_ = (pVVar11->negativeInfinityVector).x;
                                  uVar17._4_4_ = (pVVar11->negativeInfinityVector).y;
                                  fVar18 = (pVVar11->negativeInfinityVector).z;
                                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                    FUN_?();
                                  }
                                  CStack_10._0_8_ = uVar17;
                                  CStack_10.b = fVar18;
                                  pVVar14 = Extensions::Extensions_GetVector3OrDefault
                                                      ((Vector3 *)aCStack_15,itemData,
                                                       StringLiteral_MuzzleDirection,
                                                       (Vector3 *)&CStack_10,(MethodInfo *)0x0);
                                  CStack_10.r = pVVar14->x;
                                  CStack_10.g = pVVar14->y;
                                  fVar5 = fVar5 - pVVar14->z;
                                  if (fVar7 <= (VStack_13.y - CStack_10.g) *
                                                (VStack_13.y - CStack_10.g) +
                                                (VStack_13.x - CStack_10.r) *
                                                (VStack_13.x - CStack_10.r) + fVar5 * fVar5) {
                                    return 0;
                                  }
                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                      (this,(MethodInfo *)0x0);
                                  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                  {
                                    bVar4 = (pPVar1->fields).muzzleFlareOnFire;
                                    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                      FUN_?();
                                    }
                                    bVar19 = Extensions::Extensions_GetValueOrDefault
                                                      (itemData,StringLiteral_MuzzleFlareOnFire,0,
                                                                                                              
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                    if (bVar4 != bVar19) {
                                      return 0;
                                    }
                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                        (this,(MethodInfo *)0x0);
                                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0
                                       ) {
                                      fVar5 = (pPVar1->fields).muzzleFlareSize;
                                      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                        FUN_?();
                                      }
                                      fVar18 = Extensions::Extensions_GetValueOrDefault_4
                                                         (itemData,StringLiteral_MuzzleFlareSize,
                                                          fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                      if (fVar5 != fVar18) {
                                        return 0;
                                      }
                                      pPVar1 = PickupItemCustomGun_get_Configuration
                                                          (this,(MethodInfo *)0x0);
                                      if (pPVar1 !=
                                          (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                        fVar5 = (pPVar1->fields).muzzleFlareColor.r;
                                        fVar18 = (pPVar1->fields).muzzleFlareColor.g;
                                        fVar20 = (pPVar1->fields).muzzleFlareColor.b;
                                        fVar21 = (pPVar1->fields).muzzleFlareColor.a;
                                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                          FUN_?();
                                        }
                                        aCStack_15[0].r = _UNK_?;
                                        aCStack_15[0].g = _UNK_?;
                                        aCStack_15[0].b = _UNK_?;
                                        aCStack_15[0].a = _UNK_?;
                                        pCVar22 = Extensions::Extensions_GetColorOrDefault
                                                            (&CStack_10,itemData,
                                                             StringLiteral_MuzzleFlareColor,
                                                             aCStack_15,(MethodInfo *)0x0);
                                        fVar5 = fVar5 - pCVar22->r;
                                        fVar18 = fVar18 - pCVar22->g;
                                        fVar20 = fVar20 - pCVar22->b;
                                        fVar21 = fVar21 - pCVar22->a;
                                        if (fVar7 <= fVar18 * fVar18 + fVar5 * fVar5 +
                                                      fVar20 * fVar20 + fVar21 * fVar21) {
                                          return 0;
                                        }
                                        pPVar1 = PickupItemCustomGun_get_Configuration
                                                            (this,(MethodInfo *)0x0);
                                        if (pPVar1 !=
                                            (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                          bVar4 = (pPVar1->fields).thirdPersonCamera;
                                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          bVar19 = Extensions::Extensions_GetValueOrDefault
                                                            (itemData,
                                                  StringLiteral_ThirdPersonCamera,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                          if (bVar4 != bVar19) {
                                            return 0;
                                          }
                                          pPVar1 = PickupItemCustomGun_get_Configuration
                                                              (this,(MethodInfo *)0x0);
                                          if (pPVar1 !=
                                              (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                            bVar4 = (pPVar1->fields).smokeOnFire;
                                            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0)
                                            {
                                              FUN_?();
                                            }
                                            bVar19 = Extensions::Extensions_GetValueOrDefault
                                                              (itemData,StringLiteral_SmokeOnFire,0,
                                                                                                                              
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                            if (bVar4 != bVar19) {
                                              return 0;
                                            }
                                            pPVar1 = PickupItemCustomGun_get_Configuration
                                                                (this,(MethodInfo *)0x0);
                                            if (pPVar1 !=
                                                (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                              fVar5 = (pPVar1->fields).shotsPerBurst;
                                              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c ==
                                                  0) {
                                                FUN_?();
                                              }
                                              fVar18 = Extensions::Extensions_GetValueOrDefault_4
                                                                 (itemData,
                                                  StringLiteral_ShotsPerBurst,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                              if (fVar5 != fVar18) {
                                                return 0;
                                              }
                                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                                  (this,(MethodInfo *)0x0);
                                              if (pPVar1 !=
                                                  (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                              {
                                                fVar5 = (pPVar1->fields).burstCooldownBetweenShots
                                                ;
                                                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c
                                                    == 0) {
                                                  FUN_?();
                                                }
                                                fVar18 = Extensions::Extensions_GetValueOrDefault_4
                                                                   (itemData,
                                                  StringLiteral_BurstCooldownBetweenShots,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                if (fVar5 != fVar18) {
                                                  return 0;
                                                }
                                                pPVar1 = PickupItemCustomGun_get_Configuration
                                                                    (this,(MethodInfo *)0x0);
                                                if (pPVar1 !=
                                                    (PickupItemCustomGun_CustomGunConfiguration *)
                                                    0x0) {
                                                  fVar5 = (pPVar1->fields).projectilesPerShot;
                                                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c
                                                      == 0) {
                                                    FUN_?();
                                                  }
                                                  fVar18 = Extensions::
                                                           Extensions_GetValueOrDefault_4
                                                                     (itemData,
                                                  StringLiteral_ProjectilesPerShot,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar4 = (pPVar1->fields).chargeEnabled;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    bVar19 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar4 != bVar19) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).chargeTime;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeTime,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    IVar8 = (pPVar1->fields).chargeSoundEffect;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    IVar9 = Extensions::
                                                             Extensions_GetValueOrDefault_2
                                                                       (itemData,
                                                  StringLiteral_ChargeSoundEffect,0xffffffff,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                                  if (IVar8 != IVar9) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).
                                                             chargeSoundEffectVolume;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeSoundEffectVolume,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar4 = (pPVar1->fields).chargeParticlesEnabled
                                                    ;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    bVar19 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeParticlesEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar4 != bVar19) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).chargeParticlesSize;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeParticlesSize,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).chargeParticlesColor.
                                                             r;
                                                    fVar18 = (pPVar1->fields).chargeParticlesColor.
                                                             g;
                                                    fVar20 = (pPVar1->fields).chargeParticlesColor.
                                                             b;
                                                    fVar21 = (pPVar1->fields).chargeParticlesColor.
                                                             a;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    aCStack_15[0].r = _UNK_?;
                                                    aCStack_15[0].g = _UNK_?;
                                                    aCStack_15[0].b = _UNK_?;
                                                    aCStack_15[0].a = _UNK_?;
                                                    pCVar22 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_10,itemData,
                                                                                                                                                  
                                                  StringLiteral_ChargeParticlesColor,aCStack_15,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = fVar5 - pCVar22->r;
                                                  fVar18 = fVar18 - pCVar22->g;
                                                  fVar20 = fVar20 - pCVar22->b;
                                                  fVar21 = fVar21 - pCVar22->a;
                                                  if (fVar7 <= fVar18 * fVar18 + fVar5 * fVar5 +
                                                                fVar20 * fVar20 + fVar21 * fVar21) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar4 = (pPVar1->fields).chargeZoomEnabled;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    bVar19 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeZoomEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar4 != bVar19) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).chargeZoomAmmount;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomAmmount,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).chargeZoomTime;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomTime,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields)._.range;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,StringLiteral_Range
                                                                        ,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).projectileSpeed;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSpeed,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).projectileSize;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar18 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSize,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).projectileColor.r;
                                                    fVar18 = (pPVar1->fields).projectileColor.g;
                                                    fVar20 = (pPVar1->fields).projectileColor.b;
                                                    fVar21 = (pPVar1->fields).projectileColor.a;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    aCStack_15[0].r = _UNK_?;
                                                    aCStack_15[0].g = _UNK_?;
                                                    aCStack_15[0].b = _UNK_?;
                                                    aCStack_15[0].a = _UNK_?;
                                                    pCVar22 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_10,itemData,
                                                                                                                                                  
                                                  StringLiteral_ProjectileColor,aCStack_15,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = fVar5 - pCVar22->r;
                                                  fVar18 = fVar18 - pCVar22->g;
                                                  fVar20 = fVar20 - pCVar22->b;
                                                  fVar21 = fVar21 - pCVar22->a;
                                                  if (fVar7 <= fVar18 * fVar18 + fVar5 * fVar5 +
                                                                fVar20 * fVar20 + fVar21 * fVar21) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).projectileTrailColor.
                                                             r;
                                                    fVar18 = (pPVar1->fields).projectileTrailColor.
                                                             g;
                                                    fVar20 = (pPVar1->fields).projectileTrailColor.
                                                             b;
                                                    fVar21 = (pPVar1->fields).projectileTrailColor.
                                                             a;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    aCStack_15[0].r = _UNK_?;
                                                    aCStack_15[0].g = _UNK_?;
                                                    aCStack_15[0].b = _UNK_?;
                                                    aCStack_15[0].a = _UNK_?;
                                                    pCVar22 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_10,itemData,
                                                                                                                                                  
                                                  StringLiteral_ProjectileTrailColor,aCStack_15,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = fVar5 - pCVar22->r;
                                                  fVar18 = fVar18 - pCVar22->g;
                                                  fVar20 = fVar20 - pCVar22->b;
                                                  fVar21 = fVar21 - pCVar22->a;
                                                  if (fVar7 <= fVar18 * fVar18 + fVar5 * fVar5 +
                                                                fVar20 * fVar20 + fVar21 * fVar21) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar4 = (pPVar1->fields).sparksOnHit;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    bVar19 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_SparksOnHit,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar4 != bVar19) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).sparksSize;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    fVar6 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_SparksSize,fVar6,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar5 != fVar6) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar5 = (pPVar1->fields).sparksColor.r;
                                                    fVar6 = (pPVar1->fields).sparksColor.g;
                                                    fVar18 = (pPVar1->fields).sparksColor.b;
                                                    fVar20 = (pPVar1->fields).sparksColor.a;
                                                    if (*(int *)&(TypeInfo__Extensions->_1).
                                                                 field_0x1c == 0) {
                                                      FUN_?();
                                                    }
                                                    aCStack_15[0].r = _UNK_?;
                                                    aCStack_15[0].g = _UNK_?;
                                                    aCStack_15[0].b = _UNK_?;
                                                    aCStack_15[0].a = _UNK_?;
                                                    pCVar22 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_10,itemData,
                                                                         StringLiteral_SparksColor,
                                                                         aCStack_15,
                                                                         (MethodInfo *)0x0);
                                                    fVar5 = fVar5 - pCVar22->r;
                                                    fVar6 = fVar6 - pCVar22->g;
                                                    fVar18 = fVar18 - pCVar22->b;
                                                    fVar20 = fVar20 - pCVar22->a;
                                                    return fVar6 * fVar6 + fVar5 * fVar5 +
                                                           fVar18 * fVar18 + fVar20 * fVar20 <
                                                           fVar7;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  bVar4 = (*pcVar23)();
  return bVar4;
}


/* Void MovementSpeedStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_MovementSpeedStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pIVar4 = pMVar2[1].fields.interactionDataHandlerBase;
        if (pIVar4 != (InteractionDataHandlerBase *)0x0) {
          fVar5 = *(float *)((longlong)&pIVar4[1].fields._._.m_CancellationTokenSource + 4);
          pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            if (fVar5 == (float)(int)(pPVar6->fields).movementSpeedWhileHeld) {
              return;
            }
            this_00 = (AvatarMotor *)pMVar2[1].fields.interactionDataHandlerBase;
            pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
               (this_00 != (AvatarMotor *)0x0)) {
              (this_00->fields).walkSpeedBase = (float)(int)(pPVar6->fields).movementSpeedWhileHeld;
              AvatarMotor::AvatarMotor_HandleMovementBoost(this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void MuzzleStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_MuzzleStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._._.muzzlePoint;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4._0_4_ = (pPVar2->fields).muzzlePosition.x;
  uVar4._4_4_ = (pPVar2->fields).muzzlePosition.y;
  fVar5 = (pPVar2->fields).muzzlePosition.z;
  if (pTVar1 == (Transform *)0x0) goto DAT_?;
  uStack_6 = uVar4;
  fStack_7 = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar8);
  pTVar1 = (this->fields)._._._.muzzlePoint;
  obj = (this->fields).staticMuzzlePoint;
  if (pTVar1 == (Transform *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_9._8_8_ = 0;
  uStack_10 = 0;
  pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar8);
  if (obj == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  auStack_11 = (undefined1  [8])auStack_9._8_8_;
  pGStack_12 = (Gradient *)CONCAT44(pGStack_12._4_4_,uStack_10);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar8);
  pPStackX_18 = (this->fields).chargeParticles;
  if (pPStackX_18 == (ParticleSystem *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar17 = uVar15 == *puVar16;
      if (bVar17) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar17);
  }
  PStackX_20.m_ParticleSystem = pPStackX_18;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  auStack_11._0_4_ = (pPVar2->fields).chargeParticlesColor.r;
  auStack_11._4_4_ = (pPVar2->fields).chargeParticlesColor.g;
  pGStack_12 = *(Gradient **)&(pPVar2->fields).chargeParticlesColor.b;
  pPVar18 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
            ParticleSystem_MinMaxGradient_op_Implicit
                      (&PStack_19,(Color *)auStack_11,(MethodInfo *)0x0);
  PStack_20.m_Mode = pPVar18->m_Mode;
  PStack_20._4_4_ = *(undefined4 *)&pPVar18->field_0x4;
  PStack_20.m_GradientMin = pPVar18->m_GradientMin;
  PStack_20.m_GradientMax = pPVar18->m_GradientMax;
  PStack_20.m_ColorMin.r = (pPVar18->m_ColorMin).r;
  PStack_20.m_ColorMin.g = (pPVar18->m_ColorMin).g;
  PStack_20.m_ColorMin.b = (pPVar18->m_ColorMin).b;
  PStack_20.m_ColorMin.a = (pPVar18->m_ColorMin).a;
  PStack_20.m_ColorMax.r = (pPVar18->m_ColorMax).r;
  PStack_20.m_ColorMax.g = (pPVar18->m_ColorMax).g;
  PStack_20.m_ColorMax.b = (pPVar18->m_ColorMax).b;
  PStack_20.m_ColorMax.a = (pPVar18->m_ColorMax).a;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startColor(&PStackX_20,&PStack_20,(MethodInfo *)0x0);
  pPVar21 = (this->fields).flareParticles;
  if (pPVar21 == (ParticleSystem *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar13 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar17 = uVar15 == *puVar16;
      if (bVar17) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar17);
  }
  aPStackX_8[0].m_ParticleSystem = pPVar21;
  pPStackX_18 = pPVar21;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  auStack_11._0_4_ = (pPVar2->fields).muzzleFlareColor.r;
  auStack_11._4_4_ = (pPVar2->fields).muzzleFlareColor.g;
  pGStack_12 = *(Gradient **)&(pPVar2->fields).muzzleFlareColor.b;
  pPVar18 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
            ParticleSystem_MinMaxGradient_op_Implicit
                      (&PStack_19,(Color *)auStack_11,(MethodInfo *)0x0);
  PStack_20.m_Mode = pPVar18->m_Mode;
  PStack_20._4_4_ = *(undefined4 *)&pPVar18->field_0x4;
  PStack_20.m_GradientMin = pPVar18->m_GradientMin;
  PStack_20.m_GradientMax = pPVar18->m_GradientMax;
  PStack_20.m_ColorMin.r = (pPVar18->m_ColorMin).r;
  PStack_20.m_ColorMin.g = (pPVar18->m_ColorMin).g;
  PStack_20.m_ColorMin.b = (pPVar18->m_ColorMin).b;
  PStack_20.m_ColorMin.a = (pPVar18->m_ColorMin).a;
  PStack_20.m_ColorMax.r = (pPVar18->m_ColorMax).r;
  PStack_20.m_ColorMax.g = (pPVar18->m_ColorMax).g;
  PStack_20.m_ColorMax.b = (pPVar18->m_ColorMax).b;
  PStack_20.m_ColorMax.a = (pPVar18->m_ColorMax).a;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startColor(aPStackX_8,&PStack_20,(MethodInfo *)0x0);
  pMVar22 = (this->fields)._._._.owner;
  if (pMVar22 == (MVPickupOwner *)0x0) goto code_?;
  pMVar23 = (pMVar22->fields)._.worldObjectParent;
  if (pMVar23 == (MVWorldObjectClient *)0x0) {
code_?:
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    fVar5 = _UNK_?;
    fVar24 = _UNK_?;
    if ((pPVar2->fields).thirdPersonCamera != 0) goto code_?;
  }
  else {
    pMVar25 = pMVar23->klass;
    bVar26 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
    if (((pMVar25->_1).naturalAligment < bVar26) ||
       ((MVAvatarRemote__Class *)(pMVar25->_1).typeHierarchy[(ulonglong)bVar26 - 1] !=
        TypeInfo__MVAvatarRemote)) goto code_?;
code_?:
    fVar5 = _UNK_?;
    fVar24 = _UNK_?;
  }
  auStack_11 = (undefined1  [8])0x0;
  pGStack_12 = (Gradient *)0x0;
  pGStack_27 = (Gradient *)0x0;
  auStack_9._0_4_ = 0.0;
  auStack_9._4_4_ = 0.0;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
  ParticleSystem_MinMaxCurve__ctor_3
            ((ParticleSystem_MinMaxCurve *)auStack_11,fVar5,fVar24,(MethodInfo *)0x0);
  PStack_20._0_8_ = auStack_11;
  PStack_20.m_GradientMin = pGStack_12;
  PStack_20.m_GradientMax = pGStack_27;
  PStack_20.m_ColorMin.r = (float)auStack_9._0_4_;
  PStack_20.m_ColorMin.g = (float)auStack_9._4_4_;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startSize
            (aPStackX_8,(ParticleSystem_MinMaxCurve *)&PStack_20,(MethodInfo *)0x0);
  pPVar21 = (this->fields).chargeParticles;
  if (pPVar21 != (ParticleSystem *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar21,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_11._0_4_ = (pVVar28->oneVector).x;
    auStack_11._4_4_ = (pVVar28->oneVector).y;
    fVar5 = (pVVar28->oneVector).z;
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fVar24 = (pPVar2->fields).chargeParticlesSize;
      if (pTVar1 != (Transform *)0x0) {
        auStack_11._4_4_ = (float)auStack_11._4_4_ * fVar24;
        auStack_11._0_4_ = (float)auStack_11._0_4_ * fVar24;
        pGStack_12 = (Gradient *)CONCAT44(pGStack_12._4_4_,fVar5 * fVar24);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar8);
        pPVar21 = (this->fields).flareParticles;
        if (pPVar21 != (ParticleSystem *)0x0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar21,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_6._0_4_ = (pVVar28->oneVector).x;
          uStack_6._4_4_ = (pVVar28->oneVector).y;
          fVar5 = (pVVar28->oneVector).z;
          pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            fVar24 = (pPVar2->fields).muzzleFlareSize;
            fVar5 = fVar5 * fVar24;
            if (pTVar1 == (Transform *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_6 = CONCAT44(uStack_6._4_4_ * fVar24,(float)uStack_6 * fVar24);
            fStack_7 = fVar5;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar8,&uStack_6);
            return;
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnEnterVehicleWithWeapon(PickupItemCustomGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnEquip
               (PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_1[0].fakeValue = 0.0;
  aOStack_1[0].inited = 0;
  aOStack_1[0]._21_3_ = 0;
  aOStack_1[0].currentCryptoKey = 0;
  aOStack_1[0].hiddenValue.b1 = 0;
  aOStack_1[0].hiddenValue.b2 = 0;
  aOStack_1[0].hiddenValue.b3 = 0;
  aOStack_1[0].hiddenValue.b4 = 0;
  aOStack_1[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_1,value_00,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    aOStack_1[0].fakeValue = value;
  }
  bVar3 = iRam_? != 0;
  (this->fields).initialMouseSensitivity.currentCryptoKey = aOStack_1[0].currentCryptoKey;
  (this->fields).initialMouseSensitivity.hiddenValue = aOStack_1[0].hiddenValue;
  (this->fields).initialMouseSensitivity.hiddenValueOld = aOStack_1[0].hiddenValueOld;
  (this->fields).initialMouseSensitivity.fakeValue = aOStack_1[0].fakeValue;
  (this->fields).initialMouseSensitivity.inited = aOStack_1[0].inited;
  *(undefined3 *)&(this->fields).initialMouseSensitivity.field_0x15 = aOStack_1[0]._21_3_;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).initialMouseSensitivity.hiddenValueOld >> 0xc);
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
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnFire
               (PickupItemCustomGun *this,bool isLocal,MethodInfo *method)

{
  pVVar1 = PickupItemCustomGun_HandleBulletGenerationOnFire
                     (&VStack_2,this,isLocal,(MethodInfo *)0x0);
  VStack_3.x = pVVar1->x;
  VStack_3.y = pVVar1->y;
  VStack_3.z = pVVar1->z;
  PickupItemCustomGun_HandleRecoil(this,&VStack_3,(MethodInfo *)0x0);
  PickupItemCustomGun_HandleFiringStateAndAmmoOnFire(this,(MethodInfo *)0x0);
  this_00 = (this->fields).fireEffectTimeout;
  if (this_00 != (TimeoutClock *)0x0) {
    bVar4 = TimeoutClock::TimeoutClock_IsInTimeout(this_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    PickupItemEditable::PickupItemEditable_PlayAnimation
              ((PickupItemEditable *)this,(MethodInfo *)0x0);
    PickupItemCustomGun_PlayFireSoundEffect(this,isLocal,(MethodInfo *)0x0);
    pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar5->fields).smokeOnFire != 0) {
        pPVar6 = (this->fields).smokeParticles;
        if (pPVar6 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar6,1,(MethodInfo *)0x0);
      }
      pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((pPVar5->fields).muzzleFlareOnFire != 0) {
          pPVar6 = (this->fields).flareParticles;
          if (pPVar6 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                    (pPVar6,1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnHit
               (PickupItemCustomGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<float>__Nullable_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bulletEffectTimeout;
  if (this_00 != (TimeoutClock *)0x0) {
    bVar3 = TimeoutClock::TimeoutClock_IsInTimeout(this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    this_01 = (this->fields)._.hitAudioPlayer;
    pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      uVar5 = (voxelHit->normal).y;
      uVar6 = (voxelHit->normal).z;
      uStack_7 = *(undefined8 *)&voxelHit->cubePos;
      uStack_8._0_4_ = voxelHit->face;
      uStack_8._4_1_ = voxelHit->isCubeHit;
      uStack_8._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
      uStack_9 = *(undefined8 *)&voxelHit->woId;
      pCStack_10 = voxelHit->cube;
      uStack_11 = *(undefined8 *)&voxelHit->distance;
      pCStack_12 = voxelHit->collider;
      pTStack_13 = voxelHit->transform;
      iStack_14 = voxelHit->interactionFlags;
      uVar15._0_4_ = (voxelHit->point).x;
      uVar15._4_4_ = (voxelHit->point).y;
      fStack_16 = (float)uVar5;
      fStack_17 = (float)uVar6;
      if (this_01 != (CustomItemAudioPlayer *)0x0) {
        VStack_18._0_8_ = uVar15;
        VStack_18.z = (voxelHit->point).z;
        CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
                  (this_01,(pPVar4->fields)._.hitSoundEffect,1,&VStack_18,(MethodInfo *)0x0);
        pMVar19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        uStack_20._0_4_ = (voxelHit->point).x;
        uStack_20._4_4_ = (voxelHit->point).y;
        uVar15 = *(undefined8 *)&(voxelHit->point).z;
        uVar21 = (voxelHit->normal).y;
        uVar22 = (voxelHit->normal).z;
        uStack_7 = *(undefined8 *)&voxelHit->cubePos;
        fStack_23 = (float)uVar15;
        fStack_24 = (float)((ulonglong)uVar15 >> 0x20);
        pCStack_10 = voxelHit->cube;
        uStack_11 = *(undefined8 *)&voxelHit->distance;
        pCStack_12 = voxelHit->collider;
        pTStack_13 = voxelHit->transform;
        iStack_14 = voxelHit->interactionFlags;
        fStack_16 = (float)uVar21;
        fStack_17 = (float)uVar22;
        if (pMVar19 != (MVWorldObjectClientManager *)0x0) {
          iVar25 = MVWorldObjectClientManager::
                   MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                             (pMVar19,voxelHit->woId,
                              int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                             );
          pMVar19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar19 != (MVWorldObjectClientManager *)0x0) {
            pMVar26 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar19,iVar25,(MethodInfo *)0x0);
            lVar27 = FUN_?(pMVar26);
            if (lVar27 == 0) {
              pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                if ((pPVar4->fields).sparksOnHit == 0) {
                  return;
                }
                fStack_16 = (voxelHit->normal).y;
                VStack_18.z = (voxelHit->normal).z;
                uStack_7 = *(undefined8 *)&voxelHit->cubePos;
                uVar28._0_4_ = (voxelHit->point).x;
                uVar28._4_4_ = (voxelHit->point).y;
                uStack_20._0_4_ = (voxelHit->point).x;
                uStack_20._4_4_ = (voxelHit->point).y;
                fVar29 = (voxelHit->point).z;
                pVVar30 = &voxelHit->normal;
                fStack_24 = pVVar30->x;
                VStack_18.x = pVVar30->x;
                VStack_18.y = pVVar30->y;
                fStack_23 = fVar29;
                fStack_17 = VStack_18.z;
                pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_LookRotation_1
                                    ((Quaternion *)&NStack_32,&VStack_18,(MethodInfo *)0x0);
                uVar15 = *(undefined8 *)pQVar31;
                uVar33._0_4_ = pQVar31->z;
                uVar33._4_4_ = pQVar31->w;
                pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  NStackX_8 = (Nullable_1_Single_)
                              ((ulonglong)(uint)(pPVar4->fields).sparksSize << 0x20);
                  NStackX_8.hasValue = 1;
                  pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                    auStack_34._8_4_ = (pPVar4->fields).sparksColor.g;
                    auStack_34._12_4_ = (pPVar4->fields).sparksColor.b;
                    NStack_32.value.a = (pPVar4->fields).sparksColor.a;
                    NStack_32.hasValue = (bool)1;
                    NStack_32._1_3_ = SUB43(1 >> 8,0);
                    auStack_34[0] = NStack_32.hasValue;
                    auStack_34._1_3_ = NStack_32._1_3_;
                    auStack_34._4_4_ = (pPVar4->fields).sparksColor.r;
                    auStack_34._16_4_ = NStack_32.value.a;
                    VStack_18._0_8_ = uVar28;
                    VStack_18.z = fVar29;
                    NStack_32._0_8_ = uVar15;
                    NStack_32.value._4_8_ = uVar33;
                    OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                              (PoolEnums__Enum_WhiteSparks,&VStack_18,(Quaternion *)&NStack_32,
                               NStackX_8,(Nullable_1_UnityEngine_Color_ *)auStack_34,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else {
              pMVar35 = (this->fields)._._._.owner;
              if ((pMVar35 != (MVPickupOwner *)0x0) &&
                 (pMVar26 = (pMVar35->fields)._.worldObjectParent,
                 pMVar26 != (MVWorldObjectClient *)0x0)) {
                iVar25 = (pMVar26->fields)._.ownerActorNr;
                pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  auStack_34._0_8_ = *(undefined8 *)&lineOfFire->m_Origin;
                  auStack_34._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
                  auStack_34._16_4_ = (lineOfFire->m_Direction).y;
                  auStack_34._20_4_ = (lineOfFire->m_Direction).z;
                  uStack_20._0_4_ = (voxelHit->point).x;
                  uStack_20._4_4_ = (voxelHit->point).y;
                  uVar15 = *(undefined8 *)&(voxelHit->point).z;
                  uVar36 = (voxelHit->normal).y;
                  uVar37 = (voxelHit->normal).z;
                  uStack_7 = *(undefined8 *)&voxelHit->cubePos;
                  fStack_23 = (float)uVar15;
                  fStack_24 = (float)((ulonglong)uVar15 >> 0x20);
                  uStack_8._0_4_ = voxelHit->face;
                  uStack_8._4_1_ = voxelHit->isCubeHit;
                  uStack_8._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
                  uStack_9 = *(undefined8 *)&voxelHit->woId;
                  pCStack_10 = voxelHit->cube;
                  uStack_11 = *(undefined8 *)&voxelHit->distance;
                  pCStack_12 = voxelHit->collider;
                  pTStack_13 = voxelHit->transform;
                  iStack_14 = voxelHit->interactionFlags;
                  fVar29 = (pPVar4->fields)._.damage;
                  fStack_16 = (float)uVar36;
                  fStack_17 = (float)uVar37;
                  FUN_?(fVar29,TypeInfo__IBulletImpactVisualizer,lVar27,&uStack_20,auStack_34
                                ,CONCAT44(uVar1,iVar25),fVar29);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnLeaveVehicleWithWeapon(PickupItemCustomGun *this,MethodInfo *method)

{
  (*(this->klass->vtable).InterruptFire.methodPtr)(this,(this->klass->vtable).InterruptFire.method);
  (this->fields).canDoFOVZoom = 0;
  return;
}


/* Void OnLocalHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnLocalHit
               (PickupItemCustomGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
     (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork;
    pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if ((pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
       (this_00 != (RuntimeEventManager *)0x0)) {
      VStack_5.point.x = (voxelHit->point).x;
      VStack_5.point.y = (voxelHit->point).y;
      VStack_5._8_8_ = *(undefined8 *)&(voxelHit->point).z;
      VStack_5.normal.y = (voxelHit->normal).y;
      VStack_5.normal.z = (voxelHit->normal).z;
      VStack_5.cubePos = voxelHit->cubePos;
      VStack_5._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
      VStack_5.face = voxelHit->face;
      VStack_5.isCubeHit = voxelHit->isCubeHit;
      VStack_5._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
      VStack_5.woId = voxelHit->woId;
      VStack_5._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
      VStack_5.cube = voxelHit->cube;
      VStack_5.distance = voxelHit->distance;
      VStack_5._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
      VStack_5.collider = voxelHit->collider;
      VStack_5.transform = voxelHit->transform;
      VStack_5.interactionFlags = voxelHit->interactionFlags;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,&VStack_5,(pPVar4->fields)._.damage,(MethodInfo *)0x0);
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar6,voxelHit->woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
          this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar6,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_02,(MethodInfo *)0x0);
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
            if (pIVar7 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar7->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 != (MVNetworkGame *)0x0) &&
                    (this_01 = (pMVar2->fields).playerContainer,
                    this_01 != (MVPlayerContainer *)0x0)) &&
                   (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0
                   )) {
                  bVar8 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                  if (bVar8 != 0) {
                    return;
                  }
                  pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                    IStack_9.damage = (lineOfFire->m_Direction).x;
                    IStack_9.impulse.x = (lineOfFire->m_Direction).y;
                    fVar10 = (pPVar4->fields)._.impulseStrength;
                    fVar11 = fVar10 * IStack_9.damage;
                    fVar12 = (lineOfFire->m_Direction).z;
                    fVar13 = fVar10 * IStack_9.impulse.x;
                    pMVar14 = (this->fields)._._._.owner;
                    uVar15 = 0;
                    pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                      IStack_16.interactionType = 0;
                      IStack_16.playerKilledByType = 0;
                      IStack_16._18_2_ = 0;
                      IStack_16.damage = 0.0;
                      IStack_16.impulse.x = 0.0;
                      IStack_16.impulse.y = 0.0;
                      IStack_16.impulse.z = 0.0;
                      IStack_9.impulse.x = fVar13;
                      IStack_9.damage = fVar11;
                      IStack_9.impulse.y = fVar10 * fVar12;
                      MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                                (&IStack_16,
                                 (InteractionPackageType__Enum)
                                 CONCAT71((int7)((ulonglong)uVar15 >> 8),0x13),
                                 (pPVar4->fields)._.damage,(Vector3 *)&IStack_9,
                                 (PlayerKilledByType__Enum)
                                 CONCAT71((int7)((ulonglong)in_stack_17 >> 8),0x17),
                                 (MethodInfo *)0x0);
                      IStack_9.interactionType = IStack_16.interactionType;
                      IStack_9.playerKilledByType = IStack_16.playerKilledByType;
                      IStack_9._18_2_ = IStack_16._18_2_;
                      IStack_9.damage = IStack_16.damage;
                      IStack_9.impulse.x = IStack_16.impulse.x;
                      IStack_9.impulse.y = IStack_16.impulse.y;
                      IStack_9.impulse.z = IStack_16.impulse.z;
                      (*(pIVar7->klass->vtable).__unknown_1.methodPtr)
                                (pIVar7,pMVar14,&IStack_9,0,
                                 (pIVar7->klass->vtable).__unknown_1.method);
                      return;
                    }
                  }
                }
                goto code_?;
              }
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnPickupNewEditableItem() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnPickupNewEditableItem(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeoutClock);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    fVar2 = (pPVar1->fields)._.attackCooldown;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_3[0].fakeValue = 0.0;
    aOStack_3[0].inited = 0;
    aOStack_3[0]._21_3_ = 0;
    aOStack_3[0].currentCryptoKey = 0;
    aOStack_3[0].hiddenValue.b1 = 0;
    aOStack_3[0].hiddenValue.b2 = 0;
    aOStack_3[0].hiddenValue.b3 = 0;
    aOStack_3[0].hiddenValue.b4 = 0;
    aOStack_3[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalEncrypt(fVar2,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_3,value,(MethodInfo *)0x0);
    bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar4 != 0) {
      aOStack_3[0].fakeValue = fVar2;
    }
    bVar5 = iRam_? != 0;
    (this->fields)._._.fireInterval.currentCryptoKey = aOStack_3[0].currentCryptoKey;
    (this->fields)._._.fireInterval.hiddenValue = aOStack_3[0].hiddenValue;
    *(undefined4 *)&(this->fields)._._.fireInterval.hiddenValueOld =
         aOStack_3[0].hiddenValueOld._0_4_;
    *(undefined4 *)((longlong)&(this->fields)._._.fireInterval.hiddenValueOld + 4) =
         aOStack_3[0].hiddenValueOld._4_4_;
    pPVar6 = &this->fields;
    (pPVar6->_)._.fireInterval.fakeValue = aOStack_3[0].fakeValue;
    (pPVar6->_)._.fireInterval.inited = aOStack_3[0].inited;
    *(undefined3 *)&(pPVar6->_)._.fireInterval.field_0x15 = aOStack_3[0]._21_3_;
    if (bVar5) {
      uVar7 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar9 == *puVar10;
        if (bVar5) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pTVar11 = (TimeoutClock *)FUN_?(TypeInfo__TimeoutClock);
    (pTVar11->fields).timeoutTime = 0.05;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    fVar2 = (float)(*pcRam_?)();
    bVar5 = iRam_? != 0;
    (pTVar11->fields).lastTimeout = fVar2;
    (this->fields).fireEffectTimeout = pTVar11;
    if (bVar5) {
      uVar7 = (uint)((ulonglong)&(this->fields).fireEffectTimeout >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar9 == *puVar10;
        if (bVar5) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pTVar11 = (TimeoutClock *)FUN_?(TypeInfo__TimeoutClock);
    (pTVar11->fields).timeoutTime = 0.05;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    fVar2 = (float)(*pcRam_?)();
    bVar5 = iRam_? != 0;
    (pTVar11->fields).lastTimeout = fVar2;
    (this->fields).bulletEffectTimeout = pTVar11;
    if (bVar5) {
      uVar7 = (uint)((ulonglong)&(this->fields).bulletEffectTimeout >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar9 == *puVar10;
        if (bVar5) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    (*(this->klass->vtable).ResetAmmo.methodPtr)(this);
    pCVar14 = (this->fields)._.fireAudioPlayer;
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
        (pCVar14 != (CustomItemAudioPlayer *)0x0)) &&
       (pAVar15 = (pCVar14->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar15,(pPVar1->fields)._.fireSoundEffectVolume * (pCVar14->fields).baseVolume,
                 (MethodInfo *)0x0);
      pCVar14 = (this->fields).chargeAudioPlayer;
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
          (pCVar14 != (CustomItemAudioPlayer *)0x0)) &&
         (pAVar15 = (pCVar14->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (pAVar15,(pPVar1->fields).chargeSoundEffectVolume * (pCVar14->fields).baseVolume,
                   (MethodInfo *)0x0);
        pCVar14 = (this->fields)._.hitAudioPlayer;
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
            (pCVar14 != (CustomItemAudioPlayer *)0x0)) &&
           (pAVar15 = (pCVar14->fields).audioSource, pAVar15 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                    (pAVar15,(pPVar1->fields)._.hitSoundEffectVolume * (pCVar14->fields).baseVolume,
                     (MethodInfo *)0x0);
          PickupItemCustomGun_MuzzleStateUpdate(this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__54)
            ;
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar16 = FUN_?(
                                TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___FetchFOV_d__54
                                );
          bVar5 = iRam_? != 0;
          *(undefined4 *)(lVar16 + 0x10) = 0;
          *(PickupItemCustomGun **)(lVar16 + 0x20) = this;
          if (bVar5) {
            uVar7 = (uint)(lVar16 + 0x20U >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar5 = uVar9 == *puVar10;
              if (bVar5) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          obj = TypeInfo__Coroutines->static_fields->instance;
          if (obj != (Coroutines *)0x0) {
            if (lVar16 == 0) {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              uVar13 = func_?(&TypeInfo__System__NullReferenceException);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              this_00 = (NullReferenceException *)func_?(uVar13);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              pSVar17 = (String *)func_?(&StringLiteral_routine_is_null);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                        (this_00,pSVar17,(MethodInfo *)0x0);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              FUN_?(this_00,uVar13);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              uVar13 = func_?(&TypeInfo__System__ArgumentException);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              this_01 = (InvalidEnumArgumentException *)func_?(uVar13);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              pSVar17 = (String *)
                        func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_01,pSVar17,(MethodInfo *)0x0);
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              FUN_?(this_01,uVar13);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (cRam_? == '\0') {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (Coroutines *)0x0) {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pvVar18 = (obj->fields)._._._._.m_CachedPtr;
            if (pvVar18 == (void *)0x0) {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
              pcVar12 = (code *)FUN_?(&UNK_?);
              if (pcVar12 == (code *)0x0) {
                aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
                uVar13 = func_?(&UNK_?);
                aOStack_3[0].hiddenValueOld = (Byte__Array *)&UNK_?;
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar18,lVar16);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnStateChanged
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  PickupItemEditable::PickupItemEditable_OnStateChanged
            ((PickupItemEditable *)this,newState,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pIVar4 = pMVar2[1].fields.interactionDataHandlerBase;
        if (pIVar4 != (InteractionDataHandlerBase *)0x0) {
          fVar5 = *(float *)((longlong)&pIVar4[1].fields._._.m_CancellationTokenSource + 4);
          pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            if (fVar5 == (float)(int)(pPVar6->fields).movementSpeedWhileHeld) {
              return;
            }
            this_00 = (AvatarMotor *)pMVar2[1].fields.interactionDataHandlerBase;
            pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
               (this_00 != (AvatarMotor *)0x0)) {
              (this_00->fields).walkSpeedBase = (float)(int)(pPVar6->fields).movementSpeedWhileHeld;
              AvatarMotor::AvatarMotor_HandleMovementBoost(this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PlayFireSoundEffect(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_PlayFireSoundEffect
               (PickupItemCustomGun *this,bool isLocal,MethodInfo *method)

{
  pCVar1 = (this->fields)._.fireAudioPlayer;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
      (pCVar1 == (CustomItemAudioPlayer *)0x0)) ||
     (pCVar3 = (pCVar1->fields).audioClips,
     pCVar3 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0)) goto code_?;
  uVar4 = (pPVar2->fields)._.fireSoundEffect;
  if ((uint)pCVar3->max_length <= uVar4) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pCVar3->vector[(int)uVar4].isLooped == 0) {
    if (isLocal == 0) {
      fVar6 = 0.0;
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
    }
    else {
      pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if ((pCVar8 == (Camera *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)
         ) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      if ((pTVar9->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if ((pCVar8 == (Camera *)0x0) ||
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pCVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)
         ) goto code_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (aVStack_12,pTVar9,(MethodInfo *)0x0);
      uVar13 = pVVar11->x;
      uVar14 = pVVar11->y;
      fVar6 = VStack_7.z + pVVar11->z;
      VStack_7.y = VStack_7.y + (float)uVar14;
      VStack_7.x = VStack_7.x + (float)uVar13;
    }
    pCVar1 = (this->fields)._.fireAudioPlayer;
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pCVar1 == (CustomItemAudioPlayer *)0x0)) goto code_?;
    index = (pPVar2->fields)._.fireSoundEffect;
    VStack_7.z = fVar6;
code_?:
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar1,index,1,&VStack_7,(MethodInfo *)0x0);
  }
  else {
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    fVar6 = _UNK_?;
    if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    iVar15 = (pPVar2->fields).fireMode;
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (iVar15 == 2) {
      if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar16 = (pPVar2->fields).burstCooldownBetweenShots;
code_?:
      pCVar1 = (this->fields)._.fireAudioPlayer;
      if ((pCVar1 == (CustomItemAudioPlayer *)0x0) ||
         (obj = (pCVar1->fields).audioSource, obj == (AudioSource *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      cVar18 = (*pcRam_?)(pvVar17);
      if (((cVar18 == '\0') && (fVar16 <= fVar6)) && ((this->fields)._._.isFiring != 0)) {
        pCVar1 = (this->fields)._.fireAudioPlayer;
        pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
           (VStack_7.x = 0.0, VStack_7.y = 0.0, pCVar1 == (CustomItemAudioPlayer *)0x0))
        goto code_?;
        index = (pPVar2->fields)._.fireSoundEffect;
        VStack_7.z = 0.0;
        VStack_7.x = 0.0;
        VStack_7.y = 0.0;
        goto code_?;
      }
      if (fVar16 <= fVar6) {
        return;
      }
    }
    else {
      if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar16 = (pPVar2->fields)._.attackCooldown;
      if (iVar15 != 0) goto code_?;
    }
    pCVar1 = (this->fields)._.fireAudioPlayer;
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pCVar1 == (CustomItemAudioPlayer *)0x0)) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClipFraction
              (pCVar1,(pPVar2->fields)._.fireSoundEffect,fVar6,(MethodInfo *)0x0);
  }
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_ResetAmmo(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue.b1 = 0;
  OStack_1.hiddenValue.b2 = 0;
  OStack_1.hiddenValue.b3 = 0;
  OStack_1.hiddenValue.b4 = 0;
  OStack_1.hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = (ACTkByte4)
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  OStack_1.hiddenValueOld._0_5_ = CONCAT14(1,OStack_1.hiddenValueOld._0_4_);
  OStack_1.currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  OStack_1.hiddenValue = AVar2;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar3 != 0) {
    iVar4 = value;
  }
  OStack_1.hiddenValueOld = (Byte__Array *)CONCAT44(OStack_1.hiddenValueOld._4_4_,iVar4);
  (this->fields).currentAmmo.currentCryptoKey = OStack_1.currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = (int32_t)OStack_1.hiddenValue;
  (this->fields).currentAmmo.fakeValue = iVar4;
  *(undefined4 *)&(this->fields).currentAmmo.inited = OStack_1.hiddenValueOld._4_4_;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1.fakeValue = 0.0;
  OStack_1.inited = 0;
  OStack_1._21_3_ = 0;
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue.b1 = 0;
  OStack_1.hiddenValue.b2 = 0;
  OStack_1.hiddenValue.b3 = 0;
  OStack_1.hiddenValue.b4 = 0;
  OStack_1.hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_1,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    OStack_1._16_8_ = OStack_1._16_8_ & 0xffffffff00000000;
  }
  bVar5 = iRam_? != 0;
  (this->fields).currentCharge.currentCryptoKey = OStack_1.currentCryptoKey;
  (this->fields).currentCharge.hiddenValue = OStack_1.hiddenValue;
  (this->fields).currentCharge.hiddenValueOld = OStack_1.hiddenValueOld;
  (this->fields).currentCharge.fakeValue = OStack_1.fakeValue;
  (this->fields).currentCharge.inited = OStack_1.inited;
  *(undefined3 *)&(this->fields).currentCharge.field_0x15 = OStack_1._21_3_;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).currentCharge.hiddenValueOld >> 0xc);
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
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_SetConfiguration
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileTrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleFlareOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectilesPerShot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SmokeOnFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeedWhileHeld);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeZoomAmmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ThirdPersonCamera);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SparksOnHit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BurstCooldownBetweenShots);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeParticlesColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ProjectileSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShotsPerBurst);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChargeEnabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
         (pSVar4 = (String *)
                    Extensions::Extensions_GetValueOrDefault_3
                              (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                               System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                              ), pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
        bVar5 = iRam_? != 0;
        (pPVar1->fields)._.name = pSVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
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
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
           (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Damage,(pPVar2->fields)._.damage,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               ), pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
          (pPVar1->fields)._.damage = fVar10;
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
             (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_MaxAmmo,(pPVar2->fields)._.maxAmmo,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 ), pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
            (pPVar1->fields)._.maxAmmo = fVar10;
            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
               (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_ImpulseStrength,
                                    (pPVar2->fields)._.impulseStrength,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   ), pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0))
            {
              (pPVar1->fields)._.impulseStrength = fVar10;
              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                 (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_RecoilStrength,
                                      (pPVar2->fields)._.recoilStrength,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     ), pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                 ) {
                (pPVar1->fields)._.recoilStrength = fVar10;
                pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                   (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                       (itemData,StringLiteral_AttackAnimationTime,
                                        (pPVar2->fields)._.fireAnimationTime,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       ),
                   pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                  (pPVar1->fields)._.fireAnimationTime = fVar10;
                  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                     (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                         (itemData,StringLiteral_AttackCooldown,
                                          (pPVar2->fields)._.attackCooldown,
                                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                         ),
                     pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                    (pPVar1->fields)._.attackCooldown = fVar10;
                    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                    if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                       (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                           (itemData,StringLiteral_Radius,(pPVar2->fields)._.radius,
                                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                           ),
                       pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                      (pPVar1->fields)._.radius = fVar10;
                      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                         (IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                            (itemData,StringLiteral_FireSoundEffect,
                                             (pPVar2->fields)._.fireSoundEffect,
                                             int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                            ),
                         pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                        (pPVar1->fields)._.fireSoundEffect = IVar3;
                        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                        pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                        if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                           (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                               (itemData,StringLiteral_FireSoundEffectVolume,
                                                (pPVar2->fields)._.fireSoundEffectVolume,
                                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                               ),
                           pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                          (pPVar1->fields)._.fireSoundEffectVolume = fVar10;
                          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                             (IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                (itemData,StringLiteral_HitSoundEffect,
                                                 (pPVar2->fields)._.hitSoundEffect,
                                                 int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                ),
                             pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                            (pPVar1->fields)._.hitSoundEffect = IVar3;
                            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                            pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                            if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                               (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                                   (itemData,StringLiteral_HitSoundEffectVolume,
                                                    (pPVar2->fields)._.hitSoundEffectVolume,
                                                                                                        
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ),
                               pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                              (pPVar1->fields)._.hitSoundEffectVolume = fVar10;
                              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0)
                              ;
                              pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0)
                              ;
                              if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                                 (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                                     (itemData,StringLiteral_MovementSpeedWhileHeld,
                                                      (pPVar2->fields).movementSpeedWhileHeld,
                                                                                                            
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ),
                                 pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                                (pPVar1->fields).movementSpeedWhileHeld = fVar10;
                                pPVar1 = PickupItemCustomGun_get_Configuration
                                                   (this,(MethodInfo *)0x0);
                                pPVar2 = PickupItemCustomGun_get_Configuration
                                                   (this,(MethodInfo *)0x0);
                                if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                                   (IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                      (itemData,StringLiteral_FireMode,
                                                       (pPVar2->fields).fireMode,
                                                                                                              
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  ),
                                   pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)) {
                                  (pPVar1->fields).fireMode = IVar3;
                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemCustomGun_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                    CStack_11.b = (pPVar2->fields).muzzlePosition.z;
                                    CStack_11.r = (pPVar2->fields).muzzlePosition.x;
                                    CStack_11.g = (pPVar2->fields).muzzlePosition.y;
                                    pVVar12 = Extensions::Extensions_GetVector3OrDefault
                                                        ((Vector3 *)&CStack_13,itemData,
                                                         StringLiteral_MuzzlePosition,
                                                         (Vector3 *)&CStack_11,(MethodInfo *)0x0);
                                    fVar10 = pVVar12->z;
                                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                    {
                                      fVar14 = pVVar12->y;
                                      (pPVar1->fields).muzzlePosition.x = pVVar12->x;
                                      (pPVar1->fields).muzzlePosition.y = fVar14;
                                      (pPVar1->fields).muzzlePosition.z = fVar10;
                                      pPVar1 = PickupItemCustomGun_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      pPVar2 = PickupItemCustomGun_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)
                                                    0x0) {
                                        CStack_11.b = (pPVar2->fields).muzzleDirection.z;
                                        CStack_11.r = (pPVar2->fields).muzzleDirection.x;
                                        CStack_11.g = (pPVar2->fields).muzzleDirection.y;
                                        pVVar12 = Extensions::Extensions_GetVector3OrDefault
                                                            ((Vector3 *)&CStack_13,itemData,
                                                             StringLiteral_MuzzleDirection,
                                                             (Vector3 *)&CStack_11,(MethodInfo *)0x0
                                                            );
                                        fVar10 = pVVar12->z;
                                        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                          fVar14 = pVVar12->y;
                                          (pPVar1->fields).muzzleDirection.x = pVVar12->x;
                                          (pPVar1->fields).muzzleDirection.y = fVar14;
                                          (pPVar1->fields).muzzleDirection.z = fVar10;
                                          pPVar1 = PickupItemCustomGun_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          pPVar2 = PickupItemCustomGun_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration
                                                          *)0x0) &&
                                             (bVar15 = Extensions::Extensions_GetValueOrDefault
                                                                (itemData,
                                                  StringLiteral_MuzzleFlareOnFire,
                                                  (pPVar2->fields).muzzleFlareOnFire,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                          {
                                            (pPVar1->fields).muzzleFlareOnFire = bVar15;
                                            pPVar1 = PickupItemCustomGun_get_Configuration
                                                               (this,(MethodInfo *)0x0);
                                            pPVar2 = PickupItemCustomGun_get_Configuration
                                                               (this,(MethodInfo *)0x0);
                                            if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                               && (fVar10 = Extensions::
                                                            Extensions_GetValueOrDefault_4
                                                                      (itemData,
                                                  StringLiteral_MuzzleFlareSize,
                                                  (pPVar2->fields).muzzleFlareSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                            {
                                              (pPVar1->fields).muzzleFlareSize = fVar10;
                                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              pPVar2 = PickupItemCustomGun_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                              {
                                                CStack_13.r = (pPVar2->fields).muzzleFlareColor.r;
                                                CStack_13.g = (pPVar2->fields).muzzleFlareColor.g;
                                                CStack_13.b = (pPVar2->fields).muzzleFlareColor.b;
                                                CStack_13.a = (pPVar2->fields).muzzleFlareColor.a;
                                                pCVar16 = Extensions::Extensions_GetColorOrDefault
                                                                    (&CStack_11,itemData,
                                                                     StringLiteral_MuzzleFlareColor,
                                                                     &CStack_13,(MethodInfo *)0x0);
                                                fVar10 = pCVar16->g;
                                                fVar14 = pCVar16->b;
                                                fVar17 = pCVar16->a;
                                                if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                {
                                                  (pPVar1->fields).muzzleFlareColor.r = pCVar16->r;
                                                  (pPVar1->fields).muzzleFlareColor.g = fVar10;
                                                  (pPVar1->fields).muzzleFlareColor.b = fVar14;
                                                  (pPVar1->fields).muzzleFlareColor.a = fVar17;
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  pPVar2 = PickupItemCustomGun_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_ThirdPersonCamera,
                                                  (pPVar2->fields).thirdPersonCamera,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).thirdPersonCamera = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_SmokeOnFire,
                                                  (pPVar2->fields).smokeOnFire,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).smokeOnFire = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ShotsPerBurst,
                                                  (pPVar2->fields).shotsPerBurst,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).shotsPerBurst = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_BurstCooldownBetweenShots,
                                                  (pPVar2->fields).burstCooldownBetweenShots,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).burstCooldownBetweenShots =
                                                         fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ProjectilesPerShot,
                                                  (pPVar2->fields).projectilesPerShot,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).projectilesPerShot = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_ChargeEnabled,
                                                  (pPVar2->fields).chargeEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeEnabled = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ChargeTime,
                                                  (pPVar2->fields).chargeTime,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeTime = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (IVar3 = Extensions::
                                                              Extensions_GetValueOrDefault_2
                                                                        (itemData,
                                                  StringLiteral_ChargeSoundEffect,
                                                  (pPVar2->fields).chargeSoundEffect,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeSoundEffect = IVar3;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ChargeSoundEffectVolume,
                                                  (pPVar2->fields).chargeSoundEffectVolume,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeSoundEffectVolume =
                                                         fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_ChargeParticlesEnabled,
                                                  (pPVar2->fields).chargeParticlesEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeParticlesEnabled = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ChargeParticlesSize,
                                                  (pPVar2->fields).chargeParticlesSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeParticlesSize = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    CStack_13.r = (pPVar2->fields).
                                                                  chargeParticlesColor.r;
                                                    CStack_13.g = (pPVar2->fields).
                                                                  chargeParticlesColor.g;
                                                    CStack_13.b = (pPVar2->fields).
                                                                  chargeParticlesColor.b;
                                                    CStack_13.a = (pPVar2->fields).
                                                                  chargeParticlesColor.a;
                                                    pCVar16 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_11,itemData,
                                                                                                                                                  
                                                  StringLiteral_ChargeParticlesColor,&CStack_13,
                                                  (MethodInfo *)0x0);
                                                  fVar10 = pCVar16->g;
                                                  fVar14 = pCVar16->b;
                                                  fVar17 = pCVar16->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeParticlesColor.r =
                                                         pCVar16->r;
                                                    (pPVar1->fields).chargeParticlesColor.g = fVar10
                                                    ;
                                                    (pPVar1->fields).chargeParticlesColor.b = fVar14;
                                                    (pPVar1->fields).chargeParticlesColor.a = fVar17;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_ChargeZoomEnabled,
                                                  (pPVar2->fields).chargeZoomEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeZoomEnabled = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ChargeZoomAmmount,
                                                  (pPVar2->fields).chargeZoomAmmount,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeZoomAmmount = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ChargeZoomTime,
                                                  (pPVar2->fields).chargeZoomTime,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).chargeZoomTime = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_Range,(pPVar2->fields)._.range,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields)._.range = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ProjectileSpeed,
                                                  (pPVar2->fields).projectileSpeed,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).projectileSpeed = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_ProjectileSize,
                                                  (pPVar2->fields).projectileSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).projectileSize = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    CStack_13.r = (pPVar2->fields).projectileColor.r
                                                    ;
                                                    CStack_13.g = (pPVar2->fields).projectileColor.g
                                                    ;
                                                    CStack_13.b = (pPVar2->fields).projectileColor.b
                                                    ;
                                                    CStack_13.a = (pPVar2->fields).projectileColor.a
                                                    ;
                                                    pCVar16 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_11,itemData,
                                                                                                                                                  
                                                  StringLiteral_ProjectileColor,&CStack_13,
                                                  (MethodInfo *)0x0);
                                                  fVar10 = pCVar16->g;
                                                  fVar14 = pCVar16->b;
                                                  fVar17 = pCVar16->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileColor.r = pCVar16->r;
                                                    (pPVar1->fields).projectileColor.g = fVar10;
                                                    (pPVar1->fields).projectileColor.b = fVar14;
                                                    (pPVar1->fields).projectileColor.a = fVar17;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    CStack_13.r = (pPVar2->fields).
                                                                  projectileTrailColor.r;
                                                    CStack_13.g = (pPVar2->fields).
                                                                  projectileTrailColor.g;
                                                    CStack_13.b = (pPVar2->fields).
                                                                  projectileTrailColor.b;
                                                    CStack_13.a = (pPVar2->fields).
                                                                  projectileTrailColor.a;
                                                    pCVar16 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_11,itemData,
                                                                                                                                                  
                                                  StringLiteral_ProjectileTrailColor,&CStack_13,
                                                  (MethodInfo *)0x0);
                                                  fVar10 = pCVar16->g;
                                                  fVar14 = pCVar16->b;
                                                  fVar17 = pCVar16->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileTrailColor.r =
                                                         pCVar16->r;
                                                    (pPVar1->fields).projectileTrailColor.g = fVar10
                                                    ;
                                                    (pPVar1->fields).projectileTrailColor.b = fVar14;
                                                    (pPVar1->fields).projectileTrailColor.a = fVar17;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (bVar15 = Extensions::
                                                              Extensions_GetValueOrDefault
                                                                        (itemData,
                                                  StringLiteral_SparksOnHit,
                                                  (pPVar2->fields).sparksOnHit,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).sparksOnHit = bVar15;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if ((pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  && (fVar10 = Extensions::
                                                               Extensions_GetValueOrDefault_4
                                                                         (itemData,
                                                  StringLiteral_SparksSize,
                                                  (pPVar2->fields).sparksSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  ), pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0))
                                                  {
                                                    (pPVar1->fields).sparksSize = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    CStack_13.r = (pPVar2->fields).sparksColor.r;
                                                    CStack_13.g = (pPVar2->fields).sparksColor.g;
                                                    CStack_13.b = (pPVar2->fields).sparksColor.b;
                                                    CStack_13.a = (pPVar2->fields).sparksColor.a;
                                                    pCVar16 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        (&CStack_11,itemData,
                                                                         StringLiteral_SparksColor,
                                                                         &CStack_13,
                                                                         (MethodInfo *)0x0);
                                                    fVar10 = pCVar16->g;
                                                    fVar14 = pCVar16->b;
                                                    fVar17 = pCVar16->a;
                                                    if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).sparksColor.r = pCVar16->r;
                                                    (pPVar1->fields).sparksColor.g = fVar10;
                                                    (pPVar1->fields).sparksColor.b = fVar14;
                                                    (pPVar1->fields).sparksColor.a = fVar17;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SoundStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_SoundStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._.fireAudioPlayer;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
      (pCVar1 != (CustomItemAudioPlayer *)0x0)) &&
     (pAVar3 = (pCVar1->fields).audioSource, pAVar3 != (AudioSource *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (pAVar3,(pPVar2->fields)._.fireSoundEffectVolume * (pCVar1->fields).baseVolume,
               (MethodInfo *)0x0);
    pCVar1 = (this->fields).chargeAudioPlayer;
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
        (pCVar1 != (CustomItemAudioPlayer *)0x0)) &&
       (pAVar3 = (pCVar1->fields).audioSource, pAVar3 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                (pAVar3,(pPVar2->fields).chargeSoundEffectVolume * (pCVar1->fields).baseVolume,
                 (MethodInfo *)0x0);
      pCVar1 = (this->fields)._.hitAudioPlayer;
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
          (pCVar1 != (CustomItemAudioPlayer *)0x0)) &&
         (pAVar3 = (pCVar1->fields).audioSource, pAVar3 != (AudioSource *)0x0)) {
        fVar4 = (pPVar2->fields)._.hitSoundEffectVolume * (pCVar1->fields).baseVolume;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                        ,fVar4,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pAVar3 == (AudioSource *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pAVar3->fields)._._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,fVar4);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_TriggerBegin
               (PickupItemCustomGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    iVar2 = (pPVar1->fields).fireMode;
    if ((iVar2 == 2) && ((this->fields)._._.isFiring != 0)) {
      return;
    }
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar1->fields).chargeEnabled == 0) {
        if (iVar2 != 0) {
          if ((iVar2 != 1) && (iVar2 != 2)) {
            return;
          }
          (this->fields)._._.isFiring = 1;
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,instigatorActorNr,0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Got_TriggerStart__but_were_firin);
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
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          if ((this->fields)._._.isFiring == 0) {
            (this->fields)._._.isFiring = 1;
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar3 = StringLiteral_Got_TriggerStart__but_were_firin;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar4 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,3,pSVar3);
            return;
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields)._._.triggerBegin = 1;
        return;
      }
      if ((this->fields).chargeRoutine != (IEnumerator *)0x0) {
        Coroutines::Coroutines_Stop((this->fields).chargeRoutine,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__70
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar6 = (IEnumerator *)
               FUN_?(
                            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__70
                            );
      iVar2 = iRam_?;
      *(undefined4 *)&pIVar6[1].klass = 0;
      pIVar6[2].klass = (IEnumerator__Class *)this;
      if (iVar2 != 0) {
        uVar7 = (uint)((ulonglong)(pIVar6 + 2) >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
          iVar2 = iRam_?;
        } while (!bVar11);
      }
      (this->fields).chargeRoutine = pIVar6;
      if (iVar2 != 0) {
        uVar7 = (uint)((ulonglong)&(this->fields).chargeRoutine >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pIVar6 = (this->fields).chargeRoutine;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = TypeInfo__Coroutines->static_fields->instance;
      if (obj != (Coroutines *)0x0) {
        if (pIVar6 == (IEnumerator *)0x0) {
          uVar12 = func_?(&TypeInfo__System__NullReferenceException);
          this_00 = (NullReferenceException *)func_?(uVar12);
          pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
          mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                    (this_00,pSVar3,(MethodInfo *)0x0);
          uVar12 = func_?(&
                                       MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                      );
          FUN_?(this_00,uVar12);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
        if (bVar13 == 0) {
          uVar12 = func_?(&TypeInfo__System__ArgumentException);
          this_01 = (InvalidEnumArgumentException *)func_?(uVar12);
          pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
          uVar12 = func_?(&
                                       MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                      );
          FUN_?(this_01,uVar12);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (Coroutines *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar14 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar14,pIVar6);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_TriggerEnd(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    fireMode = (pPVar1->fields).fireMode;
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar1->fields).chargeEnabled != 0) {
        PickupItemCustomGun_FireWithCharge(this,fireMode,(MethodInfo *)0x0);
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        if ((pPVar1->fields).chargeZoomEnabled != 0) {
          pMVar2 = (this->fields)._._._.owner;
          if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
          if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
            this_00 = (pMVar3->fields).mainCamera;
            uVar4._0_4_ = (this->fields).initialFOV.currentCryptoKey;
            uVar4._4_4_ = (this->fields).initialFOV.hiddenValue;
            pBVar5 = (this->fields).initialFOV.hiddenValueOld;
            uVar6._0_4_ = (this->fields).initialFOV.fakeValue;
            uVar6._4_1_ = (this->fields).initialFOV.inited;
            uVar6._5_3_ = *(undefined3 *)&(this->fields).initialFOV.field_0x15;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            aOStack_7[0]._0_8_ = uVar4;
            aOStack_7[0].hiddenValueOld = pBVar5;
            aOStack_7[0]._16_8_ = uVar6;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
            if (this_00 == (Camera *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                      (this_00,fVar8,(MethodInfo *)0x0);
            aOStack_7[0].currentCryptoKey = (this->fields).initialMouseSensitivity.currentCryptoKey
            ;
            aOStack_7[0].hiddenValue = (this->fields).initialMouseSensitivity.hiddenValue;
            aOStack_7[0].hiddenValueOld = (this->fields).initialMouseSensitivity.hiddenValueOld;
            aOStack_7[0].fakeValue = (this->fields).initialMouseSensitivity.fakeValue;
            aOStack_7[0].inited = (this->fields).initialMouseSensitivity.inited;
            aOStack_7[0]._21_3_ = *(undefined3 *)&(this->fields).initialMouseSensitivity.field_0x15
            ;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            FUN_?(fVar8);
          }
        }
      }
      if (fireMode == CustomGunData_FireMode__Enum_Semi) {
        PickupItemWithDelay::PickupItemWithDelay_TriggerEnd
                  ((PickupItemWithDelay *)this,(MethodInfo *)0x0);
      }
      else if (fireMode == CustomGunData_FireMode__Enum_Auto) {
        pCVar9 = (this->fields)._.fireAudioPlayer;
        (this->fields)._._.isFiring = 0;
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (((pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
            (pCVar9 == (CustomItemAudioPlayer *)0x0)) ||
           (pCVar10 = (pCVar9->fields).audioClips,
           pCVar10 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0))
        goto code_?;
        uVar11 = (pPVar1->fields)._.fireSoundEffect;
        if ((uint)pCVar10->max_length <= uVar11) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (pCVar10->vector[(int)uVar11].isLooped != 0) {
          pCVar9 = (this->fields)._.fireAudioPlayer;
          if (pCVar9 == (CustomItemAudioPlayer *)0x0) goto code_?;
          CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(pCVar9,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* PickupItemCustomGun() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun__ctor
               (PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).canDoFOVZoom = 1;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = 0.0;
  uVar1._4_1_ = 0;
  uVar1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar1._0_4_ = 70.0;
    uVar1._4_1_ = 0;
    uVar1._5_3_ = 0;
  }
  bVar4 = iRam_? != 0;
  (this->fields).initialFOV.currentCryptoKey = 0;
  (this->fields).initialFOV.hiddenValue.b1 = 0;
  (this->fields).initialFOV.hiddenValue.b2 = 0;
  (this->fields).initialFOV.hiddenValue.b3 = 0;
  (this->fields).initialFOV.hiddenValue.b4 = 0;
  (this->fields).initialFOV.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields).initialFOV.fakeValue = (float)uVar1;
  (this->fields).initialFOV.inited = SUB81(uVar1,4);
  *(int3 *)&(this->fields).initialFOV.field_0x15 = SUB83(uVar1,5);
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).initialFOV.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar9 = _UNK_?;
  uVar10 = _UNK_?;
  uVar1 = _UNK_?;
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar12 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = (float)uVar11;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar12;
  uVar1 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.a = (float)uVar11;
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = (float)_UNK_?;
  uVar12 = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = (float)uVar11;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar12;
  uVar1 = _UNK_?;
  (this->fields)._._.crossHairCanFire.a = (float)uVar11;
  _UNK_? = (undefined4)uVar10;
  _UNK_? = SUB84(uVar10,4);
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar1 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = (float)uVar11;
  _UNK_? = (undefined4)uVar9;
  _UNK_? = SUB84(uVar9,4);
  uVar11 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar1;
  (this->fields)._._.crossHairCannotFireHigh.a = (float)uVar11;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar12._0_4_ = 0.0;
  uVar12._4_1_ = 0;
  uVar12._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar12._0_4_ = 1.0;
    uVar12._4_1_ = 0;
    uVar12._5_3_ = 0;
  }
  bVar4 = iRam_? != 0;
  pPVar13 = &(this->fields)._;
  (this->fields)._._.fireInterval.currentCryptoKey = 0;
  (pPVar13->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar13->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar13->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar13->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  pPVar14 = &this->fields;
  (pPVar14->_)._.fireInterval.fakeValue = (float)uVar12;
  (pPVar14->_)._.fireInterval.inited = SUB81(uVar12,4);
  *(int3 *)&(pPVar14->_)._.fireInterval.field_0x15 = SUB83(uVar12,5);
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._.fireInterval.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar4 = iRam_? != 0;
  (this->fields)._._._.meshRenderers = pMVar15;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._._.meshRenderers >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._._._._AbleToFire_k__BackingField = 1;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar16 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar17 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar18 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar19 = ppMVar17;
  if (lVar18 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar18 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar19;
      LOCK();
      bVar4 = uVar5 != uRam_?;
      uVar20 = uVar5;
      uVar21 = uVar5 + 1;
      if (bVar4) {
        uVar20 = uRam_?;
        uVar21 = uRam_?;
      }
      uRam_? = uVar21;
      UNLOCK();
    } while ((bVar4) && (ppMVar19 = (MethodInfo **)(ulonglong)uVar20, uVar5 = uVar20, uVar20 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar18;
  puVar22 = &(pOVar16->_1).field_0x1c;
  LOCK();
  bVar4 = *(int *)puVar22 == 1;
  if (bVar4) {
    *(undefined4 *)puVar22 = 1;
  }
  uVar5 = uRam_?;
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
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar23 = &(pOVar16->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar4 = *puVar23 == 1;
  if (bVar4) {
    *puVar23 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar4) {
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
    psVar24 = &(pOVar16->_1).cctor_thread;
    LOCK();
    bVar4 = (ulonglong)uVar5 == *psVar24;
    if (bVar4) {
      *psVar24 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
    while( true ) {
      puVar22 = &(pOVar16->_1).field_0x1c;
      LOCK();
      bVar4 = *(int *)puVar22 == 1;
      if (bVar4) {
        *(undefined4 *)puVar22 = 1;
      }
      UNLOCK();
      if (bVar4) break;
      LOCK();
      lVar18._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
      lVar18._4_4_ = (pOVar16->_1).cctor_started;
      if (lVar18 == 0) {
        (pOVar16->_1).initializationExceptionGCHandle = 0;
        (pOVar16->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar18 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar25._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
    lVar25._4_4_ = (pOVar16->_1).cctor_started;
    if (lVar25 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar16->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar16->_1).cctor_finished_or_no_cctor = 1;
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
    alStackX_10[0] = 0;
    if (((pOVar16->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar16);
      ppMVar19 = ppMVar17;
      pIVar26 = (Il2CppClass *)pOVar16;
code_?:
      do {
        if (ppMVar19 == (MethodInfo **)0x0) {
          FUN_?(pIVar26);
          if (pIVar26->field_count != 0) {
            ppMVar19 = pIVar26->methods;
            pMVar27 = *ppMVar19;
code_?:
            if (pMVar27 != (MethodInfo *)0x0) {
              if ((*pMVar27->name == '.') && ((pMVar27->flags & 0x800) != 0)) {
                ppMVar28 = ppMVar17;
                while (ppMVar29 = ppMVar28 + 0x3052aacd,
                      ppMVar28 = (MethodInfo **)((longlong)ppMVar28 + 1),
                      *(char *)ppMVar29 == (pMVar27->name + -1)[(longlong)ppMVar28]) {
                  if (ppMVar28 == (MethodInfo **)0x7) {
                    FUN_?(pMVar27,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar19 = ppMVar19 + 1;
          if (ppMVar19 < pIVar26->methods + pIVar26->field_count) {
            pMVar27 = *ppMVar19;
            goto code_?;
          }
        }
        pIVar26 = pIVar26->parent;
        ppMVar19 = ppMVar17;
      } while (pIVar26 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar16->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar1 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar16->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_30 = 0;
    uStack_31 = _UNK_?;
    uStack_32 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar16->_0).byval_arg,0,0);
    pppppppuVar24 = &pppppppuStack_78;
    if (0xf < uStack_32) {
      pppppppuVar24 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar24);
    if (uStack_32 < 0x10) {
code_?:
      lVar18 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar24 = &pppppppuStack_58;
      if (0xf < uStack_33) {
        pppppppuVar24 = pppppppuStack_58;
      }
      uStack_31 = uVar1;
      uStack_32 = uVar6;
      lVar25 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar24);
      if (lVar18 != 0) {
        *(longlong *)(lVar25 + 0x28U) = lVar18;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar25 + 0x28U >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar8;
            LOCK();
            uVar6 = *puVar8;
            if (uVar7 == uVar6) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar6);
        }
      }
      FUN_?(pOVar16,lVar25);
      if (0xf < uStack_33) {
        pppppppuVar24 = pppppppuStack_58;
        if ((0xfff < uStack_33 + 1) &&
           (pppppppuVar24 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar24))))
        goto code_?;
        func_?(pppppppuVar24);
      }
      goto code_?;
    }
    pppppppuVar24 = pppppppuStack_78;
    if ((uStack_32 + 1 < 0x1000) ||
       (pppppppuVar24 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar24)) < 0x20)) {
      func_?(pppppppuVar24);
      uVar1 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar10._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
  uVar10._4_4_ = (pOVar16->_1).cctor_started;
  uVar1 = FUN_?(uVar10);
  FUN_?(uVar1,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_AttackAnimationName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CustomGunRecoil);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_CustomGunRecoil;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
      PickupItemCustomGun_get_ChargeState(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentCharge.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentCharge.hiddenValue;
  pBVar2 = (this->fields).currentCharge.hiddenValueOld;
  uVar3._0_4_ = (this->fields).currentCharge.fakeValue;
  uVar3._4_1_ = (this->fields).currentCharge.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_4[0]._0_8_ = uVar1;
  aOStack_4[0].hiddenValueOld = pBVar2;
  aOStack_4[0]._16_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  return fVar5;
}


/* PickupItemCustomGun+CustomGunConfiguration get_Configuration() */

PickupItemCustomGun_CustomGunConfiguration *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_get_Configuration(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemCustomGun_CustomGunConfiguration *)
           (this->fields)._._Configuration_k__BackingField;
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    bVar2 = (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
            naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar2) ||
       ((pPVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
      FUN_?(pPVar1,
                    TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)
      ;
      pcVar3 = (code *)swi(3);
      pPVar1 = (PickupItemCustomGun_CustomGunConfiguration *)(*pcVar3)();
      return pPVar1;
    }
  }
  return pPVar1;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
        PickupItemCustomGun_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pCVar3 = (Color *)(*pcVar2)();
    return pCVar3;
  }
  if ((pPVar1->fields).chargeEnabled == 0) {
    pCVar3 = PickupItemWithDelay::PickupItemWithDelay_get_CrossHairColor
                        ((Color *)aOStack_4,(PickupItemWithDelay *)this,(MethodInfo *)0x0);
    fVar5 = pCVar3->g;
    fVar6 = pCVar3->b;
    fVar7 = pCVar3->a;
    __return_storage_ptr__->r = pCVar3->r;
    __return_storage_ptr__->g = fVar5;
    __return_storage_ptr__->b = fVar6;
    __return_storage_ptr__->a = fVar7;
  }
  else {
    uVar8._0_4_ = (this->fields).currentCharge.currentCryptoKey;
    uVar8._4_4_ = (this->fields).currentCharge.hiddenValue;
    pBVar9 = (this->fields).currentCharge.hiddenValueOld;
    uVar10._0_4_ = (this->fields).currentCharge.fakeValue;
    uVar10._4_1_ = (this->fields).currentCharge.inited;
    uVar10._5_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_4[0]._0_8_ = uVar8;
    aOStack_4[0].hiddenValueOld = pBVar9;
    aOStack_4[0]._16_8_ = uVar10;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
    fVar5 = _UNK_?;
    if ((_UNK_? <= fVar6) || ((this->fields)._._.isFiring != 0)) {
      fVar5 = (this->fields)._._.crossHairCanFire.g;
      fVar6 = (this->fields)._._.crossHairCanFire.b;
      fVar7 = (this->fields)._._.crossHairCanFire.a;
      __return_storage_ptr__->r = (this->fields)._._.crossHairCanFire.r;
      __return_storage_ptr__->g = fVar5;
      __return_storage_ptr__->b = fVar6;
      __return_storage_ptr__->a = fVar7;
    }
    else {
      bVar11 = PickupItemWithDelay::PickupItemWithDelay_get_IsOnCooldown
                         ((PickupItemWithDelay *)this,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        fVar6 = (this->fields)._._.crossHairCannotFireLow.r;
        fVar7 = (this->fields)._._.crossHairCannotFireLow.g;
        fVar12 = (this->fields)._._.crossHairCannotFireLow.b;
        fVar13 = (this->fields)._._.crossHairCannotFireLow.a;
        fVar14 = (this->fields)._._.crossHairCannotFireHigh.r;
        fVar15 = (this->fields)._._.crossHairCannotFireHigh.g;
        fVar16 = (this->fields)._._.crossHairCannotFireHigh.b;
        fVar17 = (this->fields)._._.crossHairCannotFireHigh.a;
        uVar18._0_4_ = (this->fields).currentCharge.currentCryptoKey;
        uVar18._4_4_ = (this->fields).currentCharge.hiddenValue;
        pBVar9 = (this->fields).currentCharge.hiddenValueOld;
        uVar19._0_4_ = (this->fields).currentCharge.fakeValue;
        uVar19._4_1_ = (this->fields).currentCharge.inited;
        uVar19._5_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x15;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        aOStack_4[0]._0_8_ = uVar18;
        aOStack_4[0].hiddenValueOld = pBVar9;
        aOStack_4[0]._16_8_ = uVar19;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        fVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
        if (fVar20 < 0.0) {
          fVar20 = 0.0;
        }
        else if (fVar5 < fVar20) {
          fVar20 = fVar5;
        }
        __return_storage_ptr__->r = (fVar14 - fVar6) * fVar20 + fVar6;
        __return_storage_ptr__->g = (fVar15 - fVar7) * fVar20 + fVar7;
        __return_storage_ptr__->b = (fVar16 - fVar12) * fVar20 + fVar12;
        __return_storage_ptr__->a = (fVar17 - fVar13) * fVar20 + fVar13;
      }
      else {
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        fVar6 = (this->fields)._._.lastFireTime;
        uVar21._0_4_ = (this->fields)._._.fireInterval.currentCryptoKey;
        uVar21._4_4_ = (this->fields)._._.fireInterval.hiddenValue;
        pBVar9 = (this->fields)._._.fireInterval.hiddenValueOld;
        pPVar22 = &this->fields;
        uVar23._0_4_ = (pPVar22->_)._.fireInterval.fakeValue;
        uVar23._4_1_ = (pPVar22->_)._.fireInterval.inited;
        uVar23._5_3_ = *(undefined3 *)&(pPVar22->_)._.fireInterval.field_0x15;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        aOStack_4[0]._0_8_ = uVar21;
        aOStack_4[0].hiddenValueOld = pBVar9;
        aOStack_4[0]._16_8_ = uVar23;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
        fVar12 = (this->fields)._._.crossHairCannotFireLow.g;
        fVar13 = (this->fields)._._.crossHairCannotFireLow.b;
        fVar14 = (this->fields)._._.crossHairCannotFireLow.a;
        fVar15 = (fVar7 - fVar6) / fVar15;
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        else if (fVar5 < fVar15) {
          fVar15 = fVar5;
        }
        __return_storage_ptr__->r =
             ((this->fields)._._.crossHairCannotFireLow.r - 0.0) * fVar15 + 0.0;
        __return_storage_ptr__->g = (fVar12 - 0.0) * fVar15 + 0.0;
        __return_storage_ptr__->b = (fVar13 - 0.0) * fVar15 + 0.0;
        __return_storage_ptr__->a = (fVar14 - fVar5) * fVar15 + fVar5;
      }
    }
  }
  return __return_storage_ptr__;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_FireSoundEffectName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           fireSoundEffects;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
     (pSVar1 != (String__Array *)0x0)) {
    uVar3 = (pPVar2->fields)._.fireSoundEffect;
    if (uVar3 < (uint)pSVar1->max_length) {
      return pSVar1->vector[(int)uVar3];
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Boolean get_FirstPerson() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_get_FirstPerson(PickupItemCustomGun *this,MethodInfo *method)

{
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    return (pPVar1->fields).thirdPersonCamera == 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_HasUnlimitedAmmo() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_get_HasUnlimitedAmmo(PickupItemCustomGun *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields).hasUnlimitedAmmoSetting != 0) {
      return 1;
    }
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      return _UNK_? <= (pPVar2->fields)._.maxAmmo;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_HitSoundEffectName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           hitSoundEffects;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
     (pSVar1 != (String__Array *)0x0)) {
    uVar3 = (pPVar2->fields)._.hitSoundEffect;
    if (uVar3 < (uint)pSVar1->max_length) {
      return pSVar1->vector[(int)uVar3];
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_get_IsAmmoDepleted(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (0 < iVar4) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
        PickupItemCustomGun_get_MaxAmmo(PickupItemCustomGun *this,MethodInfo *method)

{
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    uVar2 = (uint)(pPVar1->fields)._.maxAmmo;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(this->klass->vtable).CalculateMaxAmmo.methodPtr)
                      (this,(ulonglong)uVar2,(this->klass->vtable).CalculateMaxAmmo.method);
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
        PickupItemCustomGun_get_Quantity(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

