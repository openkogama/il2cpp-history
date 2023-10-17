
/* Void Initialize() */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_Initialize(MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__MVRandomBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__OutputSignalTransmitterSpecific);
    func_?(&TypeInfo__MV__WorldObject__RandomGenerator);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
  if (pOVar1 != (ObscuredInt__Array *)0x0) {
    if (pOVar1->max_length == 0) goto code_?;
    iVar2 = pOVar1->vector[0].currentCryptoKey;
    iVar3 = pOVar1->vector[0].hiddenValue;
    iVar4 = pOVar1->vector[0].fakeValue;
    puVar5 = *(undefined **)&pOVar1->vector[0].inited;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      puVar5 = &UNK_?;
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    value.hiddenValue = iVar3;
    value.currentCryptoKey = iVar2;
    value.fakeValue = iVar4;
    value._12_4_ = puVar5;
    seed = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
    if (pOVar1 != (ObscuredInt__Array *)0x0) {
      if (pOVar1->max_length < 2) goto code_?;
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
      ObscuredInt_op_Implicit_1(pOVar1->vector[1],(MethodInfo *)0x0);
      pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
      if (pOVar1 != (ObscuredInt__Array *)0x0) {
        if (pOVar1->max_length < 3) goto code_?;
        round = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(pOVar1->vector[2],(MethodInfo *)0x0);
        this_00 = (RandomGenerator *)func_?();
        if (this_00 != (RandomGenerator *)0x0) {
          MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__ctor_1
                    (this_00,seed,0,round,(MethodInfo *)0x0);
          (this->fields).randomGenerator = this_00;
          func_?(&(this->fields).randomGenerator,this_00);
          this_01 = (Action_2_Int32Enum_Object_ *)
                    func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          if (this_01 != (Action_2_Int32Enum_Object_ *)0x0) {
            mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVRandomBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                       ,(MethodInfo *)0x0);
            pIVar6 = LogicClientsideFactory::
                     LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                               ((MVWorldObject *)this,0,
                                (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                                (MethodInfo *)0x0);
            (this->fields)._InputSignalReceiver_k__BackingField = pIVar6;
            func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar6);
            iVar2 = (this->fields)._._._.id;
            this_02 = (WorldObjectClientRef_1_System_Object_ *)
                      func_?(TypeInfo__OutputSignalTransmitterSpecific);
            if (this_02 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
              WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                        (this_02,iVar2,(MethodInfo *)0x0);
              (this->fields)._outputSignalTransmitter = (OutputSignalTransmitterSpecific *)this_02;
              func_?(&(this->fields)._outputSignalTransmitter,this_02);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_InputStateUpdateCallback
               (MVRandomBox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pLVar1 = (this->fields)._._._.outputLinkRefs;
    if (pLVar1 != (List_1_MV_WorldObject_Link_ *)0x0) {
      if ((pLVar1->fields)._size == 0) {
        MVRandomBox_set_CurrentValue(this,0,(MethodInfo *)0x0);
      }
      else {
        this_00 = (this->fields).randomGenerator;
        if (this_00 == (RandomGenerator *)0x0) goto code_?;
        iVar2 = MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                          (this_00,0,(pLVar1->fields)._size,(MethodInfo *)0x0);
        MVRandomBox_set_CurrentValue(this,iVar2,(MethodInfo *)0x0);
      }
code_?:
      pOVar3 = (this->fields)._outputSignalTransmitter;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Extensions);
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        func_?(&StringLiteral_currentValue);
        cRam_? = '\x01';
      }
      hashtable = (Dictionary_2_System_Object_System_Object_ *)
                  (*(this->klass->vtable).get_RunTimeData.methodPtr)
                            (this,(this->klass->vtable).get_RunTimeData.method);
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Extensions);
      }
      this = (MVRandomBox *)
             Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      if (this != (MVRandomBox *)0x0) {
        pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
        if ((this->klass->_0).element_class !=
            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
        goto code_?;
        pOVar5 = (ObscuredInt *)func_?(this);
        iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
        if (pOVar3 != (OutputSignalTransmitterSpecific *)0x0) {
          OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
                    (pOVar3,iVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    if (logicInputState == LogicInputState__Enum_Hot) goto code_?;
    pOVar3 = (this->fields)._outputSignalTransmitter;
    if (pOVar3 != (OutputSignalTransmitterSpecific *)0x0) {
      OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
                (pOVar3,-1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pOVar4 = extraout_ECX;
code_?:
  func_?(this,pOVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_Reset(MVRandomBox *this,MethodInfo *method)

{
  MVRandomBox_set_CurrentValue(this,0,(MethodInfo *)0x0);
  return;
}


/* Void SetRandomIndex(Int32) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_SetRandomIndex
               (MVRandomBox *this,int32_t randomIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentValue);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,randomIndex,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value.hiddenValue = (int32_t)pEVar3;
  value.currentCryptoKey = (int32_t)puVar2;
  value.fakeValue = iVar4;
  value.inited = pOVar1->inited;
  value._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_3
            (hashtable,StringLiteral_currentValue,value,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}


/* MVRandomBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox__ctor
               (MVRandomBox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvRandomBoxPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ObscuredInt[] get_CurrentRandomValues() */

ObscuredInt__Array *
Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_CurrentRandomValues
          (MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentRandomValues);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentRandomValues,(MethodInfo *)0x0);
  pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  if (pOVar1 == (Object *)0x0) {
    return (ObscuredInt__Array *)0x0;
  }
  pOVar3 = (ObscuredInt__Array *)
           func_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  if (pOVar3 != (ObscuredInt__Array *)0x0) {
    return pOVar3;
  }
  func_?(pOVar1,pOVar2);
  pcVar4 = (code *)swi(3);
  pOVar3 = (ObscuredInt__Array *)(*pcVar4)();
  return pOVar3;
}


/* Int32 get_CurrentValue() */

int32_t Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_CurrentValue
                  (MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentValue);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_DocumentationType
          (MVRandomBox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_RandomBox;
}


/* Void set_CurrentValue(Int32) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_set_CurrentValue
               (MVRandomBox *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_currentValue);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
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
  Extensions::Extensions_SetObscuredType_3
            (hashtable,StringLiteral_currentValue,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

