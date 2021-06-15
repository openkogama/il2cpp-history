
/* Void Add(KeyValuePair`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Add
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ pair,MethodInfo *method)

{
  uVar1 = func_?(&pair,*(undefined4 *)(*(int *)(method->name + 0x60) + 8));
  uVar2 = func_?(&pair,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc));
  if (this != (DictionaryWithChangeEvent_2_System_Object_System_Object_ *)0x0) {
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar3)(this,uVar1,uVar2,puVar3);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    func_?(0,iVar2,pIVar1,key,value);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
    (*(code *)*puVar3)(this,puVar3);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Clear
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    func_?(3,iVar2,pIVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
    (*(code *)*puVar3)(this,puVar3);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(4,iVar2,pIVar1,pair.key,pair.value);
    return bVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(1,iVar2,pIVar1,key);
    return bVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    func_?(5,iVar2,pIVar1,array,arrayIndex);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
DictionaryWithChangeEvent_2_System_Object_System_Object__GetEnumerator
          (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x24);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pIVar3 = (IEnumerator *)func_?(0,iVar2,pIVar1);
    return pIVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pIVar3 = (IEnumerator *)(*pcVar4)();
  return pIVar3;
}


/* Void NotifyDictionaryChange() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__NotifyDictionaryChange
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pDVar1 = (this->fields).OnDictionaryChange;
  if (pDVar1 != (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_System_Object_System_Object_
                 *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x28);
    (*(code *)*puVar2)(pDVar1,this,puVar2);
  }
  return;
}


/* Boolean Remove(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Remove
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,
               KeyValuePair_2_System_Object_System_Object_ pair,MethodInfo *method)

{
  uVar1 = func_?(&pair,*(undefined4 *)(*(int *)(method->name + 0x60) + 8));
  if (this != (DictionaryWithChangeEvent_2_System_Object_System_Object_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
    bVar3 = (*(code *)*puVar2)(this,uVar1,puVar2);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__Remove_1
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(2,iVar2,pIVar1,key);
    if (bVar3 != 0) {
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
      (*(code *)*puVar4)(this,puVar4);
    }
    return bVar3;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Boolean TryGetValue(Object, Object ByRef) */

bool Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object__TryGetValue
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,Object *key,
               Object **value,MethodInfo *method)

{
  pIVar1 = (this->fields).dictionary;
  if (pIVar1 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(3,iVar2,pIVar1,key,value);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* DictionaryWithChangeEvent`2[System.Object,System.Object]() */

void Assembly-CSharp.dll::DictionaryWithChangeEvent`2[System::Object,System::Object]::
     DictionaryWithChangeEvent_2_System_Object_System_Object___ctor
               (DictionaryWithChangeEvent_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (this != (DictionaryWithChangeEvent_2_System_Object_System_Object_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pIVar2 = (IDictionary_2_System_Object_System_Object_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
    (*(code *)*puVar3)(pIVar2,puVar3);
    (this->fields).dictionary = pIVar2;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    iVar3 = func_?(0,iVar2,pIVar1);
    return iVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x20);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(1,iVar2,pIVar1);
    return bVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pOVar3 = (Object *)func_?(4,iVar2,pIVar1,key);
    return pOVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pIVar3 = (ICollection_1_System_Object_ *)func_?(6,iVar2,pIVar1);
    return pIVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pIVar3 = (ICollection_1_System_Object_ *)func_?(7,iVar2,pIVar1);
    return pIVar3;
  }
  func_?(0);
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
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    func_?(5,iVar2,pIVar1,key,value);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
    (*(code *)*puVar3)(this,puVar3);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

