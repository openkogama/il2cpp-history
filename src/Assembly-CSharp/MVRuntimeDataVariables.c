
/* MVRuntimeDataVariable New(String, Single, Boolean) */

MVRuntimeDataVariable *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&TypeInfo__MVRuntimeDataVariable);
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pMVar2 = (MVRuntimeDataVariable *)func_?(TypeInfo__MVRuntimeDataVariable);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
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
      (pMVar2->fields).lastSendTime = -INFINITY;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pMVar2,ExceptionArgument__Enum_obj,unaff_EDI);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
      (pMVar2->fields).variableId = pOVar3;
      func_?(&pMVar2->fields,pOVar3);
      (pMVar2->fields).sendInterval = sendInterval;
      (pMVar2->fields).writeThrough = writeThrough;
      pSVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit_1((pMVar2->fields).variableId,(MethodInfo *)0x0);
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Extensions);
      }
      bVar5 = Extensions::Extensions_ContainsObscuredKey(hashtable,pSVar4,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pOVar3 = (pMVar2->fields).variableId;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        pSVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                 ::ObscuredString_op_Implicit_1(pOVar3,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Initial_runtime_data_does_not_co,pSVar4,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar4,(MethodInfo *)0x0);
      }
      if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (hashtable,(Object *)(pMVar2->fields).variableId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        (pMVar2->fields).value = pOVar6;
        func_?(&(pMVar2->fields).value,pOVar6);
        pOVar6 = (pMVar2->fields).value;
        (pMVar2->fields).sendValue = pOVar6;
        func_?(&(pMVar2->fields).sendValue,pOVar6);
        pMVar7 = (pMVar2->fields).OnWriteThrough;
        this_01 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
        if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                     (MethodInfo *)0x0);
          pMVar7 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar7,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pMVar7 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
            (pMVar2->fields).OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          }
          else {
            pMVar8 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
            if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
              pMVar8 = pMVar7;
            }
            if (pMVar8 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)
            goto code_?;
            (pMVar2->fields).OnWriteThrough = pMVar8;
            pMVar8 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
            if (pMVar7->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
              pMVar8 = pMVar7;
            }
            if (pMVar8 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)
            goto code_?;
          }
          func_?();
          this_00 = (this->fields).variables;
          if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_00,(Object *)pMVar2,
                       MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                      );
            return pMVar2;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariable *)(*pcVar9)();
  return pMVar2;
}


/* MVRuntimeDataVariableClampedFloat NewClampedFloat(String, Single, Boolean, Single, Single) */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          float minValue,float maxValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&TypeInfo__MVRuntimeDataVariableClampedFloat);
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    initialRuntimeData =
         (Dictionary_2_System_Object_System_Object_ *)
         (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                   (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pMVar2 = (MVRuntimeDataVariableClampedFloat *)
             func_?(TypeInfo__MVRuntimeDataVariableClampedFloat);
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                       );
        cRam_? = '\x01';
      }
      MVRuntimeDataVariable`1[System::Single]::MVRuntimeDataVariable_1_System_Single___ctor
                ((MVRuntimeDataVariable_1_System_Single_ *)pMVar2,variableId,sendInterval,
                 initialRuntimeData,writeThrough,
                 MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                );
      (pMVar2->fields).min = minValue;
      (pMVar2->fields).max = maxValue;
      pMVar3 = (pMVar2->fields)._._.OnWriteThrough;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                   (MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pMVar3 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          (pMVar2->fields)._._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        }
        else {
          pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar4 = pMVar3;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
          (pMVar2->fields)._._.OnWriteThrough = pMVar4;
          pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar4 = pMVar3;
          }
          if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        }
        func_?();
        this_00 = (this->fields).variables;
        if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pMVar2,
                     MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                    );
          return pMVar2;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariableClampedFloat *)(*pcVar5)();
  return pMVar2;
}


/* MVRuntimeDataVariable`1[System.Int32] New[Int32](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Int32_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_1
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pvVar3 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pMVar4 = (MVRuntimeDataVariable_1_System_Int32_ *)func_?(pvVar3);
    if (pMVar4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                (pMVar4,variableId,sendInterval,uVar2,_writeThrough,
                 (method->field7_0x1c).rgctx_data[1].method);
      pMVar5 = (pMVar4->fields)._.OnWriteThrough;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          (pMVar4->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        }
        else {
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
          (pMVar4->fields)._.OnWriteThrough = pMVar6;
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        }
        func_?();
        this_00 = (this->fields).variables;
        if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pMVar4,
                     MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                    );
          return pMVar4;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVRuntimeDataVariable_1_System_Int32_ *)(*pcVar7)();
  return pMVar4;
}


/* MVRuntimeDataVariable`1[System.Object] New[Object](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Object_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pvVar3 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pMVar4 = (MVRuntimeDataVariable_1_System_Object_ *)func_?(pvVar3);
    if (pMVar4 != (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                (pMVar4,variableId,sendInterval,uVar2,_writeThrough,
                 (method->field7_0x1c).rgctx_data[1].method);
      pMVar5 = (pMVar4->fields)._.OnWriteThrough;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          (pMVar4->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        }
        else {
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
          (pMVar4->fields)._.OnWriteThrough = pMVar6;
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        }
        func_?();
        this_00 = (this->fields).variables;
        if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pMVar4,
                     MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                    );
          return pMVar4;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVRuntimeDataVariable_1_System_Object_ *)(*pcVar7)();
  return pMVar4;
}


/* MVRuntimeDataVariable`1[System.Single] New[Single](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Single_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_3
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pvVar3 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pMVar4 = (MVRuntimeDataVariable_1_System_Single_ *)func_?(pvVar3);
    if (pMVar4 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
                (pMVar4,variableId,sendInterval,uVar2,_writeThrough,
                 (method->field7_0x1c).rgctx_data[1].method);
      pMVar5 = (pMVar4->fields)._.OnWriteThrough;
      this_01 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      if (this_01 != (UnityAction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          (pMVar4->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        }
        else {
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
          (pMVar4->fields)._.OnWriteThrough = pMVar6;
          pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
          if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
            pMVar6 = pMVar5;
          }
          if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        }
        func_?();
        this_00 = (this->fields).variables;
        if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)pMVar4,
                     MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                    );
          return pMVar4;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar7)();
  return pMVar4;
}


/* Void OnWriteThrough(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_OnWriteThrough
               (MVRuntimeDataVariables *this,Object *value,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (this->fields).owner;
    if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
       (pRVar3 = (pMVar1->fields).runtimeVariableNetworkManager,
       pRVar3 != (RuntimeVariableNetworkManager *)0x0)) {
      bVar4 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                        (pRVar3,(pMVar2->fields)._.id,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pRVar3 = (pMVar1->fields).runtimeVariableNetworkManager,
           pRVar3 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                  (pRVar3,(this->fields).owner,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Receive(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_Receive
               (MVRuntimeDataVariables *this,Dictionary_2_System_Object_System_Object_ *runtimeData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).variables;
  if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,pLVar6,
                        MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar7->_version;
    LStack_8._version = 0;
    uStack_1 = 1;
    RVar9 = pLVar7->_current;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
    while( true ) {
      RStack_10 = RVar9;
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (RStack_10 == (RegexCharClass_SingleRange)0x0) break;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      piVar12 = *(int **)((int)RStack_10 + 8);
      if (piVar12 == (int *)0x0) break;
      pOVar13 = (Object *)(**(code **)(*piVar12 + 0xd4))(piVar12,*(undefined4 *)(*piVar12 + 0xd8));
      if (runtimeData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)runtimeData,
                         pOVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      RVar9 = RStack_10;
      if (bVar11 != 0) {
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (runtimeData,pOVar13,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        LStack_8._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       (pOVar13,(MethodInfo *)0x0);
        pLVar6 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                  ((int)RStack_10 + 0xc);
        RVar9 = (RegexCharClass_SingleRange)((int)RStack_10 + 0xc);
        *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
         ((int)RStack_10 + 0xc) = LStack_8._list;
        method_00 = (MethodInfo *)&UNK_?;
        pLStack_14 = LStack_8._list;
        func_?();
        if (pLVar6 != pLStack_14) {
          if (*(int *)((int)RStack_10 + 0x20) != 0) {
            iVar15 = *(int *)((int)RStack_10 + 0x20);
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (*(Object **)((int)RStack_10 + 0xc),(MethodInfo *)0x0);
            (**(code **)(iVar15 + 0xc))();
          }
          if ((*(char *)((int)RStack_10 + 0x1c) != '\0') && (*(int *)((int)RStack_10 + 0x24) != 0))
          {
            iVar15 = *(int *)((int)RStack_10 + 0x24);
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (*(Object **)((int)RStack_10 + 0xc),(MethodInfo *)0x0);
            (**(code **)(iVar15 + 0xc))();
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Dictionary`2[System.Object,System.Object] Send(Boolean) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_Send
          (MVRuntimeDataVariables *this,bool immediateSend,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).variables;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffcc,this_00,
                          MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                         );
      uStack_1 = 1;
      RVar6 = pLVar5->_current;
      while( true ) {
        RVar7 = RVar6;
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffbc,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                          );
        if (bVar8 == 0) break;
        if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (*(int **)((int)RVar7 + 0xc) == (int *)0x0) goto code_?;
        iVar9 = **(int **)((int)RVar7 + 0xc);
        RVar6 = *(RegexCharClass_SingleRange *)(iVar9 + 0xc0);
        cVar10 = (**(code **)(iVar9 + 0xbc))();
        if (cVar10 == '\0') {
          fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          bVar8 = immediateSend;
          if (*(float *)((int)RVar7 + 0x14) + *(float *)((int)RVar7 + 0x18) < fVar11) {
            bVar8 = 1;
          }
          if (bVar8 != 0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar4,*(Object **)((int)RVar7 + 8),*(Object **)((int)RVar7 + 0xc),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            *(undefined4 *)((int)RVar7 + 0x10) = *(undefined4 *)((int)RVar7 + 0xc);
            in_stack_12 = (MethodInfo *)((int)RVar7 + 0x10);
            RVar6 = (RegexCharClass_SingleRange)&UNK_?;
            func_?();
            *(float *)((int)RVar7 + 0x18) = fVar11;
          }
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffbc,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                 ,in_stack_12);
      uStack_1 = 0xffffffff;
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((Object *)pDVar4,(MethodInfo *)0x0);
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        *unaff_FS_OFFSET = uStack_3;
        return (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (pDVar4->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar4->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        *unaff_FS_OFFSET = uStack_3;
        return pDVar4;
      }
      func_?();
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
  return pDVar4;
}


/* MVRuntimeDataVariables(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables__ctor
               (MVRuntimeDataVariables *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).owner = owner;
  func_?(&this->fields,owner);
  this_00 = (List_1_MVRuntimeDataVariable_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    (this->fields).variables = this_00;
    func_?(&(this->fields).variables,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

