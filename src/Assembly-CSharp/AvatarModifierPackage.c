
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
                     ((ObscuredFloat *)&stack0xffffffe4,fVar6 + (fVar1 - fVar2),(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
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
  pSVar2 = StringLiteral__None;
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
  }
  else if (pSVar1->max_length != 0) {
    pSVar1->vector[0] = StringLiteral__None;
    func_?(pSVar1->vector,pSVar2);
    pSVar2 = StringLiteral__Fire;
    if (1 < pSVar1->max_length) {
      pSVar1->vector[1] = StringLiteral__Fire;
      func_?(pSVar1->vector + 1,pSVar2);
      pSVar2 = StringLiteral__Mutant;
      if (2 < pSVar1->max_length) {
        pSVar1->vector[2] = StringLiteral__Mutant;
        func_?(pSVar1->vector + 2,pSVar2);
        pSVar2 = StringLiteral__Sticky;
        if (3 < pSVar1->max_length) {
          pSVar1->vector[3] = StringLiteral__Sticky;
          func_?(pSVar1->vector + 3,pSVar2);
          pSVar2 = StringLiteral__Poison;
          if (4 < pSVar1->max_length) {
            pSVar1->vector[4] = StringLiteral__Poison;
            func_?(pSVar1->vector + 4,pSVar2);
            pSVar2 = StringLiteral__WallJump;
            if (5 < pSVar1->max_length) {
              pSVar1->vector[5] = StringLiteral__WallJump;
              func_?(pSVar1->vector + 5,pSVar2);
              pSVar2 = StringLiteral__InstantDeath;
              if (6 < pSVar1->max_length) {
                pSVar1->vector[6] = StringLiteral__InstantDeath;
                func_?(pSVar1->vector + 6,pSVar2);
                pSVar2 = StringLiteral__NoFriction;
                if (7 < pSVar1->max_length) {
                  pSVar1->vector[7] = StringLiteral__NoFriction;
                  func_?(pSVar1->vector + 7,pSVar2);
                  pSVar2 = StringLiteral__FlamerBurn;
                  if (8 < pSVar1->max_length) {
                    pSVar1->vector[8] = StringLiteral__FlamerBurn;
                    func_?(pSVar1->vector + 8,pSVar2);
                    pSVar2 = StringLiteral__Underwater;
                    if (9 < pSVar1->max_length) {
                      pSVar1->vector[9] = StringLiteral__Underwater;
                      func_?(pSVar1->vector + 9,pSVar2);
                      pSVar2 = StringLiteral__Frozen;
                      if (10 < pSVar1->max_length) {
                        pSVar1->vector[10] = StringLiteral__Frozen;
                        func_?(pSVar1->vector + 10,pSVar2);
                        pSVar2 = StringLiteral__NinjaRun;
                        if (0xb < pSVar1->max_length) {
                          pSVar1->vector[0xb] = StringLiteral__NinjaRun;
                          func_?(pSVar1->vector + 0xb,pSVar2);
                          pSVar2 = StringLiteral__Shrunken;
                          if (0xc < pSVar1->max_length) {
                            pSVar1->vector[0xc] = StringLiteral__Shrunken;
                            func_?(pSVar1->vector + 0xc,pSVar2);
                            pSVar2 = StringLiteral__WindFriction;
                            if (0xd < pSVar1->max_length) {
                              pSVar1->vector[0xd] = StringLiteral__WindFriction;
                              func_?(pSVar1->vector + 0xd,pSVar2);
                              pSVar2 = StringLiteral__DisableVehiclePickup;
                              if (0xe < pSVar1->max_length) {
                                pSVar1->vector[0xe] = StringLiteral__DisableVehiclePickup;
                                func_?(pSVar1->vector + 0xe,pSVar2);
                                pSVar2 = StringLiteral__Enlarged;
                                if (0xf < pSVar1->max_length) {
                                  pSVar1->vector[0xf] = StringLiteral__Enlarged;
                                  func_?(pSVar1->vector + 0xf,pSVar2);
                                  pSVar2 = StringLiteral__Shielded;
                                  if (0x10 < pSVar1->max_length) {
                                    pSVar1->vector[0x10] = StringLiteral__Shielded;
                                    func_?(pSVar1->vector + 0x10,pSVar2);
                                    pSVar2 = StringLiteral__SpawnProtection;
                                    if (0x11 < pSVar1->max_length) {
                                      pSVar1->vector[0x11] = StringLiteral__SpawnProtection;
                                      func_?(pSVar1->vector + 0x11,pSVar2);
                                      pSVar2 = StringLiteral__RayHeal;
                                      if (0x12 < pSVar1->max_length) {
                                        pSVar1->vector[0x12] = StringLiteral__RayHeal;
                                        func_?(pSVar1->vector + 0x12,pSVar2);
                                        pSVar2 = StringLiteral__TimeAttackFlagDebriefSlow;
                                        if (0x13 < pSVar1->max_length) {
                                          pSVar1->vector[0x13] =
                                               StringLiteral__TimeAttackFlagDebriefSlow;
                                          func_?(pSVar1->vector + 0x13,pSVar2);
                                          pSVar2 = StringLiteral__Lethal;
                                          if (0x14 < pSVar1->max_length) {
                                            pSVar1->vector[0x14] = StringLiteral__Lethal;
                                            func_?(pSVar1->vector + 0x14,pSVar2);
                                            pSVar2 = StringLiteral__HealingMat;
                                            if (0x15 < pSVar1->max_length) {
                                              pSVar1->vector[0x15] = StringLiteral__HealingMat;
                                              func_?(pSVar1->vector + 0x15,pSVar2);
                                              pSVar2 = StringLiteral__SlowMat;
                                              if (0x16 < pSVar1->max_length) {
                                                pSVar1->vector[0x16] = StringLiteral__SlowMat;
                                                func_?(pSVar1->vector + 0x16,pSVar2);
                                                pSVar2 = StringLiteral__SpeedMat;
                                                if (0x17 < pSVar1->max_length) {
                                                  pSVar1->vector[0x17] = StringLiteral__SpeedMat;
                                                  func_?(pSVar1->vector + 0x17,pSVar2);
                                                  pSVar2 = StringLiteral__CrumbleMat;
                                                  if (0x18 < pSVar1->max_length) {
                                                    pSVar1->vector[0x18] = StringLiteral__CrumbleMat
                                                    ;
                                                    func_?(pSVar1->vector + 0x18,pSVar2);
                                                    pSVar2 = StringLiteral__RayHealEnemy;
                                                    if (0x19 < pSVar1->max_length) {
                                                      pSVar1->vector[0x19] =
                                                           StringLiteral__RayHealEnemy;
                                                      func_?(pSVar1->vector + 0x19,pSVar2);
                                                      TypeInfo__AvatarModifierPackage->static_fields
                                                      ->AvatarModifierPackageTypeLookupTable =
                                                           pSVar1;
                                                      func_?(
                                                  TypeInfo__AvatarModifierPackage->static_fields,
                                                  pSVar1);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ) +
                        (float)((uint)fVar4 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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

