
/* Single CalculateJumpForceFromVerticalVelocity(Single) */

float Assembly-CSharp.dll::MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                (float velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  uVar2._0_4_ = (pMVar1->gravity).currentCryptoKey;
  uVar2._4_4_ = (pMVar1->gravity).hiddenValue;
  pBVar3 = (pMVar1->gravity).hiddenValueOld;
  uVar4._0_4_ = (pMVar1->gravity).fakeValue;
  uVar4._4_1_ = (pMVar1->gravity).inited;
  uVar4._5_3_ = *(undefined3 *)&(pMVar1->gravity).field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_5[0]._0_8_ = uVar2;
  aOStack_5[0].hiddenValueOld = pBVar3;
  aOStack_5[0]._16_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = velocity * velocity * _UNK_?;
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  return fVar6 / fVar7;
}


/* Single CalculateJumpVerticalSpeed(Single) */

float Assembly-CSharp.dll::MVPhysics::MVPhysics_CalculateJumpVerticalSpeed
                (float targetJumpHeight,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  uVar2._0_4_ = (pMVar1->gravity).currentCryptoKey;
  uVar2._4_4_ = (pMVar1->gravity).hiddenValue;
  pBVar3 = (pMVar1->gravity).hiddenValueOld;
  uVar4._0_4_ = (pMVar1->gravity).fakeValue;
  uVar4._4_1_ = (pMVar1->gravity).inited;
  uVar4._5_3_ = *(undefined3 *)&(pMVar1->gravity).field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_5[0]._0_8_ = uVar2;
  aOStack_5[0].hiddenValueOld = pBVar3;
  aOStack_5[0]._16_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  fVar6 = fVar6 * (targetJumpHeight + targetJumpHeight);
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_?(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  return fVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_1,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    OStack_1.fakeValue = 30.0;
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVPhysics);
  }
  pMVar3 = TypeInfo__MVPhysics->static_fields;
  (pMVar3->gravity).currentCryptoKey = OStack_1.currentCryptoKey;
  (pMVar3->gravity).hiddenValue = OStack_1.hiddenValue;
  (pMVar3->gravity).hiddenValueOld = OStack_1.hiddenValueOld;
  (pMVar3->gravity).fakeValue = OStack_1.fakeValue;
  (pMVar3->gravity).inited = OStack_1.inited;
  *(undefined3 *)&(pMVar3->gravity).field_0x15 = OStack_1._21_3_;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* MVPhysics() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_1,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    OStack_1.fakeValue = 30.0;
  }
  pMVar3 = TypeInfo__MVPhysics->static_fields;
  (pMVar3->gravity).currentCryptoKey = OStack_1.currentCryptoKey;
  (pMVar3->gravity).hiddenValue = OStack_1.hiddenValue;
  (pMVar3->gravity).hiddenValueOld = OStack_1.hiddenValueOld;
  (pMVar3->gravity).fakeValue = OStack_1.fakeValue;
  (pMVar3->gravity).inited = OStack_1.inited;
  *(undefined3 *)&(pMVar3->gravity).field_0x15 = OStack_1._21_3_;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pMVar3 = TypeInfo__MVPhysics->static_fields;
  (pMVar3->airPhysicalProperties).friction = 0.0;
  (pMVar3->airPhysicalProperties).bouncyness = 0.0;
  (pMVar3->airPhysicalProperties).softness = 0.0;
  (pMVar3->airPhysicalProperties).staticFriction = 0.0;
  (pMVar3->airPhysicalProperties).toughness = 0.0;
  return;
}


/* ObscuredFloat get_Gravity() */

ObscuredFloat *
Assembly-CSharp.dll::MVPhysics::MVPhysics_get_Gravity
          (ObscuredFloat *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  AVar2 = (pMVar1->gravity).hiddenValue;
  pBVar3 = (pMVar1->gravity).hiddenValueOld;
  fVar4 = (pMVar1->gravity).fakeValue;
  bVar5 = (pMVar1->gravity).inited;
  uVar6 = *(undefined3 *)&(pMVar1->gravity).field_0x15;
  __return_storage_ptr__->currentCryptoKey = (pMVar1->gravity).currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  __return_storage_ptr__->hiddenValueOld = pBVar3;
  __return_storage_ptr__->fakeValue = fVar4;
  __return_storage_ptr__->inited = bVar5;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar6;
  return __return_storage_ptr__;
}


/* Void set_Gravity(ObscuredFloat) */

void Assembly-CSharp.dll::MVPhysics::MVPhysics_set_Gravity(ObscuredFloat *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  AVar2 = value->hiddenValue;
  pBVar3 = value->hiddenValueOld;
  fVar4 = value->fakeValue;
  bVar5 = value->inited;
  uVar6 = *(undefined3 *)&value->field_0x15;
  (pMVar1->gravity).currentCryptoKey = value->currentCryptoKey;
  (pMVar1->gravity).hiddenValue = AVar2;
  (pMVar1->gravity).hiddenValueOld = pBVar3;
  (pMVar1->gravity).fakeValue = fVar4;
  (pMVar1->gravity).inited = bVar5;
  *(undefined3 *)&(pMVar1->gravity).field_0x15 = uVar6;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld >> 0xc)
    ;
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}

