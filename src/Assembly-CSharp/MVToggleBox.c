
/* Void Initialize() */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_Initialize(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&
                    MethodInfo__MVToggleBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&TypeInfo__OutputSignalTransmitter);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  this_00 = (Action_2_Int32Enum_Object_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  if (this_00 != (Action_2_Int32Enum_Object_ *)0x0) {
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVToggleBox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
               ,(MethodInfo *)0x0);
    pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,0,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
    func_?();
    woId = (this->fields)._._._.id;
    this_01 = (WorldObjectClientRef_1_System_Object_ *)
              func_?(TypeInfo__OutputSignalTransmitter);
    if (this_01 != (WorldObjectClientRef_1_System_Object_ *)0x0) {
      WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                (this_01,woId,(MethodInfo *)0x0);
      (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_01;
      func_?();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      func_?(&TypeInfo__System__Boolean);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&StringLiteral_once);
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._._._.data;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_once,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Boolean,pOVar3);
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
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
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvToggleBoxPrefab,worldObjects,
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_once,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_Toggled() */

bool Assembly-CSharp.dll::MVToggleBox::MVToggleBox_get_Toggled(MVToggleBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_toggled);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_toggled,(MethodInfo *)0x0)
  ;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_once);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  bStack1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_once,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Toggled(Boolean) */

void Assembly-CSharp.dll::MVToggleBox::MVToggleBox_set_Toggled
               (MVToggleBox *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_toggled);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  value_00 = *pOVar1;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  Extensions::Extensions_SetObscuredType_1
            (hashtable,StringLiteral_toggled,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
            );
  return;
}

