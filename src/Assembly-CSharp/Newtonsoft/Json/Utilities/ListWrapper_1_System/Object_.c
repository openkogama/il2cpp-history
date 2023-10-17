
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Add
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (this,item,method->klass->rgctx_data[0xc].rgctxDataDummy);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 != (IList_1_System_Object_ *)0x0) {
    pIVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    uVar3 = 0;
    uVar4 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar4 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar3].interfaceType == pIVar2) {
          pVVar5 = &(pIVar1->klass->vtable).IndexOf + pIVar1->klass->interfaceOffsets[uVar3].offset;
          (*pVVar5->methodPtr)(pIVar1,item,pVVar5->method);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(pIVar1,pIVar2,2);
    (*(code *)*puVar6)(pIVar1,item,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Clear(ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0xe].method)->virtualMethodPointer)
              (this,method->klass->rgctx_data[0xe].rgctxDataDummy);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 != (IList_1_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(3,pvVar2,pIVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Contains
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    bVar1 = (*(method->klass->rgctx_data[0x10].method)->virtualMethodPointer)
                      (this,item,method->klass->rgctx_data[0x10].rgctxDataDummy);
    return bVar1;
  }
  pIVar2 = (this->fields)._genericList;
  if (pIVar2 != (IList_1_System_Object_ *)0x0) {
    pvVar3 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    bVar1 = func_?(4,pvVar3,pIVar2,item);
    return bVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void CopyTo(Object[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__CopyTo
               (ListWrapper_1_System_Object_ *this,Object__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[0x12].method)->virtualMethodPointer)
              (this,array,arrayIndex,method->klass->rgctx_data[0x12].rgctxDataDummy);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = method->klass->rgctx_data[10].rgctxDataDummy;
  if (pIVar3->initialized_and_no_error == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  uVar4 = 0;
  uVar5 = (pIVar1->klass->_1).interface_offsets_count;
  if (uVar5 != 0) {
    do {
      if (pIVar1->klass->interfaceOffsets[uVar4].interfaceType == pIVar3) {
        ppIVar6 = &pIVar1->klass[1]._0.image + pIVar1->klass->interfaceOffsets[uVar4].offset * 2;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppIVar6 = (Il2CppImage **)func_?(pIVar1,pIVar3,5);
code_?:
  (*(code *)*ppIVar6)(pIVar1,array,arrayIndex,ppIVar6[1]);
  return;
}


/* IEnumerator`1[System.Object] GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
ListWrapper_1_System_Object__GetEnumerator(ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    pIVar1 = (IEnumerator_1_System_Object_ *)
             (*(method->klass->rgctx_data[0x1b].method)->virtualMethodPointer)
                       (this,method->klass->rgctx_data[0x1b].rgctxDataDummy);
    return pIVar1;
  }
  pIVar2 = (this->fields)._genericList;
  if (pIVar2 != (IList_1_System_Object_ *)0x0) {
    pvVar3 = method->klass->rgctx_data[0x19].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pIVar1 = (IEnumerator_1_System_Object_ *)func_?(0,pvVar3,pIVar2);
    return pIVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar1 = (IEnumerator_1_System_Object_ *)(*pcVar4)();
  return pIVar1;
}


/* Int32 IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
        ListWrapper_1_System_Object__IndexOf
                  (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    iVar1 = func_?(7,TypeInfo__System__Collections__IList,this,item);
    return iVar1;
  }
  pIVar2 = (this->fields)._genericList;
  if (pIVar2 != (IList_1_System_Object_ *)0x0) {
    pvVar3 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar1 = func_?(2,pvVar3,pIVar2,item);
    return iVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Void Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Insert
               (ListWrapper_1_System_Object_ *this,int32_t index,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    func_?(8,TypeInfo__System__Collections__IList,this,index,item);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 != (IList_1_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(3,pvVar2,pIVar1,index,item);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Remove
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if ((this->fields)._genericList != (IList_1_System_Object_ *)0x0) {
    pIVar1 = (this->fields)._genericList;
    if (pIVar1 != (IList_1_System_Object_ *)0x0) {
      pvVar2 = method->klass->rgctx_data[10].rgctxDataDummy;
      if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
        pvVar2 = (void *)func_?(pvVar2);
      }
      bVar3 = func_?(6,pvVar2,pIVar1,item);
      return bVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  bVar3 = (*(method->klass->rgctx_data[0x10].method)->virtualMethodPointer)
                    (this,item,method->klass->rgctx_data[0x10].rgctxDataDummy);
  if (bVar3 == 0) {
    return 0;
  }
  (*(method->klass->rgctx_data[0x18].method)->virtualMethodPointer)
            (this,item,method->klass->rgctx_data[0x18].rgctxDataDummy);
  return bVar3;
}


/* Void RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__RemoveAt
               (ListWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    func_?(10,TypeInfo__System__Collections__IList,this,index);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 != (IList_1_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(4,pvVar2,pIVar1,index);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ListWrapper`1[System.Object](IList`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object___ctor
               (ListWrapper_1_System_Object_ *this,IList_1_System_Object_ *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
            (this,list,method->klass->rgctx_data[3].rgctxDataDummy);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  (this->fields)._genericList = list;
  func_?(&(this->fields)._genericList,list);
  return;
}


/* ListWrapper`1[System.Object](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object___ctor_1
               (ListWrapper_1_System_Object_ *this,IList *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_list);
    cRam_? = '\x01';
  }
  (*method->klass->rgctx_data->method->virtualMethodPointer)
            (this,list,method->klass->rgctx_data->rgctxDataDummy);
  ValidationUtils::ValidationUtils_ArgumentNotNull
            ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  iVar2 = func_?(list,pvVar1);
  if (iVar2 != 0) {
    pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    if (list == (IList *)0x0) {
      pIVar3 = (IList_1_System_Object_ *)0x0;
    }
    else {
      pIVar3 = (IList_1_System_Object_ *)func_?(list,pvVar1);
      if (pIVar3 == (IList_1_System_Object_ *)0x0) goto code_?;
    }
    (this->fields)._genericList = pIVar3;
    pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    if (list == (IList *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?(list,pvVar1);
      if (iVar2 == 0) {
code_?:
        func_?(list,pvVar1);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_?(&(this->fields)._genericList,iVar2);
  }
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
        ListWrapper_1_System_Object__get_Count
                  (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    iVar1 = (*(method->klass->rgctx_data[0x14].method)->virtualMethodPointer)
                      (this,method->klass->rgctx_data[0x14].rgctxDataDummy);
    return iVar1;
  }
  pIVar2 = (this->fields)._genericList;
  if (pIVar2 != (IList_1_System_Object_ *)0x0) {
    pvVar3 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar1 = func_?(0,pvVar3,pIVar2);
    return iVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__get_IsReadOnly
               (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    bVar1 = (*(method->klass->rgctx_data[0x16].method)->virtualMethodPointer)
                      (this,method->klass->rgctx_data[0x16].rgctxDataDummy);
    return bVar1;
  }
  pIVar2 = (this->fields)._genericList;
  if (pIVar2 != (IList_1_System_Object_ *)0x0) {
    pvVar3 = method->klass->rgctx_data[10].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    bVar1 = func_?(1,pvVar3,pIVar2);
    return bVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Object get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
         ListWrapper_1_System_Object__get_Item
                   (ListWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    unaff_EDI = func_?(0,TypeInfo__System__Collections__IList,this,index);
    pvVar1 = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    if (unaff_EDI == 0) {
      return (Object *)0x0;
    }
    pOVar2 = (Object *)func_?(unaff_EDI,pvVar1);
    if (pOVar2 != (Object *)0x0) {
      return pOVar2;
    }
  }
  else {
    pIVar3 = (this->fields)._genericList;
    if (pIVar3 != (IList_1_System_Object_ *)0x0) {
      pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
        pvVar1 = (void *)func_?(pvVar1);
      }
      pOVar2 = (Object *)func_?(0,pvVar1,pIVar3,index);
      return pOVar2;
    }
    func_?();
    pvVar1 = (void *)0x0;
  }
  func_?(unaff_EDI,pvVar1);
  pcVar4 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar4)();
  return pOVar2;
}


/* Object get_UnderlyingList() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
         ListWrapper_1_System_Object__get_UnderlyingList
                   (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    pOVar1 = (Object *)
             (*(method->klass->rgctx_data[0x1c].method)->virtualMethodPointer)
                       (this,method->klass->rgctx_data[0x1c].rgctxDataDummy);
    return pOVar1;
  }
  return (Object *)(this->fields)._genericList;
}


/* Void set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__set_Item
               (ListWrapper_1_System_Object_ *this,int32_t index,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IList);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericList == (IList_1_System_Object_ *)0x0) {
    func_?(1,TypeInfo__System__Collections__IList,this,index,value);
    return;
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 != (IList_1_System_Object_ *)0x0) {
    pvVar2 = method->klass->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    func_?(1,pvVar2,pIVar1,index,value);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

