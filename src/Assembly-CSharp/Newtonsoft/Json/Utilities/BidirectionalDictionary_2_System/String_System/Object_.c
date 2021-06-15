
/* Void Add(String, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     String,System::Object]::BidirectionalDictionary_2_System_String_System_Object__Add
               (BidirectionalDictionary_2_System_String_System_Object_ *this,String *first,
               Object *second,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._firstToSecond;
  if (pIVar1 != (IDictionary_2_System_String_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x24);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    cVar3 = func_?(1,iVar2,pIVar1,first);
    if (cVar3 != '\0') goto code_?;
    pIVar4 = (this->fields)._secondToFirst;
    if (pIVar4 != (IDictionary_2_System_Object_System_String_ *)0x0) {
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x28);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      cVar3 = func_?(1,iVar2,pIVar4,second);
      if (cVar3 != '\0') goto code_?;
      pIVar1 = (this->fields)._firstToSecond;
      if (pIVar1 != (IDictionary_2_System_String_System_Object_ *)0x0) {
        iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x24);
        if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
          func_?(iVar2);
        }
        func_?(0,iVar2,pIVar1,first,second);
        pIVar4 = (this->fields)._secondToFirst;
        if (pIVar4 != (IDictionary_2_System_Object_System_String_ *)0x0) {
          iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x28);
          if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
            func_?(iVar2);
          }
          func_?(0,iVar2,pIVar4,second,first);
          return;
        }
      }
    }
  }
  func_?(0);
code_?:
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,StringLiteral_Duplicate_first_or_second,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__BidirectionalDictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean TryGetByFirst(String, Object ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     String,System::Object]::BidirectionalDictionary_2_System_String_System_Object__TryGetByFirst
               (BidirectionalDictionary_2_System_String_System_Object_ *this,String *first,
               Object **second,MethodInfo *method)

{
  pIVar1 = (this->fields)._firstToSecond;
  if (pIVar1 != (IDictionary_2_System_String_System_Object_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x24);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(3,iVar2,pIVar1,first,second);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean TryGetBySecond(Object, String ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     String,System::Object]::BidirectionalDictionary_2_System_String_System_Object__TryGetBySecond
               (BidirectionalDictionary_2_System_String_System_Object_ *this,Object *second,
               String **first,MethodInfo *method)

{
  pIVar1 = (this->fields)._secondToFirst;
  if (pIVar1 != (IDictionary_2_System_Object_System_String_ *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x28);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    bVar3 = func_?(3,iVar2,pIVar1,second,first);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* BidirectionalDictionary`2[System.String,System.Object](IEqualityComparer`1[System.String],
   IEqualityComparer`1[System.Object]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::BidirectionalDictionary`2[System::
     String,System::Object]::BidirectionalDictionary_2_System_String_System_Object___ctor
               (BidirectionalDictionary_2_System_String_System_Object_ *this,
               IEqualityComparer_1_System_String_ *firstEqualityComparer,
               IEqualityComparer_1_System_Object_ *secondEqualityComparer,MethodInfo *method)

{
  if (this != (BidirectionalDictionary_2_System_String_System_Object_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0x14);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pIVar2 = (IDictionary_2_System_String_System_Object_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
    (*(code *)*puVar3)(pIVar2,firstEqualityComparer,puVar3);
    (this->fields)._firstToSecond = pIVar2;
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pIVar4 = (IDictionary_2_System_Object_System_String_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
    (*(code *)*puVar3)(pIVar4,secondEqualityComparer,puVar3);
    (this->fields)._secondToFirst = pIVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

