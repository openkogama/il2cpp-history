
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
  func_?();
  func_?();
  pMVar1 = (pair.value[2].klass)->rgctx_data[5].method;
  puStack_2 = &stack0xffffffe8;
  (*pMVar1->invoker_method)
            (((pair.value[2].klass)->rgctx_data[5].method)->methodPointer,pMVar1,pair.key,&puStack_2
             ,&stack0xffffffe8);
  pMVar1 = (pair.value[2].klass)->rgctx_data[8].method;
  puStack_2 = &stack0xffffffe8;
  (*pMVar1->invoker_method)
            (((pair.value[2].klass)->rgctx_data[8].method)->methodPointer,pMVar1,pair.key,&puStack_2
             ,&stack0xffffffe8);
  puVar3 = &stack0xffffffe8;
  if (-1 < (int)((pair.value[2].klass)->rgctx_data[9].method)->return_type) {
    puVar3 = unaff_EDI;
  }
  puStack_4 = &stack0xffffffe8;
  if (-1 < (int)((pair.value[2].klass)->rgctx_data[7].method)->return_type) {
    puStack_4 = unaff_EDI;
  }
  pMVar1 = (pair.value[2].klass)->rgctx_data[10].method;
  (*pMVar1->invoker_method)
            (((pair.value[2].klass)->rgctx_data[10].method)->methodPointer,pMVar1,this,&puStack_4,
             puVar3);
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[7].klass)->actualSize;
  uVar3 = (method->klass->rgctx_data[9].klass)->actualSize;
  func_?();
  func_?();
  method = (MethodInfo *)(this->fields).dictionary;
  p_Var6 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var6 = key;
  }
  func_?(&stack0xffffffe8,p_Var6,uVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var6 = value;
  }
  func_?(&stack0xffffffe8,p_Var6,uVar3);
  if (method != (MethodInfo *)0x0) {
    puVar4 = &stack0xffffffe8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[9].method)->return_type) {
      puVar4 = unaff_EDI;
    }
    puVar5 = &stack0xffffffe8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[7].method)->return_type) {
      puVar5 = unaff_EDI;
    }
    pIVar6 = pMVar1->klass->rgctx_data[3].klass;
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    func_?(5,pIVar6,method,puVar5,puVar4);
    pMVar1 = pMVar1->klass->rgctx_data[0xc].method;
    (*pMVar1->methodPointer)(this,pMVar1);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[7].klass)->actualSize;
  func_?();
  method = (MethodInfo *)(this->fields).dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var7 = key;
  }
  func_?(&stack0xfffffff0,p_Var7,uVar2);
  pMVar3 = method;
  if (method != (MethodInfo *)0x0) {
    puVar4 = &stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[7].method)->return_type) {
      puVar4 = unaff_EDI;
    }
    pIVar5 = pMVar1->klass->rgctx_data[3].klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar6 = func_?(4,pIVar5,pMVar3,puVar4);
    return bVar6;
  }
  func_?();
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
  if ((this->fields).OnDictionaryChange !=
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    pMVar1 = method->klass->rgctx_data[0x19].method;
    (*pMVar1->methodPointer)((this->fields).OnDictionaryChange,this,pMVar1);
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[7].klass)->actualSize;
  func_?();
  pIVar3 = (this->fields).dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var7 = key;
  }
  func_?(&stack0xffffffec,p_Var7,uVar2);
  if (pIVar3 == (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  puVar6 = &stack0xffffffec;
  if (-1 < (int)(pMVar1->klass->rgctx_data[7].method)->return_type) {
    puVar6 = unaff_EDI;
  }
  pIVar7 = pMVar1->klass->rgctx_data[3].klass;
  if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
    pIVar7 = (Il2CppClass *)func_?(pIVar7);
  }
  bVar5 = func_?(6,pIVar7,pIVar3,puVar6);
  if (bVar5 == 0) {
    return 0;
  }
  pMVar1 = method->klass->rgctx_data[0xc].method;
  (*pMVar1->methodPointer)(this,pMVar1);
  return bVar5;
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
  p_Var2 = pair.value;
  func_?();
  pMVar1 = (p_Var2[2].klass)->rgctx_data[5].method;
  pair.value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
  (*pMVar1->invoker_method)
            (((p_Var2[2].klass)->rgctx_data[5].method)->methodPointer,pMVar1,pair.key,&pair.value,
             &stack0xfffffff0);
  puStack_2 = &stack0xfffffff0;
  if (-1 < (int)((p_Var2[2].klass)->rgctx_data[7].method)->return_type) {
    puStack_2 = unaff_EDI;
  }
  pMVar1 = (p_Var2[2].klass)->rgctx_data[0xd].method;
  (*pMVar1->invoker_method)
            (((p_Var2[2].klass)->rgctx_data[0xd].method)->methodPointer,pMVar1,this,&puStack_2,
             (void *)((int)&pair.value + 3));
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[7].klass)->actualSize;
  func_?();
  method = (MethodInfo *)(this->fields).dictionary;
  p_Var7 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var7 = key;
  }
  func_?(&stack0xfffffff0,p_Var7,uVar2);
  pMVar3 = method;
  if (method != (MethodInfo *)0x0) {
    puVar4 = &stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[7].method)->return_type) {
      puVar4 = unaff_EDI;
    }
    pIVar5 = pMVar1->klass->rgctx_data[3].klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    bVar6 = func_?(7,pIVar5,pMVar3,puVar4,value);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
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
  iVar1 = (int)in_stack_2;
  uVar3 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x1c) + 0x84);
  uVar4 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x24) + 0x84);
  func_?();
  func_?();
  p_Var5 = (_Il2CppFullySharedGenericType *)&key;
  if (*(int *)(*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x1c) + 0x14) < 0
     ) {
    p_Var5 = key;
  }
  in_stack_2 = (this->fields).dictionary;
  func_?(&stack0xffffffe8,p_Var5,uVar3);
  if (in_stack_2 !=
      (IDictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    puVar5 = &stack0xffffffe8;
    if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x1c) + 0x14)) {
      puVar5 = unaff_EDI;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    func_?(0,iVar1,in_stack_2,puVar5,&stack0xffffffe8);
    p_Var5 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffe8,uVar4);
    return p_Var5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  p_Var5 = (_Il2CppFullySharedGenericType *)(*pcVar6)();
  return p_Var5;
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
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[7].klass)->actualSize;
  uVar3 = (method->klass->rgctx_data[9].klass)->actualSize;
  func_?();
  func_?();
  method = (MethodInfo *)(this->fields).dictionary;
  p_Var6 = (_Il2CppFullySharedGenericType *)&key;
  if ((int)(pMVar1->klass->rgctx_data[7].method)->return_type < 0) {
    p_Var6 = key;
  }
  func_?(&stack0xffffffe8,p_Var6,uVar2);
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var6 = value;
  }
  func_?(&stack0xffffffe8,p_Var6,uVar3);
  if (method != (MethodInfo *)0x0) {
    puVar4 = &stack0xffffffe8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[9].method)->return_type) {
      puVar4 = unaff_EDI;
    }
    puVar5 = &stack0xffffffe8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[7].method)->return_type) {
      puVar5 = unaff_EDI;
    }
    pIVar6 = pMVar1->klass->rgctx_data[3].klass;
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    func_?(1,pIVar6,method,puVar5,puVar4);
    pMVar1 = pMVar1->klass->rgctx_data[0xc].method;
    (*pMVar1->methodPointer)(this,pMVar1);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

