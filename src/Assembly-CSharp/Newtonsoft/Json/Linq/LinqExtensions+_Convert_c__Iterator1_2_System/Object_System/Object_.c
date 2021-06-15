
/* Void Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>c__Iterator1`2[System::
     Object,System::Object]::
     LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object__Dispose
               (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iVar1 = (this->fields)._PC;
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  if ((iVar1 != 0) && (iVar1 == 1)) {
    pIVar2 = (this->fields)._locvar0;
    if (pIVar2 != (IEnumerator_1_System_Object_ *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,pIVar2,0x44);
    }
  }
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>c__Iterator1`2[System::
     Object,System::Object]::
     LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object__MoveNext
               (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *this,
               MethodInfo *method)

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
  (this->fields)._PC = -1;
  if (iVar4 == 0) {
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)(this->fields).source,StringLiteral_source,(MethodInfo *)0x0);
    if ((this->fields).source == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if ((*(byte *)(**(int **)(method->name + 0x60) + 0xbe) & 1) == 0) {
      func_?();
    }
    pIVar5 = (IEnumerator_1_System_Object_ *)func_?();
    (this->fields)._locvar0 = pIVar5;
  }
  else if (iVar4 != 1) goto code_?;
  uStack_1 = 0;
  pIVar5 = (this->fields)._locvar0;
  if (pIVar5 != (IEnumerator_1_System_Object_ *)0x0) {
    cVar6 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar5);
    if (cVar6 == '\0') {
      iVar4 = 0xc5;
      uStack_1 = 0xffffffff;
      pIVar5 = (this->fields)._locvar0;
      if (pIVar5 != (IEnumerator_1_System_Object_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIVar5);
      }
    }
    else {
      pIVar5 = (this->fields)._locvar0;
      if (pIVar5 == (IEnumerator_1_System_Object_ *)0x0) goto code_?;
      iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      pJVar7 = (JToken *)func_?(0,iVar4,pIVar5);
      (this->fields)._token___1 = pJVar7;
      puVar8 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
      pOVar9 = (Object *)(*(code *)*puVar8)(pJVar7,puVar8);
      (this->fields)._current = pOVar9;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      iVar4 = 0xce;
    }
    if (iVar4 == 0xce) {
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
    (this->fields)._PC = -1;
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  uVar10 = func_?(0);
  func_?(uVar10,0,0);
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>c__Iterator1`2[System::
     Object,System::Object]::LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object__Reset
               (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *this,
               MethodInfo *method)

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


/* IEnumerator`1[System.Object] System.Collections.Generic.IEnumerable<U>.GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>c__Iterator1`2[System::
Object,System::Object]::
LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object__System_Collections_Generic_IEnumerable_U__GetEnumerator
          (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *this,
          MethodInfo *method)

{
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 == (Object *)0xfffffffe) {
    return (IEnumerator_1_System_Object_ *)this;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x18);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  pIVar3 = (IEnumerator_1_System_Object_ *)func_?(iVar2);
  puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
  (*(code *)*puVar4)(pIVar3,puVar4);
  if (pIVar3 != (IEnumerator_1_System_Object_ *)0x0) {
    pIVar3[1].klass = (IEnumerator_1_System_Object___Class *)(this->fields).source;
    return pIVar3;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_System_Object_ *)(*pcVar5)();
  return pIVar3;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>c__Iterator1`2[System::
Object,System::Object]::
LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object__System_Collections_IEnumerable_GetEnumerator
          (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *this,
          MethodInfo *method)

{
  if (this != (LinqExtensions_Convert_c_Iterator1_2_System_Object_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IEnumerator *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x14))();
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (IEnumerator *)(*pcVar2)();
  return pIVar1;
}

