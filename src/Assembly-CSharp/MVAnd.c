
/* Void Initialize() */

void Assembly-CSharp.dll::MVAnd::MVAnd_Initialize(MVAnd *this,MethodInfo *method)

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
            (this_00,(Object *)this,
             MethodInfo__MVAnd__SignalCallback_bool__bool__LogicObjectManager_,
             MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
            );
  if (cRam_? == '\0') {
    pLStack1 = (LogicEvaluateInputSignalsAnd__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pLStack1 = TypeInfo__LogicEvaluateInputSignalsAnd;
  this_01 = (AvatarLimbManager_AvatarHeadRotationHandler *)func_?();
  AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler__ctor
            (this_01,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    logicObjectManager =
         (LogicObjectManager *)
         System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::
         Object]::
         Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                   ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)this_02,
                    (MethodInfo *)0x0);
    this_03 = (InputSignalReceiverClient *)func_?();
    b = (Delegate *)0x0;
    InputSignalReceiverClient::InputSignalReceiverClient__ctor
              (this_03,(MVWorldObject *)this,(LogicEvaluateSignalComponentBase *)&UNK_?,0,
               logicObjectManager,(MethodInfo *)0x0);
    if (this_03 != (InputSignalReceiverClient *)0x0) {
      pAVar2 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(this_03->fields)._.OnSignal,b,(MethodInfo *)0x0);
      pAVar3 = (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0;
      if (pAVar2 == (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) {
code_?:
        (this_03->fields)._.OnSignal = pAVar3;
        (this->fields)._InputSignalReceiver_k__BackingField = (IInputSignalReceiver *)this_03;
        woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        this_04 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
        WorldObjectClientRef`1[MVWorldObjectClient]::
        WorldObjectClientRef_1_MVWorldObjectClient___ctor(this_04,(int32_t)woId,(MethodInfo *)0x0);
        (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_04;
        return;
      }
      if (pAVar2->klass == TypeInfo__System__Action<bool,_bool,_LogicObjectManager>) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 != (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVAnd::MVAnd_SignalCallback
               (MVAnd *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,b,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVAnd(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVAnd::MVAnd__ctor
               (MVAnd *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = (ObjectPrefab *)
                   MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_00,(MethodInfo *)0x0
                             );
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVAnd::MVAnd_get_DocumentationType(MVAnd *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_And;
}

