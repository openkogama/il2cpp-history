
/* Void Initialize() */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_Initialize(MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
  if (pOVar1 == (ObscuredInt__Array *)0x0) goto code_?;
  if (pOVar1->max_length == 0) {
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    iVar3 = pOVar1->vector[0].currentCryptoKey;
    iVar4 = pOVar1->vector[0].hiddenValue;
    iVar5 = pOVar1->vector[0].fakeValue;
    puVar6 = *(undefined **)&pOVar1->vector[0].inited;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    value.hiddenValue = iVar4;
    value.currentCryptoKey = iVar3;
    value.fakeValue = iVar5;
    value._12_4_ = puVar6;
    method_00 = (MethodInfo *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    pOVar1 = MVRandomBox_get_CurrentRandomValues(this,method_00);
    if (pOVar1 == (ObscuredInt__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (1 < pOVar1->max_length) {
      step = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(pOVar1->vector[1],(MethodInfo *)0x0);
      pOVar1 = MVRandomBox_get_CurrentRandomValues(this,(MethodInfo *)0x0);
      if (pOVar1 != (ObscuredInt__Array *)0x0) {
        if (2 < pOVar1->max_length) {
          round = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(pOVar1->vector[2],(MethodInfo *)0x0);
          this_00 = (RandomGenerator *)func_?();
          MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator__ctor
                    (this_00,(uint32_t)method_00,step,round,(MethodInfo *)0x0);
          (this->fields).randomGenerator = this_00;
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVRandomBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                     ,
                     MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                    );
          pIVar7 = LogicClientsideFactory::
                   LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                             ((MVWorldObject *)this,0,
                              (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                              (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                              (MethodInfo *)0x0);
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar7;
          woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          this_02 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
          WorldObjectClientRef`1[MVWorldObjectClient]::
          WorldObjectClientRef_1_MVWorldObjectClient___ctor(this_02,(int32_t)woId,(MethodInfo *)0x0)
          ;
          (this->fields)._outputSignalTransmitter = (OutputSignalTransmitterSpecific *)this_02;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVRandomBox::MVRandomBox_InputStateUpdateCallback
               (MVRandomBox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pCVar1 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
             System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Int32]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                        (MethodInfo *)0x0);
    if (pCVar1 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (pCVar1,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                         );
      if (pOVar2 == (Object *)0x0) {
        MVRandomBox_set_CurrentValue(this,0,(MethodInfo *)0x0);
code_?:
        pOVar3 = (this->fields)._outputSignalTransmitter;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        hashtable = (Dictionary_2_System_Object_System_Object_ *)
                    (*(code *)(this->klass->vtable).get_RunTimeData.method)
                              (this,(this->klass->vtable).set_RunTimeData.methodPtr);
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?(TypeInfo__Extensions);
        }
        this = (MVRandomBox *)
               Extensions::Extensions_GetObscuredType
                         (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        }
        if (this != (MVRandomBox *)0x0) {
          pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
          if ((this->klass->_0).element_class !=
              (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
          goto code_?;
          pOVar5 = (ObscuredInt *)func_?(this);
          iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
          if (pOVar3 != (OutputSignalTransmitterSpecific *)0x0) {
            OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
                      (pOVar3,iVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        this_00 = (this->fields).randomGenerator;
        pCVar1 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                 System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                 ::Int32]::
                 Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                           ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                            (MethodInfo *)0x0);
        if (pCVar1 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar1,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                             );
          if (this_00 != (RandomGenerator *)0x0) {
            iVar6 = MVWorldObject.dll::MV::WorldObject::RandomGenerator::RandomGenerator_Range
                              (this_00,0,(int32_t)pOVar2,(MethodInfo *)0x0);
            MVRandomBox_set_CurrentValue(this,iVar6,(MethodInfo *)0x0);
            goto code_?;
          }
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
  func_?(0);
  pOVar4 = extraout_ECX;
code_?:
  func_?(this,pOVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,randomIndex,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    puVar2 = &UNK_?;
    pEVar3 = TypeInfo__Extensions;
    func_?();
  }
  value.hiddenValue = (int32_t)pEVar3;
  value.currentCryptoKey = (int32_t)puVar2;
  value.fakeValue = iVar4;
  value.inited = pOVar1->inited;
  value._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVRandomBoxPrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ObscuredInt[] get_CurrentRandomValues() */

ObscuredInt__Array *
Assembly-CSharp.dll::MVRandomBox::MVRandomBox_get_CurrentRandomValues
          (MVRandomBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_currentValue,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value,(MethodInfo *)0x0);
  puVar2 = (undefined *)pOVar1->currentCryptoKey;
  pEVar3 = (Extensions__Class *)pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
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
            (hashtable,StringLiteral_currentValue,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

