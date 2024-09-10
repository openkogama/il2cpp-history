
/* IEnumerator ChargeRoutine(Int32) */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_ChargeRoutine
          (PickupItemCustomGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__72);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__72
                           );
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void FireWithCharge(CustomGunData+FireMode) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_FireWithCharge
               (PickupItemCustomGun *this,CustomGunData_FireMode__Enum fireMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((this->fields).chargeRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).chargeRoutine,(MethodInfo *)0x0);
    (this->fields).chargeRoutine = (IEnumerator *)0x0;
    func_?(&(this->fields).chargeRoutine,0);
  }
  if (fireMode == CustomGunData_FireMode__Enum_Semi) {
    AVar1 = (ACTkByte4)(this->fields).currentCharge.currentCryptoKey;
    AVar2 = (this->fields).currentCharge.hiddenValue;
    pBVar3 = (this->fields).currentCharge.hiddenValueOld;
    fVar4 = (this->fields).currentCharge.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar2;
    value.currentCryptoKey._0_1_ = AVar1.b1;
    value.currentCryptoKey._1_1_ = AVar1.b2;
    value.currentCryptoKey._2_1_ = AVar1.b3;
    value.currentCryptoKey._3_1_ = AVar1.b4;
    value.hiddenValueOld = pBVar3;
    value.fakeValue = fVar4;
    value.inited = (this->fields).currentCharge.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x11;
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (_UNK_? <= fVar4) {
      if ((this->fields)._._._.owner == (MVPickupOwner *)0x0) goto code_?;
      (*(code *)(this->klass->vtable).OnFire.method)();
    }
  }
  pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar5->fields).chargeParticlesEnabled != 0) {
      this_00 = (this->fields).chargeParticles;
      if (this_00 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (this_00,(MethodInfo *)0x0);
    }
    pAVar6 = (this->fields)._.alternativeAudioSource;
    if (pAVar6 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar6,(MethodInfo *)0x0);
      pAVar6 = (this->fields)._.alternativeAudioSource;
      if (pAVar6 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                  (pAVar6,0,(MethodInfo *)0x0);
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                  ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
        uVar8 = *(undefined3 *)&pOVar7->field_0x1;
        iVar9 = pOVar7->hiddenValue;
        bVar10 = pOVar7->fakeValue;
        bVar11 = pOVar7->fakeValueChanged;
        bVar12 = pOVar7->inited;
        uVar13 = pOVar7->field_0xb;
        (this->fields).isCharging.currentCryptoKey = pOVar7->currentCryptoKey;
        *(undefined3 *)&(this->fields).isCharging.field_0x1 = uVar8;
        (this->fields).isCharging.hiddenValue = iVar9;
        (this->fields).isCharging.fakeValue = bVar10;
        (this->fields).isCharging.fakeValueChanged = bVar11;
        (this->fields).isCharging.inited = bVar12;
        (this->fields).isCharging.field_0xb = uVar13;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
        AVar1 = pOVar14->hiddenValue;
        pBVar3 = pOVar14->hiddenValueOld;
        fVar4 = pOVar14->fakeValue;
        bVar10 = pOVar14->inited;
        uVar8 = *(undefined3 *)&pOVar14->field_0x11;
        (this->fields).currentCharge.currentCryptoKey = pOVar14->currentCryptoKey;
        (this->fields).currentCharge.hiddenValue = AVar1;
        (this->fields).currentCharge.hiddenValueOld = pBVar3;
        (this->fields).currentCharge.fakeValue = fVar4;
        (this->fields).currentCharge.inited = bVar10;
        *(undefined3 *)&(this->fields).currentCharge.field_0x11 = uVar8;
        func_?();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_GetDefaultConfiguration(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_MuzzleFlareSize);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_ProjectileSize);
    func_?(&StringLiteral_SparksSize);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_ChargeSoundEffectVolume);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_ProjectilesPerShot);
    func_?(&StringLiteral_SmokeOnFire);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_ChargeTime);
    func_?(&StringLiteral_MovementSpeedWhileHeld);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_ChargeZoomTime);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_ChargeZoomAmmount);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ThirdPersonCamera);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_BurstCooldownBetweenShots);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_ChargeParticlesSize);
    func_?(&StringLiteral_ChargeParticlesColor);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_ProjectileSpeed);
    func_?(&StringLiteral_ShotsPerBurst);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_ChargeEnabled);
    cRam_? = '\x01';
  }
  this_00 = (PickupItemCustomGun_CustomGunConfiguration *)
            func_?(
                           TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                           );
  PickupItemCustomGun+CustomGunConfiguration::PickupItemCustomGun_CustomGunConfiguration__ctor
            (this_00,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = (String *)
           WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                     (StringLiteral_Name,(MethodInfo *)0x0);
  if (this_00 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if (pSVar1 == (String *)0x0) {
      (this_00->fields)._.name = (String *)0x0;
    }
    else {
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 == (String *)0x0) goto code_?;
      (this_00->fields)._.name = pSVar2;
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 == (String *)0x0) goto code_?;
    }
    func_?();
    pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                       (StringLiteral_MaxAmmo,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar4 = (float *)func_?();
      (this_00->fields)._.maxAmmo = *pfVar4;
      pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                         (StringLiteral_Damage,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar4 = (float *)func_?();
        (this_00->fields)._.damage = *pfVar4;
        pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                           (StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar4 = (float *)func_?();
          (this_00->fields)._.impulseStrength = *pfVar4;
          pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                             (StringLiteral_RecoilStrength,(MethodInfo *)0x0);
          if (pOVar3 != (Object *)0x0) {
            if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar4 = (float *)func_?();
            (this_00->fields)._.recoilStrength = *pfVar4;
            pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                               (StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
            if (pOVar3 != (Object *)0x0) {
              if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar4 = (float *)func_?();
              (this_00->fields)._.fireAnimationTime = *pfVar4;
              pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                 (StringLiteral_AttackCooldown,(MethodInfo *)0x0);
              if (pOVar3 != (Object *)0x0) {
                if ((pOVar3->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar4 = (float *)func_?();
                (this_00->fields)._.attackCooldown = *pfVar4;
                pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                   (StringLiteral_Radius,(MethodInfo *)0x0);
                if (pOVar3 != (Object *)0x0) {
                  if ((pOVar3->klass->_0).element_class !=
                      (TypeInfo__System__Single->_0).element_class) goto code_?;
                  pfVar4 = (float *)func_?();
                  (this_00->fields)._.radius = *pfVar4;
                  pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                     (StringLiteral_FireSoundEffect,(MethodInfo *)0x0);
                  if (pOVar3 != (Object *)0x0) {
                    if ((pOVar3->klass->_0).element_class !=
                        (TypeInfo__System__Int32->_0).element_class) goto code_?;
                    piVar5 = (int32_t *)func_?();
                    (this_00->fields)._.fireSoundEffect = *piVar5;
                    pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultValue
                                       (StringLiteral_FireSoundEffectVolume,(MethodInfo *)0x0);
                    if (pOVar3 != (Object *)0x0) {
                      if ((pOVar3->klass->_0).element_class !=
                          (TypeInfo__System__Single->_0).element_class) goto code_?;
                      pfVar4 = (float *)func_?();
                      (this_00->fields)._.fireSoundEffectVolume = *pfVar4;
                      pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                               CustomGunData_DefaultValue
                                         (StringLiteral_HitSoundEffect,(MethodInfo *)0x0);
                      if (pOVar3 != (Object *)0x0) {
                        if ((pOVar3->klass->_0).element_class !=
                            (TypeInfo__System__Int32->_0).element_class) goto code_?;
                        piVar5 = (int32_t *)func_?();
                        (this_00->fields)._.hitSoundEffect = *piVar5;
                        pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                 CustomGunData_DefaultValue
                                           (StringLiteral_HitSoundEffectVolume,(MethodInfo *)0x0);
                        if (pOVar3 != (Object *)0x0) {
                          if ((pOVar3->klass->_0).element_class !=
                              (TypeInfo__System__Single->_0).element_class) goto code_?;
                          pfVar4 = (float *)func_?();
                          (this_00->fields)._.hitSoundEffectVolume = *pfVar4;
                          pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                   CustomGunData_DefaultValue
                                             (StringLiteral_MovementSpeedWhileHeld,(MethodInfo *)0x0
                                             );
                          if (pOVar3 != (Object *)0x0) {
                            if ((pOVar3->klass->_0).element_class !=
                                (TypeInfo__System__Single->_0).element_class) goto code_?;
                            pfVar4 = (float *)func_?();
                            (this_00->fields).movementSpeedWhileHeld = *pfVar4;
                            pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                     CustomGunData_DefaultValue
                                               (StringLiteral_FireMode,(MethodInfo *)0x0);
                            if (pOVar3 != (Object *)0x0) {
                              if ((pOVar3->klass->_0).element_class !=
                                  (TypeInfo__System__Int32->_0).element_class)
                              goto code_?;
                              piVar5 = (int32_t *)func_?();
                              (this_00->fields).fireMode = *piVar5;
                              pVVar6 = WorldObjectTypes::CustomGun::CustomGunData::
                                       CustomGunData_DefaultVector3
                                                 ((Vector3 *)&stack0xfffffff0,
                                                  StringLiteral_MuzzlePosition,(MethodInfo *)0x0);
                              fVar7 = pVVar6->y;
                              fVar8 = pVVar6->z;
                              (this_00->fields).muzzlePosition.x = pVVar6->x;
                              (this_00->fields).muzzlePosition.y = fVar7;
                              (this_00->fields).muzzlePosition.z = fVar8;
                              pVVar6 = WorldObjectTypes::CustomGun::CustomGunData::
                                       CustomGunData_DefaultVector3
                                                 ((Vector3 *)&stack0xfffffff0,
                                                  StringLiteral_MuzzleDirection,(MethodInfo *)0x0);
                              fVar7 = pVVar6->y;
                              fVar8 = pVVar6->z;
                              (this_00->fields).muzzleDirection.x = pVVar6->x;
                              (this_00->fields).muzzleDirection.y = fVar7;
                              (this_00->fields).muzzleDirection.z = fVar8;
                              pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                       CustomGunData_DefaultValue
                                                 (StringLiteral_MuzzleFlareOnFire,(MethodInfo *)0x0)
                              ;
                              if (pOVar3 != (Object *)0x0) {
                                if ((pOVar3->klass->_0).element_class !=
                                    (TypeInfo__System__Boolean->_0).element_class)
                                goto code_?;
                                pbVar9 = (bool *)func_?();
                                (this_00->fields).muzzleFlareOnFire = *pbVar9;
                                pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                         CustomGunData_DefaultValue
                                                   (StringLiteral_MuzzleFlareSize,(MethodInfo *)0x0)
                                ;
                                if (pOVar3 != (Object *)0x0) {
                                  if ((pOVar3->klass->_0).element_class !=
                                      (TypeInfo__System__Single->_0).element_class)
                                  goto code_?;
                                  pfVar4 = (float *)func_?();
                                  (this_00->fields).muzzleFlareSize = *pfVar4;
                                  pCVar10 = WorldObjectTypes::CustomGun::CustomGunData::
                                            CustomGunData_DefaultColor
                                                      ((Color *)&stack0xffffffec,
                                                       StringLiteral_MuzzleFlareColor,
                                                       (MethodInfo *)0x0);
                                  fVar8 = pCVar10->g;
                                  fVar7 = pCVar10->b;
                                  fVar11 = pCVar10->a;
                                  (this_00->fields).muzzleFlareColor.r = pCVar10->r;
                                  (this_00->fields).muzzleFlareColor.g = fVar8;
                                  (this_00->fields).muzzleFlareColor.b = fVar7;
                                  (this_00->fields).muzzleFlareColor.a = fVar11;
                                  pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                           CustomGunData_DefaultValue
                                                     (StringLiteral_ThirdPersonCamera,
                                                      (MethodInfo *)0x0);
                                  if (pOVar3 != (Object *)0x0) {
                                    if ((pOVar3->klass->_0).element_class !=
                                        (TypeInfo__System__Boolean->_0).element_class)
                                    goto code_?;
                                    pbVar9 = (bool *)func_?();
                                    (this_00->fields).thirdPersonCamera = *pbVar9;
                                    pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                             CustomGunData_DefaultValue
                                                       (StringLiteral_SmokeOnFire,(MethodInfo *)0x0)
                                    ;
                                    if (pOVar3 != (Object *)0x0) {
                                      if ((pOVar3->klass->_0).element_class !=
                                          (TypeInfo__System__Boolean->_0).element_class)
                                      goto code_?;
                                      pbVar9 = (bool *)func_?();
                                      (this_00->fields).smokeOnFire = *pbVar9;
                                      pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                               CustomGunData_DefaultValue
                                                         (StringLiteral_ShotsPerBurst,
                                                          (MethodInfo *)0x0);
                                      if (pOVar3 != (Object *)0x0) {
                                        if ((pOVar3->klass->_0).element_class !=
                                            (TypeInfo__System__Single->_0).element_class)
                                        goto code_?;
                                        pfVar4 = (float *)func_?();
                                        (this_00->fields).shotsPerBurst = *pfVar4;
                                        pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                                 CustomGunData_DefaultValue
                                                           (StringLiteral_BurstCooldownBetweenShots,
                                                            (MethodInfo *)0x0);
                                        if (pOVar3 != (Object *)0x0) {
                                          if ((pOVar3->klass->_0).element_class !=
                                              (TypeInfo__System__Single->_0).element_class)
                                          goto code_?;
                                          pfVar4 = (float *)func_?();
                                          (this_00->fields).burstCooldownBetweenShots = *pfVar4;
                                          pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                                   CustomGunData_DefaultValue
                                                             (StringLiteral_ProjectilesPerShot,
                                                              (MethodInfo *)0x0);
                                          if (pOVar3 != (Object *)0x0) {
                                            if ((pOVar3->klass->_0).element_class !=
                                                (TypeInfo__System__Single->_0).element_class)
                                            goto code_?;
                                            pfVar4 = (float *)func_?();
                                            (this_00->fields).projectilesPerShot = *pfVar4;
                                            pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                                     CustomGunData_DefaultValue
                                                               (StringLiteral_ChargeEnabled,
                                                                (MethodInfo *)0x0);
                                            if (pOVar3 != (Object *)0x0) {
                                              if ((pOVar3->klass->_0).element_class !=
                                                  (TypeInfo__System__Boolean->_0).element_class)
                                              goto code_?;
                                              pbVar9 = (bool *)func_?();
                                              (this_00->fields).chargeEnabled = *pbVar9;
                                              pOVar3 = WorldObjectTypes::CustomGun::CustomGunData::
                                                       CustomGunData_DefaultValue
                                                                 (StringLiteral_ChargeTime,
                                                                  (MethodInfo *)0x0);
                                              if (pOVar3 != (Object *)0x0) {
                                                if ((pOVar3->klass->_0).element_class !=
                                                    (TypeInfo__System__Single->_0).element_class)
                                                goto code_?;
                                                pfVar4 = (float *)func_?();
                                                (this_00->fields).chargeTime = *pfVar4;
                                                pOVar3 = WorldObjectTypes::CustomGun::CustomGunData
                                                         ::CustomGunData_DefaultValue
                                                                   (StringLiteral_ChargeSoundEffect,
                                                                    (MethodInfo *)0x0);
                                                if (pOVar3 != (Object *)0x0) {
                                                  if ((pOVar3->klass->_0).element_class !=
                                                      (TypeInfo__System__Int32->_0).element_class)
                                                  goto code_?;
                                                  piVar5 = (int32_t *)func_?();
                                                  (this_00->fields).chargeSoundEffect = *piVar5;
                                                  pOVar3 = WorldObjectTypes::CustomGun::
                                                           CustomGunData::CustomGunData_DefaultValue
                                                                     (
                                                  StringLiteral_ChargeSoundEffectVolume,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    pfVar4 = (float *)func_?();
                                                    (this_00->fields).chargeSoundEffectVolume =
                                                         *pfVar4;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (
                                                  StringLiteral_ChargeParticlesEnabled,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar9 = (bool *)func_?();
                                                    (this_00->fields).chargeParticlesEnabled =
                                                         *pbVar9;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (
                                                  StringLiteral_ChargeParticlesSize,
                                                  (MethodInfo *)0x0);
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    pfVar4 = (float *)func_?();
                                                    (this_00->fields).chargeParticlesSize = *pfVar4;
                                                    pCVar10 = WorldObjectTypes::CustomGun::
                                                              CustomGunData::
                                                              CustomGunData_DefaultColor
                                                                        ((Color *)&stack0xffffffec,
                                                                                                                                                  
                                                  StringLiteral_ChargeParticlesColor,
                                                  (MethodInfo *)0x0);
                                                  fVar8 = pCVar10->g;
                                                  fVar7 = pCVar10->b;
                                                  fVar11 = pCVar10->a;
                                                  (this_00->fields).chargeParticlesColor.r =
                                                       pCVar10->r;
                                                  (this_00->fields).chargeParticlesColor.g = fVar8;
                                                  (this_00->fields).chargeParticlesColor.b = fVar7;
                                                  (this_00->fields).chargeParticlesColor.a = fVar11;
                                                  pOVar3 = WorldObjectTypes::CustomGun::
                                                           CustomGunData::CustomGunData_DefaultValue
                                                                     (
                                                  StringLiteral_ChargeZoomEnabled,(MethodInfo *)0x0)
                                                  ;
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar9 = (bool *)func_?();
                                                    (this_00->fields).chargeZoomEnabled = *pbVar9;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (
                                                  StringLiteral_ChargeZoomAmmount,(MethodInfo *)0x0)
                                                  ;
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    pfVar4 = (float *)func_?();
                                                    (this_00->fields).chargeZoomAmmount = *pfVar4;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (StringLiteral_ChargeZoomTime
                                                                        ,(MethodInfo *)0x0);
                                                    if (pOVar3 != (Object *)0x0) {
                                                      if ((pOVar3->klass->_0).element_class !=
                                                          (TypeInfo__System__Single->_0).
                                                          element_class) goto code_?;
                                                      pfVar4 = (float *)func_?();
                                                      (this_00->fields).chargeZoomTime = *pfVar4;
                                                      pOVar3 = WorldObjectTypes::CustomGun::
                                                               CustomGunData::
                                                               CustomGunData_DefaultValue
                                                                         (StringLiteral_Range,
                                                                          (MethodInfo *)0x0);
                                                      if (pOVar3 != (Object *)0x0) {
                                                        if ((pOVar3->klass->_0).element_class !=
                                                            (TypeInfo__System__Single->_0).
                                                            element_class) goto code_?;
                                                        pfVar4 = (float *)func_?();
                                                        (this_00->fields)._.range = *pfVar4;
                                                        pOVar3 = WorldObjectTypes::CustomGun::
                                                                 CustomGunData::
                                                                 CustomGunData_DefaultValue
                                                                           (
                                                  StringLiteral_ProjectileSpeed,(MethodInfo *)0x0);
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    pfVar4 = (float *)func_?();
                                                    (this_00->fields).projectileSpeed = *pfVar4;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (StringLiteral_ProjectileSize
                                                                        ,(MethodInfo *)0x0);
                                                    if (pOVar3 != (Object *)0x0) {
                                                      if ((pOVar3->klass->_0).element_class !=
                                                          (TypeInfo__System__Single->_0).
                                                          element_class) goto code_?;
                                                      pfVar4 = (float *)func_?();
                                                      (this_00->fields).projectileSize = *pfVar4;
                                                      pCVar10 = WorldObjectTypes::CustomGun::
                                                                CustomGunData::
                                                                CustomGunData_DefaultColor
                                                                          ((Color *)&stack0xffffffec
                                                                           ,
                                                  StringLiteral_ProjectileColor,(MethodInfo *)0x0);
                                                  fVar8 = pCVar10->g;
                                                  fVar7 = pCVar10->b;
                                                  fVar11 = pCVar10->a;
                                                  (this_00->fields).projectileColor.r = pCVar10->r;
                                                  (this_00->fields).projectileColor.g = fVar8;
                                                  (this_00->fields).projectileColor.b = fVar7;
                                                  (this_00->fields).projectileColor.a = fVar11;
                                                  pCVar10 = WorldObjectTypes::CustomGun::
                                                            CustomGunData::
                                                            CustomGunData_DefaultColor
                                                                      ((Color *)&stack0xffffffec,
                                                                                                                                              
                                                  StringLiteral_ProjectileTrailColor,
                                                  (MethodInfo *)0x0);
                                                  fVar8 = pCVar10->g;
                                                  fVar7 = pCVar10->b;
                                                  fVar11 = pCVar10->a;
                                                  (this_00->fields).projectileTrailColor.r =
                                                       pCVar10->r;
                                                  (this_00->fields).projectileTrailColor.g = fVar8;
                                                  (this_00->fields).projectileTrailColor.b = fVar7;
                                                  (this_00->fields).projectileTrailColor.a = fVar11;
                                                  pOVar3 = WorldObjectTypes::CustomGun::
                                                           CustomGunData::CustomGunData_DefaultValue
                                                                     (StringLiteral_SparksOnHit,
                                                                      (MethodInfo *)0x0);
                                                  if (pOVar3 != (Object *)0x0) {
                                                    if ((pOVar3->klass->_0).element_class !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar9 = (bool *)func_?();
                                                    (this_00->fields).sparksOnHit = *pbVar9;
                                                    pOVar3 = WorldObjectTypes::CustomGun::
                                                             CustomGunData::
                                                             CustomGunData_DefaultValue
                                                                       (StringLiteral_SparksSize,
                                                                        (MethodInfo *)0x0);
                                                    if (pOVar3 != (Object *)0x0) {
                                                      if ((pOVar3->klass->_0).element_class ==
                                                          (TypeInfo__System__Single->_0).
                                                          element_class) {
                                                        pfVar4 = (float *)func_?();
                                                        (this_00->fields).sparksSize = *pfVar4;
                                                        pCVar10 = WorldObjectTypes::CustomGun::
                                                                  CustomGunData::
                                                                  CustomGunData_DefaultColor
                                                                            ((Color *)&
                                                  stack0xffffffec,StringLiteral_SparksColor,
                                                  (MethodInfo *)0x0);
                                                  fVar8 = pCVar10->g;
                                                  fVar7 = pCVar10->b;
                                                  fVar11 = pCVar10->a;
                                                  (this_00->fields).sparksColor.r = pCVar10->r;
                                                  (this_00->fields).sparksColor.g = fVar8;
                                                  (this_00->fields).sparksColor.b = fVar7;
                                                  (this_00->fields).sparksColor.a = fVar11;
                                                  return (
                                                  PickupItemEditable_EditableItemConfiguration *)
                                                  this_00;
                                                  }
                                                  goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pPVar13 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar12)();
  return pPVar13;
}


/* Vector3 HandleBulletGenerationOnFire(Boolean) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
          PickupItemCustomGun_HandleBulletGenerationOnFire
                    (Vector3 *__return_storage_ptr__,PickupItemCustomGun *this,bool isLocal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&
                    MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun__OnLocalHit_VoxelHit__UnityEngine__Ray_
                   );
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fVar2 = fStack_1;
  fStack_1 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  uStack_6 = 0;
  pMVar7 = (this->fields)._._._.owner;
  this_00 = this;
  if (pMVar7 != (MVPickupOwner *)0x0) {
    pVVar8 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_9,pMVar7,(MethodInfo *)0x0);
    uStack_10._0_4_ = pVVar8->x;
    uStack_10._4_4_ = pVVar8->y;
    unaff_EDI = (PickupItemCustomGun__Class *)pVVar8->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    forward.z = (float)unaff_EDI;
    forward.x = (float)(undefined4)uStack_10;
    forward.y = (float)uStack_10._4_4_;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                        (&QStack_12,forward,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                         (MethodInfo *)0x0);
    VStack_13.x = pQVar11->x;
    VStack_13.y = pQVar11->y;
    VStack_13.z = pQVar11->z;
    fStack_14 = pQVar11->w;
    pPVar15 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    fVar2 = fStack_1;
    if (pPVar15 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      uStack_16._0_4_ = (pPVar15->fields).muzzleDirection.x;
      uStack_16._4_4_ = (pPVar15->fields).muzzleDirection.y;
      fStack_17 = (pPVar15->fields).muzzleDirection.z;
      fStack_18 = fStack_17 * _UNK_?;
      euler.y = uStack_16._4_4_ * _UNK_?;
      euler.x = (float)uStack_16 * _UNK_?;
      euler.z = fStack_18;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad(&QStack_12,euler,(MethodInfo *)0x0);
      VStack_19.x = pQVar11->x;
      VStack_19.y = pQVar11->y;
      VStack_19.z = pQVar11->z;
      fStack_20 = pQVar11->w;
      fStack_21 = (fStack_20 * VStack_13.x + VStack_19.x * fStack_14 + VStack_19.z * VStack_13.y) -
                  VStack_19.y * VStack_13.z;
      fStack_22 = (VStack_13.y * fStack_20 + VStack_19.y * fStack_14 + VStack_13.z * pQVar11->x) -
                  VStack_19.z * VStack_13.x;
      fStack_23 = (VStack_13.z * fStack_20 + VStack_19.z * fStack_14 + VStack_19.y * VStack_13.x) -
                  VStack_13.y * pQVar11->x;
      fStack_24 = ((fStack_20 * fStack_14 - VStack_13.x * VStack_19.x) - VStack_19.y * VStack_13.y)
                  - VStack_13.z * VStack_19.z;
      fStack_25 = fStack_21;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      rotation_00.y = fStack_22;
      rotation_00.x = fStack_21;
      rotation_00.z = fStack_23;
      rotation_00.w = fStack_24;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_9,rotation_00,
                           TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                           (MethodInfo *)0x0);
      uStack_26._0_4_ = pVVar8->x;
      uStack_26._4_4_ = pVVar8->y;
      fStack_27 = pVVar8->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_01.y = fStack_22;
      rotation_01.x = fStack_21;
      rotation_01.z = fStack_23;
      rotation_01.w = fStack_24;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_9,rotation_01,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      uStack_28._0_4_ = pVVar8->x;
      uStack_28._4_4_ = pVVar8->y;
      fStack_29 = pVVar8->z;
      if (cRam_? == '\0') {
        VStack_30.y = (float)&TypeInfo__UnityEngine__Vector3;
        VStack_30.x = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      fStack_25 = 0.0;
      pVVar31 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_16._0_4_ = (pVVar31->zeroVector).x;
      uStack_16._4_4_ = (pVVar31->zeroVector).y;
      fStack_17 = (pVVar31->zeroVector).z;
      while( true ) {
        if (cRam_? == '\0') {
          VStack_30.y = (float)&
                                TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
          ;
          VStack_30.x = (float)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        unaff_EDI = (PickupItemCustomGun__Class *)(this->fields)._._Configuration_k__BackingField;
        this_00 = this;
        fVar2 = fStack_1;
        if (unaff_EDI == (PickupItemCustomGun__Class *)0x0) break;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((((Delegate__Class *)(unaff_EDI->_0).image)->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((((Delegate__Class *)(unaff_EDI->_0).image)->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        if ((float)(unaff_EDI->_1).actualSize <= (float)(int)fStack_25) {
          if (cRam_? == '\0') {
            func_?(&
                            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                           );
            cRam_? = '\x01';
          }
          this_00 = (PickupItemCustomGun *)(this->fields)._._Configuration_k__BackingField;
          fVar2 = fStack_1;
          if (this_00 != (PickupItemCustomGun *)0x0) {
            unaff_EDI = this_00->klass;
            pPVar32 = 
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
            if (((TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->
                 _1).naturalAligment <= (unaff_EDI->_1).naturalAligment) &&
               ((unaff_EDI->_1).typeHierarchy
                [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->
                 _1).naturalAligment - 1] ==
                (Il2CppClass *)
                TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration)) {
              fVar2 = (this_00->fields)._._.crossHairCannotFireHigh.a;
              __return_storage_ptr__->x = (float)uStack_16 / fVar2;
              __return_storage_ptr__->y = uStack_16._4_4_ / fVar2;
              __return_storage_ptr__->z = fStack_17 / fVar2;
              return __return_storage_ptr__;
            }
            goto code_?;
          }
          break;
        }
        fStack_33 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                              (-1.0,1.0,(MethodInfo *)0x0);
        pPStack_34 = (PickupItemCustomGun__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                               (-1.0,1.0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation.y = fStack_22;
        rotation.x = fStack_21;
        rotation.z = fStack_23;
        rotation.w = fStack_24;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            (&VStack_30,rotation,
                             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                             (MethodInfo *)0x0);
        uStack_35._0_4_ = pVVar8->x;
        uStack_35._4_4_ = pVVar8->y;
        fStack_36 = pVVar8->z;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                         );
          cRam_? = '\x01';
        }
        unaff_EDI = (PickupItemCustomGun__Class *)(this->fields)._._Configuration_k__BackingField;
        fVar2 = fStack_1;
        if (unaff_EDI == (PickupItemCustomGun__Class *)0x0) break;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((((Delegate__Class *)(unaff_EDI->_0).image)->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((((Delegate__Class *)(unaff_EDI->_0).image)->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        fStack_33 = fStack_33 * (float)(unaff_EDI->_0).parent;
        fStack_37 = fStack_33 * (float)uStack_26 + (float)uStack_35;
        fStack_38 = fStack_33 * uStack_26._4_4_ + uStack_35._4_4_;
        fStack_33 = fStack_33 * fStack_27 + fStack_36;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                         );
          cRam_? = '\x01';
        }
        unaff_EDI = (PickupItemCustomGun__Class *)(this->fields)._._Configuration_k__BackingField;
        fVar2 = fStack_1;
        if (unaff_EDI == (PickupItemCustomGun__Class *)0x0) break;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((((Delegate__Class *)(unaff_EDI->_0).image)->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((((Delegate__Class *)(unaff_EDI->_0).image)->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        fVar39 = (float)pPStack_34 * (float)(unaff_EDI->_0).parent;
        fStack_40 = fStack_37 + fVar39 * (float)uStack_28;
        fStack_41 = fStack_38 + fVar39 * uStack_28._4_4_;
        fStack_42 = fStack_33 + fVar39 * fStack_29;
        fStack_17 = fStack_42 + fStack_17;
        pTVar43 = (this->fields).staticMuzzlePoint;
        uStack_16 = CONCAT44(fStack_41 + uStack_16._4_4_,fStack_40 + (float)uStack_16);
        fStack_37 = fStack_40;
        fStack_38 = fStack_41;
        fStack_33 = fStack_42;
        if (pTVar43 == (Transform *)0x0) break;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xfffffec8,pTVar43,(MethodInfo *)0x0);
        pPStack_34 = (PickupItemCustomGun__Class *)pVVar8->z;
        pTVar43 = (this->fields)._.weaponHandle;
        fVar2 = fStack_1;
        if (pTVar43 == (Transform *)0x0) break;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xfffffeb8,pTVar43,(MethodInfo *)0x0);
        pPStack_44 = (PickupItemEditable_EditableItemConfiguration__Class *)pVVar8->z;
        pTVar43 = (this->fields).staticMuzzlePoint;
        fVar2 = fStack_1;
        if (pTVar43 == (Transform *)0x0) break;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_19,pTVar43,(MethodInfo *)0x0);
        unaff_EDI = (PickupItemCustomGun__Class *)
                    Bullet::Bullet_CreateBullet
                              (PoolEnums__Enum_CustomGunBullet,*pVVar8,
                               (float)pPStack_34 - (float)pPStack_44,(MethodInfo *)0x0);
        pPStack_34 = unaff_EDI;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar45 = (this->fields)._._Configuration_k__BackingField;
        uStack_10 = CONCAT44(pPVar45,(undefined4)uStack_10);
        fVar2 = fStack_1;
        if (pPVar45 == (PickupItemEditable_EditableItemConfiguration *)0x0) break;
        pPStack_44 = pPVar45->klass;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((pPStack_44->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((pPStack_44->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        pPVar45 = (this->fields)._._Configuration_k__BackingField;
        QStack_12.x = (float)pPVar45[3].monitor;
        QStack_12.y = (float)pPVar45[3].fields.name;
        QStack_12.z = (float)pPVar45[3].fields.cubeModelId;
        QStack_12.w = pPVar45[3].fields.maxAmmo;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                         );
          cRam_? = '\x01';
        }
        pPVar45 = (this->fields)._._Configuration_k__BackingField;
        uStack_10 = CONCAT44(pPVar45,(undefined4)uStack_10);
        fVar2 = fStack_1;
        if (pPVar45 == (PickupItemEditable_EditableItemConfiguration *)0x0) break;
        pPStack_44 = pPVar45->klass;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((pPStack_44->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((pPStack_44->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        pPVar45 = (this->fields)._._Configuration_k__BackingField;
        fVar39 = pPVar45[3].fields.damage;
        fVar46 = pPVar45[3].fields.impulseStrength;
        fVar47 = pPVar45[3].fields.recoilStrength;
        fVar48 = pPVar45[3].fields.fireAnimationTime;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                         );
          cRam_? = '\x01';
        }
        pPVar45 = (this->fields)._._Configuration_k__BackingField;
        uStack_10 = CONCAT44(pPVar45,(undefined4)uStack_10);
        fVar2 = fStack_1;
        if (pPVar45 == (PickupItemEditable_EditableItemConfiguration *)0x0) break;
        pPStack_44 = pPVar45->klass;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((pPStack_44->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((pPStack_44->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        pPStack_44 = (PickupItemEditable_EditableItemConfiguration__Class *)
                     (this->fields)._._Configuration_k__BackingField[2].fields.hitSoundEffectVolume;
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                         );
          cRam_? = '\x01';
        }
        this_00 = (PickupItemCustomGun *)(this->fields)._._Configuration_k__BackingField;
        fVar2 = fStack_1;
        if (this_00 == (PickupItemCustomGun *)0x0) break;
        pPVar32 = TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration;
        if (((this_00->klass->_1).naturalAligment <
             (TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment) ||
           ((this_00->klass->_1).typeHierarchy
            [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
             naturalAligment - 1] !=
            (Il2CppClass *)
            TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration))
        goto code_?;
        if (unaff_EDI == (PickupItemCustomGun__Class *)0x0) break;
        bulletColor.g = QStack_12.y;
        bulletColor.r = QStack_12.x;
        bulletColor.b = QStack_12.z;
        bulletColor.a = QStack_12.w;
        trailColor.g = fVar46;
        trailColor.r = fVar39;
        trailColor.b = fVar47;
        trailColor.a = fVar48;
        Bullet::Bullet_SetBulletTrail
                  ((Bullet *)unaff_EDI,bulletColor,trailColor,(float)pPStack_44,
                   (float)(this_00->fields)._.cubeModelParent,(MethodInfo *)0x0);
        a = (PickupItemCustomGun__Class *)(unaff_EDI->_0).byval_arg.data.typeHandle;
        this_00 = (PickupItemCustomGun *)func_?(TypeInfo__Bullet__OnHitDelegate);
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  ((BulletThrowingStar_OnHitDelegate *)this_00,(Object *)this,
                   (this->klass->vtable).PlayFireSoundEffect.methodPtr,(MethodInfo *)0x0);
        VStack_30.z = (float)&UNK_?;
        pDVar49 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        unaff_EDI = pPStack_34;
        if (pDVar49 == (Delegate *)0x0) {
          (pPStack_34->_0).byval_arg.data.dummy = (Object *)0x0;
        }
        else {
          pDVar50 = (Delegate *)0x0;
          if ((Bullet_OnHitDelegate__Class *)pDVar49->klass == TypeInfo__Bullet__OnHitDelegate) {
            pDVar50 = pDVar49;
          }
          if (pDVar50 == (Delegate *)0x0) goto code_?;
          (pPStack_34->_0).byval_arg.data.dummy = pDVar50;
          pDVar50 = (Delegate *)0x0;
          if ((Bullet_OnHitDelegate__Class *)pDVar49->klass == TypeInfo__Bullet__OnHitDelegate) {
            pDVar50 = pDVar49;
          }
          a = pPStack_34;
          if (pDVar50 == (Delegate *)0x0) goto code_?;
        }
        func_?();
        if (isLocal != 0) {
          a = *(PickupItemCustomGun__Class **)&(unaff_EDI->_0).byval_arg.attrs;
          this_00 = (PickupItemCustomGun *)func_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    ((BulletThrowingStar_OnHitDelegate *)this_00,(Object *)this,
                     MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun__OnLocalHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          pDVar49 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
          unaff_EDI = pPStack_34;
          if (pDVar49 == (Delegate *)0x0) {
            *(void **)&(pPStack_34->_0).byval_arg.attrs = (void *)0x0;
          }
          else {
            pDVar50 = (Delegate *)0x0;
            if ((Bullet_OnHitDelegate__Class *)pDVar49->klass == TypeInfo__Bullet__OnHitDelegate) {
              pDVar50 = pDVar49;
            }
            if (pDVar50 == (Delegate *)0x0) goto code_?;
            *(Delegate **)&(pPStack_34->_0).byval_arg.attrs = pDVar50;
            pDVar50 = (Delegate *)0x0;
            if ((Bullet_OnHitDelegate__Class *)pDVar49->klass == TypeInfo__Bullet__OnHitDelegate) {
              pDVar50 = pDVar49;
            }
            a = pPStack_34;
            if (pDVar50 == (Delegate *)0x0) goto code_?;
          }
          func_?();
        }
        pMVar7 = (this->fields)._._._.owner;
        this_00 = this;
        fVar2 = fStack_1;
        if (pMVar7 == (MVPickupOwner *)0x0) break;
        uVar51 = (pMVar7->fields).lookOrigin.x;
        uVar52 = (pMVar7->fields).lookOrigin.y;
        func_?(&fStack_1,uVar51,uVar52,(pMVar7->fields).lookOrigin.z,fStack_40,fStack_41,
                        fStack_42,0);
        pPVar15 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        fVar2 = fStack_1;
        if (pPVar15 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) break;
        if ((pPVar15->fields).thirdPersonCamera != 0) {
          pTVar43 = (this->fields)._.weaponHandle;
          if (pTVar43 == (Transform *)0x0) break;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_13,pTVar43,(MethodInfo *)0x0);
          uStack_53._0_4_ = pVVar8->x;
          uStack_53._4_4_ = pVVar8->y;
          fStack_54 = pVVar8->z;
          pMVar7 = (this->fields)._._._.owner;
          fVar2 = fStack_1;
          if (pMVar7 == (MVPickupOwner *)0x0) break;
          uStack_55._0_4_ = (pMVar7->fields).lookOrigin.x;
          uStack_55._4_4_ = (pMVar7->fields).lookOrigin.y;
          fStack_18 = (pMVar7->fields).lookOrigin.z;
          fVar2 = fStack_37 * ((float)(undefined4)uStack_53 - (float)(undefined4)uStack_55) +
                   fStack_38 * ((float)uStack_53._4_4_ - (float)uStack_55._4_4_) +
                   fStack_33 * (fStack_54 - fStack_18);
          fStack_4 = fVar2 * fStack_33 + fStack_4;
          fStack_1 = fVar2 * fStack_37 + fStack_1;
          fStack_3 = fVar2 * fStack_38 + fStack_3;
          VStack_9.z = fStack_4;
        }
        pPStack_44 = (PickupItemEditable_EditableItemConfiguration__Class *)
                     (this->fields)._._._.owner;
        pPVar15 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        fVar2 = fStack_1;
        if ((pPVar15 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
           (pPStack_44 == (PickupItemEditable_EditableItemConfiguration__Class *)0x0)) break;
        fStack_38 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              ((MVPickupOwner *)pPStack_44,(pPVar15->fields).projectileSpeed,
                               (MethodInfo *)0x0);
        pPVar15 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        fVar2 = fStack_1;
        if (pPVar15 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) break;
        fStack_33 = (pPVar15->fields)._.range;
        pMVar7 = (this->fields)._._._.owner;
        if (pMVar7 == (MVPickupOwner *)0x0) break;
        pPStack_44 = (PickupItemEditable_EditableItemConfiguration__Class *)
                     func_?(7,pMVar7);
        pPVar15 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        fVar2 = fStack_1;
        if (pPVar15 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) break;
        lineOfFire.m_Origin.y = fStack_3;
        lineOfFire.m_Origin.x = fStack_1;
        lineOfFire.m_Origin.z = fStack_4;
        lineOfFire.m_Direction.x = (float)uStack_5;
        lineOfFire.m_Direction.y = (float)(int)uStack_6;
        lineOfFire.m_Direction.z = (float)((ulonglong)uStack_6 >> 0x20);
        Bullet::Bullet_Fire((Bullet *)unaff_EDI,fStack_38,fStack_33,lineOfFire,
                            (HashSet_1_System_Int32_ *)pPStack_44,
                            (pPVar15->fields).thirdPersonCamera,(MethodInfo *)0x0);
        fStack_25 = (float)((int)fStack_25 + 1);
      }
    }
  }
  fStack_1 = fVar2;
  func_?();
  a = unaff_EDI;
code_?:
  func_?();
code_?:
  func_?();
  pPVar32 = extraout_EDX;
  unaff_EDI = a;
code_?:
  func_?(this_00,pPVar32);
  pPVar32 = extraout_EDX_00;
code_?:
  func_?(uStack_10._4_4_,pPVar32);
  pPVar32 = extraout_EDX_01;
code_?:
  func_?(unaff_EDI,pPVar32);
  pcVar56 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar56)();
  return pVVar8;
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
    (*(code *)(this->klass->vtable).PlayFireSoundEffect.method)
              (this,_isLocal,(this->klass->vtable).InterruptFire.methodPtr);
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar2->fields).smokeOnFire != 0) {
        pPVar3 = (this->fields).smokeParticles;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar3,(MethodInfo *)0x0);
      }
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((pPVar2->fields).muzzleFlareOnFire != 0) {
          pPVar3 = (this->fields).flareParticles;
          if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_minigun);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    iVar2 = (pPVar1->fields).fireMode;
    if (iVar2 == 0) {
      AVar3 = (ACTkByte4)(this->fields).currentAmmo.currentCryptoKey;
      pBVar4 = (Byte__Array *)(this->fields).currentAmmo.hiddenValue;
      fVar5 = (float)(this->fields).currentAmmo.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      input_01.hiddenValue = (int32_t)pBVar4;
      input_01.currentCryptoKey._0_1_ = AVar3.b1;
      input_01.currentCryptoKey._1_1_ = AVar3.b2;
      input_01.currentCryptoKey._2_1_ = AVar3.b3;
      input_01.currentCryptoKey._3_1_ = AVar3.b4;
      input_01.fakeValue = (int32_t)fVar5;
      input_01.inited = (this->fields).currentAmmo.inited;
      input_01._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Decrement((ObscuredInt *)&stack0xffffffe8,input_01,(MethodInfo *)0x0);
      iVar7 = pOVar6->currentCryptoKey;
      iVar8 = pOVar6->hiddenValue;
      iVar9 = pOVar6->fakeValue;
      bVar10 = pOVar6->inited;
      uVar11 = *(undefined3 *)&pOVar6->field_0xd;
      (this->fields)._._.isFiring = 0;
      (this->fields).currentAmmo.currentCryptoKey = iVar7;
      (this->fields).currentAmmo.hiddenValue = iVar8;
      (this->fields).currentAmmo.fakeValue = iVar9;
      (this->fields).currentAmmo.inited = bVar10;
      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar11;
      return;
    }
    if (iVar2 == 1) {
      AVar3 = (ACTkByte4)(this->fields).currentAmmo.currentCryptoKey;
      pBVar4 = (Byte__Array *)(this->fields).currentAmmo.hiddenValue;
      fVar5 = (float)(this->fields).currentAmmo.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      input_00.hiddenValue = (int32_t)pBVar4;
      input_00.currentCryptoKey._0_1_ = AVar3.b1;
      input_00.currentCryptoKey._1_1_ = AVar3.b2;
      input_00.currentCryptoKey._2_1_ = AVar3.b3;
      input_00.currentCryptoKey._3_1_ = AVar3.b4;
      input_00.fakeValue = (int32_t)fVar5;
      input_00.inited = (this->fields).currentAmmo.inited;
      input_00._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Decrement((ObscuredInt *)&stack0xffffffe8,input_00,(MethodInfo *)0x0);
      iVar7 = pOVar6->hiddenValue;
      iVar8 = pOVar6->fakeValue;
      bVar10 = pOVar6->inited;
      uVar11 = *(undefined3 *)&pOVar6->field_0xd;
      (this->fields).currentAmmo.currentCryptoKey = pOVar6->currentCryptoKey;
      (this->fields).currentAmmo.hiddenValue = iVar7;
      (this->fields).currentAmmo.fakeValue = iVar8;
      (this->fields).currentAmmo.inited = bVar10;
      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar11;
      return;
    }
    if (iVar2 == 2) {
      AVar3 = (ACTkByte4)(this->fields).firedInBurst.currentCryptoKey;
      pBVar4 = (Byte__Array *)(this->fields).firedInBurst.hiddenValue;
      fVar5 = (float)(this->fields).firedInBurst.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value_00.hiddenValue = (int32_t)pBVar4;
      value_00.currentCryptoKey._0_1_ = AVar3.b1;
      value_00.currentCryptoKey._1_1_ = AVar3.b2;
      value_00.currentCryptoKey._2_1_ = AVar3.b3;
      value_00.currentCryptoKey._3_1_ = AVar3.b4;
      value_00.fakeValue = (int32_t)fVar5;
      value_00.inited = (this->fields).firedInBurst.inited;
      value_00._13_3_ = *(undefined3 *)&(this->fields).firedInBurst.field_0xd;
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
      AVar3 = (ACTkByte4)(this->fields).currentAmmo.currentCryptoKey;
      pBVar4 = (Byte__Array *)(this->fields).currentAmmo.hiddenValue;
      fVar5 = (float)(this->fields).currentAmmo.fakeValue;
      puVar12 = *(undefined **)&(this->fields).currentAmmo.inited;
      if (iVar7 == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
          puVar12 = &UNK_?;
        }
        value.hiddenValue = (int32_t)pBVar4;
        value.currentCryptoKey._0_1_ = AVar3.b1;
        value.currentCryptoKey._1_1_ = AVar3.b2;
        value.currentCryptoKey._2_1_ = AVar3.b3;
        value.currentCryptoKey._3_1_ = AVar3.b4;
        value.fakeValue = (int32_t)fVar5;
        value._12_4_ = puVar12;
        iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit
                           ((ObscuredInt *)&stack0xffffffe8,iVar7 + -1,(MethodInfo *)0x0);
        AVar3 = (ACTkByte4)pOVar6->currentCryptoKey;
        pBVar4 = (Byte__Array *)pOVar6->hiddenValue;
        fVar5 = (float)pOVar6->fakeValue;
        puVar12 = *(undefined **)&pOVar6->inited;
      }
      (this->fields).currentAmmo.currentCryptoKey = (int32_t)AVar3;
      (this->fields).currentAmmo.hiddenValue = (int32_t)pBVar4;
      (this->fields).currentAmmo.fakeValue = (int32_t)fVar5;
      *(undefined **)&(this->fields).currentAmmo.inited = puVar12;
      AVar3 = (ACTkByte4)(this->fields).firedInBurst.currentCryptoKey;
      pBVar4 = (Byte__Array *)(this->fields).firedInBurst.hiddenValue;
      fVar5 = (float)(this->fields).firedInBurst.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      input.hiddenValue = (int32_t)pBVar4;
      input.currentCryptoKey._0_1_ = AVar3.b1;
      input.currentCryptoKey._1_1_ = AVar3.b2;
      input.currentCryptoKey._2_1_ = AVar3.b3;
      input.currentCryptoKey._3_1_ = AVar3.b4;
      input.fakeValue = (int32_t)fVar5;
      input.inited = (this->fields).firedInBurst.inited;
      input._13_3_ = *(undefined3 *)&(this->fields).firedInBurst.field_0xd;
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Increment((ObscuredInt *)&stack0xffffffe8,input,(MethodInfo *)0x0);
      iVar7 = pOVar6->hiddenValue;
      iVar8 = pOVar6->fakeValue;
      bVar10 = pOVar6->inited;
      uVar11 = *(undefined3 *)&pOVar6->field_0xd;
      (this->fields).firedInBurst.currentCryptoKey = pOVar6->currentCryptoKey;
      (this->fields).firedInBurst.hiddenValue = iVar7;
      (this->fields).firedInBurst.fakeValue = iVar8;
      (this->fields).firedInBurst.inited = bVar10;
      *(undefined3 *)&(this->fields).firedInBurst.field_0xd = uVar11;
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar5 = (pPVar1->fields).shotsPerBurst;
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1((this->fields).firedInBurst,(MethodInfo *)0x0);
      iVar2 = (int)fVar5 - iVar7;
      (this->fields)._._.isFiring = 0 < iVar2;
      if (iVar2 < 1) {
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        fVar5 = (pPVar1->fields)._.attackCooldown;
      }
      else {
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
        fVar5 = (pPVar1->fields).burstCooldownBetweenShots;
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar5,(MethodInfo *)0x0)
      ;
      AVar3 = pOVar13->hiddenValue;
      pBVar4 = pOVar13->hiddenValueOld;
      fVar5 = pOVar13->fakeValue;
      bVar10 = pOVar13->inited;
      uVar11 = *(undefined3 *)&pOVar13->field_0x11;
      (this->fields)._._.fireInterval.currentCryptoKey = pOVar13->currentCryptoKey;
      (this->fields)._._.fireInterval.hiddenValue = AVar3;
      (this->fields)._._.fireInterval.hiddenValueOld = pBVar4;
      (this->fields)._._.fireInterval.fakeValue = fVar5;
      (this->fields)._._.fireInterval.inited = bVar10;
      *(undefined3 *)&(this->fields)._._.fireInterval.field_0x11 = uVar11;
      func_?(&(this->fields)._._.fireInterval.hiddenValueOld);
      if ((this->fields)._._.isFiring == 0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffe8,0,(MethodInfo *)0x0);
        iVar7 = pOVar6->currentCryptoKey;
        iVar8 = pOVar6->hiddenValue;
        iVar9 = pOVar6->fakeValue;
        uVar14 = *(undefined4 *)&pOVar6->inited;
      }
      else {
        iVar7 = (this->fields).firedInBurst.currentCryptoKey;
        iVar8 = (this->fields).firedInBurst.hiddenValue;
        iVar9 = (this->fields).firedInBurst.fakeValue;
        uVar14 = *(undefined4 *)&(this->fields).firedInBurst.inited;
      }
      (this->fields).firedInBurst.currentCryptoKey = iVar7;
      (this->fields).firedInBurst.hiddenValue = iVar8;
      (this->fields).firedInBurst.fakeValue = iVar9;
      *(undefined4 *)&(this->fields).firedInBurst.inited = uVar14;
      if ((this->fields)._._.isFiring == 0) {
        a = (String *)(*(code *)(this->klass->vtable).get_FireSoundEffectName.method)();
        bVar10 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_minigun,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          this_00 = (this->fields)._.fireAudioSource;
          if (this_00 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (this_00,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleRecoil(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_HandleRecoil
               (PickupItemCustomGun *this,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    this_01 = (MVRigidBody *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this_00,
                         MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar2->fields)._.recoilStrength <= TypeInfo__UnityEngine__Mathf->static_fields->Epsilon)
      {
        return;
      }
      fVar3 = (float)((uint)direction.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar4 = (float)((uint)direction.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar5 = (float)((uint)direction.z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        fVar6 = (pPVar2->fields)._.recoilStrength;
        if (this_01 != (MVRigidBody *)0x0) {
          impulse.y = fVar4 * fVar6;
          impulse.x = fVar3 * fVar6;
          impulse.z = fVar5 * fVar6;
          MVRigidBody::MVRigidBody_AddImpulse_1(this_01,impulse,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_InterruptFire(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  PickupItemEditable::PickupItemEditable_InterruptFire((PickupItemEditable *)this,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields)._.fireAudioSource;
  (this->fields)._._.isFiring = 0;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
              (this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._._._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      pMVar2 = (pMVar1->fields)._.worldObjectParent;
      if ((((pMVar2 == (MVWorldObjectClient *)0x0) ||
           (pMVar3 = pMVar2->klass,
           (pMVar3->_1).naturalAligment < (TypeInfo__MVAvatar->_1).naturalAligment)) ||
          ((MVAvatar__Class *)
           (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] !=
           TypeInfo__MVAvatar)) ||
         (((pMVar3->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment ||
          ((MVAvatarLocal__Class *)
           (pMVar3->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
           TypeInfo__MVAvatarLocal)))) {
        return;
      }
      pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((float)(int)(pPVar4->fields).movementSpeedWhileHeld != _UNK_?) {
          this_01 = (AvatarMotor *)pMVar2[1].fields.name;
          if (this_01 == (AvatarMotor *)0x0) goto code_?;
          AvatarMotor::AvatarMotor_set_WalkSpeedBase(this_01,8.0,(MethodInfo *)0x0);
        }
        pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          if ((pPVar4->fields).chargeEnabled == 0) {
            return;
          }
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0)
          ;
          pIVar6 = (this->fields).chargeRoutine;
          uVar7 = *(undefined3 *)&pOVar5->field_0x1;
          iVar8 = pOVar5->hiddenValue;
          bVar9 = pOVar5->fakeValue;
          bVar10 = pOVar5->fakeValueChanged;
          bVar11 = pOVar5->inited;
          uVar12 = pOVar5->field_0xb;
          (this->fields).isCharging.currentCryptoKey = pOVar5->currentCryptoKey;
          *(undefined3 *)&(this->fields).isCharging.field_0x1 = uVar7;
          (this->fields).isCharging.hiddenValue = iVar8;
          (this->fields).isCharging.fakeValue = bVar9;
          (this->fields).isCharging.fakeValueChanged = bVar10;
          (this->fields).isCharging.inited = bVar11;
          (this->fields).isCharging.field_0xb = uVar12;
          if (pIVar6 != (IEnumerator *)0x0) {
            Coroutines::Coroutines_Stop((this->fields).chargeRoutine,(MethodInfo *)0x0);
            (this->fields).chargeRoutine = (IEnumerator *)0x0;
            func_?();
          }
          pPVar4 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar4 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            if ((pPVar4->fields).chargeZoomEnabled == 0) {
              return;
            }
            pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar13 != (MainCameraManager *)0x0) {
              this_02 = (pMVar13->fields).mainCamera;
              iVar8 = (this->fields).initialFOV.currentCryptoKey;
              AVar14 = (this->fields).initialFOV.hiddenValue;
              pBVar15 = (this->fields).initialFOV.hiddenValueOld;
              fVar16 = (this->fields).initialFOV.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              value.hiddenValue = AVar14;
              value.currentCryptoKey = iVar8;
              value.hiddenValueOld = pBVar15;
              value.fakeValue = fVar16;
              value.inited = (this->fields).initialFOV.inited;
              value._17_3_ = *(undefined3 *)&(this->fields).initialFOV.field_0x11;
              fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              if (this_02 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                          (this_02,fVar16,(MethodInfo *)0x0);
                fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1
                                   ((this->fields).initialMouseSensitivity,(MethodInfo *)0x0);
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  pMStack17 = TypeInfo__MVInputWrapper;
                  func_?();
                }
                pMStack17 = (MVInputWrapper__Class *)0x0;
                puStack18 = (undefined *)fVar16;
                func_?();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_IsSameItemData
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral__ERROR_);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_MuzzleFlareSize);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_ProjectileSize);
    func_?(&StringLiteral_SparksSize);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_ChargeSoundEffectVolume);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_ProjectilesPerShot);
    func_?(&StringLiteral_SmokeOnFire);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_ChargeTime);
    func_?(&StringLiteral_MovementSpeedWhileHeld);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_ChargeZoomTime);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_ChargeZoomAmmount);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ThirdPersonCamera);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_BurstCooldownBetweenShots);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_ChargeParticlesSize);
    func_?(&StringLiteral_ChargeParticlesColor);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_ProjectileSpeed);
    func_?(&StringLiteral_ShotsPerBurst);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_ChargeEnabled);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    a = (pPVar1->fields)._.name;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    b = (String *)
        Extensions::Extensions_GetValueOrDefault_3
                  (itemData,StringLiteral_Name,(Object *)StringLiteral__ERROR_,
                   System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                  );
    bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    VStack_3.z = (float)&UNK_?;
    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fVar4 = (pPVar1->fields)._.damage;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                         (itemData,StringLiteral_Damage,-1.0,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      if (fVar4 != fVar5) {
        return 0;
      }
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        fVar4 = (pPVar1->fields)._.maxAmmo;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                           (itemData,StringLiteral_MaxAmmo,-1.0,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
        if (fVar4 != fVar5) {
          return 0;
        }
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          fVar4 = (pPVar1->fields)._.impulseStrength;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                             (itemData,StringLiteral_ImpulseStrength,-1.0,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
          if (fVar4 != fVar5) {
            return 0;
          }
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            fVar4 = (pPVar1->fields)._.recoilStrength;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_RecoilStrength,-1.0,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (fVar4 != fVar5) {
              return 0;
            }
            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              fVar4 = (pPVar1->fields)._.fireAnimationTime;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_AttackAnimationTime,-1.0,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              if (fVar4 != fVar5) {
                return 0;
              }
              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                fVar4 = (pPVar1->fields)._.attackCooldown;
                if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Extensions);
                }
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_AttackCooldown,-1.0,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (fVar4 != fVar5) {
                  return 0;
                }
                pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  fVar4 = (pPVar1->fields)._.radius;
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_Radius,-1.0,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (fVar4 != fVar5) {
                    return 0;
                  }
                  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                    IVar6 = (pPVar1->fields)._.fireSoundEffect;
                    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Extensions);
                    }
                    IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                       (itemData,StringLiteral_FireSoundEffect,0xffffffff,
                                        int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                       );
                    if (IVar6 != IVar7) {
                      return 0;
                    }
                    pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                      fVar4 = (pPVar1->fields)._.fireSoundEffectVolume;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Extensions);
                      }
                      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                         (itemData,StringLiteral_FireSoundEffectVolume,-1.0,
                                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                         );
                      if (fVar4 != fVar5) {
                        return 0;
                      }
                      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                        IVar6 = (pPVar1->fields)._.hitSoundEffect;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                           (itemData,StringLiteral_HitSoundEffect,0xffffffff,
                                            int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                           );
                        if (IVar6 != IVar7) {
                          return 0;
                        }
                        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                          fVar4 = (pPVar1->fields)._.hitSoundEffectVolume;
                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Extensions);
                          }
                          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                             (itemData,StringLiteral_HitSoundEffectVolume,-1.0,
                                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                             );
                          if (fVar4 != fVar5) {
                            return 0;
                          }
                          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                            fVar4 = (pPVar1->fields).movementSpeedWhileHeld;
                            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__Extensions);
                            }
                            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                               (itemData,StringLiteral_MovementSpeedWhileHeld,-1.0,
                                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                               );
                            if (fVar4 != fVar5) {
                              return 0;
                            }
                            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                              IVar6 = (pPVar1->fields).fireMode;
                              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                                func_?(TypeInfo__Extensions);
                              }
                              IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                                 (itemData,StringLiteral_FireMode,0xffffffff,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                 );
                              if (IVar6 != IVar7) {
                                return 0;
                              }
                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                  (this,(MethodInfo *)0x0);
                              if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                uVar8 = (pPVar1->fields).muzzlePosition.x;
                                uVar9 = (pPVar1->fields).muzzlePosition.y;
                                fVar4 = (pPVar1->fields).muzzlePosition.z;
                                if (cRam_? == '\0') {
                                  func_?(&TypeInfo__UnityEngine__Vector3);
                                  cRam_? = '\x01';
                                }
                                VVar10 = TypeInfo__UnityEngine__Vector3->static_fields->
                                         negativeInfinityVector;
                                if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?(TypeInfo__Extensions);
                                }
                                pVVar11 = Extensions::Extensions_GetVector3OrDefault
                                                    (&VStack_3,itemData,
                                                     StringLiteral_MuzzlePosition,VVar10,
                                                     (MethodInfo *)0x0);
                                uVar12 = pVVar11->x;
                                uVar13 = pVVar11->y;
                                fVar4 = fVar4 - pVVar11->z;
                                if (_UNK_? <=
                                    ((float)uVar9 - (float)uVar13) * ((float)uVar9 - (float)uVar13) +
                                    ((float)uVar8 - (float)uVar12) * ((float)uVar8 - (float)uVar12) +
                                    fVar4 * fVar4) {
                                  return 0;
                                }
                                pPVar1 = PickupItemCustomGun_get_Configuration
                                                    (this,(MethodInfo *)0x0);
                                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                  uVar14 = (pPVar1->fields).muzzleDirection.x;
                                  uVar15 = (pPVar1->fields).muzzleDirection.y;
                                  fVar4 = (pPVar1->fields).muzzleDirection.z;
                                  if (cRam_? == '\0') {
                                    func_?(&TypeInfo__UnityEngine__Vector3);
                                    cRam_? = '\x01';
                                  }
                                  VVar10 = TypeInfo__UnityEngine__Vector3->static_fields->
                                           negativeInfinityVector;
                                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?(TypeInfo__Extensions);
                                  }
                                  pVVar11 = Extensions::Extensions_GetVector3OrDefault
                                                      (&VStack_3,itemData,
                                                       StringLiteral_MuzzleDirection,VVar10,
                                                       (MethodInfo *)0x0);
                                  uVar16 = pVVar11->x;
                                  uVar17 = pVVar11->y;
                                  fVar4 = fVar4 - pVVar11->z;
                                  if (_UNK_? <=
                                      ((float)uVar15 - (float)uVar17) * ((float)uVar15 - (float)uVar17)
                                      + ((float)uVar14 - (float)uVar16) *
                                        ((float)uVar14 - (float)uVar16) + fVar4 * fVar4) {
                                    return 0;
                                  }
                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                      (this,(MethodInfo *)0x0);
                                  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                  {
                                    bVar2 = (pPVar1->fields).muzzleFlareOnFire;
                                    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0)
                                    {
                                      func_?(TypeInfo__Extensions);
                                    }
                                    bVar18 = Extensions::Extensions_GetValueOrDefault
                                                       (itemData,StringLiteral_MuzzleFlareOnFire,0,
                                                                                                                
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                    if (bVar2 != bVar18) {
                                      return 0;
                                    }
                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                        (this,(MethodInfo *)0x0);
                                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0
                                       ) {
                                      fVar4 = (pPVar1->fields).muzzleFlareSize;
                                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0
                                         ) {
                                        func_?(TypeInfo__Extensions);
                                      }
                                      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                         (itemData,StringLiteral_MuzzleFlareSize,
                                                          -1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                      if (fVar4 != fVar5) {
                                        return 0;
                                      }
                                      pPVar1 = PickupItemCustomGun_get_Configuration
                                                          (this,(MethodInfo *)0x0);
                                      if (pPVar1 !=
                                          (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                        fVar4 = (pPVar1->fields).muzzleFlareColor.r;
                                        VStack_3.x = (pPVar1->fields).muzzleFlareColor.g;
                                        VStack_3.y = (pPVar1->fields).muzzleFlareColor.b;
                                        VStack_3.z = (pPVar1->fields).muzzleFlareColor.a;
                                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor ==
                                            0) {
                                          func_?(TypeInfo__Extensions);
                                        }
                                        defaultColor.g = (float)_UNK_?;
                                        defaultColor.r = (float)_UNK_?;
                                        defaultColor.b = (float)_UNK_?;
                                        defaultColor.a = _UNK_?;
                                        pCVar19 = Extensions::Extensions_GetColorOrDefault
                                                            ((Color *)&stack0xffffffdc,itemData,
                                                             StringLiteral_MuzzleFlareColor,
                                                             defaultColor,(MethodInfo *)0x0);
                                        fVar4 = fVar4 - pCVar19->r;
                                        fVar20 = VStack_3.x - pCVar19->g;
                                        fVar21 = VStack_3.y - pCVar19->b;
                                        fVar5 = VStack_3.z - pCVar19->a;
                                        if (_UNK_? <=
                                            fVar4 * fVar4 + fVar20 * fVar20 + fVar21 * fVar21 +
                                            fVar5 * fVar5) {
                                          return 0;
                                        }
                                        pPVar1 = PickupItemCustomGun_get_Configuration
                                                            (this,(MethodInfo *)0x0);
                                        if (pPVar1 !=
                                            (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                          bVar2 = (pPVar1->fields).thirdPersonCamera;
                                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor
                                              == 0) {
                                            func_?(TypeInfo__Extensions);
                                          }
                                          bVar18 = Extensions::Extensions_GetValueOrDefault
                                                             (itemData,
                                                  StringLiteral_ThirdPersonCamera,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                          if (bVar2 != bVar18) {
                                            return 0;
                                          }
                                          pPVar1 = PickupItemCustomGun_get_Configuration
                                                              (this,(MethodInfo *)0x0);
                                          if (pPVar1 !=
                                              (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                            bVar2 = (pPVar1->fields).smokeOnFire;
                                            if ((TypeInfo__Extensions->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?(TypeInfo__Extensions);
                                            }
                                            bVar18 = Extensions::Extensions_GetValueOrDefault
                                                               (itemData,StringLiteral_SmokeOnFire,0
                                                                ,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                            if (bVar2 != bVar18) {
                                              return 0;
                                            }
                                            pPVar1 = PickupItemCustomGun_get_Configuration
                                                                (this,(MethodInfo *)0x0);
                                            if (pPVar1 !=
                                                (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                              fVar4 = (pPVar1->fields).shotsPerBurst;
                                              if ((TypeInfo__Extensions->_1).
                                                  cctor_finished_or_no_cctor == 0) {
                                                func_?(TypeInfo__Extensions);
                                              }
                                              fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                                 (itemData,
                                                  StringLiteral_ShotsPerBurst,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                              if (fVar4 != fVar5) {
                                                return 0;
                                              }
                                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                                  (this,(MethodInfo *)0x0);
                                              if (pPVar1 !=
                                                  (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                              {
                                                fVar4 = (pPVar1->fields).burstCooldownBetweenShots
                                                ;
                                                if ((TypeInfo__Extensions->_1).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  func_?(TypeInfo__Extensions);
                                                }
                                                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                                   (itemData,
                                                  StringLiteral_BurstCooldownBetweenShots,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                if (fVar4 != fVar5) {
                                                  return 0;
                                                }
                                                pPVar1 = PickupItemCustomGun_get_Configuration
                                                                    (this,(MethodInfo *)0x0);
                                                if (pPVar1 !=
                                                    (PickupItemCustomGun_CustomGunConfiguration *)
                                                    0x0) {
                                                  fVar4 = (pPVar1->fields).projectilesPerShot;
                                                  if ((TypeInfo__Extensions->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?(TypeInfo__Extensions);
                                                  }
                                                  fVar5 = Extensions::
                                                           Extensions_GetValueOrDefault_4
                                                                     (itemData,
                                                  StringLiteral_ProjectilesPerShot,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar2 = (pPVar1->fields).chargeEnabled;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    bVar18 = Extensions::
                                                             Extensions_GetValueOrDefault
                                                                       (itemData,
                                                  StringLiteral_ChargeEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar2 != bVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).chargeTime;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeTime,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    IVar6 = (pPVar1->fields).chargeSoundEffect;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    IVar7 = Extensions::
                                                             Extensions_GetValueOrDefault_2
                                                                       (itemData,
                                                  StringLiteral_ChargeSoundEffect,0xffffffff,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                                  if (IVar6 != IVar7) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).
                                                             chargeSoundEffectVolume;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeSoundEffectVolume,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar2 = (pPVar1->fields).
                                                             chargeParticlesEnabled;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    bVar18 = Extensions::
                                                             Extensions_GetValueOrDefault
                                                                       (itemData,
                                                  StringLiteral_ChargeParticlesEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar2 != bVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).chargeParticlesSize;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeParticlesSize,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).chargeParticlesColor.
                                                             r;
                                                    VStack_3.x = (pPVar1->fields).
                                                                  chargeParticlesColor.g;
                                                    VStack_3.y = (pPVar1->fields).
                                                                  chargeParticlesColor.b;
                                                    VStack_3.z = (pPVar1->fields).
                                                                  chargeParticlesColor.a;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    defaultColor_00.g = (float)_UNK_?;
                                                    defaultColor_00.r = (float)_UNK_?;
                                                    defaultColor_00.b = (float)_UNK_?;
                                                    defaultColor_00.a = _UNK_?;
                                                    pCVar19 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffdc,
                                                                         itemData,
                                                  StringLiteral_ChargeParticlesColor,defaultColor_00
                                                  ,(MethodInfo *)0x0);
                                                  fVar4 = fVar4 - pCVar19->r;
                                                  fVar20 = VStack_3.x - pCVar19->g;
                                                  fVar21 = VStack_3.y - pCVar19->b;
                                                  fVar5 = VStack_3.z - pCVar19->a;
                                                  if (_UNK_? <=
                                                      fVar4 * fVar4 + fVar20 * fVar20 +
                                                      fVar21 * fVar21 + fVar5 * fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar2 = (pPVar1->fields).chargeZoomEnabled;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    bVar18 = Extensions::
                                                             Extensions_GetValueOrDefault
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomEnabled,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar2 != bVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).chargeZoomAmmount;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomAmmount,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).chargeZoomTime;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomTime,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields)._.range;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,StringLiteral_Range
                                                                        ,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).projectileSpeed;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSpeed,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).projectileSize;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSize,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).projectileColor.r;
                                                    VStack_3.x = (pPVar1->fields).projectileColor.
                                                                  g;
                                                    VStack_3.y = (pPVar1->fields).projectileColor.
                                                                  b;
                                                    VStack_3.z = (pPVar1->fields).projectileColor.
                                                                  a;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    defaultColor_01.g = (float)_UNK_?;
                                                    defaultColor_01.r = (float)_UNK_?;
                                                    defaultColor_01.b = (float)_UNK_?;
                                                    defaultColor_01.a = _UNK_?;
                                                    pCVar19 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffdc,
                                                                         itemData,
                                                  StringLiteral_ProjectileColor,defaultColor_01,
                                                  (MethodInfo *)0x0);
                                                  fVar4 = fVar4 - pCVar19->r;
                                                  fVar20 = VStack_3.x - pCVar19->g;
                                                  fVar21 = VStack_3.y - pCVar19->b;
                                                  fVar5 = VStack_3.z - pCVar19->a;
                                                  if (_UNK_? <=
                                                      fVar4 * fVar4 + fVar20 * fVar20 +
                                                      fVar21 * fVar21 + fVar5 * fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).projectileTrailColor.
                                                             r;
                                                    VStack_3.x = (pPVar1->fields).
                                                                  projectileTrailColor.g;
                                                    VStack_3.y = (pPVar1->fields).
                                                                  projectileTrailColor.b;
                                                    VStack_3.z = (pPVar1->fields).
                                                                  projectileTrailColor.a;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    defaultColor_02.g = (float)_UNK_?;
                                                    defaultColor_02.r = (float)_UNK_?;
                                                    defaultColor_02.b = (float)_UNK_?;
                                                    defaultColor_02.a = _UNK_?;
                                                    pCVar19 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffdc,
                                                                         itemData,
                                                  StringLiteral_ProjectileTrailColor,defaultColor_02
                                                  ,(MethodInfo *)0x0);
                                                  fVar4 = fVar4 - pCVar19->r;
                                                  fVar20 = VStack_3.x - pCVar19->g;
                                                  fVar21 = VStack_3.y - pCVar19->b;
                                                  fVar5 = VStack_3.z - pCVar19->a;
                                                  if (_UNK_? <=
                                                      fVar4 * fVar4 + fVar20 * fVar20 +
                                                      fVar21 * fVar21 + fVar5 * fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    bVar2 = (pPVar1->fields).sparksOnHit;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    bVar18 = Extensions::
                                                             Extensions_GetValueOrDefault
                                                                       (itemData,
                                                  StringLiteral_SparksOnHit,0,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (bVar2 != bVar18) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).sparksSize;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_SparksSize,-1.0,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (fVar4 != fVar5) {
                                                    return 0;
                                                  }
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                      (this,(MethodInfo *)0x0);
                                                  if (pPVar1 !=
                                                      (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                                    fVar4 = (pPVar1->fields).sparksColor.r;
                                                    VStack_3.x = (pPVar1->fields).sparksColor.g;
                                                    VStack_3.y = (pPVar1->fields).sparksColor.b;
                                                    VStack_3.z = (pPVar1->fields).sparksColor.a;
                                                    if ((TypeInfo__Extensions->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?(TypeInfo__Extensions);
                                                    }
                                                    defaultColor_03.g = (float)_UNK_?;
                                                    defaultColor_03.r = (float)_UNK_?;
                                                    defaultColor_03.b = (float)_UNK_?;
                                                    defaultColor_03.a = _UNK_?;
                                                    pCVar19 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffdc,
                                                                         itemData,
                                                  StringLiteral_SparksColor,defaultColor_03,
                                                  (MethodInfo *)0x0);
                                                  fVar4 = fVar4 - pCVar19->r;
                                                  VStack_3.x = VStack_3.x - pCVar19->g;
                                                  VStack_3.y = VStack_3.y - pCVar19->b;
                                                  fVar5 = VStack_3.z - pCVar19->a;
                                                  return fVar4 * fVar4 + VStack_3.x * VStack_3.x
                                                         + VStack_3.y * VStack_3.y +
                                                         fVar5 * fVar5 < _UNK_?;
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
  func_?();
  pcVar22 = (code *)swi(3);
  bVar2 = (*pcVar22)();
  return bVar2;
}


/* Void MovementSpeedStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_MovementSpeedStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (((pMVar2 == (MVWorldObjectClient *)0x0) ||
        ((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)) ||
       ((MVAvatarLocal__Class *)
        (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarLocal)) {
      return;
    }
    pSVar3 = pMVar2[1].fields.name;
    if (pSVar3 != (String *)0x0) {
      pSVar4 = pSVar3[3].klass;
      pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((float)pSVar4 == (float)(int)(pPVar5->fields).movementSpeedWhileHeld) {
          return;
        }
        this_00 = (AvatarMotor *)pMVar2[1].fields.name;
        pPVar5 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar5 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
           (this_00 != (AvatarMotor *)0x0)) {
          AvatarMotor::AvatarMotor_set_WalkSpeedBase
                    (this_00,(float)(int)(pPVar5->fields).movementSpeedWhileHeld,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void MuzzleStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_MuzzleStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarRemote);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._._.muzzlePoint;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pTVar1 == (Transform *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar1,(pPVar2->fields).muzzlePosition,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._._._.muzzlePoint;
  this_00 = (this->fields).staticMuzzlePoint;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&pAStack_4,pTVar1,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
            (this_00,*pVVar3,(MethodInfo *)0x0);
  pPVar5 = (this->fields).chargeParticles;
  if (pPVar5 == (ParticleSystem *)0x0) goto code_?;
  this_02 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_collision(pPVar5,(MethodInfo *)0x0);
  pPVar2 = PickupItemCustomGun_get_Configuration
                      ((PickupItemCustomGun *)this_02.m_ParticleSystem,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  uVar6 = (pPVar2->fields).chargeParticlesColor.b;
  uVar7 = (pPVar2->fields).chargeParticlesColor.a;
  this = (PickupItemCustomGun *)uVar7;
  fVar8 = (float)uVar6;
  auVar9._4_4_ = (pPVar2->fields).chargeParticlesColor.r;
  auVar9._0_4_ = (ParticleSystem_MinMaxGradient *)&stack0xffffffc8;
  auVar9._8_4_ = (pPVar2->fields).chargeParticlesColor.g;
  color._0_8_ = auVar9._4_8_;
  color = (Color)CONCAT88(uVar10,color._0_8_);
  pPVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
            ParticleSystem_MinMaxGradient_op_Implicit
                      ((ParticleSystem_MinMaxGradient *)&stack0xffffffc8,color,(MethodInfo *)0x0);
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startColor
            ((ParticleSystem_MainModule *)&stack0xfffffff4,*pPVar11,(MethodInfo *)0x0);
  pPVar5 = (this_01->fields).flareParticles;
  if (pPVar5 == (ParticleSystem *)0x0) goto code_?;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
            (pPVar5,(MethodInfo *)0x0);
  pPVar2 = PickupItemCustomGun_get_Configuration(this_01,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  pPVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
            ParticleSystem_MinMaxGradient_op_Implicit
                      ((ParticleSystem_MinMaxGradient *)&stack0xffffffc8,
                       (pPVar2->fields).muzzleFlareColor,(MethodInfo *)0x0);
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startColor
            ((ParticleSystem_MainModule *)&stack0xfffffff8,*pPVar11,(MethodInfo *)0x0);
  pMVar12 = (this_01->fields)._._._.owner;
  if (pMVar12 == (MVPickupOwner *)0x0) goto code_?;
  pMVar13 = (pMVar12->fields)._.worldObjectParent;
  if (pMVar13 == (MVWorldObjectClient *)0x0) {
code_?:
    pPVar2 = PickupItemCustomGun_get_Configuration(this_01,(MethodInfo *)0x0);
    if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if ((pPVar2->fields).thirdPersonCamera != 0) goto code_?;
    fVar14 = 1.0;
    fVar15 = 0.5;
  }
  else {
    pMVar16 = pMVar13->klass;
    if (((pMVar16->_1).naturalAligment < (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
       ((MVAvatarRemote__Class *)
        (pMVar16->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarRemote)) goto code_?;
code_?:
    fVar14 = 0.3;
    fVar15 = 0.1;
  }
  fVar17 = 0.0;
  fVar18 = 0.0;
  pAVar19 = (AnimationCurve *)0x0;
  pAStack_4 = (AnimationCurve *)0x0;
  puStack_20 = (undefined *)0x0;
  fVar21 = 0.0;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
  ParticleSystem_MinMaxCurve__ctor_3
            ((ParticleSystem_MinMaxCurve *)&stack0xffffffdc,fVar15,fVar14,(MethodInfo *)0x0);
  value.m_ConstantMax = fVar21;
  value.m_ConstantMin = (float)puStack_20;
  value.m_CurveMultiplier = fVar18;
  value.m_Mode = (int32_t)fVar17;
  value.m_CurveMin = pAVar19;
  value.m_CurveMax = pAStack_4;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
  ParticleSystem_MainModule_set_startSize
            ((ParticleSystem_MainModule *)&stack0xfffffff8,value,(MethodInfo *)0x0);
  pPVar5 = (this_01->fields).chargeParticles;
  if (pPVar5 != (ParticleSystem *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23 = (pVVar22->oneVector).x;
    uVar24 = (pVVar22->oneVector).y;
    fVar15 = (pVVar22->oneVector).z;
    pAStack_4 = (AnimationCurve *)uVar23;
    puStack_20 = (undefined *)uVar24;
    pPVar2 = PickupItemCustomGun_get_Configuration(this_01,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fVar14 = (pPVar2->fields).chargeParticlesSize;
      pAStack_4 = (AnimationCurve *)((float)pAStack_4 * fVar14);
      puStack_20 = (undefined *)((float)puStack_20 * fVar14);
      if (pTVar1 != (Transform *)0x0) {
        value_00.y = (float)puStack_20;
        value_00.x = (float)pAStack_4;
        value_00.z = fVar15 * fVar14;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar1,value_00,(MethodInfo *)0x0);
        pPVar5 = (this_01->fields).flareParticles;
        if (pPVar5 != (ParticleSystem *)0x0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar25 = (pVVar22->oneVector).x;
          uVar26 = (pVVar22->oneVector).y;
          fVar15 = (pVVar22->oneVector).z;
          pAStack_4 = (AnimationCurve *)uVar25;
          puStack_20 = (undefined *)uVar26;
          pPVar2 = PickupItemCustomGun_get_Configuration(this_01,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            fVar14 = (pPVar2->fields).muzzleFlareSize;
            pAStack_4 = (AnimationCurve *)((float)pAStack_4 * fVar14);
            puStack_20 = (undefined *)((float)puStack_20 * fVar14);
            if (pTVar1 != (Transform *)0x0) {
              value_01.y = (float)puStack_20;
              value_01.x = (float)pAStack_4;
              value_01.z = fVar15 * fVar14;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar1,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnEnterVehicleWithWeapon(PickupItemCustomGun *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).InterruptFire.method)(this,this->klass[1]._0.image);
  (this->fields).canDoFOVZoom = 0;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnEquip
               (PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  PickupItemWithDelay::PickupItemWithDelay_OnEquip((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar2,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar2 = pOVar3->fakeValue;
    bVar6 = pOVar3->inited;
    uVar7 = *(undefined3 *)&pOVar3->field_0x11;
    (this->fields).initialFOV.currentCryptoKey = pOVar3->currentCryptoKey;
    (this->fields).initialFOV.hiddenValue = AVar4;
    (this->fields).initialFOV.hiddenValueOld = pBVar5;
    (this->fields).initialFOV.fakeValue = fVar2;
    (this->fields).initialFOV.inited = bVar6;
    *(undefined3 *)&(this->fields).initialFOV.field_0x11 = uVar7;
    func_?();
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit
                       ((ObscuredFloat *)&stack0xffffffe4,
                        TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier,
                        (MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar2 = pOVar3->fakeValue;
    bVar6 = pOVar3->inited;
    uVar7 = *(undefined3 *)&pOVar3->field_0x11;
    (this->fields).initialMouseSensitivity.currentCryptoKey = pOVar3->currentCryptoKey;
    (this->fields).initialMouseSensitivity.hiddenValue = AVar4;
    (this->fields).initialMouseSensitivity.hiddenValueOld = pBVar5;
    (this->fields).initialMouseSensitivity.fakeValue = fVar2;
    (this->fields).initialMouseSensitivity.inited = bVar6;
    *(undefined3 *)&(this->fields).initialMouseSensitivity.field_0x11 = uVar7;
    func_?();
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnFire
               (PickupItemCustomGun *this,bool isLocal,MethodInfo *method)

{
  pVVar1 = PickupItemCustomGun_HandleBulletGenerationOnFire
                     ((Vector3 *)&stack0xffffffdc,this,isLocal,(MethodInfo *)0x0);
  uStack_2._0_4_ = (uint)pVVar1->x;
  uStack_3 = (uint)pVVar1->y;
  fVar4 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.owner;
  if (this_00 == (MVPickupOwner *)0x0) goto code_?;
  this_02 = (MVRigidBody *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this_00,
                       MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    uStack_2 = CONCAT44(uStack_3,TypeInfo__UnityEngine__Object);
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar6 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon < (pPVar6->fields)._.recoilStrength) {
      fVar7 = (float)((uint)uStack_2 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar8 = (float)(uStack_3 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar4 = (float)((uint)fVar4 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar6 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      fVar9 = (pPVar6->fields)._.recoilStrength;
      if (this_02 == (MVRigidBody *)0x0) goto code_?;
      impulse.y = fVar8 * fVar9;
      impulse.x = fVar7 * fVar9;
      impulse.z = fVar4 * fVar9;
      MVRigidBody::MVRigidBody_AddImpulse_1(this_02,impulse,0,(MethodInfo *)0x0);
    }
  }
  PickupItemCustomGun_HandleFiringStateAndAmmoOnFire(this,(MethodInfo *)0x0);
  this_01 = (this->fields).fireEffectTimeout;
  if (this_01 != (TimeoutClock *)0x0) {
    bVar5 = TimeoutClock::TimeoutClock_IsInTimeout(this_01,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return;
    }
    PickupItemEditable::PickupItemEditable_PlayAnimation
              ((PickupItemEditable *)this,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).PlayFireSoundEffect.method)();
    pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      if ((pPVar6->fields).smokeOnFire != 0) {
        pPVar10 = (this->fields).smokeParticles;
        if (pPVar10 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar10,(MethodInfo *)0x0);
      }
      pPVar6 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar6 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        if ((pPVar6->fields).muzzleFlareOnFire != 0) {
          pPVar10 = (this->fields).flareParticles;
          if (pPVar10 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar10,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun_OnHit
               (PickupItemCustomGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  auVar1._0_12_ = in_stack_2._0_12_;
  auVar1._12_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__System__Nullable<float>__Nullable_float_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bulletEffectTimeout;
  if (this_00 != (TimeoutClock *)0x0) {
    bVar3 = TimeoutClock::TimeoutClock_IsInTimeout(this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    audioSource = (this->fields).bulletAudioSource;
    soundEffectName =
         (String *)
         (*(code *)(this->klass->vtable).get_HitSoundEffectName.method)
                   (this,(this->klass->vtable).get_AttackAnimationName.methodPtr);
    position.y = voxelHit.point.x;
    position.x = (float)in_stack_4;
    position.z = voxelHit.point.y;
    PickupItemEditable::PickupItemEditable_PlayAudio
              ((PickupItemEditable *)this,audioSource,soundEffectName,position,1,(MethodInfo *)0x0);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     (pMVar5,voxelHit._36_4_,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar5,id,(MethodInfo *)0x0);
        piVar7 = (int *)func_?(pMVar6,TypeInfo__IBulletImpactVisualizer);
        if (piVar7 == (int *)0x0) {
          pPVar8 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            if ((pPVar8->fields).sparksOnHit == 0) {
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                      ((Quaternion *)&stack0xffffffe0,voxelHit._8_12_,(MethodInfo *)0x0);
            pPVar8 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = auVar1._8_8_;
              auVar9 = auVar9 << 0x40;
              mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single___ctor
                        ((Nullable_1_Single_ *)&stack0xfffffff0,(pPVar8->fields).sparksSize,
                         MethodInfo__System__Nullable<float>__Nullable_float_);
              pPVar8 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                pCVar10 = &(pPVar8->fields).sparksColor;
                fVar11 = pCVar10->r;
                fVar12 = (pPVar8->fields).sparksColor.g;
                fVar13 = (pPVar8->fields).sparksColor.b;
                value.m_XMin = pCVar10->r;
                value.m_YMin = pCVar10->g;
                value.m_Width = pCVar10->b;
                value.m_Height = pCVar10->a;
                uVar14._0_1_ = 0;
                uVar14._1_3_ = 0;
                fVar15 = 0.0;
                this_01 = (Nullable_1_UnityEngine_Rect_ *)&stack0xffffffcc;
                puVar16 = &UNK_?;
                mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
                Nullable_1_UnityEngine_Rect___ctor
                          (this_01,value,
                           MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_
                          );
                color.value.r = fVar15;
                color.hasValue = (bool)uVar14;
                color._1_3_ = SUB43(uVar14,1);
                color.value.g = (float)puVar16;
                color.value.b = (float)this_01;
                position_00.y = voxelHit.point.x;
                position_00.x = (float)in_stack_4;
                position_00.z = voxelHit.point.y;
                rotation.y = fVar13;
                rotation.x = fVar12;
                rotation.z = (float)uVar14;
                rotation.w = auVar9._4_4_;
                scale.value = auVar9._4_4_;
                scale.hasValue = (bool)uVar14;
                scale._1_3_ = SUB43(uVar14,1);
                color.value.a = fVar11;
                OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                          (PoolEnums__Enum_WhiteSparks,position_00,rotation,scale,color,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        else {
          pMVar17 = (this->fields)._._._.owner;
          if ((pMVar17 != (MVPickupOwner *)0x0) &&
             (pMVar18 = (pMVar17->fields)._.worldObjectParent, pMVar18 != (MVWorldObjectClient *)0x0))
          {
            auVar19._4_8_ = auVar1._8_8_;
            auVar19._0_4_ = (pMVar18->fields)._.ownerActorNr;
            auVar19._12_4_ = 0;
            auVar19 = auVar19 << 0x20;
            pPVar8 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              iVar20 = *piVar7;
              uVar21 = 0;
              fVar11 = (pPVar8->fields)._.damage;
              auVar22._12_4_ = auVar19._12_4_;
              auVar22._0_8_ = auVar19._0_8_;
              auVar22._8_4_ = fVar11;
              fVar12 = auVar19._4_4_;
              if (*(ushort *)(iVar20 + 0xb6) != 0) {
                do {
                  if (*(IBulletImpactVisualizer__Class **)
                       (*(int *)(iVar20 + 0x58) + (uint)uVar21 * 8) ==
                      TypeInfo__IBulletImpactVisualizer) {
                    puVar23 = (undefined4 *)
                              (iVar20 + (*(int *)(*(int *)(iVar20 + 0x58) + 4 + (uint)uVar21 * 8) +
                                       0x18) * 8);
                    goto code_?;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < *(ushort *)(iVar20 + 0xb6));
              }
              puVar23 = (undefined4 *)func_?(piVar7,TypeInfo__IBulletImpactVisualizer,0);
              fVar12 = auVar22._4_4_;
              fVar11 = auVar22._8_4_;
code_?:
              (*(code *)*puVar23)(piVar7,in_stack_4,voxelHit.point.x,voxelHit.point.y,
                                  voxelHit.point.z,voxelHit.normal.x,voxelHit.normal.y,
                                  voxelHit.normal.z,voxelHit.cubePos._0_4_,voxelHit._28_4_,
                                  voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,
                                  voxelHit.distance,voxelHit.collider,voxelHit.transform,
                                  voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                  lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                  lineOfFire.m_Direction.x,lineOfFire.m_Direction.y,fVar12,fVar11,
                                  puVar23[1]);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnLeaveVehicleWithWeapon(PickupItemCustomGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 1;
  return;
}


/* Void OnLocalHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnLocalHit
               (PickupItemCustomGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    pPVar3 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
    if ((pPVar3 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
       (this_00 != (RuntimeEventManager *)0x0)) {
      voxelHit_00.interactionFlags._4_4_ = (pPVar3->fields)._.damage;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,in_stack_4);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar5,voxelHit._36_4_,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,id,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClient *)0x0) {
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar6 == 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_02 != (MVLocalPlayer *)0x0)) {
                bVar6 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
                if (bVar6 != 0) {
                  return;
                }
                pPVar3 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar3 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  fVar7 = (pPVar3->fields)._.impulseStrength;
                  pPVar3 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if ((pPVar3 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                     (impulse.y = fVar7 * 0.0, impulse.x = (float)x * fVar7, impulse.z = fVar7 * 0.0
                     , pIVar8 = CustomGunHitPackage::CustomGunHitPackage_Create
                                          ((InteractionData *)&stack0xffffffe8,
                                           (pPVar3->fields)._.damage,impulse,(MethodInfo *)0x0),
                     x != (InteractionDataHandlerBase *)0x0)) {
                    fStack9 = (pIVar8->impulse).x;
                    fStack10 = (pIVar8->impulse).y;
                    fStack11 = (pIVar8->impulse).z;
                    uStack12._0_1_ = pIVar8->interactionType;
                    uStack12._1_1_ = pIVar8->playerKilledByType;
                    uStack12._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
                    pIStack13 = (x->klass->vtable).OnValidate.methodPtr;
                    uStack14 = 0;
                    (*(code *)(x->klass->vtable).__unknown_1.method)();
                    return;
                  }
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnStateChanged
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__TimeoutClock);
    cRam_? = '\x01';
  }
  PickupItemEditable::PickupItemEditable_OnStateChanged
            ((PickupItemEditable *)this,newState,(MethodInfo *)0x0);
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    fVar2 = (pPVar1->fields)._.attackCooldown;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar2,(MethodInfo *)0x0);
    AVar4 = pOVar3->hiddenValue;
    pBVar5 = pOVar3->hiddenValueOld;
    fVar2 = pOVar3->fakeValue;
    bVar6 = pOVar3->inited;
    uVar7 = *(undefined3 *)&pOVar3->field_0x11;
    (this->fields)._._.fireInterval.currentCryptoKey = pOVar3->currentCryptoKey;
    (this->fields)._._.fireInterval.hiddenValue = AVar4;
    (this->fields)._._.fireInterval.hiddenValueOld = pBVar5;
    (this->fields)._._.fireInterval.fakeValue = fVar2;
    (this->fields)._._.fireInterval.inited = bVar6;
    *(undefined3 *)&(this->fields)._._.fireInterval.field_0x11 = uVar7;
    func_?();
    pTVar8 = (TimeoutClock *)func_?(TypeInfo__TimeoutClock);
    TimeoutClock::TimeoutClock__ctor(pTVar8,0.05,(MethodInfo *)0x0);
    (this->fields).fireEffectTimeout = pTVar8;
    func_?();
    pTVar8 = (TimeoutClock *)func_?();
    TimeoutClock::TimeoutClock__ctor(pTVar8,0.05,(MethodInfo *)0x0);
    (this->fields).bulletEffectTimeout = pTVar8;
    func_?();
    (*(code *)(this->klass->vtable).ResetAmmo.method)();
    PickupItemCustomGun_SoundStateUpdate(this,(MethodInfo *)0x0);
    PickupItemCustomGun_MuzzleStateUpdate(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar9 = (this->fields)._._._.owner;
    if (pMVar9 != (MVPickupOwner *)0x0) {
      pMVar10 = (pMVar9->fields)._.worldObjectParent;
      if (((pMVar10 == (MVWorldObjectClient *)0x0) ||
          ((pMVar10->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)) ||
         ((MVAvatarLocal__Class *)
          (pMVar10->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal)) {
        return;
      }
      pSVar11 = pMVar10[1].fields.name;
      if (pSVar11 != (String *)0x0) {
        pSVar12 = pSVar11[3].klass;
        pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          if ((float)pSVar12 == (float)(int)(pPVar1->fields).movementSpeedWhileHeld) {
            return;
          }
          this_00 = (AvatarMotor *)pMVar10[1].fields.name;
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
             (this_00 != (AvatarMotor *)0x0)) {
            AvatarMotor::AvatarMotor_set_WalkSpeedBase
                      (this_00,(float)(int)(pPVar1->fields).movementSpeedWhileHeld,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_OnValidate(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           fireSoundEffects;
  if (pSVar1 != (String__Array *)0x0) {
    pAVar2 = (this->fields)._.fireAudioClips;
    if (pAVar2 != (AudioClip__Array *)0x0) {
      iVar3 = pSVar1->max_length;
      if (pAVar2->max_length != iVar3) {
        mscorlib.dll::System::Array::Array_Resize_86
                  ((BindingRestrictions_TestBuilder_AndNode__Array **)
                   &(this->fields)._.fireAudioClips,iVar3,
                   void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
      }
      pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
               ->hitSoundEffects;
      if ((pSVar1 != (String__Array *)0x0) &&
         (pAVar2 = (this->fields)._.hitAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
        iVar3 = pSVar1->max_length;
        if (pAVar2->max_length != iVar3) {
          mscorlib.dll::System::Array::Array_Resize_86
                    ((BindingRestrictions_TestBuilder_AndNode__Array **)
                     &(this->fields)._.hitAudioClips,iVar3,
                     void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                    );
        }
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
        }
        pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                 static_fields->chargeSoundEffects;
        if ((pSVar1 != (String__Array *)0x0) &&
           (pAVar2 = (this->fields).chargeAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
          iVar3 = pSVar1->max_length;
          if (pAVar2->max_length != iVar3) {
            mscorlib.dll::System::Array::Array_Resize_86
                      ((BindingRestrictions_TestBuilder_AndNode__Array **)
                       &(this->fields).chargeAudioClips,iVar3,
                       void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                      );
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayFireSoundEffect(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_PlayFireSoundEffect
               (PickupItemCustomGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_minigun);
    cRam_? = '\x01';
  }
  a = (String *)
      (*(code *)(this->klass->vtable).get_FireSoundEffectName.method)
                (this,(this->klass->vtable).get_HitSoundEffectName.methodPtr);
  bVar1 = mscorlib.dll::System::String::String_op_Inequality
                    (a,StringLiteral_minigun,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    PickupItemEditable::PickupItemEditable_PlayFireSoundEffect
              ((PickupItemEditable *)this,isLocal,(MethodInfo *)0x0);
    return;
  }
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
  iVar3 = (pPVar2->fields).fireMode;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (iVar3 == 2) {
    if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
code_?:
    pAVar4 = (this->fields)._.fireAudioSource;
    if (pAVar4 == (AudioSource *)0x0) goto code_?;
    bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar4,(MethodInfo *)0x0);
    if (((bVar1 == 0) && (0.0 <= _UNK_?)) && ((this->fields)._._.isFiring != 0)) {
      pAVar4 = (this->fields)._.fireAudioSource;
      if (pAVar4 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                  (pAVar4,1,(MethodInfo *)0x0);
        pAVar4 = (this->fields)._.fireAudioSource;
        if (pAVar4 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar4,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if (0.0 <= _UNK_?) {
      return;
    }
  }
  else {
    if (pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if (iVar3 != 0) goto code_?;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioSettings::AudioSettings_get_dspTime
            ((MethodInfo *)0x0);
  pAVar4 = (this->fields)._.fireAudioSource;
  if (pAVar4 != (AudioSource *)0x0) {
    uVar5 = 0;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
              (pAVar4,0,(MethodInfo *)0x0);
    pAVar4 = (this->fields)._.fireAudioSource;
    if (pAVar4 != (AudioSource *)0x0) {
      dVar6 = (double)CONCAT44(pAVar4,&UNK_?);
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayScheduled
                (pAVar4,(double)(uVar5 >> 0x20),_isLocal);
      pAVar4 = (this->fields)._.fireAudioSource;
      if (pAVar4 != (AudioSource *)0x0) {
        puStack7 = SUB84(dVar6 + _UNK_?,0);
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_SetScheduledEndTime
                  (pAVar4,(double)((ulonglong)(dVar6 + _UNK_?) >> 0x20),in_stack_8);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_ResetAmmo(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)(this);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar2,(MethodInfo *)0x0);
    iVar2 = pOVar3->hiddenValue;
    iVar4 = pOVar3->fakeValue;
    bVar5 = pOVar3->inited;
    uVar6 = *(undefined3 *)&pOVar3->field_0xd;
    (this->fields).currentAmmo.currentCryptoKey = pOVar3->currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = iVar2;
    (this->fields).currentAmmo.fakeValue = iVar4;
    (this->fields).currentAmmo.inited = bVar5;
    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
    AVar8 = pOVar7->hiddenValue;
    pBVar9 = pOVar7->hiddenValueOld;
    fVar10 = pOVar7->fakeValue;
    bVar5 = pOVar7->inited;
    uVar6 = *(undefined3 *)&pOVar7->field_0x11;
    (this->fields).currentCharge.currentCryptoKey = pOVar7->currentCryptoKey;
    (this->fields).currentCharge.hiddenValue = AVar8;
    (this->fields).currentCharge.hiddenValueOld = pBVar9;
    (this->fields).currentCharge.fakeValue = fVar10;
    (this->fields).currentCharge.inited = bVar5;
    *(undefined3 *)&(this->fields).currentCharge.field_0x11 = uVar6;
    func_?();
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_SetConfiguration
               (PickupItemCustomGun *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_MuzzleFlareSize);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_ProjectileSize);
    func_?(&StringLiteral_SparksSize);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_ChargeSoundEffectVolume);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_ProjectilesPerShot);
    func_?(&StringLiteral_SmokeOnFire);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_ChargeTime);
    func_?(&StringLiteral_MovementSpeedWhileHeld);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_ChargeZoomTime);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_ChargeZoomAmmount);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ThirdPersonCamera);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_BurstCooldownBetweenShots);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_ChargeParticlesSize);
    func_?(&StringLiteral_ChargeParticlesColor);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_ProjectileSpeed);
    func_?(&StringLiteral_ShotsPerBurst);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_ChargeEnabled);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        pSVar4 = (String *)
                 Extensions::Extensions_GetValueOrDefault_3
                           (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
          (pPVar1->fields)._.name = pSVar4;
          func_?();
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Damage,(pPVar2->fields)._.damage,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
              (pPVar1->fields)._.damage = fVar5;
              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_MaxAmmo,(pPVar2->fields)._.maxAmmo,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                  (pPVar1->fields)._.maxAmmo = fVar5;
                  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                       (itemData,StringLiteral_ImpulseStrength,
                                        (pPVar2->fields)._.impulseStrength,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       );
                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                      (pPVar1->fields)._.impulseStrength = fVar5;
                      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                           (itemData,StringLiteral_RecoilStrength,
                                            (pPVar2->fields)._.recoilStrength,
                                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                           );
                        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                          (pPVar1->fields)._.recoilStrength = fVar5;
                          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                               (itemData,StringLiteral_AttackAnimationTime,
                                                (pPVar2->fields)._.fireAnimationTime,
                                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                               );
                            if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                              (pPVar1->fields)._.fireAnimationTime = fVar5;
                              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0)
                              ;
                              pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0)
                              ;
                              if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                   (itemData,StringLiteral_AttackCooldown,
                                                    (pPVar2->fields)._.attackCooldown,
                                                                                                        
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                  (pPVar1->fields)._.attackCooldown = fVar5;
                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemCustomGun_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
                                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                       (itemData,StringLiteral_Radius,
                                                        (pPVar2->fields)._.radius,
                                                                                                                
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                    if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                    {
                                      (pPVar1->fields)._.radius = fVar5;
                                      pPVar1 = PickupItemCustomGun_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      pPVar2 = PickupItemCustomGun_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration *)
                                                    0x0) {
                                        IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                          (itemData,StringLiteral_FireSoundEffect,
                                                           (pPVar2->fields)._.fireSoundEffect,
                                                                                                                      
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                        if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)
                                                      0x0) {
                                          (pPVar1->fields)._.fireSoundEffect = IVar3;
                                          pPVar1 = PickupItemCustomGun_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          pPVar2 = PickupItemCustomGun_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          if (pPVar2 != (PickupItemCustomGun_CustomGunConfiguration
                                                         *)0x0) {
                                            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                               (itemData,
                                                  StringLiteral_FireSoundEffectVolume,
                                                  (pPVar2->fields)._.fireSoundEffectVolume,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                            if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                            {
                                              (pPVar1->fields)._.fireSoundEffectVolume = fVar5;
                                              pPVar1 = PickupItemCustomGun_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              pPVar2 = PickupItemCustomGun_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                              {
                                                IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                                  (itemData,
                                                  StringLiteral_HitSoundEffect,
                                                  (pPVar2->fields)._.hitSoundEffect,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                                if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                {
                                                  (pPVar1->fields)._.hitSoundEffect = IVar3;
                                                  pPVar1 = PickupItemCustomGun_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  pPVar2 = PickupItemCustomGun_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_HitSoundEffectVolume,
                                                  (pPVar2->fields)._.hitSoundEffectVolume,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields)._.hitSoundEffectVolume = fVar5
                                                    ;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_MovementSpeedWhileHeld,
                                                  (pPVar2->fields).movementSpeedWhileHeld,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).movementSpeedWhileHeld = fVar5
                                                    ;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    IVar3 = Extensions::
                                                            Extensions_GetValueOrDefault_2
                                                                      (itemData,
                                                  StringLiteral_FireMode,(pPVar2->fields).fireMode,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).fireMode = IVar3;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pVVar6 = Extensions::
                                                             Extensions_GetVector3OrDefault
                                                                       ((Vector3 *)&stack0xfffffff0,
                                                                        itemData,
                                                  StringLiteral_MuzzlePosition,
                                                  (pPVar2->fields).muzzlePosition,(MethodInfo *)0x0)
                                                  ;
                                                  fVar7 = pVVar6->y;
                                                  fVar5 = pVVar6->z;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).muzzlePosition.x = pVVar6->x;
                                                    (pPVar1->fields).muzzlePosition.y = fVar7;
                                                    (pPVar1->fields).muzzlePosition.z = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pVVar6 = Extensions::
                                                             Extensions_GetVector3OrDefault
                                                                       ((Vector3 *)&stack0xfffffff0,
                                                                        itemData,
                                                  StringLiteral_MuzzleDirection,
                                                  (pPVar2->fields).muzzleDirection,(MethodInfo *)0x0
                                                  );
                                                  fVar7 = pVVar6->y;
                                                  fVar5 = pVVar6->z;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).muzzleDirection.x = pVVar6->x;
                                                    (pPVar1->fields).muzzleDirection.y = fVar7;
                                                    (pPVar1->fields).muzzleDirection.z = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_MuzzleFlareOnFire,
                                                  (pPVar2->fields).muzzleFlareOnFire,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).muzzleFlareOnFire = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_MuzzleFlareSize,
                                                  (pPVar2->fields).muzzleFlareSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).muzzleFlareSize = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pCVar9 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffec,
                                                                         itemData,
                                                  StringLiteral_MuzzleFlareColor,
                                                  (pPVar2->fields).muzzleFlareColor,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = pCVar9->g;
                                                  fVar7 = pCVar9->b;
                                                  fVar10 = pCVar9->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).muzzleFlareColor.r = pCVar9->r
                                                    ;
                                                    (pPVar1->fields).muzzleFlareColor.g = fVar5;
                                                    (pPVar1->fields).muzzleFlareColor.b = fVar7;
                                                    (pPVar1->fields).muzzleFlareColor.a = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ThirdPersonCamera,
                                                  (pPVar2->fields).thirdPersonCamera,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).thirdPersonCamera = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_SmokeOnFire,
                                                  (pPVar2->fields).smokeOnFire,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).smokeOnFire = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ShotsPerBurst,
                                                  (pPVar2->fields).shotsPerBurst,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).shotsPerBurst = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_BurstCooldownBetweenShots,
                                                  (pPVar2->fields).burstCooldownBetweenShots,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).burstCooldownBetweenShots =
                                                         fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectilesPerShot,
                                                  (pPVar2->fields).projectilesPerShot,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectilesPerShot = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeEnabled,
                                                  (pPVar2->fields).chargeEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeEnabled = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeTime,
                                                  (pPVar2->fields).chargeTime,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeTime = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    IVar3 = Extensions::
                                                            Extensions_GetValueOrDefault_2
                                                                      (itemData,
                                                  StringLiteral_ChargeSoundEffect,
                                                  (pPVar2->fields).chargeSoundEffect,
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeSoundEffect = IVar3;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeSoundEffectVolume,
                                                  (pPVar2->fields).chargeSoundEffectVolume,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeSoundEffectVolume =
                                                         fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeParticlesEnabled,
                                                  (pPVar2->fields).chargeParticlesEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeParticlesEnabled = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeParticlesSize,
                                                  (pPVar2->fields).chargeParticlesSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeParticlesSize = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pCVar9 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffec,
                                                                         itemData,
                                                  StringLiteral_ChargeParticlesColor,
                                                  (pPVar2->fields).chargeParticlesColor,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = pCVar9->g;
                                                  fVar7 = pCVar9->b;
                                                  fVar10 = pCVar9->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeParticlesColor.r =
                                                         pCVar9->r;
                                                    (pPVar1->fields).chargeParticlesColor.g = fVar5
                                                    ;
                                                    (pPVar1->fields).chargeParticlesColor.b = fVar7;
                                                    (pPVar1->fields).chargeParticlesColor.a = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_ChargeZoomEnabled,
                                                  (pPVar2->fields).chargeZoomEnabled,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeZoomEnabled = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomAmmount,
                                                  (pPVar2->fields).chargeZoomAmmount,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeZoomAmmount = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ChargeZoomTime,
                                                  (pPVar2->fields).chargeZoomTime,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).chargeZoomTime = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,StringLiteral_Range
                                                                        ,(pPVar2->fields)._.range,
                                                                                                                                                
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields)._.range = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSpeed,
                                                  (pPVar2->fields).projectileSpeed,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileSpeed = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_ProjectileSize,
                                                  (pPVar2->fields).projectileSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileSize = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pCVar9 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffec,
                                                                         itemData,
                                                  StringLiteral_ProjectileColor,
                                                  (pPVar2->fields).projectileColor,(MethodInfo *)0x0
                                                  );
                                                  fVar5 = pCVar9->g;
                                                  fVar7 = pCVar9->b;
                                                  fVar10 = pCVar9->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileColor.r = pCVar9->r;
                                                    (pPVar1->fields).projectileColor.g = fVar5;
                                                    (pPVar1->fields).projectileColor.b = fVar7;
                                                    (pPVar1->fields).projectileColor.a = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pCVar9 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffec,
                                                                         itemData,
                                                  StringLiteral_ProjectileTrailColor,
                                                  (pPVar2->fields).projectileTrailColor,
                                                  (MethodInfo *)0x0);
                                                  fVar5 = pCVar9->g;
                                                  fVar7 = pCVar9->b;
                                                  fVar10 = pCVar9->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).projectileTrailColor.r =
                                                         pCVar9->r;
                                                    (pPVar1->fields).projectileTrailColor.g = fVar5
                                                    ;
                                                    (pPVar1->fields).projectileTrailColor.b = fVar7;
                                                    (pPVar1->fields).projectileTrailColor.a = fVar10;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    bVar8 = Extensions::Extensions_GetValueOrDefault
                                                                      (itemData,
                                                  StringLiteral_SparksOnHit,
                                                  (pPVar2->fields).sparksOnHit,
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).sparksOnHit = bVar8;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    fVar5 = Extensions::
                                                             Extensions_GetValueOrDefault_4
                                                                       (itemData,
                                                  StringLiteral_SparksSize,
                                                  (pPVar2->fields).sparksSize,
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).sparksSize = fVar5;
                                                    pPVar1 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    pPVar2 = PickupItemCustomGun_get_Configuration
                                                                       (this,(MethodInfo *)0x0);
                                                    if (pPVar2 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    pCVar9 = Extensions::
                                                              Extensions_GetColorOrDefault
                                                                        ((Color *)&stack0xffffffec,
                                                                         itemData,
                                                  StringLiteral_SparksColor,
                                                  (pPVar2->fields).sparksColor,(MethodInfo *)0x0);
                                                  fVar5 = pCVar9->g;
                                                  fVar7 = pCVar9->b;
                                                  fVar10 = pCVar9->a;
                                                  if (pPVar1 != (
                                                  PickupItemCustomGun_CustomGunConfiguration *)0x0)
                                                  {
                                                    (pPVar1->fields).sparksColor.r = pCVar9->r;
                                                    (pPVar1->fields).sparksColor.g = fVar5;
                                                    (pPVar1->fields).sparksColor.b = fVar7;
                                                    (pPVar1->fields).sparksColor.a = fVar10;
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
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SoundStateUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_SoundStateUpdate(PickupItemCustomGun *this,MethodInfo *method)

{
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
     (pAVar2 = (this->fields).chargeAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
    uVar3 = (pPVar1->fields).chargeSoundEffect;
    if ((int)uVar3 < 0) {
      pAVar4 = (this->fields)._.alternativeAudioSource;
      uVar5 = 0;
    }
    else {
      uVar5 = pAVar2->max_length - 1;
      pAVar4 = (this->fields)._.alternativeAudioSource;
      if ((int)uVar3 <= (int)uVar5) {
        uVar5 = uVar3;
      }
    }
    if (pAVar2->max_length <= uVar5) goto code_?;
    if (pAVar4 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar4,pAVar2->vector[uVar5],(MethodInfo *)0x0);
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
         (pAVar2 = (this->fields)._.hitAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
        uVar3 = (pPVar1->fields)._.hitSoundEffect;
        pAVar4 = (this->fields).bulletAudioSource;
        if ((int)uVar3 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = pAVar2->max_length - 1;
          if ((int)uVar3 <= (int)uVar5) {
            uVar5 = uVar3;
          }
        }
        if (pAVar2->max_length <= uVar5) goto code_?;
        if (pAVar4 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                    (pAVar4,pAVar2->vector[uVar5],(MethodInfo *)0x0);
          pAVar4 = (this->fields)._.fireAudioSource;
          pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
             (pAVar4 != (AudioSource *)0x0)) {
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                      (pAVar4,(pPVar1->fields)._.fireSoundEffectVolume * _UNK_?,
                       (MethodInfo *)0x0);
            pAVar4 = (this->fields)._.alternativeAudioSource;
            pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
               (pAVar4 != (AudioSource *)0x0)) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                        (pAVar4,(pPVar1->fields).chargeSoundEffectVolume * _UNK_?,
                         (MethodInfo *)0x0);
              pAVar4 = (this->fields).bulletAudioSource;
              pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
              if ((pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) &&
                 (pAVar4 != (AudioSource *)0x0)) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                          (pAVar4,(pPVar1->fields)._.hitSoundEffectVolume * _UNK_?,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_TriggerBegin
               (PickupItemCustomGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar1->fields).chargeEnabled == 0) {
      pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
        iVar2 = (pPVar1->fields).fireMode;
        if (iVar2 != 0) {
          if ((iVar2 == 1) || (iVar2 == 2)) {
            (this->fields)._._.isFiring = 1;
          }
          return;
        }
        PickupItemWithDelay::PickupItemWithDelay_TriggerBegin
                  ((PickupItemWithDelay *)this,instigatorActorNr,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((this->fields).chargeRoutine != (IEnumerator *)0x0) {
        Coroutines::Coroutines_Stop((this->fields).chargeRoutine,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__72
                       );
        cRam_? = '\x01';
      }
      this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
                func_?(
                               TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__72
                               );
      SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
                (this_00,0,(MethodInfo *)0x0);
      if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
        this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
        func_?(this_00 + 1,this);
        (this->fields).chargeRoutine = (IEnumerator *)this_00;
        func_?(&(this->fields).chargeRoutine,this_00);
        Coroutines::Coroutines_Start((this->fields).chargeRoutine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_TriggerEnd(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&StringLiteral_minigun);
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
            uVar4 = *(undefined4 *)&(this->fields).initialFOV.inited;
            iVar5 = (this->fields).initialFOV.currentCryptoKey;
            AVar6 = (this->fields).initialFOV.hiddenValue;
            pBVar7 = (this->fields).initialFOV.hiddenValueOld;
            fVar8 = (this->fields).initialFOV.fakeValue;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value.hiddenValue = AVar6;
            value.currentCryptoKey = iVar5;
            value.hiddenValueOld = pBVar7;
            value.fakeValue = fVar8;
            value._16_4_ = uVar4;
            fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
            if (this_00 == (Camera *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                      (this_00,fVar8,(MethodInfo *)0x0);
            Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1((this->fields).initialMouseSensitivity,(MethodInfo *)0x0);
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            func_?();
          }
        }
      }
      if (fireMode == CustomGunData_FireMode__Enum_Semi) {
        PickupItemWithDelay::PickupItemWithDelay_TriggerEnd
                  ((PickupItemWithDelay *)this,(MethodInfo *)0x0);
        return;
      }
      if (fireMode == CustomGunData_FireMode__Enum_Auto) {
        pPVar9 = this->klass;
        (this->fields)._._.isFiring = 0;
        a = (String *)
            (*(code *)(pPVar9->vtable).get_FireSoundEffectName.method)
                      (this,(pPVar9->vtable).get_HitSoundEffectName.methodPtr);
        bVar10 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_minigun,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          this_01 = (this->fields)._.fireAudioSource;
          if (this_01 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (this_01,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* PickupItemCustomGun() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::PickupItemCustomGun__ctor
               (PickupItemCustomGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = fVar3;
  (this->fields)._._.crossHairCanFire.b = fVar2;
  (this->fields)._._.crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields)._._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._._.fireInterval.hiddenValue = AVar6;
  (this->fields)._._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._._.fireInterval.fakeValue = fVar3;
  (this->fields)._._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_AttackAnimationName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CustomGunRecoil);
    cRam_? = '\x01';
  }
  return StringLiteral_CustomGunRecoil;
}


/* Boolean get_CanHolster() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_get_CanHolster(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    return 0;
  }
  value = (this->fields).firedInBurst;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1 == 0;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
      PickupItemCustomGun_get_ChargeState(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  value = (this->fields).currentCharge;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  return fVar1;
}


/* PickupItemCustomGun+CustomGunConfiguration get_Configuration() */

PickupItemCustomGun_CustomGunConfiguration *
Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
PickupItemCustomGun_get_Configuration(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
                   );
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemCustomGun_CustomGunConfiguration *)
           (this->fields)._._Configuration_k__BackingField;
  if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    return (PickupItemCustomGun_CustomGunConfiguration *)0x0;
  }
  if (((TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
       naturalAligment <= (pPVar1->klass->_1).naturalAligment) &&
     ((pPVar1->klass->_1).typeHierarchy
      [(TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration->_1).
       naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration
     )) {
    return pPVar1;
  }
  func_?(pPVar1,
                  TypeInfo__Assets__Scripts__Pickups__PickupItemCustomGun__CustomGunConfiguration);
  pcVar2 = (code *)swi(3);
  pPVar1 = (PickupItemCustomGun_CustomGunConfiguration *)(*pcVar2)();
  return pPVar1;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
        PickupItemCustomGun_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pCVar3 = (Color *)(*pcVar2)();
    return pCVar3;
  }
  if ((pPVar1->fields).chargeEnabled == 0) {
    pCVar3 = PickupItemWithDelay::PickupItemWithDelay_get_CrossHairColor
                       ((Color *)&stack0xffffffc8,(PickupItemWithDelay *)this,(MethodInfo *)0x0);
    fVar4 = pCVar3->g;
    fVar5 = pCVar3->b;
    fVar6 = pCVar3->a;
    __return_storage_ptr__->r = pCVar3->r;
    __return_storage_ptr__->g = fVar4;
    __return_storage_ptr__->b = fVar5;
    __return_storage_ptr__->a = fVar6;
    return __return_storage_ptr__;
  }
  iVar7 = (this->fields).currentCharge.currentCryptoKey;
  AVar8 = (this->fields).currentCharge.hiddenValue;
  pBVar9 = (this->fields).currentCharge.hiddenValueOld;
  fVar4 = (this->fields).currentCharge.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar8;
  value.currentCryptoKey = iVar7;
  value.hiddenValueOld = pBVar9;
  value.fakeValue = fVar4;
  value.inited = (this->fields).currentCharge.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).currentCharge.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((fVar4 < _UNK_?) && ((this->fields)._._.isFiring == 0)) {
    fVar10 = (this->fields)._._.crossHairCannotFireLow.b;
    fVar11 = (this->fields)._._.crossHairCannotFireLow.a;
    fVar12 = (this->fields)._._.crossHairCannotFireHigh.r;
    fVar13 = (this->fields)._._.crossHairCannotFireHigh.g;
    fVar14 = (this->fields)._._.crossHairCannotFireHigh.b;
    fVar15 = (this->fields)._._.crossHairCannotFireHigh.a;
    fVar5 = (float)(this->fields).currentCharge.currentCryptoKey;
    AVar8 = (this->fields).currentCharge.hiddenValue;
    pBVar9 = (this->fields).currentCharge.hiddenValueOld;
    fVar6 = (this->fields).currentCharge.fakeValue;
    fVar4 = *(float *)&(this->fields).currentCharge.inited;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar16 = 0.0;
    value_00.hiddenValue = AVar8;
    value_00.currentCryptoKey = (int32_t)fVar5;
    value_00.hiddenValueOld = pBVar9;
    value_00.fakeValue = fVar6;
    value_00._16_4_ = fVar4;
    fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    __return_storage_ptr__->r = (fVar12 - fVar4) * fVar5 + fVar4;
    __return_storage_ptr__->g = (fVar13 - fVar16) * fVar5 + fVar16;
    __return_storage_ptr__->b = (fVar14 - fVar10) * fVar5 + fVar10;
    __return_storage_ptr__->a = (fVar15 - fVar11) * fVar5 + fVar11;
    return __return_storage_ptr__;
  }
  fVar4 = (this->fields)._._.crossHairCanFire.g;
  fVar5 = (this->fields)._._.crossHairCanFire.b;
  fVar6 = (this->fields)._._.crossHairCanFire.a;
  __return_storage_ptr__->r = (this->fields)._._.crossHairCanFire.r;
  __return_storage_ptr__->g = fVar4;
  __return_storage_ptr__->b = fVar5;
  __return_storage_ptr__->a = fVar6;
  return __return_storage_ptr__;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_FireSoundEffectName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           fireSoundEffects;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.fireSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
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
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
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
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
         PickupItemCustomGun_get_HitSoundEffectName(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           hitSoundEffects;
  pPVar2 = PickupItemCustomGun_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.hitSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
     PickupItemCustomGun_get_IsAmmoDepleted(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun::
        PickupItemCustomGun_get_Quantity(PickupItemCustomGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

