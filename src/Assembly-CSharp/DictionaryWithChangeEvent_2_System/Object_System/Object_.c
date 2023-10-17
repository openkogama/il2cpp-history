
/* Void Add(KeyValuePair`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Add
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ pair,MethodInfo *method)

{
  (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
            (this,pair.key,pair.value,method->klass->rgctx_data[4].rgctxDataDummy);
  return;
}


/* Void Add(Object, Object) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Add_1
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               Object *value,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(5,pvVar2,pIVar1,key,value);
    (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
              (this,method->klass->rgctx_data[7].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Clear
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(3,pvVar2,pIVar1);
    (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
              (this,method->klass->rgctx_data[7].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Contains(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Contains
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ pair,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(4,pvVar2,pIVar1,pair.key,pair.value);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean ContainsKey(Object) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__ContainsKey
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(4,pvVar2,pIVar1,key);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void CopyTo(KeyValuePair`2[System.Object,System.Object][], Int32) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__CopyTo
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object___Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(5,pvVar2,pIVar1,array,arrayIndex);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void NotifyDictionaryChange() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__NotifyDictionaryChange
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields).OnDictionaryChange !=
      (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_System_Object_System_Object_
       *)0x0) {
    (*(method->klass->rgctx_data[0x12].method)->virtualMethodPointer)
              ((this->fields).OnDictionaryChange,this,method->klass->rgctx_data[0x12].rgctxDataDummy
              );
  }
  return;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Remove
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 == (IDictionary_2_System_Object_System_Object_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pvVar4 = method->klass->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
    pvVar4 = (void *)func_?(pvVar4);
  }
  bVar3 = func_?(6,pvVar4,pIVar1,key);
  if (bVar3 == 0) {
    return 0;
  }
  (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
            (this,method->klass->rgctx_data[7].rgctxDataDummy);
  return bVar3;
}


/* Boolean Remove(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Remove_1
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ pair,MethodInfo *method)

{
  bVar1 = (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                    (this,pair.key,method->klass->rgctx_data[8].rgctxDataDummy);
  return bVar1;
}


/* IEnumerator`1[KeyValuePair`2[System.Object,System.Object]]
   System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
    */

IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
DictionaryWithChangeEvent_2_System_Object_System_Object__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator
          (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[0xe].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pIVar3 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
             func_?(0,pvVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)(*pcVar4)();
  return pIVar3;
}


/* Boolean TryGetValue(Object, Object ByRef) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__TryGetValue
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               Object **value,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(7,pvVar2,pIVar1,key,value);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* DictionaryWithChangeEvent`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object___ctor
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pIVar2 = (IDictionary_2_System_Object_System_Object_ *)func_?(pvVar1);
  if (pIVar2 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
              (pIVar2,method->klass->rgctx_data[1].rgctxDataDummy);
    (this->fields).dictionary = pIVar2;
    func_?(&this->fields,pIVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
        DictionaryWithChangeEvent_2_System_Object_System_Object__get_Count
                  (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method
                  )

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    iVar3 = func_?(0,pvVar2,pIVar1);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__get_IsReadOnly
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    bVar3 = func_?(1,pvVar2,pIVar1);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Object get_Item(Object) */

Object * Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
         DictionaryWithChangeEvent_2_System_Object_System_Object__get_Item
                   (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
                   MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pOVar3 = (Object *)func_?(0,pvVar2,pIVar1,key);
    return pOVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* ICollection`1[System.Object] get_Keys() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
DictionaryWithChangeEvent_2_System_Object_System_Object__get_Keys
          (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pIVar3 = (ICollection_1_System_Object_ *)func_?(2,pvVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_System_Object_ *)(*pcVar4)();
  return pIVar3;
}


/* ICollection`1[System.Object] get_Values() */

ICollection_1_System_Object_ *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
DictionaryWithChangeEvent_2_System_Object_System_Object__get_Values
          (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    pIVar3 = (ICollection_1_System_Object_ *)func_?(3,pvVar2,pIVar1);
    return pIVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (ICollection_1_System_Object_ *)(*pcVar4)();
  return pIVar3;
}


/* Void set_Item(Object, Object) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__set_Item
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               Object *value,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(1,pvVar2,pIVar1,key,value);
    (*(method->klass->rgctx_data[7].method)->virtualMethodPointer)
              (this,method->klass->rgctx_data[7].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

