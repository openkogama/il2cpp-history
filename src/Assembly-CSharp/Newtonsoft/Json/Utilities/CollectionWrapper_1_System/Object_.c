
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Add
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      func_?(4,TypeInfo__System__Collections__IList,pIVar2,item);
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
  func_?(2,iVar4,pIVar1,item);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Clear
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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


/* Boolean Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Contains
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
    pIVar2 = (this->fields)._list;
    if (pIVar2 != (IList *)0x0) {
      bVar3 = func_?(6,TypeInfo__System__Collections__IList,pIVar2,item);
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
  bVar3 = func_?(4,iVar5,pIVar1,item);
  return bVar3;
}


/* Void CopyTo(Object[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__CopyTo
               (CollectionWrapper_1_System_Object_ *this,Object__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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
  iVar4 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  func_?(5,iVar4,pIVar1,array,arrayIndex);
  return;
}


/* Boolean IsCompatibleObject(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__IsCompatibleObject(Object *value,MethodInfo *method)

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


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__Remove
               (CollectionWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 != (ICollection_1_System_Object_ *)0x0) {
    iVar2 = **(int **)(method->name + 0x60);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(6,iVar2,pIVar1,item);
    return bVar3;
  }
  pIVar4 = (this->fields)._list;
  if (pIVar4 != (IList *)0x0) {
    bVar3 = func_?(6,TypeInfo__System__Collections__IList,pIVar4,item);
    if (bVar3 != 0) {
      pIVar4 = (this->fields)._list;
      if (pIVar4 == (IList *)0x0) goto code_?;
      func_?(9,TypeInfo__System__Collections__IList,pIVar4,item);
    }
    return bVar3;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Object System.Collections.ICollection.get_SyncRoot() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
         CollectionWrapper_1_System_Object__System_Collections_ICollection_get_SyncRoot
                   (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

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
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
CollectionWrapper_1_System_Object__System_Collections_IEnumerable_GetEnumerator
          (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__System_Collections_IList_Add
                  (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
  (*(code *)*puVar1)(value,puVar1);
  if (this != (CollectionWrapper_1_System_Object_ *)0x0) {
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value == (Object *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?(value,method);
      if (iVar2 == 0) goto code_?;
    }
    (*(code *)(this->klass->vtable).Add_1.method)
              (this,iVar2,(this->klass->vtable).Clear_2.methodPtr);
    iVar2 = (*(code *)(this->klass->vtable).get_Count_2.method)
                      (this,(this->klass->vtable).get_IsReadOnly_2.methodPtr);
    return iVar2 + -1;
  }
  func_?(0);
code_?:
  func_?(value,method);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean System.Collections.IList.Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Contains
               (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  cVar2 = (*(code *)*puVar1)(value,puVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  if (this != (CollectionWrapper_1_System_Object_ *)0x0) {
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value == (Object *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(value,method);
      if (iVar3 == 0) goto code_?;
    }
    bVar4 = (*(code *)(this->klass->vtable).Contains_1.method)
                      (this,iVar3,(this->klass->vtable).CopyTo_1.methodPtr);
    return bVar4;
  }
  func_?(0);
code_?:
  func_?(value,method);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Int32 System.Collections.IList.IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__System_Collections_IList_IndexOf
                  (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
    cVar2 = (*(code *)*puVar1)(value,puVar1);
    if (cVar2 == '\0') {
      return -1;
    }
    pIVar3 = (this->fields)._list;
    if (pIVar3 == (IList *)0x0) goto code_?;
    this_00 = *(IsolatedStorageException **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)this_00[3].fields._._remoteStackTraceString & 0x10000) == 0) {
      func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar4 = 0;
code_?:
      iVar5 = func_?(7,TypeInfo__System__Collections__IList,pIVar3,iVar4);
      return iVar5;
    }
    iVar4 = func_?(value,this_00);
    if (iVar4 != 0) goto code_?;
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_IndexOf_System__Object_
                   );
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  iVar5 = (*pcVar6)();
  return iVar5;
}


/* Void System.Collections.IList.Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Insert
               (CollectionWrapper_1_System_Object_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar1)(value,puVar1);
    pIVar2 = (this->fields)._list;
    if (pIVar2 == (IList *)0x0) goto code_?;
    this_00 = *(IsolatedStorageException **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)this_00[3].fields._._remoteStackTraceString & 0x10000) == 0) {
      func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar3 = 0;
code_?:
      func_?(8,TypeInfo__System__Collections__IList,pIVar2,index,iVar3);
      return;
    }
    iVar3 = func_?(value,this_00);
    if (iVar3 != 0) goto code_?;
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_Insert_int__System__Object_
                   );
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void System.Collections.IList.Remove(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_Remove
               (CollectionWrapper_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  cVar2 = (*(code *)*puVar1)(value,puVar1);
  if (cVar2 != '\0') {
    if (this == (CollectionWrapper_1_System_Object_ *)0x0) {
      func_?(0);
code_?:
      func_?(value,method);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    method = *(MethodInfo **)(*(int *)(method->name + 0x60) + 4);
    if ((method[3].parameters_count & 1) == 0) {
      func_?(method);
    }
    if (value == (Object *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(value,method);
      if (iVar4 == 0) goto code_?;
    }
    (*(code *)(this->klass->vtable).Remove_1.method)
              (this,iVar4,(this->klass->vtable).GetEnumerator_1.methodPtr);
  }
  return;
}


/* Void System.Collections.IList.RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_RemoveAt
               (CollectionWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_get_IsFixedSize
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
         CollectionWrapper_1_System_Object__System_Collections_IList_get_Item
                   (CollectionWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
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

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__System_Collections_IList_set_Item
               (CollectionWrapper_1_System_Object_ *this,int32_t index,Object *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._genericCollection == (ICollection_1_System_Object_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    (*(code *)*puVar1)(value,puVar1);
    pIVar2 = (this->fields)._list;
    if (pIVar2 == (IList *)0x0) goto code_?;
    this_00 = *(IsolatedStorageException **)(*(int *)(method->name + 0x60) + 4);
    if (((uint)this_00[3].fields._._remoteStackTraceString & 0x10000) == 0) {
      func_?(this_00);
    }
    if (value == (Object *)0x0) {
      iVar3 = 0;
code_?:
      func_?(3,TypeInfo__System__Collections__IList,pIVar2,index,iVar3);
      return;
    }
    iVar3 = func_?(value,this_00);
    if (iVar3 != 0) goto code_?;
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1
              (this_00,StringLiteral_Wrapped_ICollection_T__does_not_,(MethodInfo *)0x0);
    func_?(this_00,0,
                    MethodInfo__Newtonsoft__Json__Utilities__CollectionWrapper<System::Object>__System_Collections_IList_set_Item_int__System__Object_
                   );
    value = unaff_EDI;
  }
  func_?(value,this_00);
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void VerifyValueType(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__VerifyValueType(Object *value,MethodInfo *method)

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


/* CollectionWrapper`1[System.Object](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object___ctor
               (CollectionWrapper_1_System_Object_ *this,IList *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this == (CollectionWrapper_1_System_Object_ *)0x0) {
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
      (this->fields)._genericCollection = (ICollection_1_System_Object_ *)0x0;
      return;
    }
    pIVar2 = (ICollection_1_System_Object_ *)func_?(list);
    if (pIVar2 != (ICollection_1_System_Object_ *)0x0) {
      (this->fields)._genericCollection = pIVar2;
      return;
    }
  }
  func_?(list);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CollectionWrapper`1[System.Object](ICollection`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object___ctor_1
               (CollectionWrapper_1_System_Object_ *this,ICollection_1_System_Object_ *list,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (CollectionWrapper_1_System_Object_ *)0x0) {
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

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
        CollectionWrapper_1_System_Object__get_Count
                  (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::CollectionWrapper`1[System::Object]::
     CollectionWrapper_1_System_Object__get_IsReadOnly
               (CollectionWrapper_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericCollection;
  if (pIVar1 == (ICollection_1_System_Object_ *)0x0) {
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

