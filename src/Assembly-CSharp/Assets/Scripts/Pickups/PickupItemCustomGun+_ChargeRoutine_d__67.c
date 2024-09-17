
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__67::
     PickupItemCustomGun_ChargeRoutine_d_67_MoveNext
               (PickupItemCustomGun_ChargeRoutine_d_67 *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffec,1,(MethodInfo *)0x0);
    uVar4 = *(undefined3 *)&pOVar3->field_0x1;
    iVar5 = pOVar3->hiddenValue;
    bVar6 = pOVar3->fakeValue;
    bVar7 = pOVar3->fakeValueChanged;
    bVar8 = pOVar3->inited;
    uVar9 = pOVar3->field_0xb;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
    (this_00->fields).isCharging.currentCryptoKey = pOVar3->currentCryptoKey;
    *(undefined3 *)&(this_00->fields).isCharging.field_0x1 = uVar4;
    (this_00->fields).isCharging.hiddenValue = iVar5;
    (this_00->fields).isCharging.fakeValue = bVar6;
    (this_00->fields).isCharging.fakeValueChanged = bVar7;
    (this_00->fields).isCharging.inited = bVar8;
    (this_00->fields).isCharging.field_0xb = uVar9;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._chargeBeginTime_5__2 = fVar10;
    AVar11 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar12 = (this_00->fields).initialFOV.hiddenValue;
    pBVar13 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar10 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value.hiddenValue = AVar12;
    value.currentCryptoKey._0_1_ = AVar11.b1;
    value.currentCryptoKey._1_1_ = AVar11.b2;
    value.currentCryptoKey._2_1_ = AVar11.b3;
    value.currentCryptoKey._3_1_ = AVar11.b4;
    value.hiddenValueOld = pBVar13;
    value.fakeValue = fVar10;
    value.inited = (this_00->fields).initialFOV.inited;
    value._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    fVar10 = fVar10 - (pPVar14->fields).chargeZoomAmmount;
    (this->fields)._targetFieldOfView_5__3 = fVar10;
    fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1((this_00->fields).initialFOV,(MethodInfo *)0x0);
    fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1
                       ((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    (this->fields)._targetMouseSensitivity_5__4 = fVar16 * (fVar10 / fVar15);
    pCVar17 = (this_00->fields).chargeAudioPlayer;
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pCVar17 == (CustomItemAudioPlayer *)0x0)) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar17,(pPVar14->fields).chargeSoundEffect,1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if ((pPVar14->fields).chargeParticlesEnabled == 0) goto code_?;
    pPVar18 = (this_00->fields).chargeParticles;
    if (pPVar18 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar18,(MethodInfo *)0x0);
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_67 *)(fVar10 - (this->fields)._chargeBeginTime_5__2)
    ;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
code_?:
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_67 *)(fVar10 - (this->fields)._chargeBeginTime_5__2)
    ;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
  }
  pAVar19 = (this_00->fields).chargeCurve;
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar19 == (AnimationCurve *)0x0)) goto code_?;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar19,(float)this / (pPVar14->fields).chargeTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar10,(MethodInfo *)0x0);
  AVar11 = pOVar20->hiddenValue;
  pBVar13 = pOVar20->hiddenValueOld;
  fVar10 = pOVar20->fakeValue;
  bVar6 = pOVar20->inited;
  uVar4 = *(undefined3 *)&pOVar20->field_0x11;
  (this_00->fields).currentCharge.currentCryptoKey = pOVar20->currentCryptoKey;
  (this_00->fields).currentCharge.hiddenValue = AVar11;
  (this_00->fields).currentCharge.hiddenValueOld = pBVar13;
  (this_00->fields).currentCharge.fakeValue = fVar10;
  (this_00->fields).currentCharge.inited = bVar6;
  *(undefined3 *)&(this_00->fields).currentCharge.field_0x11 = uVar4;
  func_?();
  pAVar19 = (this_00->fields).chargeCurve;
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar19 == (AnimationCurve *)0x0)) goto code_?;
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar19,(float)this / (pPVar14->fields).chargeZoomTime,(MethodInfo *)0x0);
  pCVar17 = (this_00->fields).chargeAudioPlayer;
  fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1((this_00->fields).currentCharge,(MethodInfo *)0x0);
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  else if (_UNK_? < fVar10) {
    fVar10 = _UNK_?;
  }
  if (pCVar17 == (CustomItemAudioPlayer *)0x0) goto code_?;
  CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch
            (pCVar17,fVar10 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
  pMVar21 = (this_00->fields)._._._.owner;
  if (pMVar21 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar21->fields)._IsLocal_k__BackingField == 0) {
code_?:
    pMVar21 = (this_00->fields)._._._.owner;
    if (pMVar21 == (MVPickupOwner *)0x0) goto code_?;
    if ((pMVar21->fields)._IsLocal_k__BackingField != 0) {
      pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration
                          (this_00,(MethodInfo *)0x0);
      if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      if (((pPVar14->fields).chargeZoomEnabled != 0) && ((this_00->fields).canDoFOVZoom == 0)) {
        pMVar22 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar22 == (MainCameraManager *)0x0) goto code_?;
        pCVar23 = (pMVar22->fields).mainCamera;
        AVar11 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
        AVar12 = (this_00->fields).initialFOV.hiddenValue;
        pBVar13 = (this_00->fields).initialFOV.hiddenValueOld;
        fVar10 = (this_00->fields).initialFOV.fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_02.hiddenValue = AVar12;
        value_02.currentCryptoKey._0_1_ = AVar11.b1;
        value_02.currentCryptoKey._1_1_ = AVar11.b2;
        value_02.currentCryptoKey._2_1_ = AVar11.b3;
        value_02.currentCryptoKey._3_1_ = AVar11.b4;
        value_02.hiddenValueOld = pBVar13;
        value_02.fakeValue = fVar10;
        value_02.inited = (this_00->fields).initialFOV.inited;
        value_02._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
        fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_02,(MethodInfo *)0x0);
        if (pCVar23 == (Camera *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar23,fVar10,(MethodInfo *)0x0);
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
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if (((pPVar14->fields).chargeZoomEnabled == 0) || ((this_00->fields).canDoFOVZoom == 0))
    goto code_?;
    pMVar22 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar22 == (MainCameraManager *)0x0) goto code_?;
    pCVar23 = (pMVar22->fields).mainCamera;
    uVar24 = *(undefined4 *)&(this_00->fields).initialFOV.inited;
    AVar11 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar12 = (this_00->fields).initialFOV.hiddenValue;
    pBVar13 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar10 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_01.hiddenValue = AVar12;
    value_01.currentCryptoKey._0_1_ = AVar11.b1;
    value_01.currentCryptoKey._1_1_ = AVar11.b2;
    value_01.currentCryptoKey._2_1_ = AVar11.b3;
    value_01.currentCryptoKey._3_1_ = AVar11.b4;
    value_01.hiddenValueOld = pBVar13;
    value_01.fakeValue = fVar10;
    value_01._16_4_ = uVar24;
    fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
    fVar10 = 0.0;
    if ((0.0 <= fVar15) && (fVar10 = _UNK_?, fVar15 <= _UNK_?)) {
      fVar10 = fVar15;
    }
    if (pCVar23 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar23,((pPVar1->fields)._targetFieldOfView_5__3 - fVar16) * fVar10 + fVar16,
               (MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
code_?:
    func_?();
  }
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if (pPVar14 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar14->fields).chargeParticlesEnabled != 0) {
      AVar11 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar12 = (this_00->fields).currentCharge.hiddenValue;
      pBVar13 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar10 = (this_00->fields).currentCharge.fakeValue;
      pPVar18 = (this_00->fields).chargeParticles;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_00.hiddenValue = AVar12;
      value_00.currentCryptoKey._0_1_ = AVar11.b1;
      value_00.currentCryptoKey._1_1_ = AVar11.b2;
      value_00.currentCryptoKey._2_1_ = AVar11.b3;
      value_00.currentCryptoKey._3_1_ = AVar11.b4;
      value_00.hiddenValueOld = pBVar13;
      value_00.fakeValue = fVar10;
      value_00.inited = (this_00->fields).currentCharge.inited;
      value_00._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (pPVar18 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
                (pPVar18,fVar10,(MethodInfo *)0x0);
    }
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fireMode = (pPVar14->fields).fireMode;
      AVar11 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar12 = (this_00->fields).currentCharge.hiddenValue;
      pBVar13 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar10 = (this_00->fields).currentCharge.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_03.hiddenValue = AVar12;
      value_03.currentCryptoKey._0_1_ = AVar11.b1;
      value_03.currentCryptoKey._1_1_ = AVar11.b2;
      value_03.currentCryptoKey._2_1_ = AVar11.b3;
      value_03.currentCryptoKey._3_1_ = AVar11.b4;
      value_03.hiddenValueOld = pBVar13;
      value_03.fakeValue = fVar10;
      value_03.inited = (this_00->fields).currentCharge.inited;
      value_03._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_03,(MethodInfo *)0x0);
      if ((_UNK_? <= fVar10) &&
         ((fireMode == CustomGunData_FireMode__Enum_Auto ||
          (fireMode == CustomGunData_FireMode__Enum_Burst)))) {
        (this_00->fields)._._.isFiring = 1;
        PickupItemCustomGun::PickupItemCustomGun_FireWithCharge(this_00,fireMode,(MethodInfo *)0x0);
      }
      (pPVar1->fields).__2__current = (Object *)0x0;
      func_?();
      (pPVar1->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar6 = (*pcVar25)();
  return bVar6;
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

