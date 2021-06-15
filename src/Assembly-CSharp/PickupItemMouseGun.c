
/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun_GetPackageData
          (InteractionData *__return_storage_ptr__,PickupItemMouseGun *this,MethodInfo *method)

{
  pIVar1 = MouseGunHitPackage::MouseGunHitPackage_Create(&IStack_2,(MethodInfo *)0x0);
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}


/* PickupItemMouseGun() */

void Assembly-CSharp.dll::PickupItemMouseGun::PickupItemMouseGun__ctor
               (PickupItemMouseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.range = 300.0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,5,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  OStack_2.hiddenValue = 0;
  (this->fields)._.maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields)._.maxAmmo.hiddenValue = iVar3;
  (this->fields)._.maxAmmo.fakeValue = iVar4;
  (this->fields)._.maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields)._.maxAmmo.field_0xd = uVar6;
  OStack_2.currentCryptoKey = 0x3f666666;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  func_?(&fStack_7,0x3e4ccccd,0x3e99999a);
  (this->fields)._.hitColor.r = fStack_7;
  (this->fields)._.hitColor.g = fStack_8;
  (this->fields)._.hitColor.b = fStack_9;
  (this->fields)._.hitColor.a = fStack_10;
  OStack_2.hiddenValue = 0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  OStack_2.currentCryptoKey = 0x3e4ccccd;
  func_?(&fStack_11,0x3f666666,0x3e99999a);
  (this->fields)._.missColor.r = fStack_11;
  (this->fields)._.missColor.g = fStack_12;
  (this->fields)._.missColor.b = fStack_13;
  (this->fields)._.missColor.a = fStack_14;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}

