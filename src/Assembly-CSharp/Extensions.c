
/* String AddSpacesToSentence(String) */

String * Assembly-CSharp.dll::Extensions::Extensions_AddSpacesToSentence
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    puVar1 = &(text->fields)._firstChar;
    for (uVar2 = 0; (int)uVar2 < (text->fields)._stringLength; uVar2 = uVar2 + 1) {
      if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2)
      goto code_?;
      uVar3 = *puVar1;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      bVar4 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        iVar5 = (text->fields)._stringLength;
        this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
        mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_5
                  (this,iVar5 * 2,0x7fffffff,(MethodInfo *)0x0);
        if ((text->fields)._stringLength < 1) goto code_?;
        if (this == (StringBuilder *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          pSVar7 = (String *)(*pcVar6)();
          return pSVar7;
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (this,(text->fields)._firstChar,(MethodInfo *)0x0);
        uVar2 = 1;
        puVar1 = (uint16_t *)&(text->fields).field_0x6;
        goto code_?;
      }
      puVar1 = puVar1 + 1;
    }
  }
  return ::StringLiteral__;
code_?:
  if ((text->fields)._stringLength <= (int)uVar2) {
    pSVar7 = (String *)
             (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method)
    ;
    return pSVar7;
  }
  if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
              ((MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pSVar7 = (String *)(*pcVar6)();
    return pSVar7;
  }
  uVar3 = *puVar1;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  bVar4 = mscorlib.dll::System::Char::Char_IsUpper(uVar3,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)(uVar2 - 1))
    goto code_?;
    if (puVar1[-1] != 0x20) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6(this,0x20,(MethodInfo *)0x0)
      ;
    }
  }
  if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2)
  goto code_?;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6(this,*puVar1,(MethodInfo *)0x0);
  uVar2 = uVar2 + 1;
  puVar1 = puVar1 + 1;
  goto code_?;
}


/* Void AppendRecursive(StringBuilder, IEnumerable, Int32, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_AppendRecursive
               (StringBuilder *sb,IEnumerable *collection,int32_t depth,bool eachEntryNewLine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_NULL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__k__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__v__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (StringBuilder *)0x0;
  alStack_2[0] = 0;
  pIVar3 = (IEnumerable__Class *)0x1;
  if (collection == (IEnumerable *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plStackX_10 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable,collection);
  uStack_5 = 0;
  pplStack_6 = &plStackX_10;
  plStack_7 = alStack_2;
code_?:
  do {
    if (plStackX_10 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar8 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar9 = plStackX_10;
    if (cVar8 == '\0') {
      alStack_2[0] = FUN_?(plStackX_10,TypeInfo__System__IDisposable);
      if (alStack_2[0] != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,alStack_2[0]);
      }
      return;
    }
    if (plStackX_10 == (longlong *)0x0) goto code_?;
    lVar10 = *plStackX_10;
    uVar11 = 0;
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar12 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 1) *
                    0x10 + 0x138 + lVar10);
          goto code_?;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
    }
    puVar12 = (undefined8 *)FUN_?(plStackX_10,TypeInfo__System__Collections__IEnumerator);
code_?:
    this = (StringBuilder *)(*(code *)*puVar12)(plVar9,puVar12[1]);
    if ((char)pIVar3 != '\0' || eachEntryNewLine != 0) {
      pIVar3 = (IEnumerable__Class *)0x0;
      if (sb != (StringBuilder *)0x0) {
        if ((sb->fields).m_ChunkOffset + (sb->fields).m_ChunkLength != 0) {
          pSVar13 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar13,(MethodInfo *)0x0);
        }
        if (::StringLiteral__ != (String *)0x0) {
          pSVar13 = mscorlib.dll::System::String::String_PadLeft_1
                             (::StringLiteral__,depth * 2,0x20,(MethodInfo *)0x0);
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (sb,pSVar13,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (sb == (StringBuilder *)0x0) {
      FUN_?();
      goto code_?;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (sb,::StringLiteral___,(MethodInfo *)0x0);
code_?:
  } while (this == (StringBuilder *)0x0);
  pSVar14 = pSVar1;
  if (this->klass ==
      (StringBuilder__Class *)
      TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>) {
    pSVar14 = this;
  }
  if (pSVar14 == (StringBuilder *)0x0) {
    pSVar13 = (String *)
             (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method)
    ;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(sb,pSVar13,(MethodInfo *)0x0);
    goto code_?;
  }
  if ((this->klass->_0).element_class ==
      (TypeInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>->_0).
      element_class) {
    pCStack_15 = (this->fields).m_ChunkChars;
    pSStack_16 = (this->fields).m_ChunkPrevious;
    this = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                     (sb,StringLiteral__k__,(MethodInfo *)0x0);
    if (pCStack_15 != (Char__Array *)0x0) {
      pCVar17 = pCStack_15->klass;
      uVar18._0_2_ = pCVar17[1]._0.this_arg.attrs;
      uVar18._2_1_ = pCVar17[1]._0.this_arg.type;
      uVar18._3_5_ = *(undefined5 *)&pCVar17[1]._0.this_arg.field_0xb;
      pSVar13 = (String *)(*(code *)pCVar17[1]._0.this_arg.data)(pCStack_15,uVar18);
      if (this != (StringBuilder *)0x0) {
        pSVar14 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                           (this,pSVar13,(MethodInfo *)0x0);
        if (pSVar14 != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (pSVar14,StringLiteral__v__,(MethodInfo *)0x0);
          this = pSStack_16;
          lVar10 = FUN_?(pSStack_16,TypeInfo__System__Collections__IEnumerable);
          if (lVar10 == 0) {
code_?:
            pSVar13 = StringLiteral_NULL;
            if (this != (StringBuilder *)0x0) {
              pSVar13 = (String *)
                       (*(this->klass->vtable).ToString.methodPtr)
                                 (this,(this->klass->vtable).ToString.method);
            }
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (sb,pSVar13,(MethodInfo *)0x0);
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (sb,0x5d,(MethodInfo *)0x0);
            goto code_?;
          }
          if (this != (StringBuilder *)0x0) {
            pSVar14 = pSVar1;
            if (this->klass == pSRam0000000182dbbc60) {
              pSVar14 = this;
            }
            if (pSVar14 != (StringBuilder *)0x0) goto code_?;
          }
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar3 = TypeInfo__System__Collections__IEnumerable;
          pSVar14 = pSVar1;
          if ((this == (StringBuilder *)0x0) ||
             (pSVar14 = (StringBuilder *)
                       FUN_?(this,TypeInfo__System__Collections__IEnumerable),
             pSVar14 != (StringBuilder *)0x0)) {
            Extensions_AppendRecursive
                      (sb,(IEnumerable *)pSVar14,depth + 1,eachEntryNewLine,(MethodInfo *)0x0);
            pIVar3 = (IEnumerable__Class *)0x1;
            goto code_?;
          }
code_?:
          FUN_?(this,pIVar3);
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?(this);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  goto code_?;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = (String *)
           (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                     (collection,0,1,(method->field7_0x38).rgctx_data[1].method);
  return pSVar1;
}


/* String BuildStringRecursive(IEnumerable, String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildStringRecursive
                   (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (prependInfo != (String *)0x0) {
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
              (this,prependInfo,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  Extensions_AppendRecursive(this,collection,0,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (String *)
             (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method)
    ;
    return pSVar1;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_1
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = (String *)
           (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                     (collection,0,(ulonglong)eachEntryNewLine,
                      (method->field7_0x38).rgctx_data[1].method);
  return pSVar1;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_2
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   String *prependInfo,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = (String *)
           (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                     (collection,prependInfo,1,(method->field7_0x38).rgctx_data[1].method);
  return pSVar1;
}


/* String 
   BuildString[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

String * Assembly-CSharp.dll::Extensions::Extensions_BuildString_3
                   (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
                   String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  bStackX_18 = eachEntryNewLine;
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      apuStack_1[0] = &UNK_?;
      FUN_?(method);
    }
  }
  uVar2 = (ulonglong)((method->field7_0x38).rgctx_data[4].klass)->actualSize;
  uVar3 = uVar2 + 0xf;
  uVar4 = 0xffffffffffffff0;
  if (uVar3 <= uVar2) {
    uVar3 = 0xffffffffffffff0;
  }
  uVar3 = uVar3 & 0xfffffffffffffff0;
  apuStack_1[0] = &UNK_?;
  FUN_?();
  lVar5 = -uVar3;
  lVar6 = (longlong)&lStack_7 + lVar5;
  uVar3 = uVar2 + 0xf;
  if (uVar2 + 0xf <= uVar2) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar5) = &UNK_?;
  FUN_?();
  lVar8 = -uVar3;
  lStack_7 = (longlong)&lStack_7 + lVar8 + lVar5;
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  pSStack_9 = this;
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  pSStack_10 = this;
  if (prependInfo == (String *)0x0) {
code_?:
    bVar11 = true;
    if (collection != (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      pvVar12 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        pvVar12 = (void *)FUN_?(pvVar12);
      }
      *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
      plStackX_10 = (longlong *)FUN_?(0,pvVar12,collection);
      uStack_13 = 0;
      pplStack_14 = &plStackX_10;
      while (plStackX_10 != (longlong *)0x0) {
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        cVar15 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        plVar16 = plStackX_10;
        if (cVar15 == '\0') {
          if (plStackX_10 != (longlong *)0x0) {
            *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
            FUN_?(0,TypeInfo__System__IDisposable,plStackX_10);
          }
          if (this != (StringBuilder *)0x0) {
            pIVar17 = (pSStack_9->klass->vtable).ToString.methodPtr;
            pMVar18 = (pSStack_9->klass->vtable).ToString.method;
            *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
            pSVar19 = (String *)(*pIVar17)(this,pMVar18);
            return pSVar19;
          }
          goto code_?;
        }
        if (plStackX_10 == (longlong *)0x0) goto code_?;
        pvVar12 = (method->field7_0x38).rgctx_data[2].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
          *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
          pvVar12 = (void *)FUN_?(pvVar12);
        }
        lVar20 = *plVar16;
        uVar21 = 0;
        if (*(ushort *)(lVar20 + 0x12e) != 0) {
          do {
            if (*(void **)(*(longlong *)(lVar20 + 0xb0) + (ulonglong)uVar21 * 0x10) == pvVar12) {
              lVar20 = (longlong)
                       *(int *)(*(longlong *)(lVar20 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) * 0x10
                       + 0x138 + lVar20;
              goto code_?;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(ushort *)(lVar20 + 0x12e));
        }
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        lVar20 = FUN_?(plVar16,pvVar12,0);
code_?:
        lVar20 = *(longlong *)(lVar20 + 8);
        pcVar22 = *(code **)(lVar20 + 0x10);
        *(longlong *)((longlong)alStack_23 + lVar8 + lVar5) = lVar6;
        uVar24 = *(undefined8 *)(lVar20 + 8);
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        lStackX_20 = lVar6;
        (*pcVar22)(uVar24,lVar20,plVar16,&lStackX_20);
        lVar20 = lStack_7;
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        FUN_?(lVar20,lVar6);
        if (bVar11) {
          bVar11 = false;
        }
        else {
          if (this == (StringBuilder *)0x0) goto code_?;
          *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,::StringLiteral___,(MethodInfo *)0x0);
          if (bStackX_18 != 0) {
            *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
            pSVar19 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
            *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,pSVar19,(MethodInfo *)0x0);
          }
        }
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        FUN_?(lVar6,lVar20,uVar2);
        pvVar12 = (method->field7_0x38).rgctx_data[4].rgctxDataDummy;
        *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
        plVar16 = (longlong *)FUN_?(pvVar12,lVar6);
        if (this == (StringBuilder *)0x0) goto code_?;
        if (plVar16 != (longlong *)0x0) {
          pcVar22 = *(code **)(*plVar16 + 0x168);
          uVar24 = *(undefined8 *)(*plVar16 + 0x170);
          *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
          pSVar19 = (String *)(*pcVar22)(plVar16,uVar24);
          *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,pSVar19,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
  }
  else if (this != (StringBuilder *)0x0) {
    *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
    this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (this,prependInfo,(MethodInfo *)0x0);
    *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
    pSVar19 = mscorlib.dll::System::Environment::Environment_get_NewLine((MethodInfo *)0x0);
    if (this_00 != (StringBuilder *)0x0) {
      *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_00,pSVar19,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
code_?:
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
  *(undefined **)((longlong)apuStack_1 + lVar8 + lVar5) = &UNK_?;
  FUN_?();
  pcVar22 = (code *)swi(3);
  pSVar19 = (String *)(*pcVar22)();
  return pSVar19;
}


/* Boolean ContainsObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_ContainsObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)TypeInfo__Extensions->static_fields->obscuredString,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  return (byte)((uint)iVar8 >> 0x1f) ^ 1;
}


/* Single ConvertToSingle(String) */

float Assembly-CSharp.dll::Extensions::Extensions_ConvertToSingle(String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  provider = TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info;
  LOCK();
  UNLOCK();
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (s == (String *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = mscorlib.dll::System::Single::Single_Parse_1
                      (s,NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                       (IFormatProvider *)provider,(MethodInfo *)0x0);
  }
  return fVar1;
}


/* Transform FindChildRecursively(Transform, String) */

Transform *
Assembly-CSharp.dll::Extensions::Extensions_FindChildRecursively
          (Transform *transform,String *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_1[0] = 0;
  pTVar2 = (Transform__Class *)0x0;
  if (transform == (Transform *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    first = unaff_RDI;
code_?:
    FUN_?(first);
code_?:
    FUN_?();
code_?:
    pTVar3 = (Transform *)0x0;
    FUN_?();
    FUN_?();
code_?:
    FUN_?(pTVar3,first);
code_?:
    FUN_?();
  }
  else {
    first = (Transform__Class *)transform;
    pIStackX_20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (transform,(MethodInfo *)0x0);
    uStack_4 = 0;
    ppIStack_5 = &pIStackX_20;
    plStack_6 = alStack_1;
    do {
      do {
        if (pIStackX_20 == (IEnumerator *)0x0) goto code_?;
        first = (Transform__Class *)0x0;
        cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar7 == '\0') {
          alStack_1[0] = FUN_?(pIStackX_20);
          if (alStack_1[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
          }
          goto code_?;
        }
        if (pIStackX_20 == (IEnumerator *)0x0) goto code_?;
        unaff_RDI = (Transform__Class *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
        if (unaff_RDI == (Transform__Class *)0x0) goto code_?;
        pIVar8 = (unaff_RDI->_0).image;
        bVar9 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        first = unaff_RDI;
        if ((*(byte *)&pIVar8[4].assembly < bVar9) ||
           (*(Transform__Class **)((longlong)pIVar8[2].codeGenModule + (ulonglong)bVar9 * 8 + -8) !=
            TypeInfo__UnityEngine__Transform)) goto code_?;
        first = (Transform__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                          ((Object_1 *)unaff_RDI,(MethodInfo *)0x0);
        if (first == (Transform__Class *)child) goto code_?;
      } while (((first == (Transform__Class *)0x0) || (child == (String *)0x0)) ||
              (*(int *)&(first->_0).name != (child->fields)._stringLength));
      pIVar10 = &first->_0;
      first = (Transform__Class *)((longlong)&(first->_0).name + 4);
      bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)first,(uint8_t *)&(child->fields)._firstChar,
                         (longlong)*(int *)&pIVar10->name * 2,(MethodInfo *)0x0);
    } while (bVar11 == 0);
code_?:
    FUN_?(&ppIStack_5);
    pTVar2 = unaff_RDI;
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar2 != (Transform__Class *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pTVar2 == (Transform__Class *)0x0) goto code_?;
      if ((pTVar2->_0).name != (char *)0x0) {
        return (Transform *)pTVar2;
      }
    }
    pIStackX_20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (transform,(MethodInfo *)0x0);
    uStack_4 = 0;
    ppIStack_5 = &pIStackX_20;
    plStack_6 = alStack_1;
    while (pIStackX_20 != (IEnumerator *)0x0) {
      cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar7 == '\0') {
        alStack_1[0] = FUN_?(pIStackX_20,TypeInfo__System__IDisposable);
        if (alStack_1[0] == 0) {
          return (Transform *)pTVar2;
        }
        FUN_?(0,TypeInfo__System__IDisposable,alStack_1[0]);
        return (Transform *)pTVar2;
      }
      if (pIStackX_20 == (IEnumerator *)0x0) goto code_?;
      pTVar3 = (Transform *)FUN_?(1,TypeInfo__System__Collections__IEnumerator);
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pTVar3 != (Transform *)0x0) {
        bVar9 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
        first = TypeInfo__UnityEngine__Transform;
        if (((pTVar3->klass->_1).naturalAligment < bVar9) ||
           ((pTVar3->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
      }
      pTVar2 = (Transform__Class *)Extensions_FindChildRecursively(pTVar3,child,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar2 == (Transform__Class *)0x0) {
        bVar12 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar12 = (pTVar2->_0).name != (char *)0x0;
      }
      if (bVar12) {
        FUN_?(&ppIStack_5);
        return (Transform *)pTVar2;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pTVar3 = (Transform *)(*pcVar13)();
  return pTVar3;
}


/* String 
   GenerateDictionaryString[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

String * Assembly-CSharp.dll::Extensions::Extensions_GenerateDictionaryString
                   (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *collection,String *prependInfo,MethodInfo *method)

{
  pMStackX_18 = method;
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&StringLiteral__k__);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    apuStack_1[0] = &UNK_?;
    FUN_?(&StringLiteral__v__);
    LOCK();
    UNLOCK();
    if ((pMStackX_18->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      apuStack_1[0] = &UNK_?;
      FUN_?(pMStackX_18);
    }
  }
  pIVar2 = (pMStackX_18->field7_0x38).rgctx_data;
  uVar3 = (ulonglong)(pIVar2[2].klass)->actualSize;
  uVar4 = (ulonglong)(pIVar2[5].klass)->actualSize;
  pvStackX_10 = (void *)CONCAT44(pvStackX_10._4_4_,(pIVar2[5].klass)->actualSize);
  if (((pIVar2[2].klass)->field_0x135 & 1) == 0) {
    apuStack_1[0] = &UNK_?;
    FUN_?(pIVar2[2].klass);
  }
  apuStack_1[0] = &UNK_?;
  pMVar5 = pMStackX_18;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  lStack_7 = (longlong)&pvStack_8 + lVar6;
  uVar9 = (ulonglong)((pMVar5->field7_0x38).rgctx_data[8].klass)->actualSize;
  uVar10 = uVar9 + 0xf;
  if (uVar10 <= uVar9) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar6) = &UNK_?;
  FUN_?();
  lVar11 = -uVar10;
  pvStack_12 = (void *)((longlong)&pvStack_8 + lVar11 + lVar6);
  uVar9 = (ulonglong)((pMVar5->field7_0x38).rgctx_data[10].klass)->actualSize;
  uVar10 = uVar9 + 0xf;
  if (uVar10 <= uVar9) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar11 + lVar6) = &UNK_?;
  FUN_?();
  lVar13 = -uVar10;
  pvVar14 = (void *)((longlong)&pvStack_8 + lVar13 + lVar11 + lVar6);
  uVar10 = uVar3 + 0xf;
  if (uVar10 <= uVar3) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar13 + lVar11 + lVar6) = &UNK_?;
  FUN_?();
  lVar15 = -uVar10;
  pvVar16 = (void *)((longlong)&pvStack_8 + lVar15 + lVar13 + lVar11 + lVar6);
  uVar10 = uVar4 + 0xf;
  if (uVar10 <= uVar4) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar15 + lVar13 + lVar11 + lVar6) = &UNK_?;
  FUN_?();
  lVar17 = -uVar10;
  pvStack_18 = (void *)((longlong)&pvStack_8 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6);
  uVar10 = uVar3 + 0xf;
  if (uVar10 <= uVar3) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
  lVar19 = -uVar10;
  pvStackX_20 = (void *)((longlong)&pvStack_8 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6
                        );
  *(undefined **)((longlong)apuStack_1 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?(pvStackX_20,0,uVar3);
  uVar10 = uVar4 + 0xf;
  if (uVar10 <= uVar4) {
    uVar10 = 0xffffffffffffff0;
  }
  uVar10 = uVar10 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_1 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
  lVar20 = -uVar10;
  pvVar21 = (void *)((longlong)&pvStack_8 +
                   lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6);
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?(pvVar21,0);
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  pSStack_22 = this;
  length = 0;
  pSVar23 = (String *)0x0;
  if (prependInfo != (String *)0x0) {
    length = (prependInfo->fields)._stringLength;
    pSVar23 = prependInfo;
  }
  *(undefined8 *)
   ((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6 + 8) = 0;
  *(undefined4 *)
   ((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) = 0x10;
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_4
            (this,pSVar23,0,length,
             *(int32_t *)
              ((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6),
             *(MethodInfo **)
              ((longlong)alStack_24 +
              lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6 + 8));
  pSStack_25 = this;
  bVar26 = true;
  if (collection !=
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) {
    pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[1].method;
    pvStack_8 = pvVar16;
    pIVar27 = pMVar5->invoker_method;
    *(void **)((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6)
         = pvVar16;
    pIVar28 = pMVar5->methodPointer;
    *(undefined **)
     ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
         &UNK_?;
    (*pIVar27)(pIVar28,pMVar5,collection,&pvStack_8,
              *(void **)((longlong)alStack_24 +
                        lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6));
    *(undefined **)
     ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
         &UNK_?;
    FUN_?(pvStackX_20,pvVar16,uVar3);
    pvVar16 = pvStack_12;
    uStack_29 = 0;
    ppMStack_30 = &pMStackX_18;
    plStack_31 = &lStack_7;
    ppvStack_32 = &pvStackX_20;
    while( true ) {
      pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[0xc].method;
      pIVar28 = pMVar5->methodPointer;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      cVar33 = (*pIVar28)(pvStackX_20,pMVar5);
      pvVar34 = pvStack_18;
      if (cVar33 == '\0') break;
      pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[3].method;
      pvStackX_10 = pvStack_18;
      pIVar27 = pMVar5->invoker_method;
      *(void **)((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6
                ) = pvStack_18;
      pIVar28 = pMVar5->methodPointer;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      (*pIVar27)(pIVar28,pMVar5,pvStackX_20,&pvStackX_10,
                *(void **)((longlong)alStack_24 +
                          lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6));
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      FUN_?(pvVar21,pvVar34);
      if (bVar26) {
        bVar26 = false;
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      else {
        if (this == (StringBuilder *)0x0) goto code_?;
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,::StringLiteral___,(MethodInfo *)0x0);
      }
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (this,StringLiteral__k__,(MethodInfo *)0x0);
      pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[6].method;
      pvStackX_10 = pvVar16;
      pIVar27 = pMVar5->invoker_method;
      *(void **)((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6
                ) = pvVar16;
      pIVar28 = pMVar5->methodPointer;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      (*pIVar27)(pIVar28,pMVar5,pvVar21,&pvStackX_10,
                *(void **)((longlong)alStack_24 +
                          lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6));
      pvVar34 = (pMStackX_18->field7_0x38).rgctx_data[8].rgctxDataDummy;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      plVar35 = (longlong *)FUN_?(pvVar34,pvVar16);
      if (this_00 == (StringBuilder *)0x0) goto code_?;
      if (plVar35 != (longlong *)0x0) {
        pcVar36 = *(code **)(*plVar35 + 0x168);
        uVar37 = *(undefined8 *)(*plVar35 + 0x170);
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        pSVar23 = (String *)(*pcVar36)(plVar35,uVar37);
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        this_00 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_00,pSVar23,(MethodInfo *)0x0);
        if (this_00 == (StringBuilder *)0x0) goto code_?;
      }
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this_00,StringLiteral__v__,(MethodInfo *)0x0);
      pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[9].method;
      pIVar27 = pMVar5->invoker_method;
      *(void **)((longlong)alStack_24 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6
                ) = pvVar14;
      pIVar28 = pMVar5->methodPointer;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      pvStackX_10 = pvVar14;
      (*pIVar27)(pIVar28,pMVar5,pvVar21,&pvStackX_10,
                *(void **)((longlong)alStack_24 +
                          lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6));
      pvVar34 = (pMStackX_18->field7_0x38).rgctx_data[10].rgctxDataDummy;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      plVar35 = (longlong *)FUN_?(pvVar34,pvVar14);
      lVar38 = *(longlong *)(pMStackX_18->field7_0x38).methodMetadataHandle;
      if ((*(byte *)(lVar38 + 0x135) & 1) == 0) {
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        lVar38 = FUN_?(lVar38);
      }
      if (plVar35 == (longlong *)0x0) {
code_?:
        pMVar5 = (pMStackX_18->field7_0x38).rgctx_data[9].method;
        pIVar27 = pMVar5->invoker_method;
        *(void **)((longlong)alStack_24 +
                  lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) = pvVar14;
        pIVar28 = pMVar5->methodPointer;
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        pvStackX_10 = pvVar14;
        (*pIVar27)(pIVar28,pMVar5,pvVar21,&pvStackX_10,
                  *(void **)((longlong)alStack_24 +
                            lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6));
        pvVar34 = (pMStackX_18->field7_0x38).rgctx_data[10].rgctxDataDummy;
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        plVar35 = (longlong *)FUN_?(pvVar34,pvVar14);
        if (plVar35 != (longlong *)0x0) {
          pcVar36 = *(code **)(*plVar35 + 0x168);
          uVar37 = *(undefined8 *)(*plVar35 + 0x170);
          *(undefined **)
           ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
               &UNK_?;
          pSVar23 = (String *)(*pcVar36)(plVar35,uVar37);
          *(undefined **)
           ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
               &UNK_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,pSVar23,(MethodInfo *)0x0);
        }
      }
      else {
        if ((*(byte *)(*plVar35 + 0x130) < *(byte *)(lVar38 + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar35 + 200) + -8 + (ulonglong)*(byte *)(lVar38 + 0x130) * 8) !=
            lVar38)) goto code_?;
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          *(undefined **)
           ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
               &UNK_?;
          FUN_?();
        }
        pIVar28 = ((pMStackX_18->field7_0x38).rgctx_data[0xb].method)->methodPointer;
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        pSVar23 = (String *)(*pIVar28)(plVar35,::StringLiteral__);
        *(undefined **)
         ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
             &UNK_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,pSVar23,(MethodInfo *)0x0);
      }
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (this,::StringLiteral__,(MethodInfo *)0x0);
    }
    *(undefined **)
     ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
         &UNK_?;
    FUN_?(&ppMStack_30);
    if (this != (StringBuilder *)0x0) {
      pIVar28 = (pSStack_22->klass->vtable).ToString.methodPtr;
      pMVar5 = (pSStack_22->klass->vtable).ToString.method;
      *(undefined **)
       ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
           &UNK_?;
      pSVar23 = (String *)(*pIVar28)(this,pMVar5);
      return pSVar23;
    }
  }
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
code_?:
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
code_?:
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
code_?:
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
code_?:
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
  *(undefined **)
   ((longlong)apuStack_1 + lVar20 + lVar19 + lVar17 + lVar15 + lVar13 + lVar11 + lVar6) =
       &UNK_?;
  FUN_?();
  pcVar36 = (code *)swi(3);
  pSVar23 = (String *)(*pcVar36)();
  return pSVar23;
}


/* Boolean GetBool(Dictionary`2[System.Object,System.Object], String, Boolean) */

bool Assembly-CSharp.dll::Extensions::Extensions_GetBool
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,bool defaultValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (hashtable,(Object *)key,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar1 != 0) && (pOStackX_8 != (Object *)0x0)) {
      pOVar2 = (Object *)0x0;
      if (pOStackX_8->klass == pORam0000000182dbbbf8) {
        pOVar2 = pOStackX_8;
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOStackX_8->klass->_0).element_class != (pORam0000000182dbbbf8->_0).element_class) {
          FUN_?(pOStackX_8,pORam0000000182dbbbf8);
          pcVar3 = (code *)swi(3);
          bVar1 = (*pcVar3)();
          return bVar1;
        }
        defaultValue = *(bool *)&pOStackX_8[1].klass;
      }
    }
    return defaultValue;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Single GetClampedFloat(Dictionary`2[System.Object,System.Object], String, Single, Single, Single)
    */

float Assembly-CSharp.dll::Extensions::Extensions_GetClampedFloat
                (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,float min,
                float max,float defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (hashtable,(Object *)key,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar1 != 0) && (pOStackX_8 != (Object *)0x0)) {
      pOVar2 = (Object *)0x0;
      if (pOStackX_8->klass == pORam0000000182dbbc48) {
        pOVar2 = pOStackX_8;
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOStackX_8->klass->_0).element_class != (pORam0000000182dbbc48->_0).element_class) {
          FUN_?(pOStackX_8);
          pcVar3 = (code *)swi(3);
          fVar4 = (float)(*pcVar3)();
          return fVar4;
        }
        fVar4 = *(float *)&pOStackX_8[1].klass;
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        defaultValue = min;
        if ((min <= fVar4) && (defaultValue = fVar4, max < fVar4)) {
          defaultValue = max;
        }
      }
    }
    return defaultValue;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Int32 GetClampedInt(Dictionary`2[System.Object,System.Object], String, Int32, Int32, Int32) */

int32_t Assembly-CSharp.dll::Extensions::Extensions_GetClampedInt
                  (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,int32_t min,
                  int32_t max,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (hashtable,(Object *)key,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if ((bVar1 != 0) && (pOStackX_8 != (Object *)0x0)) {
      pOVar2 = (Object *)0x0;
      if (pOStackX_8->klass == pORam0000000182dbbc18) {
        pOVar2 = pOStackX_8;
      }
      if (pOVar2 != (Object *)0x0) {
        if ((pOStackX_8->klass->_0).element_class != (pORam0000000182dbbc18->_0).element_class) {
          FUN_?(pOStackX_8);
          pcVar3 = (code *)swi(3);
          iVar4 = (*pcVar3)();
          return iVar4;
        }
        iVar5 = *(int *)&pOStackX_8[1].klass;
        defaultValue = min;
        if ((min <= iVar5) && (defaultValue = iVar5, max < iVar5)) {
          defaultValue = max;
        }
      }
    }
    return defaultValue;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Color GetColor(Dictionary`2[System.Object,System.Object], String) */

Color * Assembly-CSharp.dll::Extensions::Extensions_GetColor
                  (Color *__return_storage_ptr__,
                  Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  CStack_1.r = 0.0;
  CStack_1.g = 0.0;
  CStack_1.b = 0.0;
  CStack_1.a = 0.0;
  pCVar2 = Extensions_GetColorOrDefault(aCStack_3,hashtable,colorKey,&CStack_1,(MethodInfo *)0x0);
  fVar4 = pCVar2->g;
  fVar5 = pCVar2->b;
  fVar6 = pCVar2->a;
  __return_storage_ptr__->r = pCVar2->r;
  __return_storage_ptr__->g = fVar4;
  __return_storage_ptr__->b = fVar5;
  __return_storage_ptr__->a = fVar6;
  return __return_storage_ptr__;
}


/* Color GetColorOrDefault(Dictionary`2[System.Object,System.Object], String, Color) */

Color * Assembly-CSharp.dll::Extensions::Extensions_GetColorOrDefault
                  (Color *__return_storage_ptr__,
                  Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,
                  Color *defaultColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__System__Single,0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,colorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 != (Object *)0x0) {
    if (*(int *)&pOVar1[1].monitor == 4) {
      if ((((*(int *)&pOVar1[1].monitor == 0) ||
           (fVar2 = *(float *)&pOVar1[2].klass, *(uint *)&pOVar1[1].monitor < 2)) ||
          (fVar3 = *(float *)((longlong)&pOVar1[2].klass + 4), *(uint *)&pOVar1[1].monitor < 3)) ||
         (fVar4 = *(float *)&pOVar1[2].monitor, *(uint *)&pOVar1[1].monitor < 4)) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        pCVar6 = (Color *)(*pcVar5)();
        return pCVar6;
      }
      __return_storage_ptr__->a = *(float *)((longlong)&pOVar1[2].monitor + 4);
      __return_storage_ptr__->r = fVar2;
      __return_storage_ptr__->g = fVar3;
      __return_storage_ptr__->b = fVar4;
    }
    else {
      fVar2 = defaultColor->g;
      fVar3 = defaultColor->b;
      fVar4 = defaultColor->a;
      __return_storage_ptr__->r = defaultColor->r;
      __return_storage_ptr__->g = fVar2;
      __return_storage_ptr__->b = fVar3;
      __return_storage_ptr__->a = fVar4;
    }
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}


/* Object GetObscuredType(Dictionary`2[System.Object,System.Object], String) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetObscuredType
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar2 < 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              ((Object *)pOVar1,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  pDVar8 = (hashtable->fields)._entries;
  if (pDVar8 == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  if ((uint)pDVar8->max_length <= uVar2) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    pOVar7 = (Object *)(*pcVar6)();
    return pOVar7;
  }
  return pDVar8->vector[(int)uVar2].value;
}


/* Object GetTypedValueOrDefault[Object,Object](Dictionary`2[System.Object,System.Object], Object,
   Object) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetTypedValueOrDefault
                   (Dictionary_2_System_Object_System_Object_ *hashtable,Object *key,
                   Object *defaultValue,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)hashtable,key,
                       ((method->field7_0x38).rgctx_data[2].method)->klass->rgctx_data[0x21].method)
    ;
    if (iVar1 < 0) {
      return defaultValue;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (hashtable,key,(method->field7_0x38).rgctx_data[4].method);
    pvVar3 = (method->field7_0x38).rgctx_data[3].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    lVar4 = FUN_?(pOVar2,pvVar3);
    pOVar5 = (Object *)0x0;
    if (lVar4 != 0) {
code_?:
      pvVar3 = (method->field7_0x38).rgctx_data[3].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if ((pOVar2 != (Object *)0x0) &&
         (pOVar5 = (Object *)FUN_?(pOVar2,pvVar3), pOVar5 == (Object *)0x0)) {
        FUN_?(pOVar2,pvVar3);
        pcVar6 = (code *)swi(3);
        pOVar2 = (Object *)(*pcVar6)();
        return pOVar2;
      }
      return pOVar5;
    }
    pvVar3 = (method->field7_0x38).rgctx_data[5].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pvVar3,1);
      plVar7 = (longlong *)FUN_?(lVar4 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        cVar8 = (**(code **)(*plVar7 + 0x588))(plVar7,*(undefined8 *)(*plVar7 + 0x590));
        if (cVar8 == '\0') {
          return defaultValue;
        }
        if (pOVar2 == (Object *)0x0) {
          return defaultValue;
        }
        pOVar9 = pOVar5;
        if (pOVar2->klass == pORam0000000182dbbc18) {
          pOVar9 = pOVar2;
        }
        if (pOVar9 == (Object *)0x0) {
          return defaultValue;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* __Il2CppFullySharedGenericType
   GetTypedValueOrDefault[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Extensions::Extensions_GetTypedValueOrDefault_1
          (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *hashtable,_Il2CppFullySharedGenericType *key,_Il2CppFullySharedGenericType *defaultValue
          ,MethodInfo *method)

{
  lVar1 = CONCAT71(in_stack_2,in_stack_3);
  auStackX_10._0_8_ = key;
  auStackX_10._8_8_ = defaultValue;
  pMStackX_20 = method;
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    apuStack_4[0] = &UNK_?;
    FUN_?(lVar1);
  }
  uVar5 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18) + 0xfc);
  uVar6 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 8) + 0xfc);
  apuStack_4[0] = &UNK_?;
  lVar7 = FUN_?(0xffffffffffffff0);
  lVar7 = -lVar7;
  plVar8 = (longlong *)((longlong)aplStack_9 + lVar7);
  *(undefined **)((longlong)apuStack_4 + lVar7) = &UNK_?;
  lVar10 = FUN_?();
  lVar10 = -lVar10;
  plVar11 = (longlong *)((longlong)aplStack_9 + lVar10 + lVar7);
  p_Var15 = (_Il2CppFullySharedGenericType *)auStackX_10;
  if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 8) + 0x28) < 0) {
    p_Var15 = key;
  }
  *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
  FUN_?(plVar8,p_Var15,uVar6);
  if (hashtable ==
      (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
       *)0x0) goto code_?;
  aplStack_9[0] = plVar8;
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 8) + 0x28)) {
    aplStack_9[0] = (longlong *)*plVar8;
  }
  lVar12 = *(longlong *)(lVar1 + 0x38);
  *(char **)((longlong)alStack_13 + lVar10 + lVar7) = &stack0x00000028;
  puVar14 = *(undefined8 **)(lVar12 + 0x10);
  pcVar15 = (code *)puVar14[2];
  uVar16 = *puVar14;
  *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
  (*pcVar15)(uVar16,puVar14,hashtable,aplStack_9);
  if (in_stack_3 == '\0') {
    iVar17 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18) + 0x28);
  }
  else {
    p_Var15 = (_Il2CppFullySharedGenericType *)auStackX_10;
    if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 8) + 0x28) < 0) {
      p_Var15 = key;
    }
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    FUN_?(plVar8,p_Var15,uVar6);
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 8) + 0x28)) {
      plVar8 = (longlong *)*plVar8;
    }
    puVar14 = *(undefined8 **)(*(longlong *)(lVar1 + 0x38) + 0x20);
    aplStack_9[0] = plVar8;
    aplStack_9[1] = plVar11;
    *(longlong **)((longlong)alStack_13 + lVar10 + lVar7) = plVar11;
    pcVar15 = (code *)puVar14[2];
    uVar16 = *puVar14;
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    (*pcVar15)(uVar16,puVar14,hashtable,aplStack_9);
    uVar16 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    plVar8 = (longlong *)FUN_?(uVar16,plVar11);
    lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
      lVar12 = FUN_?(lVar12);
    }
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    lVar12 = FUN_?(plVar8,lVar12);
    plVar18 = (longlong *)0x0;
    if (lVar12 != 0) {
code_?:
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
        lVar1 = FUN_?(lVar1);
      }
      if (*(int *)(lVar1 + 0x28) < 0) {
        if ((*(longlong *)(lVar1 + 0x60) == 0) || ((*(byte *)(lVar1 + 0x135) & 8) == 0)) {
          if (plVar8 == (longlong *)0x0) {
code_?:
            *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
            FUN_?();
            pcVar15 = (code *)swi(3);
            p_Var15 = (_Il2CppFullySharedGenericType *)(*pcVar15)();
            return p_Var15;
          }
          if (*(longlong *)(*plVar8 + 0x40) != *(longlong *)(lVar1 + 0x40))
          goto code_?;
          plVar11 = plVar8 + 2;
        }
        else {
          if ((plVar8 != (longlong *)0x0) &&
             (lVar12 = *(longlong *)(lVar1 + 0x40), *plVar8 != lVar12)) {
            *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
            FUN_?(plVar8,lVar12);
            pcVar15 = (code *)swi(3);
            p_Var15 = (_Il2CppFullySharedGenericType *)(*pcVar15)();
            return p_Var15;
          }
          puVar19 = (undefined1 *)
                    ((longlong)*(int *)(*(longlong *)(lVar1 + 0x80) + 0x38) + (longlong)plVar11);
          puVar20 = puVar19 + -0x10;
          if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x80) + 0x30) + 0x28)) {
            puVar20 = puVar19;
          }
          iVar17 = *(int *)(*(longlong *)(lVar1 + 0x40) + 0xf8);
          if (plVar8 == (longlong *)0x0) {
            *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
            FUN_?(puVar20,0);
            *(undefined1 *)plVar11 = 0;
          }
          else {
            *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
            FUN_?(puVar20,plVar8 + 2,iVar17 + -0x10);
            *(undefined1 *)plVar11 = 1;
          }
        }
      }
      else {
        if (plVar8 != (longlong *)0x0) {
          *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
          plVar18 = (longlong *)FUN_?(plVar8,lVar1);
          if (plVar18 == (longlong *)0x0) {
code_?:
            *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
            FUN_?(plVar8,lVar1);
            pcVar15 = (code *)swi(3);
            p_Var15 = (_Il2CppFullySharedGenericType *)(*pcVar15)();
            return p_Var15;
          }
        }
        *plVar11 = (longlong)plVar18;
      }
      goto code_?;
    }
    lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x28);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
      FUN_?();
    }
    if (lVar12 == 0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
      FUN_?();
    }
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    lVar12 = FUN_?(lVar12,1);
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    plVar21 = (longlong *)FUN_?(lVar12 + 0x20);
    if (plVar21 == (longlong *)0x0) goto code_?;
    pcVar15 = *(code **)(*plVar21 + 0x588);
    uVar16 = *(undefined8 *)(*plVar21 + 0x590);
    *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
    cVar22 = (*pcVar15)(plVar21,uVar16);
    if ((cVar22 != '\0') && (plVar8 != (longlong *)0x0)) {
      plVar21 = plVar18;
      if (*plVar8 == lRam_?) {
        plVar21 = plVar8;
      }
      if (plVar21 != (longlong *)0x0) goto code_?;
    }
    iVar17 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x18) + 0x28);
  }
  p_Var15 = (_Il2CppFullySharedGenericType *)(auStackX_10 + 8);
  if (iVar17 < 0) {
    p_Var15 = defaultValue;
  }
  *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
  FUN_?(plVar11,p_Var15,uVar5);
code_?:
  *(undefined **)((longlong)apuStack_4 + lVar10 + lVar7) = &UNK_?;
  p_Var15 = (_Il2CppFullySharedGenericType *)FUN_?(pMStackX_20,plVar11,uVar5);
  return p_Var15;
}


/* Boolean GetValueOrDefault[Boolean](Dictionary`2[System.Object,System.Object], String, Boolean) */

bool Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,bool defaultValue,
               MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return defaultValue;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (hashtable,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  lVar4 = FUN_?(pOVar2,pvVar3);
  if (lVar4 == 0) {
    pvVar3 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pvVar3,1);
    plVar5 = (longlong *)FUN_?(lVar4 + 0x20);
    if (plVar5 == (longlong *)0x0) goto code_?;
    cVar6 = (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
    if (cVar6 == '\0') {
      return defaultValue;
    }
    if (pOVar2 == (Object *)0x0) {
      return defaultValue;
    }
    pOVar7 = (Object *)0x0;
    if (pOVar2->klass == pORam0000000182dbbc18) {
      pOVar7 = pOVar2;
    }
    if (pOVar7 == (Object *)0x0) {
      return defaultValue;
    }
  }
  lVar4 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_?(lVar4);
  }
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lVar4 + 0x40)) {
      return *(bool *)&pOVar2[1].klass;
    }
    FUN_?(pOVar2,lVar4);
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Int32Enum GetValueOrDefault[Int32Enum](Dictionary`2[System.Object,System.Object], String,
   Int32Enum) */

Int32Enum__Enum
Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_2
          (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
          Int32Enum__Enum defaultValue,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return defaultValue;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (hashtable,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  lVar4 = FUN_?(pOVar2,pvVar3);
  if (lVar4 == 0) {
    pvVar3 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pvVar3,1);
    plVar5 = (longlong *)FUN_?(lVar4 + 0x20);
    if (plVar5 == (longlong *)0x0) goto code_?;
    cVar6 = (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
    if (cVar6 == '\0') {
      return defaultValue;
    }
    if (pOVar2 == (Object *)0x0) {
      return defaultValue;
    }
    pOVar7 = (Object *)0x0;
    if (pOVar2->klass == pORam0000000182dbbc18) {
      pOVar7 = pOVar2;
    }
    if (pOVar7 == (Object *)0x0) {
      return defaultValue;
    }
  }
  lVar4 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_?(lVar4);
  }
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lVar4 + 0x40)) {
      return *(Int32Enum__Enum *)&pOVar2[1].klass;
    }
    FUN_?(pOVar2,lVar4);
    pcVar8 = (code *)swi(3);
    IVar9 = (*pcVar8)();
    return IVar9;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  IVar9 = (*pcVar8)();
  return IVar9;
}


/* Object GetValueOrDefault[Object](Dictionary`2[System.Object,System.Object], String, Object) */

Object * Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_3
                   (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
                   Object *defaultValue,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)hashtable,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return defaultValue;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (hashtable,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    lVar4 = FUN_?(pOVar2,pvVar3);
    pOVar5 = (Object *)0x0;
    if (lVar4 != 0) {
code_?:
      pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
        pvVar3 = (void *)FUN_?(pvVar3);
      }
      if ((pOVar2 != (Object *)0x0) &&
         (pOVar5 = (Object *)FUN_?(pOVar2,pvVar3), pOVar5 == (Object *)0x0)) {
        FUN_?(pOVar2,pvVar3);
        pcVar6 = (code *)swi(3);
        pOVar2 = (Object *)(*pcVar6)();
        return pOVar2;
      }
      return pOVar5;
    }
    pvVar3 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pvVar3,1);
      plVar7 = (longlong *)FUN_?(lVar4 + 0x20);
      if (plVar7 != (longlong *)0x0) {
        cVar8 = (**(code **)(*plVar7 + 0x588))(plVar7,*(undefined8 *)(*plVar7 + 0x590));
        if (cVar8 == '\0') {
          return defaultValue;
        }
        if (pOVar2 == (Object *)0x0) {
          return defaultValue;
        }
        pOVar9 = pOVar5;
        if (pOVar2->klass == pORam0000000182dbbc18) {
          pOVar9 = pOVar2;
        }
        if (pOVar9 == (Object *)0x0) {
          return defaultValue;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar6)();
  return pOVar2;
}


/* Single GetValueOrDefault[Single](Dictionary`2[System.Object,System.Object], String, Single) */

float Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_4
                (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,float defaultValue
                ,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    return defaultValue;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (hashtable,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  pvVar3 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  lVar4 = FUN_?(pOVar2,pvVar3);
  if (lVar4 == 0) {
    pvVar3 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar3 == (void *)0x0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pvVar3,1);
    plVar5 = (longlong *)FUN_?(lVar4 + 0x20);
    if (plVar5 == (longlong *)0x0) goto code_?;
    cVar6 = (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
    if (cVar6 == '\0') {
      return defaultValue;
    }
    if (pOVar2 == (Object *)0x0) {
      return defaultValue;
    }
    pOVar7 = (Object *)0x0;
    if (pOVar2->klass == pORam0000000182dbbc18) {
      pOVar7 = pOVar2;
    }
    if (pOVar7 == (Object *)0x0) {
      return defaultValue;
    }
  }
  lVar4 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_?(lVar4);
  }
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lVar4 + 0x40)) {
      return *(float *)&pOVar2[1].klass;
    }
    FUN_?(pOVar2,lVar4);
    pcVar8 = (code *)swi(3);
    fVar9 = (float)(*pcVar8)();
    return fVar9;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  fVar9 = (float)(*pcVar8)();
  return fVar9;
}


/* __Il2CppFullySharedGenericType
   GetValueOrDefault[__Il2CppFullySharedGenericType](Dictionary`2[System.Object,System.Object],
   String, __Il2CppFullySharedGenericType) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Extensions::Extensions_GetValueOrDefault_5
          (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
          _Il2CppFullySharedGenericType *defaultValue,MethodInfo *method)

{
  _StackX_18.klass = (_Il2CppFullySharedGenericType__Class *)defaultValue;
  _StackX_18.monitor = (MonitorData *)method;
  if (*(longlong *)(in_stack_1 + 0x38) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    apuStack_2[0] = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    if (*(longlong *)(in_stack_1 + 0x38) == 0) {
      apuStack_2[0] = &UNK_?;
      FUN_?(in_stack_1);
    }
  }
  uVar3 = *(undefined4 *)(**(longlong **)(in_stack_1 + 0x38) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  pOVar5 = (Object *)(&stack0xffffffffffffffc8 + lVar4);
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
              ->klass->rgctx_data[0x21].method;
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)hashtable,(Object *)key,method_00);
  if (iVar6 < 0) {
    p_Var12 = &_StackX_18;
    if (*(int *)(**(longlong **)(in_stack_1 + 0x38) + 0x28) < 0) {
      p_Var12 = defaultValue;
    }
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    FUN_?(pOVar5,p_Var12,uVar3);
    goto code_?;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (hashtable,(Object *)key,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  lVar8 = **(longlong **)(in_stack_1 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    lVar8 = FUN_?(lVar8);
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  lVar8 = FUN_?(pOVar7,lVar8);
  pOVar9 = (Object *)0x0;
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(*(longlong *)(in_stack_1 + 0x38) + 8);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
      FUN_?();
    }
    if (lVar8 == 0) goto code_?;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
      FUN_?();
    }
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    lVar8 = FUN_?(lVar8,1);
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    plVar10 = (longlong *)FUN_?(lVar8 + 0x20);
    if (plVar10 == (longlong *)0x0) goto code_?;
    pcVar11 = *(code **)(*plVar10 + 0x588);
    uVar12 = *(undefined8 *)(*plVar10 + 0x590);
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    cVar13 = (*pcVar11)(plVar10,uVar12);
    if ((cVar13 != '\0') && (pOVar7 != (Object *)0x0)) {
      pOVar14 = pOVar9;
      if (pOVar7->klass == pORam0000000182dbbc18) {
        pOVar14 = pOVar7;
      }
      if (pOVar14 != (Object *)0x0) goto code_?;
    }
    p_Var12 = &_StackX_18;
    if (*(int *)(**(longlong **)(in_stack_1 + 0x38) + 0x28) < 0) {
      p_Var12 = defaultValue;
    }
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    FUN_?(pOVar5,p_Var12,uVar3);
    method = (MethodInfo *)_StackX_18.monitor;
  }
  else {
code_?:
    lVar8 = **(longlong **)(in_stack_1 + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
      lVar8 = FUN_?(lVar8);
    }
    if (*(int *)(lVar8 + 0x28) < 0) {
      if ((*(longlong *)(lVar8 + 0x60) == 0) || ((*(byte *)(lVar8 + 0x135) & 8) == 0)) {
        if (pOVar7 == (Object *)0x0) {
code_?:
          *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
          FUN_?();
          pcVar11 = (code *)swi(3);
          p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar11)();
          return p_Var12;
        }
        if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lVar8 + 0x40))
        goto code_?;
        pOVar5 = pOVar7 + 1;
        method = (MethodInfo *)_StackX_18.monitor;
      }
      else {
        if ((pOVar7 != (Object *)0x0) &&
           (pOVar15 = *(Object__Class **)(lVar8 + 0x40), pOVar7->klass != pOVar15)) {
          *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
          FUN_?(pOVar7,pOVar15);
          pcVar11 = (code *)swi(3);
          p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar11)();
          return p_Var12;
        }
        puVar16 = (undefined1 *)
                  ((longlong)&pOVar5->klass +
                  (longlong)*(int *)(*(longlong *)(lVar8 + 0x80) + 0x38));
        puVar17 = puVar16 + -0x10;
        if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x80) + 0x30) + 0x28)) {
          puVar17 = puVar16;
        }
        iVar18 = *(int *)(*(longlong *)(lVar8 + 0x40) + 0xf8);
        if (pOVar7 == (Object *)0x0) {
          *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
          FUN_?(puVar17,0);
          *(undefined1 *)&pOVar5->klass = 0;
          method = (MethodInfo *)_StackX_18.monitor;
        }
        else {
          *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
          FUN_?(puVar17,pOVar7 + 1,iVar18 + -0x10);
          *(undefined1 *)&pOVar5->klass = 1;
          method = (MethodInfo *)_StackX_18.monitor;
        }
      }
    }
    else {
      if (pOVar7 != (Object *)0x0) {
        *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
        pOVar9 = (Object *)FUN_?(pOVar7,lVar8);
        if (pOVar9 == (Object *)0x0) {
code_?:
          *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
          FUN_?(pOVar7,lVar8);
          pcVar11 = (code *)swi(3);
          p_Var12 = (_Il2CppFullySharedGenericType *)(*pcVar11)();
          return p_Var12;
        }
      }
      pOVar5->klass = (Object__Class *)pOVar9;
      method = (MethodInfo *)_StackX_18.monitor;
    }
  }
code_?:
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  p_Var12 = (_Il2CppFullySharedGenericType *)FUN_?(method,pOVar5,uVar3);
  return p_Var12;
}


/* Vector3 GetVector3(Dictionary`2[System.Object,System.Object], String) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_GetVector3
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Object_System_Object_ *hashtable,String *vectorKey,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.z = 0.0;
  pVVar2 = Extensions_GetVector3OrDefault
                     (&VStack_3,hashtable,vectorKey,&VStack_1,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 GetVector3OrDefault(Dictionary`2[System.Object,System.Object], String, Vector3) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_GetVector3OrDefault
                    (Vector3 *__return_storage_ptr__,
                    Dictionary_2_System_Object_System_Object_ *hashtable,String *vectorKey,
                    Vector3 *defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(TypeInfo__System__Single,0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions_GetValueOrDefault_3
                     (hashtable,vectorKey,pOVar1,
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                     );
  if (pOVar1 != (Object *)0x0) {
    if (*(int *)&pOVar1[1].monitor == 3) {
      if (((*(int *)&pOVar1[1].monitor == 0) || (*(uint *)&pOVar1[1].monitor < 2)) ||
         (fVar2 = *(float *)((longlong)&pOVar1[2].klass + 4), *(uint *)&pOVar1[1].monitor < 3)) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar3)();
        return pVVar4;
      }
      fVar5 = *(float *)&pOVar1[2].monitor;
      __return_storage_ptr__->x = *(float *)&pOVar1[2].klass;
      __return_storage_ptr__->y = fVar2;
    }
    else {
      fVar2 = defaultValue->y;
      fVar5 = defaultValue->z;
      __return_storage_ptr__->x = defaultValue->x;
      __return_storage_ptr__->y = fVar2;
    }
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar3)();
  return pVVar4;
}


/* Void 
   Log[__Il2CppFullySharedGenericType,__Il2CppFullySharedGenericType](Dictionary`2[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String) */

void Assembly-CSharp.dll::Extensions::Extensions_Log
               (Dictionary_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *collection,String *prependInfo,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                    (collection,prependInfo,(method->field7_0x38).rgctx_data[1].method);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,uVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void 
   LogError[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogError
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Action<System::String>,prependInfo,
                  CONCAT71(in_register_00000081,eachEntryNewLine));
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__LogError_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,(ulonglong)eachEntryNewLine,
             (method->field7_0x38).rgctx_data[1].method);
  return;
}


/* Void LogErrorRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogErrorRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__LogError_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogError_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Extensions_BuildStringRecursive
                     (collection,prependInfo,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (UnityAction_1_System_Object_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (this->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((this->fields)._._.method_code,pSVar1,(this->fields)._._.method,UNRECOVERED_JUMPTABLE
              );
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void LogRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__Log_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Extensions_BuildStringRecursive
                     (collection,prependInfo,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (UnityAction_1_System_Object_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (this->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((this->fields)._._.method_code,pSVar1,(this->fields)._._.method,UNRECOVERED_JUMPTABLE
              );
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void LogRecursive(IEnumerable, Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogRecursive_1
               (IEnumerable *collection,Action_1_String_ *logFunc,String *prependInfo,
               bool eachEntryNewLine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Extensions_BuildStringRecursive
                     (collection,prependInfo,eachEntryNewLine,(MethodInfo *)0x0);
  if (logFunc != (Action_1_String_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (logFunc->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((logFunc->fields)._._.method_code,pSVar1,(logFunc->fields)._._.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void 
   LogWarning[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarning
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Action<System::String>,prependInfo,
                  CONCAT71(in_register_00000081,eachEntryNewLine));
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__LogWarning_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,(ulonglong)eachEntryNewLine,
             (method->field7_0x38).rgctx_data[1].method);
  return;
}


/* Void LogWarningRecursive(IEnumerable, String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_LogWarningRecursive
               (IEnumerable *collection,String *prependInfo,bool eachEntryNewLine,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__LogWarning_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__LogWarning_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = Extensions_BuildStringRecursive
                     (collection,prependInfo,eachEntryNewLine,(MethodInfo *)0x0);
  if (this != (UnityAction_1_System_Object_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (this->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((this->fields)._._.method_code,pSVar1,(this->fields)._._.method,UNRECOVERED_JUMPTABLE
              );
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void 
   Log[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_1
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               String *prependInfo,bool eachEntryNewLine,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Action<System::String>,prependInfo,
                  CONCAT71(in_register_00000081,eachEntryNewLine));
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Debug__Log_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,MethodInfo__UnityEngine__Debug__Log_System__Object_,
             (MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
            (collection,this,prependInfo,(ulonglong)eachEntryNewLine,
             (method->field7_0x38).rgctx_data[1].method);
  return;
}


/* Void 
   Log[__Il2CppFullySharedGenericType](IEnumerable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   Action`1[String], String, Boolean) */

void Assembly-CSharp.dll::Extensions::Extensions_Log_2
               (IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *collection,
               Action_1_String_ *logFunc,String *prependInfo,bool eachEntryNewLine,
               MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__Extensions,logFunc,prependInfo,
                  CONCAT71(in_register_00000089,eachEntryNewLine));
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                    (collection,prependInfo,(ulonglong)eachEntryNewLine,
                     (method->field7_0x38).rgctx_data[1].method);
  if (logFunc != (Action_1_String_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (logFunc->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((logFunc->fields)._._.method_code,uVar1,(logFunc->fields)._._.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Boolean RemoveObscuredKey(Dictionary`2[System.Object,System.Object], String) */

bool Assembly-CSharp.dll::Extensions::Extensions_RemoveObscuredKey
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
            ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pMVar6 = 
  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
  ;
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  pOVar1 = TypeInfo__Extensions->static_fields->obscuredString;
  if (pOVar1 == (ObscuredString *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
              (ExceptionArgument__Enum_key,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  if ((hashtable->fields)._buckets != (Int32__Array *)0x0) {
    pIVar9 = (hashtable->fields)._comparer;
    if (pIVar9 == (IEqualityComparer_1_System_Object_ *)0x0) {
      uVar2 = (*(pOVar1->klass->vtable).GetHashCode.methodPtr)
                         (pOVar1,(pOVar1->klass->vtable).GetHashCode.method);
    }
    else {
      pvVar10 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
        pvVar10 = (void *)FUN_?(pvVar10);
      }
      uVar2 = FUN_?(1,pvVar10,pIVar9,pOVar1);
    }
    pIVar11 = (hashtable->fields)._buckets;
    if (pIVar11 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    uVar12 = (int)(uVar2 & 0x7fffffff) % (int)pIVar11->max_length;
    if ((uint)pIVar11->max_length <= uVar12) {
DAT_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    uVar13 = pIVar11->vector[(int)uVar12] - 1;
    uVar14 = 0xffffffff;
    while (uVar15 = uVar13, -1 < (int)uVar15) {
      pDVar16 = (hashtable->fields)._entries;
      if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
      goto code_?;
      if ((uint)pDVar16->max_length <= uVar15) goto DAT_?;
      if (pDVar16->vector[(int)uVar15].hashCode == (uVar2 & 0x7fffffff)) {
        pIVar9 = (hashtable->fields)._comparer;
        pIVar17 = pMVar6->klass->rgctx_data;
        if (pIVar9 == (IEqualityComparer_1_System_Object_ *)0x0) {
          pEVar18 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
                    EqualityComparer_1_System_Object__get_Default(pIVar17[3].method);
          if (pEVar18 == (EqualityComparer_1_System_Object_ *)0x0) goto code_?;
          cVar19 = (*(pEVar18->klass->vtable).__unknown.methodPtr)
                             (pEVar18,pDVar16->vector[(int)uVar15].key,pOVar1,
                              (pEVar18->klass->vtable).__unknown.method);
        }
        else {
          pvVar10 = pIVar17[1].rgctxDataDummy;
          pOVar20 = pDVar16->vector[(int)uVar15].key;
          if ((*(byte *)((longlong)pvVar10 + 0x135) & 1) == 0) {
            pvVar10 = (void *)FUN_?(pvVar10);
          }
          cVar19 = FUN_?(0,pvVar10,pIVar9,pOVar20,pOVar1);
        }
        if (cVar19 != '\0') {
          if ((int)uVar14 < 0) {
            pIVar11 = (hashtable->fields)._buckets;
            if (pIVar11 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar11->max_length <= uVar12) goto DAT_?;
            pIVar11->vector[(int)uVar12] = pDVar16->vector[(int)uVar15].next + 1;
          }
          else {
            pDVar21 = (hashtable->fields)._entries;
            if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0
               ) goto code_?;
            if ((uint)pDVar21->max_length <= uVar14) goto DAT_?;
            pDVar21->vector[(int)uVar14].next = pDVar16->vector[(int)uVar15].next;
          }
          pDVar16->vector[(int)uVar15].hashCode = -1;
          pDVar16->vector[(int)uVar15].next = (hashtable->fields)._freeList;
          pDVar16->vector[(int)uVar15].key = (Object *)0x0;
          pDVar16->vector[(int)uVar15].value = (Object *)0x0;
          piVar22 = &(hashtable->fields)._freeCount;
          *piVar22 = *piVar22 + 1;
          piVar22 = &(hashtable->fields)._version;
          *piVar22 = *piVar22 + 1;
          (hashtable->fields)._freeList = uVar15;
          return 1;
        }
      }
      uVar14 = uVar15;
      uVar13 = pDVar16->vector[(int)uVar15].next;
    }
  }
  return 0;
}


/* Void ScaleBounds(GameObject, Single) */

void Assembly-CSharp.dll::Extensions::Extensions_ScaleBounds
               (GameObject *gameObject,float targetSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Bounds>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_find_bounds_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pNVar3 = SharedCubeFunctions::SharedCubeFunctions_GetAxisAlignedBoundsRecursively
                     (&NStack_4,pTVar2,(MethodInfo *)0x0);
  bVar5 = pNVar3->hasValue;
  uStack_6 = pNVar3->field_0x1;
  uStack_7 = pNVar3->field_0x2;
  uStack_8 = pNVar3->field_0x3;
  uStack_9 = *(undefined1 *)&(pNVar3->value).m_Center.x;
  uStack_10 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.x + 1);
  uStack_11 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.x + 2);
  uStack_12 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.x + 3);
  uStack_13 = *(undefined1 *)&(pNVar3->value).m_Center.y;
  uStack_14 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.y + 1);
  uStack_15 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.y + 2);
  uStack_16 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.y + 3);
  uStack_17 = *(undefined1 *)&(pNVar3->value).m_Center.z;
  uStack_18 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.z + 1);
  uStack_19 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.z + 2);
  uStack_20 = *(undefined1 *)((longlong)&(pNVar3->value).m_Center.z + 3);
  uVar21 = (pNVar3->value).m_Extents.x;
  uVar22 = (pNVar3->value).m_Extents.y;
  fStack_23 = (pNVar3->value).m_Extents.z;
  bStack_24 = bVar5;
  fStack_25 = (float)uVar21;
  fStack_26 = (float)uVar22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  NStack_4._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector;
  NStack_4.value.m_Extents.x = NStack_4.value.m_Center.x * _UNK_?;
  NStack_4.value.m_Center.z = NStack_4._0_4_ * _UNK_?;
  NStack_4.value.m_Extents.y =
       (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z * _UNK_?;
  if (bVar5 == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Failed_to_find_bounds_,(MethodInfo *)0x0);
  }
  else {
    NStack_4._1_1_ = uStack_10;
    NStack_4.hasValue = uStack_9;
    NStack_4._2_1_ = uStack_11;
    NStack_4._3_1_ = uStack_12;
    NStack_4.value.m_Center.x._0_1_ = uStack_13;
    NStack_4.value.m_Center.x._1_1_ = uStack_14;
    NStack_4.value.m_Center.x._2_1_ = uStack_15;
    NStack_4.value.m_Center.x._3_1_ = uStack_16;
    NStack_4.value.m_Center.y =
         (float)CONCAT13(uStack_20,CONCAT12(uStack_19,CONCAT11(uStack_18,uStack_17)));
    NStack_4.value.m_Center.z = fStack_25;
    NStack_4.value.m_Extents.x = fStack_26;
    NStack_4.value.m_Extents.y = fStack_23;
  }
  fVar27 = NStack_4.value.m_Extents.x + NStack_4.value.m_Extents.x;
  if (NStack_4.value.m_Extents.x + NStack_4.value.m_Extents.x <=
      NStack_4.value.m_Extents.y + NStack_4.value.m_Extents.y) {
    fVar27 = NStack_4.value.m_Extents.y + NStack_4.value.m_Extents.y;
  }
  fVar28 = NStack_4.value.m_Center.z * TypeRef__System__Activator__T._0_4_;
  if (NStack_4.value.m_Center.z * TypeRef__System__Activator__T._0_4_ <= fVar27) {
    fVar28 = fVar27;
  }
  fVar28 = targetSize / fVar28;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (gameObject,(MethodInfo *)0x0);
  if (pTVar2 == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  NStack_4.value.m_Center.x = fVar28;
  NStack_4._0_4_ = fVar28;
  NStack_4.value.m_Center.y = fVar28;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar29 = (pTVar2->fields)._._.m_CachedPtr;
  if (pvVar29 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar30 = func_?(&UNK_?);
    FUN_?(uVar30,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar29,&NStack_4);
  return;
}


/* Void SetColor(Dictionary`2[System.Object,System.Object], String, Color) */

void Assembly-CSharp.dll::Extensions::Extensions_SetColor
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *colorKey,Color *color,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ,colorKey,color,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Object *)FUN_?(TypeInfo__System__Single,4);
  if (value != (Object *)0x0) {
    if ((((*(int *)&value[1].monitor == 0) ||
         (*(float *)&value[2].klass = color->r, *(uint *)&value[1].monitor < 2)) ||
        (*(float *)((longlong)&value[2].klass + 4) = color->g, *(uint *)&value[1].monitor < 3)) ||
       (*(float *)&value[2].monitor = color->b, *(uint *)&value[1].monitor < 4)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)((longlong)&value[2].monitor + 4) = color->a;
    if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (hashtable,(Object *)colorKey,value,CONCAT31((int3)((uint)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetObscuredType[ObscuredBool](Dictionary`2[System.Object,System.Object], String,
   ObscuredBool) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredBool *value
               ,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  uStack_7._0_1_ = value->currentCryptoKey;
  uStack_7._1_3_ = *(undefined3 *)&value->field_0x1;
  uStack_7._4_4_ = value->hiddenValue;
  uStack_8._0_1_ = value->fakeValue;
  uStack_8._1_1_ = value->fakeValueChanged;
  uStack_8._2_1_ = value->inited;
  uStack_8._3_1_ = value->field_0xb;
  pOVar2 = TypeInfo__Extensions->static_fields->obscuredString;
  value_00 = (Object *)FUN_?(((method->field7_0x38).rgctx_data)->rgctxDataDummy,&uStack_7);
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (hashtable,(Object *)pOVar2,value_00,CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Void SetObscuredType[ObscuredFloat](Dictionary`2[System.Object,System.Object], String,
   ObscuredFloat) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_1
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
               ObscuredFloat *value,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  iStack_7 = value->currentCryptoKey;
  AStack_8 = value->hiddenValue;
  uStack_9 = *(undefined4 *)&value->hiddenValueOld;
  uStack_10 = *(undefined4 *)((longlong)&value->hiddenValueOld + 4);
  uStack_11._0_4_ = value->fakeValue;
  uStack_11._4_1_ = value->inited;
  uStack_11._5_3_ = *(undefined3 *)&value->field_0x15;
  pOVar2 = TypeInfo__Extensions->static_fields->obscuredString;
  value_00 = (Object *)FUN_?(((method->field7_0x38).rgctx_data)->rgctxDataDummy,&iStack_7);
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (hashtable,(Object *)pOVar2,value_00,CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Void SetObscuredType[ObscuredInt](Dictionary`2[System.Object,System.Object], String, ObscuredInt)
    */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_2
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,ObscuredInt *value,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar2;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  iStack_7 = value->currentCryptoKey;
  iStack_8 = value->hiddenValue;
  iStack_9 = value->fakeValue;
  uStack_10 = *(undefined4 *)&value->inited;
  pOVar2 = TypeInfo__Extensions->static_fields->obscuredString;
  value_00 = (Object *)FUN_?(((method->field7_0x38).rgctx_data)->rgctxDataDummy,&iStack_7);
  if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (hashtable,(Object *)pOVar2,value_00,CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Void SetObscuredType[__Il2CppFullySharedGenericType](Dictionary`2[System.Object,System.Object],
   String, __Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Extensions::Extensions_SetObscuredType_3
               (Dictionary_2_System_Object_System_Object_ *hashtable,String *key,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  _StackX_18.klass = (_Il2CppFullySharedGenericType__Class *)value;
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    apuStack_2[0] = &UNK_?;
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    apuStack_2[0] = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      apuStack_2[0] = &UNK_?;
      FUN_?(method);
    }
  }
  uVar3 = ((method->field7_0x38).rgctx_data)->klass->actualSize;
  apuStack_2[0] = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    FUN_?();
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(key,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    FUN_?();
  }
  TypeInfo__Extensions->static_fields->obscuredString = pOVar5;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pOVar5 = TypeInfo__Extensions->static_fields->obscuredString;
  p_Var9 = &_StackX_18;
  if (*(int *)&((method->field7_0x38).rgctx_data)->method->return_type < 0) {
    p_Var9 = value;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar4,p_Var9,uVar3);
  pvVar10 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  value_00 = (Object *)FUN_?(pvVar10,&stack0xffffffffffffffd8 + lVar4);
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    *(Il2CppRGCTXData *)((longlong)aIStack_11 + lVar4) =
         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
         ->klass->rgctx_data[0x22];
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (hashtable,(Object *)pOVar5,value_00,CONCAT31((int3)((uint)uVar1 >> 8),1),
               *(MethodInfo **)((longlong)aIStack_11 + lVar4));
    return;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String ToSerializeString(Vector3) */

String * Assembly-CSharp.dll::Extensions::Extensions_ToSerializeString
                   (Vector3 *vec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  LOCK();
  UNLOCK();
  pSVar1 = mscorlib.dll::System::Single::Single_ToString_1
                     ((Single *)vec,
                      (IFormatProvider *)
                      TypeInfo__System__Globalization__CultureInfo->static_fields->
                      invariant_culture_info,(MethodInfo *)0x0);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2(this,pSVar1,(MethodInfo *)0x0)
    ;
    pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                       (this,::StringLiteral__,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Globalization__CultureInfo);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__Globalization__CultureInfo);
    }
    LOCK();
    UNLOCK();
    pSVar1 = mscorlib.dll::System::Single::Single_ToString_1
                       ((Single *)&vec->y,
                        (IFormatProvider *)
                        TypeInfo__System__Globalization__CultureInfo->static_fields->
                        invariant_culture_info,(MethodInfo *)0x0);
    if (pSVar2 != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar2,pSVar1,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (this,::StringLiteral__,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Globalization__CultureInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__System__Globalization__CultureInfo);
      }
      LOCK();
      UNLOCK();
      pSVar1 = mscorlib.dll::System::Single::Single_ToString_1
                         ((Single *)&vec->z,
                          (IFormatProvider *)
                          TypeInfo__System__Globalization__CultureInfo->static_fields->
                          invariant_culture_info,(MethodInfo *)0x0);
      if (pSVar2 != (StringBuilder *)0x0) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar1 = (String *)
                 (*(this->klass->vtable).ToString.methodPtr)
                           (this,(this->klass->vtable).ToString.method);
        return pSVar1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Vector3 ToVector3FromSerializeString(String) */

Vector3 * Assembly-CSharp.dll::Extensions::Extensions_ToVector3FromSerializeString
                    (Vector3 *__return_storage_ptr__,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Char);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__Char,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar2)();
      return pVVar3;
    }
    *(undefined2 *)(lVar1 + 0x20) = 0x20;
    if (text != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aRStack_4[0]._8_8_ = aRStack_4[0]._8_8_ & 0xffffffff;
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      aRStack_4[0]._pointer._value = (void *)(lVar1 + 0x20);
      aRStack_4[0]._length = *(undefined4 *)(lVar1 + 0x18);
      pSVar5 = mscorlib.dll::System::String::String_SplitInternal
                         (text,aRStack_4,0x7fffffff,StringSplitOptions__Enum_None,(MethodInfo *)0x0
                         );
      if (pSVar5 != (String__Array *)0x0) {
        if ((int)pSVar5->max_length != 3) {
          pSVar6 = (String *)func_?(&StringLiteral_The_input_string_doesnt_contain_);
          pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,text,(MethodInfo *)0x0);
          uVar7 = func_?(&TypeInfo__System__ArgumentException);
          this = (InvalidEnumArgumentException *)func_?(uVar7);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this,pSVar6,(MethodInfo *)0x0);
          uVar7 = func_?(&
                                      MethodInfo__Extensions__ToVector3FromSerializeString_System__String_
                                     );
          FUN_?(this,uVar7);
          pcVar2 = (code *)swi(3);
          pVVar3 = (Vector3 *)(*pcVar2)();
          return pVVar3;
        }
        if ((int)pSVar5->max_length != 0) {
          pSVar6 = pSVar5->vector[0];
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar8 = Extensions_ConvertToSingle(pSVar6,(MethodInfo *)0x0);
          if (1 < (uint)pSVar5->max_length) {
            fVar9 = Extensions_ConvertToSingle(pSVar5->vector[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar5->max_length) {
              fVar10 = Extensions_ConvertToSingle(pSVar5->vector[2],(MethodInfo *)0x0);
              __return_storage_ptr__->x = fVar8;
              __return_storage_ptr__->y = fVar9;
              __return_storage_ptr__->z = fVar10;
              return __return_storage_ptr__;
            }
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* List`1[System.Int32] ValidIndexes[Object](List`1[System.Object]) */

List_1_System_Int32_ *
Assembly-CSharp.dll::Extensions::Extensions_ValidIndexes
          (List_1_System_Object_ *values,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (values != (List_1_System_Object_ *)0x0) {
    iVar1 = (values->fields)._size;
    this = (List_1_System_UInt32Enum_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(this,iVar1,MethodInfo__System__Collections__Generic__List<int>__List_int_);
    item = 0;
    while( true ) {
      pMVar2 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      if ((values->fields)._size <= (int)item) {
        return (List_1_System_Int32_ *)this;
      }
      if (this == (List_1_System_UInt32Enum_ *)0x0) break;
      piVar3 = &(this->fields)._version;
      *piVar3 = *piVar3 + 1;
      pUVar4 = (this->fields)._items;
      if (pUVar4 == (UInt32Enum__Enum__Array *)0x0) break;
      uVar5 = (this->fields)._size;
      if (uVar5 < (uint)pUVar4->max_length) {
        (this->fields)._size = uVar5 + 1;
        if ((uint)pUVar4->max_length <= uVar5) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          pLVar7 = (List_1_System_Int32_ *)(*pcVar6)();
          return pLVar7;
        }
        pUVar4->vector[(int)uVar5] = item;
        item = item + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this,item,pMVar2->klass->rgctx_data[0xe].method);
        item = item + 1;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_System_Int32_ *)(*pcVar6)();
  return pLVar7;
}


/* List`1[System.Int32]
   ValidIndexes[__Il2CppFullySharedGenericType](List`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

List_1_System_Int32_ *
Assembly-CSharp.dll::Extensions::Extensions_ValidIndexes_1
          (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *values,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (values != (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    uVar1 = (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                      (values,(method->field7_0x38).rgctx_data[1].method);
    this = (List_1_System_UInt32Enum_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(this,uVar1,MethodInfo__System__Collections__Generic__List<int>__List_int_);
    item = 0;
    while( true ) {
      iVar2 = (*((method->field7_0x38).rgctx_data[1].method)->methodPointer)
                        (values,(method->field7_0x38).rgctx_data[1].method);
      pMVar3 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      if (iVar2 <= (int)item) {
        return (List_1_System_Int32_ *)this;
      }
      if (this == (List_1_System_UInt32Enum_ *)0x0) break;
      piVar4 = &(this->fields)._version;
      *piVar4 = *piVar4 + 1;
      pUVar5 = (this->fields)._items;
      if (pUVar5 == (UInt32Enum__Enum__Array *)0x0) break;
      uVar6 = (this->fields)._size;
      if (uVar6 < (uint)pUVar5->max_length) {
        (this->fields)._size = uVar6 + 1;
        if ((uint)pUVar5->max_length <= uVar6) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          pLVar8 = (List_1_System_Int32_ *)(*pcVar7)();
          return pLVar8;
        }
        pUVar5->vector[(int)uVar6] = item;
        item = item + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this,item,pMVar3->klass->rgctx_data[0xe].method);
        item = item + 1;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pLVar8 = (List_1_System_Int32_ *)(*pcVar7)();
  return pLVar8;
}


/* Extensions() */

void Assembly-CSharp.dll::Extensions::Extensions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c == 0)
  {
    FUN_?();
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
           ObscuredString_op_Implicit(::StringLiteral__,(MethodInfo *)0x0);
  TypeInfo__Extensions->static_fields->obscuredString = pOVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__Extensions->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

