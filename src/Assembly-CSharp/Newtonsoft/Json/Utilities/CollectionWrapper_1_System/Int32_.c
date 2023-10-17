
/* Void Add(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Add
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    this = (CollectionWrapper_1_System_Int32_ *)item;
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    uVar3 = func_?(pvVar2,&this);
    if (pIVar1 != (IList *)0x0) {
      func_?(2,TypeInfo__System__Collections__IList,pIVar1,uVar3);
      return;
    }
  }
  else {
    pIVar4 = (this->fields)._genericCollection;
    if (pIVar4 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar2 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      func_?(2,pvVar2,pIVar4,item);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Clear
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(4,TypeInfo__System__Collections__IList,pIVar1);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericCollection;
    if (pIVar2 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(3,pvVar3,pIVar2);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Contains
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    this = (CollectionWrapper_1_System_Int32_ *)item;
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    uVar3 = func_?(pvVar2,&this);
    if (pIVar1 != (IList *)0x0) {
      bVar4 = func_?(3,TypeInfo__System__Collections__IList,pIVar1,uVar3);
      return bVar4;
    }
  }
  else {
    pIVar5 = (this->fields)._genericCollection;
    if (pIVar5 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar2 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      bVar4 = func_?(4,pvVar2,pIVar5,item);
      return bVar4;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void CopyTo(Int32[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__CopyTo
               (CollectionWrapper_1_System_Int32_ *this,Int32__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(0,TypeInfo__System__Collections__ICollection,pIVar1,array,arrayIndex);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericCollection;
    if (pIVar2 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(5,pvVar3,pIVar2,array,arrayIndex);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsCompatibleObject(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__IsCompatibleObject(Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pvVar2 = pIVar1->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  iVar3 = func_?(value,pvVar2);
  if (iVar3 == 0) {
    if (value != (Object *)0x0) {
      return 0;
    }
    pIVar1 = method->klass;
    if (pIVar1->initialized_and_no_error == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    IVar4 = pIVar1->rgctx_data[0x16];
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)IVar4,(MethodInfo *)0x0);
    if (pTVar5 == (Type *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      bVar7 = (*pcVar6)();
      return bVar7;
    }
    bVar7 = mscorlib.dll::System::Type::Type_get_IsValueType(pTVar5,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pIVar1 = method->klass;
      if (pIVar1->initialized_and_no_error == 0) {
        pIVar1 = (Il2CppClass *)func_?();
      }
      IVar4 = pIVar1->rgctx_data[0x16];
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar5 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)IVar4,(MethodInfo *)0x0);
      bVar7 = ReflectionUtils::ReflectionUtils_IsNullableType(pTVar5,(MethodInfo *)0x0);
      return bVar7 != 0;
    }
  }
  return 1;
}


/* Boolean Remove(Int32) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__Remove
               (CollectionWrapper_1_System_Int32_ *this,int32_t item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar2 = (this->fields)._list;
    this = (CollectionWrapper_1_System_Int32_ *)item;
    pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    uVar4 = func_?(pvVar3,&this);
    if (pIVar2 != (IList *)0x0) {
      bVar5 = func_?(3,TypeInfo__System__Collections__IList,pIVar2,uVar4);
      if (bVar5 == 0) {
        return 0;
      }
      pIVar2 = (pCVar1->fields)._list;
      this = (CollectionWrapper_1_System_Int32_ *)item;
      pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      uVar4 = func_?(pvVar3,&this);
      if (pIVar2 != (IList *)0x0) {
        func_?(9,TypeInfo__System__Collections__IList,pIVar2,uVar4);
        return bVar5;
      }
    }
  }
  else {
    pIVar6 = (this->fields)._genericCollection;
    if (pIVar6 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      bVar5 = func_?(6,pvVar3,pIVar6,item);
      return bVar5;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
         CollectionWrapper_1_System_Int32__System_Collections_ICollection_get_SyncRoot
                   (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._syncRoot == (Object *)0x0) {
    pOVar1 = (Object *)func_?(TypeInfo__System__Object);
    if (pOVar1 == (Object *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pOVar1 = (Object *)(*pcVar2)();
      return pOVar1;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (pOVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_3
              (&(this->fields)._syncRoot,pOVar1,(Object *)0x0,(MethodInfo *)0x0);
  }
  return (this->fields)._syncRoot;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
CollectionWrapper_1_System_Int32__System_Collections_IEnumerable_GetEnumerator
          (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IEnumerable);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      pIVar2 = (IEnumerator *)func_?(0,TypeInfo__System__Collections__IEnumerable,pIVar1);
      return pIVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar4 = method->klass->rgctx_data[9].rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      pIVar2 = (IEnumerator *)func_?(0,pvVar4,pIVar3);
      return pIVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar5)();
  return pIVar2;
}


/* Int32 System.Collections.IList.Add(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__System_Collections_IList_Add
                  (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
            (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
  pIVar1 = method->klass->rgctx_data[2].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  if (value == (Object *)0x0) {
    pIVar1 = (Il2CppClass *)func_?();
  }
  else if ((value->klass->_0).element_class == pIVar1->element_class) {
    puVar2 = (undefined4 *)func_?(value);
    (*(this->klass->vtable).Add_1.methodPtr)(this,*puVar2,(this->klass->vtable).Add_1.method);
    iVar3 = (*(this->klass->vtable).get_Count_2.methodPtr)
                      (this,(this->klass->vtable).get_Count_2.method);
    return iVar3 + -1;
  }
  func_?(value,pIVar1);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Boolean System.Collections.IList.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Contains
               (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                    (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
  if (cVar1 == '\0') {
    return 0;
  }
  pIVar2 = method->klass->rgctx_data[2].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (value == (Object *)0x0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  else if ((value->klass->_0).element_class == pIVar2->element_class) {
    puVar3 = (undefined4 *)func_?(value);
    bVar4 = (*(this->klass->vtable).Contains_1.methodPtr)
                      (this,*puVar3,(this->klass->vtable).Contains_1.method);
    return bVar4;
  }
  func_?(value,pIVar2);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 System.Collections.IList.IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__System_Collections_IList_IndexOf
                  (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  this_00 = (Exception *)value;
  pCVar2 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    cVar3 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                      (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
    if (cVar3 == '\0') {
      return -1;
    }
    pIVar4 = (pCVar2->fields)._list;
    pIVar5 = pMVar1->klass->rgctx_data[2].klass;
    if (pIVar5->initialized_and_no_error == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    if (this_00 == (Exception *)0x0) goto code_?;
    if ((((Object *)this_00)->klass->_0).element_class == pIVar5->element_class) {
      puVar6 = (undefined4 *)func_?(this_00);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar6;
      pvVar7 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
        pvVar7 = (void *)func_?(pvVar7);
      }
      uVar8 = func_?(pvVar7,&this);
      if (pIVar4 != (IList *)0x0) {
        iVar9 = func_?(7,TypeInfo__System__Collections__IList,pIVar4,uVar8);
        return iVar9;
      }
      goto code_?;
    }
  }
  else {
    uVar8 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar8);
    func_?(this_00);
    pMVar1 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar1);
    uVar8 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_IndexOf_System__Object_
                           );
    pIVar5 = (Il2CppClass *)func_?(this_00,uVar8);
  }
  func_?(this_00,pIVar5);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  iVar9 = (*pcVar10)();
  return iVar9;
}


/* Void System.Collections.IList.Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Insert
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  this_00 = (Exception *)value;
  pCVar2 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
    pIVar3 = (pCVar2->fields)._list;
    pIVar4 = pMVar1->klass->rgctx_data[2].klass;
    if (pIVar4->initialized_and_no_error == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    if (this_00 == (Exception *)0x0) goto code_?;
    if ((((Object *)this_00)->klass->_0).element_class == pIVar4->element_class) {
      puVar5 = (undefined4 *)func_?(this_00);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar5;
      pvVar6 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      uVar7 = func_?(pvVar6,&this);
      if (pIVar3 != (IList *)0x0) {
        func_?(8,TypeInfo__System__Collections__IList,pIVar3,index,uVar7);
        return;
      }
      goto code_?;
    }
  }
  else {
    uVar7 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar7);
    func_?(this_00);
    pMVar1 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar1);
    uVar7 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_Insert_int__System__Object_
                           );
    pIVar4 = (Il2CppClass *)func_?(this_00,uVar7);
  }
  func_?(this_00,pIVar4);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_Remove
               (CollectionWrapper_1_System_Int32_ *this,Object *value,MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                    (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
  if (cVar1 == '\0') {
    return;
  }
  pIVar2 = method->klass->rgctx_data[2].klass;
  if (pIVar2->initialized_and_no_error == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (value == (Object *)0x0) {
    pIVar2 = (Il2CppClass *)func_?();
  }
  else if ((value->klass->_0).element_class == pIVar2->element_class) {
    puVar3 = (undefined4 *)func_?(value);
    (*(this->klass->vtable).Remove_1.methodPtr)(this,*puVar3,(this->klass->vtable).Remove_1.method);
    return;
  }
  func_?(value,pIVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_RemoveAt
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
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
    uVar2 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar2);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_RemoveAt_int_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean System.Collections.IList.get_IsFixedSize() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_get_IsFixedSize
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(6,TypeInfo__System__Collections__IList,pIVar1);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(1,pvVar4,pIVar3);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Object System.Collections.IList.get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
         CollectionWrapper_1_System_Int32__System_Collections_IList_get_Item
                   (CollectionWrapper_1_System_Int32_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      pOVar2 = (Object *)func_?(0,TypeInfo__System__Collections__IList,pIVar1,index);
      return pOVar2;
    }
  }
  else {
    uVar3 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar3);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_get_Item_int_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar4)();
  return pOVar2;
}


/* Void System.Collections.IList.set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__System_Collections_IList_set_Item
               (CollectionWrapper_1_System_Int32_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  this_00 = (Exception *)value;
  pCVar2 = this;
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
    pIVar3 = (pCVar2->fields)._list;
    pIVar4 = pMVar1->klass->rgctx_data[2].klass;
    if (pIVar4->initialized_and_no_error == 0) {
      pIVar4 = (Il2CppClass *)func_?(pIVar4);
    }
    if (this_00 == (Exception *)0x0) goto code_?;
    if ((((Object *)this_00)->klass->_0).element_class == pIVar4->element_class) {
      puVar5 = (undefined4 *)func_?(this_00);
      this = (CollectionWrapper_1_System_Int32_ *)*puVar5;
      pvVar6 = pMVar1->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar6 + 0xba) & 1) == 0) {
        pvVar6 = (void *)func_?(pvVar6);
      }
      uVar7 = func_?(pvVar6,&this);
      if (pIVar3 != (IList *)0x0) {
        func_?(1,TypeInfo__System__Collections__IList,pIVar3,index,uVar7);
        return;
      }
      goto code_?;
    }
  }
  else {
    uVar7 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar7);
    func_?(this_00);
    pMVar1 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar1);
    uVar7 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__System_Collections_IList_set_Item_int__System__Object_
                           );
    pIVar4 = (Il2CppClass *)func_?(this_00,uVar7);
  }
  func_?(this_00,pIVar4);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void VerifyValueType(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__VerifyValueType(Object *value,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = (pIVar1->rgctx_data[0x11].method)->virtualMethodPointer;
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  cVar3 = (*pIVar2)(value,pIVar1->rgctx_data[0x11].rgctxDataDummy);
  if (cVar3 != '\0') {
    return;
  }
  uVar4 = func_?(&TypeInfo__System__Globalization__CultureInfo);
  func_?(uVar4);
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  uVar4 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar4);
  func_?(args);
  func_?(args,value);
  func_?(0,value);
  iVar5 = func_?(method->klass,0x16);
  handle.value = (void *)func_?(*(undefined4 *)(iVar5 + 0x60));
  uVar4 = func_?(&TypeInfo__System__Type);
  func_?(uVar4);
  pTVar6 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar6);
  func_?(1,pTVar6);
  pMVar7 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_The_value___0___is_not_of_type__);
  pSVar8 = StringUtils::StringUtils_FormatWith(pSVar8,(IFormatProvider *)provider,args,pMVar7);
  uVar4 = func_?(&TypeInfo__System__ArgumentException);
  this = (ArgumentException *)func_?(uVar4);
  func_?(this);
  pMVar7 = (MethodInfo *)0x0;
  paramName = (String *)func_?(&StringLiteral_value);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4(this,pSVar8,paramName,pMVar7);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<int>__VerifyValueType_System__Object_
                 );
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CollectionWrapper`1[System.Int32](ICollection`1[System.Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32___ctor
               (CollectionWrapper_1_System_Int32_ *this,ICollection_1_System_Int32_ *list,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  (this->fields)._genericCollection = list;
  func_?(&(this->fields)._genericCollection,list);
  return;
}


/* CollectionWrapper`1[System.Int32](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32___ctor_1
               (CollectionWrapper_1_System_Int32_ *this,IList *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  if ((*(byte *)((int)method->klass->rgctx_data->rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  iVar1 = func_?(list);
  if (iVar1 == 0) {
    (this->fields)._list = list;
    func_?(&this->fields);
    return;
  }
  if ((*(byte *)((int)method->klass->rgctx_data->rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  if (list == (IList *)0x0) {
    pIVar2 = (ICollection_1_System_Int32_ *)0x0;
  }
  else {
    pIVar2 = (ICollection_1_System_Int32_ *)func_?(list);
    if (pIVar2 == (ICollection_1_System_Int32_ *)0x0) goto code_?;
  }
  (this->fields)._genericCollection = pIVar2;
  if ((*(byte *)((int)method->klass->rgctx_data->rgctxDataDummy + 0xba) & 1) == 0) {
    func_?();
  }
  if (list == (IList *)0x0) {
    func_?(&(this->fields)._genericCollection);
    return;
  }
  iVar1 = func_?(list);
  if (iVar1 != 0) {
    func_?(&(this->fields)._genericCollection);
    return;
  }
code_?:
  func_?(list);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
        CollectionWrapper_1_System_Int32__get_Count
                  (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      iVar2 = func_?(1,TypeInfo__System__Collections__ICollection,pIVar1);
      return iVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      iVar2 = func_?(0,pvVar4,pIVar3);
      return iVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar2 = (*pcVar5)();
  return iVar2;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Int32]::
     CollectionWrapper_1_System_Int32__get_IsReadOnly
               (CollectionWrapper_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Int32_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(5,TypeInfo__System__Collections__IList,pIVar1);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Int32_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(1,pvVar4,pIVar3);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}

