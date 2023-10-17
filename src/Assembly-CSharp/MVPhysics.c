
/* Single CalculateJumpForceFromVerticalVelocity(Single) */

float Assembly-CSharp.dll::MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                (float velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  value = TypeInfo__MVPhysics->static_fields->gravity;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  value = TypeInfo__MVPhysics->static_fields->gravity;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  dVar2 = (double)(fVar1 * (targetJumpHeight + targetJumpHeight));
  if (0.0 <= dVar2) {
    return (float)SQRT(dVar2);
  }
  func_?();
  return (float)dVar2;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    OStack_2.hiddenValue = (ACTkByte4)TypeInfo__MVPhysics;
    OStack_2.currentCryptoKey = (int32_t)&UNK_?;
    func_?();
  }
  pMVar9 = TypeInfo__MVPhysics->static_fields;
  OStack_2.hiddenValue.b1 = 0;
  OStack_2.hiddenValue.b2 = 0;
  OStack_2.hiddenValue.b3 = 0;
  OStack_2.hiddenValue.b4 = 0;
  (pMVar9->gravity).currentCryptoKey = iStack_3;
  (pMVar9->gravity).hiddenValue = AStack_4;
  (pMVar9->gravity).hiddenValueOld = pBStack_5;
  (pMVar9->gravity).fakeValue = fStack_6;
  (pMVar9->gravity).inited = bVar7;
  *(undefined3 *)&(pMVar9->gravity).field_0x11 = uVar8;
  OStack_2.currentCryptoKey =
       (int32_t)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld;
  func_?();
  return;
}


/* MVPhysics() */

void Assembly-CSharp.dll::MVPhysics::MVPhysics__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffb8,30.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  pMVar7 = TypeInfo__MVPhysics->static_fields;
  (pMVar7->gravity).currentCryptoKey = pOVar1->currentCryptoKey;
  (pMVar7->gravity).hiddenValue = AVar2;
  (pMVar7->gravity).hiddenValueOld = pBVar3;
  (pMVar7->gravity).fakeValue = fVar4;
  (pMVar7->gravity).inited = bVar5;
  *(undefined3 *)&(pMVar7->gravity).field_0x11 = uVar6;
  func_?(&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld,0);
  PStack_8.toughness = 0.0;
  PStack_8.friction = 0.0;
  PStack_8.bouncyness = 0.0;
  PStack_8.softness = 0.0;
  PStack_8.staticFriction = 0.0;
  MVWorldObject.dll::MV::WorldObject::PhysicalProperties::PhysicalProperties__ctor
            (&PStack_8,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  pMVar7 = TypeInfo__MVPhysics->static_fields;
  (pMVar7->airPhysicalProperties).friction = PStack_8.friction;
  (pMVar7->airPhysicalProperties).bouncyness = PStack_8.bouncyness;
  (pMVar7->airPhysicalProperties).softness = PStack_8.softness;
  (pMVar7->airPhysicalProperties).staticFriction = PStack_8.staticFriction;
  (pMVar7->airPhysicalProperties).toughness = PStack_8.toughness;
  return;
}


/* ObscuredFloat get_Gravity() */

ObscuredFloat *
Assembly-CSharp.dll::MVPhysics::MVPhysics_get_Gravity
          (ObscuredFloat *__return_storage_ptr__,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  pMVar1 = TypeInfo__MVPhysics->static_fields;
  (pMVar1->gravity).currentCryptoKey = value.currentCryptoKey;
  (pMVar1->gravity).hiddenValue = value.hiddenValue;
  (pMVar1->gravity).hiddenValueOld = value.hiddenValueOld;
  (pMVar1->gravity).fakeValue = value.fakeValue;
  (pMVar1->gravity).inited = value.inited;
  *(undefined3 *)&(pMVar1->gravity).field_0x11 = value._17_3_;
  func_?(&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld,0);
  return;
}

