
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
  pCVar1 = (CultureInfo *)t;
  _Stack_10.dummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->dummy = &_Stack_10;
  pBStack_2 = (BsonToken__Class *)&stack0xffffffb4;
  pBVar3 = (BsonToken__Class *)&stack0xffffffb4;
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
    pBVar3 = pBStack_2;
  }
  pBStack_2 = pBVar3;
  pBStack_4 = (BsonToken__Class *)0x0;
  pBStack_5 = (BsonToken__Class *)0x0;
  bVar6 = 0;
  if (t != (BsonToken *)0x0) {
    uVar7 = (*(t->klass->vtable).__unknown.methodPtr)(t,(t->klass->vtable).__unknown.method);
    pBVar8 = TypeInfo__System__Byte;
    switch(uVar7) {
    case 1:
    case 9:
    case 0x12:
      *unaff_FS_OFFSET = _Stack_10;
      return 8;
    case 2:
      unaff_ESI = t->klass;
      bVar6 = 1;
      pBVar9 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonString;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         (pIVar10 = (unaff_ESI->_1).typeHierarchy
                   [(TypeInfo__Newtonsoft__Json__Bson__BsonString->_1).typeHierarchyDepth - 1],
         bVar6 = pIVar10 < TypeInfo__Newtonsoft__Json__Bson__BsonString,
         pIVar10 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonString)) {
        pBVar3 = t[1].klass;
        pBVar11 = (BsonToken *)0x0;
        if (pBVar3 == (BsonToken__Class *)0x0) {
code_?:
          t[1].fields._Parent_k__BackingField = pBVar11;
          iVar12 = (int)&(t[1].fields._Parent_k__BackingField)->klass +
                   (uint)((char)t[1].fields._CalculatedSize_k__BackingField != '\0') * 4 + 1;
          (t->fields)._CalculatedSize_k__BackingField = iVar12;
          *unaff_FS_OFFSET = _Stack_10;
          return iVar12;
        }
        unaff_ESI = (BsonToken__Class *)0x0;
        if ((String__Class *)(pBVar3->_0).image == TypeInfo__System__String) {
          unaff_ESI = pBVar3;
        }
        bVar6 = 0;
        pSVar13 = TypeInfo__System__String;
        if (unaff_ESI != (BsonToken__Class *)0x0) {
          if ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
          }
          pEVar14 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
          bVar6 = 0;
          if (pEVar14 != (Encoding *)0x0) {
            pBVar11 = (BsonToken *)
                     (*(pEVar14->klass->vtable).GetByteCount.methodPtr)
                               (pEVar14,unaff_ESI,(pEVar14->klass->vtable).GetByteCount.method);
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      break;
    case 3:
      unaff_ESI = t->klass;
      bVar6 = 1;
      pBVar9 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonObject;
      if (((TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth <=
           (unaff_ESI->_1).typeHierarchyDepth) &&
         (pIVar10 = (unaff_ESI->_1).typeHierarchy
                   [(TypeInfo__Newtonsoft__Json__Bson__BsonObject->_1).typeHierarchyDepth - 1],
         bVar6 = pIVar10 < TypeInfo__Newtonsoft__Json__Bson__BsonObject,
         pIVar10 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonObject)) {
        t = (BsonToken *)0x4;
        pBStack_4 = (BsonToken__Class *)
                     BsonObject::BsonObject_GetEnumerator((BsonObject *)pCVar1,(MethodInfo *)0x0);
        unaff_ESI = (BsonToken__Class *)&pBStack_4;
        while (bVar6 = 0, unaff_EDI = (Byte__Array__Class *)t,
              pBStack_4 != (BsonToken__Class *)0x0) {
          cVar15 = func_?(0,TypeInfo__System__Collections__IEnumerator,pBStack_4);
          if (cVar15 == '\0') {
code_?:
            if ((String__Class *)(unaff_ESI->_0).image != (String__Class *)0x0) {
              func_?(0,TypeInfo__System__IDisposable,(String__Class *)(unaff_ESI->_0).image
                             );
            }
            puVar16 = (undefined1 *)((int)&(unaff_EDI->_0).image + 1);
            (((BsonToken *)pCVar1)->fields)._CalculatedSize_k__BackingField = (int32_t)puVar16;
            *unaff_FS_OFFSET = _Stack_10;
            return (int32_t)puVar16;
          }
          bVar6 = 0;
          if (pBStack_4 == (BsonToken__Class *)0x0) break;
          iVar12 = func_?(0,
                                   TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonProperty>
                                   ,pBStack_4);
          bVar6 = 0;
          unaff_EDI = (Byte__Array__Class *)0x0;
          if (iVar12 == 0) break;
          iVar17 = BsonBinaryWriter_CalculateSize_1
                             (this,*(BsonToken **)(iVar12 + 8),(MethodInfo *)0x0);
          iVar18 = BsonBinaryWriter_CalculateSize_1
                            (this,*(BsonToken **)(iVar12 + 0xc),(MethodInfo *)0x0);
          t = (BsonToken *)((int)&t->klass + iVar18 + iVar17 + 1);
        }
        goto code_?;
      }
      break;
    case 4:
      unaff_ESI = t->klass;
      bVar6 = (unaff_ESI->_1).typeHierarchyDepth <
               (TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth;
      pBVar9 = TypeInfo__Newtonsoft__Json__Bson__BsonArray;
      if ((!(bool)bVar6) &&
         (pIVar10 = (unaff_ESI->_1).typeHierarchy
                   [(TypeInfo__Newtonsoft__Json__Bson__BsonArray->_1).typeHierarchyDepth - 1],
         bVar6 = pIVar10 < TypeInfo__Newtonsoft__Json__Bson__BsonArray,
         pIVar10 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonArray)) {
        unaff_EDI = (Byte__Array__Class *)0x4;
        iStack_19 = 0;
        pBStack_5 = (BsonToken__Class *)
                     BsonArray::BsonArray_GetEnumerator((BsonArray *)t,(MethodInfo *)0x0);
        unaff_ESI = (BsonToken__Class *)&pBStack_5;
        while (bVar6 = 0, pBStack_5 != (BsonToken__Class *)0x0) {
          cVar15 = func_?(0,TypeInfo__System__Collections__IEnumerator,pBStack_5);
          if (cVar15 == '\0') goto code_?;
          bVar6 = 0;
          if (pBStack_5 == (BsonToken__Class *)0x0) break;
          pBVar11 = (BsonToken *)
                   func_?(0,
                                   TypeInfo__System__Collections__Generic__IEnumerator<Newtonsoft::Json::Bson::BsonToken>
                                   ,pBStack_5);
          iVar17 = Json::Utilities::MathUtils::MathUtils_IntLength(iStack_19,(MethodInfo *)0x0);
          iVar18 = BsonBinaryWriter_CalculateSize_1(this,pBVar11,(MethodInfo *)0x0);
          unaff_EDI = (Byte__Array__Class *)((int)&(unaff_EDI->_0).image + iVar18 + iVar17 + 2);
          iStack_19 = iStack_19 + 1;
        }
        goto code_?;
      }
      break;
    case 5:
      unaff_ESI = t->klass;
      bVar6 = (unaff_ESI->_1).typeHierarchyDepth <
               (TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth;
      pBVar9 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonValue;
      if ((!(bool)bVar6) &&
         (pIVar10 = (unaff_ESI->_1).typeHierarchy
                   [(TypeInfo__Newtonsoft__Json__Bson__BsonValue->_1).typeHierarchyDepth - 1],
         bVar6 = pIVar10 < TypeInfo__Newtonsoft__Json__Bson__BsonValue,
         pIVar10 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonValue)) {
        unaff_ESI = t[1].klass;
        bVar6 = 0;
        unaff_EDI = TypeInfo__System__Byte;
        if (unaff_ESI != (BsonToken__Class *)0x0) {
          iVar12 = func_?(unaff_ESI,TypeInfo__System__Byte);
          bVar6 = 0;
          if (iVar12 != 0) {
            iVar12 = *(int *)(iVar12 + 0xc) + 5;
            (t->fields)._CalculatedSize_k__BackingField = iVar12;
            *unaff_FS_OFFSET = _Stack_10;
            return iVar12;
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
      bVar6 = (unaff_ESI->_1).typeHierarchyDepth <
               (TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth;
      pBVar9 = (BsonArray__Class *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex;
      if ((!(bool)bVar6) &&
         (pIVar10 = (unaff_ESI->_1).typeHierarchy
                   [(TypeInfo__Newtonsoft__Json__Bson__BsonRegex->_1).typeHierarchyDepth - 1],
         bVar6 = pIVar10 < TypeInfo__Newtonsoft__Json__Bson__BsonRegex,
         pIVar10 == (Il2CppClass *)TypeInfo__Newtonsoft__Json__Bson__BsonRegex)) {
        iVar17 = BsonBinaryWriter_CalculateSize_1(this,(BsonToken *)t[1].klass,(MethodInfo *)0x0);
        iVar18 = BsonBinaryWriter_CalculateSize_1(this,(BsonToken *)t[1].monitor,(MethodInfo *)0x0);
        (t->fields)._CalculatedSize_k__BackingField = iVar18 + iVar17;
        *unaff_FS_OFFSET = _Stack_10;
        return iVar18 + iVar17;
      }
      break;
    default:
      uVar20 = func_?(&TypeInfo__System__Globalization__CultureInfo);
      func_?(uVar20);
      pCVar21 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      uVar20 = func_?(&TypeInfo__System__Object,1);
      args = (Object__Array *)func_?(uVar20);
      func_?(t);
      uVar7 = func_?(4,t);
      uStack_22 = (BsonToken__Class *)CONCAT13(uVar7,(undefined3)uStack_22);
      uVar20 = func_?(&TypeInfo__Newtonsoft__Json__Bson__BsonType,(int)&uStack_22 + 3);
      uVar20 = func_?(uVar20);
      func_?(args);
      func_?(args,uVar20);
      func_?(0,uVar20);
      pMVar23 = (MethodInfo *)0x0;
      pCVar1 = pCVar21;
      pSVar24 = (String *)func_?(&StringLiteral_Unexpected_token_when_writing_BS);
      unaff_ESI = (BsonToken__Class *)
                  Json::Utilities::StringUtils::StringUtils_FormatWith
                            (pSVar24,(IFormatProvider *)pCVar1,args,pMVar23);
      uVar20 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      unaff_EDI = (Byte__Array__Class *)func_?(uVar20);
      func_?(unaff_EDI);
      pMVar23 = (MethodInfo *)0x0;
      pBVar3 = unaff_ESI;
      pSVar24 = (String *)func_?(&StringLiteral_t);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                ((ArgumentOutOfRangeException *)unaff_EDI,pSVar24,(String *)pBVar3,pMVar23);
      func_?();
      bVar6 = (undefined1 *)0xffffffeb < &stack0xffffffb4;
      pBVar3 = (BsonToken__Class *)func_?();
      pSVar13 = extraout_ECX;
      t = (BsonToken *)pCVar21;
code_?:
      func_?(pBVar3,pSVar13);
      pBVar9 = extraout_EDX;
      break;
    case 0x10:
      *unaff_FS_OFFSET = _Stack_10;
      return 4;
    }
    func_?(t,pBVar9);
    pCVar1 = (CultureInfo *)t;
  }
code_?:
  uVar20 = func_?();
  uVar20 = func_?(uVar20);
  func_?(uVar20);
  t = (BsonToken *)pCVar1;
  pBVar8 = unaff_EDI;
code_?:
  uVar25 = func_?(unaff_ESI,pBVar8);
  pbVar26 = (byte *)((ulonglong)uVar25 >> 0x20);
  pbVar27 = (byte *)uVar25;
  pbVar28 = (byte *)(extraout_ECX_00 + 0x43104b52);
  bVar29 = (byte)((ulonglong)uVar25 >> 0x20);
  bVar30 = CARRY1(*pbVar28,bVar29) || CARRY1(*pbVar28 + bVar29,bVar6);
  *pbVar28 = *pbVar28 + bVar29 + bVar6;
  bVar31 = (char)t - 2;
  pbVar28 = pbVar26 + -0x58efb4ac;
  bVar6 = *pbVar28 + bVar31;
  bVar32 = CARRY1(*pbVar28,bVar31) || CARRY1(bVar6,bVar30);
  *pbVar28 = bVar6 + bVar30;
  bVar31 = (byte)((uint)&(((CultureInfo *)((int)t + -0x74))->fields).field_0x69 >> 8);
  bVar6 = *(char *)&(unaff_ESI->_0).image + bVar31;
  bVar30 = CARRY1(*(byte *)&(unaff_ESI->_0).image,bVar31) || CARRY1(bVar6,bVar32);
  *(byte *)&(unaff_ESI->_0).image = bVar6 + bVar32;
  _Stack_10.typeHandle = (Il2CppMetadataTypeHandle)unaff_ESI;
  bVar32 = CARRY1(*pbVar26,bVar29) || CARRY1(*pbVar26 + bVar29,bVar30);
  *pbVar26 = *pbVar26 + bVar29 + bVar30;
  pBStack_2 = unaff_ESI;
  bVar31 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar6 = *pbVar27 + bVar31;
  bVar30 = CARRY1(*pbVar27,bVar31) || CARRY1(bVar6,bVar32);
  *pbVar27 = bVar6 + bVar32;
  uStack_22 = unaff_ESI;
  bVar31 = (byte)extraout_ECX_00;
  bVar32 = CARRY1(bVar31,bVar31) || CARRY1(bVar31 * '\x02',bVar30);
  pBStack_4 = unaff_ESI;
  bVar33 = (byte)((uint)((int)&(((CultureInfo *)((int)t + -0x74))->fields).m_cultureData + 1) >> 8);
  bVar6 = *(char *)&(unaff_ESI->_0).image + bVar33;
  bVar34 = CARRY1(*(byte *)&(unaff_ESI->_0).image,bVar33) || CARRY1(bVar6,bVar32);
  *(byte *)&(unaff_ESI->_0).image = bVar6 + bVar32;
  pbVar28 = (byte *)(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),bVar31 * '\x02' + bVar30) + 0x56);
  bVar30 = CARRY1(*pbVar28,bVar29) || CARRY1(*pbVar28 + bVar29,bVar34);
  *pbVar28 = *pbVar28 + bVar29 + bVar34;
  puVar16 = (undefined1 *)
            ((int)&(((CultureInfo *)((int)t + -0x74))->fields).cached_serialized_form + 3);
  bVar31 = (byte)puVar16;
  bVar29 = (byte)((uint)puVar16 >> 8);
  bVar6 = bVar29 + bVar31;
  bVar32 = CARRY1(bVar29,bVar31) || CARRY1(bVar6,bVar30);
  iVar12 = CONCAT22((short)((uint)puVar16 >> 0x10),CONCAT11(bVar6 + bVar30,bVar31)) + -1;
  bVar31 = (byte)iVar12;
  bVar29 = (byte)((uint)iVar12 >> 8);
  bVar6 = bVar29 + bVar31;
  bVar30 = CARRY1(bVar29,bVar31) || CARRY1(bVar6,bVar32);
  iVar12 = CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11(bVar6 + bVar32,bVar31)) + -1;
  bVar31 = (byte)iVar12;
  bVar29 = (byte)((uint)iVar12 >> 8);
  bVar6 = bVar29 + bVar31;
  bVar32 = CARRY1(bVar29,bVar31) || CARRY1(bVar6,bVar30);
  iVar12 = CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11(bVar6 + bVar30,bVar31)) + -1;
  bVar31 = (byte)iVar12;
  bVar29 = (byte)((uint)iVar12 >> 8);
  bVar6 = bVar29 + bVar31;
  pcVar35 = (char *)(CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11(bVar6 + bVar32,bVar31)) +
                   -0x20efb4ab);
  *pcVar35 = *pcVar35 + (char)((ulonglong)uVar25 >> 0x28) +
            (CARRY1(bVar29,bVar31) || CARRY1(bVar6,bVar32));
  pcVar36 = (code *)swi(3);
  pBStack_5 = unaff_ESI;
  iVar17 = (*pcVar36)();
  return iVar17;
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

/* decompilation failed: Low-level Error: Trying to construct memory range beyond end of address space: ram */

/* decompilation failed: Low-level Error: Trying to construct memory range beyond end of address space: ram */


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

