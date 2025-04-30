
/* Void Initialize() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_Initialize(MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&MethodInfo__MVPulseBox__OnSignal_bool__bool__LogicObjectManager_);
    func_?(&TypeInfo__OutputSignalTransmitter);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  this_00 = (Action_3_Boolean_Boolean_Object_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::Action_3_Boolean_Boolean_Object___ctor
            (this_00,(Object *)this,MethodInfo__MVPulseBox__OnSignal_bool__bool__LogicObjectManager_
             ,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,
                      (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  ppIVar2 = &(this->fields)._InputSignalReceiver_k__BackingField;
  *ppIVar2 = pIVar1;
  func_?(ppIVar2,pIVar1);
  woId = (this->fields)._._._.id;
  this_01 = (WorldObjectClientRef_1_System_Object_ *)
            func_?(TypeInfo__OutputSignalTransmitter);
  WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
            (this_01,woId,(MethodInfo *)0x0);
  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
  func_?();
  return;
}


/* Void OnSignal(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_OnSignal
               (MVPulseBox *this,bool isHot,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_intervalOff);
    func_?(&StringLiteral_intervalOn);
    cRam_? = '\x01';
  }
  if (isHot == 0) {
    this_00 = (this->fields).outputSignalTransmitter;
code_?:
    if (this_00 != (OutputSignalTransmitter *)0x0) {
      OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,0,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
    pOVar1 = extraout_ECX;
  }
  else {
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar2,(Object *)StringLiteral_intervalOn,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar5 = (float *)func_?(TVar3.m_Index);
    pOVar6 = (Object *)(int)(*pfVar5 * _UNK_?);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar2,(Object *)StringLiteral_intervalOff,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Single,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    pfVar5 = (float *)func_?(TVar3.m_Index);
    fVar7 = *pfVar5 * _UNK_?;
    if (logicObjectManager == (LogicObjectManager *)0x0) goto code_?;
    iVar8 = (logicObjectManager->fields)._TimeStamp_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__Extensions);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      func_?(&StringLiteral_currentStartTime);
      cRam_? = '\x01';
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)
                          (this,(this->klass->vtable).set_RunTimeData.methodPtr);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = Extensions::Extensions_GetObscuredType
                          (hashtable,StringLiteral_currentStartTime,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    if (unaff_EDI == (Object *)0x0) goto code_?;
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if ((unaff_EDI->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      pOVar9 = (ObscuredInt *)func_?(unaff_EDI);
      iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1(*pOVar9,(MethodInfo *)0x0);
      this_00 = (this->fields).outputSignalTransmitter;
      unaff_EDI = pOVar6;
      if ((int)pOVar6 <= (iVar8 - iVar10) % ((int)&pOVar6->klass + (int)fVar7))
      goto code_?;
      if (this_00 != (OutputSignalTransmitter *)0x0) {
        OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar4 = func_?(unaff_EDI,pOVar1);
code_?:
  func_?(uVar4);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_Reset(MVPulseBox *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pLVar2 = (pMVar1->fields)._LogicObjectManager_k__BackingField,
     pLVar2 != (LogicObjectManagerClient *)0x0)) {
    iVar3 = (pLVar2->fields)._._TimeStamp_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&
                      void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                     );
      func_?(&TypeInfo__Extensions);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      func_?(&StringLiteral_currentStartTime);
      cRam_? = '\x01';
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)
                          (this,(this->klass->vtable).set_RunTimeData.methodPtr);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar3,(MethodInfo *)0x0);
    puVar5 = (undefined *)pOVar4->currentCryptoKey;
    pEVar6 = (Extensions__Class *)pOVar4->hiddenValue;
    iVar3 = pOVar4->fakeValue;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      puVar5 = &UNK_?;
      pEVar6 = TypeInfo__Extensions;
      func_?();
    }
    value.hiddenValue = (int32_t)pEVar6;
    value.currentCryptoKey = (int32_t)puVar5;
    value.fakeValue = iVar3;
    value.inited = pOVar4->inited;
    value._13_3_ = *(undefined3 *)&pOVar4->field_0xd;
    Extensions::Extensions_SetObscuredType_2
              (hashtable,StringLiteral_currentStartTime,value,
               void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
              );
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVPulseBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox__ctor
               (MVPulseBox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvPulseBoxPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Int32 get_CurrentStartTime() */

int32_t Assembly-CSharp.dll::MVPulseBox::MVPulseBox_get_CurrentStartTime
                  (MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentStartTime);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentStartTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
    pOVar2 = (ObscuredInt *)func_?();
    iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return iVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void set_CurrentStartTime(Int32) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_set_CurrentStartTime
               (MVPulseBox *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentStartTime);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value_00.hiddenValue = (int32_t)pEVar3;
  value_00.currentCryptoKey = (int32_t)puVar2;
  value_00.fakeValue = iVar4;
  value_00.inited = pOVar1->inited;
  value_00._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_currentStartTime,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

