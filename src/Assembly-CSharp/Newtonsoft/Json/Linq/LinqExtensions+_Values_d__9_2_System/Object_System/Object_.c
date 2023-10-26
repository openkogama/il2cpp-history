
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::LinqExtensions_Values_d_9_2_System_Object_System_Object__MoveNext
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffc4;
  puVar5 = &stack0xffffffc4;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                   );
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JValue);
    func_?(&StringLiteral_source);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  JStack_7._enumerable = (IEnumerable_1_System_Object_ *)0x0;
  uStack_1 = 1;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)(this->fields).source,StringLiteral_source,(MethodInfo *)0x0);
    unaff_ESI = (this->fields).source;
    if (unaff_ESI == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    if ((*(byte *)((int)method->klass->rgctx_data[2].rgctxDataDummy + 0xba) & 1) == 0) {
      func_?();
    }
    pIVar8 = (IEnumerator_1_System_Object_ *)func_?();
    (this->fields).__7__wrap1 = pIVar8;
    func_?();
code_?:
    (this->fields).__1__state = -3;
    pJVar9 = unaff_EDI;
    while (pIVar8 = (this->fields).__7__wrap1, unaff_EDI = pJVar9,
          pIVar8 != (IEnumerator_1_System_Object_ *)0x0) {
      cVar10 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar8);
      if (cVar10 == '\0') {
        (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                  (this,method->klass->rgctx_data[1].rgctxDataDummy);
        (this->fields).__7__wrap1 = (IEnumerator_1_System_Object_ *)0x0;
        func_?(&(this->fields).__7__wrap1,0);
        goto code_?;
      }
      pIVar8 = (this->fields).__7__wrap1;
      unaff_ESI = (IEnumerable_1_System_Object_ *)0x0;
      if (pIVar8 == (IEnumerator_1_System_Object_ *)0x0) break;
      pvVar11 = method->klass->rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((int)pvVar11 + 0xba) & 1) == 0) {
        pvVar11 = (void *)func_?(pvVar11);
      }
      unaff_ESI = (IEnumerable_1_System_Object_ *)func_?(0,pvVar11,pIVar8);
      unaff_EDI = TypeInfo__Newtonsoft__Json__Linq__JValue;
      if ((this->fields).key == (Object *)0x0) {
        iVar12 = func_?(unaff_ESI,TypeInfo__Newtonsoft__Json__Linq__JValue);
        if (iVar12 != 0) {
          pIVar13 = (method->klass->rgctx_data[7].method)->virtualMethodPointer;
          pvVar11 = method->klass->rgctx_data[7].rgctxDataDummy;
          if (unaff_ESI == (IEnumerable_1_System_Object_ *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = func_?(unaff_ESI,unaff_EDI);
            bVar14 = 0;
            if (iVar12 == 0) goto code_?;
          }
          pOVar15 = (Object *)(*pIVar13)(iVar12,pvVar11);
          (this->fields).__2__current = pOVar15;
          func_?(&(this->fields).__2__current,pOVar15);
          (this->fields).__1__state = 1;
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if (unaff_ESI == (IEnumerable_1_System_Object_ *)0x0) break;
        JStack_7._enumerable = (IEnumerable_1_System_Object_ *)func_?(0x14,unaff_ESI);
        pIVar8 = JEnumerable`1[System::Object]::JEnumerable_1_System_Object__GetEnumerator
                            (&JStack_7,
                             MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                            );
        (this->fields).__7__wrap2 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)pIVar8;
        func_?();
code_?:
        (this->fields).__1__state = -4;
        pIVar16 = (this->fields).__7__wrap2;
        if (pIVar16 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) break;
        cVar10 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar16);
        if (cVar10 != '\0') {
          pIVar16 = (this->fields).__7__wrap2;
          unaff_ESI = (IEnumerable_1_System_Object_ *)0x0;
          if (pIVar16 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) break;
          pIVar17 = pIVar16->klass;
          uVar18 = 0;
          if ((pIVar17->_1).interface_offsets_count == 0) goto code_?;
          goto code_?;
        }
        (*method->klass->rgctx_data->method->virtualMethodPointer)
                  (this,method->klass->rgctx_data->rgctxDataDummy);
        (this->fields).__7__wrap2 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0;
        func_?(&(this->fields).__7__wrap2,0);
        pJVar9 = unaff_EDI;
      }
      else {
        unaff_EDI = pJVar9;
        if (unaff_ESI == (IEnumerable_1_System_Object_ *)0x0) break;
        iVar12 = func_?(0xf,unaff_ESI,(this->fields).key);
        unaff_ESI = (IEnumerable_1_System_Object_ *)0x0;
        if (iVar12 != 0) {
          pOVar15 = (Object *)
                    (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                              (iVar12,method->klass->rgctx_data[8].rgctxDataDummy);
          (this->fields).__2__current = pOVar15;
          func_?(&(this->fields).__2__current,pOVar15);
          (this->fields).__1__state = 3;
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
code_?:
    bVar14 = 0;
    func_?();
code_?:
    func_?(unaff_ESI,unaff_EDI);
    func_?();
    uVar19 = func_?(unaff_ESI);
    uVar18 = (ushort)((uint6)uVar19 >> 0x20);
    puVar20 = (ushort *)uVar19;
    sVar21 = (uVar18 & 3) - (*puVar20 & 3);
    *puVar20 = *puVar20 + (ushort)(0 < sVar21) * sVar21;
    out(unaff_ESI->klass,uVar18);
    bVar22 = (byte)uVar19;
    puVar20 = (ushort *)
              CONCAT31((int3)((uint6)uVar19 >> 8),
                       bVar22 + (9 < (bVar22 & 0xf) | in_AF) * '\x06' + (0x99 < bVar22 | bVar14) * '`')
    ;
    sVar21 = (uVar18 & 3) - (*puVar20 & 3);
    *puVar20 = *puVar20 + (ushort)(0 < sVar21) * sVar21;
    pcVar23 = (code *)swi(3);
    bVar24 = (*pcVar23)();
    return bVar24;
  case 1:
  case 3:
    goto code_?;
  case 2:
    goto code_?;
  default:
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
  while (uVar18 = uVar18 + 1, uVar18 < (pIVar17->_1).interface_offsets_count) {
code_?:
    if (pIVar17->interfaceOffsets[uVar18].interfaceType ==
        (Il2CppClass *)
        TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>) {
      pIVar25 = &pIVar17->vtable + pIVar17->interfaceOffsets[uVar18].offset;
      goto code_?;
    }
  }
code_?:
  pIVar25 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken___VTable *)
            func_?(pIVar16,
                            TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                            ,0);
code_?:
  uVar26 = (*(pIVar25->get_Current).methodPtr)(pIVar16,(pIVar25->get_Current).method);
  pOVar15 = (Object *)
            (*(method->klass->rgctx_data[8].method)->virtualMethodPointer)
                      (uVar26,method->klass->rgctx_data[8].rgctxDataDummy);
  (this->fields).__2__current = pOVar15;
  func_?(&(this->fields).__2__current,pOVar15);
  (this->fields).__1__state = 2;
  *unaff_FS_OFFSET = uStack_3;
  return 1;
}


/* IEnumerator`1[System.Object] System.Collections.Generic.IEnumerable<U>.GetEnumerator() */

IEnumerator_1_System_Object_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::Object,System::
Object]::
LinqExtensions_Values_d_9_2_System_Object_System_Object__System_Collections_Generic_IEnumerable_U__GetEnumerator
          (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (((this->fields).__1__state == -2) &&
     (iVar1 = (this->fields).__l__initialThreadId,
     iVar2 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                       ((MethodInfo *)0x0), iVar1 == iVar2)) {
    (this->fields).__1__state = 0;
    pIVar3 = (this->fields).__3__source;
    pLVar4 = this;
    if (this == (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *)0x0)
    goto code_?;
  }
  else {
    pvVar5 = method->klass->rgctx_data[0xb].rgctxDataDummy;
    if ((*(byte *)((int)pvVar5 + 0xba) & 1) == 0) {
      pvVar5 = (void *)func_?(pvVar5);
    }
    pLVar4 = (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *)func_?(pvVar5);
    if (pLVar4 == (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      pIVar7 = (IEnumerator_1_System_Object_ *)(*pcVar6)();
      return pIVar7;
    }
    (*(method->klass->rgctx_data[0xc].method)->virtualMethodPointer)
              (pLVar4,0,method->klass->rgctx_data[0xc].rgctxDataDummy);
    pIVar3 = (this->fields).__3__source;
  }
  (pLVar4->fields).source = pIVar3;
  func_?(&(pLVar4->fields).source,pIVar3);
  pOVar8 = (this->fields).__3__key;
  (pLVar4->fields).key = pOVar8;
  func_?(&(pLVar4->fields).key,pOVar8);
  return (IEnumerator_1_System_Object_ *)pLVar4;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::Object,System::
Object]::
LinqExtensions_Values_d_9_2_System_Object_System_Object__System_Collections_IEnumerable_GetEnumerator
          (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  pIVar1 = (IEnumerator *)
           (*(method->klass->rgctx_data[0xd].method)->virtualMethodPointer)
                     (this,method->klass->rgctx_data[0xd].rgctxDataDummy);
  return pIVar1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::
     LinqExtensions_Values_d_9_2_System_Object_System_Object__System_Collections_IEnumerator_Reset
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Linq__LinqExtensions___Values_d__9<System::Object,_System::Object>__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::
     LinqExtensions_Values_d_9_2_System_Object_System_Object__System_IDisposable_Dispose
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  iVar3 = (this->fields).__1__state;
  if ((iVar3 + 4U < 2) || (iVar3 - 1U < 3)) {
    if ((iVar3 == -4) || (iVar3 == 2)) {
      uStack_4 = 1;
      (*method->klass->rgctx_data->method->virtualMethodPointer)
                (this,method->klass->rgctx_data->rgctxDataDummy);
    }
    uStack_4 = 0xffffffff;
    (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
              (this,method->klass->rgctx_data[1].rgctxDataDummy);
  }
  *unaff_FS_OFFSET = uStack_2;
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::LinqExtensions_Values_d_9_2_System_Object_System_Object____m__Finally1
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

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


/* Void <>m__Finally2() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::LinqExtensions_Values_d_9_2_System_Object_System_Object____m__Finally2
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -3;
  if ((this->fields).__7__wrap2 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
    func_?(0,TypeInfo__System__IDisposable,(this->fields).__7__wrap2);
  }
  return;
}


/* LinqExtensions+<Values>d__9`2[System.Object,System.Object](Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>d__9`2[System::
     Object,System::Object]::LinqExtensions_Values_d_9_2_System_Object_System_Object___ctor
               (LinqExtensions_Values_d_9_2_System_Object_System_Object_ *this,int32_t __1__state,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).__1__state = __1__state;
  iVar1 = mscorlib.dll::System::Environment::Environment_get_CurrentManagedThreadId
                    ((MethodInfo *)0x0);
  (this->fields).__l__initialThreadId = iVar1;
  return;
}

