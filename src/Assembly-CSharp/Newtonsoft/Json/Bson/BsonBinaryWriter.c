
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  if (t != (BsonToken *)0x0) {
    uVar4 = (*(code *)(t->klass->vtable).__unknown.method)();
    switch(uVar4) {
    case 1:
    case 9:
    case 0x12:
      *unaff_FS_OFFSET = uStack_3;
      return 8;
    case 2:
      t = (BsonToken *)func_?();
      if ((String *)t != (String *)0x0) {
        unaff_EDI = (ArgumentOutOfRangeException *)func_?();
        if (unaff_EDI == (ArgumentOutOfRangeException *)0x0) {
          iVar5 = 0;
        }
        else {
          if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_started == 0)) {
            func_?();
          }
          pEVar6 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
          if (pEVar6 == (Encoding *)0x0) break;
          iVar5 = (*(code *)(pEVar6->klass->vtable).GetByteCount.method)();
        }
        (((String *)(t + 1))->fields).length = iVar5;
        iVar7 = iVar5 + (uint)((char)(((String *)(t + 1))->fields).start_char != '\0') * 4 + 1;
code_?:
        *(int32_t *)&(((String *)t)->fields).start_char = iVar7;
        *unaff_FS_OFFSET = uStack_3;
        return iVar7;
      }
      break;
    case 3:
      this_00 = (CultureInfo *)func_?();
      t = (BsonToken *)0x4;
      unaff_EBX = this_00;
      if (this_00 != (CultureInfo *)0x0) {
        unaff_EDI = (ArgumentOutOfRangeException *)
                    BsonObject::BsonObject_GetEnumerator((BsonObject *)this_00,(MethodInfo *)0x0);
        uStack_1 = 0;
        while (unaff_EDI != (ArgumentOutOfRangeException *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            if (unaff_EDI != (ArgumentOutOfRangeException *)0x0) {
              func_?();
            }
            t = (BsonToken *)((int)&((String *)t)->klass + 1);
            unaff_EBX = this_00;
            if (this_00 != (CultureInfo *)0x0) {
              (this_00->fields).cultureID = (int32_t)t;
              *unaff_FS_OFFSET = uStack_3;
              return (int32_t)(String *)t;
            }
            break;
          }
          unaff_EBX = (CultureInfo *)func_?();
          if (unaff_EBX == (CultureInfo *)0x0) break;
          iVar7 = BsonBinaryWriter_CalculateSize_1
                             (this,*(BsonToken **)&unaff_EBX->fields,(MethodInfo *)0x0);
          iVar9 = BsonBinaryWriter_CalculateSize_1
                             (this,(BsonToken *)(unaff_EBX->fields).cultureID,(MethodInfo *)0x0);
          t = (BsonToken *)((int)&((String *)t)->klass + iVar9 + iVar7 + 1);
        }
      }
      break;
    case 4:
      this_01 = (BsonArray *)func_?();
      unaff_EBX = (CultureInfo *)0x0;
      t = (BsonToken *)0x4;
      if (this_01 != (BsonArray *)0x0) {
        unaff_EDI = (ArgumentOutOfRangeException *)
                    BsonArray::BsonArray_GetEnumerator(this_01,(MethodInfo *)0x0);
        uStack_1 = 2;
        while (unaff_EDI != (ArgumentOutOfRangeException *)0x0) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            uStack_1 = 0xffffffff;
            if (unaff_EDI != (ArgumentOutOfRangeException *)0x0) {
              func_?();
            }
            unaff_EBX = (CultureInfo *)0x0;
            if (this_01 != (BsonArray *)0x0) {
              puVar10 = (undefined1 *)((int)&((String *)t)->klass + 1);
              (this_01->fields)._._CalculatedSize_k__BackingField = (int32_t)puVar10;
              *unaff_FS_OFFSET = uStack_3;
              return (int32_t)puVar10;
            }
            break;
          }
          t_00 = (BsonToken *)func_?();
          iVar7 = Json::Utilities::MathUtils::MathUtils_IntLength
                             ((int32_t)unaff_EBX,(MethodInfo *)0x0);
          iVar9 = BsonBinaryWriter_CalculateSize_1(this,t_00,(MethodInfo *)0x0);
          t = (BsonToken *)((int)&((String *)t)->klass + iVar9 + iVar7 + 2);
          unaff_EBX = (CultureInfo *)((int)&unaff_EBX->klass + 1);
        }
      }
      break;
    case 5:
      t = (BsonToken *)func_?();
      if (((String *)t != (String *)0x0) && (iVar5 = func_?(), iVar5 != 0)) {
        iVar7 = *(int *)(iVar5 + 0xc) + 5;
        goto code_?;
      }
      break;
    case 6:
    case 10:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    case 7:
      *unaff_FS_OFFSET = uStack_3;
      return 0xc;
    case 8:
      *unaff_FS_OFFSET = uStack_3;
      return 1;
    case 0xb:
      iVar5 = func_?();
      unaff_EBX = (CultureInfo *)0x0;
      if (iVar5 != 0) {
        iVar7 = BsonBinaryWriter_CalculateSize_1
                           (this,*(BsonToken **)(iVar5 + 0x10),(MethodInfo *)0x0);
        iVar9 = BsonBinaryWriter_CalculateSize_1
                           (this,*(BsonToken **)(iVar5 + 0x14),(MethodInfo *)0x0);
        *(int32_t *)(iVar5 + 0xc) = iVar9 + iVar7;
        *unaff_FS_OFFSET = uStack_3;
        return iVar9 + iVar7;
      }
      break;
    default:
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_EBX = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
      args = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      t = (BsonToken *)
          Json::Utilities::StringUtils::StringUtils_FormatWith
                    (StringLiteral_Unexpected_token_when_writing_BS,(IFormatProvider *)unaff_EBX,
                     args,(MethodInfo *)0x0);
      unaff_EDI = (ArgumentOutOfRangeException *)func_?();
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (unaff_EDI,StringLiteral_t,(String *)t,(MethodInfo *)0x0);
      func_?();
      break;
    case 0x10:
      *unaff_FS_OFFSET = uStack_3;
      return 4;
    }
  }
  func_?();
  func_?();
  uVar11 = func_?();
  bVar12 = (byte)((ulonglong)uVar11 >> 0x20);
  bVar13 = bVar12 + bRam_?;
  pbVar14 = &stack0x16cc1051 + CONCAT31((int3)((ulonglong)uVar11 >> 0x28),bVar13);
  bVar15 = (byte)((uint)unaff_EBX >> 8);
  bVar16 = CARRY1(*pbVar14,bVar15) || CARRY1(*pbVar14 + bVar15,CARRY1(bVar12,bRam_?));
  *pbVar14 = *pbVar14 + bVar15 + CARRY1(bVar12,bRam_?);
  bVar17 = CARRY1(extraout_CL,bVar13) || CARRY1(extraout_CL + bVar13,bVar16);
  pbVar14 = (byte *)((int)uVar11 + 0x18);
  bVar12 = *pbVar14;
  bVar18 = *pbVar14 + (byte)uVar11;
  *pbVar14 = bVar18 + bVar17;
  *(byte *)&((String *)t)->klass =
       *(char *)&((String *)t)->klass + extraout_CL + bVar13 + bVar16 +
       (CARRY1(bVar12,(byte)uVar11) || CARRY1(bVar18,bVar17));
  bVar16 = CARRY1(bVar13,bRam_?);
  bVar13 = bVar13 + bRam_?;
  pSVar19 = &((String *)(t + 1))->fields;
  iVar7 = pSVar19->length;
  bVar12 = (char)pSVar19->length + bVar13;
  *(byte *)&pSVar19->length = bVar12 + bVar16;
  *(byte *)&unaff_EDI[-0x1150fa6].klass =
       *(char *)&unaff_EDI[-0x1150fa6].klass + bVar15 +
       (CARRY1((byte)iVar7,bVar13) || CARRY1(bVar12,bVar16));
  pcVar20 = (code *)swi(3);
  iVar7 = (*pcVar20)();
  return iVar7;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_Flush
               (BsonBinaryWriter *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._writer;
  if (pBVar1 != (BinaryWriter *)0x0) {
    (*(code *)(pBVar1->klass->vtable).Flush.method)(pBVar1,(pBVar1->klass->vtable).Write.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WriteString(String, Int32, Nullable`1[Int32]) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_WriteString
               (BsonBinaryWriter *this,String *s,int32_t byteCount,
               Nullable_1_Int32_ calculatedlengthPrefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = func_?(&calculatedlengthPrefix,MethodInfo__System__Nullable<int>__get_HasValue__)
  ;
  if (cVar1 != '\0') {
    pBVar2 = (this->fields)._writer;
    uVar3 = func_?(&calculatedlengthPrefix,MethodInfo__System__Nullable<int>__get_Value__);
    if (pBVar2 == (BinaryWriter *)0x0) goto code_?;
    (*(code *)(pBVar2->klass->vtable).Write_10.method)
              (pBVar2,uVar3,(pBVar2->klass->vtable).Write_11.methodPtr);
  }
  if (s != (String *)0x0) {
    if ((this->fields)._largeByteBuffer == (Byte__Array *)0x0) {
      pBVar4 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x100);
      (this->fields)._largeByteBuffer = pBVar4;
      if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
      }
      pEVar5 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
      if (pEVar5 == (Encoding *)0x0) goto code_?;
      iVar6 = (*(code *)(pEVar5->klass->vtable).__unknown_4.method)
                        (pEVar5,1,(pEVar5->klass->vtable).__unknown_5.methodPtr);
      (this->fields)._maxChars = (int32_t)(0x100 / (longlong)iVar6);
    }
    if (byteCount < 0x101) {
      if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
      }
      pEVar5 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
      pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
      if (pEVar5 == (Encoding *)0x0) goto code_?;
      (*(code *)(pEVar5->klass->vtable).GetBytes.method)
                (pEVar5,s,0,pIVar7,(this->fields)._largeByteBuffer,0,
                 (pEVar5->klass->vtable).GetBytes_1.methodPtr);
      pBVar2 = (this->fields)._writer;
      if (pBVar2 == (BinaryWriter *)0x0) goto code_?;
      (*(code *)(pBVar2->klass->vtable).Write_3.method)
                (pBVar2,(this->fields)._largeByteBuffer,0,byteCount,
                 (pBVar2->klass->vtable).Write_4.methodPtr);
    }
    else {
      iStack_8 = 0;
      for (pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)s,(MethodInfo *)0x0);
          0 < (int)pIVar7; pIVar7 = (IList_1_VoxelHit_ *)((int)pIVar7 - (int)pIVar9)) {
        pIVar9 = pIVar7;
        if ((this->fields)._maxChars < (int)pIVar7) {
          pIVar9 = (IList_1_VoxelHit_ *)(this->fields)._maxChars;
        }
        if ((((uint)(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter);
        }
        pEVar5 = TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding;
        if (pEVar5 == (Encoding *)0x0) goto code_?;
        uVar3 = func_?(9,pEVar5,s,iStack_8,pIVar9,(this->fields)._largeByteBuffer,0);
        pBVar2 = (this->fields)._writer;
        if (pBVar2 == (BinaryWriter *)0x0) goto code_?;
        func_?(0xb,pBVar2,(this->fields)._largeByteBuffer,0,uVar3);
        iStack_8 = (int)&pIVar9->klass + iStack_8;
      }
    }
  }
  pBVar2 = (this->fields)._writer;
  if (pBVar2 != (BinaryWriter *)0x0) {
    (*(code *)(pBVar2->klass->vtable).Write_1.method)
              (pBVar2,0,(pBVar2->klass->vtable).Write_2.methodPtr);
    return;
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void WriteToken(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter_WriteToken
               (BsonBinaryWriter *this,BsonToken *t,MethodInfo *method)

{
  BsonBinaryWriter_CalculateSize_1(this,t,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = 0;
  iVar3 = 0;
  pAStack_4 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)0x0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  func_?();
  this_01 = _uStack00000014;
  bVar8 = 0;
  puStack_9 = (undefined4 *)&stack0xffffff98;
  if (_uStack00000014 == (BsonBinaryWriter *)0x0) goto code_?;
  puStack_9 = (undefined4 *)&stack0xffffff98;
  uVar10 = (*(code *)(((BsonArray__Class *)_uStack00000014->klass)->vtable).get_Type.method)();
  switch(uVar10) {
  case 1:
    iVar2 = func_?();
    this_01 = (BsonBinaryWriter *)
              ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    bVar8 = 0;
    if (iVar2 != 0) {
      _uStack00000014 = *(BsonBinaryWriter **)(iVar2 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      uStack_13 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                            ((Object *)_uStack00000014,(IFormatProvider *)pCVar12,(MethodInfo *)0x0)
      ;
      bVar8 = 0;
      if (this_01 != (BsonBinaryWriter *)0x0) {
        (**(code **)((_union_86 *)&((BsonArray__Class *)this_01->klass)[1]._0 + 0x13))
                  (this_01,SUB84(uStack_13,0));
        *unaff_FS_OFFSET = uVar1;
        return;
      }
    }
    break;
  case 2:
    iVar2 = func_?();
    bVar8 = 0;
    if (iVar2 != 0) {
      uVar14 = *(undefined4 *)(iVar2 + 0x10);
      iVar15 = *(int32_t *)(iVar2 + 0x18);
      uStack_16 = 0;
      func_?(&uStack_16);
      pMVar17 = (MethodInfo *)0x0;
      iVar18 = (int32_t)uStack_16;
      uVar19 = uStack_16._4_4_;
      pSVar20 = (String *)func_?(uVar14,TypeInfo__System__String);
      calculatedlengthPrefix_00._4_4_ = uVar19;
      calculatedlengthPrefix_00.value = iVar18;
      BsonBinaryWriter_WriteString
                (in_stack_11,pSVar20,iVar15,calculatedlengthPrefix_00,pMVar17);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    break;
  case 3:
    this_00 = (BsonObject *)func_?();
    pBVar21 = in_stack_11;
    bVar8 = 0;
    this_01 = in_stack_11;
    if ((this_00 != (BsonObject *)0x0) &&
       (bVar8 = 0,
       ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField !=
       (BsonToken *)0x0)) {
      func_?(0x12);
      pIVar22 = BsonObject::BsonObject_GetEnumerator(this_00,(MethodInfo *)0x0);
      uStack_16 = CONCAT44(pIVar22,(int32_t)uStack_16);
      while (bVar8 = 0, this_01 = pBVar21,
            pIVar22 != (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
        cVar23 = func_?(1);
        if (cVar23 == '\0') {
          *puStack_9 = 0xf1;
          if (pIVar22 != (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
            func_?(0);
          }
          bVar8 = 0;
          if (iVar3 != 0) goto code_?;
          pBVar24 = ((BsonToken__Fields *)&(pBVar21->fields)._writer)->_Parent_k__BackingField;
          bVar8 = 0;
          if (pBVar24 != (BsonToken *)0x0) {
            (*(code *)pBVar24->klass[1]._0.castClass)(pBVar24);
            goto code_?;
          }
          break;
        }
        this_01 = (BsonBinaryWriter *)func_?(0);
        _uStack00000014 =
             (BsonBinaryWriter *)
             ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
        bVar8 = 0;
        if (this_01 == (BsonBinaryWriter *)0x0) break;
        pBVar25 = (this_01->fields)._largeByteBuffer;
        bVar8 = 0;
        if (pBVar25 == (Byte__Array *)0x0) break;
        (*(code *)pBVar25->klass[1]._0.castClass)();
        bVar8 = 0;
        if (_uStack00000014 == (BsonBinaryWriter *)0x0) break;
        (*(code *)((BsonArray__Class *)_uStack00000014->klass)[1]._1.initializationExceptionGCHandle
        )(_uStack00000014);
        pBVar24 = ((BsonToken__Fields *)&(this_01->fields)._writer)->_Parent_k__BackingField;
        bVar8 = 0;
        if (pBVar24 == (BsonToken *)0x0) break;
        pBVar26 = pBVar24[1].klass;
        _uStack00000014 = (BsonBinaryWriter *)pBVar24[1].fields._Parent_k__BackingField;
        s = (BsonToken__Class *)0x0;
        uStack_13 = 0.0;
        if (pBVar26 != (BsonToken__Class *)0x0) {
          if ((String__Class *)(pBVar26->_0).image == TypeInfo__System__String) {
            s = pBVar26;
          }
          bVar8 = 0;
          if (s == (BsonToken__Class *)0x0) goto code_?;
        }
        BsonBinaryWriter_WriteString
                  (in_stack_11,(String *)s,(int32_t)_uStack00000014,(Nullable_1_Int32_)0x0,
                   (MethodInfo *)0x0);
        pBVar21 = in_stack_11;
        BsonBinaryWriter_WriteTokenInternal
                  (in_stack_11,(BsonToken *)(this_01->fields)._largeByteBuffer,
                   (MethodInfo *)0x0);
      }
    }
    break;
  case 4:
    this_01 = (BsonBinaryWriter *)func_?();
    pBVar27 = in_stack_11;
    bVar8 = 0;
    if ((this_01 != (BsonBinaryWriter *)0x0) &&
       (bVar8 = 0,
       ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField !=
       (BsonToken *)0x0)) {
      func_?(0x12);
      pBVar21 = (BsonBinaryWriter *)
                BsonArray::BsonArray_GetEnumerator((BsonArray *)this_01,(MethodInfo *)0x0);
      uStack_16 = CONCAT44(pBVar21,(int32_t)uStack_16);
      while (bVar8 = 0, this_01 = pBVar21, pBVar21 != (BsonBinaryWriter *)0x0) {
        cVar23 = func_?(1);
        if (cVar23 == '\0') {
          *puStack_9 = 0x199;
          if (pBVar21 != (BsonBinaryWriter *)0x0) {
            func_?(0);
          }
          bVar8 = 0;
          if (iVar3 != 0) goto code_?;
          bVar8 = 0;
          if (((BsonToken__Fields *)&(pBVar27->fields)._writer)->_Parent_k__BackingField !=
              (BsonToken *)0x0) {
            func_?(9);
            goto code_?;
          }
          break;
        }
        pBVar24 = (BsonToken *)func_?(0);
        _uStack00000014 =
             (BsonBinaryWriter *)
             ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
        bVar8 = 0;
        if (pBVar24 == (BsonToken *)0x0) break;
        func_?();
        bVar8 = 0;
        if (_uStack00000014 == (BsonBinaryWriter *)0x0) break;
        func_?(0x14);
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                  ((MethodInfo *)0x0);
        _uStack00000014 = (BsonBinaryWriter *)func_?();
        iVar15 = Json::Utilities::MathUtils::MathUtils_IntLength(iVar2,(MethodInfo *)0x0);
        uStack_13 = 0.0;
        BsonBinaryWriter_WriteString
                  (in_stack_11,(String *)_uStack00000014,iVar15,(Nullable_1_Int32_)0x0,
                   (MethodInfo *)0x0);
        pBVar27 = in_stack_11;
        BsonBinaryWriter_WriteTokenInternal(in_stack_11,pBVar24,(MethodInfo *)0x0);
        iVar2 = iVar2 + 1;
      }
    }
    break;
  case 5:
    iVar2 = func_?();
    bVar8 = 0;
    if (iVar2 == 0) break;
    this_01 = (BsonBinaryWriter *)func_?();
    bVar8 = 0;
    if ((this_01 == (BsonBinaryWriter *)0x0) ||
       (bVar8 = 0,
       ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField ==
       (BsonToken *)0x0)) break;
    func_?(0x12);
    bVar8 = 0;
    if (((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField ==
        (BsonToken *)0x0) break;
    func_?(9);
    pBVar24 = ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    goto joined_?;
  case 6:
  case 10:
    goto code_?;
  case 7:
    iVar2 = func_?();
    bVar8 = 0;
    if (iVar2 == 0) break;
    func_?();
    pBVar24 = ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
joined_?:
    bVar8 = 0;
    if (pBVar24 != (BsonToken *)0x0) {
      func_?(10);
code_?:
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    break;
  case 8:
    iVar2 = func_?();
    this_01 = (BsonBinaryWriter *)
              ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    bVar8 = 0;
    if ((iVar2 != 0) && (bVar8 = 0, this_01 != (BsonBinaryWriter *)0x0)) {
      puVar28 = (undefined1 *)func_?();
      func_?(8,this_01,*puVar28);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    break;
  case 9:
    iVar2 = func_?();
    bVar8 = 0;
    if (iVar2 == 0) break;
    piVar29 = *(int **)(iVar2 + 0x10);
    if (piVar29 == (int *)0x0) {
code_?:
      func_?();
      puVar30 = (undefined4 *)func_?(&pAStack_31,&stack0xffffffa4,0);
      pAStack_31 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                   *puVar30;
      uStack_32 = puVar30[1];
      uStack_13 = *(double *)(puVar30 + 2);
      offset = mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System
               ::Reflection::CustomAttributeTypedArgument]::
               Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                         ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                           *)&stack0xffffffa4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      dateTime.ticks._ticks._4_4_ = uStack_32;
      dateTime.ticks._ticks._0_4_ = pAStack_31;
      dateTime.kind = (int32_t)uStack_13;
      dateTime._12_4_ = uStack_13._4_4_;
      JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks
                (dateTime,(TimeSpan)offset,(MethodInfo *)0x0);
    }
    else {
      piVar33 = (int *)0x0;
      if ((DateTime__Class *)*piVar29 == TypeInfo__System__DateTime) {
        piVar33 = piVar29;
      }
      if (piVar33 == (int *)0x0) goto code_?;
      puVar30 = (undefined4 *)func_?();
      pAStack_4 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                   *puVar30;
      uStack_5 = puVar30[1];
      uStack_6 = puVar30[2];
      uStack_7 = puVar30[3];
      uStack_13 = *(double *)(puVar30 + 2);
      iVar2 = (in_stack_11->fields)._DateTimeKindHandling_k__BackingField;
      pAStack_31 = pAStack_4;
      uStack_32 = uStack_5;
      if (iVar2 == 1) {
        puVar30 = (undefined4 *)func_?(&pAStack_31,&pAStack_4,0);
code_?:
        pAStack_31 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                     *puVar30;
        uStack_32 = puVar30[1];
        uStack_6 = puVar30[2];
        uStack_7 = puVar30[3];
        uStack_13 = *(double *)(puVar30 + 2);
      }
      else if (iVar2 == 2) {
        puVar30 = (undefined4 *)func_?(&pAStack_31,&pAStack_4,0);
        goto code_?;
      }
      pAStack_4 = pAStack_31;
      uStack_5 = uStack_32;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      dateTime_00.ticks._ticks._4_4_ = uStack_32;
      dateTime_00.ticks._ticks._0_4_ = pAStack_31;
      dateTime_00.kind = (int32_t)uStack_13;
      dateTime_00._12_4_ = uStack_13._4_4_;
      JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_2(dateTime_00,0,(MethodInfo *)0x0);
    }
    pBVar24 = ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    bVar8 = 0;
    this_01 = in_stack_11;
    if (pBVar24 != (BsonToken *)0x0) {
      func_?(0x13,pBVar24);
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    break;
  case 0xb:
    this_01 = (BsonBinaryWriter *)func_?();
    bVar8 = 0;
    if (this_01 != (BsonBinaryWriter *)0x0) {
      pLVar34 = (List_1_Newtonsoft_Json_Bson_BsonToken_ *)(this_01->fields)._maxChars;
      bVar8 = 0;
      if (pLVar34 != (List_1_Newtonsoft_Json_Bson_BsonToken_ *)0x0) {
        uStack_13 = 0.0;
        pMVar17 = (MethodInfo *)&UNK_?;
        pSVar20 = (String *)
                  func_?((pLVar34->fields)._version,TypeInfo__System__String,
                                  pLVar34[1].monitor,0);
        calculatedlengthPrefix._4_4_ = in_stack_35;
        calculatedlengthPrefix.value = in_stack_36;
        BsonBinaryWriter_WriteString
                  (in_stack_11,pSVar20,in_stack_37,calculatedlengthPrefix,pMVar17);
        iVar2 = (this_01->fields)._DateTimeKindHandling_k__BackingField;
        pMVar17 = (MethodInfo *)0x0;
        bVar8 = 0;
        if (iVar2 != 0) {
          uStack_13 = 0.0;
          uStack_13._4_4_ = 0;
          uStack_13._0_4_ = 0;
          iVar15 = *(int32_t *)(iVar2 + 0x18);
          iVar18 = (int32_t)uStack_13;
          uVar14 = uStack_13._4_4_;
          pSVar20 = (String *)
                    func_?(*(undefined4 *)(iVar2 + 0x10),TypeInfo__System__String);
          calculatedlengthPrefix_01._4_4_ = uVar14;
          calculatedlengthPrefix_01.value = iVar18;
          BsonBinaryWriter_WriteString
                    (in_stack_11,pSVar20,iVar15,calculatedlengthPrefix_01,pMVar17);
          *unaff_FS_OFFSET = uVar1;
          return;
        }
      }
    }
    break;
  default:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    uStack_16 = CONCAT44(pCVar12,(int32_t)uStack_16);
    args = (Object__Array *)func_?();
    func_?(this_01,0);
    uVar10 = func_?(4,this_01);
    _uStack00000014 = (BsonBinaryWriter *)CONCAT13(uVar10,uStack38);
    uVar1 = func_?(TypeInfo__Newtonsoft__Json__Bson__BsonType,(int)&stack0x00000014 + 3);
    func_?(args,0);
    func_?(args,uVar1);
    func_?();
    this_01 = (BsonBinaryWriter *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_token_when_writing_BS,uStack_16._4_4_,args,
                         (MethodInfo *)0x0);
    this_02 = (ArgumentOutOfRangeException *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_02,StringLiteral_t,(String *)this_01,(MethodInfo *)0x0);
    bVar8 = (undefined1 *)0xffffffdb < &stack0xffffff90;
    func_?();
    break;
  case 0x10:
    iVar2 = func_?();
    this_01 = (BsonBinaryWriter *)
              ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    bVar8 = 0;
    if (iVar2 != 0) {
      _uStack00000014 = *(BsonBinaryWriter **)(iVar2 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_17
                ((Object *)_uStack00000014,(IFormatProvider *)pCVar12,(MethodInfo *)0x0);
      bVar8 = 0;
      if (this_01 != (BsonBinaryWriter *)0x0) {
        func_?(0x12);
        goto code_?;
      }
    }
    break;
  case 0x12:
    iVar2 = func_?();
    this_01 = (BsonBinaryWriter *)
              ((BsonToken__Fields *)&(in_stack_11->fields)._writer)->_Parent_k__BackingField;
    bVar8 = 0;
    if (iVar2 != 0) {
      _uStack00000014 = *(BsonBinaryWriter **)(iVar2 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt64_17
                ((Object *)_uStack00000014,(IFormatProvider *)pCVar12,(MethodInfo *)0x0);
      bVar8 = 0;
      if (this_01 != (BsonBinaryWriter *)0x0) {
        func_?(0x13,this_01);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  iVar3 = func_?();
  pBVar21 = this_01;
code_?:
  iVar3 = func_?(iVar3);
code_?:
  uVar39 = func_?(iVar3);
  pcVar40 = (char *)(extraout_EDX * 2 + 0x551db610);
  *pcVar40 = *pcVar40 + '\x01';
  pbVar41 = (byte *)((int)&pBVar21->klass + unaff_EBX);
  bVar42 = (byte)((ushort)extraout_CX >> 8);
  bVar43 = *pbVar41 + bVar42;
  bVar44 = CARRY1(*pbVar41,bVar42) || CARRY1(bVar43,bVar8);
  *pbVar41 = bVar43 + bVar8;
  bVar8 = (byte)((ushort)uVar39 >> 8);
  bVar45 = bVar8 + (byte)extraout_CX;
  bVar46 = CARRY1(bVar8,(byte)extraout_CX) || CARRY1(bVar45,bVar44);
  bVar45 = bVar45 + bVar44;
  bVar47 = (byte)unaff_EBX;
  bVar44 = CARRY1(in_stack_48,bVar47);
  bVar8 = in_stack_48 + bVar47;
  in_stack_48 = bVar8 + bVar46;
  uVar49 = (undefined3)((uint)extraout_EDX >> 8);
  cVar23 = (char)extraout_EDX + bVar47 + (bVar44 || CARRY1(bVar8,bVar46));
  pbVar50 = (byte *)CONCAT31(uVar49,cVar23);
  out((short)pbVar50,(char)uVar39);
  bVar8 = *pbVar50;
  *pbVar50 = *pbVar50 - bVar45;
  pbVar41 = (byte *)((int)&pBVar21[1].fields._writer + 2);
  bVar43 = *pbVar41;
  bVar51 = (byte)((uint)unaff_EBX >> 8);
  bVar42 = *pbVar41;
  *pbVar41 = bVar42 + bVar51 + (bVar8 < bVar45);
  uVar52 = CONCAT31(uVar49,cVar23 + bVar47 +
                           (CARRY1(bVar43,bVar51) || CARRY1(bVar42 + bVar51,bVar8 < bVar45)));
  in_stack_53 = in_stack_53 & (uint)pbVar50 & (uint)pbVar50 & uVar52;
  in((short)uVar52);
  cRam_? = cRam_? + bVar51;
  cRam_? = cRam_? + bVar51;
  pcVar54 = (code *)swi(3);
  (*pcVar54)(&t,&t,&t,&t);
  return;
}


/* Void WriteTokenInternal(BsonToken) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::
     BsonBinaryWriter_WriteTokenInternal(BsonBinaryWriter *this,BsonToken *t,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  pAStack_8 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)0x0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  func_?();
  this_01 = (BinaryWriter *)t;
  bVar12 = 0;
  puStack_13 = (undefined4 *)&stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  if (t == (BsonToken *)0x0) goto code_?;
  puStack_13 = (undefined4 *)&stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  uVar14 = (*(code *)(t->klass->vtable).__unknown.method)();
  switch(uVar14) {
  case 1:
    iVar15 = func_?();
    this_01 = (this->fields)._writer;
    bVar12 = 0;
    if (iVar15 != 0) {
      t = *(BsonToken **)(iVar15 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      uStack_17 = mscorlib.dll::System::Convert::Convert_ToDouble_13
                            ((Object *)t,(IFormatProvider *)pCVar16,(MethodInfo *)0x0);
      bVar12 = 0;
      if (this_01 != (BinaryWriter *)0x0) {
        (*(code *)(this_01->klass->vtable).Write_8.method)(this_01,SUB84(uStack_17,0));
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    break;
  case 2:
    iVar15 = func_?();
    bVar12 = 0;
    if (iVar15 != 0) {
      uVar18 = *(undefined4 *)(iVar15 + 0x10);
      iVar19 = *(int32_t *)(iVar15 + 0x18);
      uStack_20 = 0;
      func_?(&uStack_20);
      pMVar21 = (MethodInfo *)0x0;
      iVar22 = (int32_t)uStack_20;
      uVar23 = uStack_20._4_4_;
      pSVar24 = (String *)func_?(uVar18,TypeInfo__System__String);
      calculatedlengthPrefix_00._4_4_ = uVar23;
      calculatedlengthPrefix_00.value = iVar22;
      BsonBinaryWriter_WriteString(this,pSVar24,iVar19,calculatedlengthPrefix_00,pMVar21);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case 3:
    this_00 = (BsonObject *)func_?();
    bVar12 = 0;
    this_01 = (BinaryWriter *)this;
    if ((this_00 != (BsonObject *)0x0) &&
       (bVar12 = 0, (this->fields)._writer != (BinaryWriter *)0x0)) {
      func_?(0x12);
      pIVar25 = BsonObject::BsonObject_GetEnumerator(this_00,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(pIVar25,(int32_t)uStack_20);
      uStack_1 = 0;
      while (bVar12 = 0, this_01 = (BinaryWriter *)this,
            pIVar25 != (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
        cVar26 = func_?(1);
        if (cVar26 == '\0') {
          *puStack_13 = 0xf1;
          uStack_1 = 0xffffffff;
          if (pIVar25 != (IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_ *)0x0) {
            func_?(0);
          }
          bVar12 = 0;
          iVar15 = iStack_7;
          if (iStack_7 != 0) goto code_?;
          pBVar27 = (this->fields)._writer;
          bVar12 = 0;
          if (pBVar27 != (BinaryWriter *)0x0) {
            (*(code *)(pBVar27->klass->vtable).Write_1.method)(pBVar27);
            goto code_?;
          }
          break;
        }
        this_01 = (BinaryWriter *)func_?(0);
        t = (BsonToken *)(this->fields)._writer;
        bVar12 = 0;
        if (this_01 == (BinaryWriter *)0x0) break;
        pBVar28 = (Byte__Array *)(this_01->fields).m_encoding;
        bVar12 = 0;
        if (pBVar28 == (Byte__Array *)0x0) break;
        (*(code *)pBVar28->klass[1]._0.castClass)();
        bVar12 = 0;
        if (t == (BsonToken *)0x0) break;
        (*(code *)t->klass[1]._1.genericContainerHandle)(t);
        pBVar29 = ((BsonToken__Fields *)&(this_01->fields).OutStream)->_Parent_k__BackingField;
        bVar12 = 0;
        if (pBVar29 == (BsonToken *)0x0) break;
        pBVar30 = pBVar29[1].klass;
        t = pBVar29[1].fields._Parent_k__BackingField;
        s = (BsonToken__Class *)0x0;
        uStack_17 = 0.0;
        if (pBVar30 != (BsonToken__Class *)0x0) {
          if ((String__Class *)(pBVar30->_0).image == TypeInfo__System__String) {
            s = pBVar30;
          }
          bVar12 = 0;
          if (s == (BsonToken__Class *)0x0) goto code_?;
        }
        BsonBinaryWriter_WriteString
                  (this,(String *)s,(int32_t)t,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
        BsonBinaryWriter_WriteTokenInternal
                  (this,(BsonToken *)(this_01->fields).m_encoding,(MethodInfo *)0x0);
      }
    }
    break;
  case 4:
    this_01 = (BinaryWriter *)func_?();
    bVar12 = 0;
    if ((this_01 != (BinaryWriter *)0x0) &&
       (bVar12 = 0, (this->fields)._writer != (BinaryWriter *)0x0)) {
      func_?(0x12);
      this_01 = (BinaryWriter *)
                BsonArray::BsonArray_GetEnumerator((BsonArray *)this_01,(MethodInfo *)0x0);
      uStack_20 = CONCAT44(this_01,(int32_t)uStack_20);
      uStack_1 = 2;
      while (bVar12 = 0, this_01 != (BinaryWriter *)0x0) {
        cVar26 = func_?(1);
        if (cVar26 == '\0') {
          *puStack_13 = 0x199;
          uStack_1 = 0xffffffff;
          if (this_01 != (BinaryWriter *)0x0) {
            func_?(0);
          }
          bVar12 = 0;
          iVar15 = iStack_7;
          if (iStack_7 != 0) goto code_?;
          bVar12 = 0;
          if ((this->fields)._writer != (BinaryWriter *)0x0) {
            func_?(9);
            goto code_?;
          }
          break;
        }
        pBVar29 = (BsonToken *)func_?(0);
        t = (BsonToken *)(this->fields)._writer;
        bVar12 = 0;
        if (pBVar29 == (BsonToken *)0x0) break;
        func_?();
        bVar12 = 0;
        if (t == (BsonToken *)0x0) break;
        func_?(0x14);
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                  ((MethodInfo *)0x0);
        t = (BsonToken *)func_?();
        iVar19 = Json::Utilities::MathUtils::MathUtils_IntLength(iStack_6,(MethodInfo *)0x0);
        uStack_17 = 0.0;
        BsonBinaryWriter_WriteString
                  (this,(String *)t,iVar19,(Nullable_1_Int32_)0x0,(MethodInfo *)0x0);
        BsonBinaryWriter_WriteTokenInternal(this,pBVar29,(MethodInfo *)0x0);
        iStack_6 = iStack_6 + 1;
      }
    }
    break;
  case 5:
    iVar15 = func_?();
    bVar12 = 0;
    if (iVar15 == 0) break;
    this_01 = (BinaryWriter *)func_?();
    bVar12 = 0;
    if ((this_01 == (BinaryWriter *)0x0) ||
       (bVar12 = 0, (this->fields)._writer == (BinaryWriter *)0x0)) break;
    func_?(0x12);
    bVar12 = 0;
    if ((this->fields)._writer == (BinaryWriter *)0x0) break;
    func_?(9);
    pBVar27 = (this->fields)._writer;
    goto joined_?;
  case 6:
  case 10:
    goto code_?;
  case 7:
    iVar15 = func_?();
    bVar12 = 0;
    if (iVar15 == 0) break;
    func_?();
    pBVar27 = (this->fields)._writer;
joined_?:
    bVar12 = 0;
    if (pBVar27 != (BinaryWriter *)0x0) {
      func_?(10);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case 8:
    iVar15 = func_?();
    this_01 = (this->fields)._writer;
    bVar12 = 0;
    if ((iVar15 != 0) && (bVar12 = 0, this_01 != (BinaryWriter *)0x0)) {
      puVar5 = (undefined1 *)func_?();
      func_?(8,this_01,*puVar5);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case 9:
    iVar15 = func_?();
    bVar12 = 0;
    if (iVar15 == 0) break;
    piVar31 = *(int **)(iVar15 + 0x10);
    if (piVar31 == (int *)0x0) {
code_?:
      func_?();
      puVar32 = (undefined4 *)func_?(&pAStack_33,&stack0xffffff98,0);
      pAStack_33 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                   *puVar32;
      uStack_34 = puVar32[1];
      uStack_17 = *(double *)(puVar32 + 2);
      offset = mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System
               ::Reflection::CustomAttributeTypedArgument]::
               Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                         ((Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeTypedArgument_
                           *)&stack0xffffff98,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      dateTime.ticks._ticks._4_4_ = uStack_34;
      dateTime.ticks._ticks._0_4_ = pAStack_33;
      dateTime.kind = (int32_t)uStack_17;
      dateTime._12_4_ = uStack_17._4_4_;
      JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks
                (dateTime,(TimeSpan)offset,(MethodInfo *)0x0);
    }
    else {
      piVar35 = (int *)0x0;
      if ((DateTime__Class *)*piVar31 == TypeInfo__System__DateTime) {
        piVar35 = piVar31;
      }
      if (piVar35 == (int *)0x0) goto code_?;
      puVar32 = (undefined4 *)func_?();
      pAStack_8 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                   *puVar32;
      uStack_9 = puVar32[1];
      uStack_10 = puVar32[2];
      uStack_11 = puVar32[3];
      uStack_17 = *(double *)(puVar32 + 2);
      iVar15 = (this->fields)._DateTimeKindHandling_k__BackingField;
      pAStack_33 = pAStack_8;
      uStack_34 = uStack_9;
      if (iVar15 == 1) {
        puVar32 = (undefined4 *)func_?(&pAStack_33,&pAStack_8,0);
code_?:
        pAStack_33 = (Array_ArrayReadOnlyList_1_System_Reflection_CustomAttributeTypedArgument_ *)
                     *puVar32;
        uStack_34 = puVar32[1];
        uStack_10 = puVar32[2];
        uStack_11 = puVar32[3];
        uStack_17 = *(double *)(puVar32 + 2);
      }
      else if (iVar15 == 2) {
        puVar32 = (undefined4 *)func_?(&pAStack_33,&pAStack_8,0);
        goto code_?;
      }
      pAStack_8 = pAStack_33;
      uStack_9 = uStack_34;
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      dateTime_00.ticks._ticks._4_4_ = uStack_34;
      dateTime_00.ticks._ticks._0_4_ = pAStack_33;
      dateTime_00.kind = (int32_t)uStack_17;
      dateTime_00._12_4_ = uStack_17._4_4_;
      JsonConvert::JsonConvert_ConvertDateTimeToJavaScriptTicks_2(dateTime_00,0,(MethodInfo *)0x0);
    }
    pBVar27 = (this->fields)._writer;
    bVar12 = 0;
    this_01 = (BinaryWriter *)this;
    if (pBVar27 != (BinaryWriter *)0x0) {
      func_?(0x13,pBVar27);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    break;
  case 0xb:
    this_01 = (BinaryWriter *)func_?();
    bVar12 = 0;
    if (this_01 != (BinaryWriter *)0x0) {
      pBVar28 = (this_01->fields).buffer;
      bVar12 = 0;
      if (pBVar28 != (Byte__Array *)0x0) {
        uStack_17 = 0.0;
        pMVar21 = (MethodInfo *)&UNK_?;
        pSVar24 = (String *)
                  func_?(*(int32_t *)pBVar28->vector,TypeInfo__System__String,
                                  *(undefined4 *)(pBVar28->vector + 8),0);
        calculatedlengthPrefix._4_4_ = in_stack_36;
        calculatedlengthPrefix.value = in_stack_37;
        BsonBinaryWriter_WriteString(this,pSVar24,in_stack_38,calculatedlengthPrefix,pMVar21);
        iVar15 = *(int *)&(this_01->fields).disposed;
        pMVar21 = (MethodInfo *)0x0;
        bVar12 = 0;
        if (iVar15 != 0) {
          uStack_17 = 0.0;
          uStack_17._4_4_ = 0;
          uStack_17._0_4_ = 0;
          iVar19 = *(int32_t *)(iVar15 + 0x18);
          iVar22 = (int32_t)uStack_17;
          uVar18 = uStack_17._4_4_;
          pSVar24 = (String *)
                    func_?(*(undefined4 *)(iVar15 + 0x10),TypeInfo__System__String);
          calculatedlengthPrefix_01._4_4_ = uVar18;
          calculatedlengthPrefix_01.value = iVar22;
          BsonBinaryWriter_WriteString(this,pSVar24,iVar19,calculatedlengthPrefix_01,pMVar21);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
    break;
  default:
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                        ((MethodInfo *)0x0);
    uStack_20 = CONCAT44(pCVar16,(int32_t)uStack_20);
    args = (Object__Array *)func_?();
    func_?(this_01,0);
    uVar14 = func_?(4,this_01);
    t = (BsonToken *)CONCAT13(uVar14,t._0_3_);
    uVar18 = func_?(TypeInfo__Newtonsoft__Json__Bson__BsonType,(int)&t + 3);
    func_?(args,0);
    func_?(args,uVar18);
    func_?();
    this_01 = (BinaryWriter *)
              Json::Utilities::StringUtils::StringUtils_FormatWith
                        (StringLiteral_Unexpected_token_when_writing_BS,uStack_20._4_4_,args,
                         (MethodInfo *)0x0);
    this_02 = (ArgumentOutOfRangeException *)func_?();
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
              (this_02,StringLiteral_t,(String *)this_01,(MethodInfo *)0x0);
    bVar12 = (undefined1 *)0xffffffdb < &stack0xffffff84;
    func_?();
    break;
  case 0x10:
    iVar15 = func_?();
    this_01 = (this->fields)._writer;
    bVar12 = 0;
    if (iVar15 != 0) {
      t = *(BsonToken **)(iVar15 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_17
                ((Object *)t,(IFormatProvider *)pCVar16,(MethodInfo *)0x0);
      bVar12 = 0;
      if (this_01 != (BinaryWriter *)0x0) {
        func_?(0x12);
        goto code_?;
      }
    }
    break;
  case 0x12:
    iVar15 = func_?();
    this_01 = (this->fields)._writer;
    bVar12 = 0;
    if (iVar15 != 0) {
      t = *(BsonToken **)(iVar15 + 0x10);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      mscorlib.dll::System::Convert::Convert_ToInt64_17
                ((Object *)t,(IFormatProvider *)pCVar16,(MethodInfo *)0x0);
      bVar12 = 0;
      if (this_01 != (BinaryWriter *)0x0) {
        func_?(0x13,this_01);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  iVar15 = func_?();
  this = (BsonBinaryWriter *)this_01;
code_?:
  iVar15 = func_?(iVar15);
  this_01 = (BinaryWriter *)this;
code_?:
  uVar39 = func_?(iVar15);
  pcVar40 = (char *)(extraout_EDX * 2 + 0x551db610);
  *pcVar40 = *pcVar40 + '\x01';
  pbVar41 = (byte *)((int)&this_01->klass + unaff_EBX);
  bVar42 = (byte)((ushort)extraout_CX >> 8);
  bVar43 = *pbVar41 + bVar42;
  bVar44 = CARRY1(*pbVar41,bVar42) || CARRY1(bVar43,bVar12);
  *pbVar41 = bVar43 + bVar12;
  bVar12 = (byte)((ushort)uVar39 >> 8);
  bVar42 = bVar12 + (byte)extraout_CX;
  bVar45 = CARRY1(bVar12,(byte)extraout_CX) || CARRY1(bVar42,bVar44);
  bVar42 = bVar42 + bVar44;
  bVar46 = (byte)unaff_EBX;
  bVar44 = CARRY1(in_stack_47,bVar46);
  bVar12 = in_stack_47 + bVar46;
  in_stack_47 = bVar12 + bVar45;
  uVar48 = (undefined3)((uint)extraout_EDX >> 8);
  cVar49 = (char)extraout_EDX + bVar46 + (bVar44 || CARRY1(bVar12,bVar45));
  pbVar41 = (byte *)CONCAT31(uVar48,cVar49);
  out((short)pbVar41,(char)uVar39);
  bVar12 = *pbVar41;
  *pbVar41 = *pbVar41 - bVar42;
  puVar5 = (undefined1 *)((int)&this_01[1].klass + 2);
  bVar43 = *puVar5;
  bVar50 = (byte)((uint)unaff_EBX >> 8);
  cVar26 = *puVar5;
  *puVar5 = cVar26 + bVar50 + (bVar12 < bVar42);
  uVar51 = CONCAT31(uVar48,cVar49 + bVar46 +
                           (CARRY1(bVar43,bVar50) || CARRY1(cVar26 + bVar50,bVar12 < bVar42)));
  method = (MethodInfo *)((uint)method & (uint)pbVar41 & (uint)pbVar41 & uVar51);
  in((short)uVar51);
  cRam_? = cRam_? + bVar50;
  cRam_? = cRam_? + bVar50;
  pcVar52 = (code *)swi(3);
  (*pcVar52)(&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc);
  return;
}


/* BsonBinaryWriter() */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Text__Encoding);
  }
  pEVar1 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
  TypeInfo__Newtonsoft__Json__Bson__BsonBinaryWriter->static_fields->Encoding = pEVar1;
  return;
}


/* BsonBinaryWriter(Stream) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter__ctor
               (BsonBinaryWriter *this,Stream *stream,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._DateTimeKindHandling_k__BackingField = 1;
  this_00 = (BinaryWriter *)func_?(TypeInfo__System__IO__BinaryWriter);
  mscorlib.dll::System::IO::BinaryWriter::BinaryWriter__ctor_1(this_00,stream,(MethodInfo *)0x0);
  (this->fields)._writer = this_00;
  return;
}

