
/* MVRuntimeDataVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](String, Single,
   Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               String *variableId,float sendInterval,
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
  (this->fields)._.lastSendTime = -INFINITY;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(variableId,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.variableId = pOVar1;
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
  pOVar1 = (this->fields)._.variableId;
  (this->fields)._.writeThrough = writeThrough;
  (this->fields)._.sendInterval = sendInterval;
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
    pOVar1 = (this->fields)._.variableId;
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
                     (initialRuntimeData,(Object *)(this->fields)._.variableId,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  iVar11 = iRam_?;
  (this->fields)._.value = pOVar10;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.value >> 0xc);
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
  (this->fields)._.sendValue = (this->fields)._.value;
  if (iVar11 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.sendValue >> 0xc);
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


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)(**(longlong **)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pOVar4 = (Object *)(&stack0xffffffffffffffe8 + lVar3);
  if (this != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pOVar5 = (this->fields)._.value;
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       (pOVar5,(MethodInfo *)0x0);
    lVar6 = **(longlong **)(*(longlong *)(in_R8 + 0x20) + 0xc0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
      lVar6 = FUN_?(lVar6);
    }
    if (*(int *)(lVar6 + 0x28) < 0) {
      if ((*(longlong *)(lVar6 + 0x60) == 0) || ((*(byte *)(lVar6 + 0x135) & 8) == 0)) {
        if (pOVar5 == (Object *)0x0) goto code_?;
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lVar6 + 0x40))
        goto code_?;
        pOVar4 = pOVar5 + 1;
      }
      else {
        if ((pOVar5 != (Object *)0x0) &&
           (pOVar7 = *(Object__Class **)(lVar6 + 0x40), pOVar5->klass != pOVar7)) {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(pOVar5,pOVar7);
          pcVar8 = (code *)swi(3);
          p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
          return p_Var8;
        }
        lVar9 = (longlong)&pOVar4->klass + (longlong)*(int *)(*(longlong *)(lVar6 + 0x80) + 0x38);
        lVar10 = lVar9 + -0x10;
        if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x80) + 0x30) + 0x28)) {
          lVar10 = lVar9;
        }
        iVar11 = *(int *)(*(longlong *)(lVar6 + 0x40) + 0xf8);
        if (pOVar5 == (Object *)0x0) {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(lVar10,0);
          *(undefined1 *)&pOVar4->klass = 0;
        }
        else {
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(lVar10,pOVar5 + 1,iVar11 + -0x10);
          *(undefined1 *)&pOVar4->klass = 1;
        }
      }
    }
    else {
      if (pOVar5 == (Object *)0x0) {
        pOVar7 = (Object__Class *)0x0;
      }
      else {
        *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
        pOVar7 = (Object__Class *)FUN_?(pOVar5,lVar6);
        if (pOVar7 == (Object__Class *)0x0) {
code_?:
          *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
          FUN_?(pOVar5,lVar6);
          pcVar8 = (code *)swi(3);
          p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
          return p_Var8;
        }
      }
      pOVar4->klass = pOVar7;
    }
    *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
    p_Var8 = (_Il2CppFullySharedGenericType *)FUN_?(method,pOVar4,uVar1);
    return p_Var8;
  }
code_?:
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?();
  pcVar8 = (code *)swi(3);
  p_Var8 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
  return p_Var8;
}


/* Void set_Value(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Value
               (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  p_Var4 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var4 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(&stack0xffffffffffffffe8 + lVar2,p_Var4);
  pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  value_00 = (Object *)FUN_?(pvVar3,&stack0xffffffffffffffe8 + lVar2);
  if (this != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              ((MVRuntimeDataVariable *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

