
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
  pOVar1 = (this->fields).variableId;
  if (pOVar1 != (ObscuredString *)0x0) {
    pOVar2 = (Object *)
             (*(pOVar1->klass->vtable).ToString.methodPtr)
                       (pOVar1,(pOVar1->klass->vtable).ToString.method);
    if (runtimeDataDelta != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)runtimeDataDelta,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar3) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (runtimeDataDelta,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        MVRuntimeDataVariable_set_Value(this,pOVar2,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Send(Dictionary`2[System.Object,System.Object] ByRef, Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_Send
               (MVRuntimeDataVariable *this,
               Dictionary_2_System_Object_System_Object_ **runtimeDataDelta,bool immediateSend,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).value;
  if (pOVar1 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = (*(pOVar1->klass->vtable).Equals.methodPtr)
                    (pOVar1,(this->fields).sendValue,(pOVar1->klass->vtable).Equals.method);
  if (cVar3 == '\0') {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)();
    if ((this->fields).lastSendTime + (this->fields).sendInterval < fVar5) {
      immediateSend = 1;
    }
    if (immediateSend != 0) {
      if (*runtimeDataDelta == (Dictionary_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (*runtimeDataDelta,(Object *)(this->fields).variableId,(this->fields).value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      bVar6 = iRam_? != 0;
      (this->fields).sendValue = (this->fields).value;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).sendValue >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      (this->fields).lastSendTime = fVar5;
    }
  }
  return;
}


/* MVRuntimeDataVariable(String, Single, Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
               (MVRuntimeDataVariable *this,String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Initial_runtime_data_does_not_co);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).lastSendTime = -INFINITY;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).variableId = pOVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  pOVar1 = (this->fields).variableId;
  (this->fields).writeThrough = writeThrough;
  (this->fields).sendInterval = sendInterval;
  if (bVar2) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str1 = (String *)0x0;
  pSVar7 = str1;
  if (pOVar1 != (ObscuredString *)0x0) {
    pSVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_InternalDecrypt(pOVar1,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar8 = Extensions::Extensions_ContainsObscuredKey(initialRuntimeData,pSVar7,(MethodInfo *)0x0);
  if (bVar8 == 0) {
    pOVar1 = (this->fields).variableId;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0
       ) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar1 != (ObscuredString *)0x0) {
      str1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_InternalDecrypt(pOVar1,(MethodInfo *)0x0);
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Initial_runtime_data_does_not_co,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar7,(MethodInfo *)0x0);
  }
  if (initialRuntimeData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (initialRuntimeData,(Object *)(this->fields).variableId,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  iVar11 = iRam_?;
  (this->fields).value = pOVar10;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).value >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).sendValue = (this->fields).value;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).sendValue >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                   (MVRuntimeDataVariable *this,MethodInfo *method)

{
  pBVar1 = (Byte__Array__Class *)(this->fields).value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int64);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Byte__Array__Class *)0x0;
  if (pBVar1 != (Byte__Array__Class *)0x0) {
    pBVar2 = value;
    if ((String__Class *)(pBVar1->_0).image ==
        (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pBVar2 = pBVar1;
    }
    if (pBVar2 == (Byte__Array__Class *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((((String__Class *)(pBVar1->_0).image)->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    OStack_5.currentCryptoKey._0_4_ = *(int32_t *)&(pBVar1->_0).name;
    OStack_5.currentCryptoKey._4_2_ = *(uint16_t *)((longlong)&(pBVar1->_0).name + 4);
    OStack_5.currentCryptoKey._6_2_ = *(undefined2 *)((longlong)&(pBVar1->_0).name + 6);
    OStack_5.hiddenValue = (int64_t)(pBVar1->_0).namespaze;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)&OStack_5,(MethodInfo *)0x0);
    pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  *)CONCAT44(pDStackX_8._4_4_,iVar6);
    uVar7 = uRam_?;
    goto code_?;
  }
code_?:
  lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  pOVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  if (lVar8 != 0) {
    if (pBVar1 == (Byte__Array__Class *)0x0) goto code_?;
    lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    if (lVar8 == 0) {
      FUN_?(pBVar1,pOVar9);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    pOVar10 = (Object *)FUN_?(TypeInfo__System__Int32);
    pOVar4 = pOVar10 + 2;
    piVar11 = (int64_t *)(lVar8 + 0x20);
    while( true ) {
      uVar12 = (uint)value;
      if (*(int *)(lVar8 + 0x18) <= (int)uVar12) {
        return pOVar10;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
      iVar13 = *piVar11;
      pBVar14 = (Byte__Array *)piVar11[1];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      OStack_5.currentCryptoKey = iVar13;
      OStack_5.hiddenValue = (int64_t)pBVar14;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_InternalDecrypt((ObscuredInt *)&OStack_5,(MethodInfo *)0x0);
      if (pOVar10 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar10[1].monitor <= uVar12) break;
      *(int32_t *)&pOVar4->klass = iVar6;
      value = (Byte__Array__Class *)(ulonglong)(uVar12 + 1);
      piVar11 = piVar11 + 2;
      pOVar4 = (Object *)((longlong)&pOVar4->klass + 4);
    }
    goto code_?;
  }
  if (pBVar1 != (Byte__Array__Class *)0x0) {
    pBVar2 = value;
    if ((String__Class *)(pBVar1->_0).image ==
        (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pBVar2 = pBVar1;
    }
    if (pBVar2 != (Byte__Array__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if ((((String__Class *)(pBVar1->_0).image)->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_RSI);
        FUN_?();
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      OStack_5.currentCryptoKey._0_4_ = *(int32_t *)&(pBVar1->_0).name;
      OStack_5.currentCryptoKey._4_2_ = *(uint16_t *)((longlong)&(pBVar1->_0).name + 4);
      OStack_5.currentCryptoKey._6_2_ = *(undefined2 *)((longlong)&(pBVar1->_0).name + 6);
      OStack_5.hiddenValue = (int64_t)(pBVar1->_0).namespaze;
      OStack_5.fakeValue = *(int64_t *)&(pBVar1->_0).byval_arg.data;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)&OStack_5,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT44(pDStackX_8._4_4_,fVar15);
      uVar7 = uRam_?;
      goto code_?;
    }
  }
  lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  pOVar16 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
  if (lVar8 != 0) {
    if (pBVar1 == (Byte__Array__Class *)0x0) goto code_?;
    lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    if (lVar8 == 0) {
      FUN_?(pBVar1,pOVar16);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    pOVar10 = (Object *)FUN_?(TypeInfo__System__Single);
    pOVar4 = pOVar10 + 2;
    piVar11 = (int64_t *)(lVar8 + 0x20);
    while( true ) {
      uVar12 = (uint)value;
      if (*(int *)(lVar8 + 0x18) <= (int)uVar12) {
        return pOVar10;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
      iVar13 = *piVar11;
      pBVar14 = (Byte__Array *)piVar11[1];
      _Var3 = *(_union_86 *)(piVar11 + 2);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      OStack_5.currentCryptoKey = iVar13;
      OStack_5.hiddenValue = (int64_t)pBVar14;
      OStack_5.fakeValue = (int64_t)_Var3;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)&OStack_5,(MethodInfo *)0x0);
      if (pOVar10 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar10[1].monitor <= uVar12) break;
      *(float *)&pOVar4->klass = fVar15;
      value = (Byte__Array__Class *)(ulonglong)(uVar12 + 1);
      pOVar4 = (Object *)((longlong)&pOVar4->klass + 4);
      piVar11 = piVar11 + 3;
    }
    goto code_?;
  }
  if (pBVar1 != (Byte__Array__Class *)0x0) {
    pSVar17 = (String__Class *)(pBVar1->_0).image;
    bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar18 <= (pSVar17->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pSVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar17 = (String__Class *)(pBVar1->_0).image;
      bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDStackX_8 = this_00;
      if (((pSVar17->_1).naturalAligment < bVar18) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pSVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pBVar1);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      bVar18 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pSVar17->_1).naturalAligment < bVar18) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pSVar17->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pBVar1);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&OStack_5 >> 0xc);
        uVar19 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
        in_R9 = 0xADDR;
        do {
          uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
          puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
          LOCK();
          bVar22 = uVar20 == *puVar21;
          if (bVar22) {
            *puVar21 = uVar20 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar22);
      }
      OStack_5.hiddenValue = (int64_t)*(uint *)&(pBVar1->_0).byval_arg.field_0xc;
      uStack_23 = 2;
      OStack_5.fakeValue = 0;
      OStack_5._24_8_ = 0;
      BStack_24.monitor = (MonitorData *)OStack_5.hiddenValue;
      BStack_24.bounds = (Il2CppArrayBounds *)0x0;
      BStack_24.max_length = 0;
      BStack_24.vector[0] = 2;
      BStack_24.vector[1] = 0;
      BStack_24.vector[2] = 0;
      BStack_24.vector[3] = 0;
      BStack_24.vector[4] = 0;
      BStack_24.vector[5] = 0;
      BStack_24.vector[6] = 0;
      BStack_24.vector[7] = 0;
      OStack_5.currentCryptoKey = 0;
      OStack_5.hiddenValue = (int64_t)&BStack_24;
      BStack_24.klass = pBVar1;
      do {
        bVar25 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &BStack_24,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                           );
        obscuredValue = BStack_24.max_length;
        unaff_RSI = (Byte__Array__Class *)BStack_24.bounds;
        if (bVar25 == 0) {
          return (Object *)this_00;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        pBVar1 = value;
        if (unaff_RSI != (Byte__Array__Class *)0x0) {
          if ((String__Class *)((Il2CppClass_0 *)&((Il2CppArrayBounds *)unaff_RSI)->length)->image
              == (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
            pBVar1 = unaff_RSI;
          }
          if (pBVar1 == (Byte__Array__Class *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar2 = value;
        if (pBVar1 != (Byte__Array__Class *)0x0) {
          pBVar2 = (Byte__Array__Class *)
                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredString::ObscuredString_InternalDecrypt
                              ((ObscuredString *)pBVar1,(MethodInfo *)0x0);
        }
        pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                            ((Object *)obscuredValue,(MethodInfo *)0x0);
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) goto code_?;
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pBVar2,pOVar4,
                   (InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
    pBVar2 = value;
    if ((String__Class *)(pBVar1->_0).image ==
        (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
      pBVar2 = pBVar1;
    }
    if (pBVar2 != (Byte__Array__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((((String__Class *)(pBVar1->_0).image)->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      OStack_5.currentCryptoKey._0_4_ = *(int32_t *)&(pBVar1->_0).name;
      OStack_5.currentCryptoKey._4_2_ = *(uint16_t *)((longlong)&(pBVar1->_0).name + 4);
      OStack_5.currentCryptoKey._6_2_ = *(undefined2 *)((longlong)&(pBVar1->_0).name + 6);
      OStack_5.hiddenValue =
           CONCAT44(OStack_5.hiddenValue._4_4_,*(undefined4 *)&(pBVar1->_0).namespaze);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
               ObscuredBool_InternalDecrypt((ObscuredBool *)&OStack_5,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT71(pDStackX_8._1_7_,bVar25);
      uVar7 = uRam_?;
      goto code_?;
    }
  }
  lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  pOVar26 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
  if (lVar8 != 0) {
    if (pBVar1 != (Byte__Array__Class *)0x0) {
      lVar8 = FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      if (lVar8 == 0) {
        FUN_?(pBVar1,pOVar26);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      pOVar10 = (Object *)FUN_?(TypeInfo__System__Boolean);
      pOVar4 = pOVar10 + 2;
      piVar11 = (int64_t *)(lVar8 + 0x20);
      while( true ) {
        uVar12 = (uint)value;
        if (*(int *)(lVar8 + 0x18) <= (int)uVar12) {
          return pOVar10;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
        iVar13 = *piVar11;
        iVar27 = piVar11[1];
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        OStack_5.hiddenValue = CONCAT44(OStack_5.hiddenValue._4_4_,(int)iVar27);
        OStack_5.currentCryptoKey = iVar13;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        bVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_InternalDecrypt((ObscuredBool *)&OStack_5,(MethodInfo *)0x0);
        if (pOVar10 == (Object *)0x0) goto code_?;
        if (*(uint *)&pOVar10[1].monitor <= uVar12) break;
        *(bool *)&pOVar4->klass = bVar25;
        value = (Byte__Array__Class *)(ulonglong)(uVar12 + 1);
        piVar11 = (int64_t *)((longlong)piVar11 + 0xc);
        pOVar4 = (Object *)((longlong)&pOVar4->klass + 1);
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    goto code_?;
  }
  if (pBVar1 == (Byte__Array__Class *)0x0) {
code_?:
    lVar8 = FUN_?(pBVar1);
    pOVar28 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
    if (lVar8 == 0) {
      FUN_?(pBVar1);
      arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)pBVar1,(MethodInfo *)0x0);
      pSVar29 = (String *)func_?(&StringLiteral_Trying_to_to_unobscure_unknown_t);
      pSVar29 = mscorlib.dll::System::String::String_Format
                          (pSVar29,(Object *)arg0,(MethodInfo *)0x0);
      uVar7 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar7);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar29,(MethodInfo *)0x0);
      uVar7 = func_?(&
                                   MethodInfo__ObscuredTypesConverter__CreateUnObscuredValue_System__Object_
                                  );
      FUN_?(this_01,uVar7);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    if (pBVar1 == (Byte__Array__Class *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    piVar11 = (int64_t *)
              FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    if (piVar11 == (int64_t *)0x0) {
      FUN_?(pBVar1,pOVar28);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    pOVar4 = (Object *)FUN_?(TypeInfo__System__Int64);
    pOVar10 = pOVar4 + 2;
    piVar30 = piVar11;
    while( true ) {
      uVar12 = (uint)value;
      if ((int)piVar11[3] <= (int)uVar12) break;
      if (*(uint *)(piVar11 + 3) <= uVar12) goto code_?;
      iVar13 = piVar30[4];
      pBVar14 = (Byte__Array *)piVar30[5];
      _Var3 = *(_union_86 *)(piVar30 + 6);
      iVar27 = piVar30[7];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      OStack_5.currentCryptoKey = iVar13;
      OStack_5.hiddenValue = (int64_t)pBVar14;
      OStack_5.fakeValue = (int64_t)_Var3;
      OStack_5._24_8_ = iVar27;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      pOVar31 = (Object__Class *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
                ObscuredLong_InternalDecrypt(&OStack_5,(MethodInfo *)0x0);
      if (pOVar4 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar4[1].monitor <= uVar12) goto code_?;
      pOVar10->klass = pOVar31;
      value = (Byte__Array__Class *)(ulonglong)(uVar12 + 1);
      pOVar10 = (Object *)&pOVar10->monitor;
      piVar30 = piVar30 + 4;
    }
  }
  else {
    pBVar2 = value;
    if ((String__Class *)(pBVar1->_0).image ==
        (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
      pBVar2 = pBVar1;
    }
    if (pBVar2 != (Byte__Array__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      if ((String__Class *)(pBVar1->_0).image ==
          (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
        value = pBVar1;
      }
      if (value != (Byte__Array__Class *)0x0) {
        pSVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                  ::ObscuredString_op_Implicit_1((ObscuredString *)value,(MethodInfo *)0x0);
        return (Object *)pSVar29;
      }
      FUN_?(pBVar1);
      pcVar3 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar3)();
      return pOVar4;
    }
    pBVar2 = value;
    if ((String__Class *)(pBVar1->_0).image ==
        (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
      pBVar2 = pBVar1;
    }
    if (pBVar2 == (Byte__Array__Class *)0x0) {
      pBVar2 = value;
      if ((String__Class *)(pBVar1->_0).image ==
          (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
        pBVar2 = pBVar1;
      }
      if (pBVar2 == (Byte__Array__Class *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((((String__Class *)(pBVar1->_0).image)->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
        FUN_?(pBVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      OStack_5.currentCryptoKey._0_4_ = *(int32_t *)&(pBVar1->_0).name;
      OStack_5.currentCryptoKey._4_2_ = *(uint16_t *)((longlong)&(pBVar1->_0).name + 4);
      OStack_5.currentCryptoKey._6_2_ = *(undefined2 *)((longlong)&(pBVar1->_0).name + 6);
      OStack_5.hiddenValue = (int64_t)(pBVar1->_0).namespaze;
      OStack_5.fakeValue = *(int64_t *)&(pBVar1->_0).byval_arg.data;
      OStack_5._24_2_ = (pBVar1->_0).byval_arg.attrs;
      OStack_5._26_1_ = (pBVar1->_0).byval_arg.type;
      OStack_5._27_5_ = *(undefined5 *)&(pBVar1->_0).byval_arg.field_0xb;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_InternalDecrypt(&OStack_5,(MethodInfo *)0x0);
      uVar7 = uRam_?;
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      }
      if ((((String__Class *)(pBVar1->_0).image)->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_0).element_class) {
        FUN_?(pBVar1);
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      uVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
               ObscuredByte_op_Implicit_1
                         ((ObscuredByte)((String__Fields *)&(pBVar1->_0).name)->_stringLength,
                          (MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT71(pDStackX_8._1_7_,uVar32);
      uVar7 = uRam_?;
    }
code_?:
    pOVar4 = (Object *)FUN_?(uVar7,&pDStackX_8);
  }
  return pOVar4;
}


/* Void set_Value(Object) */

void Assembly-CSharp.dll::MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
               (MVRuntimeDataVariable *this,Object *value,MethodInfo *method)

{
  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     (value,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  pOVar3 = (this->fields).value;
  (this->fields).value = pOVar1;
  if (bVar2) {
    uVar4 = (uint)((ulonglong)&(this->fields).value >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (pOVar3 != pOVar1) {
    if ((this->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar8 = (this->fields).OnChange;
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar8->fields)._._.invoke_impl)
                ((pMVar8->fields)._._.method_code,pOVar3,(pMVar8->fields)._._.method);
    }
    if (((this->fields).writeThrough != 0) &&
       ((this->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
      pMVar9 = (this->fields).OnWriteThrough;
      pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                         ((this->fields).value,(MethodInfo *)0x0);
      (*(pMVar9->fields)._._.invoke_impl)
                ((pMVar9->fields)._._.method_code,pOVar3,(pMVar9->fields)._._.method);
    }
  }
  return;
}

