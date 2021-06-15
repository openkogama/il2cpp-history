
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_Close
               (JsonTextReader *this,MethodInfo *method)

{
  bVar1 = (this->fields)._._CloseInput_k__BackingField;
  (this->fields)._._currentState = 7;
  (this->fields)._._token = 0;
  (this->fields)._._value = (Object *)0x0;
  (this->fields)._._valueType = (Type *)0x0;
  if ((bVar1 != 0) && (pTVar2 = (this->fields)._reader, pTVar2 != (TextReader *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).Close.method)
              (pTVar2,(pTVar2->klass->vtable).Dispose_1.methodPtr);
  }
  pSVar3 = (this->fields)._buffer;
  if (pSVar3 != (StringBuffer *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?,unaff_EBP);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    }
    (pSVar3->fields)._buffer =
         TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer;
    (pSVar3->fields)._position = 0;
    return;
  }
  return;
}


/* JsonReaderException CreateJsonReaderException(String, Object[]) */

JsonReaderException *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_CreateJsonReaderException
          (JsonTextReader *this,String *format,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (format,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
  iVar1 = (this->fields)._currentLinePosition;
  iVar2 = (this->fields)._currentLineNumber;
  this_00 = (JsonReaderException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  mscorlib.dll::System::Exception::Exception__ctor_3
            ((Exception *)this_00,message,(Exception *)0x0,(MethodInfo *)0x0);
  (this_00->fields)._LinePosition_k__BackingField = iVar1;
  (this_00->fields)._LineNumber_k__BackingField = iVar2;
  return this_00;
}


/* Boolean EatWhitespace(Char, Boolean, Char ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_EatWhitespace
               (JsonTextReader *this,uint16_t initialChar,bool oneOrMore,uint16_t *finalChar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  uVar2 = (uint)initialChar;
code_?:
  do {
    c = (uint16_t)uVar2;
    if (c != 0x20) {
      if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Char->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Char);
      }
      bVar3 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (oneOrMore == 0) {
          bVar1 = 1;
        }
        *finalChar = c;
        return bVar1;
      }
    }
    pTVar4 = (this->fields)._reader;
    if (pTVar4 == (TextReader *)0x0) goto code_?;
    uVar2 = (*(code *)(pTVar4->klass->vtable).Read.method)
                      (pTVar4,(pTVar4->klass->vtable).Read_1.methodPtr);
    switch(uVar2) {
    case 10:
      break;
    default:
      goto code_?;
    case 0xd:
      pTVar4 = (this->fields)._reader;
      if (pTVar4 == (TextReader *)0x0) goto code_?;
      iVar5 = (*(code *)(pTVar4->klass->vtable).Peek.method)
                        (pTVar4,(pTVar4->klass->vtable).Read.methodPtr);
      if (iVar5 == 10) {
        pTVar4 = (this->fields)._reader;
        if (pTVar4 == (TextReader *)0x0) {
code_?:
          func_?(0);
          uVar6 = in(0xcb);
          return (bool)uVar6;
        }
        (*(code *)(pTVar4->klass->vtable).Read.method)
                  (pTVar4,(pTVar4->klass->vtable).Read_1.methodPtr);
      }
    }
    piVar7 = &(this->fields)._currentLineNumber;
    *piVar7 = *piVar7 + 1;
    bVar1 = 1;
    uVar2 = uVar2 & 0xffff;
    (this->fields)._currentLinePosition = 0;
  } while( true );
code_?:
  if (uVar2 == 0xffffffff) {
    (this->fields)._end = 1;
    uVar2 = 0;
    bVar1 = 1;
  }
  else {
    piVar7 = &(this->fields)._currentLinePosition;
    *piVar7 = *piVar7 + 1;
    uVar2 = uVar2 & 0xffff;
    bVar1 = 1;
  }
  goto code_?;
}


/* Boolean HasNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_HasNext
               (JsonTextReader *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._reader;
  if (pTVar1 != (TextReader *)0x0) {
    iVar2 = (*(code *)(pTVar1->klass->vtable).Peek.method)
                      (pTVar1,(pTVar1->klass->vtable).Read.methodPtr);
    return iVar2 != -1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsSeperator(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_IsSeperator
               (JsonTextReader *this,uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(c) {
  case 9:
  case 10:
  case 0xd:
    break;
  default:
    switch(c) {
    case 0x29:
      iVar1 = (this->fields)._._currentState;
      if ((iVar1 != 10) && (iVar1 != 9)) {
        return 0;
      }
      break;
    default:
      if (c != 0x20) {
        if (c == 0x2f) {
          pTVar2 = (this->fields)._reader;
          if (pTVar2 == (TextReader *)0x0) {
            func_?(0);
            pcVar3 = (code *)swi(3);
            bVar4 = (*pcVar3)();
            return bVar4;
          }
          iVar1 = (*(code *)(pTVar2->klass->vtable).Peek.method)
                            (pTVar2,(pTVar2->klass->vtable).Read.methodPtr);
          if (iVar1 != -1) {
            JVar5 = JsonValidatingReader::JsonValidatingReader_get_TokenType
                              ((JsonValidatingReader *)this,(MethodInfo *)0x0);
            return JVar5 == 0x2a;
          }
          return 0;
        }
        if ((c != 0x5d) && (c != 0x7d)) {
          if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Char->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Char);
          }
          bVar4 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return 0;
          }
        }
      }
      break;
    case 0x2c:
      break;
    }
  }
  return 1;
}


/* Boolean MatchValue(Char, String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MatchValue
               (JsonTextReader *this,uint16_t firstChar,String *value,MethodInfo *method)

{
  index = (IList_1_VoxelHit_ *)0x0;
  do {
    if (value == (String *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    uVar3 = mscorlib.dll::System::String::String_get_Chars(value,(int32_t)index,(MethodInfo *)0x0);
    if (firstChar != uVar3) break;
    index = (IList_1_VoxelHit_ *)((int)&index->klass + 1);
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    if ((int)pIVar4 <= (int)index) break;
    firstChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  } while ((firstChar != 0) || ((this->fields)._end == 0));
  pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
  return index == pIVar4;
}


/* Boolean MatchValue(Char, String, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MatchValue_1
               (JsonTextReader *this,uint16_t firstChar,String *value,
               bool noTrailingNonSeperatorCharacters,MethodInfo *method)

{
  index = (IList_1_VoxelHit_ *)0x0;
  do {
    if (value == (String *)0x0) goto code_?;
    uVar1 = mscorlib.dll::System::String::String_get_Chars(value,(int32_t)index,(MethodInfo *)0x0);
    if (firstChar != uVar1) break;
    index = (IList_1_VoxelHit_ *)((int)&index->klass + 1);
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
    if ((int)pIVar2 <= (int)index) break;
    firstChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  } while ((firstChar != 0) || ((this->fields)._end == 0));
  pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)value,(MethodInfo *)0x0);
  bVar3 = index == pIVar2;
  if (noTrailingNonSeperatorCharacters != 0) {
    pTVar4 = (this->fields)._reader;
    if (pTVar4 == (TextReader *)0x0) {
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    iVar7 = (*(code *)(pTVar4->klass->vtable).Peek.method)
                      (pTVar4,(pTVar4->klass->vtable).Read.methodPtr);
    if (iVar7 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint16_t)iVar7;
    }
    if (bVar3) {
      if (uVar1 == 0) {
        return 1;
      }
      bVar6 = JsonTextReader_IsSeperator(this,uVar1,(MethodInfo *)0x0);
      return bVar6;
    }
    bVar3 = false;
  }
  return bVar3;
}


/* Char MoveNext() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MoveNext
                   (JsonTextReader *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._reader;
  if (pTVar1 != (TextReader *)0x0) {
    unaff_EDI = (*(code *)(pTVar1->klass->vtable).Read.method)
                          (pTVar1,(pTVar1->klass->vtable).Read_1.methodPtr);
    switch(unaff_EDI) {
    case 10:
      goto code_?;
    default:
      if (unaff_EDI == 0xffffffff) {
        (this->fields)._end = 1;
        return 0;
      }
      piVar2 = &(this->fields)._currentLinePosition;
      *piVar2 = *piVar2 + 1;
      return (uint16_t)unaff_EDI;
    case 0xd:
      pTVar1 = (this->fields)._reader;
      if (pTVar1 == (TextReader *)0x0) break;
      iVar3 = (*(code *)(pTVar1->klass->vtable).Peek.method)
                        (pTVar1,(pTVar1->klass->vtable).Read.methodPtr);
      if (iVar3 == 10) {
        pTVar1 = (this->fields)._reader;
        if (pTVar1 == (TextReader *)0x0) break;
        (*(code *)(pTVar1->klass->vtable).Read.method)
                  (pTVar1,(pTVar1->klass->vtable).Read_1.methodPtr);
      }
code_?:
      piVar2 = &(this->fields)._currentLineNumber;
      *piVar2 = *piVar2 + 1;
      (this->fields)._currentLinePosition = 0;
      return (uint16_t)unaff_EDI;
    }
  }
  iVar3 = func_?(0);
  pbVar4 = (byte *)((unaff_EDI | 0x55) + 0xcf941055 + extraout_ECX * 8);
  bVar5 = *pbVar4;
  *pbVar4 = *pbVar4 + extraout_DL;
  *(char *)(iVar3 + -0x31) =
       *(char *)(iVar3 + -0x31) + (char)extraout_ECX + CARRY1(bVar5,extraout_DL);
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)(&stack0xfffffffc);
  return uVar7;
}


/* Void ParseComment() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseComment
               (JsonTextReader *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  if (uVar1 == 0x2a) {
code_?:
    uVar1 = JsonTextReader_MoveNext(this_01,(MethodInfo *)0x0);
    if (uVar1 != 0) {
      if (uVar1 != 0x2a) goto code_?;
      uVar1 = JsonTextReader_MoveNext(this_01,(MethodInfo *)0x0);
      if (uVar1 == 0) goto code_?;
      if ((JsonTextReader *)(uint)uVar1 == (JsonTextReader *)0x2f) goto code_?;
      goto code_?;
    }
    if ((this_01->fields)._end == 0) {
code_?:
      if ((this_01->fields)._buffer != (StringBuffer *)0x0) goto code_?;
    }
    else {
code_?:
      pSVar2 = (this_01->fields)._buffer;
      if (pSVar2 != (StringBuffer *)0x0) {
        pSVar3 = pSVar2->klass;
        pJVar4 = (JsonTextReader *)pSVar3[1]._0.image;
        (*(code *)(pSVar3->vtable).ToString.method)();
        (*(code *)(this_01->klass->vtable).SetToken.method)();
        this_00 = (LockCursorManager3DMode *)(this_01->fields)._buffer;
        this_01 = pJVar4;
        if (this_00 != (LockCursorManager3DMode *)0x0) {
          LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                    (this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto code_?;
  }
code_?:
  args = (Object__Array *)func_?(TypeInfo__System__Object,2);
  func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(0,uVar5);
  func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this_01,StringLiteral_Error_parsing_comment__Expected_,args,(MethodInfo *)0x0)
  ;
  func_?(pJVar6,0,MethodInfo__Newtonsoft__Json__JsonTextReader__ParseComment__);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  if ((this_01->fields)._end == 0) {
code_?:
    pSVar2 = (this_01->fields)._buffer;
    if (pSVar2 == (StringBuffer *)0x0) goto code_?;
    Json::Utilities::StringBuffer::StringBuffer_Append(pSVar2,0x2a,(MethodInfo *)0x0);
    unaff_retaddr = (this_01->fields)._buffer;
    if (unaff_retaddr == (StringBuffer *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    this = (JsonTextReader *)(uint)uVar1;
code_?:
    Json::Utilities::StringBuffer::StringBuffer_Append(unaff_retaddr,(uint16_t)this,method);
  }
  goto code_?;
code_?:
  func_?();
  goto code_?;
}


/* Void ParseConstructor() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseConstructor
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = JsonTextReader_MatchValue_1(this,0x6e,StringLiteral_new,1,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(uint)uVar2;
    bVar1 = JsonTextReader_EatWhitespace(this,uVar2,1,(uint16_t *)&stack0xfffffff8,method_00);
    if (bVar1 != 0) {
      while( true ) {
        c = (uint16_t)method_00;
        uVar2 = c;
        if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Char->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::Char::Char_IsLetter(c,(MethodInfo *)0x0);
        if (bVar1 == 0) break;
        pSVar3 = (this->fields)._buffer;
        if (pSVar3 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar3,c,(MethodInfo *)0x0);
        uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)(uint)uVar2;
      }
      JsonTextReader_EatWhitespace(this,c,0,(uint16_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (uVar2 == 0x28) {
        pSVar3 = (this->fields)._buffer;
        if (pSVar3 != (StringBuffer *)0x0) {
          (*(code *)(pSVar3->klass->vtable).ToString.method)();
          this_00 = (LockCursorManager3DMode *)(this->fields)._buffer;
          if (this_00 != (LockCursorManager3DMode *)0x0) {
            LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                      (this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
            (*(code *)(this->klass->vtable).SetToken.method)();
            return;
          }
        }
      }
      else {
        args = (Object__Array *)func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        JsonTextReader_CreateJsonReaderException
                  (this,StringLiteral_Unexpected_character_while_parsi,args,(MethodInfo *)0x0);
        func_?();
      }
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void ParseDate(String) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseDate
               (JsonTextReader *this,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  if (text != (String *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0);
    this_00 = mscorlib.dll::System::String::String_Substring_1
                        (text,6,(int32_t)(pIVar1 + -1),(MethodInfo *)0x0);
    if (this_00 != (String *)0x0) {
      iVar2 = mscorlib.dll::System::String::String_IndexOf_3(this_00,0x2b,1,(MethodInfo *)0x0);
      if (iVar2 == -1) {
        iStack_3 = iVar2;
        iVar2 = mscorlib.dll::System::String::String_IndexOf_3(this_00,0x2d,1,(MethodInfo *)0x0);
      }
      iStack_3 = iVar2;
      if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
        func_?();
      }
      uStack_4 = (TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
      iVar5 = 1;
      if (iVar2 != -1) {
        iStack_6 = 2;
        this_01 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::String::String_Substring(this_00,iVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        DStack_7._8_8_ = 0;
        if (this_01 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        uVar8 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this_01,0,(MethodInfo *)0x0);
        pSVar9 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)this_01,1,2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        iVar2 = mscorlib.dll::System::Int32::Int32_Parse_4
                          (pSVar9,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar10,
                           (MethodInfo *)0x0);
        uStack_4 = uStack_4 & 0xffffffff00000000;
        pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        if (4 < (int)pIVar1) {
          pSVar9 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)this_01,3,2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          iVar11 = mscorlib.dll::System::Int32::Int32_Parse_4
                            (pSVar9,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar10,
                             (MethodInfo *)0x0);
          uStack_4 = CONCAT44(uStack_4._4_4_,iVar11);
        }
        if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__TimeSpan);
        }
        t1 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours((double)iVar2,(MethodInfo *)0x0);
        t2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                       ((double)(int)uStack_4,(MethodInfo *)0x0);
        DStack_7._8_8_ =
             mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(t1,t2,(MethodInfo *)0x0);
        uStack_4 = DStack_7._8_8_;
        if (uVar8 == 0x2d) {
          uStack_4 = func_?();
        }
        this_00 = mscorlib.dll::System::String::String_Substring_1
                            (this_00,0,iStack_3,(MethodInfo *)0x0);
        iVar5 = iStack_6;
      }
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar10 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      uVar12 = mscorlib.dll::System::Int64::Int64_Parse_4
                         (this_00,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar10,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar13 = JsonConvert::JsonConvert_ConvertJavaScriptTicksToDateTime
                         (&DStack_7,uVar12 >> 0x20,method_00);
      if ((this->fields)._readType == 3) {
        DStack_7.ticks._ticks._0_4_ = 0;
        func_?();
        func_?();
        func_?();
        func_?();
        (*(code *)(this->klass->vtable).SetToken.method)();
        return;
      }
      if (iVar5 == 2) {
        DStack_7.ticks._ticks._0_4_ = 0;
        pDVar13 = (DateTime *)func_?();
      }
      DStack_7.ticks._ticks._0_4_ = (undefined4)(pDVar13->ticks)._ticks;
      DStack_7.ticks._ticks._4_4_ = *(undefined4 *)((int)&(pDVar13->ticks)._ticks + 4);
      DStack_7.kind = pDVar13->kind;
      DStack_7._12_4_ = *(undefined4 *)&pDVar13->field_0xc;
      func_?();
      (*(code *)(this->klass->vtable).SetToken.method)();
      return;
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ParseFalse() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseFalse
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x66,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (MethodInfo *)&uStack_3;
    uStack_3 = 0;
    pIStack_4 = (Int32__Class *)TypeInfo__System__Boolean;
    uVar5 = func_?();
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,10,uVar5,(this->klass->vtable).Dispose.methodPtr);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pIStack_4 = (Int32__Class *)TypeInfo__System__Object;
  args = (Object__Array *)func_?();
  func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pIStack_4 = TypeInfo__System__Int32;
  pMVar6 = (MethodInfo *)func_?();
  func_?(args,0);
  func_?(args,pMVar6);
  pIStack_4 = (Int32__Class *)0x0;
  pMStack_2 = pMVar6;
  func_?();
  pIStack_4 = (Int32__Class *)func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&pIStack_4);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pJVar7 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_boolean_value__Lin,args,(MethodInfo *)0x0);
  pMStack_2 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseFalse__;
  pIStack_4 = (Int32__Class *)0x0;
  func_?(pJVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ParseNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseNull
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x6e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (MethodInfo *)(this->klass->vtable).Dispose.methodPtr;
    pIStack_3 = (Int32__Class *)0x0;
    (*(code *)(this->klass->vtable).SetToken.method)(this,0xb);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pIStack_3 = (Int32__Class *)TypeInfo__System__Object;
  args = (Object__Array *)func_?();
  func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pIStack_3 = TypeInfo__System__Int32;
  pMVar4 = (MethodInfo *)func_?();
  func_?(args,0);
  func_?(args,pMVar4);
  pIStack_3 = (Int32__Class *)0x0;
  pMStack_2 = pMVar4;
  func_?();
  pIStack_3 = (Int32__Class *)func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&pIStack_3);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_null_value__Line__,args,(MethodInfo *)0x0);
  pMStack_2 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNull__;
  pIStack_3 = (Int32__Class *)0x0;
  func_?(pJVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseNumber(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseNumber
               (JsonTextReader *this,uint16_t firstChar,MethodInfo *method)

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
  c = firstChar;
  do {
    bVar4 = JsonTextReader_IsSeperator(this,c,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      func_?();
      (this->fields)._lastChar.value = 0;
      (this->fields)._lastChar.has_value = 0;
      (this->fields)._lastChar.field_0x3 = 0;
      break;
    }
    pSVar5 = (this->fields)._buffer;
    if (pSVar5 == (StringBuffer *)0x0) goto code_?;
    Json::Utilities::StringBuffer::StringBuffer_Append(pSVar5,c,(MethodInfo *)0x0);
    c = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  } while ((c != 0) || ((this->fields)._end == 0));
  pSVar5 = (this->fields)._buffer;
  if (pSVar5 == (StringBuffer *)0x0) goto code_?;
  this_01 = (String *)(*(code *)(pSVar5->klass->vtable).ToString.method)();
  if (firstChar == 0x30) {
    if (this_01 == (String *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::String::String_StartsWith_1
                      (this_01,StringLiteral__0_,StringComparison__Enum_OrdinalIgnoreCase,
                       (MethodInfo *)0x0);
    bVar6 = bVar4 == 0;
  }
  else {
    bVar6 = false;
  }
  if ((this->fields)._readType == 2) {
    if (bVar6) {
      if (this_01 == (String *)0x0) goto code_?;
      bVar4 = mscorlib.dll::System::String::String_StartsWith_1
                        (this_01,StringLiteral__0x,StringComparison__Enum_OrdinalIgnoreCase,
                         in_stack_7);
      if (bVar4 == 0) {
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        uVar8 = 8;
      }
      else {
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        uVar8 = 0x10;
      }
      uVar9 = mscorlib.dll::System::Convert::Convert_ToInt64_12(this_01,uVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDecimal_5
                ((Decimal *)&stack0xffffffbc,uVar9 >> 0x20,in_stack_10);
      func_?();
    }
    else {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Decimal::Decimal_Parse_1
                ((Decimal *)&stack0xffffffac,this_01,
                 NumberStyles__Enum_AllowExponent|NumberStyles__Enum_Number,
                 (IFormatProvider *)pCVar11,(MethodInfo *)0x0);
      func_?();
    }
  }
  else if (bVar6) {
    if (this_01 == (String *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::String::String_StartsWith_1
                      (this_01,StringLiteral__0x,StringComparison__Enum_OrdinalIgnoreCase,
                       in_stack_7);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      uVar8 = 8;
    }
    else {
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      uVar8 = 0x10;
    }
    mscorlib.dll::System::Convert::Convert_ToInt64_12(this_01,uVar8,(MethodInfo *)0x0);
    func_?();
  }
  else {
    if (this_01 == (String *)0x0) goto code_?;
    iVar12 = mscorlib.dll::System::String::String_IndexOf
                      (this_01,::StringLiteral__,StringComparison__Enum_OrdinalIgnoreCase,
                       in_stack_7);
    if ((iVar12 == -1) &&
       (iVar12 = mscorlib.dll::System::String::String_IndexOf
                          (this_01,StringLiteral_e,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0), iVar12 == -1)) {
      uStack_1 = 0;
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt64_11
                (this_01,(IFormatProvider *)pCVar11,(MethodInfo *)0x0);
      func_?();
      uStack_1 = 0xffffffff;
    }
    else {
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar11 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToDouble_9
                (this_01,(IFormatProvider *)pCVar11,(MethodInfo *)0x0);
      func_?();
    }
  }
  this_00 = (LockCursorManager3DMode *)(this->fields)._buffer;
  if (this_00 != (LockCursorManager3DMode *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              (this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).SetToken.method)(this);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  return;
}


/* Void ParseNumberNaN() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseNumberNaN
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x4e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,8,uVar3,(this->klass->vtable).Dispose.methodPtr);
    return;
  }
  uStack_2 = CONCAT44(2,TypeInfo__System__Object);
  args = (Object__Array *)func_?();
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  uStack_4 = func_?();
  uStack_2 = CONCAT44(&uStack_4,TypeInfo__System__Int32);
  uVar5 = func_?();
  func_?(args,0);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uVar3 = func_?();
  uStack_2 = CONCAT44(uVar3,(undefined4)uStack_2);
  uVar3 = func_?(TypeInfo__System__Int32,(int)&uStack_2 + 4);
  func_?(args,0);
  func_?(args,uVar3);
  func_?(1,uVar3);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_NaN_value__Line__0,args,(MethodInfo *)0x0);
  uStack_2 = ZEXT48(MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberNaN__) << 0x20;
  func_?(pJVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseNumberNegativeInfinity() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::
     JsonTextReader_ParseNumberNegativeInfinity(JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x2d,
                     TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,8,uVar3,(this->klass->vtable).Dispose.methodPtr);
    return;
  }
  uStack_2 = CONCAT44(2,TypeInfo__System__Object);
  args = (Object__Array *)func_?();
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  uStack_4 = func_?();
  uStack_2 = CONCAT44(&uStack_4,TypeInfo__System__Int32);
  uVar5 = func_?();
  func_?(args,0);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uVar3 = func_?();
  uStack_2 = CONCAT44(uVar3,(undefined4)uStack_2);
  uVar3 = func_?(TypeInfo__System__Int32,(int)&uStack_2 + 4);
  func_?(args,0);
  func_?(args,uVar3);
  func_?(1,uVar3);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_negative_infinity_,args,(MethodInfo *)0x0);
  uStack_2 = ZEXT48(MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberNegativeInfinity__) <<
              0x20;
  func_?(pJVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseNumberPositiveInfinity() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::
     JsonTextReader_ParseNumberPositiveInfinity(JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x49,
                     TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->PositiveInfinity,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,8,uVar3,(this->klass->vtable).Dispose.methodPtr);
    return;
  }
  uStack_2 = CONCAT44(2,TypeInfo__System__Object);
  args = (Object__Array *)func_?();
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  uStack_4 = func_?();
  uStack_2 = CONCAT44(&uStack_4,TypeInfo__System__Int32);
  uVar5 = func_?();
  func_?(args,0);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uVar3 = func_?();
  uStack_2 = CONCAT44(uVar3,(undefined4)uStack_2);
  uVar3 = func_?(TypeInfo__System__Int32,(int)&uStack_2 + 4);
  func_?(args,0);
  func_?(args,uVar3);
  func_?(1,uVar3);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_positive_infinity_,args,(MethodInfo *)0x0);
  uStack_2 = ZEXT48(MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberPositiveInfinity__) <<
              0x20;
  func_?(pJVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ParseObject(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseObject
               (JsonTextReader *this,uint16_t currentChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  do {
    switch(currentChar) {
    case 9:
    case 10:
    case 0xd:
      break;
    default:
      if (currentChar != 0x20) {
        if (currentChar == 0x2f) {
          JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
          return 1;
        }
        if (currentChar == 0x7d) {
          (*(code *)(this->klass->vtable).SetToken.method)
                    (this,0xd,0,(this->klass->vtable).Dispose.methodPtr);
          return 1;
        }
        if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Char->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Char);
        }
        bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = JsonTextReader_ParseProperty(this,currentChar,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
    currentChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    if ((currentChar == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
}


/* Boolean ParsePostValue(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParsePostValue
               (JsonTextReader *this,uint16_t currentChar,MethodInfo *method)

{
  pSVar1 = _currentChar;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    pSVar1 = _currentChar;
  }
  do {
    switch((uint)pSVar1 & 0xffff) {
    case 9:
    case 10:
    case 0xd:
      break;
    default:
      switch((uint)pSVar1 & 0xffff) {
      case 0x29:
        (*(code *)(this->klass->vtable).SetToken.method)();
        return 1;
      default:
        uVar2 = (uint16_t)pSVar1;
        if (uVar2 != 0x20) {
          if (uVar2 == 0x2f) {
            JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
            return 1;
          }
          if (uVar2 == 0x5d) {
            (*(code *)(this->klass->vtable).SetToken.method)();
            return 1;
          }
          if (uVar2 == 0x7d) {
            (*(code *)(this->klass->vtable).SetToken.method)();
            return 1;
          }
          if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Char->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar2,(MethodInfo *)0x0);
          if (bVar3 == 0) goto code_?;
        }
        break;
      case 0x2c:
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pSVar1 = (String *)(this->fields)._._currentTypeContext;
        switch(pSVar1) {
        case (String *)0x0:
          (this->fields)._._currentState = 0xc;
          return 0;
        case (String *)0x1:
          (this->fields)._._currentState = 4;
          return 0;
        case (String *)0x2:
          (this->fields)._._currentState = 6;
          return 0;
        case (String *)0x3:
          (this->fields)._._currentState = 10;
          return 0;
        default:
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?();
          }
          this = (JsonTextReader *)
                 mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
          pOVar4 = (Object__Array *)func_?();
          _currentChar = pSVar1;
          uVar5 = func_?();
          func_?();
          func_?(pOVar4,uVar5);
          func_?();
          pSVar1 = Json::Utilities::StringUtils::StringUtils_FormatWith
                             (StringLiteral_While_setting_the_reader_state_b,(IFormatProvider *)this
                              ,pOVar4,(MethodInfo *)0x0);
          pJVar6 = (JsonSchemaException *)func_?();
          Json::Schema::JsonSchemaException::JsonSchemaException__ctor_1
                    (pJVar6,pSVar1,(MethodInfo *)0x0);
          uStack_7 = 0;
          pJStack_8 = pJVar6;
          func_?();
        }
code_?:
        pOVar4 = (Object__Array *)func_?();
        _currentChar = (String *)((uint)pSVar1 & 0xffff);
        uVar5 = func_?();
        func_?();
        func_?(pOVar4,uVar5);
        bVar9 = 0;
        func_?();
        uStack_7 = func_?();
        uVar5 = func_?();
        func_?();
        func_?(pOVar4,uVar5);
        func_?();
        pJStack_8 = (JsonSchemaException *)func_?();
        pSVar10 = (String *)func_?();
        func_?(pOVar4,0);
        func_?(pOVar4,pSVar10);
        func_?();
        JsonTextReader_CreateJsonReaderException
                  (this,StringLiteral_After_parsing_a_value_an_unexpec,pOVar4,(MethodInfo *)0x0);
        bVar11 = (undefined1 *)0xffffffef < &stack0xffffffd0;
        uVar12 = func_?();
        bVar13 = in(0x55);
        bVar14 = (byte)((ulonglong)uVar12 >> 0x20);
        bVar15 = CARRY1(bVar9,bVar14) || CARRY1(bVar9 + bVar14,bVar11);
        bVar11 = bVar9 + bVar14 + bVar11;
        bVar9 = (byte)((ulonglong)uVar12 >> 0x28);
        bVar16 = CARRY1(bVar14,bVar9) || CARRY1(bVar14 + bVar9,bVar15);
        bVar14 = bVar14 + bVar9 + bVar15;
        pSVar1 = _currentChar;
        if (extraout_ECX != (byte *)0x0) {
          bVar17 = bVar14 + bVar9;
          bVar18 = bVar17 + bVar16;
          pSVar1 = pSVar10;
          if (extraout_ECX != (byte *)0x0) {
            bVar15 = CARRY1(bVar11,bVar18) ||
                     CARRY1(bVar11 + bVar18,CARRY1(bVar14,bVar9) || CARRY1(bVar17,bVar16));
            pbVar19 = (byte *)(CONCAT31((int3)((ulonglong)uVar12 >> 8),bVar13) + 0x11055e4);
            bVar16 = CARRY1(*pbVar19,bVar13) || CARRY1(*pbVar19 + bVar13,bVar15);
            *pbVar19 = *pbVar19 + bVar13 + bVar15;
            bVar11 = in(0x55);
            bVar15 = CARRY1(*extraout_ECX,bVar11) || CARRY1(*extraout_ECX + bVar11,bVar16);
            *extraout_ECX = *extraout_ECX + bVar11 + bVar16;
            in(0x55);
            pbVar19 = extraout_ECX + -0x2defaa1c;
            bVar11 = (byte)((ulonglong)uVar12 >> 8);
            bVar16 = CARRY1(*pbVar19,bVar11) || CARRY1(*pbVar19 + bVar11,bVar15);
            *pbVar19 = *pbVar19 + bVar11 + bVar15;
            in(0x55);
            bVar15 = CARRY1(bVar18,bVar11) || CARRY1(bVar18 + bVar11,bVar16);
            bVar13 = bVar18 + bVar11 + bVar16;
            in(0x55);
            bVar11 = bVar13 + bVar9;
            pcVar20 = (char *)CONCAT31((int3)((ulonglong)uVar12 >> 0x28),bVar11 + bVar15);
            cVar21 = in(0x55);
            *pcVar20 = *pcVar20 + cVar21 + (CARRY1(bVar13,bVar9) || CARRY1(bVar11,bVar15));
            in(0x55);
            pcVar22 = (code *)swi(3);
            bVar3 = (*pcVar22)(&stack0xfffffffc);
            return bVar3;
          }
        }
        uVar2 = (uint16_t)pSVar1;
        bVar3 = JsonTextReader_ValidIdentifierChar(this,uVar2,(MethodInfo *)0x0);
        pCVar23 = (CultureInfo *)this;
        if (bVar3 == 0) {
          if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
            JsonTextReader_ReadStringIntoBuffer(this,uVar2,(MethodInfo *)0x0);
            uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
            uVar24 = (uint)pSVar1 & 0xffff;
            goto code_?;
          }
        }
        else {
          uVar24 = 0;
          uVar2 = JsonTextReader_ParseUnquotedProperty(this,uVar2,(MethodInfo *)0x0);
code_?:
          if (uVar2 != 0x3a) {
            uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
            _currentChar = (String *)(uint)uVar2;
            JsonTextReader_EatWhitespace(this,uVar2,0,&currentChar,(MethodInfo *)0x0);
            pSVar1 = _currentChar;
            if ((short)_currentChar != 0x3a) {
              pJStack_8 = (JsonSchemaException *)0x3;
              pOVar4 = (Object__Array *)func_?();
              _currentChar = (String *)((uint)pSVar1 & 0xffff);
              pJVar6 = (JsonSchemaException *)func_?();
              func_?();
              func_?();
              pJStack_8 = pJVar6;
              func_?();
              pJStack_8 = (JsonSchemaException *)func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              uStack_7 = func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              pSVar1 = StringLiteral_Invalid_character_after_parsing_;
              goto code_?;
            }
          }
          pSVar10 = (((CultureInfo *)this)->fields).m_name;
          if (pSVar10 != (String *)0x0) {
            pCVar23 = (CultureInfo *)(pSVar10->klass->vtable).GetTypeCode.methodPtr;
            uVar5 = (*(code *)(pSVar10->klass->vtable).ToString.method)();
            (*(code *)(((CultureInfo *)this)->klass->vtable).get_DateTimeFormat.method)
                      (this,4,uVar5);
            pSVar1 = pSVar10;
            (*(code *)(((CultureInfo *)this)->klass->vtable).get_LCID.method)
                      (this,uVar24,(((CultureInfo *)this)->klass->vtable).get_Name.methodPtr);
            pSVar10 = (((CultureInfo *)this)->fields).m_name;
            if (pSVar10 != (String *)0x0) {
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)pSVar10,(Action_1_Boolean_ *)0x0,
                         (MethodInfo *)0x0);
              return 1;
            }
          }
          func_?();
        }
        pOVar4 = (Object__Array *)func_?(TypeInfo__System__Object,3);
        _currentChar = (String *)((uint)pSVar1 & 0xffff);
        uVar5 = func_?(TypeInfo__System__Char,&currentChar);
        func_?(pOVar4,0);
        func_?(pOVar4,uVar5);
        func_?(0,uVar5);
        uStack_7 = func_?();
        uVar5 = func_?(TypeInfo__System__Int32,&uStack_7);
        func_?(pOVar4,0);
        func_?(pOVar4,uVar5);
        func_?(1,uVar5);
        pJStack_8 = (JsonSchemaException *)func_?();
        uVar5 = func_?(TypeInfo__System__Int32,&pJStack_8);
        func_?(pOVar4,0);
        func_?(pOVar4,uVar5);
        func_?(2,uVar5);
        pSVar1 = StringLiteral_Invalid_property_identifier_char;
code_?:
        JsonTextReader_CreateJsonReaderException
                  ((JsonTextReader *)pCVar23,pSVar1,pOVar4,(MethodInfo *)0x0);
        func_?();
        pcVar22 = (code *)swi(3);
        bVar3 = (*pcVar22)();
        return bVar3;
      }
    }
    uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    pSVar1 = (String *)(uint)uVar2;
    if ((uVar2 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
}


/* Boolean ParseProperty(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseProperty
               (JsonTextReader *this,uint16_t firstChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (StringBuffer *)_firstChar;
  uVar2 = (uint16_t)_firstChar;
  bVar3 = JsonTextReader_ValidIdentifierChar(this,uVar2,(MethodInfo *)0x0);
  pJVar4 = this;
  if (bVar3 == 0) {
    if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
      JsonTextReader_ReadStringIntoBuffer(this,uVar2,(MethodInfo *)0x0);
      uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      uVar5 = (uint)pSVar1 & 0xffff;
      goto code_?;
    }
  }
  else {
    uVar5 = 0;
    uVar2 = JsonTextReader_ParseUnquotedProperty(this,uVar2,(MethodInfo *)0x0);
code_?:
    if (uVar2 != 0x3a) {
      uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      _firstChar = (JsonReaderException *)(uint)uVar2;
      JsonTextReader_EatWhitespace(this,uVar2,0,&firstChar,(MethodInfo *)0x0);
      pSVar1 = (StringBuffer *)_firstChar;
      if ((short)_firstChar != 0x3a) {
        in_stack_6 = 3;
        in_stack_7 = TypeInfo__System__Object;
        in_stack_8 = (MethodInfo *)&UNK_?;
        args = (Object__Array *)func_?();
        in_stack_8 = (MethodInfo *)&firstChar;
        method = (MethodInfo *)TypeInfo__System__Char;
        _firstChar = (JsonReaderException *)&UNK_?;
        uVar9 = func_?();
        _firstChar = (JsonReaderException *)0x0;
        func_?();
        func_?();
        in_stack_7 = (Object__Array__Class *)0x0;
        in_stack_8 = (MethodInfo *)&UNK_?;
        in_stack_6 = uVar9;
        func_?();
        in_stack_8 = (MethodInfo *)&UNK_?;
        func_?();
        in_stack_8 = (MethodInfo *)&stack0xfffffff4;
        method = (MethodInfo *)TypeInfo__System__Int32;
        _firstChar = (JsonReaderException *)&UNK_?;
        uVar9 = func_?();
        _firstChar = (JsonReaderException *)0x0;
        func_?();
        func_?();
        method = (MethodInfo *)0x1;
        _firstChar = (JsonReaderException *)&UNK_?;
        in_stack_8 = (MethodInfo *)uVar9;
        func_?();
        _firstChar = (JsonReaderException *)&UNK_?;
        func_?();
        _firstChar = (JsonReaderException *)&stack0xfffffff8;
        uVar5 = func_?();
        func_?();
        func_?();
        _firstChar = (JsonReaderException *)uVar5;
        func_?();
        format = StringLiteral_Invalid_character_after_parsing_;
        goto code_?;
      }
    }
    pSVar10 = (this->fields)._buffer;
    if (pSVar10 != (StringBuffer *)0x0) {
      pJVar4 = (JsonTextReader *)pSVar10->klass[1]._0.image;
      uVar9 = (*(code *)(pSVar10->klass->vtable).ToString.method)();
      (*(code *)(this->klass->vtable).SetToken.method)(this,4,uVar9);
      pSVar1 = pSVar10;
      (*(code *)(this->klass->vtable).set_QuoteChar.method)
                (this,uVar5,(this->klass->vtable).get_TokenType.methodPtr);
      this_00 = (LockCursorManager3DMode *)(this->fields)._buffer;
      if (this_00 != (LockCursorManager3DMode *)0x0) {
        LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                  (this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
        return 1;
      }
    }
    func_?();
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,3);
  _firstChar = (JsonReaderException *)((uint)pSVar1 & 0xffff);
  uVar9 = func_?(TypeInfo__System__Char,&firstChar);
  func_?(args,0);
  func_?(args,uVar9);
  func_?(0,uVar9);
  func_?();
  uVar9 = func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  func_?(args,0);
  func_?(args,uVar9);
  func_?(1,uVar9);
  func_?();
  uVar9 = func_?(TypeInfo__System__Int32,&stack0xfffffff4);
  func_?(args,0);
  func_?(args,uVar9);
  func_?(2,uVar9);
  format = StringLiteral_Invalid_property_identifier_char;
code_?:
  _firstChar = JsonTextReader_CreateJsonReaderException(pJVar4,format,args,(MethodInfo *)0x0);
  in_stack_8 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseProperty_wchar_t_;
  method = (MethodInfo *)0x0;
  func_?();
  pcVar11 = (code *)swi(3);
  bVar3 = (*pcVar11)();
  return bVar3;
}


/* Void ParseString(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseString
               (JsonTextReader *this,uint16_t quote,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonTextReader_ReadStringIntoBuffer(this,quote,(MethodInfo *)0x0);
  pCVar1 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(this->fields)._buffer;
  if ((this->fields)._readType == 1) {
    if (pCVar1 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (pCVar1,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x0) {
        func_?(TypeInfo__System__Byte);
code_?:
        (*(code *)(this->klass->vtable).SetToken.method)(this,0x11);
        return;
      }
      this_00 = (Collection_1_VoxelHit_ *)(this->fields)._buffer;
      if (this_00 != (Collection_1_VoxelHit_ *)0x0) {
        inArray = (Char__Array *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_00,(MethodInfo *)0x0);
        pCVar1 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)(this->fields)._buffer;
        if (pCVar1 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar1,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_FromBase64CharArray
                    (inArray,0,(int32_t)pOVar2,(MethodInfo *)0x0);
          pLVar3 = (LockCursorManager3DMode *)(this->fields)._buffer;
          if (pLVar3 != (LockCursorManager3DMode *)0x0) {
            LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                      (pLVar3,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  else if (pCVar1 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
    this_01 = (String *)
              (*(code *)(pCVar1->klass->vtable).ToString.method)
                        (pCVar1,(pCVar1->klass->vtable).System_Collections_IEnumerable_GetEnumerator
                                .methodPtr);
    pLVar3 = (LockCursorManager3DMode *)(this->fields)._buffer;
    if (pLVar3 != (LockCursorManager3DMode *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                (pLVar3,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
      if (this_01 != (String *)0x0) {
        bVar4 = mscorlib.dll::System::String::String_StartsWith_1
                          (this_01,StringLiteral__Date_,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar4 != 0) {
          bVar4 = mscorlib.dll::System::String::String_EndsWith_1
                            (this_01,::StringLiteral___,StringComparison__Enum_Ordinal,
                             (MethodInfo *)0x0);
          if (bVar4 != 0) {
            JsonTextReader_ParseDate(this,this_01,(MethodInfo *)0x0);
            return;
          }
        }
        (*(code *)(this->klass->vtable).SetToken.method)();
        (*(code *)(this->klass->vtable).set_QuoteChar.method)();
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ParseTrue() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseTrue
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x74,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (MethodInfo *)&uStack_3;
    uStack_3 = 1;
    pIStack_4 = (Int32__Class *)TypeInfo__System__Boolean;
    uVar5 = func_?();
    (*(code *)(this->klass->vtable).SetToken.method)
              (this,10,uVar5,(this->klass->vtable).Dispose.methodPtr);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pIStack_4 = (Int32__Class *)TypeInfo__System__Object;
  args = (Object__Array *)func_?();
  func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pIStack_4 = TypeInfo__System__Int32;
  pMVar6 = (MethodInfo *)func_?();
  func_?(args,0);
  func_?(args,pMVar6);
  pIStack_4 = (Int32__Class *)0x0;
  pMStack_2 = pMVar6;
  func_?();
  pIStack_4 = (Int32__Class *)func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&pIStack_4);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pJVar7 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_boolean_value__Lin,args,(MethodInfo *)0x0);
  pMStack_2 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseTrue__;
  pIStack_4 = (Int32__Class *)0x0;
  func_?(pJVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ParseUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseUndefined
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x75,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (MethodInfo *)(this->klass->vtable).Dispose.methodPtr;
    pIStack_3 = (Int32__Class *)0x0;
    (*(code *)(this->klass->vtable).SetToken.method)(this,0xc);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pIStack_3 = (Int32__Class *)TypeInfo__System__Object;
  args = (Object__Array *)func_?();
  func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pIStack_3 = TypeInfo__System__Int32;
  pMVar4 = (MethodInfo *)func_?();
  func_?(args,0);
  func_?(args,pMVar4);
  pIStack_3 = (Int32__Class *)0x0;
  pMStack_2 = pMVar4;
  func_?();
  pIStack_3 = (Int32__Class *)func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&pIStack_3);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pJVar6 = JsonTextReader_CreateJsonReaderException
                     (this,StringLiteral_Error_parsing_undefined_value__L,args,(MethodInfo *)0x0);
  pMStack_2 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseUndefined__;
  pIStack_3 = (Int32__Class *)0x0;
  func_?(pJVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Char ParseUnquotedProperty(Char) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseUnquotedProperty
                   (JsonTextReader *this,uint16_t firstChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  this_01 = (this->fields)._buffer;
  if (this_01 != (StringBuffer *)0x0) {
    method_00 = (MethodInfo *)0x0;
    uVar1 = (uint)_firstChar;
    while( true ) {
      Json::Utilities::StringBuffer::StringBuffer_Append(this_01,(uint16_t)uVar1,method_00);
      uVar2 = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
      uVar1 = (uint)uVar2;
      if ((uVar2 == 0) && ((this_00->fields)._end != 0)) goto code_?;
      if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Char->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar2,(MethodInfo *)0x0);
      if ((bVar3 != 0) || (uVar1 == 0x3a)) {
        return uVar2;
      }
      this = (JsonTextReader *)0x0;
      bVar3 = JsonTextReader_ValidIdentifierChar(this_00,uVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        in_stack_4 = 3;
        method = (MethodInfo *)TypeInfo__System__Object;
        _firstChar = (MethodInfo *)&UNK_?;
        args = (Object__Array *)func_?();
        _firstChar = (MethodInfo *)&this;
        this = (JsonTextReader *)TypeInfo__System__Char;
        uVar5 = func_?();
        func_?();
        func_?(args);
        method = (MethodInfo *)0x0;
        _firstChar = (MethodInfo *)&UNK_?;
        in_stack_4 = uVar5;
        func_?();
        _firstChar = (MethodInfo *)&UNK_?;
        func_?();
        _firstChar = (MethodInfo *)&firstChar;
        this = (JsonTextReader *)TypeInfo__System__Int32;
        uVar5 = func_?();
        func_?();
        func_?(args);
        this = (JsonTextReader *)0x1;
        _firstChar = (MethodInfo *)uVar5;
        func_?();
        func_?();
        uVar5 = func_?();
        func_?(args);
        func_?(args,uVar5);
        func_?();
        format = StringLiteral_Invalid_JavaScript_property_iden;
        goto code_?;
      }
      this_01 = (this_00->fields)._buffer;
      if (this_01 == (StringBuffer *)0x0) break;
      in_stack_4 = 0;
    }
  }
  in_stack_4 = 0;
  method = (MethodInfo *)&UNK_?;
  func_?();
code_?:
  args = (Object__Array *)func_?();
  this = (JsonTextReader *)func_?();
  uVar5 = func_?();
  func_?(args,0);
  func_?(args,uVar5);
  func_?();
  _firstChar = (MethodInfo *)func_?();
  uVar5 = func_?(TypeInfo__System__Int32,&firstChar);
  func_?(args,0);
  func_?(args,uVar5);
  func_?(1,uVar5);
  format = StringLiteral_Unexpected_end_when_parsing_unqu;
code_?:
  JsonTextReader_CreateJsonReaderException(this_00,format,args,(MethodInfo *)0x0);
  _firstChar = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseUnquotedProperty_wchar_t_;
  this = (JsonTextReader *)0x0;
  func_?();
  pcVar6 = (code *)swi(3);
  uVar2 = (*pcVar6)();
  return uVar2;
}


/* Boolean ParseValue(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseValue
               (JsonTextReader *this,uint16_t currentChar,MethodInfo *method)

{
  uVar1 = _currentChar;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    uVar1 = _currentChar;
  }
  do {
    uVar2 = uVar1 & 0xffff;
    uVar3 = (uint16_t)uVar1;
    switch(uVar2) {
    case 0x27:
code_?:
      JsonTextReader_ParseString(this,uVar3,(MethodInfo *)0x0);
      return 1;
    case 0x29:
      (*(code *)(this->klass->vtable).SetToken.method)
                (this,0xf,0,(this->klass->vtable).Dispose.methodPtr);
      return 1;
    case 0x2c:
code_?:
      (*(code *)(this->klass->vtable).SetToken.method)
                (this,0xc,0,(this->klass->vtable).Dispose.methodPtr);
      return 1;
    case 0x2d:
      JVar4 = JsonValidatingReader::JsonValidatingReader_get_TokenType
                        ((JsonValidatingReader *)this,(MethodInfo *)0x0);
      if (JVar4 != 0x49) {
code_?:
        JsonTextReader_ParseNumber(this,uVar3,(MethodInfo *)0x0);
        return 1;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      bVar5 = JsonTextReader_MatchValue_1
                        (this,0x2d,
                         TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity,1,
                         (MethodInfo *)0x0);
      if (bVar5 != 0) {
        pDStack_6 = TypeInfo__System__Double;
        uVar7 = (undefined4)_UNK_?;
        uStack_8 = CONCAT44(&UNK_?,uVar7);
        uVar7 = func_?();
        uStack_8 = CONCAT44((this->klass->vtable).Dispose.methodPtr,uVar7);
        (*(code *)(this->klass->vtable).SetToken.method)(this,8);
        return 1;
      }
      pDStack_6 = (Double__Class *)TypeInfo__System__Object;
      uStack_8 = CONCAT44(&UNK_?,uVar7);
      args = (Object__Array *)func_?();
      _currentChar = func_?();
      pDStack_6 = (Double__Class *)TypeInfo__System__Int32;
      uStack_8 = CONCAT44(&UNK_?,uVar7);
      uVar9 = func_?();
      uStack_8 = ZEXT48(args);
      func_?();
      func_?(args,uVar9);
      pDStack_6 = (Double__Class *)0x0;
      uStack_8 = CONCAT44(&UNK_?,uVar7);
      func_?();
      uStack_8 = CONCAT44(&UNK_?,uVar7);
      pDStack_6 = (Double__Class *)func_?();
      uStack_8 = CONCAT44(&pDStack_6,TypeInfo__System__Int32);
      uVar1 = func_?();
      func_?(args,0);
      func_?(args,uVar1);
      uStack_8 = CONCAT44(uVar1,1);
      func_?();
      pJVar10 = JsonTextReader_CreateJsonReaderException
                          (this,StringLiteral_Error_parsing_negative_infinity_,args,
                           (MethodInfo *)0x0);
      pDStack_6 = (Double__Class *)0x0;
      uStack_8 = CONCAT44(pJVar10,&UNK_?);
      func_?();
code_?:
      args_00 = (Double__Class *)func_?(TypeInfo__System__Object,3);
      _currentChar = uVar1 & 0xffff;
      uVar9 = func_?(TypeInfo__System__Char,&currentChar);
      func_?(args_00,0);
      func_?(args_00,uVar9);
      func_?(0,uVar9);
      pDStack_6 = (Double__Class *)func_?();
      uVar9 = func_?(TypeInfo__System__Int32,&pDStack_6);
      func_?(args_00,0);
      func_?(args_00,uVar9);
      func_?(1,uVar9);
      uVar9 = func_?();
      uStack_8 = CONCAT44(uVar9,uVar7);
      ppDVar11 = &pDStack_12;
code_?:
      uVar1 = func_?(TypeInfo__System__Int32,ppDVar11);
      func_?(args_00,0);
      func_?(args_00,uVar1);
      func_?(2,uVar1);
      format = StringLiteral_Unexpected_character_encountered;
code_?:
      pJVar10 = JsonTextReader_CreateJsonReaderException
                          (this,format,(Object__Array *)args_00,(MethodInfo *)0x0);
      pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseValue_wchar_t_;
code_?:
      uVar14 = func_?(pJVar10,0,pMVar13);
      pbVar15 = (byte *)(extraout_EDX - 0x10);
      bVar16 = (byte)extraout_EDX;
      bVar17 = CARRY1(*pbVar15,bVar16) || CARRY1(*pbVar15 + bVar16,extraout_EDX < uVar1);
      *pbVar15 = *pbVar15 + bVar16 + (extraout_EDX < uVar1);
      pbVar15 = (byte *)(uVar1 - 0xf);
      bVar18 = *pbVar15 + (byte)uVar14;
      bVar19 = CARRY1(*pbVar15,(byte)uVar14) || CARRY1(bVar18,bVar17);
      *pbVar15 = bVar18 + bVar17;
      pbVar15 = (byte *)(extraout_EDX - 0x10);
      bVar18 = *pbVar15;
      bVar20 = *pbVar15;
      *pbVar15 = bVar20 + bVar16 + bVar19;
      *(char *)(extraout_EDX - 0x10) =
           *(char *)(extraout_EDX - 0x10) + bVar16 +
           (CARRY1(bVar18,bVar16) || CARRY1(bVar20 + bVar16,bVar19));
      puVar21 = (undefined1 *)((int)&args_00[-1].vtable.CompareTo_1.methodPtr + 1);
      bVar22 = (byte)((ushort)uVar14 >> 8);
      bVar17 = CARRY1(*puVar21,bVar22) || 0xfe < (byte)(*puVar21 + bVar22);
      *puVar21 = *puVar21 + bVar22 + 1;
      pbVar15 = (byte *)(extraout_EDX - 0x10);
      bVar18 = *pbVar15;
      bVar20 = *pbVar15;
      *pbVar15 = bVar20 + bVar16 + bVar17;
      cRam_? = cRam_? + bVar22 + (CARRY1(bVar18,bVar16) || CARRY1(bVar20 + bVar16,bVar17))
      ;
      pcVar23 = (code *)swi(1);
      bVar5 = (*pcVar23)(&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc,
                        &stack0xfffffffc,&stack0xfffffffc,&stack0xfffffffc);
      return bVar5;
    case 0x2f:
      JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
      return 1;
    }
    switch(uVar2) {
    case 9:
    case 10:
    case 0xd:
      break;
    default:
      if (uVar2 != 0x20) {
        if ((uVar2 != 0x21) && (uVar2 == 0x22)) goto code_?;
        if (uVar2 == 0x5b) {
          (*(code *)(this->klass->vtable).SetToken.method)
                    (this,2,0,(this->klass->vtable).Dispose.methodPtr);
          return 1;
        }
        if ((uVar2 != 0x5c) && (uVar2 == 0x5d)) {
          (*(code *)(this->klass->vtable).SetToken.method)
                    (this,0xe,0,(this->klass->vtable).Dispose.methodPtr);
          return 1;
        }
        if (uVar3 == 0x74) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar5 = JsonTextReader_MatchValue_1
                            (this,0x74,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True,
                             1,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            _currentChar = CONCAT13(1,_currentChar);
code_?:
            uStack_8 = CONCAT44((undefined1 *)((int)register0x00000010 + 0xb),
                                 TypeInfo__System__Boolean);
            uVar9 = func_?();
            (*(code *)(this->klass->vtable).SetToken.method)
                      (this,10,uVar9,(this->klass->vtable).Dispose.methodPtr);
            return 1;
          }
          uStack_8 = CONCAT44(2,TypeInfo__System__Object);
          args_00 = (Double__Class *)func_?();
          uStack_8 = CONCAT44(&UNK_?,uVar7);
          _currentChar = func_?();
          uStack_8 = CONCAT44(&currentChar,TypeInfo__System__Int32);
          uVar1 = func_?();
          func_?(args_00,0);
          func_?(args_00,uVar1);
          uStack_8 = (ulonglong)uVar1 << 0x20;
          func_?();
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          pJVar10 = JsonTextReader_CreateJsonReaderException
                              (this,StringLiteral_Error_parsing_boolean_value__Lin,
                               (Object__Array *)args_00,(MethodInfo *)0x0);
          pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseTrue__;
          goto code_?;
        }
        if (uVar3 == 0x75) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar5 = JsonTextReader_MatchValue_1
                            (this,0x75,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined,1,
                             (MethodInfo *)0x0);
          if (bVar5 != 0) goto code_?;
          args_00 = (Double__Class *)func_?(TypeInfo__System__Object,2);
          _currentChar = func_?();
          uVar9 = func_?(TypeInfo__System__Int32,&currentChar);
          func_?(args_00,0);
          func_?(args_00,uVar9);
          func_?(0,uVar9);
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          pJVar10 = JsonTextReader_CreateJsonReaderException
                              (this,StringLiteral_Error_parsing_undefined_value__L,
                               (Object__Array *)args_00,(MethodInfo *)0x0);
          pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseUndefined__;
          goto code_?;
        }
        if (uVar2 == 0x7b) {
          (*(code *)(this->klass->vtable).SetToken.method)
                    (this,1,0,(this->klass->vtable).Dispose.methodPtr);
          return 1;
        }
        if ((uVar2 != 0x7c) && (uVar2 == 0x7d)) {
          (*(code *)(this->klass->vtable).SetToken.method)
                    (this,0xd,0,(this->klass->vtable).Dispose.methodPtr);
          return 1;
        }
        if (uVar3 == 0x49) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar5 = JsonTextReader_MatchValue_1
                            (this,0x49,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                             PositiveInfinity,1,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            uStack_8 = _UNK_?;
            uVar9 = func_?();
            (*(code *)(this->klass->vtable).SetToken.method)
                      (this,8,uVar9,(this->klass->vtable).Dispose.methodPtr);
            return 1;
          }
          uStack_8 = CONCAT44(2,TypeInfo__System__Object);
          args_00 = (Double__Class *)func_?();
          uStack_8 = CONCAT44(&UNK_?,uVar7);
          _currentChar = func_?();
          uStack_8 = CONCAT44(&currentChar,TypeInfo__System__Int32);
          uVar1 = func_?();
          func_?(args_00,0);
          func_?(args_00,uVar1);
          uStack_8 = (ulonglong)uVar1 << 0x20;
          func_?();
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          pJVar10 = JsonTextReader_CreateJsonReaderException
                              (this,StringLiteral_Error_parsing_positive_infinity_,
                               (Object__Array *)args_00,(MethodInfo *)0x0);
          pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberPositiveInfinity__;
          goto code_?;
        }
        if (uVar3 == 0x4e) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar5 = JsonTextReader_MatchValue_1
                            (this,0x4e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,1
                             ,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            uStack_8 = _UNK_?;
            uVar9 = func_?();
            (*(code *)(this->klass->vtable).SetToken.method)
                      (this,8,uVar9,(this->klass->vtable).Dispose.methodPtr);
            return 1;
          }
          uStack_8 = CONCAT44(2,TypeInfo__System__Object);
          args_00 = (Double__Class *)func_?();
          uStack_8 = CONCAT44(&UNK_?,uVar7);
          _currentChar = func_?();
          uStack_8 = CONCAT44(&currentChar,TypeInfo__System__Int32);
          uVar1 = func_?();
          func_?(args_00,0);
          func_?(args_00,uVar1);
          uStack_8 = (ulonglong)uVar1 << 0x20;
          func_?();
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          pJVar10 = JsonTextReader_CreateJsonReaderException
                              (this,StringLiteral_Error_parsing_NaN_value__Line__0,
                               (Object__Array *)args_00,(MethodInfo *)0x0);
          pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberNaN__;
          goto code_?;
        }
        if (uVar3 == 0x66) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000
               ) != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar5 = JsonTextReader_MatchValue_1
                            (this,0x66,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False
                             ,1,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            _currentChar = _currentChar & 0xffffff;
            goto code_?;
          }
          uStack_8 = CONCAT44(2,TypeInfo__System__Object);
          args_00 = (Double__Class *)func_?();
          uStack_8 = CONCAT44(&UNK_?,uVar7);
          _currentChar = func_?();
          uStack_8 = CONCAT44(&currentChar,TypeInfo__System__Int32);
          uVar1 = func_?();
          func_?(args_00,0);
          func_?(args_00,uVar1);
          uStack_8 = (ulonglong)uVar1 << 0x20;
          func_?();
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          pJVar10 = JsonTextReader_CreateJsonReaderException
                              (this,StringLiteral_Error_parsing_boolean_value__Lin,
                               (Object__Array *)args_00,(MethodInfo *)0x0);
          pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseFalse__;
          goto code_?;
        }
        if (uVar3 == 0x6e) {
          bVar5 = JsonTextReader_HasNext(this,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            JVar4 = JsonValidatingReader::JsonValidatingReader_get_TokenType
                              ((JsonValidatingReader *)this,(MethodInfo *)0x0);
            if ((JVar4 & 0xffff) == 0x75) {
              if (cRam_? == '\0') {
                uStack_8 = CONCAT44(pDStack_12,_UNK_?);
                func_?();
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
                uStack_8 = CONCAT44(pDStack_12,TypeInfo__Newtonsoft__Json__JsonConvert);
                func_?();
              }
              uStack_8 = uStack_8 & 0xffffffff00000000;
              bVar5 = JsonTextReader_MatchValue_1
                                (this,0x6e,
                                 TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,1,
                                 (MethodInfo *)0x0);
              if (bVar5 != 0) {
                pDStack_6 = (Double__Class *)this;
                uStack_8 = CONCAT44(&UNK_?,uVar7);
                (*(code *)(this->klass->vtable).SetToken.method)();
                return 1;
              }
              args_00 = (Double__Class *)func_?();
              _currentChar = func_?();
              uVar9 = func_?();
              uStack_8 = CONCAT44(&UNK_?,uVar7);
              pDStack_6 = args_00;
              func_?();
              uStack_8 = CONCAT44(uVar9,args_00);
              func_?();
              func_?();
              func_?();
              pDStack_6 = (Double__Class *)TypeInfo__System__Int32;
              uStack_8 = CONCAT44(&UNK_?,(int)uStack_8);
              uVar1 = func_?();
              uStack_8 = ZEXT48(args_00);
              func_?();
              func_?(args_00,uVar1);
              pDStack_6 = (Double__Class *)0x1;
              uStack_8 = CONCAT44(&UNK_?,uVar7);
              func_?();
              pJVar10 = JsonTextReader_CreateJsonReaderException
                                  (this,StringLiteral_Error_parsing_null_value__Line__,
                                   (Object__Array *)args_00,(MethodInfo *)0x0);
              pMVar13 = MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNull__;
              goto code_?;
            }
            if ((JVar4 & 0xffff) == 0x65) {
              uStack_8 = ZEXT48(pDStack_12) << 0x20;
              JsonTextReader_ParseConstructor(this,(MethodInfo *)0x0);
              return 1;
            }
            args_00 = (Double__Class *)func_?(TypeInfo__System__Object);
            _currentChar = 0x6e;
            uVar7 = func_?(TypeInfo__System__Char,&currentChar);
            func_?(args_00,0);
            func_?(args_00,uVar7);
            func_?(0);
            uVar9 = func_?();
            uStack_8 = CONCAT44(uVar9,uVar7);
            uVar9 = func_?(TypeInfo__System__Int32,&pDStack_12);
            func_?(args_00,0);
            func_?(args_00,uVar9);
            func_?(1,uVar9);
            pDStack_6 = (Double__Class *)func_?();
            ppDVar11 = &pDStack_6;
            goto code_?;
          }
          args_00 = (Double__Class *)func_?(TypeInfo__System__Object,2);
          _currentChar = func_?();
          uVar9 = func_?(TypeInfo__System__Int32,&currentChar);
          func_?(args_00,0);
          func_?(args_00,uVar9);
          func_?(0,uVar9);
          uVar9 = func_?();
          uStack_8 = CONCAT44(uVar9,uVar7);
          uVar1 = func_?(TypeInfo__System__Int32,&pDStack_12);
          func_?(args_00,0);
          func_?(args_00,uVar1);
          func_?(1,uVar1);
          format = StringLiteral_Unexpected_end__Line__0___positi;
          goto code_?;
        }
        if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Char->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Char);
        }
        bVar5 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar3,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Char->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Char);
          }
          bVar5 = mscorlib.dll::System::Char::Char_IsNumber(uVar3,(MethodInfo *)0x0);
          if (((bVar5 != 0) || (uVar3 == 0x2d)) || (uVar3 == 0x2e)) goto code_?;
          goto code_?;
        }
      }
    }
    uVar3 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    uVar1 = (uint)uVar3;
    if ((uVar3 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
}


/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_Read
               (JsonTextReader *this,MethodInfo *method)

{
  (this->fields)._readType = 0;
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  pNVar1 = &(this->fields)._lastChar;
  do {
    NStack_2 = *pNVar1;
    cVar3 = func_?(&NStack_2,MethodInfo__System__Nullable<wchar_t>__get_HasValue__);
    if (cVar3 == '\0') {
      currentChar = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
    }
    else {
      currentChar = func_?(pNVar1,MethodInfo__System__Nullable<wchar_t>__get_Value__);
      pNVar1->value = 0;
      pNVar1->has_value = 0;
      pNVar1->field_0x3 = 0;
    }
    if ((currentChar == 0) && ((this_00->fields)._end != 0)) {
      return 0;
    }
    switch((this_00->fields)._._currentState) {
    case 0:
    case 2:
    case 5:
    case 6:
    case 9:
    case 10:
      bVar4 = JsonTextReader_ParseValue(this_00,currentChar,(MethodInfo *)0x0);
      return bVar4;
    case 1:
    case 7:
    case 0xb:
      break;
    case 3:
    case 4:
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      do {
        switch(currentChar) {
        case 9:
        case 10:
        case 0xd:
          break;
        default:
          if (currentChar != 0x20) {
            if (currentChar == 0x2f) {
              JsonTextReader_ParseComment(this_00,(MethodInfo *)0x0);
              return 1;
            }
            if (currentChar == 0x7d) {
              (*(code *)(this_00->klass->vtable).SetToken.method)
                        (this_00,0xd,0,(this_00->klass->vtable).Dispose.methodPtr);
              return 1;
            }
            if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Char->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Char);
            }
            bVar4 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              bVar4 = JsonTextReader_ParseProperty(this_00,currentChar,(MethodInfo *)0x0);
              return bVar4;
            }
          }
        }
        currentChar = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
        if ((currentChar == 0) && ((this_00->fields)._end != 0)) {
          return 0;
        }
      } while( true );
    case 8:
      bVar4 = JsonTextReader_ParsePostValue(this_00,currentChar,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      break;
    default:
      args = (Object__Array *)func_?(TypeInfo__System__Object,3);
      this = (JsonTextReader *)
             System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Int32]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                        (MethodInfo *)0x0);
      uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonReader__State,&this);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(0,uVar5);
      uStack_6 = func_?();
      uVar5 = func_?(TypeInfo__System__Int32,&uStack_6);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(1,uVar5);
      uStack_7 = func_?();
      uVar5 = func_?(TypeInfo__System__Int32,&uStack_7);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(2,uVar5);
      pJVar8 = JsonTextReader_CreateJsonReaderException
                         (this_00,StringLiteral_Unexpected_state___0___Line__1__,args,
                          (MethodInfo *)0x0);
      bVar4 = func_?(pJVar8,0,MethodInfo__Newtonsoft__Json__JsonTextReader__ReadInternal__)
      ;
      ppTVar9 = &(this_00->fields)._._valueType;
      *ppTVar9 = (Type *)((uint)*ppTVar9 | extraout_EDX);
      ppTVar9 = &(this_00->fields)._._valueType;
      *(byte *)ppTVar9 = *(byte *)ppTVar9 | (byte)extraout_EDX;
      return bVar4;
    }
  } while( true );
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsBytes
          (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields)._readType = 1;
  do {
    bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    iVar2 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                      (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  } while (iVar2 == 5);
  iVar2 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                    (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  if (iVar2 == 0xb) {
    return (Byte__Array *)0x0;
  }
  iVar2 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                    (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  pJVar3 = this_00->klass;
  if (iVar2 == 0x11) {
    this_01 = (List_1_VoxelHit_ *)
              (*(code *)(pJVar3->vtable).get_Value.method)
                        (this_00,(pJVar3->vtable).get_ValueType.methodPtr);
    unaff_EDI = TypeInfo__System__Byte;
    if (this_01 == (List_1_VoxelHit_ *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar4 = (Byte__Array *)func_?(this_01,TypeInfo__System__Byte);
    if (pBVar4 != (Byte__Array *)0x0) {
      return pBVar4;
    }
  }
  else {
    iVar2 = (*(code *)(pJVar3->vtable).get_TokenType.method)
                      (this_00,(pJVar3->vtable).get_Value.methodPtr);
    if (iVar2 == 2) {
      this_01 = (List_1_VoxelHit_ *)
                func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                ((List_1_UnityEngine_Vector4_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
      bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
      while (bVar1 != 0) {
        iVar2 = func_?(7,this_00);
        if (iVar2 != 5) {
          if ((iVar2 == 6) || (iVar2 != 7)) {
            if (iVar2 == 0xe) {
              if (this_01 != (List_1_VoxelHit_ *)0x0) {
                pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                         List_1_VoxelHit__ToArray
                                   (this_01,
                                    MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                   );
                func_?(0xf,this_00,0x11,pVVar5);
                return (Byte__Array *)pVVar5;
              }
              goto code_?;
            }
            unaff_EDI = (Byte__Array__Class *)func_?(TypeInfo__System__Object,3);
            this = (JsonTextReader *)func_?(7,this_00);
            uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
            func_?(unaff_EDI,0);
            func_?(unaff_EDI,uVar6);
            func_?(0,uVar6);
            uStack_7 = func_?();
            uVar6 = func_?(TypeInfo__System__Int32,&uStack_7);
            func_?(unaff_EDI,0);
            func_?(unaff_EDI,uVar6);
            func_?(1,uVar6);
            uStack_8 = func_?();
            puVar9 = &uStack_8;
            goto code_?;
          }
          this = (JsonTextReader *)func_?(8,this_00);
          if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          unaff_EDI = (Byte__Array__Class *)
                      mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          item = mscorlib.dll::System::Convert::Convert_ToByte_15
                           ((Object *)this,(IFormatProvider *)unaff_EDI,(MethodInfo *)0x0);
          uStack_7 = CONCAT31(uStack_7._1_3_,item);
          if (this_01 == (List_1_VoxelHit_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__1_Add
                    ((List_1_System_Byte__1 *)this_01,item,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                    );
        }
        bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
      }
code_?:
      unaff_EDI = (Byte__Array__Class *)func_?(TypeInfo__System__Object,2);
      this = (JsonTextReader *)func_?();
      uVar6 = func_?(TypeInfo__System__Int32,&this);
      func_?(unaff_EDI,0);
      func_?(unaff_EDI,uVar6);
      func_?(0,uVar6);
      uStack_7 = func_?();
      this_01 = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Int32,&uStack_7);
      func_?(unaff_EDI,0);
      func_?(unaff_EDI,this_01);
      func_?(1,this_01);
      format = StringLiteral_Unexpected_end_when_reading_byte;
    }
    else {
      unaff_EDI = (Byte__Array__Class *)func_?(TypeInfo__System__Object,3);
      this = (JsonTextReader *)func_?(7,this_00);
      uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&this);
      func_?(unaff_EDI,0);
      func_?(unaff_EDI,uVar6);
      func_?(0,uVar6);
      uStack_8 = func_?();
      uVar6 = func_?(TypeInfo__System__Int32,&uStack_8);
      func_?(unaff_EDI,0);
      func_?(unaff_EDI,uVar6);
      func_?(1,uVar6);
      uStack_7 = func_?();
      puVar9 = &uStack_7;
code_?:
      this_01 = (List_1_VoxelHit_ *)func_?(TypeInfo__System__Int32,puVar9);
      func_?(unaff_EDI,0);
      func_?(unaff_EDI,this_01);
      func_?(2,this_01);
      format = StringLiteral_Unexpected_token_when_reading_by;
    }
    pJVar10 = JsonTextReader_CreateJsonReaderException
                       (this_00,format,(Object__Array *)unaff_EDI,(MethodInfo *)0x0);
    func_?(pJVar10,0,MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsBytes__);
code_?:
    func_?(0);
  }
  func_?(this_01,unaff_EDI);
  pcVar11 = (code *)swi(3);
  pBVar4 = (Byte__Array *)(*pcVar11)();
  return pBVar4;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JsonTextReader *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  (this->fields)._readType = 3;
  do {
    bVar6 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      args = (Object__Array *)func_?(TypeInfo__System__Object,2);
      __return_storage_ptr__ = (Nullable_1_DateTimeOffset_ *)func_?();
      uVar7 = func_?(TypeInfo__System__Int32,&__return_storage_ptr__);
      uVar8 = 0;
      pOVar9 = args;
      func_?();
      func_?(args,uVar7,pOVar9,uVar8);
      func_?(0,uVar7);
      this = (JsonTextReader *)func_?();
      ppJVar10 = &this;
      pIVar11 = TypeInfo__System__Int32;
      uVar7 = func_?();
      func_?(args,0,pIVar11,ppJVar10);
      func_?(args,uVar7);
      func_?();
      pSVar12 = StringLiteral_Unexpected_end_when_reading_date;
      goto code_?;
    }
    iVar13 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                      (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  } while (iVar13 == 5);
  iVar13 = (*(code *)(this_00->klass->vtable).get_TokenType.method)();
  if (iVar13 == 0xb) {
    *(undefined4 *)&(__return_storage_ptr__->value).dt.ticks._ticks = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = 0;
    (__return_storage_ptr__->value).dt.kind = 0;
    *(undefined4 *)&(__return_storage_ptr__->value).dt.field_0xc = 0;
    *(undefined4 *)&(__return_storage_ptr__->value).utc_offset._ticks = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
    return __return_storage_ptr__;
  }
  iVar13 = (*(code *)(this_00->klass->vtable).get_TokenType.method)();
  pJVar14 = this_00->klass;
  if (iVar13 != 0x10) {
    iVar13 = (*(code *)(pJVar14->vtable).get_TokenType.method)();
    if (iVar13 == 9) {
      uVar7 = (*(code *)(this_00->klass->vtable).get_Value.method)();
      pCVar15 = JsonTextReader_get_Culture(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__DateTimeOffset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__DateTimeOffset->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__DateTimeOffset);
      }
      pSVar12 = (String *)func_?(uVar7,TypeInfo__System__String,pCVar15,0,&uStack_1,0);
      bVar6 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_TryParse
                        (pSVar12,in_stack_16,in_stack_17,in_stack_18,
                         in_stack_19);
      if (bVar6 != 0) {
        puVar20 = &uStack_21;
        uStack_21 = uStack_1;
        uStack_22 = uStack_2;
        uStack_23 = uStack_3;
        uStack_24 = uStack_4;
        uStack_25 = uStack_5;
        pDVar26 = TypeInfo__System__DateTimeOffset;
        uVar7 = func_?();
        func_?(0xf,this_00,0x10,uVar7,pDVar26,puVar20);
        uStack_27 = 0;
        uStack_28 = 0;
        iStack_29 = 0;
        uStack_30 = 0;
        uStack_31 = 0;
        uStack_32 = 0;
        uStack_33 = 0;
        uStack_34 = 0;
        uVar7 = uStack_1;
        uVar8 = uStack_2;
        uVar35 = uStack_3;
        uVar36 = uStack_4;
        uVar37 = uStack_5;
        pMVar38 = 
        MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_;
        goto code_?;
      }
    }
    uVar7 = 3;
    pOVar39 = TypeInfo__System__Object;
    args = (Object__Array *)func_?();
    __return_storage_ptr__ = (Nullable_1_DateTimeOffset_ *)func_?(7,this_00,pOVar39,uVar7);
    uVar7 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&__return_storage_ptr__);
    func_?(args,0);
    func_?(args,uVar7);
    uVar8 = 0;
    func_?();
    this = (JsonTextReader *)func_?();
    uVar7 = func_?(TypeInfo__System__Int32,&this,uVar8,uVar7);
    func_?(args,0);
    func_?(args,uVar7);
    func_?(1,uVar7);
    uStack_40 = func_?();
    uVar7 = func_?(TypeInfo__System__Int32,&uStack_40);
    func_?(args,0);
    func_?(args,uVar7);
    func_?(2,uVar7);
    pSVar12 = StringLiteral_Unexpected_token_when_reading_da;
code_?:
    pJVar41 = JsonTextReader_CreateJsonReaderException(this_00,pSVar12,args,(MethodInfo *)0x0);
    func_?(pJVar41,0,MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsDateTimeOffset__);
    pcVar42 = (code *)swi(3);
    pNVar43 = (Nullable_1_DateTimeOffset_ *)(*pcVar42)();
    return pNVar43;
  }
  pIVar44 = (pJVar14->vtable).get_ValueType.methodPtr;
  uVar7 = (*(code *)(pJVar14->vtable).get_Value.method)();
  pMVar38 = MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_;
  uStack_27 = 0;
  uStack_28 = 0;
  iStack_29 = 0;
  uStack_30 = 0;
  uStack_31 = 0;
  uStack_32 = 0;
  uStack_33 = 0;
  uStack_34 = 0;
  puVar20 = (undefined4 *)func_?(uVar7,TypeInfo__System__DateTimeOffset,this_00,pIVar44);
  uVar7 = *puVar20;
  uVar8 = puVar20[1];
  uVar35 = puVar20[2];
  uVar36 = puVar20[3];
  uVar37 = *(undefined8 *)(puVar20 + 4);
code_?:
  func_?(&uStack_27,uVar7,uVar8,uVar35,uVar36,uVar37,pMVar38);
  *(undefined4 *)&(__return_storage_ptr__->value).dt.ticks._ticks = uStack_27;
  *(undefined4 *)((int)&(__return_storage_ptr__->value).dt.ticks._ticks + 4) = uStack_28;
  (__return_storage_ptr__->value).dt.kind = iStack_29;
  *(undefined4 *)&(__return_storage_ptr__->value).dt.field_0xc = uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->value).utc_offset._ticks = uStack_31;
  *(undefined4 *)((int)&(__return_storage_ptr__->value).utc_offset._ticks + 4) = uStack_32;
  *(undefined4 *)&__return_storage_ptr__->has_value = uStack_33;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_34;
  return __return_storage_ptr__;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  (this->fields)._readType = 2;
  do {
    bVar5 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      args = (Object__Array *)func_?();
      __return_storage_ptr__ = (Nullable_1_Decimal_ *)func_?();
      uVar6 = func_?();
      func_?(args,0);
      func_?(args,uVar6);
      func_?();
      this = (JsonTextReader *)func_?();
      piVar7 = (int *)func_?(TypeInfo__System__Int32,&this);
      func_?(args,0);
      func_?(args,piVar7);
      func_?(1,piVar7);
      pSVar8 = StringLiteral_Unexpected_end_when_reading_deci;
      goto code_?;
    }
    pIVar9 = (this_00->klass->vtable).get_Value.methodPtr;
    iVar10 = (*(code *)(this_00->klass->vtable).get_TokenType.method)();
  } while (iVar10 == 5);
  iVar10 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                    (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  if (iVar10 == 0xb) {
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    *(undefined4 *)&__return_storage_ptr__->has_value = 0;
    return __return_storage_ptr__;
  }
  iVar10 = (*(code *)(this_00->klass->vtable).get_TokenType.method)
                    (this_00,(this_00->klass->vtable).get_Value.methodPtr);
  pJVar11 = this_00->klass;
  if (iVar10 == 8) {
    piVar7 = (int *)(*(code *)(pJVar11->vtable).get_Value.method)
                              (this_00,(pJVar11->vtable).get_ValueType.methodPtr);
    func_?();
    if ((piVar7 == (int *)0x0) ||
       (pDVar12 = TypeInfo__System__Decimal,
       *(Il2CppClass **)(*piVar7 + 0x20) == (TypeInfo__System__Decimal->_0).element_class)) {
      func_?(piVar7,TypeInfo__System__Decimal,&stack0xffffffb8);
      (__return_storage_ptr__->value).flags = (uint32_t)this_00;
      (__return_storage_ptr__->value).hi = (uint32_t)pIVar9;
      (__return_storage_ptr__->value).lo = unaff_EBX;
      (__return_storage_ptr__->value).mid = uStack_13;
      *(uint32_t *)&__return_storage_ptr__->has_value = uStack_14;
      return __return_storage_ptr__;
    }
  }
  else {
    iVar10 = (*(code *)(pJVar11->vtable).get_TokenType.method)
                      (this_00,(pJVar11->vtable).get_Value.methodPtr);
    if (iVar10 == 9) {
      uVar6 = (*(code *)(this_00->klass->vtable).get_Value.method)
                        (this_00,(this_00->klass->vtable).get_ValueType.methodPtr);
      pCVar15 = JsonTextReader_get_Culture(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar8 = (String *)func_?(uVar6,TypeInfo__System__String,0x6f,pCVar15);
      bVar5 = mscorlib.dll::System::Decimal::Decimal_TryParse_1
                        (pSVar8,in_stack_16,in_stack_17,in_stack_18,
                         in_stack_19);
      if (bVar5 != 0) {
        uStack_20 = uStack_1;
        uStack_21 = uStack_2;
        uStack_22 = uStack_3;
        uStack_23 = uStack_4;
        uVar6 = func_?(TypeInfo__System__Decimal,&uStack_20);
        func_?(0xf,this_00,8,uVar6);
        uStack_24 = 0;
        uStack_13 = 0;
        uStack_14 = 0;
        uStack_25 = 0;
        uStack_26 = 0;
        func_?(&uStack_13,uStack_1,uStack_2,uStack_3,uStack_4,
                        MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_);
        (__return_storage_ptr__->value).flags = uStack_13;
        (__return_storage_ptr__->value).hi = uStack_14;
        (__return_storage_ptr__->value).lo = uStack_25;
        (__return_storage_ptr__->value).mid = uStack_26;
        *(undefined4 *)&__return_storage_ptr__->has_value = uStack_24;
        return __return_storage_ptr__;
      }
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object,3);
    __return_storage_ptr__ = (Nullable_1_Decimal_ *)func_?(7,this_00);
    uVar6 = func_?(TypeInfo__Newtonsoft__Json__JsonToken,&__return_storage_ptr__);
    func_?(args,0);
    func_?(args,uVar6);
    func_?(0,uVar6);
    this = (JsonTextReader *)func_?();
    uVar6 = func_?(TypeInfo__System__Int32,&this);
    func_?(args,0);
    func_?(args,uVar6);
    func_?(1,uVar6);
    uStack_27 = func_?();
    piVar7 = (int *)func_?(TypeInfo__System__Int32,&uStack_27);
    func_?(args,0);
    func_?(args,piVar7);
    func_?(2,piVar7);
    pSVar8 = StringLiteral_Unexpected_token_when_reading_de;
code_?:
    pJVar28 = JsonTextReader_CreateJsonReaderException(this_00,pSVar8,args,(MethodInfo *)0x0);
    pDVar12 = (Decimal__Class *)func_?(pJVar28);
  }
  func_?(piVar7,pDVar12);
  pcVar29 = (code *)swi(3);
  pNVar30 = (Nullable_1_Decimal_ *)(*pcVar29)();
  return pNVar30;
}


/* Boolean ReadInternal() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadInternal
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  pNVar1 = &(this->fields)._lastChar;
  do {
    NStack_2 = *pNVar1;
    cVar3 = func_?(&NStack_2,MethodInfo__System__Nullable<wchar_t>__get_HasValue__);
    if (cVar3 == '\0') {
      currentChar = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
    }
    else {
      currentChar = func_?(pNVar1,MethodInfo__System__Nullable<wchar_t>__get_Value__);
      pNVar1->value = 0;
      pNVar1->has_value = 0;
      pNVar1->field_0x3 = 0;
    }
    if ((currentChar == 0) && ((this_00->fields)._end != 0)) {
      return 0;
    }
    switch((this_00->fields)._._currentState) {
    case 0:
    case 2:
    case 5:
    case 6:
    case 9:
    case 10:
      bVar4 = JsonTextReader_ParseValue(this_00,currentChar,(MethodInfo *)0x0);
      return bVar4;
    case 1:
    case 7:
    case 0xb:
      break;
    case 3:
    case 4:
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      do {
        switch(currentChar) {
        case 9:
        case 10:
        case 0xd:
          break;
        default:
          if (currentChar != 0x20) {
            if (currentChar == 0x2f) {
              JsonTextReader_ParseComment(this_00,(MethodInfo *)0x0);
              return 1;
            }
            if (currentChar == 0x7d) {
              (*(code *)(this_00->klass->vtable).SetToken.method)
                        (this_00,0xd,0,(this_00->klass->vtable).Dispose.methodPtr);
              return 1;
            }
            if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Char->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Char);
            }
            bVar4 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              bVar4 = JsonTextReader_ParseProperty(this_00,currentChar,(MethodInfo *)0x0);
              return bVar4;
            }
          }
        }
        currentChar = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
        if ((currentChar == 0) && ((this_00->fields)._end != 0)) {
          return 0;
        }
      } while( true );
    case 8:
      bVar4 = JsonTextReader_ParsePostValue(this_00,currentChar,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
      break;
    default:
      args = (Object__Array *)func_?(TypeInfo__System__Object,3);
      this = (JsonTextReader *)
             System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Int32]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_00,
                        (MethodInfo *)0x0);
      uVar5 = func_?(TypeInfo__Newtonsoft__Json__JsonReader__State,&this);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(0,uVar5);
      uStack_6 = func_?();
      uVar5 = func_?(TypeInfo__System__Int32,&uStack_6);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(1,uVar5);
      uStack_7 = func_?();
      uVar5 = func_?(TypeInfo__System__Int32,&uStack_7);
      func_?(args,0);
      func_?(args,uVar5);
      func_?(2,uVar5);
      pJVar8 = JsonTextReader_CreateJsonReaderException
                         (this_00,StringLiteral_Unexpected_state___0___Line__1__,args,
                          (MethodInfo *)0x0);
      bVar4 = func_?(pJVar8,0,MethodInfo__Newtonsoft__Json__JsonTextReader__ReadInternal__)
      ;
      ppTVar9 = &(this_00->fields)._._valueType;
      *ppTVar9 = (Type *)((uint)*ppTVar9 | extraout_EDX);
      ppTVar9 = &(this_00->fields)._._valueType;
      *(byte *)ppTVar9 = *(byte *)ppTVar9 | (byte)extraout_EDX;
      return bVar4;
    }
  } while( true );
}


/* TimeSpan ReadOffset(String) */

TimeSpan Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadOffset
                   (JsonTextReader *this,String *offsetText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (offsetText != (String *)0x0) {
    uVar1 = mscorlib.dll::System::String::String_get_Chars(offsetText,0,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(offsetText,1,2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse_4
                      (pSVar2,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar3,(MethodInfo *)0x0
                      );
    iVar5 = 0;
    pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)offsetText,(MethodInfo *)0x0);
    if (4 < (int)pIVar6) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1(offsetText,3,2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar3 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      iVar5 = mscorlib.dll::System::Int32::Int32_Parse_4
                        (pSVar2,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar3,
                         (MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?();
    }
    TVar7 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours((double)iVar4,(MethodInfo *)0x0);
    t2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes((double)iVar5,(MethodInfo *)0x0);
    TVar7 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar7,t2,(MethodInfo *)0x0);
    if (uVar1 == 0x2d) {
      puStack8 = &stack0xfffffff4;
      uStack9 = 0;
      TVar7._ticks = func_?();
    }
    return (TimeSpan)TVar7._ticks;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  TVar7._ticks = (*pcVar10)();
  return (TimeSpan)TVar7._ticks;
}


/* Void ReadStringIntoBuffer(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadStringIntoBuffer
               (JsonTextReader *this,uint16_t quote,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
code_?:
  do {
    while (uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0), uVar1 == 0) {
      if ((this->fields)._end != 0) {
        args = (Object__Array *)func_?(TypeInfo__System__Object,3);
        pMStack_2 = (MethodInfo *)(uint)quote;
        uVar3 = func_?(TypeInfo__System__Char,&pMStack_2);
        func_?(args,0);
        func_?(args,uVar3);
        func_?(0,uVar3);
        pIStack_4 = (Int32__Class *)func_?();
        uVar3 = func_?(TypeInfo__System__Int32,&pIStack_4);
        func_?(args,0);
        func_?(args,uVar3);
        func_?(1,uVar3);
        func_?();
        ppMVar5 = (MethodInfo **)&stack0xfffffff0;
code_?:
        uVar3 = func_?(TypeInfo__System__Int32,ppMVar5);
        func_?(args,0);
        func_?(args,uVar3);
        func_?(2,uVar3);
        pSVar6 = StringLiteral_Unterminated_string__Expected_de;
code_?:
        JsonTextReader_CreateJsonReaderException(this,pSVar6,args,(MethodInfo *)0x0);
        pMStack_2 = MethodInfo__Newtonsoft__Json__JsonTextReader__ReadStringIntoBuffer_wchar_t_;
        pIStack_4 = (Int32__Class *)0x0;
        func_?();
code_?:
        func_?();
        pcVar7 = (code *)swi(1);
        (*pcVar7)();
        return;
      }
      pSVar8 = (this->fields)._buffer;
      if (pSVar8 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,0,(MethodInfo *)0x0);
    }
    if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
      if (uVar1 == quote) {
        return;
      }
    }
    else if (uVar1 == 0x5c) {
      uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      if ((uVar1 == 0) && ((this->fields)._end != 0)) {
        args = (Object__Array *)func_?(TypeInfo__System__Object);
        uVar3 = func_?(TypeInfo__System__Char,&stack0xfffffff0);
        func_?(args,0);
        func_?(args,uVar3);
        func_?(0);
        pIStack_4 = (Int32__Class *)func_?();
        uVar3 = func_?(TypeInfo__System__Int32,&pIStack_4);
        func_?(args,0);
        func_?(args,uVar3);
        func_?(1,uVar3);
        pMStack_2 = (MethodInfo *)func_?();
        ppMVar5 = &pMStack_2;
        goto code_?;
      }
      switch(uVar1) {
      case 0x72:
        pSVar8 = (this->fields)._buffer;
        if (pSVar8 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,0xd,(MethodInfo *)0x0);
        break;
      default:
        if (((uVar1 == 0x22) || (uVar1 == 0x27)) || (uVar1 == 0x2f)) {
          pSVar8 = (this->fields)._buffer;
          if (pSVar8 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,uVar1,(MethodInfo *)0x0);
        }
        else if (uVar1 == 0x5c) {
          pSVar8 = (this->fields)._buffer;
          if (pSVar8 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,0x5c,(MethodInfo *)0x0);
        }
        else if (uVar1 == 0x62) {
          pSVar8 = (this->fields)._buffer;
          if (pSVar8 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,8,(MethodInfo *)0x0);
        }
        else if (uVar1 == 0x66) {
          pSVar8 = (this->fields)._buffer;
          if (pSVar8 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,0xc,(MethodInfo *)0x0);
        }
        else {
          if (uVar1 != 0x6e) {
            args = (Object__Array *)func_?(TypeInfo__System__Object);
            arg1 = (Object *)func_?(TypeInfo__System__Char,&stack0xfffffff0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar6 = mscorlib.dll::System::String::String_Concat
                               ((Object *)::StringLiteral__,arg1,(MethodInfo *)0x0);
            func_?(args);
            func_?(args,pSVar6);
            pMStack_2 = (MethodInfo *)0x0;
            func_?();
            func_?();
            pIStack_4 = (Int32__Class *)&pIStack_4;
            pIVar9 = (Int32__Class *)func_?();
            func_?(args,0);
            func_?(args,pIVar9);
            pIStack_4 = pIVar9;
            func_?();
            pMStack_2 = (MethodInfo *)func_?();
            uVar3 = func_?(TypeInfo__System__Int32,&pMStack_2);
            func_?(args,0);
            func_?(args,uVar3);
            func_?(2,uVar3);
            pSVar6 = StringLiteral_Bad_JSON_escape_sequence___0___L;
            goto code_?;
          }
          pSVar8 = (this->fields)._buffer;
          if (pSVar8 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,10,(MethodInfo *)0x0);
        }
        break;
      case 0x74:
        pSVar8 = (this->fields)._buffer;
        if (pSVar8 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,9,(MethodInfo *)0x0);
        break;
      case 0x75:
        val = (Char__Array *)func_?(TypeInfo__System__Char);
        pIVar9 = (Int32__Class *)0x0;
        while( true ) {
          if (val == (Char__Array *)0x0) goto code_?;
          if ((int)val->max_length <= (int)pIVar9) break;
          uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
          pMStack_2 = (MethodInfo *)(uint)uVar1;
          if ((uVar1 == 0) && ((this->fields)._end != 0)) {
            pMStack_2 = (MethodInfo *)0x2;
            pIStack_4 = (Int32__Class *)TypeInfo__System__Object;
            args = (Object__Array *)func_?();
            func_?();
            pMStack_2 = (MethodInfo *)&stack0xfffffff0;
            pIStack_4 = TypeInfo__System__Int32;
            pMVar10 = (MethodInfo *)func_?();
            func_?(args);
            func_?(args,pMVar10);
            pIStack_4 = (Int32__Class *)0x0;
            pMStack_2 = pMVar10;
            func_?();
            pIStack_4 = (Int32__Class *)func_?();
            uVar3 = func_?(TypeInfo__System__Int32);
            func_?(args,0);
            func_?(args,uVar3);
            func_?(1);
            pSVar6 = StringLiteral_Unexpected_end_while_parsing_uni;
            goto code_?;
          }
          pIStack_4 = pIVar9;
          func_?();
          pIVar9 = (Int32__Class *)((int)&(pIVar9->_0).image + 1);
        }
        pSVar6 = mscorlib.dll::System::String::String_CreateString_6
                           ((String *)0x0,val,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Globalization__NumberFormatInfo->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__System__Globalization__NumberFormatInfo->_1).cctor_started == 0)) {
          func_?();
        }
        provider = mscorlib.dll::System::Globalization::NumberFormatInfo::
                   NumberFormatInfo_get_InvariantInfo((MethodInfo *)0x0);
        value = mscorlib.dll::System::Int32::Int32_Parse_4
                          (pSVar6,NumberStyles__Enum_HexNumber,(IFormatProvider *)provider,
                           (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Convert);
        }
        uVar1 = mscorlib.dll::System::Convert::Convert_ToChar_1(value,(MethodInfo *)0x0);
        pSVar8 = (this->fields)._buffer;
        if (pSVar8 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,uVar1,(MethodInfo *)0x0);
      }
      goto code_?;
    }
    pSVar8 = (this->fields)._buffer;
    if (pSVar8 == (StringBuffer *)0x0) goto code_?;
    Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,uVar1,(MethodInfo *)0x0);
  } while( true );
}


/* Boolean ValidIdentifierChar(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ValidIdentifierChar
               (JsonTextReader *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Char->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Char);
  }
  bVar1 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(value,(MethodInfo *)0x0);
  if ((bVar1 == 0) && (value != 0x5f)) {
    return value == 0x24;
  }
  return 1;
}


/* JsonTextReader(TextReader) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader__ctor
               (JsonTextReader *this,TextReader *reader,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  JsonReader::JsonReader__ctor((JsonReader *)this,(MethodInfo *)0x0);
  if (reader != (TextReader *)0x0) {
    (this->fields)._reader = reader;
    this_00 = (StringBuffer *)func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    Json::Utilities::StringBuffer::StringBuffer__ctor_1(this_00,0x1000,(MethodInfo *)0x0);
    (this->fields)._buffer = this_00;
    (this->fields)._currentLineNumber = 1;
    return;
  }
  this_01 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_01,StringLiteral_reader,(MethodInfo *)0x0);
  func_?(this_01);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CultureInfo get_Culture() */

CultureInfo *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_get_Culture
          (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._culture;
  if (pCVar1 == (CultureInfo *)0x0) {
    if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    pCVar1 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_CurrentCulture
                       ((MethodInfo *)0x0);
  }
  return pCVar1;
}


/* Int32 get_LineNumber() */

int32_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_get_LineNumber
                  (JsonTextReader *this,MethodInfo *method)

{
  if ((this->fields)._._currentState != 0) {
    return (this->fields)._currentLineNumber;
  }
  return 0;
}

