
/* Boolean IsEqualTo(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_IsEqualTo
               (AvatarModifierPackage *this,AvatarModifierPackage other,MethodInfo *method)

{
  if (other.avatarModifierPackageType != this[1].id) {
    return 0;
  }
  return (ACTkByte4)other.id == (this->duration).hiddenValue;
}


/* Void Renew() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_Renew
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe4,fVar1,(MethodInfo *)0x0);
  AVar3 = pOVar2->hiddenValue;
  pBVar4 = pOVar2->hiddenValueOld;
  fVar1 = pOVar2->fakeValue;
  iVar5 = *(int32_t *)&pOVar2->inited;
  (this->timeStamp).hiddenValueOld = (Byte__Array *)pOVar2->currentCryptoKey;
  (this->timeStamp).fakeValue = (float)AVar3;
  *(Byte__Array **)&(this->timeStamp).inited = pBVar4;
  *(float *)&this->persistant = fVar1;
  this->avatarModifierPackageType = iVar5;
  return;
}


/* AvatarModifierPackage() */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,0x19);
  if (pSVar1 == (String__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral__None != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__None,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length == 0) goto code_?;
    pSVar1->vector[0] = StringLiteral__None;
    if ((StringLiteral__Fire != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Fire,(pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length < 2) goto code_?;
    pSVar1->vector[1] = StringLiteral__Fire;
    if ((StringLiteral__Mutant != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Mutant,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    if (pSVar1->max_length < 3) goto code_?;
    pSVar1->vector[2] = StringLiteral__Mutant;
    if ((StringLiteral__Sticky != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Sticky,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    if (pSVar1->max_length < 4) goto code_?;
    pSVar1->vector[3] = StringLiteral__Sticky;
    if ((StringLiteral__Poison != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Poison,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    if (pSVar1->max_length < 5) goto code_?;
    pSVar1->vector[4] = StringLiteral__Poison;
    if ((StringLiteral__WallJump != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__WallJump,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 6) goto code_?;
    pSVar1->vector[5] = StringLiteral__WallJump;
    if ((StringLiteral__InstantDeath != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__InstantDeath,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 7) goto code_?;
    pSVar1->vector[6] = StringLiteral__InstantDeath;
    if ((StringLiteral__NoFriction != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__NoFriction,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 8) goto code_?;
    pSVar1->vector[7] = StringLiteral__NoFriction;
    if ((StringLiteral__FlamerBurn != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__FlamerBurn,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 9) goto code_?;
    pSVar1->vector[8] = StringLiteral__FlamerBurn;
    if ((StringLiteral__Underwater != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Underwater,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 10) goto code_?;
    pSVar1->vector[9] = StringLiteral__Underwater;
    if ((StringLiteral__Frozen != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Frozen,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    if (pSVar1->max_length < 0xb) goto code_?;
    pSVar1->vector[10] = StringLiteral__Frozen;
    if ((StringLiteral__NinjaRun != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__NinjaRun,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0xc) goto code_?;
    pSVar1->vector[0xb] = StringLiteral__NinjaRun;
    if ((StringLiteral__Shrunken != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Shrunken,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0xd) goto code_?;
    pSVar1->vector[0xc] = StringLiteral__Shrunken;
    if ((StringLiteral__WindFriction != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__WindFriction,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0xe) goto code_?;
    pSVar1->vector[0xd] = StringLiteral__WindFriction;
    if ((StringLiteral__DisableVehiclePickup != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__DisableVehiclePickup,
                                (pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length < 0xf) goto code_?;
    pSVar1->vector[0xe] = StringLiteral__DisableVehiclePickup;
    if ((StringLiteral__Enlarged != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Enlarged,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x10) goto code_?;
    pSVar1->vector[0xf] = StringLiteral__Enlarged;
    if ((StringLiteral__Shielded != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Shielded,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x11) goto code_?;
    pSVar1->vector[0x10] = StringLiteral__Shielded;
    if ((StringLiteral__SpawnProtection != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SpawnProtection,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x12) goto code_?;
    pSVar1->vector[0x11] = StringLiteral__SpawnProtection;
    if ((StringLiteral__RayHeal != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__RayHeal,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x13) goto code_?;
    pSVar1->vector[0x12] = StringLiteral__RayHeal;
    if ((StringLiteral__TimeAttackFlagDebriefSlow != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__TimeAttackFlagDebriefSlow,
                                (pSVar1->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    if (pSVar1->max_length < 0x14) goto code_?;
    pSVar1->vector[0x13] = StringLiteral__TimeAttackFlagDebriefSlow;
    if ((StringLiteral__Lethal != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__Lethal,(pSVar1->klass->_0).element_class), iVar3 == 0
       )) goto code_?;
    if (pSVar1->max_length < 0x15) goto code_?;
    pSVar1->vector[0x14] = StringLiteral__Lethal;
    if ((StringLiteral__HealingMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__HealingMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x16) goto code_?;
    pSVar1->vector[0x15] = StringLiteral__HealingMat;
    if ((StringLiteral__SlowMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SlowMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x17) goto code_?;
    pSVar1->vector[0x16] = StringLiteral__SlowMat;
    if ((StringLiteral__SpeedMat != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral__SpeedMat,(pSVar1->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    if (pSVar1->max_length < 0x18) goto code_?;
    pSVar1->vector[0x17] = StringLiteral__SpeedMat;
    if ((StringLiteral__CrumbleMat == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral__CrumbleMat,(pSVar1->klass->_0).element_class),
       iVar3 != 0)) {
      if (0x18 < pSVar1->max_length) {
        pSVar1->vector[0x18] = StringLiteral__CrumbleMat;
        TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable =
             pSVar1;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *(bool *)&this->avatarModifierPackageAdditionPolicy = persist;
  this[1].id = avatarModifierPackageType;
  (this->duration).hiddenValue.b1 = 0xff;
  (this->duration).hiddenValue.b2 = 0xff;
  (this->duration).hiddenValue.b3 = 0xff;
  (this->duration).hiddenValue.b4 = 0xff;
  this[1].duration.currentCryptoKey = avatarModifierPackageAdditionPolicy;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,duration,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  pAVar4 = (AvatarModifierPackage_AvatarModifier__Array *)pOVar1->fakeValue;
  pDVar5 = *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)&pOVar1->inited;
  (this->duration).hiddenValueOld = (Byte__Array *)pOVar1->currentCryptoKey;
  (this->duration).fakeValue = (float)AVar2;
  *(Byte__Array **)&(this->duration).inited = pBVar3;
  this->avatarModifiers = pAVar4;
  this->actionsToTakeVsTypes = pDVar5;
  (this->timeStamp).currentCryptoKey = (int32_t)avatarModifiers;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar6,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar6 = pOVar1->fakeValue;
  iVar7 = *(int32_t *)&pOVar1->inited;
  (this->timeStamp).hiddenValueOld = (Byte__Array *)pOVar1->currentCryptoKey;
  (this->timeStamp).fakeValue = (float)AVar2;
  *(Byte__Array **)&(this->timeStamp).inited = pBVar3;
  *(float *)&this->persistant = fVar6;
  this->avatarModifierPackageType = iVar7;
  (this->timeStamp).hiddenValue = (ACTkByte4)actionsToTakeVsTypes;
  return;
}


/* AvatarModifierPackageAdditionPolicy get_AvatarModifierPackageAdditionPolicy() */

AvatarModifierPackageAdditionPolicy__Enum
Assembly-CSharp.dll::AvatarModifierPackage::
AvatarModifierPackage_get_AvatarModifierPackageAdditionPolicy
          (AvatarModifierPackage *this,MethodInfo *method)

{
  return this[1].duration.currentCryptoKey;
}


/* AvatarModifierPackageType get_AvatarModifierPackageType() */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_get_AvatarModifierPackageType
          (AvatarModifierPackage *this,MethodInfo *method)

{
  return this[1].id;
}


/* Boolean get_IsExpired() */

bool Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
               (AvatarModifierPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->duration).hiddenValueOld;
  fVar2 = (this->duration).fakeValue;
  uVar3 = *(undefined4 *)&(this->duration).inited;
  pAVar4 = this->avatarModifiers;
  pDVar5 = this->actionsToTakeVsTypes;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = (ACTkByte4)fVar2;
  value.currentCryptoKey = (int32_t)pBVar1;
  value.hiddenValueOld = (Byte__Array *)uVar3;
  value.fakeValue = (float)pAVar4;
  value._16_4_ = pDVar5;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar6 = 0.0;
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1
                    (*(ObscuredFloat *)&(this->timeStamp).hiddenValueOld,(MethodInfo *)0x0);
  return fVar6 <= fVar2 - fVar7;
}


/* Void set_IsExpired(Boolean) */

void Assembly-CSharp.dll::AvatarModifierPackage::AvatarModifierPackage_set_IsExpired
               (AvatarModifierPackage *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != 0) {
    AVar1 = (ACTkByte4)(this->duration).hiddenValueOld;
    pBVar2 = (Byte__Array *)(this->duration).fakeValue;
    fVar3 = *(float *)&(this->duration).inited;
    pAVar4 = this->avatarModifiers;
    pDVar5 = this->actionsToTakeVsTypes;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = (ACTkByte4)pBVar2;
    value_00.currentCryptoKey._0_1_ = AVar1.b1;
    value_00.currentCryptoKey._1_1_ = AVar1.b2;
    value_00.currentCryptoKey._2_1_ = AVar1.b3;
    value_00.currentCryptoKey._3_1_ = AVar1.b4;
    value_00.hiddenValueOld = (Byte__Array *)fVar3;
    value_00.fakeValue = (float)pAVar4;
    value_00._16_4_ = pDVar5;
    fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit
                       ((ObscuredFloat *)&puStack_7,
                        (float)((uint)fVar3 ^ _UNK_?) + (float)((uint)fVar3 ^ _UNK_?),
                        (MethodInfo *)0x0);
    AVar1 = pOVar6->hiddenValue;
    pBVar2 = pOVar6->hiddenValueOld;
    fVar3 = pOVar6->fakeValue;
    iVar8 = *(int32_t *)&pOVar6->inited;
    (this->timeStamp).hiddenValueOld = (Byte__Array *)pOVar6->currentCryptoKey;
    (this->timeStamp).fakeValue = (float)AVar1;
    *(Byte__Array **)&(this->timeStamp).inited = pBVar2;
    *(float *)&this->persistant = fVar3;
    this->avatarModifierPackageType = iVar8;
  }
  return;
}

