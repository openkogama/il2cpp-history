
/* Void NotifyChange() */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_NotifyChange
               (MVRuntimeDataVariable *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    pMVar1 = (this->fields).OnChange;
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields).value,(MethodInfo *)0x0);
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,pOVar2,(pMVar1->fields)._._.method);
  }
  if (((this->fields).writeThrough != 0) &&
     ((this->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
    pMVar3 = (this->fields).OnWriteThrough;
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields).value,(MethodInfo *)0x0);
    (*(pMVar3->fields)._._.invoke_impl)
              ((pMVar3->fields)._._.method_code,pOVar2,(pMVar3->fields)._._.method);
  }
  return;
}


/* Void Receive(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_Receive
               (MVRuntimeDataVariable *this,
               Dictionary_2_System_Object_System_Object_ *runtimeDataDelta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).variableId;
  if (pOVar1 != (ObscuredString *)0x0) {
    pOVar2 = (Object *)
             (*(code *)(pOVar1->klass->vtable).ToString.method)(pOVar1,pOVar1->klass[1]._0.image);
    if (runtimeDataDelta != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         runtimeDataDelta,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar3 != 0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           runtimeDataDelta,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                           ((Object *)value.m_Index,(MethodInfo *)0x0);
        pOVar2 = (this->fields).value;
        (this->fields).value = pOVar4;
        func_?(&(this->fields).value,pOVar4);
        if (pOVar2 != pOVar4) {
          if ((this->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            pMVar5 = (this->fields).OnChange;
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((this->fields).value,(MethodInfo *)0x0);
            (*(pMVar5->fields)._._.invoke_impl)();
          }
          if (((this->fields).writeThrough != 0) &&
             ((this->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
          {
            pMVar6 = (this->fields).OnWriteThrough;
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((this->fields).value,(MethodInfo *)0x0);
            (*(pMVar6->fields)._._.invoke_impl)();
          }
        }
      }
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Send(Dictionary`2[System.Object,System.Object] ByRef, Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_Send
               (MVRuntimeDataVariable *this,
               Dictionary_2_System_Object_System_Object_ **runtimeDataDelta,bool immediateSend,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).value;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                      (pOVar1,(this->fields).sendValue,(pOVar1->klass->vtable).Finalize.methodPtr);
    if (cVar2 == '\0') {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((this->fields).lastSendTime + (this->fields).sendInterval < fVar3) {
        immediateSend = 1;
      }
      if (immediateSend != 0) {
        if (*runtimeDataDelta == (Dictionary_2_System_Object_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (*runtimeDataDelta,(Object *)(this->fields).variableId,(this->fields).value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pOVar1 = (this->fields).value;
        (this->fields).sendValue = pOVar1;
        func_?(&(this->fields).sendValue,pOVar1);
        (this->fields).lastSendTime = fVar3;
      }
    }
    return;
  }
code_?:
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&StringLiteral_Initial_runtime_data_does_not_co);
    cRam_? = '\x01';
  }
  (this->fields).lastSendTime = -INFINITY;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
  (this->fields).variableId = pOVar1;
  func_?(&this->fields,pOVar1);
  (this->fields).sendInterval = sendInterval;
  (this->fields).writeThrough = writeThrough;
  pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit_1((this->fields).variableId,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = Extensions::Extensions_ContainsObscuredKey(initialRuntimeData,pSVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pOVar1 = (this->fields).variableId;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit_1(pOVar1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Initial_runtime_data_does_not_co,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  if (initialRuntimeData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       initialRuntimeData,(Object *)(this->fields).variableId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    (this->fields).value = (Object *)TVar4.m_Index;
    func_?();
    (this->fields).sendValue = (this->fields).value;
    func_?();
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
  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     (value,(MethodInfo *)0x0);
  pOVar2 = (this->fields).value;
  (this->fields).value = pOVar1;
  func_?(&(this->fields).value,pOVar1);
  if (pOVar2 != pOVar1) {
    if ((this->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar3 = (this->fields).OnChange;
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar3->fields)._._.invoke_impl)
                ((pMVar3->fields)._._.method_code,pOVar2,(pMVar3->fields)._._.method);
    }
    if (((this->fields).writeThrough != 0) &&
       ((this->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar4 = (this->fields).OnWriteThrough;
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,pOVar2,(pMVar4->fields)._._.method);
    }
  }
  return;
}

