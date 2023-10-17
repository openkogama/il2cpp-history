
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Add
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(2,TypeInfo__System__Collections__IList,pIVar1,item);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericCollection;
    if (pIVar2 != (ICollection_1_System_Object_ *)0x0) {
      pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(2,pvVar3,pIVar2,item);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Clear
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(4,TypeInfo__System__Collections__IList,pIVar1);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericCollection;
    if (pIVar2 != (ICollection_1_System_Object_ *)0x0) {
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


/* Boolean Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Contains
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(3,TypeInfo__System__Collections__IList,pIVar1,item);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(4,pvVar4,pIVar3,item);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void CopyTo(Object[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__CopyTo
               (CollectionWrapper_1_System_Object_ *this,Object__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      func_?(0,TypeInfo__System__Collections__ICollection,pIVar1,array,arrayIndex);
      return;
    }
  }
  else {
    pIVar2 = (this->fields)._genericCollection;
    if (pIVar2 != (ICollection_1_System_Object_ *)0x0) {
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


/* IEnumerator`1[System.Object] GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
CollectionWrapper_1_System_Object__GetEnumerator
          (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    iVar1 = (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                      ((this->fields)._list,method->klass->rgctx_data[0xb].rgctxDataDummy);
    if (iVar1 != 0) {
      pvVar2 = method->klass->rgctx_data[9].rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      pIVar3 = (IEnumerator_1_System_Object_ *)func_?(0,pvVar2,iVar1);
      return pIVar3;
    }
  }
  else {
    pIVar4 = (this->fields)._genericCollection;
    if (pIVar4 != (ICollection_1_System_Object_ *)0x0) {
      pvVar2 = method->klass->rgctx_data[9].rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      pIVar3 = (IEnumerator_1_System_Object_ *)func_?(0,pvVar2,pIVar4);
      return pIVar3;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_System_Object_ *)(*pcVar5)();
  return pIVar3;
}


/* Boolean IsCompatibleObject(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__IsCompatibleObject(Object *value,MethodInfo *method)

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


/* Boolean IsGenericCollection() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__IsGenericCollection
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  return (this->fields)._genericCollection != (ICollection_1_System_Object_ *)0x0;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Remove
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(3,TypeInfo__System__Collections__IList,pIVar1,item);
      if (bVar2 == 0) {
        return 0;
      }
      pIVar1 = (this->fields)._list;
      if (pIVar1 != (IList *)0x0) {
        func_?(9,TypeInfo__System__Collections__IList,pIVar1,item);
        return bVar2;
      }
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
      pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
      if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
        pvVar4 = (void *)func_?(pvVar4);
      }
      bVar2 = func_?(6,pvVar4,pIVar3,item);
      return bVar2;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void System.Collections.ICollection.CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_ICollection_CopyTo
               (CollectionWrapper_1_System_Object_ *this,Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  pvVar1 = method->klass->rgctx_data[0x14].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  if (array == (Array *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_?(array,pvVar1);
    if (iVar2 == 0) {
      func_?(array,pvVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(this->klass->vtable).CopyTo_1.methodPtr)
            (this,iVar2,arrayIndex,(this->klass->vtable).CopyTo_1.method);
  return;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
         CollectionWrapper_1_System_Object__System_Collections_ICollection_get_SyncRoot
                   (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

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
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
CollectionWrapper_1_System_Object__System_Collections_IEnumerable_GetEnumerator
          (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IEnumerable);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      pIVar2 = (IEnumerator *)func_?(0,TypeInfo__System__Collections__IEnumerable,pIVar1);
      return pIVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__System_Collections_IList_Add
                  (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
            (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  if (value == (Object *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_?(value,pvVar1);
    if (iVar2 == 0) {
      func_?(value,pvVar1);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
  }
  (*(this->klass->vtable).Add_1.methodPtr)(this,iVar2,(this->klass->vtable).Add_1.method);
  iVar2 = (*(this->klass->vtable).get_Count_2.methodPtr)
                    (this,(this->klass->vtable).get_Count_2.method);
  return iVar2 + -1;
}


/* Boolean System.Collections.IList.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Contains
               (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                    (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
  if (cVar1 == '\0') {
    return 0;
  }
  pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  if (value == (Object *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = func_?(value,pvVar2);
    if (iVar3 == 0) {
      func_?(value,pvVar2);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  bVar5 = (*(this->klass->vtable).Contains_1.methodPtr)
                    (this,iVar3,(this->klass->vtable).Contains_1.method);
  return bVar5;
}


/* Int32 System.Collections.IList.IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__System_Collections_IList_IndexOf
                  (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    cVar1 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                      (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
    if (cVar1 == '\0') {
      return -1;
    }
    pIVar2 = (this->fields)._list;
    if (pIVar2 == (IList *)0x0) goto code_?;
    this_00 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((this_00[2].fields._remoteStackIndex & 0x10000) == 0) {
      this_00 = (Exception *)func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar3 = 0;
code_?:
      iVar4 = func_?(7,TypeInfo__System__Collections__IList,pIVar2,iVar3);
      return iVar4;
    }
    iVar3 = func_?(value,this_00);
    if (iVar3 != 0) goto code_?;
  }
  else {
    uVar5 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar5);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar5 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_IndexOf_System__Object_
                           );
    func_?(this_00,uVar5);
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* Void System.Collections.IList.Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Insert
               (CollectionWrapper_1_System_Object_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
    pIVar1 = (this->fields)._list;
    if (pIVar1 == (IList *)0x0) goto code_?;
    this_00 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((this_00[2].fields._remoteStackIndex & 0x10000) == 0) {
      this_00 = (Exception *)func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar2 = 0;
code_?:
      func_?(8,TypeInfo__System__Collections__IList,pIVar1,index,iVar2);
      return;
    }
    iVar2 = func_?(value,this_00);
    if (iVar2 != 0) goto code_?;
  }
  else {
    uVar3 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar3);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar3 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_Insert_int__System__Object_
                           );
    func_?(this_00,uVar3);
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Remove
               (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[0x11].method)->virtualMethodPointer)
                    (value,method->klass->rgctx_data[0x11].rgctxDataDummy);
  if (cVar1 != '\0') {
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (value == (Object *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(value,pvVar2);
      if (iVar3 == 0) {
        func_?(value,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(this->klass->vtable).Remove_1.methodPtr)(this,iVar3,(this->klass->vtable).Remove_1.method);
  }
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_RemoveAt
               (CollectionWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
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
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_RemoveAt_int_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean System.Collections.IList.get_IsFixedSize() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_get_IsFixedSize
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(6,TypeInfo__System__Collections__IList,pIVar1);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
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

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
         CollectionWrapper_1_System_Object__System_Collections_IList_get_Item
                   (CollectionWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
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
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_get_Item_int_
                   );
    func_?(this_00);
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar4)();
  return pOVar2;
}


/* Void System.Collections.IList.set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_set_Item
               (CollectionWrapper_1_System_Object_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (value,method->klass->rgctx_data[0xc].rgctxDataDummy);
    pIVar1 = (this->fields)._list;
    if (pIVar1 == (IList *)0x0) goto code_?;
    this_00 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((this_00[2].fields._remoteStackIndex & 0x10000) == 0) {
      this_00 = (Exception *)func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar2 = 0;
code_?:
      func_?(1,TypeInfo__System__Collections__IList,pIVar1,index,iVar2);
      return;
    }
    iVar2 = func_?(value,this_00);
    if (iVar2 != 0) goto code_?;
  }
  else {
    uVar3 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar3);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Wrapped_ICollection_T__does_not_);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    uVar3 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_set_Item_int__System__Object_
                           );
    func_?(this_00,uVar3);
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void VerifyValueType(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__VerifyValueType(Object *value,MethodInfo *method)

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
                  MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__VerifyValueType_System__Object_
                 );
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CollectionWrapper`1[System.Object](ICollection`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object___ctor
               (CollectionWrapper_1_System_Object_ *this,ICollection_1_System_Object_ *list,
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


/* CollectionWrapper`1[System.Object](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object___ctor_1
               (CollectionWrapper_1_System_Object_ *this,IList *list,MethodInfo *method)

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
    pIVar2 = (ICollection_1_System_Object_ *)0x0;
  }
  else {
    pIVar2 = (ICollection_1_System_Object_ *)func_?(list);
    if (pIVar2 == (ICollection_1_System_Object_ *)0x0) goto code_?;
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__get_Count
                  (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__ICollection);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      iVar2 = func_?(1,TypeInfo__System__Collections__ICollection,pIVar1);
      return iVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
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

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__get_IsReadOnly
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._list;
    if (pIVar1 != (IList *)0x0) {
      bVar2 = func_?(5,TypeInfo__System__Collections__IList,pIVar1);
      return bVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericCollection;
    if (pIVar3 != (ICollection_1_System_Object_ *)0x0) {
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

