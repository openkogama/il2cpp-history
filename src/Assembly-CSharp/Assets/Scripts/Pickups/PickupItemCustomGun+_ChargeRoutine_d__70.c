
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__70::
     PickupItemCustomGun_ChargeRoutine_d_70_MoveNext
               (PickupItemCustomGun_ChargeRoutine_d_70 *this,MethodInfo *method)

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
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
    bVar2 = PickupItemWithDelay::PickupItemWithDelay_get_IsOnCooldown
                       ((PickupItemWithDelay *)this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      bVar3 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
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
      (this->fields).__1__state = 1;
      return 1;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar2 = (*pcVar8)();
      return bVar2;
    }
    pcRam_? = pcVar8;
    fVar10 = (float)(*pcRam_?)();
    (this->fields)._chargeBeginTime_5__2 = fVar10;
    pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).initialFOV;
    pBStack_12 = (this_00->fields).initialFOV.hiddenValueOld;
    pIStack_13 = *(InvokerMethod *)&(this_00->fields).initialFOV.fakeValue;
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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    bVar3 = cRam_? == '\0';
    fVar10 = fVar10 - (pPVar14->fields).chargeZoomAmmount;
    (this->fields)._targetFieldOfView_5__3 = fVar10;
    pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).initialFOV;
    pBStack_12 = (this_00->fields).initialFOV.hiddenValueOld;
    pIStack_13 = *(InvokerMethod *)&(this_00->fields).initialFOV.fakeValue;
    if (bVar3) {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
    pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).initialMouseSensitivity;
    pBStack_12 = (this_00->fields).initialMouseSensitivity.hiddenValueOld;
    pIStack_13 = *(InvokerMethod *)&(this_00->fields).initialMouseSensitivity.fakeValue;
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
    fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
    (this->fields)._targetMouseSensitivity_5__4 = fVar16 * (fVar10 / fVar15);
    pCVar17 = (this_00->fields).chargeAudioPlayer;
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
       (pIStack_11 = (Il2CppMethodPointer)0x0, pCVar17 == (CustomItemAudioPlayer *)0x0))
    goto code_?;
    in_R9 = (MethodInfo *)&pIStack_11;
    pBStack_12 = (Byte__Array *)((ulonglong)pBStack_12 & 0xffffffff00000000);
    pIStack_11 = (Il2CppMethodPointer)0x0;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar17,(pPVar14->fields).chargeSoundEffect,1,(Vector3 *)in_R9,(MethodInfo *)0x0);
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) goto code_?;
    if ((pPVar14->fields).chargeParticlesEnabled != 0) {
      pPVar18 = (this_00->fields).chargeParticles;
      if (pPVar18 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar18,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  pcRam_? = pcVar8;
  fVar10 = (float)(*pcRam_?)();
  fVar10 = fVar10 - (this->fields)._chargeBeginTime_5__2;
  if (this_00 == (PickupItemCustomGun *)0x0) goto code_?;
  pAVar19 = (this_00->fields).chargeCurve;
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar19 == (AnimationCurve *)0x0)) goto code_?;
  pvVar20 = (pAVar19->fields).m_Ptr;
  if (pvVar20 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar19,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  fVar15 = (pPVar14->fields).chargeTime;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  pcRam_? = pcVar8;
  fVar15 = (float)(*pcRam_?)(pvVar20,fVar10 / fVar15);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIStack_13 = (InvokerMethod)0x0;
  pIStack_11 = (Il2CppMethodPointer)0x0;
  pBStack_12 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar15,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&pIStack_11,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pIStack_13 = (InvokerMethod)CONCAT44(pIStack_13._4_4_,fVar15);
  }
  bVar3 = iRam_? != 0;
  *(Il2CppMethodPointer *)&(this_00->fields).currentCharge = pIStack_11;
  (this_00->fields).currentCharge.hiddenValueOld = pBStack_12;
  *(InvokerMethod *)&(this_00->fields).currentCharge.fakeValue = pIStack_13;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this_00->fields).currentCharge.hiddenValueOld >> 0xc);
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
  pAVar19 = (this_00->fields).chargeCurve;
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if ((pPVar14 == (PickupItemCustomGun_CustomGunConfiguration *)0x0) ||
     (pAVar19 == (AnimationCurve *)0x0)) goto code_?;
  pvVar20 = (pAVar19->fields).m_Ptr;
  if (pvVar20 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar19,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  fVar15 = (pPVar14->fields).chargeZoomTime;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    bVar2 = (*pcVar8)();
    return bVar2;
  }
  pcRam_? = pcVar8;
  fVar10 = (float)(*pcRam_?)(pvVar20,fVar10 / fVar15);
  pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).currentCharge;
  pBStack_12 = (this_00->fields).currentCharge.hiddenValueOld;
  pCVar17 = (this_00->fields).chargeAudioPlayer;
  pIStack_13 = *(InvokerMethod *)&(this_00->fields).currentCharge.fakeValue;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
  if (fVar15 < 0.0) {
    fVar15 = 0.0;
  }
  else if (_UNK_? < fVar15) {
    fVar15 = _UNK_?;
  }
  if ((pCVar17 == (CustomItemAudioPlayer *)0x0) ||
     (this_01 = (pCVar17->fields).audioSource, this_01 == (AudioSource *)0x0))
  goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (this_01,fVar15 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
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
        pIVar24 = *(Il2CppMethodPointer *)&(this_00->fields).initialFOV;
        pBVar25 = (this_00->fields).initialFOV.hiddenValueOld;
        pIVar26 = *(InvokerMethod *)&(this_00->fields).initialFOV.fakeValue;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pIStack_11 = pIVar24;
        pBStack_12 = pBVar25;
        pIStack_13 = pIVar26;
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
        fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
        if (pCVar23 == (Camera *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                  (pCVar23,fVar10,(MethodInfo *)0x0);
        pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).initialMouseSensitivity;
        pBStack_12 = (this_00->fields).initialMouseSensitivity.hiddenValueOld;
        pIStack_13 = *(InvokerMethod *)&(this_00->fields).initialMouseSensitivity.fakeValue;
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
        fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
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
    pIVar24 = *(Il2CppMethodPointer *)&(this_00->fields).initialFOV;
    pBVar25 = (this_00->fields).initialFOV.hiddenValueOld;
    pIVar26 = *(InvokerMethod *)&(this_00->fields).initialFOV.fakeValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    pIStack_11 = pIVar24;
    pBStack_12 = pBVar25;
    pIStack_13 = pIVar26;
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
    fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
    if (pCVar23 == (Camera *)0x0) goto code_?;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (fVar15,(this->fields)._targetFieldOfView_5__3,fVar10,in_R9);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar23,fVar15,(MethodInfo *)0x0);
    pIStack_11 = *(Il2CppMethodPointer *)&(this_00->fields).initialMouseSensitivity;
    pBStack_12 = (this_00->fields).initialMouseSensitivity.hiddenValueOld;
    pIStack_13 = *(InvokerMethod *)&(this_00->fields).initialMouseSensitivity.fakeValue;
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
    fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (fVar15,(this->fields)._targetMouseSensitivity_5__4,fVar10,in_R9);
code_?:
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    FUN_?(fVar10);
  }
  pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
  if (pPVar14 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
    if ((pPVar14->fields).chargeParticlesEnabled != 0) {
      pPVar18 = (this_00->fields).chargeParticles;
      pIVar24 = *(Il2CppMethodPointer *)&(this_00->fields).currentCharge;
      pBVar25 = (this_00->fields).currentCharge.hiddenValueOld;
      pIVar26 = *(InvokerMethod *)&(this_00->fields).currentCharge.fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pIStack_11 = pIVar24;
      pBStack_12 = pBVar25;
      pIStack_13 = pIVar26;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
      if (pPVar18 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
                (pPVar18,fVar10,(MethodInfo *)0x0);
    }
    pPVar14 = PickupItemCustomGun::PickupItemCustomGun_get_Configuration(this_00,(MethodInfo *)0x0);
    if (pPVar14 != (PickupItemCustomGun_CustomGunConfiguration *)0x0) {
      fireMode = (pPVar14->fields).fireMode;
      pIVar24 = *(Il2CppMethodPointer *)&(this_00->fields).currentCharge;
      pBVar25 = (this_00->fields).currentCharge.hiddenValueOld;
      pIVar26 = *(InvokerMethod *)&(this_00->fields).currentCharge.fakeValue;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      pIStack_11 = pIVar24;
      pBStack_12 = pBVar25;
      pIStack_13 = pIVar26;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)&pIStack_11,(MethodInfo *)0x0);
      if ((_UNK_? <= fVar10) &&
         ((fireMode == CustomGunData_FireMode__Enum_Auto ||
          (fireMode == CustomGunData_FireMode__Enum_Burst)))) {
        (this_00->fields)._._.isFiring = 1;
        PickupItemCustomGun::PickupItemCustomGun_FireWithCharge(this_00,fireMode,(MethodInfo *)0x0);
      }
      bVar3 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
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
      (this->fields).__1__state = 2;
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar2 = (*pcVar8)();
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Assets::Scripts::Pickups::PickupItemCustomGun+<ChargeRoutine>d__70::
     PickupItemCustomGun_ChargeRoutine_d_70_System_Collections_IEnumerator_Reset
               (PickupItemCustomGun_ChargeRoutine_d_70 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__Assets__Scripts__Pickups__PickupItemCustomGun___ChargeRoutine_d__70__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

