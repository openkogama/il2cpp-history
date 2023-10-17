
/* Void InPause() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_InPause
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = this->lastTimeStamp;
  AStack_3 = (ACTkByte4)(this->timeStamp).currentCryptoKey;
  AVar4 = (this->timeStamp).hiddenValue;
  pBVar5 = (this->timeStamp).hiddenValueOld;
  fVar6 = (this->timeStamp).fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar4;
  value.currentCryptoKey._0_1_ = AStack_3.b1;
  value.currentCryptoKey._1_1_ = AStack_3.b2;
  value.currentCryptoKey._2_1_ = AStack_3.b3;
  value.currentCryptoKey._3_1_ = AStack_3.b4;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->timeStamp).inited;
  value._17_3_ = *(undefined3 *)&(this->timeStamp).field_0x11;
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit
                     ((ObscuredFloat *)&stack0xffffffe0,fVar6 + (fVar1 - fVar2),(MethodInfo *)0x0);
  AVar4 = pOVar7->hiddenValue;
  pBVar5 = pOVar7->hiddenValueOld;
  fVar2 = pOVar7->fakeValue;
  bVar8 = pOVar7->inited;
  uVar9 = *(undefined3 *)&pOVar7->field_0x11;
  (this->timeStamp).currentCryptoKey = pOVar7->currentCryptoKey;
  (this->timeStamp).hiddenValue = AVar4;
  (this->timeStamp).hiddenValueOld = pBVar5;
  (this->timeStamp).fakeValue = fVar2;
  (this->timeStamp).inited = bVar8;
  *(undefined3 *)&(this->timeStamp).field_0x11 = uVar9;
  func_?();
  this->lastTimeStamp = fVar1;
  return;
}


/* Boolean IsEqualTo(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_IsEqualTo
               (AvatarModifierPackage *this,AvatarModifierPackage other,MethodInfo *method)

{
  if (other.avatarModifierPackageType != this->avatarModifierPackageType) {
    return 0;
  }
  return other.id == this->id;
}


/* Void Renew() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_Renew
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar1,(MethodInfo *)0x0);
  AVar3 = pOVar2->hiddenValue;
  pBVar4 = pOVar2->hiddenValueOld;
  fVar1 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0x11;
  (this->timeStamp).currentCryptoKey = pOVar2->currentCryptoKey;
  (this->timeStamp).hiddenValue = AVar3;
  (this->timeStamp).hiddenValueOld = pBVar4;
  (this->timeStamp).fakeValue = fVar1;
  (this->timeStamp).inited = bVar5;
  *(undefined3 *)&(this->timeStamp).field_0x11 = uVar6;
  func_?(&(this->timeStamp).hiddenValueOld,0);
  fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(this->timeStamp,(MethodInfo *)0x0);
  this->lastTimeStamp = fVar1;
  return;
}


/* AvatarModifierPackage() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__SlowMat);
    func_?(&StringLiteral__Poison);
    func_?(&StringLiteral__Enlarged);
    func_?(&StringLiteral__Fire);
    func_?(&StringLiteral__SpeedMat);
    func_?(&StringLiteral__Lethal);
    func_?(&StringLiteral__Underwater);
    func_?(&StringLiteral__NinjaRun);
    func_?(&StringLiteral__Shrunken);
    func_?(&StringLiteral__InstantDeath);
    func_?(&StringLiteral__Frozen);
    func_?(&StringLiteral__HealingMat);
    func_?(&StringLiteral__Shielded);
    func_?(&StringLiteral__Mutant);
    func_?(&StringLiteral__WindFriction);
    func_?(&StringLiteral__NoFriction);
    func_?(&StringLiteral__None);
    func_?(&StringLiteral__RayHeal);
    func_?(&StringLiteral__Sticky);
    func_?(&StringLiteral__CrumbleMat);
    func_?(&StringLiteral__FlamerBurn);
    func_?(&StringLiteral__WallJump);
    func_?(&StringLiteral__DisableVehiclePickup);
    func_?(&StringLiteral__TimeAttackFlagDebriefSlow);
    func_?(&StringLiteral__SpawnProtection);
    func_?(&StringLiteral__RayHealEnemy);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,0x1a);
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral__None != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__None,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral__None;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral__None;
    func_?(pSVar1->vector,pSVar4);
    if ((StringLiteral__Fire != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Fire,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral__Fire;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral__Fire;
    func_?(pSVar1->vector + 1,pSVar4);
    if ((StringLiteral__Mutant != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Mutant,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    pSVar4 = StringLiteral__Mutant;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral__Mutant;
    func_?(pSVar1->vector + 2,pSVar4);
    if ((StringLiteral__Sticky != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Sticky,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    pSVar4 = StringLiteral__Sticky;
    if (pSVar1->max_length < 4) goto code_?;
    pSVar1->vector[3] = StringLiteral__Sticky;
    func_?(pSVar1->vector + 3,pSVar4);
    if ((StringLiteral__Poison != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Poison,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    pSVar4 = StringLiteral__Poison;
    if (pSVar1->max_length < 5) goto code_?;
    pSVar1->vector[4] = StringLiteral__Poison;
    func_?(pSVar1->vector + 4,pSVar4);
    if ((StringLiteral__WallJump != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__WallJump,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__WallJump;
    if (pSVar1->max_length < 6) goto code_?;
    pSVar1->vector[5] = StringLiteral__WallJump;
    func_?(pSVar1->vector + 5,pSVar4);
    if ((StringLiteral__InstantDeath != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__InstantDeath,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__InstantDeath;
    if (pSVar1->max_length < 7) goto code_?;
    pSVar1->vector[6] = StringLiteral__InstantDeath;
    func_?(pSVar1->vector + 6,pSVar4);
    if ((StringLiteral__NoFriction != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__NoFriction,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__NoFriction;
    if (pSVar1->max_length < 8) goto code_?;
    pSVar1->vector[7] = StringLiteral__NoFriction;
    func_?(pSVar1->vector + 7,pSVar4);
    if ((StringLiteral__FlamerBurn != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__FlamerBurn,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__FlamerBurn;
    if (pSVar1->max_length < 9) goto code_?;
    pSVar1->vector[8] = StringLiteral__FlamerBurn;
    func_?(pSVar1->vector + 8,pSVar4);
    if ((StringLiteral__Underwater != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Underwater,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__Underwater;
    if (pSVar1->max_length < 10) goto code_?;
    pSVar1->vector[9] = StringLiteral__Underwater;
    func_?(pSVar1->vector + 9,pSVar4);
    if ((StringLiteral__Frozen != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Frozen,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    pSVar4 = StringLiteral__Frozen;
    if (pSVar1->max_length < 0xb) goto code_?;
    pSVar1->vector[10] = StringLiteral__Frozen;
    func_?(pSVar1->vector + 10,pSVar4);
    if ((StringLiteral__NinjaRun != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__NinjaRun,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__NinjaRun;
    if (pSVar1->max_length < 0xc) goto code_?;
    pSVar1->vector[0xb] = StringLiteral__NinjaRun;
    func_?(pSVar1->vector + 0xb,pSVar4);
    if ((StringLiteral__Shrunken != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Shrunken,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__Shrunken;
    if (pSVar1->max_length < 0xd) goto code_?;
    pSVar1->vector[0xc] = StringLiteral__Shrunken;
    func_?(pSVar1->vector + 0xc,pSVar4);
    if ((StringLiteral__WindFriction != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__WindFriction,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__WindFriction;
    if (pSVar1->max_length < 0xe) goto code_?;
    pSVar1->vector[0xd] = StringLiteral__WindFriction;
    func_?(pSVar1->vector + 0xd,pSVar4);
    if ((StringLiteral__DisableVehiclePickup != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__DisableVehiclePickup,
                                (pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral__DisableVehiclePickup;
    if (pSVar1->max_length < 0xf) goto code_?;
    pSVar1->vector[0xe] = StringLiteral__DisableVehiclePickup;
    func_?(pSVar1->vector + 0xe,pSVar4);
    if ((StringLiteral__Enlarged != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Enlarged,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__Enlarged;
    if (pSVar1->max_length < 0x10) goto code_?;
    pSVar1->vector[0xf] = StringLiteral__Enlarged;
    func_?(pSVar1->vector + 0xf,pSVar4);
    if ((StringLiteral__Shielded != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Shielded,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__Shielded;
    if (pSVar1->max_length < 0x11) goto code_?;
    pSVar1->vector[0x10] = StringLiteral__Shielded;
    func_?(pSVar1->vector + 0x10,pSVar4);
    if ((StringLiteral__SpawnProtection != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SpawnProtection,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__SpawnProtection;
    if (pSVar1->max_length < 0x12) goto code_?;
    pSVar1->vector[0x11] = StringLiteral__SpawnProtection;
    func_?(pSVar1->vector + 0x11,pSVar4);
    if ((StringLiteral__RayHeal != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__RayHeal,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__RayHeal;
    if (pSVar1->max_length < 0x13) goto code_?;
    pSVar1->vector[0x12] = StringLiteral__RayHeal;
    func_?(pSVar1->vector + 0x12,pSVar4);
    if ((StringLiteral__TimeAttackFlagDebriefSlow != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__TimeAttackFlagDebriefSlow,
                                (pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral__TimeAttackFlagDebriefSlow;
    if (pSVar1->max_length < 0x14) goto code_?;
    pSVar1->vector[0x13] = StringLiteral__TimeAttackFlagDebriefSlow;
    func_?(pSVar1->vector + 0x13,pSVar4);
    if ((StringLiteral__Lethal != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Lethal,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    pSVar4 = StringLiteral__Lethal;
    if (pSVar1->max_length < 0x15) goto code_?;
    pSVar1->vector[0x14] = StringLiteral__Lethal;
    func_?(pSVar1->vector + 0x14,pSVar4);
    if ((StringLiteral__HealingMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__HealingMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__HealingMat;
    if (pSVar1->max_length < 0x16) goto code_?;
    pSVar1->vector[0x15] = StringLiteral__HealingMat;
    func_?(pSVar1->vector + 0x15,pSVar4);
    if ((StringLiteral__SlowMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SlowMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__SlowMat;
    if (pSVar1->max_length < 0x17) goto code_?;
    pSVar1->vector[0x16] = StringLiteral__SlowMat;
    func_?(pSVar1->vector + 0x16,pSVar4);
    if ((StringLiteral__SpeedMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SpeedMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__SpeedMat;
    if (pSVar1->max_length < 0x18) goto code_?;
    pSVar1->vector[0x17] = StringLiteral__SpeedMat;
    func_?(pSVar1->vector + 0x17,pSVar4);
    if ((StringLiteral__CrumbleMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__CrumbleMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral__CrumbleMat;
    if (pSVar1->max_length < 0x19) goto code_?;
    pSVar1->vector[0x18] = StringLiteral__CrumbleMat;
    func_?(pSVar1->vector + 0x18,pSVar4);
    if ((StringLiteral__RayHealEnemy == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral__RayHealEnemy,(pSVar1->klass->_0).element_class),
       iVar3 != 0)) {
      pSVar4 = StringLiteral__RayHealEnemy;
      if (0x19 < pSVar1->max_length) {
        pSVar1->vector[0x19] = StringLiteral__RayHealEnemy;
        func_?(pSVar1->vector + 0x19,pSVar4);
        TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable =
             pSVar1;
        func_?(TypeInfo__AvatarModifierPackage->static_fields,pSVar1);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  this->persistant = persist;
  this->avatarModifierPackageType = avatarModifierPackageType;
  this->id = -1;
  this->avatarModifierPackageAdditionPolicy = avatarModifierPackageAdditionPolicy;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,duration,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->duration).currentCryptoKey = pOVar1->currentCryptoKey;
  (this->duration).hiddenValue = AVar2;
  (this->duration).hiddenValueOld = pBVar3;
  (this->duration).fakeValue = fVar4;
  (this->duration).inited = bVar5;
  *(undefined3 *)&(this->duration).field_0x11 = uVar6;
  func_?(&(this->duration).hiddenValueOld,0);
  this->avatarModifiers = avatarModifiers;
  func_?(&this->avatarModifiers,avatarModifiers);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar4,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->timeStamp).currentCryptoKey = pOVar1->currentCryptoKey;
  (this->timeStamp).hiddenValue = AVar2;
  (this->timeStamp).hiddenValueOld = pBVar3;
  (this->timeStamp).fakeValue = fVar4;
  (this->timeStamp).inited = bVar5;
  *(undefined3 *)&(this->timeStamp).field_0x11 = uVar6;
  func_?();
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(this->timeStamp,(MethodInfo *)0x0);
  this->actionsToTakeVsTypes = actionsToTakeVsTypes;
  this->lastTimeStamp = fVar4;
  func_?();
  return;
}


/* Boolean get_IsExpired() */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = (this->duration).currentCryptoKey;
  AVar2 = (this->duration).hiddenValue;
  pBVar3 = (this->duration).hiddenValueOld;
  fVar4 = (this->duration).fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar2;
  value.currentCryptoKey = iVar1;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->duration).inited;
  value._17_3_ = *(undefined3 *)&(this->duration).field_0x11;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = 0.0;
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(this->timeStamp,(MethodInfo *)0x0);
  return fVar5 <= fVar4 - fVar6;
}


/* Void set_IsExpired(Boolean) */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_set_IsExpired
               (AvatarModifierPackage *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (value != 0) {
    AVar1 = (ACTkByte4)(this->duration).currentCryptoKey;
    AVar2 = (this->duration).hiddenValue;
    pBVar3 = (this->duration).hiddenValueOld;
    fVar4 = (this->duration).fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AVar2;
    value_00.currentCryptoKey._0_1_ = AVar1.b1;
    value_00.currentCryptoKey._1_1_ = AVar1.b2;
    value_00.currentCryptoKey._2_1_ = AVar1.b3;
    value_00.currentCryptoKey._3_1_ = AVar1.b4;
    value_00.hiddenValueOld = pBVar3;
    value_00.fakeValue = fVar4;
    value_00.inited = (this->duration).inited;
    value_00._17_3_ = *(undefined3 *)&(this->duration).field_0x11;
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit
                       ((ObscuredFloat *)&puStack_6,
                        (float)((uint)fVar4 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ) +
                        (float)((uint)fVar4 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ),(MethodInfo *)0x0);
    AVar1 = pOVar5->hiddenValue;
    pBVar3 = pOVar5->hiddenValueOld;
    fVar4 = pOVar5->fakeValue;
    bVar7 = pOVar5->inited;
    uVar8 = *(undefined3 *)&pOVar5->field_0x11;
    (this->timeStamp).currentCryptoKey = pOVar5->currentCryptoKey;
    (this->timeStamp).hiddenValue = AVar1;
    (this->timeStamp).hiddenValueOld = pBVar3;
    (this->timeStamp).fakeValue = fVar4;
    (this->timeStamp).inited = bVar7;
    *(undefined3 *)&(this->timeStamp).field_0x11 = uVar8;
    func_?();
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(this->timeStamp,(MethodInfo *)0x0);
    this->lastTimeStamp = fVar4;
  }
  return;
}

