
/* Void 
   Add(KeyValuePair`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Add
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      pair,MethodInfo *method)

{
  pIVar1 = (pair.value[2].klass)->rgctx_data;
  func_?();
  func_?();
  pMVar2 = pIVar1[5].method;
  _Stack_8.dummy = &stack0xffffffe8;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,pair.key,&_Stack_8.dummy,&stack0xffffffe8);
  pMVar2 = (pair.value[2].klass)->rgctx_data[8].method;
  _Stack_8.dummy = &stack0xffffffe8;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,pair.key,&_Stack_8.dummy,&stack0xffffffe8);
  pIVar1 = (pair.value[2].klass)->rgctx_data;
  p_Var3 = (_Il2CppFullySharedGenericType__Class *)&stack0xffffffe8;
  if (-1 < (int)(pIVar1[9].method)->return_type) {
    p_Var3 = unaff_EDI;
  }
  pair.value = (_Il2CppFullySharedGenericType *)&stack0xffffffe8;
  if (-1 < (int)(pIVar1[7].method)->return_type) {
    pair.value = (_Il2CppFullySharedGenericType *)unaff_EDI;
  }
  pMVar2 = pIVar1[10].method;
  p_Stack_c = pair.value;
  _Stack_8.dummy = &UNK_?;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,this,&p_Stack_c,p_Var3);
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
  pIVar1 = method->klass->rgctx_data;
  pIVar2 = pIVar1[7].klass;
  uVar3 = pIVar2->actualSize;
  uVar4 = (pIVar1[9].klass)->actualSize;
  func_?();
  func_?();
  pIVar5 = (this->fields).dictionary;
  iVar6._0_2_ = (pIVar2->byval_arg).attrs;
  iVar6._2_1_ = (pIVar2->byval_arg).type;
  iVar6._3_1_ = (pIVar2->byval_arg).field_0x7;
  p_Var9 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar6 < 0) {
    p_Var9 = key;
  }
  func_?(&stack0xffffffe4,p_Var9,uVar3);
  pMVar7 = method;
  p_Var9 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var9 = value;
  }
  func_?(&stack0xffffffe4,p_Var9,uVar4);
  if (pIVar5 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar1 = pMVar7->klass->rgctx_data;
    puVar8 = &stack0xffffffe4;
    if (-1 < (int)(pIVar1[9].method)->return_type) {
      puVar8 = unaff_EDI;
    }
    puVar9 = &stack0xffffffe4;
    if (-1 < (int)(pIVar1[7].method)->return_type) {
      puVar9 = unaff_EDI;
    }
    pIVar2 = pIVar1[3].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(5,pIVar2,pIVar5,puVar9,puVar8);
    pMVar7 = pMVar7->klass->rgctx_data[0xc].method;
    (*pMVar7->methodPointer)(this,pMVar7);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    pIVar2 = method->klass->rgctx_data[0xf].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(3,pIVar2,pIVar1);
    pMVar3 = method->klass->rgctx_data[0xc].method;
    (*pMVar3->methodPointer)(this,pMVar3);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
                      pair,MethodInfo *method)

{
  uVar1 = ((pair.value[2].klass)->rgctx_data[4].klass)->actualSize;
  func_?();
  pIVar2 = (this->fields).dictionary;
  func_?(&stack0xfffffff0,pair.key,uVar1);
  if (pIVar2 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar3 = (pair.value[2].klass)->rgctx_data[0xf].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    bVar4 = func_?(4,pIVar3,pIVar2,&stack0xfffffff0);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean ContainsKey(__Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ContainsKey
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *key,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[7].klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  pIVar3 = (this->fields).dictionary;
  iVar4._0_2_ = (pIVar1->byval_arg).attrs;
  iVar4._2_1_ = (pIVar1->byval_arg).type;
  iVar4._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var8 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar4 < 0) {
    p_Var8 = key;
  }
  func_?(&stack0xfffffff0,p_Var8,uVar2);
  if (pIVar3 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar5 = method->klass->rgctx_data;
    puVar6 = &stack0xfffffff0;
    if (-1 < (int)(pIVar5[7].method)->return_type) {
      puVar6 = unaff_EDI;
    }
    pIVar1 = pIVar5[3].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    bVar7 = func_?(4,pIVar1,pIVar3,puVar6);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
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
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[0xf].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(5,pIVar2,pIVar1,array,arrayIndex);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void NotifyDictionaryChange() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__NotifyDictionaryChange
               (DictionaryWithChangeEvent_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,MethodInfo *method)

{
  pDVar1 = (this->fields).OnDictionaryChange;
  if (pDVar1 != (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pMVar2 = method->klass->rgctx_data[0x19].method;
    (*pMVar2->methodPointer)(pDVar1,this,pMVar2);
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
  pIVar1 = method->klass->rgctx_data[7].klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  pIVar3 = (this->fields).dictionary;
  iVar4._0_2_ = (pIVar1->byval_arg).attrs;
  iVar4._2_1_ = (pIVar1->byval_arg).type;
  iVar4._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var9 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar4 < 0) {
    p_Var9 = key;
  }
  func_?(&stack0xffffffec,p_Var9,uVar2);
  pMVar5 = method;
  if (pIVar3 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    func_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  pIVar8 = method->klass->rgctx_data;
  puVar9 = &stack0xffffffec;
  if (-1 < (int)(pIVar8[7].method)->return_type) {
    puVar9 = unaff_EDI;
  }
  pIVar1 = pIVar8[3].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  bVar7 = func_?(6,pIVar1,pIVar3,puVar9);
  if (bVar7 == 0) {
    return 0;
  }
  pMVar5 = pMVar5->klass->rgctx_data[0xc].method;
  (*pMVar5->methodPointer)(this,pMVar5);
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
                      pair,MethodInfo *method)

{
  p_Var3 = pair.value;
  pIVar1 = (pair.value[2].klass)->rgctx_data;
  func_?();
  pMVar2 = pIVar1[5].method;
  pair.value = (_Il2CppFullySharedGenericType *)&stack0xffffffec;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,pair.key,&pair.value,&stack0xffffffec);
  pIVar1 = (p_Var3[2].klass)->rgctx_data;
  puStack_3 = &stack0xffffffec;
  if (-1 < (int)(pIVar1[7].method)->return_type) {
    puStack_3 = unaff_EDI;
  }
  pMVar2 = pIVar1[0xd].method;
  (*pMVar2->invoker_method)
            (pMVar2->methodPointer,pMVar2,this,&puStack_3,(void *)((int)&pair.value + 3));
  return pair.value._3_1_;
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
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[0x13].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar3 = (IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(0,pIVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_KeyValuePair_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)(*pcVar4)();
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
  pIVar1 = method->klass->rgctx_data[7].klass;
  uVar2 = pIVar1->actualSize;
  func_?();
  pIVar3 = (this->fields).dictionary;
  iVar4._0_2_ = (pIVar1->byval_arg).attrs;
  iVar4._2_1_ = (pIVar1->byval_arg).type;
  iVar4._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var8 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar4 < 0) {
    p_Var8 = key;
  }
  func_?(&stack0xfffffff0,p_Var8,uVar2);
  if (pIVar3 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar5 = method->klass->rgctx_data;
    puVar6 = &stack0xfffffff0;
    if (-1 < (int)(pIVar5[7].method)->return_type) {
      puVar6 = unaff_EDI;
    }
    pIVar1 = pIVar5[3].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    bVar7 = func_?(7,pIVar1,pIVar3,puVar6,value);
    return bVar7;
  }
  func_?();
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
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[0xf].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    iVar3 = func_?(0,pIVar2,pIVar1);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
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
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[0xf].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = func_?(1,pIVar2,pIVar1);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
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
  iVar1 = *(int *)(*(int *)(in_stack_2 + 0x10) + 0x60);
  iVar3 = *(int *)(iVar1 + 0x1c);
  uVar4 = *(undefined4 *)(iVar3 + 0x84);
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x84);
  func_?();
  func_?();
  pIVar6 = (this->fields).dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if (*(int *)(iVar3 + 0x14) < 0) {
    p_Var7 = key;
  }
  func_?(&stack0xffffffe8,p_Var7,uVar4);
  if (pIVar6 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    iVar1 = *(int *)(*(int *)(in_stack_2 + 0x10) + 0x60);
    puVar7 = &stack0xffffffe8;
    if (-1 < *(int *)(*(int *)(iVar1 + 0x1c) + 0x14)) {
      puVar7 = unaff_EDI;
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    func_?(0,iVar1,pIVar6,puVar7,&stack0xffffffe8);
    p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffe8,uVar5);
    return p_Var7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar8)();
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
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[3].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             func_?(2,pIVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar4)();
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
  if (pIVar1 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar2 = method->klass->rgctx_data[3].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             func_?(3,pIVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)(*pcVar4)();
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
  pIVar1 = method->klass->rgctx_data;
  pIVar2 = pIVar1[7].klass;
  uVar3 = pIVar2->actualSize;
  uVar4 = (pIVar1[9].klass)->actualSize;
  func_?();
  func_?();
  pIVar5 = (this->fields).dictionary;
  iVar6._0_2_ = (pIVar2->byval_arg).attrs;
  iVar6._2_1_ = (pIVar2->byval_arg).type;
  iVar6._3_1_ = (pIVar2->byval_arg).field_0x7;
  p_Var9 = (_Il2CppFullySharedGenericType *)&key;
  if (iVar6 < 0) {
    p_Var9 = key;
  }
  func_?(&stack0xffffffe4,p_Var9,uVar3);
  pMVar7 = method;
  p_Var9 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var9 = value;
  }
  func_?(&stack0xffffffe4,p_Var9,uVar4);
  if (pIVar5 != (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    pIVar1 = pMVar7->klass->rgctx_data;
    puVar8 = &stack0xffffffe4;
    if (-1 < (int)(pIVar1[9].method)->return_type) {
      puVar8 = unaff_EDI;
    }
    puVar9 = &stack0xffffffe4;
    if (-1 < (int)(pIVar1[7].method)->return_type) {
      puVar9 = unaff_EDI;
    }
    pIVar2 = pIVar1[3].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(1,pIVar2,pIVar5,puVar9,puVar8);
    pMVar7 = pMVar7->klass->rgctx_data[0xc].method;
    (*pMVar7->methodPointer)(this,pMVar7);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

