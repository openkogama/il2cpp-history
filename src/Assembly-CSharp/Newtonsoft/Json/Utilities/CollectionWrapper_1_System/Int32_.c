
/* Void Add(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Add
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  pMVar1 = method;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._genericCollection;
  if (pIVar2 != (ICollection_1_System_Int32_ *)0x0) {
    iVar3 = **(int **)(pMVar1->name + 0x60);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    func_?(2,iVar3,pIVar2,item);
    return;
  }
  pIVar4 = (this->fields)._list;
  this = (CollectionWrapper_1_System_Int32_ *)item;
  iVar3 = *(int *)(*(int *)(pMVar1->name + 0x60) + 4);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  uVar5 = func_?(iVar3,&this);
  if (pIVar4 != (IList *)0x0) {
    func_?(4,TypeInfo__System__Collections__IList,pIVar4,uVar5);
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Clear
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      func_?(5,TypeInfo__System__Collections__IList,pIVar2);
      return;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(3,iVar4,pIVar1);
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Contains
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  pMVar1 = method;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar2 = (this->fields)._genericCollection;
  if (pIVar2 != (ICollection_1_System_Int32_ *)0x0) {
    iVar3 = **(int **)(pMVar1->name + 0x60);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    bVar4 = func_?(4,iVar3,pIVar2,item);
    return bVar4;
  }
  pIVar5 = (this->fields)._list;
  this = (CollectionWrapper_1_System_Int32_ *)item;
  iVar3 = *(int *)(*(int *)(pMVar1->name + 0x60) + 4);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  uVar6 = func_?(iVar3,&this);
  if (pIVar5 != (IList *)0x0) {
    bVar4 = func_?(6,TypeInfo__System__Collections__IList,pIVar5,uVar6);
    return bVar4;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Void CopyTo(Int32[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__CopyTo
               (CollectionWrapper_1_System_Int32_ *this,Int32__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      func_?(3,TypeInfo__System__Collections__ICollection,pIVar2,array,arrayIndex);
      return;
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (Il2CppClass *)**(int **)(method->name + 0x60);
  if (((uint)pIVar4->vtable[0].methodPtr & 0x10000) == 0) {
    func_?(pIVar4);
  }
  pIVar5 = pIVar1->klass;
  uVar6 = 0;
  uVar7._0_1_ = (pIVar5->_1).rank;
  uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar7 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar6].interfaceType == pIVar4) {
        ppMVar8 = &(&(pIVar1->klass->vtable).CopyTo)[pIVar5->interfaceOffsets[uVar6].offset].method;
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  ppMVar8 = (MethodInfo **)func_?(pIVar1,pIVar4,5);
code_?:
  (*(code *)*ppMVar8)(pIVar1,array,arrayIndex,ppMVar8[1]);
  return;
}


/* IEnumerator`1[System.Int32] GetEnumerator() */

IEnumerator_1_System_Int32_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
CollectionWrapper_1_System_Int32__GetEnumerator
          (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    pIVar1 = (ICollection_1_System_Int32_ *)(*(code *)*puVar2)((this->fields)._list,puVar2);
    if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      pIVar4 = (IEnumerator_1_System_Int32_ *)(*pcVar3)();
      return pIVar4;
    }
    iVar5 = *(int *)(*(int *)(method->name + 0x60) + 8);
  }
  else {
    iVar5 = *(int *)(*(int *)(method->name + 0x60) + 8);
  }
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  pIVar4 = (IEnumerator_1_System_Int32_ *)func_?(0,iVar5,pIVar1);
  return pIVar4;
}


/* Boolean IsCompatibleObject(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__IsCompatibleObject(Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  iVar2 = *(int *)(*(int *)(pcVar1 + 0x60) + 4);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  iVar2 = func_?(value,iVar2);
  if (iVar2 == 0) {
    if (value != (Object *)0x0) {
      return 0;
    }
    pcVar1 = method->name;
    if ((pcVar1[0xbe] & 1U) == 0) {
      func_?(pcVar1);
    }
    RVar3.value = *(void **)(*(int *)(pcVar1 + 0x60) + 0x34);
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
    if (pTVar4 == (Type *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    bVar6 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar4,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pcVar1 = method->name;
      if ((pcVar1[0xbe] & 1U) == 0) {
        func_?();
      }
      RVar3.value = *(void **)(*(int *)(pcVar1 + 0x60) + 0x34);
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar3,(MethodInfo *)0x0);
      bVar6 = ReflectionUtils::ReflectionUtils_IsNullableType(pTVar4,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* Boolean IsGenericCollection() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__IsGenericCollection
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  return (this->fields)._genericCollection != (ICollection_1_System_Int32_ *)0x0;
}


/* Boolean Remove(Int32) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Remove
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  pMVar1 = method;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar2 = this;
  pIVar3 = (this->fields)._genericCollection;
  if (pIVar3 != (ICollection_1_System_Int32_ *)0x0) {
    iVar4 = **(int **)(pMVar1->name + 0x60);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    bVar5 = func_?(6,iVar4,pIVar3,item);
    return bVar5;
  }
  pIStack_6 = (this->fields)._list;
  this = (CollectionWrapper_1_System_Int32_ *)item;
  iVar4 = *(int *)(*(int *)(pMVar1->name + 0x60) + 4);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  uVar7 = func_?(iVar4,&this);
  if (pIStack_6 != (IList *)0x0) {
    cVar8 = func_?(6,TypeInfo__System__Collections__IList,pIStack_6,uVar7);
    this = (CollectionWrapper_1_System_Int32_ *)CONCAT13(cVar8,this._0_3_);
    if (cVar8 == '\0') {
      return 0;
    }
    pIVar9 = (pCVar2->fields)._list;
    pIStack_6 = (IList *)item;
    iVar4 = *(int *)(*(int *)(pMVar1->name + 0x60) + 4);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    uVar7 = func_?(iVar4,&pIStack_6);
    if (pIVar9 != (IList *)0x0) {
      func_?(9,TypeInfo__System__Collections__IList,pIVar9,uVar7);
      return this._3_1_;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar5 = (*pcVar10)();
  return bVar5;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_ICollection_CopyTo
               (CollectionWrapper_1_System_Int32_ *this,Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if (this != (CollectionWrapper_1_System_Int32_ *)0x0) {
    unaff_ESI = *(int *)(*(int *)(method->name + 0x60) + 0x2c);
    if ((*(byte *)(unaff_ESI + 0xbe) & 1) == 0) {
      func_?(unaff_ESI);
    }
    if (array == (Array *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = func_?(array,unaff_ESI);
      if (iVar1 == 0) goto code_?;
    }
    (*(code *)(this->klass->vtable).CopyTo_1.method)
              (this,iVar1,arrayIndex,(this->klass->vtable).get_Count_2.methodPtr);
    return;
  }
  func_?(0);
  array = unaff_EDI;
code_?:
  func_?(array,unaff_ESI);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
         CollectionWrapper_1_System_Int32__System_Collections_ICollection_get_SyncRoot
                   (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  location1 = &(this->fields)._syncRoot;
  pOVar1 = *location1;
  if (pOVar1 == (Object *)0x0) {
    method_00 = TypeInfo__System__Object;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
              (location1,(Object *)this_00,(Object *)0x0,(MethodInfo *)0x0);
    pOVar1 = *location1;
  }
  return pOVar1;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
CollectionWrapper_1_System_Int32__System_Collections_IEnumerable_GetEnumerator
          (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      pIVar3 = (IEnumerator *)func_?(0,TypeInfo__System__Collections__IEnumerable,pIVar2);
      return pIVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar4)();
    return pIVar3;
  }
  iVar5 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  pIVar3 = (IEnumerator *)func_?(0,iVar5,pIVar1);
  return pIVar3;
}


/* Int32 System.Collections.IList.Add(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__System_Collections_IList_Add
                  (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
  (*(code *)*puVar1)(value,puVar1);
  if (this != (CollectionWrapper_1_System_Int32_ *)0x0) {
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (Il2CppClass *)(method->field8_0x20).genericMethod) {
        puVar1 = (undefined4 *)func_?(value);
        (*(code *)(this->klass->vtable).Add_1.method)
                  (this,*puVar1,(this->klass->vtable).Clear_2.methodPtr);
        iVar2 = (*(code *)(this->klass->vtable).get_Count_2.method)
                          (this,(this->klass->vtable).get_IsReadOnly_2.methodPtr);
        return iVar2 + -1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,method);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean System.Collections.IList.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Contains
               (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  cVar2 = (*(code *)*puVar1)(value,puVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  if (this != (CollectionWrapper_1_System_Int32_ *)0x0) {
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (Il2CppClass *)(method->field8_0x20).genericMethod) {
        puVar1 = (undefined4 *)func_?(value);
        bVar3 = (*(code *)(this->klass->vtable).Contains_1.method)
                          (this,*puVar1,(this->klass->vtable).CopyTo_1.methodPtr);
        return bVar3;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,method);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Int32 System.Collections.IList.IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__System_Collections_IList_IndexOf
                  (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = value;
  pCVar2 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
    cVar4 = (*(code *)*puVar3)(value,puVar3);
    if (cVar4 == '\0') {
      return -1;
    }
    pIVar5 = (pCVar2->fields)._list;
    this_00 = *(IsolatedStorageException **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)this_00[3].fields._._remoteStackTraceString & 0x10000) == 0) {
      func_?(this_00);
    }
    if (pOVar1 == (Object *)0x0) goto code_?;
    unaff_EDI = pOVar1;
    if ((pOVar1->klass->_0).element_class ==
        (Il2CppClass *)(this_00->fields)._._remoteStackTraceString) {
      puVar3 = (undefined4 *)func_?(pOVar1);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar3;
      iVar6 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar7 = func_?(iVar6,&this);
      if (pIVar5 != (IList *)0x0) {
        iVar8 = func_?(7,TypeInfo__System__Collections__IList,pIVar5,uVar7);
        return iVar8;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_IndexOf_System__Object_
                   );
  }
  func_?(unaff_EDI,this_00);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  iVar8 = (*pcVar9)();
  return iVar8;
}


/* Void System.Collections.IList.Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Insert
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)value;
  pCVar1 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar2)(value,puVar2);
    pIVar3 = (pCVar1->fields)._list;
    pCVar1 = *(CollectionWrapper_1_System_Int32_ **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)pCVar1[9].fields._list & 0x10000) == 0) {
      func_?(pCVar1);
    }
    if (this_00 == (IsolatedStorageException *)0x0) goto code_?;
    if ((((Object *)this_00)->klass->_0).element_class ==
        (Il2CppClass *)pCVar1[1].fields._genericCollection) {
      puVar2 = (undefined4 *)func_?(this_00);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar2;
      iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      uVar5 = func_?(iVar4,&this);
      if (pIVar3 != (IList *)0x0) {
        func_?(8,TypeInfo__System__Collections__IList,pIVar3,index,uVar5);
        return;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_Insert_int__System__Object_
                   );
  }
  func_?(this_00,pCVar1);
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Remove
               (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  cVar2 = (*(code *)*puVar1)(value,puVar1);
  if (cVar2 == '\0') {
    return;
  }
  if (this != (CollectionWrapper_1_System_Int32_ *)0x0) {
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == (Il2CppClass *)(method->field8_0x20).genericMethod) {
        puVar1 = (undefined4 *)func_?(value);
        (*(code *)(this->klass->vtable).Remove_1.method)
                  (this,*puVar1,(this->klass->vtable).GetEnumerator_1.methodPtr);
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(value,method);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_RemoveAt
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(10,TypeInfo__System__Collections__IList,pIVar1,index);
      return;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean System.Collections.IList.get_IsFixedSize() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_get_IsFixedSize
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      bVar3 = func_?(0,TypeInfo__System__Collections__IList,pIVar2);
      return bVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar3 = func_?(1,iVar5,pIVar1);
  return bVar3;
}


/* Object System.Collections.IList.get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
         CollectionWrapper_1_System_Int32__System_Collections_IList_get_Item
                   (CollectionWrapper_1_System_Int32_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      pOVar2 = (Object *)func_?(2,TypeInfo__System__Collections__IList,pIVar1,index);
      return pOVar2;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0);
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void System.Collections.IList.set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_set_Item
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)value;
  pCVar1 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar2)(value,puVar2);
    pIVar3 = (pCVar1->fields)._list;
    pCVar1 = *(CollectionWrapper_1_System_Int32_ **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)pCVar1[9].fields._list & 0x10000) == 0) {
      func_?(pCVar1);
    }
    if (this_00 == (IsolatedStorageException *)0x0) goto code_?;
    if ((((Object *)this_00)->klass->_0).element_class ==
        (Il2CppClass *)pCVar1[1].fields._genericCollection) {
      puVar2 = (undefined4 *)func_?(this_00);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar2;
      iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      uVar5 = func_?(iVar4,&this);
      if (pIVar3 != (IList *)0x0) {
        func_?(3,TypeInfo__System__Collections__IList,pIVar3,index,uVar5);
        return;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_set_Item_int__System__Object_
                   );
  }
  func_?(this_00,pCVar1);
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void VerifyValueType(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__VerifyValueType(Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pcVar1 = method->name;
  pcVar2 = pcVar1;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
    pcVar2 = method->name;
  }
  if ((pcVar2[0xbe] & 1U) == 0) {
    func_?(pcVar2);
  }
  cVar3 = (*(code *)**(undefined4 **)(*(int *)(pcVar2 + 0x60) + 0x20))
                    (value,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 0x20));
  if (cVar3 != '\0') {
    return;
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  if (args == (Object__Array *)0x0) goto code_?;
  if ((value == (Object *)0x0) ||
     (iVar4 = func_?(value,(args->klass->_0).element_class), iVar4 != 0)) {
    if (args->max_length == 0) goto code_?;
  }
  else {
    uVar5 = func_?(0,0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
  args->vector[0] = value;
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  handle.value = *(void **)(*(int *)(pcVar1 + 0x60) + 0x34);
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args,0);
  func_?(args,pTVar6);
  func_?(1,pTVar6);
  message = StringUtils::StringUtils_FormatWith
                      (StringLiteral_The_value___0___is_not_of_type__,(IFormatProvider *)provider,
                       args,(MethodInfo *)0x0);
  this = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_3
            (this,message,StringLiteral_value,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CollectionWrapper`1[System.Int32](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32___ctor
               (CollectionWrapper_1_System_Int32_ *this,IList *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this == (CollectionWrapper_1_System_Int32_ *)0x0) {
    func_?();
    list = unaff_ESI;
  }
  else {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
    if ((*(byte *)(**(int **)(method->name + 0x60) + 0xbe) & 1) == 0) {
      func_?();
    }
    iVar1 = func_?(list);
    if (iVar1 == 0) {
      (this->fields)._list = list;
      return;
    }
    if ((*(byte *)(**(int **)(method->name + 0x60) + 0xbe) & 1) == 0) {
      func_?();
    }
    if (list == (IList *)0x0) {
      (this->fields)._genericCollection = (ICollection_1_System_Int32_ *)0x0;
      return;
    }
    pIVar2 = (ICollection_1_System_Int32_ *)func_?(list);
    if (pIVar2 != (ICollection_1_System_Int32_ *)0x0) {
      (this->fields)._genericCollection = pIVar2;
      return;
    }
  }
  func_?(list);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CollectionWrapper`1[System.Int32](ICollection`1[System.Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32___ctor_1
               (CollectionWrapper_1_System_Int32_ *this,ICollection_1_System_Int32_ *list,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (CollectionWrapper_1_System_Int32_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
    (this->fields)._genericCollection = list;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__get_Count
                  (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      iVar3 = func_?(0,TypeInfo__System__Collections__ICollection,pIVar2);
      return iVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  iVar3 = func_?(0,iVar5,pIVar1);
  return iVar3;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__get_IsReadOnly
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      bVar3 = func_?(1,TypeInfo__System__Collections__IList,pIVar2);
      return bVar3;
    }
    func_?(0);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  iVar5 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
    func_?(iVar5);
  }
  bVar3 = func_?(1,iVar5,pIVar1);
  return bVar3;
}


/* Object get_UnderlyingCollection() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
         CollectionWrapper_1_System_Int32__get_UnderlyingCollection
                   (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Int32_ *)0x0) {
    return (Object *)(this->fields)._list;
  }
  return (Object *)pIVar1;
}

