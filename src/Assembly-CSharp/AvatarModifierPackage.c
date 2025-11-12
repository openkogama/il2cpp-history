
/* Void InPause() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_InPause
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  fVar4 = this->lastTimeStamp;
  aOStack_5[0].currentCryptoKey = (this->timeStamp).currentCryptoKey;
  aOStack_5[0].hiddenValue = (this->timeStamp).hiddenValue;
  aOStack_5[0].hiddenValueOld = (this->timeStamp).hiddenValueOld;
  aOStack_5[0].fakeValue = (this->timeStamp).fakeValue;
  aOStack_5[0].inited = (this->timeStamp).inited;
  aOStack_5[0]._21_3_ = *(undefined3 *)&(this->timeStamp).field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
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
  fVar6 = fVar6 + (fVar3 - fVar4);
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
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar6,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_5,value,(MethodInfo *)0x0);
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar7 != 0) {
    aOStack_5[0].fakeValue = fVar6;
  }
  bVar8 = iRam_? != 0;
  (this->timeStamp).currentCryptoKey = aOStack_5[0].currentCryptoKey;
  (this->timeStamp).hiddenValue = aOStack_5[0].hiddenValue;
  (this->timeStamp).hiddenValueOld = aOStack_5[0].hiddenValueOld;
  (this->timeStamp).fakeValue = aOStack_5[0].fakeValue;
  (this->timeStamp).inited = aOStack_5[0].inited;
  *(undefined3 *)&(this->timeStamp).field_0x15 = aOStack_5[0]._21_3_;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->timeStamp).hiddenValueOld >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  this->lastTimeStamp = fVar3;
  return;
}


/* Boolean IsEqualTo(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_IsEqualTo
               (AvatarModifierPackage *this,AvatarModifierPackage *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (other->avatarModifierPackageType != this->avatarModifierPackageType) {
    return 0;
  }
  return other->id == this->id;
}


/* Void Renew() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_Renew
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_4[0].fakeValue = 0.0;
  aOStack_4[0].inited = 0;
  aOStack_4[0]._21_3_ = 0;
  aOStack_4[0].currentCryptoKey = 0;
  aOStack_4[0].hiddenValue.b1 = 0;
  aOStack_4[0].hiddenValue.b2 = 0;
  aOStack_4[0].hiddenValue.b3 = 0;
  aOStack_4[0].hiddenValue.b4 = 0;
  aOStack_4[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar3,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_4,value,(MethodInfo *)0x0);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar5 != 0) {
    aOStack_4[0].fakeValue = fVar3;
  }
  bVar6 = iRam_? != 0;
  (this->timeStamp).currentCryptoKey = aOStack_4[0].currentCryptoKey;
  (this->timeStamp).hiddenValue = aOStack_4[0].hiddenValue;
  (this->timeStamp).hiddenValueOld = aOStack_4[0].hiddenValueOld;
  (this->timeStamp).fakeValue = aOStack_4[0].fakeValue;
  (this->timeStamp).inited = aOStack_4[0].inited;
  *(undefined3 *)&(this->timeStamp).field_0x15 = aOStack_4[0]._21_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->timeStamp).hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  aOStack_4[0].currentCryptoKey = (this->timeStamp).currentCryptoKey;
  aOStack_4[0].hiddenValue = (this->timeStamp).hiddenValue;
  aOStack_4[0].hiddenValueOld = (this->timeStamp).hiddenValueOld;
  aOStack_4[0].fakeValue = (this->timeStamp).fakeValue;
  aOStack_4[0].inited = (this->timeStamp).inited;
  aOStack_4[0]._21_3_ = *(undefined3 *)&(this->timeStamp).field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  this->lastTimeStamp = fVar3;
  return;
}


/* AvatarModifierPackage() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__SlowMat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Poison);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Enlarged);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Fire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__SpeedMat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Lethal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Underwater);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__NinjaRun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Shrunken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__InstantDeath);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Frozen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__HealingMat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Shielded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Mutant);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WindFriction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__NoFriction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__None);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__RayHeal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Sticky);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CrumbleMat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__FlamerBurn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WallJump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__DisableVehiclePickup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TimeAttackFlagDebriefSlow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__SpawnProtection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__RayHealEnemy);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)FUN_?(TypeInfo__System__String,0x1a);
  if (pSVar1 == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(pSVar1,0,StringLiteral__None);
  FUN_?(pSVar1,1,StringLiteral__Fire);
  FUN_?(pSVar1,2,StringLiteral__Mutant);
  FUN_?(pSVar1,3,StringLiteral__Sticky);
  FUN_?(pSVar1,4,StringLiteral__Poison);
  FUN_?(pSVar1,5,StringLiteral__WallJump);
  FUN_?(pSVar1,6,StringLiteral__InstantDeath);
  FUN_?(pSVar1,7,StringLiteral__NoFriction);
  FUN_?(pSVar1,8,StringLiteral__FlamerBurn);
  FUN_?(pSVar1,9,StringLiteral__Underwater);
  FUN_?(pSVar1,10,StringLiteral__Frozen);
  FUN_?(pSVar1,0xb,StringLiteral__NinjaRun);
  FUN_?(pSVar1,0xc,StringLiteral__Shrunken);
  FUN_?(pSVar1,0xd,StringLiteral__WindFriction);
  FUN_?(pSVar1,0xe,StringLiteral__DisableVehiclePickup);
  FUN_?(pSVar1,0xf,StringLiteral__Enlarged);
  FUN_?(pSVar1,0x10,StringLiteral__Shielded);
  FUN_?(pSVar1,0x11,StringLiteral__SpawnProtection);
  FUN_?(pSVar1,0x12,StringLiteral__RayHeal);
  FUN_?(pSVar1,0x13,StringLiteral__TimeAttackFlagDebriefSlow);
  FUN_?(pSVar1,0x14,StringLiteral__Lethal);
  FUN_?(pSVar1,0x15,StringLiteral__HealingMat);
  FUN_?(pSVar1,0x16,StringLiteral__SlowMat);
  FUN_?(pSVar1,0x17,StringLiteral__SpeedMat);
  FUN_?(pSVar1,0x18,StringLiteral__CrumbleMat);
  FUN_?(pSVar1,0x19,StringLiteral__RayHealEnemy);
  bVar3 = iRam_? != 0;
  TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable = pSVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)TypeInfo__AvatarModifierPackage->static_fields >> 0xc);
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


/* AvatarModifierPackage(AvatarModifierPackageType, AvatarModifierPackageAdditionPolicy, Single,
   AvatarModifierPackage+AvatarModifier[], Dictionary`2[AvatarModifierPackageType,ModifierActions],
   Boolean) */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage__ctor
               (AvatarModifierPackage *this,
               AvatarModifierPackageType__Enum avatarModifierPackageType,
               AvatarModifierPackageAdditionPolicy__Enum avatarModifierPackageAdditionPolicy,
               float duration,AvatarModifierPackage_AvatarModifier__Array *avatarModifiers,
               Dictionary_2_AvatarModifierPackageType_ModifierActions_ *actionsToTakeVsTypes,
               bool persist,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this->persistant = persist;
  this->id = -1;
  this->avatarModifierPackageType = avatarModifierPackageType;
  this->avatarModifierPackageAdditionPolicy = avatarModifierPackageAdditionPolicy;
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
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(duration,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_1,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = iRam_?;
  if (bVar3 != 0) {
    aOStack_1[0].fakeValue = duration;
  }
  (this->duration).currentCryptoKey = aOStack_1[0].currentCryptoKey;
  (this->duration).hiddenValue = aOStack_1[0].hiddenValue;
  *(undefined4 *)&(this->duration).hiddenValueOld = aOStack_1[0].hiddenValueOld._0_4_;
  *(undefined4 *)((longlong)&(this->duration).hiddenValueOld + 4) =
       aOStack_1[0].hiddenValueOld._4_4_;
  (this->duration).fakeValue = aOStack_1[0].fakeValue;
  (this->duration).inited = aOStack_1[0].inited;
  *(undefined3 *)&(this->duration).field_0x15 = aOStack_1[0]._21_3_;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->duration).hiddenValueOld >> 0xc);
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
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  this->avatarModifiers = avatarModifiers;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&this->avatarModifiers >> 0xc);
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
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  fVar12 = (float)(*pcRam_?)();
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
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar12,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_1,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    aOStack_1[0].fakeValue = fVar12;
  }
  bVar9 = iRam_? != 0;
  (this->timeStamp).currentCryptoKey = aOStack_1[0].currentCryptoKey;
  (this->timeStamp).hiddenValue = aOStack_1[0].hiddenValue;
  (this->timeStamp).hiddenValueOld = aOStack_1[0].hiddenValueOld;
  (this->timeStamp).fakeValue = aOStack_1[0].fakeValue;
  (this->timeStamp).inited = aOStack_1[0].inited;
  *(undefined3 *)&(this->timeStamp).field_0x15 = aOStack_1[0]._21_3_;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(this->timeStamp).hiddenValueOld >> 0xc);
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
  aOStack_1[0].currentCryptoKey = (this->timeStamp).currentCryptoKey;
  aOStack_1[0].hiddenValue = (this->timeStamp).hiddenValue;
  aOStack_1[0].hiddenValueOld = (this->timeStamp).hiddenValueOld;
  aOStack_1[0].fakeValue = (this->timeStamp).fakeValue;
  aOStack_1[0].inited = (this->timeStamp).inited;
  aOStack_1[0]._21_3_ = *(undefined3 *)&(this->timeStamp).field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalDecrypt(aOStack_1,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  this->actionsToTakeVsTypes = actionsToTakeVsTypes;
  this->lastTimeStamp = fVar12;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&this->actionsToTakeVsTypes >> 0xc);
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
  return;
}


/* Boolean get_IsExpired() */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->duration).currentCryptoKey;
  uVar1._4_4_ = (this->duration).hiddenValue;
  pBVar2 = (this->duration).hiddenValueOld;
  uVar3._0_4_ = (this->duration).fakeValue;
  uVar3._4_1_ = (this->duration).inited;
  uVar3._5_3_ = *(undefined3 *)&(this->duration).field_0x15;
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
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  pcRam_? = pcVar6;
  fVar8 = (float)(*pcRam_?)();
  aOStack_4[0].currentCryptoKey = (this->timeStamp).currentCryptoKey;
  aOStack_4[0].hiddenValue = (this->timeStamp).hiddenValue;
  aOStack_4[0].hiddenValueOld = (this->timeStamp).hiddenValueOld;
  aOStack_4[0].fakeValue = (this->timeStamp).fakeValue;
  aOStack_4[0].inited = (this->timeStamp).inited;
  aOStack_4[0]._21_3_ = *(undefined3 *)&(this->timeStamp).field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  return fVar5 <= fVar8 - fVar9;
}


/* Void set_IsExpired(Boolean) */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_set_IsExpired
               (AvatarModifierPackage *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != 0) {
    uVar1._0_4_ = (this->duration).currentCryptoKey;
    uVar1._4_4_ = (this->duration).hiddenValue;
    pBVar2 = (this->duration).hiddenValueOld;
    uVar3._0_4_ = (this->duration).fakeValue;
    uVar3._4_1_ = (this->duration).inited;
    uVar3._5_3_ = *(undefined3 *)&(this->duration).field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
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
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
    fVar5 = (float)((uint)fVar5 ^ _UNK_?) + (float)((uint)fVar5 ^ _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_4[0].fakeValue = 0.0;
    aOStack_4[0].inited = 0;
    aOStack_4[0]._21_3_ = 0;
    aOStack_4[0].currentCryptoKey = 0;
    aOStack_4[0].hiddenValue.b1 = 0;
    aOStack_4[0].hiddenValue.b2 = 0;
    aOStack_4[0].hiddenValue.b3 = 0;
    aOStack_4[0].hiddenValue.b4 = 0;
    aOStack_4[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalEncrypt(fVar5,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_4,value_00,(MethodInfo *)0x0);
    bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar6 != 0) {
      aOStack_4[0].fakeValue = fVar5;
    }
    bVar7 = iRam_? != 0;
    (this->timeStamp).currentCryptoKey = aOStack_4[0].currentCryptoKey;
    (this->timeStamp).hiddenValue = aOStack_4[0].hiddenValue;
    (this->timeStamp).hiddenValueOld = aOStack_4[0].hiddenValueOld;
    (this->timeStamp).fakeValue = aOStack_4[0].fakeValue;
    (this->timeStamp).inited = aOStack_4[0].inited;
    *(undefined3 *)&(this->timeStamp).field_0x15 = aOStack_4[0]._21_3_;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->timeStamp).hiddenValueOld >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    aOStack_4[0].currentCryptoKey = (this->timeStamp).currentCryptoKey;
    aOStack_4[0].hiddenValue = (this->timeStamp).hiddenValue;
    aOStack_4[0].hiddenValueOld = (this->timeStamp).hiddenValueOld;
    aOStack_4[0].fakeValue = (this->timeStamp).fakeValue;
    aOStack_4[0].inited = (this->timeStamp).inited;
    aOStack_4[0]._21_3_ = *(undefined3 *)&(this->timeStamp).field_0x15;
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
    fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
    this->lastTimeStamp = fVar5;
  }
  return;
}

