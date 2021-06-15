
/* Void Initialize() */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_Initialize
               (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVTimeTrigger__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,
             MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
            );
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  pOStack2 = TypeInfo__OutputSignalTransmitter;
  this_01 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
  WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
            (this_01,(int32_t)woId,(MethodInfo *)0x0);
  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_InputStateUpdateCallback
               (MVTimeTrigger *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      MVTimeTrigger_set_CurrentTime(this,0,(MethodInfo *)0x0);
    }
  }
  iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
  if (iVar1 != -1) {
    iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
    iVar2 = MVTimeTrigger_get_ActiveDurationTime(this,(MethodInfo *)0x0);
    iVar3 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
    if (iVar1 <= iVar3 + iVar2) {
      iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
      iVar2 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
      if (iVar2 < iVar1) {
        iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
        iVar2 = MVTimeTrigger_get_ActiveDurationTime(this,(MethodInfo *)0x0);
        iVar3 = MVTimeTrigger_get_DelayTime(this,(MethodInfo *)0x0);
        isHot = iVar1 <= iVar3 + iVar2;
      }
      else {
        isHot = false;
      }
      pOVar4 = (this->fields).outputSignalTransmitter;
      if (pOVar4 != (OutputSignalTransmitter *)0x0) {
        OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar4,isHot,(MethodInfo *)0x0);
        iVar1 = MVTimeTrigger_get_CurrentTime(this,(MethodInfo *)0x0);
        MVTimeTrigger_set_CurrentTime(this,iVar1 + 100,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    MVTimeTrigger_set_CurrentTime(this,-1,(MethodInfo *)0x0);
  }
  pOVar4 = (this->fields).outputSignalTransmitter;
  if (pOVar4 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar4,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_OnDataUpdate
               (MVTimeTrigger *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_Reset(MVTimeTrigger *this,MethodInfo *method)

{
  MVTimeTrigger_set_CurrentTime(this,-1,(MethodInfo *)0x0);
  return;
}


/* MVTimeTrigger(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger__ctor
               (MVTimeTrigger *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_ActiveDurationTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_ActiveDurationTime
                  (MVTimeTrigger *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_duration,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pSStack2 = TypeInfo__System__Single;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pSStack2 = (Single__Class *)pPVar1;
        pfVar3 = (float *)func_?();
        return (int)(*pfVar3 * _UNK_?);
      }
      goto code_?;
    }
  }
  pSStack2 = (Single__Class *)0x0;
  func_?();
  pSStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 get_CurrentTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_CurrentTime
                  (MVTimeTrigger *this,MethodInfo *method)

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
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_cT,(MethodInfo *)0x0);
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


/* Int32 get_DelayTime() */

int32_t Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_DelayTime
                  (MVTimeTrigger *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_time,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pSStack2 = TypeInfo__System__Single;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pSStack2 = (Single__Class *)pPVar1;
        pfVar3 = (float *)func_?();
        return (int)(*pfVar3 * _UNK_?);
      }
      goto code_?;
    }
  }
  pSStack2 = (Single__Class *)0x0;
  func_?();
  pSStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_get_DocumentationType
          (MVTimeTrigger *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TimeTrigger;
}


/* Void set_CurrentTime(Int32) */

void Assembly-CSharp.dll::MVTimeTrigger::MVTimeTrigger_set_CurrentTime
               (MVTimeTrigger *this,int32_t value,MethodInfo *method)

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
            (hashtable,StringLiteral_cT,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

