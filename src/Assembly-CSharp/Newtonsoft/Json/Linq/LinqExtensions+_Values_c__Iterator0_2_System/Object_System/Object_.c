
/* Void Dispose() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>c__Iterator0`2[System::
     Object,System::Object]::
     LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object__Dispose
               (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *this,
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
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  switch(iVar4) {
  case 1:
  case 2:
  case 3:
    if ((iVar4 != 1) && (iVar4 == 2)) {
      uStack_1 = 0;
      pIVar5 = (this->fields)._locvar1;
      if (pIVar5 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        func_?(0,TypeInfo__System__IDisposable,pIVar5);
      }
    }
    uStack_1 = 0xffffffff;
    pIVar6 = (this->fields)._locvar0;
    if (pIVar6 != (IEnumerator_1_System_Object_ *)0x0) {
      func_?(0,TypeInfo__System__IDisposable,pIVar6);
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>c__Iterator0`2[System::
     Object,System::Object]::
     LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object__MoveNext
               (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *this,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  func_?();
  iVar7 = -1;
  iStack_8 = -1;
  iVar9 = (this->fields)._PC;
  (this->fields)._PC = -1;
  cStack_10 = '\0';
  puStack_11 = &stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  switch(iVar9) {
  case 0:
    puStack_11 = &stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    Json::Utilities::ValidationUtils::ValidationUtils_ArgumentNotNull
              ((Object *)(this->fields).source,StringLiteral_source,(MethodInfo *)0x0);
    pIStack_12 = (this->fields).source;
    cVar13 = (int)pIStack_12 < 0;
    if (pIStack_12 == (IEnumerable_1_System_Object_ *)0x0) {
code_?:
      uVar14 = 1;
      func_?(0);
code_?:
      func_?(unaff_EBX,0,0);
      goto code_?;
    }
    unaff_EBX = **(int **)(method->name + 0x60);
    if ((*(byte *)(unaff_EBX + 0xbe) & 1) == 0) {
      func_?();
    }
    pIVar15 = (IEnumerator_1_System_Object_ *)func_?();
    (this->fields)._locvar0 = pIVar15;
    iVar9 = -3;
  case 1:
  case 2:
  case 3:
    uStack_1 = 0;
    if ((iVar9 != 1) && (iVar16 = iVar7, iVar9 == 2)) goto code_?;
code_?:
    do {
      pIVar15 = (this->fields)._locvar0;
      cVar13 = (int)pIVar15 < 0;
      if (pIVar15 == (IEnumerator_1_System_Object_ *)0x0) goto code_?;
      cVar13 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar15);
      if (cVar13 == '\0') {
        iVar9 = iVar7 + 1;
        *(undefined4 *)(puStack_11 + iVar9 * 4) = 0x1dd;
code_?:
        unaff_EBX = iStack_6;
        uStack_1 = 0xffffffff;
        if ((cStack_10 == '\0') &&
           (pIVar15 = (this->fields)._locvar0, pIVar15 != (IEnumerator_1_System_Object_ *)0x0)) {
          func_?(0,TypeInfo__System__IDisposable,pIVar15);
        }
        goto code_?;
      }
      pIStack_12 = (IEnumerable_1_System_Object_ *)(this->fields)._locvar0;
      cVar13 = (int)pIStack_12 < 0;
      if (pIStack_12 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
      unaff_EBX = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(unaff_EBX + 0xbe) & 1) == 0) {
        func_?(unaff_EBX);
      }
      pJVar17 = (JToken *)func_?(0,unaff_EBX,pIStack_12);
      pOVar18 = (this->fields).key;
      (this->fields)._token___1 = pJVar17;
      if (pOVar18 == (Object *)0x0) {
        iVar9 = func_?(pJVar17,TypeInfo__Newtonsoft__Json__Linq__JValue);
        if (iVar9 != 0) {
          uVar19 = func_?((this->fields)._token___1,
                                   TypeInfo__Newtonsoft__Json__Linq__JValue);
          puVar20 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
          pOVar18 = (Object *)(*(code *)*puVar20)(uVar19,puVar20);
          (this->fields)._current = pOVar18;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 1;
          }
          goto code_?;
        }
        pJVar17 = (this->fields)._token___1;
        cVar13 = (int)pJVar17 < 0;
        if (pJVar17 == (JToken *)0x0) goto code_?;
        pIStack_12 = (IEnumerable_1_System_Object_ *)func_?(0x14,pJVar17);
        pIVar21 = (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)
                  func_?(&pIStack_12,
                                  MethodInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>__GetEnumerator__
                                 );
        (this->fields)._locvar1 = pIVar21;
        iVar16 = iVar7;
code_?:
        uStack_1 = CONCAT31(uStack_1._1_3_,1);
        pIVar21 = (this->fields)._locvar1;
        cVar13 = (int)pIVar21 < 0;
        if (pIVar21 == (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0) goto code_?;
        cVar13 = func_?(1,TypeInfo__System__Collections__IEnumerator,pIVar21);
        if (cVar13 == '\0') {
          iVar9 = iVar16 + 1;
          uStack_1 = uStack_1 & 0xffffff00;
          *(undefined4 *)(puStack_11 + iVar9 * 4) = 0x15f;
          iStack_8 = iVar9;
          if ((cStack_10 == '\0') &&
             (pIVar21 = (this->fields)._locvar1,
             pIVar21 != (IEnumerator_1_Newtonsoft_Json_Linq_JToken_ *)0x0)) {
            func_?(0,TypeInfo__System__IDisposable,pIVar21);
          }
        }
        else {
          pIVar22 = (IEnumerable_1_System_Object_ *)(this->fields)._locvar1;
          cVar13 = (int)pIVar22 < 0;
          pIStack_12 = pIVar22;
          if (pIVar22 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
          pIStack_23 = pIVar22->klass;
          uVar24 = 0;
          uVar25._0_1_ = (pIStack_23->_1).rank;
          uVar25._1_1_ = (pIStack_23->_1).minimumAlignment;
          if (uVar25 != 0) {
            do {
              if (pIStack_23->interfaceOffsets[uVar24].interfaceType ==
                  (Il2CppClass *)
                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                 ) {
                ppMVar26 = &(&pIStack_23->vtable)[pIStack_23->interfaceOffsets[uVar24].offset].
                            GetEnumerator.method;
                goto code_?;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar25);
          }
          ppMVar26 = (MethodInfo **)
                     func_?(pIVar22,
                                     TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Linq::JToken>
                                     ,0);
code_?:
          pJVar17 = (JToken *)(*(code *)*ppMVar26)(pIVar22,ppMVar26[1]);
          (this->fields)._t___2 = pJVar17;
          puVar20 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
          pOVar18 = (Object *)(*(code *)*puVar20)(pJVar17,puVar20);
          (this->fields)._current = pOVar18;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 2;
          }
          cStack_10 = '\x01';
          uStack_1 = uStack_1 & 0xffffff00;
          *(undefined4 *)(puStack_11 + (iVar16 + 1) * 4) = 0x1eb;
          iStack_8 = iVar16 + 1;
        }
        iVar9 = iVar16 + 1;
        cVar13 = iStack_6 < 0;
        uVar14 = iStack_6 == 0;
        unaff_EBX = iStack_6;
        if (!(bool)uVar14) goto code_?;
        iVar7 = iVar9;
        if (iVar9 != -1) {
          if (*(int *)(puStack_11 + iVar9 * 4) == 0x1eb) goto code_?;
          if ((*(int *)(puStack_11 + iVar9 * 4) == 0x15f) &&
             (iVar7 = iVar16, iStack_8 = iVar16, iVar9 < 0)) {
            iVar7 = iVar9;
            iStack_8 = iVar9;
          }
        }
        goto code_?;
      }
      cVar13 = (int)pJVar17 < 0;
      if (pJVar17 == (JToken *)0x0) goto code_?;
      pJVar17 = (JToken *)func_?(0xf,pJVar17,pOVar18);
      (this->fields)._value___3 = pJVar17;
    } while (pJVar17 == (JToken *)0x0);
    puVar20 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
    pOVar18 = (Object *)(*(code *)*puVar20)(pJVar17,puVar20);
    (this->fields)._current = pOVar18;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 3;
    }
code_?:
    iVar9 = iVar7 + 1;
    uStack_1 = 0xffffffff;
    *(undefined4 *)(puStack_11 + iVar9 * 4) = 0x1eb;
    unaff_EBX = iStack_6;
code_?:
    cVar13 = unaff_EBX < 0;
    uVar14 = unaff_EBX == 0;
    if (!(bool)uVar14) {
code_?:
      iVar9 = func_?(unaff_EBX,0,0);
      if (!(bool)uVar14 &&
          ((longlong)(int)((longlong)iVar9 * (longlong)iVar9) !=
          (longlong)iVar9 * (longlong)iVar9) == (bool)cVar13) {
        pcVar27 = (code *)swi(3);
        bVar28 = (*pcVar27)();
        return bVar28;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((iVar9 != -1) && (*(int *)(puStack_11 + iVar9 * 4) == 0x1eb)) {
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    }
  default:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
}


/* Void Reset() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>c__Iterator0`2[System::
     Object,System::Object]::LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object__Reset
               (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *this,
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
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>c__Iterator0`2[System::
Object,System::Object]::
LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object__System_Collections_Generic_IEnumerable_U__GetEnumerator
          (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *this,MethodInfo *method
          )

{
  pOVar1 = mscorlib.dll::System::Threading::Interlocked::Interlocked_CompareExchange_1
                     ((Object **)&(this->fields)._PC,(Object *)0x0,(Object *)0xfffffffe,
                      (MethodInfo *)0x0);
  if (pOVar1 == (Object *)0xfffffffe) {
    return (IEnumerator_1_System_Object_ *)this;
  }
  iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x1c);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  pIVar3 = (IEnumerator_1_System_Object_ *)func_?(iVar2);
  puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x20);
  (*(code *)*puVar4)(pIVar3,puVar4);
  if (pIVar3 != (IEnumerator_1_System_Object_ *)0x0) {
    pIVar3[1].klass = (IEnumerator_1_System_Object___Class *)(this->fields).source;
    pIVar3[2].monitor = (MonitorData *)(this->fields).key;
    return pIVar3;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pIVar3 = (IEnumerator_1_System_Object_ *)(*pcVar5)();
  return pIVar3;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<Values>c__Iterator0`2[System::
Object,System::Object]::
LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object__System_Collections_IEnumerable_GetEnumerator
          (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *this,MethodInfo *method
          )

{
  if (this != (LinqExtensions_Values_c_Iterator0_2_System_Object_System_Object_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IEnumerator *)(*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (IEnumerator *)(*pcVar2)();
  return pIVar1;
}

