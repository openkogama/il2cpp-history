
/* Void Initialize() */

void Assembly-CSharp.dll::MVBattery::MVBattery_Initialize(MVBattery *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&MethodInfo__MVBattery__SignalCallback_bool__bool__LogicObjectManager_);
    func_?(&TypeInfo__OutputSignalTransmitter);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Action_3_Boolean_Boolean_Object_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  if (this_00 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
    mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::Action_3_Boolean_Boolean_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVBattery__SignalCallback_bool__bool__LogicObjectManager_,
               (MethodInfo *)0x0);
    pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                       ((MVWorldObject *)this,1,
                        (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
    func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
    woId = (this->fields)._._._.id;
    this_01 = (WorldObjectClientRef_1_System_Object_ *)
              func_?(TypeInfo__OutputSignalTransmitter);
    if (this_01 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
      WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                (this_01,woId,(MethodInfo *)0x0);
      (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
      func_?(&(this->fields).outputSignalTransmitter,this_01);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVBattery(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBattery::MVBattery__ctor
               (MVBattery *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvBatteryPrefab,worldObjects,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

