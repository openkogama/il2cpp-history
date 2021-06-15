
/* Void Initialize() */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_Initialize(MVToggleBox *this,MethodInfo *method)

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
             MethodInfo__MVToggleBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_,
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

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_InputStateUpdateCallback
               (MVToggleBox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  bVar1 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    if (logicInputState == LogicInputState__Enum_FromColdToHot) {
      bVar1 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
      MVToggleBox_set_Toggled(this,bVar1 == 0,(MethodInfo *)0x0);
    }
    pOVar2 = (this->fields).outputSignalTransmitter;
    bVar1 = MVToggleBox_get_Toggled(this,(MethodInfo *)0x0);
    if (pOVar2 != (OutputSignalTransmitter *)0x0) {
      OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar2,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_00,(Type *)StringLiteral_once,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Boolean,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        logicInputState = (LogicInputState__Enum)&UNK_?;
        pcVar5 = (char *)func_?();
        if (*pcVar5 == '\0') goto code_?;
        pOVar2 = (this->fields).outputSignalTransmitter;
        if (pOVar2 != (OutputSignalTransmitter *)0x0) {
          OutputSignalTransmitter::OutputSignalTransmitter_Send(pOVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_OnDataUpdate
               (MVToggleBox *this,MethodInfo *method)

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

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_Reset(MVToggleBox *this,MethodInfo *method)

{
  MVToggleBox_set_Toggled(this,0,(MethodInfo *)0x0);
  return;
}


/* MVToggleBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox__ctor
               (MVToggleBox *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = PrefabPool::PrefabPool_get_MVToggleBoxPrefab(this_00,(MethodInfo *)0x0);
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_DocumentationType
          (MVToggleBox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_ToggleBox;
}


/* Boolean get_Once() */

bool Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_Once(MVToggleBox *this,MethodInfo *method)

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
                       (this_00,(Type *)StringLiteral_once,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pBStack2 = TypeInfo__System__Boolean;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pBStack2 = (Boolean__Class *)pPVar1;
        pbVar3 = (bool *)func_?();
        return *pbVar3;
      }
      goto code_?;
    }
  }
  pBStack2 = (Boolean__Class *)0x0;
  func_?();
  pBStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean get_Toggled() */

bool Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_Toggled(MVToggleBox *this,MethodInfo *method)

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
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_toggled,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
    pOVar2 = (ObscuredBool *)func_?();
    bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void set_Once(Boolean) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_set_Once
               (MVToggleBox *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  value_00 = (Theme *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_once,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Toggled(Boolean) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_set_Toggled
               (MVToggleBox *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  value_00 = *pOVar1;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  Extensions::Extensions_SetObscuredType_3
            (hashtable,StringLiteral_toggled,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
            );
  return;
}

