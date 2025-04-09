
/* Void Initialize() */

void Assembly-CSharp.dll::MVNegate::MVNegate_Initialize(MVNegate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&MethodInfo__MVNegate__SignalCallback_bool__bool__LogicObjectManager_);
    func_?(&TypeInfo__OutputSignalTransmitter);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  this_00 = (Action_3_Boolean_Boolean_Object_ *)
            func_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::Action_3_Boolean_Boolean_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVNegate__SignalCallback_bool__bool__LogicObjectManager_,(MethodInfo *)0x0)
  ;
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,0,
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


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVNegate::MVNegate_SignalCallback
               (MVNegate *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,b ^ 1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVNegate(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVNegate::MVNegate__ctor
               (MVNegate *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvNegatePrefab,worldObjects,
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVNegate::MVNegate_get_DocumentationType(MVNegate *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Negate;
}

