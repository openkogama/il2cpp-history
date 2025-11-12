
/* MVRuntimeDataVariable New(String, Single, Boolean) */

MVRuntimeDataVariable *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    initialRuntimeData =
         (Dictionary_2_System_Object_System_Object_ *)
         (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                   (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pMVar2 = (MVRuntimeDataVariable *)FUN_?(TypeInfo__MVRuntimeDataVariable);
    MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
              (pMVar2,variableId,sendInterval,initialRuntimeData,writeThrough,(MethodInfo *)0x0);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      pMVar3 = (pMVar2->fields).OnWriteThrough;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        (pMVar2->fields).OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      }
      else {
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?(pMVar3);
          pcVar5 = (code *)swi(3);
          pMVar2 = (MVRuntimeDataVariable *)(*pcVar5)();
          return pMVar2;
        }
        (pMVar2->fields).OnWriteThrough = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?(pMVar3);
          pcVar5 = (code *)swi(3);
          pMVar2 = (MVRuntimeDataVariable *)(*pcVar5)();
          return pMVar2;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pMVar2->fields).OnWriteThrough >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pLVar11 = (this->fields).variables;
      if (pLVar11 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        FUN_?(pLVar11,pMVar2);
        return pMVar2;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pMVar2 = (MVRuntimeDataVariable *)(*pcVar5)();
  return pMVar2;
}


/* MVRuntimeDataVariableClampedFloat NewClampedFloat(String, Single, Boolean, Single, Single) */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          float minValue,float maxValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariableClampedFloat);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    initialRuntimeData =
         (Dictionary_2_System_Object_System_Object_ *)
         (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                   (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pMVar2 = (MVRuntimeDataVariableClampedFloat *)
             FUN_?(TypeInfo__MVRuntimeDataVariableClampedFloat);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__MVRuntimeDataVariable<float>__MVRuntimeDataVariable_System__String__float__System__Collections__Generic__Dictionary<System::Object,_System::Object>__bool_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
              ((MVRuntimeDataVariable *)pMVar2,variableId,sendInterval,initialRuntimeData,
               writeThrough,(MethodInfo *)0x0);
    (pMVar2->fields).min = minValue;
    (pMVar2->fields).max = maxValue;
    pMVar3 = (pMVar2->fields)._._.OnWriteThrough;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,(MethodInfo *)0x0)
    ;
    pMVar3 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar3 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
      (pMVar2->fields)._._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
    }
    else {
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        pMVar2 = (MVRuntimeDataVariableClampedFloat *)(*pcVar5)();
        return pMVar2;
      }
      (pMVar2->fields)._._.OnWriteThrough = pMVar4;
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        pMVar2 = (MVRuntimeDataVariableClampedFloat *)(*pcVar5)();
        return pMVar2;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar2->fields)._._.OnWriteThrough >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pLVar11 = (this->fields).variables;
    if (pLVar11 != (List_1_MVRuntimeDataVariable_ *)0x0) {
      FUN_?(pLVar11,pMVar2);
      return pMVar2;
    }
  }
  FUN_?();
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
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    initialRuntimeData =
         (Dictionary_2_System_Object_System_Object_ *)
         (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                   (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pvVar2 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)FUN_?(pvVar2);
    MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
              ((MVRuntimeDataVariable *)pMVar3,variableId,sendInterval,initialRuntimeData,
               writeThrough,(MethodInfo *)0x0);
    if (pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      pMVar4 = (pMVar3->fields)._.OnWriteThrough;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar4 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        (pMVar3->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      }
      else {
        pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?(pMVar4);
          pcVar6 = (code *)swi(3);
          pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar6)();
          return pMVar3;
        }
        (pMVar3->fields)._.OnWriteThrough = pMVar5;
        pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?(pMVar4);
          pcVar6 = (code *)swi(3);
          pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar6)();
          return pMVar3;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar3->fields)._.OnWriteThrough >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pLVar12 = (this->fields).variables;
      if (pLVar12 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        FUN_?(pLVar12,pMVar3);
        return pMVar3;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pMVar3 = (MVRuntimeDataVariable_1_System_Single_ *)(*pcVar6)();
  return pMVar3;
}


/* MVRuntimeDataVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]
   New[__Il2CppFullySharedGenericType](String, Single, Boolean) */

MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_New_3
          (MVRuntimeDataVariables *this,String *variableId,float sendInterval,bool writeThrough,
          MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__Add_MVRuntimeDataVariable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    uVar2 = (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             FUN_?(pvVar3);
    (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
              (pMVar4,variableId,sendInterval,uVar2,writeThrough,
               (method->field7_0x38).rgctx_data[1].method);
    if (pMVar4 != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
       ) {
      pMVar5 = (pMVar4->fields)._.OnWriteThrough;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVRuntimeDataVariables__OnWriteThrough_System__Object_,
                 (MethodInfo *)0x0);
      pMVar5 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar5 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
        (pMVar4->fields)._.OnWriteThrough = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
      }
      else {
        pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar6 = pMVar5;
        }
        if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?(pMVar5,TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate);
          pcVar7 = (code *)swi(3);
          pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (*pcVar7)();
          return pMVar4;
        }
        (pMVar4->fields)._.OnWriteThrough = pMVar6;
        pMVar6 = (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0;
        if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnWriteThroughDelegate) {
          pMVar6 = pMVar5;
        }
        if (pMVar6 == (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (*pcVar7)();
          return pMVar4;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar4->fields)._.OnWriteThrough >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      pLVar13 = (this->fields).variables;
      if (pLVar13 != (List_1_MVRuntimeDataVariable_ *)0x0) {
        FUN_?(pLVar13,pMVar4);
        return pMVar4;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           (*pcVar7)();
  return pMVar4;
}


/* Void OnWriteThrough(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_OnWriteThrough
               (MVRuntimeDataVariables *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (this->fields).owner, pMVar3 != (MVWorldObjectClient *)0x0)) {
    pRVar4 = (pMVar2->fields).runtimeVariableNetworkManager;
    item = (pMVar3->fields)._.id;
    if (pRVar4 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar4->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar5 != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar1 == (MVGameControllerBase *)0x0) ||
              (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
             (pRVar4 = (pMVar2->fields).runtimeVariableNetworkManager,
             pRVar4 == (RuntimeVariableNetworkManager *)0x0)) goto code_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_SendRuntimeData_1
                    (pRVar4,(this->fields).owner,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Receive(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_Receive
               (MVRuntimeDataVariables *this,Dictionary_2_System_Object_System_Object_ *runtimeData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).variables;
  if ((List_1_MVRuntimeDataVariable_ *)LStack_1._list == (List_1_MVRuntimeDataVariable_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_MVRuntimeDataVariable_ *)LStack_1._list)->fields)._version << 0x20)
  ;
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                      );
    this_00 = LStack_1._current;
    if (bVar10 == 0) {
      return;
    }
    if ((MVRuntimeDataVariable *)LStack_1._current == (MVRuntimeDataVariable *)0x0)
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar11 = ((MVRuntimeDataVariable__Fields *)((longlong)this_00 + 0x10))->variableId;
    if (pOVar11 == (ObscuredString *)0x0) break;
    pOVar12 = (Object *)
             (*(pOVar11->klass->vtable).ToString.methodPtr)
                       (pOVar11,(pOVar11->klass->vtable).ToString.method);
    if (runtimeData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      FUN_?();
      break;
    }
    iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)runtimeData,pOVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar13) {
      pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (runtimeData,pOVar12,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                ((MVRuntimeDataVariable *)this_00,pOVar12,(MethodInfo *)0x0);
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Dictionary`2[System.Object,System.Object] Send(Boolean) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables_Send
          (MVRuntimeDataVariables *this,bool immediateSend,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pLVar1 = (this->fields).variables;
  if (pLVar1 == (List_1_MVRuntimeDataVariable_ *)0x0) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_10 = 0;
    aLStack_11[0]._8_8_ = pLStack_9;
    aLStack_11[0]._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_9 = aLStack_11;
    aLStack_11[0]._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (aLStack_11,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVRuntimeDataVariable>__MoveNext__
                        );
      pOVar13 = aLStack_11[0]._current;
      if (bVar12 == 0) {
        pDVar14 = (Dictionary_2_System_Object_System_Object_ *)
                  ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                            ((Object *)this_00,(MethodInfo *)0x0);
        pDVar15 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar16 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar14->klass->_1).naturalAligment < bVar16) ||
             (pDVar15 = pDVar14,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pDVar14->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar14);
            pcVar17 = (code *)swi(3);
            pDVar15 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
            return pDVar15;
          }
        }
        return pDVar15;
      }
      if (aLStack_11[0]._current == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar18 = pOVar13[1].monitor;
      if (pMVar18 == (MonitorData *)0x0) goto code_?;
      cVar19 = (**(code **)(*(longlong *)pMVar18 + 0x138))
                        (pMVar18,pOVar13[2].klass,*(undefined8 *)(*(longlong *)pMVar18 + 0x140));
      if (cVar19 == '\0') {
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
        goto code_?;
        pcRam_? = pcVar17;
        fVar20 = (float)(*pcRam_?)();
        bVar12 = immediateSend;
        if (*(float *)((longlong)&pOVar13[2].monitor + 4) + *(float *)&pOVar13[2].monitor < fVar20) {
          bVar12 = 1;
        }
        if (bVar12 != 0) {
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pOVar13[1].klass,
                     (Object *)pOVar13[1].monitor,InsertionBehavior__Enum_OverwriteExisting,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pOVar13[2].klass = (Object__Class *)pOVar13[1].monitor;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar13 + 2) >> 0xc);
            uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          *(float *)((longlong)&pOVar13[2].monitor + 4) = fVar20;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pDVar15 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar17)();
  return pDVar15;
}


/* MVRuntimeDataVariables(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVRuntimeDataVariables::MVRuntimeDataVariables__ctor
               (MVRuntimeDataVariables *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).owner = owner;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (List_1_MVRuntimeDataVariable_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).variables = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).variables >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

