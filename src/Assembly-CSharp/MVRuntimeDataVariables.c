
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
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                        (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    pMVar2 = (MVRuntimeDataVariable *)func_?(TypeInfo__MVRuntimeDataVariable);
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pMVar2,ExceptionArgument__Enum_obj,unaff_ESI);
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
    bVar5 = Extensions::Extensions_ContainsObscuredKey
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,pSVar4,(MethodInfo *)0x0
                      );
    if (bVar5 == 0) {
      pOVar3 = (pMVar2->fields).variableId;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      pSVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit_1(pOVar3,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Initial_runtime_data_does_not_co,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_01,(Object *)(pMVar2->fields).variableId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      (pMVar2->fields).value = (Object *)TVar6.m_Index;
      func_?(&(pMVar2->fields).value,TVar6.m_Index);
      pOVar7 = (pMVar2->fields).value;
      (pMVar2->fields).sendValue = pOVar7;
      func_?(&(pMVar2->fields).sendValue,pOVar7);
      pMVar8 = (pMVar2->fields).OnWriteThrough;
      this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_02,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      pMVar8 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar8,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pMVar8 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        (pMVar2->fields).OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      }
      else {
        pMVar9 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar8->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar9 = pMVar8;
        }
        if (pMVar9 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        (pMVar2->fields).OnWriteThrough = pMVar9;
        pMVar9 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar8->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar9 = pMVar8;
        }
        if (pMVar9 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariable *)(*pcVar10)();
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
         (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                   (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    pMVar2 = (MVRuntimeDataVariableClampedFloat *)
             func_?(TypeInfo__MVRuntimeDataVariableClampedFloat);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                     );
      cRam_? = '\x01';
    }
    MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar2
               ,variableId,sendInterval,initialRuntimeData,writeThrough,
               MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
              );
    (pMVar2->fields).min = minValue;
    (pMVar2->fields).max = maxValue;
    pMVar3 = (pMVar2->fields)._._.OnWriteThrough;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,
               MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,(MethodInfo *)0x0)
    ;
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
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)pMVar2,
                 MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                );
      return pMVar2;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariableClampedFloat *)(*pcVar5)();
  return pMVar2;
}


/* MVRuntimeDataVariable`1[System.Single] New[Single](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Single_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    initialRuntimeData =
         (Dictionary_2_System_Object_System_Object_ *)
         (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                   (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    pIVar2 = ((method->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    this_01 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              func_?(pIVar2);
    MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,variableId,sendInterval,initialRuntimeData,writeThrough,
               (method->field7_0x1c).rgctx_data[1].method);
    if (this_01 !=
        (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pMVar3 = (this_01->fields)._.OnWriteThrough;
      this_02 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_02,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        (this_01->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      }
      else {
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
        (this_01->fields)._.OnWriteThrough = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
      }
      func_?();
      this_00 = (List_1_System_Object_ *)this_01[1].fields._.variableId;
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_00,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return (MVRuntimeDataVariable_1_System_Single_ *)this_01;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar5)();
  return pMVar6;
}


/* MVRuntimeDataVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   New[__Il2CppFullySharedGenericType](String, Single, Boolean) */

MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_3
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                   );
    func_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                      (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    pIVar3 = ((method->field7_0x1c).rgctx_data)->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             func_?(pIVar3);
    (*((method->field7_0x1c).rgctx_data[1].method)->methodPointer)
              (pMVar4,variableId,sendInterval,uVar2,_writeThrough,
               (method->field7_0x1c).rgctx_data[1].method);
    if (pMVar4 != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
       ) {
      pMVar5 = (pMVar4->fields)._.OnWriteThrough;
      this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
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
      this_00 = (List_1_System_Object_ *)pMVar4[1].fields._.variableId;
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_00,(Object *)pMVar4,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return pMVar4;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           (*pcVar7)();
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      key = (Object *)(**(code **)(*piVar12 + 0xd8))(piVar12,*(undefined4 *)(*piVar12 + 0xdc));
      if (runtimeData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)runtimeData
                         ,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      RVar9 = RStack_10;
      if (bVar11 != 0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           runtimeData,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        LStack_8._list =
             (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       ((Object *)value.m_Index,(MethodInfo *)0x0);
        pLVar6 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                  ((int)RStack_10 + 0xc);
        RVar9 = (RegexCharClass_SingleRange)((int)RStack_10 + 0xc);
        *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
         ((int)RStack_10 + 0xc) = LStack_8._list;
        method_00 = (MethodInfo *)&UNK_?;
        pLStack_13 = LStack_8._list;
        func_?();
        if (pLVar6 != pLStack_13) {
          if (*(int *)((int)RStack_10 + 0x20) != 0) {
            iVar14 = *(int *)((int)RStack_10 + 0x20);
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (*(Object **)((int)RStack_10 + 0xc),(MethodInfo *)0x0);
            (**(code **)(iVar14 + 0xc))();
          }
          if ((*(char *)((int)RStack_10 + 0x1c) != '\0') && (*(int *)((int)RStack_10 + 0x24) != 0))
          {
            iVar14 = *(int *)((int)RStack_10 + 0x24);
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (*(Object **)((int)RStack_10 + 0xc),(MethodInfo *)0x0);
            (**(code **)(iVar14 + 0xc))();
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).variables;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd0,this_00,
                        MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                       );
    uStack_1 = 1;
    RVar5 = pLVar4->_current;
    while( true ) {
      RVar6 = RVar5;
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                        );
      if (bVar7 == 0) break;
      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (*(int **)((int)RVar6 + 0xc) == (int *)0x0) goto code_?;
      iVar8 = **(int **)((int)RVar6 + 0xc);
      RVar5 = *(RegexCharClass_SingleRange *)(iVar8 + 0xc4);
      cVar9 = (**(code **)(iVar8 + 0xc0))();
      if (cVar9 == '\0') {
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        bVar7 = immediateSend;
        if (*(float *)((int)RVar6 + 0x14) + *(float *)((int)RVar6 + 0x18) < fVar10) {
          bVar7 = 1;
        }
        if (bVar7 != 0) {
          if (this_01 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     *(Object **)((int)RVar6 + 8),*(Object **)((int)RVar6 + 0xc),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          *(undefined4 *)((int)RVar6 + 0x10) = *(undefined4 *)((int)RVar6 + 0xc);
          in_stack_11 = (MethodInfo *)((int)RVar6 + 0x10);
          RVar5 = (RegexCharClass_SingleRange)&UNK_?;
          func_?();
          *(float *)((int)RVar6 + 0x18) = fVar10;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
               ,in_stack_11);
    uStack_1 = 0xffffffff;
    pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((Object *)this_01,(MethodInfo *)0x0);
    if (pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      *unaff_FS_OFFSET = uStack_3;
      return (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= (pDVar12->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar12->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      *unaff_FS_OFFSET = uStack_3;
      return pDVar12;
    }
    func_?();
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  pDVar12 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
  return pDVar12;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).owner = owner;
  func_?(&this->fields,owner);
  this_00 = (List_1_MVRuntimeDataVariable_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  (this->fields).variables = this_00;
  func_?(&(this->fields).variables,this_00);
  return;
}

