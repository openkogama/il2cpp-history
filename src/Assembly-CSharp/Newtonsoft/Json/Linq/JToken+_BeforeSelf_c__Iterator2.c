
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<BeforeSelf>c__Iterator2::
     JToken_BeforeSelf_c_Iterator2_MoveNext(JToken_BeforeSelf_c_Iterator2 *this,MethodInfo *method)

{
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pJVar2 = (this->fields)._this;
    if ((pJVar2 == (JToken *)0x0) ||
       (pJVar3 = (pJVar2->fields)._parent, pJVar3 == (JContainer *)0x0)) goto code_?;
    pJVar2 = (JToken *)
             (*(code *)(pJVar3->klass->vtable).get_First.method)
                       (pJVar3,(pJVar3->klass->vtable).get_Last.methodPtr);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pJVar2 = (this->fields)._o___1;
    if (pJVar2 == (JToken *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pJVar2 = (pJVar2->fields)._next;
  }
  (this->fields)._o___1 = pJVar2;
  if (pJVar2 == (this->fields)._this) {
    (this->fields)._PC = -1;
    return 0;
  }
  (this->fields)._current = pJVar2;
  if ((this->fields)._disposing == 0) {
    (this->fields)._PC = 1;
  }
  return 1;
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<BeforeSelf>c__Iterator2::
     JToken_BeforeSelf_c_Iterator2_Reset(JToken_BeforeSelf_c_Iterator2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator`1[Newtonsoft.Json.Linq.JToken]
   System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator() */

IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<BeforeSelf>c__Iterator2::
JToken_BeforeSelf_c_Iterator2_System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
          (JToken_BeforeSelf_c_Iterator2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___BeforeSelf_c__Iterator2;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).state = (int32_t)(this->fields)._this;
      return (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)this_00;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar2)();
    return pIVar3;
  }
  return (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)this;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<BeforeSelf>c__Iterator2::
JToken_BeforeSelf_c_Iterator2_System_Collections_IEnumerable_GetEnumerator
          (JToken_BeforeSelf_c_Iterator2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JToken___BeforeSelf_c__Iterator2;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).state = (int32_t)(this->fields)._this;
      return (IEnumerator *)this_00;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  return (IEnumerator *)this;
}

