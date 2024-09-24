
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__67::
     PickupItemCustomGun_ChargeRoutine_d_67_MoveNext
               (PickupItemCustomGun_ChargeRoutine_d_67 *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
    bVar3 = PickupItemWithDelay::PickupItemWithDelay_get_IsOnCooldown
                       ((PickupItemWithDelay *)this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current);
      (this->fields).__1__state = 1;
      return 1;
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._chargeBeginTime_5__2 = fVar4;
    AVar5 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar6 = (this_00->fields).initialFOV.hiddenValue;
    pBVar7 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar4 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar6;
    value.currentCryptoKey._0_1_ = AVar5.b1;
    value.currentCryptoKey._1_1_ = AVar5.b2;
    value.currentCryptoKey._2_1_ = AVar5.b3;
    value.currentCryptoKey._3_1_ = AVar5.b4;
    value.hiddenValueOld = pBVar7;
    value.fakeValue = fVar4;
    value.inited = (this_00->fields).initialFOV.inited;
    value._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    fVar4 = fVar4 - (pPVar8->fields).chargeZoomAmmount;
    (this->fields)._targetFieldOfView_5__3 = fVar4;
    fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1((this_00->fields).initialFOV,(MethodInfo *)0x0);
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1
                       ((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    (this->fields)._targetMouseSensitivity_5__4 = fVar10 * (fVar4 / fVar9);
    pCVar11 = (this_00->fields).chargeAudioPlayer;
    pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if ((pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pCVar11 == (CustomItemAudioPlayer *)0x0)) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar11,(pPVar8->fields).chargeSoundEffect,1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if ((pPVar8->fields).chargeParticlesEnabled == 0) goto code_?;
    pPVar12 = (this_00->fields).chargeParticles;
    if (pPVar12 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar12,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_67 *)(fVar4 - (this->fields)._chargeBeginTime_5__2)
    ;
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
code_?:
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_67 *)(fVar4 - (this->fields)._chargeBeginTime_5__2)
    ;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
  }
  pAVar13 = (this_00->fields).chargeCurve;
  pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar13 == (AnimationCurve *)0x0)) goto code_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar13,(float)this / (pPVar8->fields).chargeTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar4,(MethodInfo *)0x0);
  AVar5 = pOVar14->hiddenValue;
  pBVar7 = pOVar14->hiddenValueOld;
  fVar4 = pOVar14->fakeValue;
  bVar3 = pOVar14->inited;
  uVar15 = *(undefined3 *)&pOVar14->field_0x11;
  (this_00->fields).currentCharge.currentCryptoKey = pOVar14->currentCryptoKey;
  (this_00->fields).currentCharge.hiddenValue = AVar5;
  (this_00->fields).currentCharge.hiddenValueOld = pBVar7;
  (this_00->fields).currentCharge.fakeValue = fVar4;
  (this_00->fields).currentCharge.inited = bVar3;
  *(undefined3 *)&(this_00->fields).currentCharge.field_0x11 = uVar15;
  func_?();
  pAVar13 = (this_00->fields).chargeCurve;
  pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar13 == (AnimationCurve *)0x0)) goto code_?;
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar13,(float)this / (pPVar8->fields).chargeZoomTime,(MethodInfo *)0x0);
  pCVar11 = (this_00->fields).chargeAudioPlayer;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1((this_00->fields).currentCharge,(MethodInfo *)0x0);
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  if (pCVar11 == (CustomItemAudioPlayer *)0x0) goto code_?;
  CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch
            (pCVar11,fVar4 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
  pMVar16 = (this_00->fields)._._._.owner;
  if (pMVar16 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar16->fields)._IsLocal_k__BackingField == 0) {
code_?:
    pMVar16 = (this_00->fields)._._._.owner;
    if (pMVar16 == (MVPickupOwner *)0x0) goto code_?;
    if ((pMVar16->fields)._IsLocal_k__BackingField != 0) {
      pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration
                          (this_00,(MethodInfo *)0x0);
      if (pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      if (((pPVar8->fields).chargeZoomEnabled != 0) && ((this_00->fields).canDoFOVZoom == 0)) {
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar17 == (MainCameraManager *)0x0) goto code_?;
        pCVar18 = (pMVar17->fields).mainCamera;
        AVar5 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
        AVar6 = (this_00->fields).initialFOV.hiddenValue;
        pBVar7 = (this_00->fields).initialFOV.hiddenValueOld;
        fVar4 = (this_00->fields).initialFOV.fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        value_02.hiddenValue = AVar6;
        value_02.currentCryptoKey._0_1_ = AVar5.b1;
        value_02.currentCryptoKey._1_1_ = AVar5.b2;
        value_02.currentCryptoKey._2_1_ = AVar5.b3;
        value_02.currentCryptoKey._3_1_ = AVar5.b4;
        value_02.hiddenValueOld = pBVar7;
        value_02.fakeValue = fVar4;
        value_02.inited = (this_00->fields).initialFOV.inited;
        value_02._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
        fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_02,(MethodInfo *)0x0);
        if (pCVar18 == (Camera *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar18,fVar4,(MethodInfo *)0x0);
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_op_Implicit_1((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        goto code_?;
      }
    }
  }
  else {
    pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar8 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if (((pPVar8->fields).chargeZoomEnabled == 0) || ((this_00->fields).canDoFOVZoom == 0))
    goto code_?;
    pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar17 == (MainCameraManager *)0x0) goto code_?;
    pCVar18 = (pMVar17->fields).mainCamera;
    AVar5 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar6 = (this_00->fields).initialFOV.hiddenValue;
    pBVar7 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar4 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_01.hiddenValue = AVar6;
    value_01.currentCryptoKey._0_1_ = AVar5.b1;
    value_01.currentCryptoKey._1_1_ = AVar5.b2;
    value_01.currentCryptoKey._2_1_ = AVar5.b3;
    value_01.currentCryptoKey._3_1_ = AVar5.b4;
    value_01.hiddenValueOld = pBVar7;
    value_01.fakeValue = fVar4;
    value_01.inited = (this_00->fields).initialFOV.inited;
    value_01._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
    fVar4 = 0.0;
    if ((0.0 <= fVar9) && (fVar4 = _UNK_?, fVar9 <= _UNK_?)) {
      fVar4 = fVar9;
    }
    if (pCVar18 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar18,((pPVar1->fields)._targetFieldOfView_5__3 - fVar10) * fVar4 + fVar10,
               (MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
code_?:
    func_?();
  }
  pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar8->fields).chargeParticlesEnabled != 0) {
      AVar5 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar6 = (this_00->fields).currentCharge.hiddenValue;
      pBVar7 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar4 = (this_00->fields).currentCharge.fakeValue;
      pPVar12 = (this_00->fields).chargeParticles;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_00.hiddenValue = AVar6;
      value_00.currentCryptoKey._0_1_ = AVar5.b1;
      value_00.currentCryptoKey._1_1_ = AVar5.b2;
      value_00.currentCryptoKey._2_1_ = AVar5.b3;
      value_00.currentCryptoKey._3_1_ = AVar5.b4;
      value_00.hiddenValueOld = pBVar7;
      value_00.fakeValue = fVar4;
      value_00.inited = (this_00->fields).currentCharge.inited;
      value_00._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (pPVar12 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
                (pPVar12,fVar4,(MethodInfo *)0x0);
    }
    pPVar8 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar8 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fireMode = (pPVar8->fields).fireMode;
      AVar5 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar6 = (this_00->fields).currentCharge.hiddenValue;
      pBVar7 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar4 = (this_00->fields).currentCharge.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_03.hiddenValue = AVar6;
      value_03.currentCryptoKey._0_1_ = AVar5.b1;
      value_03.currentCryptoKey._1_1_ = AVar5.b2;
      value_03.currentCryptoKey._2_1_ = AVar5.b3;
      value_03.currentCryptoKey._3_1_ = AVar5.b4;
      value_03.hiddenValueOld = pBVar7;
      value_03.fakeValue = fVar4;
      value_03.inited = (this_00->fields).currentCharge.inited;
      value_03._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_03,(MethodInfo *)0x0);
      if ((_UNK_? <= fVar4) &&
         ((fireMode == CustomGunData_FireMode__Enum_Auto ||
          (fireMode == CustomGunData_FireMode__Enum_Burst)))) {
        (this_00->fields)._._.isFiring = 1;
        PickupItemCustomGun::PickupItemCustomGun_FireWithCharge(this_00,fireMode,(MethodInfo *)0x0);
      }
      (pPVar1->fields).__2__current = (Object *)0x0;
      func_?();
      (pPVar1->fields).__1__state = 2;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  bVar3 = (*pcVar19)();
  return bVar3;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__67::
     PickupItemCustomGun_ChargeRoutine_d_67_System_Collections_IEnumerator_Reset
               (PickupItemCustomGun_ChargeRoutine_d_67 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__67__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

