
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
     JContainer_Descendants_d_16_MoveNext(JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer);
    cRam_? = '\x01';
  }
  uStack_1 = 1;
  iVar4 = (this->fields).__1__state;
  pJVar5 = (this->fields).__4__this;
  if (iVar4 == 0) {
    (this->fields).__1__state = -1;
    if (pJVar5 == (JContainer *)0x0) goto code_?;
    iVar4 = (*(pJVar5->klass->vtable).__unknown_5.methodPtr)
                      (pJVar5,(pJVar5->klass->vtable).__unknown_5.method);
    if (iVar4 == 0) goto code_?;
    pIVar6 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
             func_?(0,
                             TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                             ,iVar4);
    (this->fields).__7__wrap1 = pIVar6;
    func_?(&(this->fields).__7__wrap1,pIVar6);
    (this->fields).__1__state = -3;
  }
  else {
    if (iVar4 == 1) {
      (this->fields).__1__state = -3;
      pJVar7 = (this->fields)._o_5__3;
      if (pJVar7 != (JToken *)0x0) {
        unaff_ESI = TypeInfo__Newtonsoft__Json__Linq__JContainer;
        if (((TypeInfo__Newtonsoft__Json__Linq__JContainer->_1).typeHierarchyDepth <=
             (pJVar7->klass->_1).typeHierarchyDepth) &&
           ((JContainer__Class *)
            (pJVar7->klass->_1).typeHierarchy
            [(TypeInfo__Newtonsoft__Json__Linq__JContainer->_1).typeHierarchyDepth - 1] ==
            TypeInfo__Newtonsoft__Json__Linq__JContainer)) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16);
            cRam_? = '\x01';
          }
          unaff_ESI = (JContainer__Class *)
                      func_?(
                                     TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16
                                     );
          if (unaff_ESI == (JContainer__Class *)0x0) goto code_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)unaff_ESI,ExceptionArgument__Enum_obj,unaff_EDI);
          (unaff_ESI->_0).name = (char *)0xfffffffe;
          iVar8 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                            ((MethodInfo *)0x0);
          (unaff_ESI->_0).byval_arg.data.__klassIndex = iVar8;
          *(JToken **)&(unaff_ESI->_0).byval_arg.attrs = pJVar7;
          func_?();
          pIVar6 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)func_?();
          (this->fields).__7__wrap3 = pIVar6;
          func_?();
          (this->fields).__1__state = -4;
          goto code_?;
        }
      }
    }
    else {
      if (iVar4 != 2) goto code_?;
      (this->fields).__1__state = -4;
code_?:
      pIVar6 = (this->fields).__7__wrap3;
      if (pIVar6 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) goto code_?;
      cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
      if (cVar9 != '\0') {
        pIVar6 = (this->fields).__7__wrap3;
        if (pIVar6 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
          pJVar7 = (JToken *)
                   func_?(0,
                                   TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                                   ,pIVar6);
          (this->fields).__2__current = pJVar7;
          func_?(&(this->fields).__2__current,pJVar7);
          (this->fields).__1__state = 2;
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        goto code_?;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__IDisposable);
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -3;
      if ((this->fields).__7__wrap3 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap3);
      }
      (this->fields).__7__wrap3 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0;
      func_?(&(this->fields).__7__wrap3,0);
      unaff_ESI = (JContainer__Class *)this;
    }
    (this->fields)._o_5__3 = (JToken *)0x0;
    func_?(&(this->fields)._o_5__3,0);
  }
  pIVar6 = (this->fields).__7__wrap1;
  if (pIVar6 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    cVar9 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar6);
    if (cVar9 == '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__IDisposable);
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -1;
      if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
      }
      (this->fields).__7__wrap1 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0;
      func_?(&(this->fields).__7__wrap1,0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    pIVar6 = (this->fields).__7__wrap1;
    if (pIVar6 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      pJVar7 = (JToken *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,pIVar6);
      (this->fields)._o_5__3 = pJVar7;
      func_?(&(this->fields)._o_5__3,pJVar7);
      pJVar7 = (this->fields)._o_5__3;
      (this->fields).__2__current = pJVar7;
      func_?(&(this->fields).__2__current,pJVar7);
      (this->fields).__1__state = 1;
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  }
code_?:
  func_?();
  func_?();
  func_?(unaff_ESI);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
JContainer_Descendants_d_16_System_Collections_IEnumerable_GetEnumerator
          (JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16);
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
  value = (Object *)
          func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16);
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

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
     JContainer_Descendants_d_16_System_Collections_IEnumerator_Reset
               (JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__JContainer___Descendants_d__16__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
     JContainer_Descendants_d_16_System_IDisposable_Dispose
               (JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  iVar3 = (this->fields).__1__state;
  if ((iVar3 + 4U < 2) || (iVar3 - 1U < 2)) {
    if ((iVar3 == -4) || (iVar3 == 2)) {
      uStack_4 = 1;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__IDisposable);
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -3;
      if ((this->fields).__7__wrap3 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap3);
      }
      uStack_4 = 0xffffffff;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__IDisposable);
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -1;
      if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
        *unaff_FS_OFFSET = uStack_2;
        return;
      }
    }
    else {
      uStack_4 = 0xffffffff;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__IDisposable);
        cRam_? = '\x01';
      }
      (this->fields).__1__state = -1;
      if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
        *unaff_FS_OFFSET = uStack_2;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
     JContainer_Descendants_d_16___m__Finally1(JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  if ((this->fields).__7__wrap1 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
  }
  return;
}


/* Void <>m__Finally2() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>d__16::
     JContainer_Descendants_d_16___m__Finally2(JContainer_Descendants_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -3;
  if ((this->fields).__7__wrap3 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap3);
  }
  return;
}

