
/* Void Add(Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Add
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(2,iVar2,pIVar1,item);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Clear(ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c))();
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(3,iVar2,pIVar1);
  return;
}


/* Boolean Contains(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Contains
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x20))();
    return bVar2;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  bVar2 = func_?(4,iVar3,pIVar1,item);
  return bVar2;
}


/* Void CopyTo(Object[], Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__CopyTo
               (ListWrapper_1_System_Object_ *this,Object__Array *array,int32_t arrayIndex,
               MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x24))();
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(5,iVar2,pIVar1,array,arrayIndex);
  return;
}


/* IEnumerator`1[System.Object] GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
ListWrapper_1_System_Object__GetEnumerator(ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (IEnumerator_1_System_Object_ *)
             (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x38))();
    return pIVar2;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x34);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  pIVar2 = (IEnumerator_1_System_Object_ *)func_?(0,iVar3,pIVar1);
  return pIVar2;
}


/* Int32 IndexOf(Object) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
        ListWrapper_1_System_Object__IndexOf
                  (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    iVar2 = func_?(7,TypeInfo__System__Collections__IList,this,item);
    return iVar2;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  iVar2 = func_?(0,iVar3,pIVar1,item);
  return iVar2;
}


/* Void Insert(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Insert
               (ListWrapper_1_System_Object_ *this,int32_t index,Object *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    func_?(8,TypeInfo__System__Collections__IList,this,index,item);
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(1,iVar2,pIVar1,index,item);
  return;
}


/* Boolean Remove(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__Remove
               (ListWrapper_1_System_Object_ *this,Object *item,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
    bVar3 = (*(code *)*puVar2)(this,item,puVar2);
    if (bVar3 != 0) {
      puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x30);
      (*(code *)*puVar2)(this,item,puVar2);
    }
    return bVar3;
  }
  iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
    func_?(iVar4);
  }
  bVar3 = func_?(6,iVar4,pIVar1,item);
  return bVar3;
}


/* Void RemoveAt(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__RemoveAt
               (ListWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    func_?(10,TypeInfo__System__Collections__IList,this,index);
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(2,iVar2,pIVar1,index);
  return;
}


/* ListWrapper`1[System.Object](IList) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object___ctor
               (ListWrapper_1_System_Object_ *this,IList *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (ListWrapper_1_System_Object_ *)0x0) {
    (**(code **)**(undefined4 **)(method->name + 0x60))
              (this,list,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    iVar1 = func_?(list,iVar1);
    if (iVar1 != 0) {
      unaff_EDI = *(int *)(*(int *)(method->name + 0x60) + 8);
      if ((*(byte *)(unaff_EDI + 0xbe) & 1) == 0) {
        func_?(unaff_EDI);
      }
      if (list == (IList *)0x0) {
        (this->fields)._genericList = (IList_1_System_Object_ *)0x0;
        return;
      }
      pIVar2 = (IList_1_System_Object_ *)func_?(list,unaff_EDI);
      if (pIVar2 == (IList_1_System_Object_ *)0x0) goto code_?;
      (this->fields)._genericList = pIVar2;
    }
    return;
  }
  func_?(0);
  list = unaff_ESI;
code_?:
  func_?(list,unaff_EDI);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ListWrapper`1[System.Object](IList`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object___ctor_1
               (ListWrapper_1_System_Object_ *this,IList_1_System_Object_ *list,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (ListWrapper_1_System_Object_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    (*(code *)*puVar1)(this,list,puVar1);
    ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)list,StringLiteral_list,(MethodInfo *)0x0);
    (this->fields)._genericList = list;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
        ListWrapper_1_System_Object__get_Count
                  (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x28))();
    return iVar2;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  iVar2 = func_?(0,iVar3,pIVar1);
  return iVar2;
}


/* Boolean get_IsReadOnly() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__get_IsReadOnly
               (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x2c))();
    return bVar2;
  }
  iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
  if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
    func_?(iVar3);
  }
  bVar2 = func_?(1,iVar3,pIVar1);
  return bVar2;
}


/* Object get_Item(Int32) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
         ListWrapper_1_System_Object__get_Item
                   (ListWrapper_1_System_Object_ *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    iVar2 = func_?(2,TypeInfo__System__Collections__IList,this,index);
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    if (iVar2 == 0) {
      return (Object *)0x0;
    }
    pOVar4 = (Object *)func_?(iVar2,iVar3);
    if (pOVar4 == (Object *)0x0) {
      func_?(iVar2,iVar3);
      pcVar5 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar5)();
      return pOVar4;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
      func_?(iVar3);
    }
    pOVar4 = (Object *)func_?(3,iVar3,pIVar1,index);
  }
  return pOVar4;
}


/* Object get_UnderlyingList() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
         ListWrapper_1_System_Object__get_UnderlyingList
                   (ListWrapper_1_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pOVar2 = (Object *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x3c))();
    return pOVar2;
  }
  return (Object *)pIVar1;
}


/* Void set_Item(Int32, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ListWrapper`1[System::Object]::
     ListWrapper_1_System_Object__set_Item
               (ListWrapper_1_System_Object_ *this,int32_t index,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._genericList;
  if (pIVar1 == (IList_1_System_Object_ *)0x0) {
    func_?(3,TypeInfo__System__Collections__IList,this,index,value);
    return;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  func_?(4,iVar2,pIVar1,index,value);
  return;
}

