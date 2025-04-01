
/* Void NotifyChange() */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_NotifyChange
               (MVRuntimeDataVariable *this,MethodInfo *method)

{
  pMVar1 = (this->fields).OnChange;
  if (pMVar1 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((this->fields).value,(MethodInfo *)0x0);
    (*(pMVar1->fields)._._.invoke_impl)
              ((pMVar1->fields)._._.method_code,pOVar2,(pMVar1->fields)._._.method);
  }
  if (((this->fields).writeThrough != 0) &&
     (pMVar3 = (this->fields).OnWriteThrough,
     pMVar3 != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
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
        ppOVar5 = &(this->fields).value;
        *ppOVar5 = pOVar4;
        func_?(ppOVar5,pOVar4);
        if (pOVar2 != pOVar4) {
          pMVar6 = (this->fields).OnChange;
          if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((this->fields).value,(MethodInfo *)0x0);
            (*(pMVar6->fields)._._.invoke_impl)();
          }
          if (((this->fields).writeThrough != 0) &&
             (pMVar7 = (this->fields).OnWriteThrough,
             pMVar7 != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((this->fields).value,(MethodInfo *)0x0);
            (*(pMVar7->fields)._._.invoke_impl)();
          }
        }
      }
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    ppOVar2 = &(this->fields).sendValue;
    cVar3 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                      (pOVar1,*ppOVar2,(pOVar1->klass->vtable).Finalize.methodPtr);
    if (cVar3 == '\0') {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((this->fields).sendInterval + (this->fields).lastSendTime < fVar4) {
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
        *ppOVar2 = pOVar1;
        func_?(ppOVar2,pOVar1);
        (this->fields).lastSendTime = fVar4;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
  pMVar2 = &this->fields;
  pMVar2->variableId = pOVar1;
  func_?(pMVar2,pOVar1);
  (this->fields).sendInterval = sendInterval;
  (this->fields).writeThrough = writeThrough;
  pSVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit_1(pMVar2->variableId,(MethodInfo *)0x0);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar4 = Extensions::Extensions_ContainsObscuredKey(initialRuntimeData,pSVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pOVar1 = pMVar2->variableId;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit_1(pOVar1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Initial_runtime_data_does_not_co,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  if (initialRuntimeData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       initialRuntimeData,(Object *)pMVar2->variableId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    ppOVar6 = &(this->fields).value;
    *ppOVar6 = (Object *)TVar5.m_Index;
    func_?();
    (this->fields).sendValue = *ppOVar6;
    func_?();
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  ppOVar3 = &(this->fields).value;
  *ppOVar3 = pOVar1;
  func_?(ppOVar3,pOVar1);
  if (pOVar2 != pOVar1) {
    pMVar4 = (this->fields).OnChange;
    if (pMVar4 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,pOVar2,(pMVar4->fields)._._.method);
    }
    if (((this->fields).writeThrough != 0) &&
       (pMVar5 = (this->fields).OnWriteThrough,
       pMVar5 != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar5->fields)._._.invoke_impl)
                ((pMVar5->fields)._._.method_code,pOVar2,(pMVar5->fields)._._.method);
    }
  }
  return;
}

