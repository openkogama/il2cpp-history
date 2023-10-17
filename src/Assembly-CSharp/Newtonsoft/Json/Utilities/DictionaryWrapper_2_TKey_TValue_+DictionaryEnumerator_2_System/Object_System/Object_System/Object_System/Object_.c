
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::Object,System::
     Object,System::Object]::
     DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__MoveNext
               (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
                &TypeInfo__System__Collections__IEnumerator;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = this->_e;
  if (pIStack_1 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    pIStack_2 = TypeInfo__System__Collections__IEnumerator;
    uStack_3 = 0;
    bVar4 = func_?();
    return bVar4;
  }
  pIStack_1 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::Object,System::
     Object,System::Object]::
     DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__Reset
               (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)
                &TypeInfo__System__Collections__IEnumerator;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = this->_e;
  if (pIStack_1 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    pIStack_2 = TypeInfo__System__Collections__IEnumerator;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System.Object,System.Object,System.Object,System.Object](IEnumerator`1[KeyValuePair`2[System.Object,System.Object]])
    */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::Object,System::
     Object,System::Object]::
     DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___ctor
               (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                *this,IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_e);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull((Object *)e,StringLiteral_e,(MethodInfo *)0x0);
  this->_e = e;
  func_?(this,e);
  return;
}


/* Object get_Current() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::
         Object,System::Object,System::Object]::
         DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__get_Current
                   (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                    *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__DictionaryEntry);
    cRam_? = '\x01';
  }
  pIVar1 = this->_e;
  if (pIVar1 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    pOVar4 = (Object *)func_?(0,pvVar3,pIVar1);
    if (method->klass->initialized_and_no_error == 0) {
      func_?(method->klass);
    }
    pIVar1 = this->_e;
    if (pIVar1 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar3 = pIVar2->rgctx_data[2].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      func_?(0,pvVar3,pIVar1);
      if (method->klass->initialized_and_no_error == 0) {
        func_?(method->klass);
      }
      VStack_5.Item1 = (Object *)0x0;
      VStack_5.Item2 = (Object *)0x0;
      mscorlib.dll::System::ValueTuple`2[Object,Object]::ValueTuple_2_Object_Object___ctor
                (&VStack_5,pOVar4,item2,(MethodInfo *)0x0);
      pOStack_6 = VStack_5.Item1;
      pOStack_7 = VStack_5.Item2;
      pOVar4 = (Object *)func_?(TypeInfo__System__Collections__DictionaryEntry,&pOStack_6)
      ;
      return pOVar4;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar8)();
  return pOVar4;
}


/* DictionaryEntry get_Entry() */

DictionaryEntry
Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::Object,System::
Object,System::Object]::
DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__get_Entry
          (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
           *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    IStack_1.rgctxDataDummy = &TypeInfo__System__Collections__DictionaryEntry;
    pDStack_2 = (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                 *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  IStack_1 = (Il2CppRGCTXData)method->klass;
  if (IStack_1->initialized_and_no_error == 0) {
    pDStack_2 = (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                 *)&UNK_?;
    IStack_1.rgctxDataDummy = (void *)func_?();
  }
  IStack_1 = *(IStack_1.klass)->rgctx_data;
  pDStack_2 = this;
  piVar3 = (int *)func_?();
  if (piVar3 != (int *)0x0) {
    if (*(Il2CppClass **)(*piVar3 + 0x20) ==
        (TypeInfo__System__Collections__DictionaryEntry->_0).element_class) {
      pDStack_2 = (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                   *)&UNK_?;
      IStack_1 = (Il2CppRGCTXData)piVar3;
      pDVar4 = (DictionaryEntry *)func_?();
      return *pDVar4;
    }
    IStack_1 = (Il2CppRGCTXData)TypeInfo__System__Collections__DictionaryEntry;
    pDStack_2 = (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                 *)piVar3;
    func_?();
    pcVar5 = (code *)swi(3);
    DVar6 = (DictionaryEntry)(*pcVar5)();
    return DVar6;
  }
  IStack_1 = (Il2CppRGCTXData)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  DVar6 = (DictionaryEntry)(*pcVar5)();
  return DVar6;
}


/* Object get_Key() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::
         Object,System::Object,System::Object]::
         DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__get_Key
                   (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                    *this,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pOVar2 = (Object *)func_?(this,pIVar1->rgctx_data[1].rgctxDataDummy);
  return pOVar2;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::
         Object,System::Object,System::Object]::
         DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__get_Value
                   (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                    *this,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (pIVar1->initialized_and_no_error == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  func_?(this,pIVar1->rgctx_data[1].rgctxDataDummy);
  return extraout_EDX;
}

