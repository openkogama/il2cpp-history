
/* Void Initialize() */

void Assembly-CSharp.dll::MVBattery::MVBattery_Initialize(MVBattery *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVBattery__SignalCallback_bool__bool__LogicObjectManager_,
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


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVBattery::MVBattery_SignalCallback
               (MVBattery *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVBattery(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBattery::MVBattery__ctor
               (MVBattery *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

