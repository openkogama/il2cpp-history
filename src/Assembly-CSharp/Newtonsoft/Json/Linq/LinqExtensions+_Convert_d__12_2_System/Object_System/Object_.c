
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>d__12`2[System::
     Object,System::Object]::LinqExtensions_Convert_d_12_2_System_Object_System_Object__MoveNext
               (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
  }
  uStack_1 = 1;
  iVar4 = (this->fields).__1__state;
  if (iVar4 == 0) {
    (this->fields).__1__state = -1;
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)(this->fields).source,StringLiteral_source,(MethodInfo *)0x0);
    unaff_ESI = (this->fields).source;
    if (unaff_ESI == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if ((*(byte *)((int)method->klass->rgctx_data[1].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pIVar5 = (IEnumerator_1_System_Object_ *)func_?();
    (this->fields).__7__wrap1 = pIVar5;
    func_?();
  }
  else if (iVar4 != 1) goto code_?;
  (this->fields).__1__state = -3;
  pIVar5 = (this->fields).__7__wrap1;
  if (pIVar5 != (IEnumerator_1_System_Object_ *)0x0) {
    cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar5);
    if (cVar6 == '\0') {
      (*method->klass->rgctx_data->method->virtualMethodPointer)
                (this,method->klass->rgctx_data->rgctxDataDummy);
      (this->fields).__7__wrap1 = (IEnumerator_1_System_Object_ *)0x0;
      func_?(&(this->fields).__7__wrap1,0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    pIVar5 = (this->fields).__7__wrap1;
    unaff_ESI = (IEnumerable_1_System_Object_ *)0x0;
    if (pIVar5 != (IEnumerator_1_System_Object_ *)0x0) {
      pvVar7 = method->klass->rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
        pvVar7 = (void *)func_?(pvVar7);
      }
      uVar8 = func_?(0,pvVar7,pIVar5);
      pOVar9 = (Object *)
               (*(method->klass->rgctx_data[6].method)->virtualMethodPointer)
                         (uVar8,method->klass->rgctx_data[6].rgctxDataDummy);
      (this->fields).__2__current = pOVar9;
      func_?(&(this->fields).__2__current,pOVar9);
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


/* IEnumerator`1[System.Object] System.Collections.Generic.IEnumerable<U>.GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>d__12`2[System::Object,System::
Object]::
LinqExtensions_Convert_d_12_2_System_Object_System_Object__System_Collections_Generic_IEnumerable_U__GetEnumerator
          (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (((this->fields).__1__state == -2) &&
     (iVar1 = (this->fields).__l__initialThreadId,
     iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0), iVar1 == iVar2)) {
    (this->fields).__1__state = 0;
    pIVar3 = (this->fields).__3__source;
    if (this == (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *)0x0)
    goto code_?;
  }
  else {
    pvVar4 = method->klass->rgctx_data[9].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    pLVar5 = (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *)func_?(pvVar4);
    if (pLVar5 == (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      pIVar7 = (IEnumerator_1_System_Object_ *)(*pcVar6)();
      return pIVar7;
    }
    (*(method->klass->rgctx_data[10].method)->virtualMethodPointer)
              (pLVar5,0,method->klass->rgctx_data[10].rgctxDataDummy);
    pIVar3 = (this->fields).__3__source;
    this = pLVar5;
  }
  (this->fields).source = pIVar3;
  func_?(&(this->fields).source,pIVar3);
  return (IEnumerator_1_System_Object_ *)this;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>d__12`2[System::Object,System::
Object]::
LinqExtensions_Convert_d_12_2_System_Object_System_Object__System_Collections_IEnumerable_GetEnumerator
          (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (IEnumerator *)
           (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                     (this,method->klass->rgctx_data[0xb].rgctxDataDummy);
  return pIVar1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>d__12`2[System::
     Object,System::Object]::
     LinqExtensions_Convert_d_12_2_System_Object_System_Object__System_Collections_IEnumerator_Reset
               (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__LinqExtensions___Convert_d__12<System::Object,_System::Object>__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Convert>d__12`2[System::
     Object,System::Object]::
     LinqExtensions_Convert_d_12_2_System_Object_System_Object____m__Finally1
               (LinqExtensions_Convert_d_12_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  if ((this->fields).__7__wrap1 != (IEnumerator_1_System_Object_ *)0x0) {
    func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap1);
  }
  return;
}

