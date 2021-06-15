
/* Void Initialize() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_Initialize(MVPulseBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__MVPulseBox__OnSignal_bool__bool__LogicObjectManager_
             ,
             MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
            );
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,
                      (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  this_01 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__OutputSignalTransmitter);
  WorldObjectClientRef`1[MVWorldObjectClient]::WorldObjectClientRef_1_MVWorldObjectClient___ctor
            (this_01,(int32_t)woId,(MethodInfo *)0x0);
  (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_OnDataUpdate(MVPulseBox *this,MethodInfo *method)

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


/* Void OnSignal(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_OnSignal
               (MVPulseBox *this,bool isHot,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(0);
    pOVar1 = extraout_ECX;
  }
  else {
    pDVar2 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar2,(Type *)StringLiteral_intervalOn,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?(pPVar3);
    pOVar6 = (Object *)(int)(*pfVar5 * _UNK_?);
    pDVar2 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar2,(Type *)StringLiteral_intervalOff,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?(pPVar3);
    fVar7 = *pfVar5 * _UNK_?;
    if (logicObjectManager == (LogicObjectManager *)0x0) goto code_?;
    pIVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)logicObjectManager,
                        (MethodInfo *)0x0);
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
    unaff_EDI = Extensions::Extensions_GetObscuredType
                          (hashtable,StringLiteral_currentStartTime,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
      if ((int)pOVar6 <= ((int)pIVar8 - iVar10) % ((int)&pOVar6->klass + (int)fVar7))
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

/* decompilation failed: Low-level Error: Symbol offset is incompatible with VariableGroup */


/* MVPulseBox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox__ctor
               (MVPulseBox *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = PrefabPool::PrefabPool_get_MVPulseBoxPrefab(this_00,(MethodInfo *)0x0);
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


/* Int32 get_CurrentStartTime() */

int32_t Assembly-CSharp.dll::MVPulseBox::MVPulseBox_get_CurrentStartTime
                  (MVPulseBox *this,MethodInfo *method)

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
                     (hashtable,StringLiteral_currentStartTime,(MethodInfo *)0x0);
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
Assembly-CSharp.dll::MVPulseBox::MVPulseBox_get_DocumentationType
          (MVPulseBox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_PulseBox;
}


/* Void set_CurrentStartTime(Int32) */

void Assembly-CSharp.dll::MVPulseBox::MVPulseBox_set_CurrentStartTime
               (MVPulseBox *this,int32_t value,MethodInfo *method)

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
            (hashtable,StringLiteral_currentStartTime,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  return;
}

