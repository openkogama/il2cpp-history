
/* Void 
   Add(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *pair,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pMVar2 = method;
  lVar3 = FUN_?(this,0xffffffffffffff0);
  lVar3 = -lVar3;
  plVar4 = (longlong *)((longlong)&pvStack_5 + lVar3);
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  pIVar7 = pMVar2->klass;
  plVar8 = (longlong *)((longlong)&pvStack_5 + lVar6 + lVar3);
  *(longlong **)((longlong)alStack_9 + lVar6 + lVar3) = plVar4;
  pMVar2 = pIVar7->rgctx_data[5].method;
  pIVar10 = pMVar2->invoker_method;
  pIVar11 = pMVar2->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar3) = &UNK_?;
  plStackX_18 = plVar4;
  (*pIVar10)(pIVar11,pMVar2,pair,&plStackX_18,*(void **)((longlong)alStack_9 + lVar6 + lVar3));
  pIVar7 = method->klass;
  *(longlong **)((longlong)alStack_9 + lVar6 + lVar3) = plVar8;
  pMVar2 = pIVar7->rgctx_data[8].method;
  pIVar10 = pMVar2->invoker_method;
  pIVar11 = pMVar2->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar3) = &UNK_?;
  plStackX_18 = plVar8;
  (*pIVar10)(pIVar11,pMVar2,pair,&plStackX_18,*(void **)((longlong)alStack_9 + lVar6 + lVar3));
  if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
    plVar8 = (longlong *)*plVar8;
  }
  if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
    plVar4 = (longlong *)*plVar4;
  }
  pIVar7 = method->klass;
  pvStack_5 = plVar4;
  lStack_12 = (longlong)plVar8;
  *(longlong **)((longlong)alStack_9 + lVar6 + lVar3) = plVar8;
  pMVar2 = pIVar7->rgctx_data[10].method;
  pIVar10 = pMVar2->invoker_method;
  pIVar11 = pMVar2->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar6 + lVar3) = &UNK_?;
  (*pIVar10)(pIVar11,pMVar2,this,&pvStack_5,*(void **)((longlong)alStack_9 + lVar6 + lVar3));
  return;
}


/* Void Add(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add_1
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  auStackX_10._0_8_ = key;
  auStackX_10._8_8_ = value;
  lVar2 = FUN_?(this,0xffffffffffffff0,(method->klass->rgctx_data[7].klass)->actualSize,key)
  ;
  lVar2 = -lVar2;
  plVar3 = (longlong *)(&stack0xffffffffffffffc8 + lVar2);
  uVar4 = (method->klass->rgctx_data[9].klass)->actualSize;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  lVar5 = FUN_?();
  pIVar6 = (this->fields).dictionary;
  lVar5 = -lVar5;
  plVar7 = (longlong *)(&stack0xffffffffffffffc8 + lVar5 + lVar2);
  p_Var8 = (_Il2CppFullySharedGenericType *)auStackX_10;
  if (*(int *)&(method->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var8 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var8);
  p_Var8 = (_Il2CppFullySharedGenericType *)(auStackX_10 + 8);
  if (*(int *)&(method->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var8 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?(plVar7,p_Var8,uVar4);
  if (pIVar6 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
      plVar7 = (longlong *)*plVar7;
    }
    if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
      plVar3 = (longlong *)*plVar3;
    }
    pvVar8 = method->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
      pvVar8 = (void *)FUN_?(pvVar8);
    }
    *(longlong **)((longlong)alStack_9 + lVar5 + lVar2) = plVar7;
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    FUN_?(5,pvVar8,pIVar6,plVar3);
    pIVar10 = (method->klass->rgctx_data[0xc].method)->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    (*pIVar10)(this);
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pvVar2 = method->klass->rgctx_data[0xf].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
      pvVar2 = (void *)FUN_?(pvVar2);
    }
    FUN_?(3,pvVar2,pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(method->klass->rgctx_data[0xc].method)->methodPointer)(this);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean
   Contains(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Contains
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *pair,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  lVar2 = FUN_?();
  pIVar3 = (this->fields).dictionary;
  lVar2 = -lVar2;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(&stack0xfffffffffffffff8 + lVar2);
  if (pIVar3 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pvVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    bVar5 = FUN_?(4,pvVar4,pIVar3,&stack0xfffffffffffffff8 + lVar2);
    return bVar5;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean ContainsKey(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ContainsKey
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar2 = FUN_?();
  pIVar3 = (this->fields).dictionary;
  lVar2 = -lVar2;
  plVar4 = (longlong *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var6 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(plVar4,p_Var6);
  if (pIVar3 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
      plVar4 = (longlong *)*plVar4;
    }
    pvVar5 = method->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    bVar6 = FUN_?(4,pvVar5,pIVar3,plVar4);
    return bVar6;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Void 
   CopyTo(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType][],
   Int32) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__CopyTo
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Array
                      *array,int32_t arrayIndex,MethodInfo *method)

{
  if ((this->fields).dictionary !=
      (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    pvVar1 = method->klass->rgctx_data[0xf].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
      FUN_?(pvVar1);
    }
    FUN_?();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void NotifyDictionaryChange() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__NotifyDictionaryChange
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  if ((this->fields).OnDictionaryChange !=
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(method->klass->rgctx_data[0x19].method)->methodPointer)
              ((this->fields).OnDictionaryChange,this);
    return;
  }
  return;
}


/* Boolean Remove(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Remove
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pDVar2 = this;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar3 = FUN_?();
  pIVar4 = (pDVar2->fields).dictionary;
  lVar3 = -lVar3;
  plVar5 = (longlong *)(&stack0xffffffffffffffe8 + lVar3);
  p_Var8 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var8 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  FUN_?(plVar5,p_Var8);
  if (pIVar4 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
      plVar5 = (longlong *)*plVar5;
    }
    pvVar6 = method->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      pvVar6 = (void *)FUN_?(pvVar6);
    }
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    bVar7 = FUN_?(6,pvVar6,pIVar4,plVar5);
    if (bVar7 != 0) {
      pIVar8 = (method->klass->rgctx_data[0xc].method)->methodPointer;
      *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
      (*pIVar8)(this);
    }
    return bVar7;
  }
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Boolean
   Remove(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Remove_1
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *pair,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  lVar2 = FUN_?();
  lVar2 = -lVar2;
  plVar3 = (longlong *)(&stack0xffffffffffffffe8 + lVar2);
  pIVar4 = method->klass->rgctx_data;
  *(longlong **)((longlong)alStack_5 + lVar2) = plVar3;
  pMVar6 = pIVar4[5].method;
  pIVar7 = pMVar6->invoker_method;
  pIVar8 = pMVar6->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  plStackX_18 = plVar3;
  (*pIVar7)(pIVar8,pMVar6,pair,&plStackX_18,*(void **)((longlong)alStack_5 + lVar2));
  if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
    plVar3 = (longlong *)*plVar3;
  }
  pIVar9 = method->klass;
  *(longlong ***)((longlong)alStack_5 + lVar2) = &plStackX_18;
  pMVar6 = pIVar9->rgctx_data[0xd].method;
  pIVar7 = pMVar6->invoker_method;
  pIVar8 = pMVar6->methodPointer;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  pvStackX_20 = plVar3;
  (*pIVar7)(pIVar8,pMVar6,this,&pvStackX_20,*(void **)((longlong)alStack_5 + lVar2));
  return (bool)plStackX_18;
}


/* IEnumerator`1[KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]]
   System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
    */

IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
* Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator
            (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)(*pcVar2)();
    return pIVar3;
  }
  pIVar4 = method->klass->rgctx_data[0x13].rgctxDataDummy;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?();
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType == pIVar4) {
        pVVar8 = &(pIVar6->vtable).get_Item + pIVar6->interfaceOffsets[uVar5].offset;
        UNRECOVERED_JUMPTABLE = pVVar8->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pIVar3 = (IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)(*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar8->method,UNRECOVERED_JUMPTABLE);
        return pIVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar9 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)(*(code *)*puVar9)(pIVar1,puVar9[1],(code *)*puVar9);
  return pIVar3;
}


/* Boolean TryGetValue(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType ByRef) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__TryGetValue
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType **value,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar2 = FUN_?();
  pIVar3 = (this->fields).dictionary;
  lVar2 = -lVar2;
  plVar4 = (longlong *)(&stack0xffffffffffffffe8 + lVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var6 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?(plVar4,p_Var6);
  if (pIVar3 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
      plVar4 = (longlong *)*plVar4;
    }
    pvVar5 = method->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    *(_Il2CppFullySharedGenericType ***)((longlong)auStack_6 + lVar2) = value;
    *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
    bVar7 = FUN_?(7,pvVar5,pIVar3,plVar4);
    return bVar7;
  }
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Count
                  (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  pIVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?();
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType == pIVar4) {
        pVVar8 = &(pIVar6->vtable).get_Item + pIVar6->interfaceOffsets[uVar5].offset;
        UNRECOVERED_JUMPTABLE = pVVar8->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar8->method,UNRECOVERED_JUMPTABLE);
        return iVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar9 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (*(code *)*puVar9)(pIVar1,puVar9[1],(code *)*puVar9);
  return iVar3;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_IsReadOnly
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pIVar4 = method->klass->rgctx_data[0xf].rgctxDataDummy;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType == pIVar4) {
        pVVar8 = &(pIVar6->vtable).get_Item + (pIVar6->interfaceOffsets[uVar5].offset + 1);
        UNRECOVERED_JUMPTABLE = pVVar8->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar3 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar8->method,UNRECOVERED_JUMPTABLE);
        return bVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar9 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*(code *)*puVar9)(pIVar1,puVar9[1],(code *)*puVar9);
  return bVar3;
}


/* __Il2CppFullySharedGenericType get_Item(__Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Item
          (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x48) + 0xfc);
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)key;
  lVar3 = FUN_?(this,0xffffffffffffff0,
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x38) +
                         0xfc),key);
  lVar3 = -lVar3;
  plVar4 = (longlong *)(&stack0xffffffffffffffd8 + lVar3);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar5 = FUN_?();
  pIVar6 = (this->fields).dictionary;
  lVar5 = -lVar5;
  p_Var7 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x38) + 0x28) < 0)
  {
    p_Var7 = key;
  }
  *(undefined **)((longlong)apuStack_2 + lVar5 + lVar3) = &UNK_?;
  FUN_?(plVar4,p_Var7);
  if (pIVar6 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x38) + 0x28
                     )) {
      plVar4 = (longlong *)*plVar4;
    }
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar5 + lVar3) = &UNK_?;
      lVar7 = FUN_?(lVar7);
    }
    *(undefined1 **)((longlong)alStack_8 + lVar5 + lVar3) =
         &stack0xffffffffffffffd8 + lVar5 + lVar3;
    *(undefined **)((longlong)apuStack_2 + lVar5 + lVar3) = &UNK_?;
    FUN_?(0,lVar7,pIVar6,plVar4);
    *(undefined **)((longlong)apuStack_2 + lVar5 + lVar3) = &UNK_?;
    p_Var7 = (_Il2CppFullySharedGenericType *)
             FUN_?(method,&stack0xffffffffffffffd8 + lVar5 + lVar3,uVar1);
    return p_Var7;
  }
  *(undefined **)((longlong)apuStack_2 + lVar5 + lVar3) = &UNK_?;
  FUN_?();
  pcVar9 = (code *)swi(3);
  p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar9)();
  return p_Var7;
}


/* ICollection`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_Keys() */

ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Keys
          (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar2)();
    return pIVar3;
  }
  pIVar4 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType == pIVar4) {
        pVVar8 = &(pIVar6->vtable).get_Item + (pIVar6->interfaceOffsets[uVar5].offset + 2);
        UNRECOVERED_JUMPTABLE = pVVar8->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                 (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar8->method,UNRECOVERED_JUMPTABLE);
        return pIVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar9 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           (*(code *)*puVar9)(pIVar1,puVar9[1],(code *)*puVar9);
  return pIVar3;
}


/* ICollection`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType] get_Values() */

ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Values
          (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar2)();
    return pIVar3;
  }
  pIVar4 = method->klass->rgctx_data[3].rgctxDataDummy;
  if ((pIVar4->field_0x135 & 1) == 0) {
    pIVar4 = (Il2CppClass *)FUN_?(pIVar4);
  }
  uVar5 = 0;
  pIVar6 = pIVar1->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar6->interfaceOffsets[uVar5].interfaceType == pIVar4) {
        pVVar8 = &(pIVar6->vtable).get_Item + (pIVar6->interfaceOffsets[uVar5].offset + 3);
        UNRECOVERED_JUMPTABLE = pVVar8->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                 (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar8->method,UNRECOVERED_JUMPTABLE);
        return pIVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar9 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           (*(code *)*puVar9)(pIVar1,puVar9[1],(code *)*puVar9);
  return pIVar3;
}


/* Void set_Item(__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Item
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *value,
               MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  auStackX_10._0_8_ = key;
  auStackX_10._8_8_ = value;
  lVar2 = FUN_?(this,0xffffffffffffff0,(method->klass->rgctx_data[7].klass)->actualSize,key)
  ;
  lVar2 = -lVar2;
  plVar3 = (longlong *)(&stack0xffffffffffffffc8 + lVar2);
  uVar4 = (method->klass->rgctx_data[9].klass)->actualSize;
  *(undefined **)((longlong)apuStack_1 + lVar2) = &UNK_?;
  lVar5 = FUN_?();
  pIVar6 = (this->fields).dictionary;
  lVar5 = -lVar5;
  plVar7 = (longlong *)(&stack0xffffffffffffffc8 + lVar5 + lVar2);
  p_Var8 = (_Il2CppFullySharedGenericType *)auStackX_10;
  if (*(int *)&(method->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var8 = key;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?(plVar3,p_Var8);
  p_Var8 = (_Il2CppFullySharedGenericType *)(auStackX_10 + 8);
  if (*(int *)&(method->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var8 = value;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?(plVar7,p_Var8,uVar4);
  if (pIVar6 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[9].method)->return_type) {
      plVar7 = (longlong *)*plVar7;
    }
    if (-1 < *(int *)&(method->klass->rgctx_data[7].method)->return_type) {
      plVar3 = (longlong *)*plVar3;
    }
    pvVar8 = method->klass->rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
      pvVar8 = (void *)FUN_?(pvVar8);
    }
    *(longlong **)((longlong)alStack_9 + lVar5 + lVar2) = plVar7;
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    FUN_?(1,pvVar8,pIVar6,plVar3);
    pIVar10 = (method->klass->rgctx_data[0xc].method)->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
    (*pIVar10)(this);
    return;
  }
  *(undefined **)((longlong)apuStack_1 + lVar5 + lVar2) = &UNK_?;
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

