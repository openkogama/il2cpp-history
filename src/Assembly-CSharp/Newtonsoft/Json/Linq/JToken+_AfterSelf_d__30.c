
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<AfterSelf>d__30::
     JToken_AfterSelf_d_30_MoveNext(JToken_AfterSelf_d_30 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pJVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (pJVar2 == (JToken *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    if ((pJVar2->fields)._parent == (JContainer *)0x0) {
      return 0;
    }
    pJVar2 = (pJVar2->fields)._next;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pJVar2 = (this->fields)._o_5__2;
    (this->fields).__1__state = -1;
    if (pJVar2 == (JToken *)0x0) goto code_?;
    pJVar2 = (pJVar2->fields)._next;
  }
  (this->fields)._o_5__2 = pJVar2;
  func_?(&(this->fields)._o_5__2,pJVar2);
  if ((this->fields)._o_5__2 == (JToken *)0x0) {
    (this->fields)._o_5__2 = (JToken *)0x0;
    func_?(&(this->fields)._o_5__2,0);
    return 0;
  }
  pJVar2 = (this->fields)._o_5__2;
  (this->fields).__2__current = pJVar2;
  func_?(&(this->fields).__2__current,pJVar2);
  (this->fields).__1__state = 1;
  return 1;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<AfterSelf>d__30::
JToken_AfterSelf_d_30_System_Collections_IEnumerable_GetEnumerator
          (JToken_AfterSelf_d_30 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_d__30);
    cRam_? = '\x01';
  }
  if ((this->fields).__1__state == -2) {
    iVar1 = (this->fields).__l__initialThreadId;
    iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                      ((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (this->fields).__1__state = 0;
      return (IEnumerator *)this;
    }
  }
  value = (Object *)func_?(TypeInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_d__30);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    pOVar3 = (Object__Class *)
             mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0);
    value[2].klass = pOVar3;
    pJVar4 = (this->fields).__4__this;
    value[2].monitor = (MonitorData *)pJVar4;
    func_?(&value[2].monitor,pJVar4);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pIVar6 = (IEnumerator *)(*pcVar5)();
  return pIVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JToken+<AfterSelf>d__30::
     JToken_AfterSelf_d_30_System_Collections_IEnumerator_Reset
               (JToken_AfterSelf_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JToken___AfterSelf_d__30__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

