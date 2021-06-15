
/* Void NotifyChange() */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_NotifyChange
               (MVRuntimeDataVariable *this,MethodInfo *method)

{
  pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields).OnChange;
  if (pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields).value,(MethodInfo *)0x0);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar1,pOVar2,(MethodInfo *)0x0);
  }
  if (((this->fields).writeThrough != 0) &&
     (pSVar1 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields).OnWriteThrough,
     pSVar1 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields).value,(MethodInfo *)0x0);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar1,pOVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void Receive(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_Receive
               (MVRuntimeDataVariable *this,
               Dictionary_2_System_Object_System_Object_ *runtimeDataDelta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).variableId;
  if (pOVar1 != (ObscuredString *)0x0) {
    key = (String *)
          (*(code *)(pOVar1->klass->vtable).ToString.method)(pOVar1,pOVar1->klass[1]._0.image);
    if (runtimeDataDelta != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)runtimeDataDelta,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 != 0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)runtimeDataDelta,(Type *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        MVRuntimeDataVariable_set_Value(this,(Object *)value,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Send(Dictionary`2[System.Object,System.Object] ByRef, Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_Send
               (MVRuntimeDataVariable *this,
               Dictionary_2_System_Object_System_Object_ **runtimeDataDelta,bool immediateSend,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).value;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                      (pOVar1,(this->fields).sendValue,(pOVar1->klass->vtable).Finalize.methodPtr);
    if (cVar2 == '\0') {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (((this->fields).sendInterval + (this->fields).lastSendTime < fVar3) ||
         (immediateSend != 0)) {
        if (*runtimeDataDelta == (Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)*runtimeDataDelta,
                   (String *)(this->fields).variableId,(Theme *)(this->fields).value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        (this->fields).sendValue = (this->fields).value;
        (this->fields).lastSendTime = fVar3;
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVRuntimeDataVariable(String, Single, Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
               (MVRuntimeDataVariable *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).lastSendTime = -INFINITY;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
  (this->fields).variableId = pOVar1;
  (this->fields).sendInterval = sendInterval;
  (this->fields).writeThrough = writeThrough;
  pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit_1(pOVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = Extensions::Extensions_ContainsObscuredKey(initialRuntimeData,pSVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pOVar1 = (this->fields).variableId;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit_1(pOVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Initial_runtime_data_does_not_co,pSVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  if (initialRuntimeData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)initialRuntimeData,
                        (Type *)(this->fields).variableId,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    (this->fields).value = (Object *)pPVar4;
    (this->fields).sendValue = (Object *)pPVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                   (MVRuntimeDataVariable *this,MethodInfo *method)

{
  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                     ((this->fields).value,(MethodInfo *)0x0);
  return pOVar1;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
               (MVRuntimeDataVariable *this,Object *value,MethodInfo *method)

{
  obscuredValue =
       ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue(value,(MethodInfo *)0x0);
  pOVar1 = (this->fields).value;
  (this->fields).value = obscuredValue;
  if (pOVar1 != obscuredValue) {
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields).OnChange;
    if (pSVar2 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
      pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         (obscuredValue,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar2,pOVar1,(MethodInfo *)0x0);
    }
    if (((this->fields).writeThrough != 0) &&
       (pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields).OnWriteThrough,
       pSVar2 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
      pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke(pSVar2,pOVar1,(MethodInfo *)0x0);
    }
  }
  return;
}

