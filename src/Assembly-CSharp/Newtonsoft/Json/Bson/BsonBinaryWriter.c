
/* Int32 CalculateSize(Int32) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::
        BsonBinaryWriter_CalculateSize
                  (BsonBinaryWriter *this,int32_t stringByteCount,MethodInfo *method)

{
  return stringByteCount + 1;
}


/* Int32 CalculateSizeWithLength(Int32, Boolean) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::
        BsonBinaryWriter_CalculateSizeWithLength
                  (BsonBinaryWriter *this,int32_t stringByteCount,bool includeSize,
                  MethodInfo *method)

{
  return stringByteCount + (uint)includeSize * 4 + 1;
}


/* Int32 CalculateSize(BsonToken) */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::
        BsonBinaryWriter_CalculateSize_1(BsonBinaryWriter *this,BsonToken *t,MethodInfo *method)

{
  pBVar1 = t;
  _Stack_8.__klassIndex = -1;
  _Stack_c.dummy = &DAT_?;
  _Stack_10.dummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->dummy = &_Stack_10;
  pcStack_2 = &stack0xffffffb4;
  pcVar3 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonArray);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonObject);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonRegex);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonString);
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonValue);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    pcVar3 = pcStack_2;
  }
  pcStack_2 = pcVar3;
  pIStack_4 = (Il2CppImage *)0x0;
  pIStack_5 = (Il2CppImage *)0x0;
  if (t != (BsonToken *)0x0) {
    uVar6 = (*(t->klass->vtable).__unknown.methodPtr)(t,(t->klass->vtable).__unknown.method);
    pBVar7 = TypeInfo__System__Byte;
    switch(uVar6) {
    case 1:
    case 9:
    case 0x12:
      *unaff_FS_OFFSET = _Stack_10;
      return 8;
    case 2:
      unaff_ESI = t->klass;
      pBVar8 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonString;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         ((unaff_ESI->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonString)) {
        pBVar9 = t[1].klass;
        pBVar1 = (BsonToken *)0x0;
        if (pBVar9 == (BsonToken__Class *)0x0) {
code_?:
          t[1].fields._Parent_k__BackingField = pBVar1;
          iVar10 = (int)&(t[1].fields._Parent_k__BackingField)->klass +
                  (uint)((char)t[1].fields._CalculatedSize_k__BackingField != '\0') * 4 + 1;
          (t->fields)._CalculatedSize_k__BackingField = iVar10;
          *unaff_FS_OFFSET = _Stack_10;
          return iVar10;
        }
        unaff_ESI = (BsonToken__Class *)0x0;
        if ((String__Class *)(pBVar9->_0).image == TypeInfo__System__String) {
          unaff_ESI = pBVar9;
        }
        pSVar11 = TypeInfo__System__String;
        if (unaff_ESI != (BsonToken__Class *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
          }
          pEVar12 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
          if (pEVar12 != (Encoding *)0x0) {
            pBVar1 = (BsonToken *)
                     (*(pEVar12->klass->vtable).GetByteCount.methodPtr)
                               (pEVar12,unaff_ESI,(pEVar12->klass->vtable).GetByteCount.method);
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      break;
    case 3:
      unaff_ESI = t->klass;
      pBVar8 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonObject;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         ((unaff_ESI->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
        t = (BsonToken *)0x4;
        pIStack_4 = (Il2CppImage *)
                     BsonObject::BsonObject_GetEnumerator((BsonObject *)pBVar1,(MethodInfo *)0x0);
        unaff_ESI = (BsonToken__Class *)&pIStack_4;
        _Stack_8.__klassIndex = 1;
        while (unaff_EDI = (Byte__Array__Class *)t, pIStack_4 != (Il2CppImage *)0x0) {
          cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_4);
          if (cVar13 == '\0') {
code_?:
            _Stack_8.__klassIndex = -1;
            if ((String__Class *)(unaff_ESI->_0).image != (String__Class *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,(String__Class *)(unaff_ESI->_0).image
                             );
            }
            puVar14 = (undefined1 *)((int)&(unaff_EDI->_0).image + 1);
            (pBVar1->fields)._CalculatedSize_k__BackingField = (int32_t)puVar14;
            *unaff_FS_OFFSET = _Stack_10;
            return (int32_t)puVar14;
          }
          if (pIStack_4 == (Il2CppImage *)0x0) break;
          iVar10 = func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonProperty>
                                  ,pIStack_4);
          unaff_EDI = (Byte__Array__Class *)0x0;
          if (iVar10 == 0) break;
          iVar15 = BsonBinaryWriter_CalculateSize_1
                            (this,*(BsonToken **)(iVar10 + 8),(MethodInfo *)0x0);
          iVar16 = BsonBinaryWriter_CalculateSize_1
                            (this,*(BsonToken **)(iVar10 + 0xc),(MethodInfo *)0x0);
          t = (BsonToken *)((int)&t->klass + iVar16 + iVar15 + 1);
        }
        goto code_?;
      }
      break;
    case 4:
      unaff_ESI = t->klass;
      pBVar8 = TypeInfo__Newtonsoft__Json__Bson__BsonArray;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         ((unaff_ESI->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray)) {
        unaff_EDI = (Byte__Array__Class *)0x4;
        iStack_17 = 0;
        pIStack_5 = (Il2CppImage *)
                     BsonArray::BsonArray_GetEnumerator((BsonArray *)t,(MethodInfo *)0x0);
        unaff_ESI = (BsonToken__Class *)&pIStack_5;
        _Stack_8.__klassIndex = 4;
        while (pIStack_5 != (Il2CppImage *)0x0) {
          cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIStack_5);
          if (cVar13 == '\0') goto code_?;
          if (pIStack_5 == (Il2CppImage *)0x0) break;
          t_00 = (BsonToken *)
                 func_?(0,
                                 TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonToken>
                                 ,pIStack_5);
          iVar15 = Json::Utilities::MathUtils::MathUtils_IntLength(iStack_17,(MethodInfo *)0x0);
          iVar16 = BsonBinaryWriter_CalculateSize_1(this,t_00,(MethodInfo *)0x0);
          unaff_EDI = (Byte__Array__Class *)((int)&(unaff_EDI->_0).image + iVar16 + iVar15 + 2);
          iStack_17 = iStack_17 + 1;
        }
        goto code_?;
      }
      break;
    case 5:
      unaff_ESI = t->klass;
      pBVar8 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonValue;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         ((unaff_ESI->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
        unaff_ESI = t[1].klass;
        unaff_EDI = TypeInfo__System__Byte;
        if (unaff_ESI != (BsonToken__Class *)0x0) {
          iVar10 = func_?(unaff_ESI,TypeInfo__System__Byte);
          if (iVar10 != 0) {
            iVar10 = *(int *)(iVar10 + 0xc) + 5;
            (t->fields)._CalculatedSize_k__BackingField = iVar10;
            *unaff_FS_OFFSET = _Stack_10;
            return iVar10;
          }
          goto code_?;
        }
        goto code_?;
      }
      break;
    case 6:
    case 10:
      *unaff_FS_OFFSET = _Stack_10;
      return 0;
    case 7:
      *unaff_FS_OFFSET = _Stack_10;
      return 0xc;
    case 8:
      *unaff_FS_OFFSET = _Stack_10;
      return 1;
    case 0xb:
      unaff_ESI = t->klass;
      pBVar8 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         ((unaff_ESI->_1).typeHierarchy
          [(TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex)) {
        iVar15 = BsonBinaryWriter_CalculateSize_1(this,(BsonToken *)t[1].klass,(MethodInfo *)0x0);
        iVar16 = BsonBinaryWriter_CalculateSize_1(this,(BsonToken *)t[1].monitor,(MethodInfo *)0x0);
        (t->fields)._CalculatedSize_k__BackingField = iVar16 + iVar15;
        *unaff_FS_OFFSET = _Stack_10;
        return iVar16 + iVar15;
      }
      break;
    default:
      uVar18 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar18);
      pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar18 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar18);
      func_?(t);
      uStack_20 = func_?(4,t);
      uVar18 = func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonType,&uStack_20);
      uVar18 = func_?(uVar18);
      func_?(args);
      func_?(args,uVar18);
      func_?(0,uVar18);
      pMVar21 = (MethodInfo *)0x0;
      provider = pCVar19;
      pSVar22 = (String *)func_?(&StringLiteral_Unexpected_token_when_writing_BS);
      unaff_ESI = (BsonToken__Class *)
                  Json::Utilities::StringUtils::StringUtils_FormatWith
                            (pSVar22,(IFormatProvider *)provider,args,pMVar21);
      uVar18 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      unaff_EDI = (Byte__Array__Class *)func_?(uVar18);
      func_?(unaff_EDI);
      pMVar21 = (MethodInfo *)0x0;
      pBVar9 = unaff_ESI;
      pSVar22 = (String *)func_?(&StringLiteral_t);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                ((ArgumentOutOfRangeException *)unaff_EDI,pSVar22,(String *)pBVar9,pMVar21);
      func_?();
      pBVar9 = (BsonToken__Class *)func_?();
      pSVar11 = extraout_ECX;
      t = (BsonToken *)pCVar19;
code_?:
      func_?(pBVar9,pSVar11);
      pBVar8 = extraout_EDX;
      break;
    case 0x10:
      *unaff_FS_OFFSET = _Stack_10;
      return 4;
    }
    func_?(t,pBVar8);
  }
code_?:
  uVar18 = func_?();
  uVar18 = func_?(uVar18);
  func_?(uVar18);
  pBVar7 = unaff_EDI;
code_?:
  func_?(unaff_ESI,pBVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_Close
               (BsonBinaryWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBStack_2 = (this->fields)._writer;
  if (pBStack_2 != (BinaryWriter *)0x0) {
    pMStack_1 = (pBStack_2->klass->vtable).Close.method;
    (*(pBStack_2->klass->vtable).Close.methodPtr)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_Flush
               (BsonBinaryWriter *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pBStack_2 = (this->fields)._writer;
  if (pBStack_2 != (BinaryWriter *)0x0) {
    pMStack_1 = (pBStack_2->klass->vtable).Flush.method;
    (*(pBStack_2->klass->vtable).Flush.methodPtr)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WriteString(String, Int32, Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_WriteString
               (BsonBinaryWriter *this,String *s,int32_t byteCount,
               Nullable_1_Int32_ calculatedlengthPrefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
    func_?(&TypeInfo__System__Byte);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<int>__get_Value__);
    cRam_? = '\x01';
  }
  if (calculatedlengthPrefix.hasValue != 0) {
    pBVar1 = (this->fields)._writer;
    uVar2 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                      ((Nullable_1_UInt32_ *)&calculatedlengthPrefix,
                       MethodInfo__System__Nullable<int>__get_Value__);
    if (pBVar1 == (BinaryWriter *)0x0) goto code_?;
    (*(pBVar1->klass->vtable).Write_10.methodPtr)
              (pBVar1,uVar2,(pBVar1->klass->vtable).Write_10.method);
  }
  if (s != (String *)0x0) {
    if ((this->fields)._largeByteBuffer == (Byte__Array *)0x0) {
      pBVar3 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x100);
      (this->fields)._largeByteBuffer = pBVar3;
      func_?(&(this->fields)._largeByteBuffer,pBVar3);
      if ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
      }
      pEVar4 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
      if (pEVar4 == (Encoding *)0x0) goto code_?;
      iVar5 = (*(pEVar4->klass->vtable).__unknown_4.methodPtr)
                        (pEVar4,1,(pEVar4->klass->vtable).__unknown_4.method);
      (this->fields)._maxChars = (int32_t)(0x100 / (longlong)iVar5);
    }
    if (byteCount < 0x101) {
      if ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
      }
      pEVar4 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
      if (pEVar4 == (Encoding *)0x0) goto code_?;
      (*(pEVar4->klass->vtable).GetBytes_2.methodPtr)
                (pEVar4,s,0,(s->fields)._stringLength,(this->fields)._largeByteBuffer,0,
                 (pEVar4->klass->vtable).GetBytes_2.method);
      pBVar1 = (this->fields)._writer;
      if (pBVar1 == (BinaryWriter *)0x0) goto code_?;
      (*(pBVar1->klass->vtable).Write_4.methodPtr)
                (pBVar1,(this->fields)._largeByteBuffer,0,byteCount,
                 (pBVar1->klass->vtable).Write_4.method);
    }
    else {
      iVar6 = 0;
      for (iVar5 = (s->fields)._stringLength; 0 < iVar5; iVar5 = iVar5 - iVar7) {
        iVar7 = iVar5;
        if ((this->fields)._maxChars < iVar5) {
          iVar7 = (this->fields)._maxChars;
        }
        if ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
        }
        pEVar4 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
        if (pEVar4 == (Encoding *)0x0) goto code_?;
        uVar8 = func_?(0x13,pEVar4,s,iVar6,iVar7,(this->fields)._largeByteBuffer,0);
        pBVar1 = (this->fields)._writer;
        if (pBVar1 == (BinaryWriter *)0x0) goto code_?;
        func_?(0xc,pBVar1,(this->fields)._largeByteBuffer,0,uVar8);
        iVar6 = iVar6 + iVar7;
      }
    }
  }
  pBVar1 = (this->fields)._writer;
  if (pBVar1 != (BinaryWriter *)0x0) {
    (*(pBVar1->klass->vtable).Write_1.methodPtr)(pBVar1,0,(pBVar1->klass->vtable).Write_1.method);
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void WriteToken(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_WriteToken
               (BsonBinaryWriter *this,BsonToken *t,MethodInfo *method)

{
  pCVar1 = (CultureInfo *)&stack0xfffffff0;
  BsonBinaryWriter_CalculateSize_1(this,t,(MethodInfo *)0x0);
  uVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonValue);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pCStack_3 = (CultureInfo__Class *)0x0;
  aDStack_4[0]._dateData = 0;
  bVar5 = 0;
  if (in_stack_6 == (CultureInfo *)0x0) goto code_?;
  uVar7 = (*(in_stack_6->klass->vtable).Clone.methodPtr)();
  switch(uVar7) {
  case 1:
    bVar5 = (in_stack_6->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth;
    if ((!(bool)bVar5) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pOVar9 = (Object *)(in_stack_6->fields).parent_lcid;
      pBVar10 = (in_stack_11->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_6 =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDouble
                (pOVar9,(IFormatProvider *)in_stack_6,(MethodInfo *)0x0);
      bVar5 = 0;
      if (pBVar10 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uVar2;
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    bVar5 = 1;
    if (((in_stack_6->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth) ||
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonString,
       pIVar8 != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonString)) break;
    pSStack_12 = (String *)(in_stack_6->fields).parent_lcid;
    pBStack_13 = (Byte__Array__Class *)(in_stack_6->fields).number_index;
    NStack_14.hasValue = 0;
    NStack_14._1_3_ = 0;
    NStack_14.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_14,(in_stack_6->fields).cultureID - 4,
               MethodInfo__System__Nullable<int>__Nullable_int_);
    pSVar15 = (String *)0x0;
    if (pSStack_12 == (String *)0x0) {
code_?:
      BsonBinaryWriter_WriteString
                (in_stack_11,pSVar15,(int32_t)pBStack_13,(Nullable_1_Int32_)NStack_14,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = uVar2;
      return;
    }
    if (pSStack_12->klass == TypeInfo__System__String) {
      pSVar15 = pSStack_12;
    }
    bVar5 = 0;
    if (pSVar15 != (String *)0x0) goto code_?;
    goto code_?;
  case 3:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonObject,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
      bVar5 = 0;
      if ((in_stack_11->fields)._writer != (BinaryWriter *)0x0) {
        func_?(0x12);
        pCVar16 = (CultureInfo__Class *)
                  BsonObject::BsonObject_GetEnumerator
                            ((BsonObject *)in_stack_6,(MethodInfo *)0x0);
        NStack_14 = (Nullable_1_UInt32_)(ZEXT48(&stack0xfffffff0) << 0x20);
        while (bVar5 = 0, in_stack_6 = (CultureInfo *)&stack0xfffffff0,
              pCVar16 != (CultureInfo__Class *)0x0) {
          cVar17 = func_?();
          if (cVar17 == '\0') goto code_?;
          bVar5 = 0;
          in_stack_6 = (CultureInfo *)&stack0xfffffff0;
          if (pCVar16 == (CultureInfo__Class *)0x0) break;
          iVar18 = func_?();
          pBStack_13 = (Byte__Array__Class *)(in_stack_11->fields)._writer;
          bVar5 = 0;
          in_stack_6 = (CultureInfo *)&stack0xfffffff0;
          if (iVar18 == 0) break;
          bVar5 = 0;
          in_stack_6 = (CultureInfo *)&stack0xfffffff0;
          if (*(int **)(iVar18 + 0xc) == (int *)0x0) break;
          uVar7 = (**(code **)(**(int **)(iVar18 + 0xc) + 0xdc))();
          pSStack_12 = (String *)CONCAT31(pSStack_12._1_3_,uVar7);
          bVar5 = 0;
          in_stack_6 = (CultureInfo *)&stack0xfffffff0;
          if (pBStack_13 == (Byte__Array__Class *)0x0) break;
          (*(code *)(pBStack_13->_0).image[6].nameNoExt)();
          bVar5 = 0;
          in_stack_6 = (CultureInfo *)&stack0xfffffff0;
          if (*(int *)(iVar18 + 8) == 0) break;
          pSVar15 = *(String **)(*(int *)(iVar18 + 8) + 0x10);
          pBStack_13 = *(Byte__Array__Class **)(*(int *)(iVar18 + 8) + 0x18);
          pSVar19 = (String *)0x0;
          if (pSVar15 != (String *)0x0) {
            if (pSVar15->klass == TypeInfo__System__String) {
              pSVar19 = pSVar15;
            }
            bVar5 = 0;
            in_stack_6 = (CultureInfo *)&stack0xfffffff0;
            if (pSVar19 == (String *)0x0) goto code_?;
          }
          BsonBinaryWriter_WriteString
                    (in_stack_11,pSVar19,(int32_t)pBStack_13,(Nullable_1_Int32_)0x0,
                     (MethodInfo *)0x0);
          BsonBinaryWriter_WriteTokenInternal
                    (in_stack_11,*(BsonToken **)(iVar18 + 0xc),(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 4:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonArray,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray)) {
      bVar5 = 0;
      if ((in_stack_11->fields)._writer != (BinaryWriter *)0x0) {
        func_?(0x12);
        i.m_value = 0;
        pCStack_3 = (CultureInfo__Class *)
                     BsonArray::BsonArray_GetEnumerator
                               ((BsonArray *)in_stack_6,(MethodInfo *)0x0);
        pCVar1 = (CultureInfo *)&pCStack_3;
        NStack_14 = (Nullable_1_UInt32_)(ZEXT48(pCVar1) << 0x20);
        while (bVar5 = 0, in_stack_6 = pCVar1, pCStack_3 != (CultureInfo__Class *)0x0) {
          cVar17 = func_?();
          if (cVar17 == '\0') goto code_?;
          bVar5 = 0;
          if (pCStack_3 == (CultureInfo__Class *)0x0) break;
          pSStack_12 = (String *)func_?();
          pBVar10 = (in_stack_11->fields)._writer;
          bVar5 = 0;
          if (pSStack_12 == (String *)0x0) break;
          uVar7 = (*(pSStack_12->klass->vtable).CompareTo.methodPtr)();
          pBStack_13 = (Byte__Array__Class *)CONCAT31(pBStack_13._1_3_,uVar7);
          bVar5 = 0;
          if (pBVar10 == (BinaryWriter *)0x0) break;
          (*(pBVar10->klass->vtable).Write_2.methodPtr)();
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pSVar15 = mscorlib.dll::System::Int32::Int32_ToString_2
                              ((Int32 *)&stack0xfffffff4,(IFormatProvider *)provider,
                               (MethodInfo *)0x0);
          byteCount = Json::Utilities::MathUtils::MathUtils_IntLength(i.m_value,(MethodInfo *)0x0);
          BsonBinaryWriter_WriteString
                    (in_stack_11,pSVar15,byteCount,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
          BsonBinaryWriter_WriteTokenInternal
                    (in_stack_11,(BsonToken *)pSStack_12,(MethodInfo *)0x0);
          i.m_value = i.m_value + 1;
        }
      }
      goto code_?;
    }
    break;
  case 5:
    bVar5 = 1;
    if (((in_stack_6->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth) ||
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) break;
    in_stack_6 = (CultureInfo *)(in_stack_6->fields).parent_lcid;
    pBStack_13 = TypeInfo__System__Byte;
    bVar5 = 0;
    if (in_stack_6 == (CultureInfo *)0x0) goto code_?;
    iVar18 = func_?();
    bVar5 = 0;
    if (iVar18 != 0) {
      bVar5 = 0;
      if ((in_stack_11->fields)._writer != (BinaryWriter *)0x0) {
        func_?();
        bVar5 = 0;
        if ((in_stack_11->fields)._writer != (BinaryWriter *)0x0) {
          func_?();
          pBVar10 = (in_stack_11->fields)._writer;
          goto joined_?;
        }
      }
      goto code_?;
    }
    goto code_?;
  case 6:
  case 10:
    goto code_?;
  case 7:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      in_stack_6 = (CultureInfo *)(in_stack_6->fields).parent_lcid;
      if (in_stack_6 != (CultureInfo *)0x0) {
        iVar18 = func_?();
        bVar5 = 0;
        if (iVar18 == 0) goto code_?;
      }
      pBVar10 = (in_stack_11->fields)._writer;
joined_?:
      bVar5 = 0;
      if (pBVar10 != (BinaryWriter *)0x0) {
        func_?();
code_?:
        *unaff_FS_OFFSET = uVar2;
        return;
      }
      goto code_?;
    }
    break;
  case 8:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar10 = (in_stack_11->fields)._writer;
      piVar20 = (int *)(in_stack_6->fields).parent_lcid;
      bVar5 = 0;
      if ((pBVar10 != (BinaryWriter *)0x0) && (bVar5 = 0, piVar20 != (int *)0x0)) {
        pIVar21 = *(Il2CppClass **)(*piVar20 + 0x20);
        pIVar8 = (TypeInfo__System__Boolean->_0).element_class;
        bVar5 = pIVar21 < pIVar8;
        if (pIVar21 == pIVar8) {
          func_?();
          func_?(8,pBVar10);
          *unaff_FS_OFFSET = uVar2;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    break;
  case 9:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      piVar20 = (int *)(in_stack_6->fields).parent_lcid;
      bVar5 = 0;
      if (piVar20 == (int *)0x0) goto code_?;
      piVar22 = (int *)0x0;
      if ((DateTime__Class *)*piVar20 == TypeInfo__System__DateTime) {
        piVar22 = piVar20;
      }
      if (piVar22 == (int *)0x0) {
        pIVar8 = (TypeInfo__System__DateTimeOffset->_0).element_class;
        bVar5 = *(Il2CppClass **)(*piVar20 + 0x20) < pIVar8;
        if (*(Il2CppClass **)(*piVar20 + 0x20) != pIVar8) goto code_?;
        func_?();
        DVar23 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcDateTime
                           ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
        pSStack_12 = (String *)(DVar23._dateData >> 0x20);
        pCVar1 = (CultureInfo *)DVar23._dateData;
        offset = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_Offset
                           ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
        pBStack_13 = (Byte__Array__Class *)((ulonglong)offset._ticks >> 0x20);
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          offset._ticks = CONCAT44(pBStack_13,(int)offset._ticks);
        }
        pBStack_13 = (Byte__Array__Class *)((ulonglong)offset._ticks >> 0x20);
        dateTime._dateData._4_4_ = pSStack_12;
        dateTime._dateData._0_4_ = pCVar1;
        JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks(dateTime,offset,(MethodInfo *)0x0)
        ;
      }
      else {
        bVar5 = 0;
        if (piVar20 == (int *)0x0) goto code_?;
        pIVar8 = (TypeInfo__System__DateTime->_0).element_class;
        bVar5 = *(Il2CppClass **)(*piVar20 + 0x20) < pIVar8;
        if (*(Il2CppClass **)(*piVar20 + 0x20) != pIVar8) goto code_?;
        puVar24 = (uint64_t *)func_?();
        pCVar1 = *(CultureInfo **)puVar24;
        in_stack_6 = *(CultureInfo **)((int)puVar24 + 4);
        aDStack_4[0]._dateData = *puVar24;
        if ((in_stack_11->fields)._DateTimeKindHandling_k__BackingField == 1) {
          aDStack_4[0] =
               mscorlib.dll::System::DateTime::DateTime_ToUniversalTime
                         (aDStack_4,(MethodInfo *)0x0);
          in_stack_6 = (CultureInfo *)(aDStack_4[0]._dateData >> 0x20);
code_?:
          pCVar1 = (CultureInfo *)aDStack_4[0]._dateData;
        }
        else if ((in_stack_11->fields)._DateTimeKindHandling_k__BackingField == 2) {
          aDStack_4[0] =
               mscorlib.dll::System::DateTime::DateTime_ToLocalTime(aDStack_4,(MethodInfo *)0x0);
          in_stack_6 = (CultureInfo *)(aDStack_4[0]._dateData >> 0x20);
          goto code_?;
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        DVar23._dateData._4_4_ = (uint)in_stack_6;
        DVar23._dateData._0_4_ = pCVar1;
        JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_2(DVar23,0,(MethodInfo *)0x0);
      }
      bVar5 = 0;
      in_stack_6 = pCVar1;
      if ((in_stack_11->fields)._writer != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uVar2;
        return;
      }
      goto code_?;
    }
    break;
  case 0xb:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonRegex,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex)) {
      iVar18 = (in_stack_6->fields).parent_lcid;
      bVar5 = 0;
      if (iVar18 != 0) {
        pSVar15 = *(String **)(iVar18 + 0x10);
        pSVar19 = (String *)0x0;
        if (pSVar15 != (String *)0x0) {
          if (pSVar15->klass == TypeInfo__System__String) {
            pSVar19 = pSVar15;
          }
          bVar5 = 0;
          if (pSVar19 == (String *)0x0) goto code_?;
        }
        BsonBinaryWriter_WriteString
                  (in_stack_11,pSVar19,
                   *(int32_t *)((in_stack_6->fields).parent_lcid + 0x18),
                   (Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
        iVar18 = (in_stack_6->fields).datetime_index;
        bVar5 = 0;
        if (iVar18 != 0) {
          pSVar15 = *(String **)(iVar18 + 0x10);
          in_stack_6 = *(CultureInfo **)((in_stack_6->fields).datetime_index + 0x18);
          pSVar19 = (String *)0x0;
          if (pSVar15 == (String *)0x0) {
code_?:
            BsonBinaryWriter_WriteString
                      (in_stack_11,pSVar19,(int32_t)in_stack_6,(Nullable_1_Int32_)0x0,
                       (MethodInfo *)0x0);
            *unaff_FS_OFFSET = uVar2;
            return;
          }
          if (pSVar15->klass == TypeInfo__System__String) {
            pSVar19 = pSVar15;
          }
          bVar5 = 0;
          if (pSVar19 != (String *)0x0) goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  default:
    func_?();
    func_?();
    pBStack_13 = (Byte__Array__Class *)
                 mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?(4,in_stack_6);
    func_?();
    uVar2 = func_?();
    func_?();
    func_?(args,uVar2);
    func_?();
    pMVar25 = (MethodInfo *)0x0;
    provider_00 = pBStack_13;
    pSVar15 = (String *)func_?(&StringLiteral_Unexpected_token_when_writing_BS);
    in_stack_6 =
         (CultureInfo *)
         Json::Utilities::StringUtils::StringUtils_FormatWith
                   (pSVar15,(IFormatProvider *)provider_00,args,pMVar25);
    uVar2 = func_?();
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar2);
    func_?(this_00);
    pMVar25 = (MethodInfo *)0x0;
    pCVar1 = in_stack_6;
    pSVar15 = (String *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,pSVar15,(String *)pCVar1,pMVar25);
    func_?();
    bVar5 = (undefined1 *)0xffffffeb < &stack0xffffffa4;
    func_?();
    break;
  case 0x10:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pOVar9 = (Object *)(in_stack_6->fields).parent_lcid;
      pBVar10 = (in_stack_11->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_6 =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_1
                (pOVar9,(IFormatProvider *)in_stack_6,(MethodInfo *)0x0);
      bVar5 = 0;
      if (pBVar10 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uVar2;
        return;
      }
      goto code_?;
    }
    break;
  case 0x12:
    bVar5 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (in_stack_6->klass->_1).typeHierarchyDepth) &&
       (pIVar8 = (in_stack_6->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar5 = pIVar8 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar8 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pOVar9 = (Object *)(in_stack_6->fields).parent_lcid;
      pBVar10 = (in_stack_11->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_6 =
           mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt64
                (pOVar9,(IFormatProvider *)in_stack_6,(MethodInfo *)0x0);
      bVar5 = 0;
      if (pBVar10 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uVar2;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  goto code_?;
code_?:
  if (pCVar1->klass != (CultureInfo__Class *)0x0) {
    func_?();
  }
  pBVar10 = (in_stack_11->fields)._writer;
  bVar5 = 0;
  in_stack_6 = pCVar1;
  if (pBVar10 != (BinaryWriter *)0x0) {
    (*(pBVar10->klass->vtable).Write_1.methodPtr)();
    *unaff_FS_OFFSET = uVar2;
    return;
  }
code_?:
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  pCVar1 = in_stack_6;
  uVar26 = func_?();
  bVar27 = (byte)uVar26;
  bVar28 = (byte)((uint6)uVar26 >> 0x28);
  bVar29 = (byte)((uint6)uVar26 >> 0x20);
  bVar30 = (byte)((uint6)uVar26 >> 8);
  bVar31 = CARRY1(in_stack_32,bVar30) ||
           CARRY1(in_stack_32 + bVar30,CARRY1(bVar28,bVar27) || CARRY1(bVar28 + bVar27,bVar5)
                 );
  pbVar33 = (byte *)((int)uVar26 + 0x5c);
  bVar5 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar29 + bVar31;
  bVar34 = (byte)((uint)pCVar1 >> 8);
  bVar31 = CARRY1(bVar30,bVar34) ||
           CARRY1(bVar30 + bVar34,CARRY1(bVar5,bVar29) || CARRY1(bVar28 + bVar29,bVar31));
  pbVar33 = (byte *)((int)&in_stack_6[-0xd5edb2].monitor + 2);
  bVar5 = *pbVar33 + (byte)pCVar1;
  bVar35 = CARRY1(*pbVar33,(byte)pCVar1) || CARRY1(bVar5,bVar31);
  *pbVar33 = bVar5 + bVar31;
  pbVar33 = (byte *)(unaff_EBX + -6);
  bVar31 = CARRY1(*pbVar33,bVar27) || CARRY1(*pbVar33 + bVar27,bVar35);
  *pbVar33 = *pbVar33 + bVar27 + bVar35;
  pbVar33 = (byte *)(unaff_EBX + -0x71efb4a8);
  bVar35 = CARRY1(*pbVar33,bVar27) || CARRY1(*pbVar33 + bVar27,bVar31);
  *pbVar33 = *pbVar33 + bVar27 + bVar31;
  bVar5 = (byte)((uint)(unaff_EBX + -8) >> 8);
  bVar30 = bVar29 + bVar5;
  bVar31 = CARRY1(bVar29,bVar5) || CARRY1(bVar30,bVar35);
  bVar30 = bVar30 + bVar35;
  pbVar33 = (byte *)(unaff_EBX + -9);
  bVar5 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar30 + bVar31;
  puVar36 = (ushort *)(unaff_EBX + 7);
  sVar37 = ((ushort)pCVar1 & 3) - (*puVar36 & 3);
  *puVar36 = *puVar36 + (ushort)(0 < sVar37) * sVar37;
  uVar38 = (uint)(CARRY1(bVar5,bVar30) || CARRY1(bVar28 + bVar30,bVar31));
  puVar39 = &stack0xffffff94 + *(uint *)(unaff_EBX + 0x42);
  bVar31 = CARRY4((uint)&stack0xffffff94,*(uint *)(unaff_EBX + 0x42)) || CARRY4((uint)puVar39,uVar38)
  ;
  bVar5 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar30 + bVar31;
  puVar36 = (ushort *)(unaff_EBX + 7);
  sVar37 = ((ushort)pCVar1 & 3) - (*puVar36 & 3);
  *puVar36 = *puVar36 + (ushort)(0 < sVar37) * sVar37;
  uVar40 = (uint)(CARRY1(bVar5,bVar30) || CARRY1(bVar28 + bVar30,bVar31));
  puVar41 = puVar39 + *(uint *)(unaff_EBX + 0x42) + uVar38;
  bVar31 = CARRY1(bVar27,bVar30) ||
           CARRY1(bVar27 + bVar30,
                  CARRY4((uint)(puVar39 + uVar38),*(uint *)(unaff_EBX + 0x42)) ||
                  CARRY4((uint)puVar41,uVar40));
  iVar18 = *(int *)(puVar41 + uVar40 + 0x10);
  uVar42 = *(undefined4 *)(puVar41 + uVar40 + 0x14);
  uVar2 = *(undefined4 *)(puVar41 + uVar40 + 0x18);
  pcVar43 = (char *)(iVar18 + -1);
  cVar17 = *pcVar43;
  cVar44 = *pcVar43 + (char)uVar42;
  *pcVar43 = cVar44 + bVar31;
  puVar36 = (ushort *)(iVar18 + 0xf);
  sVar37 = ((ushort)uVar2 & 3) - (*puVar36 & 3);
  *puVar36 = *puVar36 + (ushort)(0 < sVar37) * sVar37;
  if (SCARRY1(cVar17,(char)uVar42) != SCARRY1(cVar44,bVar31)) {
    pcVar45 = (code *)swi(3);
    (*pcVar45)();
    return;
  }
  *(undefined **)(puVar41 + uVar40 + 0x1c) = &UNK_?;
  func_?();
  return;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void WriteTokenInternal(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::
     BsonBinaryWriter_WriteTokenInternal(BsonBinaryWriter *this,BsonToken *t,MethodInfo *method)

{
  _Stack_8.__klassIndex = -1;
  _Stack_c.dummy = &DAT_?;
  _Stack_10.dummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->dummy = &_Stack_10;
  pcStack_1 = &stack0xffffff9c;
  pcVar2 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonValue);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonToken>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonProperty>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?();
    func_?();
    cRam_? = '\x01';
    pcVar2 = pcStack_1;
  }
  pcStack_1 = pcVar2;
  pIStack_3 = (Il2CppImage *)0x0;
  IStack_4.m_value = 0;
  pIStack_5 = (Il2CppImage *)0x0;
  aDStack_6[0]._dateData = 0;
  bVar7 = 0;
  if (t == (BsonToken *)0x0) goto code_?;
  uVar8 = (*(t->klass->vtable).__unknown.methodPtr)();
  switch(uVar8) {
  case 1:
    bVar7 = (t->klass->_1).typeHierarchyDepth <
             (TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth;
    if ((!(bool)bVar7) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar10 = t[1].klass;
      pBVar11 = (this->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      t = (BsonToken *)
          mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                    ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDouble
                ((Object *)pBVar10,(IFormatProvider *)t,(MethodInfo *)0x0);
      bVar7 = 0;
      if (pBVar11 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    bVar7 = 1;
    if (((t->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth) ||
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonString,
       pIVar9 != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonString)) break;
    pBStack_12 = t[1].klass;
    pBStack_13 = (Byte__Array__Class *)t[1].fields._Parent_k__BackingField;
    NStack_14.hasValue = 0;
    NStack_14._1_3_ = 0;
    NStack_14.value = 0;
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_14,(t->fields)._CalculatedSize_k__BackingField - 4,
               MethodInfo__System__Nullable<int>__Nullable_int_);
    pBVar10 = (BsonToken__Class *)0x0;
    if (pBStack_12 == (BsonToken__Class *)0x0) {
code_?:
      BsonBinaryWriter_WriteString
                (this,(String *)pBVar10,(int32_t)pBStack_13,(Nullable_1_Int32_)NStack_14,
                 (MethodInfo *)0x0);
      *unaff_FS_OFFSET = _Stack_10;
      return;
    }
    if ((String__Class *)(pBStack_12->_0).image == TypeInfo__System__String) {
      pBVar10 = pBStack_12;
    }
    bVar7 = 0;
    if (pBVar10 != (BsonToken__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonObject,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
      bVar7 = 0;
      if ((this->fields)._writer != (BinaryWriter *)0x0) {
        func_?(0x12);
        pIStack_3 = (Il2CppImage *)
                     BsonObject::BsonObject_GetEnumerator((BsonObject *)t,(MethodInfo *)0x0);
        t = (BsonToken *)&pIStack_3;
        NStack_14 = (Nullable_1_UInt32_)(ZEXT48(t) << 0x20);
        _Stack_8.__klassIndex = 1;
        while (bVar7 = 0, pIStack_3 != (Il2CppImage *)0x0) {
          cVar15 = func_?();
          if (cVar15 == '\0') goto code_?;
          bVar7 = 0;
          if (pIStack_3 == (Il2CppImage *)0x0) break;
          iVar16 = func_?();
          pBStack_13 = (Byte__Array__Class *)(this->fields)._writer;
          bVar7 = 0;
          if (iVar16 == 0) break;
          bVar7 = 0;
          if (*(int **)(iVar16 + 0xc) == (int *)0x0) break;
          uVar8 = (**(code **)(**(int **)(iVar16 + 0xc) + 0xdc))();
          pBStack_12 = (BsonToken__Class *)CONCAT31(pBStack_12._1_3_,uVar8);
          bVar7 = 0;
          if (pBStack_13 == (Byte__Array__Class *)0x0) break;
          (*(code *)(pBStack_13->_0).image[6].nameNoExt)();
          bVar7 = 0;
          if (*(int *)(iVar16 + 8) == 0) break;
          pSVar17 = *(String **)(*(int *)(iVar16 + 8) + 0x10);
          pBStack_13 = *(Byte__Array__Class **)(*(int *)(iVar16 + 8) + 0x18);
          pSVar18 = (String *)0x0;
          if (pSVar17 != (String *)0x0) {
            if (pSVar17->klass == TypeInfo__System__String) {
              pSVar18 = pSVar17;
            }
            bVar7 = 0;
            if (pSVar18 == (String *)0x0) goto code_?;
          }
          BsonBinaryWriter_WriteString
                    (this,pSVar18,(int32_t)pBStack_13,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
          BsonBinaryWriter_WriteTokenInternal(this,*(BsonToken **)(iVar16 + 0xc),(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 4:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonArray,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray)) {
      bVar7 = 0;
      if ((this->fields)._writer != (BinaryWriter *)0x0) {
        func_?(0x12);
        IStack_4.m_value = 0;
        pIStack_5 = (Il2CppImage *)
                     BsonArray::BsonArray_GetEnumerator((BsonArray *)t,(MethodInfo *)0x0);
        t = (BsonToken *)&pIStack_5;
        NStack_14 = (Nullable_1_UInt32_)(ZEXT48(t) << 0x20);
        _Stack_8.__klassIndex = 4;
        while (bVar7 = 0, pIStack_5 != (Il2CppImage *)0x0) {
          cVar15 = func_?();
          if (cVar15 == '\0') goto code_?;
          bVar7 = 0;
          if (pIStack_5 == (Il2CppImage *)0x0) break;
          pBStack_12 = (BsonToken__Class *)func_?();
          pBVar11 = (this->fields)._writer;
          bVar7 = 0;
          if (pBStack_12 == (BsonToken__Class *)0x0) break;
          uVar8 = (*(((String__Class *)(pBStack_12->_0).image)->vtable).CompareTo.methodPtr)();
          pBStack_13 = (Byte__Array__Class *)CONCAT31(pBStack_13._1_3_,uVar8);
          bVar7 = 0;
          if (pBVar11 == (BinaryWriter *)0x0) break;
          (*(pBVar11->klass->vtable).Write_2.methodPtr)();
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          pSVar17 = mscorlib.dll::System::Int32::Int32_ToString_2
                              (&IStack_4,(IFormatProvider *)provider,(MethodInfo *)0x0);
          byteCount = Json::Utilities::MathUtils::MathUtils_IntLength
                                (IStack_4.m_value,(MethodInfo *)0x0);
          BsonBinaryWriter_WriteString
                    (this,pSVar17,byteCount,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
          BsonBinaryWriter_WriteTokenInternal(this,(BsonToken *)pBStack_12,(MethodInfo *)0x0);
          IStack_4.m_value = IStack_4.m_value + 1;
        }
      }
      goto code_?;
    }
    break;
  case 5:
    bVar7 = 1;
    if (((t->klass->_1).typeHierarchyDepth <
         (TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth) ||
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 != (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) break;
    t = (BsonToken *)t[1].klass;
    pBStack_13 = TypeInfo__System__Byte;
    bVar7 = 0;
    if ((BsonToken__Class *)t == (BsonToken__Class *)0x0) goto code_?;
    iVar16 = func_?();
    bVar7 = 0;
    if (iVar16 != 0) {
      bVar7 = 0;
      if ((this->fields)._writer != (BinaryWriter *)0x0) {
        func_?();
        bVar7 = 0;
        if ((this->fields)._writer != (BinaryWriter *)0x0) {
          func_?();
          pBVar11 = (this->fields)._writer;
          goto joined_?;
        }
      }
      goto code_?;
    }
    goto code_?;
  case 6:
  case 10:
    goto code_?;
  case 7:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      t = (BsonToken *)t[1].klass;
      if ((BsonToken__Class *)t != (BsonToken__Class *)0x0) {
        iVar16 = func_?();
        bVar7 = 0;
        if (iVar16 == 0) goto code_?;
      }
      pBVar11 = (this->fields)._writer;
joined_?:
      bVar7 = 0;
      if (pBVar11 != (BinaryWriter *)0x0) {
        func_?();
code_?:
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      goto code_?;
    }
    break;
  case 8:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar11 = (this->fields)._writer;
      bVar7 = 0;
      if ((pBVar11 != (BinaryWriter *)0x0) && (bVar7 = 0, t[1].klass != (BsonToken__Class *)0x0)) {
        pIVar19 = (Il2CppClass *)(((t[1].klass)->_0).image)->codeGenModule;
        pIVar9 = (TypeInfo__System__Boolean->_0).element_class;
        bVar7 = pIVar19 < pIVar9;
        if (pIVar19 == pIVar9) {
          func_?();
          func_?(8,pBVar11);
          *unaff_FS_OFFSET = _Stack_10;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    break;
  case 9:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar10 = t[1].klass;
      bVar7 = 0;
      if (pBVar10 == (BsonToken__Class *)0x0) goto code_?;
      pBVar20 = (BsonToken__Class *)0x0;
      if ((DateTime__Class *)(pBVar10->_0).image == TypeInfo__System__DateTime) {
        pBVar20 = pBVar10;
      }
      if (pBVar20 == (BsonToken__Class *)0x0) {
        pIVar19 = (Il2CppClass *)((pBVar10->_0).image)->codeGenModule;
        pIVar9 = (TypeInfo__System__DateTimeOffset->_0).element_class;
        bVar7 = pIVar19 < pIVar9;
        if (pIVar19 != pIVar9) goto code_?;
        func_?();
        DVar21 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcDateTime
                           ((DateTimeOffset *)&stack0xffffffa8,(MethodInfo *)0x0);
        pBStack_12 = (BsonToken__Class *)(DVar21._dateData >> 0x20);
        pBVar10 = (BsonToken__Class *)DVar21._dateData;
        offset = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_Offset
                           ((DateTimeOffset *)&stack0xffffffa8,(MethodInfo *)0x0);
        pBStack_13 = (Byte__Array__Class *)((ulonglong)offset._ticks >> 0x20);
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          offset._ticks = CONCAT44(pBStack_13,(int)offset._ticks);
        }
        pBStack_13 = (Byte__Array__Class *)((ulonglong)offset._ticks >> 0x20);
        dateTime._dateData._4_4_ = pBStack_12;
        dateTime._dateData._0_4_ = pBVar10;
        JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks(dateTime,offset,(MethodInfo *)0x0)
        ;
      }
      else {
        bVar7 = 0;
        if (pBVar10 == (BsonToken__Class *)0x0) goto code_?;
        pIVar19 = (Il2CppClass *)((pBVar10->_0).image)->codeGenModule;
        pIVar9 = (TypeInfo__System__DateTime->_0).element_class;
        bVar7 = pIVar19 < pIVar9;
        if (pIVar19 != pIVar9) goto code_?;
        puVar22 = (uint64_t *)func_?();
        pBVar10 = *(BsonToken__Class **)puVar22;
        t = *(BsonToken **)((int)puVar22 + 4);
        aDStack_6[0]._dateData = *puVar22;
        if ((this->fields)._DateTimeKindHandling_k__BackingField == 1) {
          aDStack_6[0] =
               mscorlib.dll::System::DateTime::DateTime_ToUniversalTime
                         (aDStack_6,(MethodInfo *)0x0);
          t = (BsonToken *)(aDStack_6[0]._dateData >> 0x20);
code_?:
          pBVar10 = (BsonToken__Class *)aDStack_6[0]._dateData;
        }
        else if ((this->fields)._DateTimeKindHandling_k__BackingField == 2) {
          aDStack_6[0] =
               mscorlib.dll::System::DateTime::DateTime_ToLocalTime(aDStack_6,(MethodInfo *)0x0);
          t = (BsonToken *)(aDStack_6[0]._dateData >> 0x20);
          goto code_?;
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        DVar21._dateData._4_4_ = t;
        DVar21._dateData._0_4_ = pBVar10;
        JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_2(DVar21,0,(MethodInfo *)0x0);
      }
      bVar7 = 0;
      t = (BsonToken *)pBVar10;
      if ((this->fields)._writer != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      goto code_?;
    }
    break;
  case 0xb:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonRegex,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex)) {
      bVar7 = 0;
      if (t[1].klass != (BsonToken__Class *)0x0) {
        pIVar23 = ((t[1].klass)->_0).byval_arg.data.array;
        s = (Il2CppArrayType *)0x0;
        if (pIVar23 != (Il2CppArrayType *)0x0) {
          if ((String__Class *)pIVar23->etype == TypeInfo__System__String) {
            s = pIVar23;
          }
          bVar7 = 0;
          if (s == (Il2CppArrayType *)0x0) goto code_?;
        }
        BsonBinaryWriter_WriteString
                  (this,(String *)s,((t[1].klass)->_0).this_arg.data.__klassIndex,
                   (Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
        bVar7 = 0;
        if (t[1].monitor != (MonitorData *)0x0) {
          pSVar17 = *(String **)(t[1].monitor + 0x10);
          t = *(BsonToken **)(t[1].monitor + 0x18);
          pSVar18 = (String *)0x0;
          if (pSVar17 == (String *)0x0) {
code_?:
            BsonBinaryWriter_WriteString
                      (this,pSVar18,(int32_t)t,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = _Stack_10;
            return;
          }
          if (pSVar17->klass == TypeInfo__System__String) {
            pSVar18 = pSVar17;
          }
          bVar7 = 0;
          if (pSVar18 != (String *)0x0) goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
    break;
  default:
    func_?();
    func_?();
    pBStack_13 = (Byte__Array__Class *)
                 mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
    func_?();
    args = (Object__Array *)func_?();
    func_?();
    func_?(4,t);
    func_?();
    uVar24 = func_?();
    func_?();
    func_?(args,uVar24);
    func_?();
    pMVar25 = (MethodInfo *)0x0;
    provider_00 = pBStack_13;
    pSVar17 = (String *)func_?(&StringLiteral_Unexpected_token_when_writing_BS);
    t = (BsonToken *)
        Json::Utilities::StringUtils::StringUtils_FormatWith
                  (pSVar17,(IFormatProvider *)provider_00,args,pMVar25);
    uVar24 = func_?();
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar24);
    func_?(this_00);
    pMVar25 = (MethodInfo *)0x0;
    pBVar10 = (BsonToken__Class *)t;
    pSVar17 = (String *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_00,pSVar17,(String *)pBVar10,pMVar25);
    func_?();
    bVar7 = (undefined1 *)0xffffffeb < &stack0xffffff98;
    func_?();
    break;
  case 0x10:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar10 = t[1].klass;
      pBVar11 = (this->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      t = (BsonToken *)
          mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                    ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_1
                ((Object *)pBVar10,(IFormatProvider *)t,(MethodInfo *)0x0);
      bVar7 = 0;
      if (pBVar11 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      goto code_?;
    }
    break;
  case 0x12:
    bVar7 = 1;
    if (((TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth <=
         (t->klass->_1).typeHierarchyDepth) &&
       (pIVar9 = (t->klass->_1).typeHierarchy
                 [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
       bVar7 = pIVar9 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
       pIVar9 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
      pBVar10 = t[1].klass;
      pBVar11 = (this->fields)._writer;
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      t = (BsonToken *)
          mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                    ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt64
                ((Object *)pBVar10,(IFormatProvider *)t,(MethodInfo *)0x0);
      bVar7 = 0;
      if (pBVar11 != (BinaryWriter *)0x0) {
        func_?();
        *unaff_FS_OFFSET = _Stack_10;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  goto code_?;
code_?:
  _Stack_8.__klassIndex = -1;
  if ((CultureInfo__Class *)(((BsonToken__Class *)t)->_0).image != (CultureInfo__Class *)0x0) {
    func_?();
  }
  _Stack_8.__klassIndex = -1;
  pBVar11 = (this->fields)._writer;
  bVar7 = 0;
  if (pBVar11 != (BinaryWriter *)0x0) {
    (*(pBVar11->klass->vtable).Write_1.methodPtr)();
    *unaff_FS_OFFSET = _Stack_10;
    return;
  }
code_?:
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  pBVar10 = (BsonToken__Class *)t;
  uVar26 = func_?();
  bVar27 = (byte)uVar26;
  bVar28 = (byte)((uint6)uVar26 >> 0x28);
  bVar29 = (byte)((uint6)uVar26 >> 0x20);
  bVar30 = (byte)((uint6)uVar26 >> 8);
  bVar31 = CARRY1(in_stack_32,bVar30) ||
           CARRY1(in_stack_32 + bVar30,CARRY1(bVar28,bVar27) || CARRY1(bVar28 + bVar27,bVar7)
                 );
  pbVar33 = (byte *)((int)uVar26 + 0x5c);
  bVar7 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar29 + bVar31;
  bVar34 = (byte)((uint)pBVar10 >> 8);
  bVar31 = CARRY1(bVar30,bVar34) ||
           CARRY1(bVar30 + bVar34,CARRY1(bVar7,bVar29) || CARRY1(bVar28 + bVar29,bVar31));
  puVar35 = (undefined1 *)((int)&((BsonToken__Class *)((int)t + -0x60efb500))->static_fields + 2);
  bVar7 = *puVar35 + (byte)pBVar10;
  bVar36 = CARRY1(*puVar35,(byte)pBVar10) || CARRY1(bVar7,bVar31);
  *puVar35 = bVar7 + bVar31;
  pbVar33 = (byte *)(unaff_EBX + -6);
  bVar31 = CARRY1(*pbVar33,bVar27) || CARRY1(*pbVar33 + bVar27,bVar36);
  *pbVar33 = *pbVar33 + bVar27 + bVar36;
  pbVar33 = (byte *)(unaff_EBX + -0x71efb4a8);
  bVar36 = CARRY1(*pbVar33,bVar27) || CARRY1(*pbVar33 + bVar27,bVar31);
  *pbVar33 = *pbVar33 + bVar27 + bVar31;
  bVar7 = (byte)((uint)(unaff_EBX + -8) >> 8);
  bVar30 = bVar29 + bVar7;
  bVar31 = CARRY1(bVar29,bVar7) || CARRY1(bVar30,bVar36);
  bVar30 = bVar30 + bVar36;
  pbVar33 = (byte *)(unaff_EBX + -9);
  bVar7 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar30 + bVar31;
  puVar37 = (ushort *)(unaff_EBX + 7);
  sVar38 = ((ushort)pBVar10 & 3) - (*puVar37 & 3);
  *puVar37 = *puVar37 + (ushort)(0 < sVar38) * sVar38;
  uVar39 = (uint)(CARRY1(bVar7,bVar30) || CARRY1(bVar28 + bVar30,bVar31));
  puVar35 = &stack0xffffff88 + *(uint *)(unaff_EBX + 0x42);
  bVar31 = CARRY4((uint)&stack0xffffff88,*(uint *)(unaff_EBX + 0x42)) || CARRY4((uint)puVar35,uVar39);
  bVar7 = *pbVar33;
  bVar28 = *pbVar33;
  *pbVar33 = bVar28 + bVar30 + bVar31;
  puVar37 = (ushort *)(unaff_EBX + 7);
  sVar38 = ((ushort)pBVar10 & 3) - (*puVar37 & 3);
  *puVar37 = *puVar37 + (ushort)(0 < sVar38) * sVar38;
  uVar40 = (uint)(CARRY1(bVar7,bVar30) || CARRY1(bVar28 + bVar30,bVar31));
  puVar41 = puVar35 + *(uint *)(unaff_EBX + 0x42) + uVar39;
  bVar31 = CARRY1(bVar27,bVar30) ||
           CARRY1(bVar27 + bVar30,
                  CARRY4((uint)(puVar35 + uVar39),*(uint *)(unaff_EBX + 0x42)) ||
                  CARRY4((uint)puVar41,uVar40));
  iVar16 = *(int *)(puVar41 + uVar40 + 0x10);
  uVar42 = *(undefined4 *)(puVar41 + uVar40 + 0x14);
  uVar24 = *(undefined4 *)(puVar41 + uVar40 + 0x18);
  pcVar2 = (char *)(iVar16 + -1);
  cVar15 = *pcVar2;
  cVar43 = *pcVar2 + (char)uVar42;
  *pcVar2 = cVar43 + bVar31;
  puVar37 = (ushort *)(iVar16 + 0xf);
  sVar38 = ((ushort)uVar24 & 3) - (*puVar37 & 3);
  *puVar37 = *puVar37 + (ushort)(0 < sVar38) * sVar38;
  if (SCARRY1(cVar15,(char)uVar42) != SCARRY1(cVar43,bVar31)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  *(undefined **)(puVar41 + uVar40 + 0x1c) = &UNK_?;
  func_?();
  return;
}


/* BsonBinaryWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
    cRam_? = '\x01';
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding = pEVar1;
  func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields,pEVar1);
  return;
}


/* BsonBinaryWriter(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter__ctor
               (BsonBinaryWriter *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IO__BinaryWriter);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._DateTimeKindHandling_k__BackingField = 1;
  this_00 = (BinaryWriter *)func_?(TypeInfo__System__IO__BinaryWriter);
  if (this_00 != (BinaryWriter *)0x0) {
    mscorlib.dll::System::IO::BinaryWriter::BinaryWriter__ctor_1(this_00,stream,(MethodInfo *)0x0);
    (this->fields)._writer = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

