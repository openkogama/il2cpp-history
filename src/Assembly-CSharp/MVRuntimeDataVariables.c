
/* MVRuntimeDataVariable New(String, Single, Boolean) */

MVRuntimeDataVariable *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                          (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    this_01 = (ScaleAnimationBase *)func_?(TypeInfo__MVRuntimeDataVariable);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this_01->fields).originalScale.z = -INFINITY;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_2);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
    (this_01->fields)._._._._.m_CachedPtr = pOVar3;
    (this_01->fields).originalScale.y = sendInterval;
    *(bool *)&(this_01->fields).target = writeThrough;
    pSVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit_1(pOVar3,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    bVar5 = Extensions::Extensions_ContainsObscuredKey(hashtable,pSVar4,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pOVar3 = (this_01->fields)._._._._.m_CachedPtr;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      pSVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit_1(pOVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Initial_runtime_data_does_not_co,pSVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)hashtable,
                          (this_01->fields)._._._._.m_CachedPtr,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      (this_01->fields).state = (int32_t)pPVar6;
      (this_01->fields).originalScale.x = (float)pPVar6;
      pSVar7 = (this_01->fields).OnScaleAnimationStopped;
      b = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      pMVar8 = MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_;
      (b->fields).method_ptr =
           MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_->methodPointer;
      (b->fields).method = pMVar8;
      (b->fields).m_target = (Object *)this;
      pSVar9 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pSVar7,b,(MethodInfo *)0x0);
      pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      if (pSVar9 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        if ((MVRuntimeDataVariable_OnWriteThroughDelegate__Class *)pSVar9->klass ==
            TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pSVar7 = pSVar9;
        }
        pMVar10 = TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate;
        if (pSVar7 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0)
        goto code_?;
      }
      (this_01->fields).OnScaleAnimationStopped = pSVar7;
      this_00 = (this->fields).variables;
      if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_01,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return (MVRuntimeDataVariable *)this_01;
      }
    }
  }
  func_?(0);
  pSVar9 = extraout_ECX;
  pMVar10 = extraout_EDX;
code_?:
  func_?(pSVar9,pMVar10);
  pcVar11 = (code *)swi(3);
  pMVar12 = (MVRuntimeDataVariable *)(*pcVar11)();
  return pMVar12;
}


/* MVRuntimeDataVariableClampedFloat NewClampedFloat(String, Single, Boolean, Single, Single) */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          float minValue,float maxValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    MVRuntimeDataVariable`1[System::Int32]::MVRuntimeDataVariable_1_System_Int32___ctor
              ((MVRuntimeDataVariable_1_System_Int32_ *)pMVar2,variableId,sendInterval,
               initialRuntimeData,writeThrough,
               MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
              );
    (pMVar2->fields).min = minValue;
    (pMVar2->fields).max = maxValue;
    pMVar3 = (pMVar2->fields)._._.OnWriteThrough;
    b = (Delegate *)func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    pMVar4 = MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_;
    (b->fields).method_ptr =
         MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_->methodPointer;
    (b->fields).method = pMVar4;
    (b->fields).m_target = (Object *)this;
    pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,b,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
    if (pMVar5 != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
      if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
        pMVar3 = pMVar5;
      }
      pMVar6 = TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate;
      if (pMVar3 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
    }
    (pMVar2->fields)._._.OnWriteThrough = pMVar3;
    this_00 = (this->fields).variables;
    if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pMVar2,
                 MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                );
      return pMVar2;
    }
  }
  func_?(0);
  pMVar5 = extraout_ECX;
  pMVar6 = extraout_EDX;
code_?:
  func_?(pMVar5,pMVar6);
  pcVar7 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariableClampedFloat *)(*pcVar7)();
  return pMVar2;
}


/* MVRuntimeDataVariable`1[System.Object] New[Object](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Object_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_1
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                      (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    unaff_ESI = (Delegate *)*method->parameters;
    if (((uint)unaff_ESI[4].fields.invoke_impl & 0x10000) == 0) {
      func_?(unaff_ESI);
    }
    pMVar3 = (MVRuntimeDataVariable_1_System_Object_ *)func_?(unaff_ESI);
    (*(code *)method->parameters[1]->data)
              (pMVar3,variableId,sendInterval,uVar2,_writeThrough,method->parameters[1]);
    unaff_EDI = (MVRuntimeDataVariable_OnWriteThroughDelegate__Class *)method;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Object_ *)0x0) {
      pMVar4 = (pMVar3->fields)._.OnWriteThrough;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate;
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      if (unaff_ESI != (Delegate *)0x0) {
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 func_?(unaff_ESI,TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
      }
      (pMVar3->fields)._.OnWriteThrough = pMVar4;
      this_00 = (this->fields).variables;
      if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pMVar3,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return pMVar3;
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar5 = (code *)swi(3);
  pMVar3 = (MVRuntimeDataVariable_1_System_Object_ *)(*pcVar5)();
  return pMVar3;
}


/* MVRuntimeDataVariable`1[System.Single] New[Single](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Single_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                      (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    unaff_ESI = (Delegate *)*method->parameters;
    if (((uint)unaff_ESI[4].fields.invoke_impl & 0x10000) == 0) {
      func_?(unaff_ESI);
    }
    pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)func_?(unaff_ESI);
    (*(code *)method->parameters[1]->data)
              (pMVar3,variableId,sendInterval,uVar2,_writeThrough,method->parameters[1]);
    unaff_EDI = (MVRuntimeDataVariable_OnWriteThroughDelegate__Class *)method;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar4 = (pMVar3->fields)._.OnWriteThrough;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate;
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      if (unaff_ESI != (Delegate *)0x0) {
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 func_?(unaff_ESI,TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
      }
      (pMVar3->fields)._.OnWriteThrough = pMVar4;
      this_00 = (this->fields).variables;
      if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pMVar3,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return pMVar3;
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar5 = (code *)swi(3);
  pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar5)();
  return pMVar3;
}


/* MVRuntimeDataVariable`1[System.Int32] New[Int32](String, Single, Boolean) */

MVRuntimeDataVariable_1_System_Int32_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_3
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                      (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    unaff_ESI = (Delegate *)*method->parameters;
    if (((uint)unaff_ESI[4].fields.invoke_impl & 0x10000) == 0) {
      func_?(unaff_ESI);
    }
    pMVar3 = (MVRuntimeDataVariable_1_System_Int32_ *)func_?(unaff_ESI);
    (*(code *)method->parameters[1]->data)
              (pMVar3,variableId,sendInterval,uVar2,_writeThrough,method->parameters[1]);
    unaff_EDI = (MVRuntimeDataVariable_OnWriteThroughDelegate__Class *)method;
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      pMVar4 = (pMVar3->fields)._.OnWriteThrough;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate;
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      if (unaff_ESI != (Delegate *)0x0) {
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
                 func_?(unaff_ESI,TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) goto code_?;
      }
      (pMVar3->fields)._.OnWriteThrough = pMVar4;
      this_00 = (this->fields).variables;
      if (this_00 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pMVar3,
                   MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                  );
        return pMVar3;
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar5 = (code *)swi(3);
  pMVar3 = (MVRuntimeDataVariable_1_System_Int32_ *)(*pcVar5)();
  return pMVar3;
}


/* Void OnWriteThrough(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_OnWriteThrough
               (MVRuntimeDataVariables *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pRVar2 = (RuntimeVariableNetworkManager *)
             ShootableButton::ShootableButton_get_InputSignalReceiver
                       ((ShootableButton *)pMVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).owner;
    if ((this_00 != (MVWorldObjectClient *)0x0) &&
       (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
       , pRVar2 != (RuntimeVariableNetworkManager *)0x0)) {
      bVar3 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                        (pRVar2,(int32_t)woID,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pRVar2 = (RuntimeVariableNetworkManager *)
                   ShootableButton::ShootableButton_get_InputSignalReceiver
                             ((ShootableButton *)pMVar1,(MethodInfo *)0x0),
         pRVar2 != (RuntimeVariableNetworkManager *)0x0)) {
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                  (pRVar2,(this->fields).owner,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).variables;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
                        MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?(&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                             );
      if (cVar9 == '\0') {
        *puStack_7 = 0x3f;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_ESI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                            );
      if (unaff_ESI == (Object *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pOVar10 = unaff_ESI[1].klass;
      if ((pOVar10 == (Object__Class *)0x0) ||
         (pIVar11 = (pOVar10->_0).image,
         key = (String *)(**(code **)&pIVar11[4].dynamic)(pOVar10,pIVar11[5].name),
         runtimeData == (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)runtimeData,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar12 != 0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)runtimeData,(Type *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        obscuredValue =
             ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                       ((Object *)value,(MethodInfo *)0x0);
        pOVar13 = (Object *)unaff_ESI[1].monitor;
        unaff_ESI[1].monitor = (MonitorData *)obscuredValue;
        if (pOVar13 != obscuredValue) {
          pOVar10 = unaff_ESI[4].klass;
          if (pOVar10 != (Object__Class *)0x0) {
            pOVar13 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                               (obscuredValue,(MethodInfo *)0x0);
            if (pOVar10 == (Object__Class *)0x0) break;
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
            SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                      ((SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)pOVar10,pOVar13,
                       in_stack_14);
          }
          if ((*(char *)&unaff_ESI[3].monitor != '\0') &&
             (this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)unaff_ESI[4].monitor,
             this_01 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0)) {
            pOVar13 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                               ((Object *)unaff_ESI[1].monitor,(MethodInfo *)0x0);
            if (this_01 == (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) break;
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
            SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                      (this_01,pOVar13,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  func_?(0);
  func_?(unaff_ESI,0,0);
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
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  this_01 = (Dictionary_2_System_String_Theme_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).variables;
  pDStack_8 = this_01;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    auStack_9._4_4_ = 0;
    auStack_9._0_4_ = &UNK_?;
    func_?();
    func_?();
    pcVar10 = (code *)swi(3);
    pDVar11 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar10)();
    return pDVar11;
  }
  pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                     );
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar12->l;
  LStack_6.monitor = (MonitorData *)pLVar12->next;
  LStack_6.fields._items = (Color32__Array *)pLVar12->ver;
  LStack_6.fields._size = (pLVar12->current).rgba;
  uStack_1 = 0;
  while( true ) {
    auStack_9._4_4_ =
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
    ;
    auStack_9._0_4_ = &LStack_6;
    cVar13 = func_?();
    if (cVar13 == '\0') break;
    pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                       );
    if (pOVar14 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      auStack_9._4_4_ = _UNK_?;
      auStack_9._0_4_ = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if (pOVar14[1].monitor == (MonitorData *)0x0) goto code_?;
    iVar15 = *(int *)pOVar14[1].monitor;
    auStack_9._4_4_ = *(int32_t *)(iVar15 + 0xc4);
    auStack_9._0_4_ = pOVar14[2].klass;
    cVar13 = (**(code **)(iVar15 + 0xc0))();
    if (cVar13 == '\0') {
      pOVar16 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (((float)pOVar14[2].monitor + (float)pOVar14[3].klass < (float)pOVar16) ||
         (immediateSend != 0)) {
        if (this_01 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  (this_01,(String *)pOVar14[1].klass,(Theme *)pOVar14[1].monitor,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pOVar14[2].klass = (Object__Class *)pOVar14[1].monitor;
        pOVar14[3].klass = pOVar16;
      }
    }
  }
  *puStack_7 = 0x47;
  uStack_1 = 0xffffffff;
  func_?();
  auStack_9._0_4_ =
       ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                 ((Object *)this_01,(MethodInfo *)0x0);
  pDVar11 = (Dictionary_2_System_Object_System_Object_ *)auStack_9._0_4_;
  if ((Dictionary_2_System_Object_System_Object_ *)auStack_9._0_4_ !=
      (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((((Dictionary_2_System_Object_System_Object_ *)auStack_9._0_4_)->klass->_1).
         naturalAligment < bVar17) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object_ *)auStack_9._0_4_)->klass->_1).typeHierarchy
        [bVar17 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pDVar11 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (bVar18) {
      pDVar11 = (Dictionary_2_System_Object_System_Object_ *)auStack_9._0_4_;
    }
    if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      auStack_9._4_4_ =
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      func_?();
      goto code_?;
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return pDVar11;
}


/* MVRuntimeDataVariables(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables__ctor
               (MVRuntimeDataVariables *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).owner = owner;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  (this->fields).variables = (List_1_MVRuntimeDataVariable_ *)this_00;
  return;
}

