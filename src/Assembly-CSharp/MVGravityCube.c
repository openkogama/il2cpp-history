
/* Void Destroy() */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube_Destroy
               (MVGravityCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  MVPhysics::MVPhysics_Reset((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)0x0,(MethodInfo *)0x0);
  if (pCRam000000f0 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCRam000000f0,(MethodInfo *)0x0);
    pCRam000000f0 = (CullingSubscriberBase *)0x0;
    func_?(0xf0,0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_gravity);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_gravity,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      OStack_1.hiddenValue =
           (ACTkByte4)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      OStack_1.currentCryptoKey = (int32_t)&UNK_?;
      func_?();
    }
    if (unaff_ESI.m_Index != 0) {
      pSVar2 = TypeInfo__System__Single;
      if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar3 = (float *)func_?(unaff_ESI.m_Index);
        pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit(&OStack_1,*pfVar3,(MethodInfo *)0x0);
        iStack_5 = pOVar4->currentCryptoKey;
        AStack_6 = pOVar4->hiddenValue;
        pBStack_7 = pOVar4->hiddenValueOld;
        fStack_8 = pOVar4->fakeValue;
        bVar9 = pOVar4->inited;
        uVar10 = *(undefined3 *)&pOVar4->field_0x11;
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          OStack_1.hiddenValueOld = (Byte__Array *)TypeInfo__MVPhysics;
          OStack_1.hiddenValue = (ACTkByte4)&UNK_?;
          func_?();
        }
        if (cRam_? == '\0') {
          OStack_1.hiddenValueOld = (Byte__Array *)&TypeInfo__MVPhysics;
          OStack_1.hiddenValue = (ACTkByte4)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          OStack_1.hiddenValueOld = (Byte__Array *)TypeInfo__MVPhysics;
          OStack_1.hiddenValue = (ACTkByte4)&UNK_?;
          func_?();
        }
        OStack_1.hiddenValueOld = (Byte__Array *)0x0;
        pMVar11 = TypeInfo__MVPhysics->static_fields;
        (pMVar11->gravity).currentCryptoKey = iStack_5;
        (pMVar11->gravity).hiddenValue = AStack_6;
        (pMVar11->gravity).hiddenValueOld = pBStack_7;
        (pMVar11->gravity).fakeValue = fStack_8;
        (pMVar11->gravity).inited = bVar9;
        *(undefined3 *)&(pMVar11->gravity).field_0x11 = uVar10;
        OStack_1.hiddenValue =
             (ACTkByte4)&(TypeInfo__MVPhysics->static_fields->gravity).hiddenValueOld;
        OStack_1.currentCryptoKey = (int32_t)&UNK_?;
        func_?();
        return;
      }
      goto code_?;
    }
  }
  func_?();
  pSVar2 = extraout_ECX;
code_?:
  func_?(unaff_ESI.m_Index,pSVar2);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVGravityCube(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGravityCube::MVGravityCube__ctor
               (MVGravityCube *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvGravityCubePrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x8000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

