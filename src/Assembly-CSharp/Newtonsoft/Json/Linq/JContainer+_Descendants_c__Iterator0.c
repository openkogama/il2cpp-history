
/* Void Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>c__Iterator0::
     JContainer_Descendants_c_Iterator0_Dispose
               (JContainer_Descendants_c_Iterator0 *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar4 = (this->fields)._PC;
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  if ((iVar4 != 0) && ((iVar4 == 1 || (iVar4 == 2)))) {
    if ((iVar4 != 1) && (iVar4 == 2)) {
      uStack_1 = 0;
      pIVar5 = (this->fields)._locvar1;
      if (pIVar5 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIVar5);
      }
    }
    uStack_1 = 0xffffffff;
    pIVar5 = (this->fields)._locvar0;
    if (pIVar5 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,pIVar5);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>c__Iterator0::
     JContainer_Descendants_c_Iterator0_MoveNext
               (JContainer_Descendants_c_Iterator0 *this,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar5 = -1;
  iVar6 = (this->fields)._PC;
  (this->fields)._PC = -1;
  bVar7 = false;
  if (iVar6 == 0) {
    pJVar8 = (this->fields)._this;
    if ((pJVar8 == (JContainer *)0x0) ||
       (iVar6 = (*(code *)(pJVar8->klass->vtable).__unknown_5.method)
                           (pJVar8,(pJVar8->klass->vtable).InsertItem.methodPtr), iVar6 == 0))
    goto code_?;
    pIVar9 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
             func_?(0,
                             TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                             ,iVar6);
    (this->fields)._locvar0 = pIVar9;
    iVar6 = -3;
  }
  else if ((iVar6 != 1) && (iVar6 != 2)) goto code_?;
  uStack_1 = 0;
  uStack_2 = 0;
  if (iVar6 == 1) {
    pJVar8 = (JContainer *)
             func_?((this->fields)._o___1,TypeInfo__Newtonsoft__Json__Linq__JContainer);
    (this->fields)._c___2 = pJVar8;
    if (pJVar8 != (JContainer *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      this_00 = (ScaleAnimationBase *)
                func_?(
                               TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_c__Iterator0
                               );
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_00->fields).target = (Transform *)pJVar8;
      this_00[1].klass = (ScaleAnimationBase__Class *)0xfffffffe;
      pIVar9 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JToken>
                               ,this_00);
      (this->fields)._locvar1 = pIVar9;
      goto code_?;
    }
code_?:
    pIVar9 = (this->fields)._locvar0;
    if (pIVar9 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
code_?:
      uVar10 = func_?(0);
      uVar10 = func_?(uVar10,0,0);
      func_?(uVar10,0,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    cVar13 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar9);
    if (cVar13 == '\0') {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(&stack0xffffffc4 + iVar5 * 4) = 0x161;
      goto code_?;
    }
    pIVar9 = (this->fields)._locvar0;
    if (pIVar9 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) goto code_?;
    pJVar14 = (JToken *)
             func_?(0,
                             TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                             ,pIVar9);
    (this->fields)._o___1 = pJVar14;
    (this->fields)._current = pJVar14;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(&stack0xffffffc4 + iVar5 * 4) = 0x16a;
  }
  else {
    if (iVar6 != 2) goto code_?;
code_?:
    uStack_1 = 1;
    pIVar9 = (this->fields)._locvar1;
    if (pIVar9 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) goto code_?;
    cVar13 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar9);
    if (cVar13 == '\0') {
      iVar6 = 0x131;
      uStack_1 = 0;
      pIVar9 = (this->fields)._locvar1;
      if (pIVar9 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIVar9);
      }
    }
    else {
      pIVar9 = (this->fields)._locvar1;
      if (pIVar9 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) goto code_?;
      pJVar14 = (JToken *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                               ,pIVar9);
      (this->fields)._d___3 = pJVar14;
      (this->fields)._current = pJVar14;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 2;
      }
      bVar7 = true;
      iVar6 = 0x16a;
      uStack_1 = 0;
    }
    iVar5 = 0;
    if (iVar6 != 0x16a) {
      if (iVar6 == 0x131) {
        iVar5 = -1;
      }
      goto code_?;
    }
code_?:
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    if ((!bVar7) &&
       (pIVar9 = (this->fields)._locvar0,
       pIVar9 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0)) {
      func_?(0,TypeInfo__System__IDisposable,pIVar9);
    }
  }
  if ((iVar5 != -1) && (*(int *)(&stack0xffffffc4 + iVar5 * 4) == 0x16a)) {
    *unaff_FS_OFFSET = uStack_4;
    return 1;
  }
  (this->fields)._PC = -1;
code_?:
  *unaff_FS_OFFSET = uStack_4;
  return 0;
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>c__Iterator0::
     JContainer_Descendants_c_Iterator0_Reset
               (JContainer_Descendants_c_Iterator0 *this,MethodInfo *method)

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
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>c__Iterator0::
JContainer_Descendants_c_Iterator0_System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
          (JContainer_Descendants_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).target = (Transform *)(this->fields)._this;
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
Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+<Descendants>c__Iterator0::
JContainer_Descendants_c_Iterator0_System_Collections_IEnumerable_GetEnumerator
          (JContainer_Descendants_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 != (Object *)0xfffffffe) {
    method_00 = TypeInfo__Newtonsoft__Json__Linq__JContainer___Descendants_c__Iterator0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).target = (Transform *)(this->fields)._this;
      return (IEnumerator *)this_00;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  return (IEnumerator *)this;
}

