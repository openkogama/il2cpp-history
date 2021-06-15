
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::Object,System::
     Object,System::Object]::
     DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__MoveNext
               (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2]._e != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    bVar1 = func_?(1,TypeInfo__System__Collections__IEnumerator,this[2]._e);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this[2]._e != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    func_?(2,TypeInfo__System__Collections__IEnumerator,this[2]._e);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ValidationUtils::ValidationUtils_ArgumentNotNull((Object *)e,StringLiteral_e,(MethodInfo *)0x0);
  this[2]._e = e;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = this[2]._e;
  uStack_3 = 0;
  if (pIVar2 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    pcVar4 = method->name;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    iVar5 = *(int *)(*(int *)(pcVar4 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
      func_?(iVar5);
    }
    uStack_1 = func_?(0,iVar5,pIVar2);
    pcVar4 = method->name;
    if ((pcVar4[0xbe] & 1U) == 0) {
      func_?(pcVar4);
    }
    uVar6 = func_?(&uStack_1,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0xc));
    pIVar2 = this[2]._e;
    if (pIVar2 != (IEnumerator_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
      pcVar4 = method->name;
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      iVar5 = *(int *)(*(int *)(pcVar4 + 0x60) + 8);
      if ((*(byte *)(iVar5 + 0xbe) & 1) == 0) {
        func_?(iVar5);
      }
      uStack_3 = func_?(0,iVar5,pIVar2);
      pcVar4 = method->name;
      if ((pcVar4[0xbe] & 1U) == 0) {
        func_?(pcVar4);
      }
      uVar7 = func_?(&uStack_3,*(undefined4 *)(*(int *)(pcVar4 + 0x60) + 0x14));
      uStack_8 = 0;
      func_?(&uStack_8,uVar6,uVar7,0);
      uStack_9 = (undefined4)uStack_8;
      uStack_10 = uStack_8._4_4_;
      pOVar11 = (Object *)func_?(TypeInfo__System__Collections__DictionaryEntry,&uStack_9);
      return pOVar11;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  pOVar11 = (Object *)(*pcVar12)();
  return pOVar11;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pcVar1 = method->name;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  piVar2 = (int *)func_?(this + 2,**(undefined4 **)(pcVar1 + 0x60));
  uVar3 = CONCAT44(TypeInfo__System__Collections__DictionaryEntry,piVar2);
  if (piVar2 == (int *)0x0) {
    uVar3 = func_?(0);
  }
  else if (*(Il2CppClass **)(*piVar2 + 0x20) ==
           (TypeInfo__System__Collections__DictionaryEntry->_0).element_class) {
    pDVar4 = (DictionaryEntry *)func_?(piVar2);
    return *pDVar4;
  }
  func_?(uVar3);
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
  pcVar1 = method->name;
  uStack_2 = 0;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  uStack_2 = func_?(this + 2,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 4));
  pOVar3 = (Object *)func_?(&uStack_2,0);
  return pOVar3;
}


/* Object get_Value() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         DictionaryWrapper`2[TKey,TValue]+DictionaryEnumerator`2[System::Object,System::
         Object,System::Object,System::Object]::
         DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object__get_Value
                   (DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
                    *this,MethodInfo *method)

{
  pcVar1 = method->name;
  uStack_2 = 0;
  if ((pcVar1[0xbe] & 1U) == 0) {
    func_?(pcVar1);
  }
  uStack_2 = func_?(this + 2,*(undefined4 *)(*(int *)(pcVar1 + 0x60) + 4));
  pOVar3 = (Object *)func_?(&uStack_2,0);
  return pOVar3;
}

