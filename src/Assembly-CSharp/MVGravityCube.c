
/* Void Destroy() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_Destroy
               (MVGravityCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVPhysics);
  }
  MVPhysics::MVPhysics_Reset((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)0x0,(MethodInfo *)0x0);
  if (pCRam000000e8 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCRam000000e8,(MethodInfo *)0x0);
    pCRam000000e8 = (CullingSubscriberBase *)0x0;
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_Initialize
               (MVGravityCube *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_OnDataUpdate
               (MVGravityCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_gravity,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?();
    }
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar2 = (float *)func_?();
        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit
                           ((ObscuredFloat *)&stack0xffffffd8,*pfVar2,(MethodInfo *)0x0);
        puVar4 = (undefined *)pOVar3->currentCryptoKey;
        AVar5 = pOVar3->hiddenValue;
        pBVar6 = pOVar3->hiddenValueOld;
        fVar7 = pOVar3->fakeValue;
        if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
          puVar4 = &UNK_?;
          AVar5 = (ACTkByte4)TypeInfo__MVPhysics;
          func_?();
        }
        value.hiddenValue = AVar5;
        value.currentCryptoKey = (int32_t)puVar4;
        value.hiddenValueOld = pBVar6;
        value.fakeValue = fVar7;
        value.inited = pOVar3->inited;
        value._17_3_ = *(undefined3 *)&pOVar3->field_0x11;
        MVPhysics::MVPhysics_set_Gravity(value,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVGravityCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube__ctor
               (MVGravityCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

