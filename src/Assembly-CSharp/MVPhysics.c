
/* Single CalculateJumpForceFromVerticalVelocity(Single) */

float Assembly-CSharp.dll::MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                (float velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  value = TypeInfo__MVPhysics->static_fields->gravity;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = velocity * velocity * _UNK_?;
  fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  return fVar1 / fVar2;
}


/* Single CalculateJumpVerticalSpeed(Single) */

float Assembly-CSharp.dll::MVPhysics::MVPhysics_CalculateJumpVerticalSpeed
                (float targetJumpHeight,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  uVar2 = (pMVar1->gravity).currentCryptoKey;
  uVar3 = (pMVar1->gravity).hiddenValue.b1;
  uVar4 = (pMVar1->gravity).hiddenValue.b2;
  uVar5 = (pMVar1->gravity).hiddenValue.b3;
  uVar6 = (pMVar1->gravity).hiddenValue.b4;
  value.hiddenValue.b4 = uVar6;
  value.hiddenValue.b3 = uVar5;
  value.hiddenValue.b2 = uVar4;
  value.hiddenValue.b1 = uVar3;
  uVar7 = (pMVar1->gravity).hiddenValueOld;
  value.hiddenValueOld = (Byte__Array *)uVar7;
  value.currentCryptoKey = uVar2;
  fVar8 = (pMVar1->gravity).fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.fakeValue = fVar8;
  value.inited = (pMVar1->gravity).inited;
  value._17_3_ = *(undefined3 *)&(pMVar1->gravity).field_0x11;
  fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar9 = (double)((targetJumpHeight + targetJumpHeight) * fVar8);
  func_?();
  return (float)dVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_2,30.0,(MethodInfo *)0x0);
  iStack_3 = pOVar1->currentCryptoKey;
  AStack_4 = pOVar1->hiddenValue;
  pBStack_5 = pOVar1->hiddenValueOld;
  fStack_6 = pOVar1->fakeValue;
  bVar7 = pOVar1->inited;
  uVar8 = *(undefined3 *)&pOVar1->field_0x11;
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    OStack_2.hiddenValue = (ACTkByte4)TypeInfo__MVPhysics;
    OStack_2.currentCryptoKey = (int32_t)&UNK_?;
    func_?();
  }
  pMVar9 = TypeInfo__MVPhysics->static_fields;
  (pMVar9->gravity).currentCryptoKey = iStack_3;
  (pMVar9->gravity).hiddenValue = AStack_4;
  (pMVar9->gravity).hiddenValueOld = pBStack_5;
  (pMVar9->gravity).fakeValue = fStack_6;
  (pMVar9->gravity).inited = bVar7;
  *(undefined3 *)&(pMVar9->gravity).field_0x11 = uVar8;
  return;
}


/* MVPhysics() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_2,30.0,(MethodInfo *)0x0);
  AVar3 = pOVar1->hiddenValue;
  pBVar4 = pOVar1->hiddenValueOld;
  fVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->inited;
  uVar7 = *(undefined3 *)&pOVar1->field_0x11;
  OStack_2.hiddenValueOld = (Byte__Array *)0x0;
  pMVar8 = TypeInfo__MVPhysics->static_fields;
  OStack_2.hiddenValue.b1 = 0;
  OStack_2.hiddenValue.b2 = 0;
  OStack_2.hiddenValue.b3 = 0;
  OStack_2.hiddenValue.b4 = 0;
  OStack_2.currentCryptoKey = 0;
  (pMVar8->gravity).currentCryptoKey = pOVar1->currentCryptoKey;
  (pMVar8->gravity).hiddenValue = AVar3;
  (pMVar8->gravity).hiddenValueOld = pBVar4;
  (pMVar8->gravity).fakeValue = fVar5;
  (pMVar8->gravity).inited = bVar6;
  *(undefined3 *)&(pMVar8->gravity).field_0x11 = uVar7;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  func_?(&fStack_9,0,0,0);
  pMVar8 = TypeInfo__MVPhysics->static_fields;
  (pMVar8->airPhysicalProperties).friction = fStack_9;
  (pMVar8->airPhysicalProperties).bouncyness = fStack_10;
  (pMVar8->airPhysicalProperties).softness = fStack_11;
  (pMVar8->airPhysicalProperties).staticFriction = fStack_12;
  (pMVar8->airPhysicalProperties).toughness = fStack_13;
  return;
}


/* ObscuredFloat get_Gravity() */

ObscuredFloat *
Assembly-CSharp.dll::MVPhysics::MVPhysics_get_Gravity
          (ObscuredFloat *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  AVar2 = (pMVar1->gravity).hiddenValue;
  pBVar3 = (pMVar1->gravity).hiddenValueOld;
  fVar4 = (pMVar1->gravity).fakeValue;
  bVar5 = (pMVar1->gravity).inited;
  uVar6 = *(undefined3 *)&(pMVar1->gravity).field_0x11;
  __return_storage_ptr__->currentCryptoKey = (pMVar1->gravity).currentCryptoKey;
  __return_storage_ptr__->hiddenValue = AVar2;
  __return_storage_ptr__->hiddenValueOld = pBVar3;
  __return_storage_ptr__->fakeValue = fVar4;
  __return_storage_ptr__->inited = bVar5;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar6;
  return __return_storage_ptr__;
}


/* Void set_Gravity(ObscuredFloat) */

void Assembly-CSharp.dll::MVPhysics::MVPhysics_set_Gravity(ObscuredFloat value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  (pMVar1->gravity).currentCryptoKey = value.currentCryptoKey;
  (pMVar1->gravity).hiddenValue = value.hiddenValue;
  (pMVar1->gravity).hiddenValueOld = value.hiddenValueOld;
  (pMVar1->gravity).fakeValue = value.fakeValue;
  (pMVar1->gravity).inited = value.inited;
  *(undefined3 *)&(pMVar1->gravity).field_0x11 = value._17_3_;
  return;
}

