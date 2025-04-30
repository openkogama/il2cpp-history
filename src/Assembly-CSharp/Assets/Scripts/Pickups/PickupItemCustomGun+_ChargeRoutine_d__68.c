
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__68::
     PickupItemCustomGun_ChargeRoutine_d_68_MoveNext
               (PickupItemCustomGun_ChargeRoutine_d_68 *this,MethodInfo *method)

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
      ppOVar4 = &(this->fields).__2__current;
      *ppOVar4 = (Object *)0x0;
      func_?(ppOVar4);
      (this->fields).__1__state = 1;
      return 1;
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._chargeBeginTime_5__2 = fVar5;
    AVar6 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar7 = (this_00->fields).initialFOV.hiddenValue;
    pBVar8 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar5 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar7;
    value.currentCryptoKey._0_1_ = AVar6.b1;
    value.currentCryptoKey._1_1_ = AVar6.b2;
    value.currentCryptoKey._2_1_ = AVar6.b3;
    value.currentCryptoKey._3_1_ = AVar6.b4;
    value.hiddenValueOld = pBVar8;
    value.fakeValue = fVar5;
    value.inited = (this_00->fields).initialFOV.inited;
    value._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
    fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    fVar5 = fVar5 - (pPVar9->fields).chargeZoomAmmount;
    (this->fields)._targetFieldOfView_5__3 = fVar5;
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1((this_00->fields).initialFOV,(MethodInfo *)0x0);
    fVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1
                       ((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    (this->fields)._targetMouseSensitivity_5__4 = fVar11 * (fVar5 / fVar10);
    pCVar12 = (this_00->fields).chargeAudioPlayer;
    pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if ((pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pCVar12 == (CustomItemAudioPlayer *)0x0)) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar12,(pPVar9->fields).chargeSoundEffect,1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if ((pPVar9->fields).chargeParticlesEnabled == 0) goto code_?;
    pPVar13 = (this_00->fields).chargeParticles;
    if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar13,(MethodInfo *)0x0);
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_68 *)(fVar5 - (this->fields)._chargeBeginTime_5__2)
    ;
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
code_?:
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this = (PickupItemCustomGun_ChargeRoutine_d_68 *)(fVar5 - (this->fields)._chargeBeginTime_5__2)
    ;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
  }
  pAVar14 = (this_00->fields).chargeCurve;
  pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar14 == (AnimationCurve *)0x0)) goto code_?;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar14,(float)this / (pPVar9->fields).chargeTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe0,fVar5,(MethodInfo *)0x0);
  AVar6 = pOVar15->hiddenValue;
  pBVar8 = pOVar15->hiddenValueOld;
  fVar5 = pOVar15->fakeValue;
  bVar3 = pOVar15->inited;
  uVar16 = *(undefined3 *)&pOVar15->field_0x11;
  (this_00->fields).currentCharge.currentCryptoKey = pOVar15->currentCryptoKey;
  (this_00->fields).currentCharge.hiddenValue = AVar6;
  (this_00->fields).currentCharge.hiddenValueOld = pBVar8;
  (this_00->fields).currentCharge.fakeValue = fVar5;
  (this_00->fields).currentCharge.inited = bVar3;
  *(undefined3 *)&(this_00->fields).currentCharge.field_0x11 = uVar16;
  func_?();
  pAVar14 = (this_00->fields).chargeCurve;
  pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar14 == (AnimationCurve *)0x0)) goto code_?;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar14,(float)this / (pPVar9->fields).chargeZoomTime,(MethodInfo *)0x0);
  pCVar12 = (this_00->fields).chargeAudioPlayer;
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1((this_00->fields).currentCharge,(MethodInfo *)0x0);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (_UNK_? < fVar5) {
    fVar5 = _UNK_?;
  }
  if (pCVar12 == (CustomItemAudioPlayer *)0x0) goto code_?;
  CustomItemAudioPlayer::CustomItemAudioPlayer_SetPitch
            (pCVar12,fVar5 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
  pMVar17 = (this_00->fields)._._._.owner;
  if (pMVar17 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar17->fields)._IsLocal_k__BackingField == 0) {
code_?:
    pMVar17 = (this_00->fields)._._._.owner;
    if (pMVar17 == (MVPickupOwner *)0x0) goto code_?;
    if ((pMVar17->fields)._IsLocal_k__BackingField != 0) {
      pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration
                          (this_00,(MethodInfo *)0x0);
      if (pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
      if (((pPVar9->fields).chargeZoomEnabled != 0) && ((this_00->fields).canDoFOVZoom == 0)) {
        pMVar18 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar18 == (MainCameraManager *)0x0) goto code_?;
        pCVar19 = (pMVar18->fields).mainCamera;
        AVar6 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
        AVar7 = (this_00->fields).initialFOV.hiddenValue;
        pBVar8 = (this_00->fields).initialFOV.hiddenValueOld;
        fVar5 = (this_00->fields).initialFOV.fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        value_02.hiddenValue = AVar7;
        value_02.currentCryptoKey._0_1_ = AVar6.b1;
        value_02.currentCryptoKey._1_1_ = AVar6.b2;
        value_02.currentCryptoKey._2_1_ = AVar6.b3;
        value_02.currentCryptoKey._3_1_ = AVar6.b4;
        value_02.hiddenValueOld = pBVar8;
        value_02.fakeValue = fVar5;
        value_02.inited = (this_00->fields).initialFOV.inited;
        value_02._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
        fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_02,(MethodInfo *)0x0);
        if (pCVar19 == (Camera *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar19,fVar5,(MethodInfo *)0x0);
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
    pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar9 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if (((pPVar9->fields).chargeZoomEnabled == 0) || ((this_00->fields).canDoFOVZoom == 0))
    goto code_?;
    pMVar18 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar18 == (MainCameraManager *)0x0) goto code_?;
    pCVar19 = (pMVar18->fields).mainCamera;
    AVar6 = (ACTkByte4)(this_00->fields).initialFOV.currentCryptoKey;
    AVar7 = (this_00->fields).initialFOV.hiddenValue;
    pBVar8 = (this_00->fields).initialFOV.hiddenValueOld;
    fVar5 = (this_00->fields).initialFOV.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_01.hiddenValue = AVar7;
    value_01.currentCryptoKey._0_1_ = AVar6.b1;
    value_01.currentCryptoKey._1_1_ = AVar6.b2;
    value_01.currentCryptoKey._2_1_ = AVar6.b3;
    value_01.currentCryptoKey._3_1_ = AVar6.b4;
    value_01.hiddenValueOld = pBVar8;
    value_01.fakeValue = fVar5;
    value_01.inited = (this_00->fields).initialFOV.inited;
    value_01._17_3_ = *(undefined3 *)&(this_00->fields).initialFOV.field_0x11;
    fVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
    fVar5 = 0.0;
    if ((0.0 <= fVar10) && (fVar5 = _UNK_?, fVar10 <= _UNK_?)) {
      fVar5 = fVar10;
    }
    if (pCVar19 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar19,((pPVar1->fields)._targetFieldOfView_5__3 - fVar11) * fVar5 + fVar11,
               (MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1((this_00->fields).initialMouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
code_?:
    func_?();
  }
  pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if (pPVar9 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar9->fields).chargeParticlesEnabled != 0) {
      AVar6 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar7 = (this_00->fields).currentCharge.hiddenValue;
      pBVar8 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar5 = (this_00->fields).currentCharge.fakeValue;
      pPVar13 = (this_00->fields).chargeParticles;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_00.hiddenValue = AVar7;
      value_00.currentCryptoKey._0_1_ = AVar6.b1;
      value_00.currentCryptoKey._1_1_ = AVar6.b2;
      value_00.currentCryptoKey._2_1_ = AVar6.b3;
      value_00.currentCryptoKey._3_1_ = AVar6.b4;
      value_00.hiddenValueOld = pBVar8;
      value_00.fakeValue = fVar5;
      value_00.inited = (this_00->fields).currentCharge.inited;
      value_00._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
                (pPVar13,fVar5,(MethodInfo *)0x0);
    }
    pPVar9 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar9 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fireMode = (pPVar9->fields).fireMode;
      AVar6 = (ACTkByte4)(this_00->fields).currentCharge.currentCryptoKey;
      AVar7 = (this_00->fields).currentCharge.hiddenValue;
      pBVar8 = (this_00->fields).currentCharge.hiddenValueOld;
      fVar5 = (this_00->fields).currentCharge.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_03.hiddenValue = AVar7;
      value_03.currentCryptoKey._0_1_ = AVar6.b1;
      value_03.currentCryptoKey._1_1_ = AVar6.b2;
      value_03.currentCryptoKey._2_1_ = AVar6.b3;
      value_03.currentCryptoKey._3_1_ = AVar6.b4;
      value_03.hiddenValueOld = pBVar8;
      value_03.fakeValue = fVar5;
      value_03.inited = (this_00->fields).currentCharge.inited;
      value_03._17_3_ = *(undefined3 *)&(this_00->fields).currentCharge.field_0x11;
      fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_03,(MethodInfo *)0x0);
      if ((_UNK_? <= fVar5) &&
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
  pcVar20 = (code *)swi(3);
  bVar3 = (*pcVar20)();
  return bVar3;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__68::
     PickupItemCustomGun_ChargeRoutine_d_68_System_Collections_IEnumerator_Reset
               (PickupItemCustomGun_ChargeRoutine_d_68 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__68__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

