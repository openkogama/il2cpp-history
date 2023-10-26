
/* Void Close() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_Close
               (JsonTextReader *this,MethodInfo *method)

{
  (this->fields)._._currentState = 7;
  (this->fields)._._token = 0;
  (this->fields)._._value = (Object *)0x0;
  func_?(&(this->fields)._._value,0);
  (this->fields)._._valueType = (Type *)0x0;
  func_?(&(this->fields)._._valueType,0);
  if (((this->fields)._._CloseInput_k__BackingField != 0) &&
     ((this->fields)._reader != (TextReader *)0x0)) {
    pTVar1 = (this->fields)._reader;
    pTVar2 = pTVar1->klass;
    (*(pTVar2->vtable).Close.methodPtr)(pTVar1,(pTVar2->vtable).Close.method);
  }
  if ((this->fields)._buffer != (StringBuffer *)0x0) {
    Json::Utilities::StringBuffer::StringBuffer_Clear((this->fields)._buffer,(MethodInfo *)0x0);
  }
  return;
}


/* JsonReaderException CreateJsonReaderException(String, Object[]) */

JsonReaderException *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_CreateJsonReaderException
          (JsonTextReader *this,String *format,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__Newtonsoft__Json__JsonReaderException);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  message = Json::Utilities::StringUtils::StringUtils_FormatWith
                      (format,(IFormatProvider *)provider,args,(MethodInfo *)0x0);
  iVar1 = (this->fields)._currentLinePosition;
  iVar2 = (this->fields)._currentLineNumber;
  pJVar3 = (JsonReaderException *)func_?(TypeInfo__Newtonsoft__Json__JsonReaderException);
  if (pJVar3 != (JsonReaderException *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Exception::Exception__ctor_2
              ((Exception *)pJVar3,message,(Exception *)0x0,(MethodInfo *)0x0);
    (pJVar3->fields)._LinePosition_k__BackingField = iVar1;
    (pJVar3->fields)._LineNumber_k__BackingField = iVar2;
    return pJVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pJVar3 = (JsonReaderException *)(*pcVar4)();
  return pJVar3;
}


/* Boolean EatWhitespace(Char, Boolean, Char ByRef) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_EatWhitespace
               (JsonTextReader *this,uint16_t initialChar,bool oneOrMore,uint16_t *finalChar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  uVar2 = (uint)initialChar;
  while( true ) {
    c = (uint16_t)uVar2;
    if (c != 0x20) {
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar3 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        *finalChar = c;
        return oneOrMore ^ 1 | bVar1;
      }
    }
    pTVar4 = (this->fields)._reader;
    if (pTVar4 == (TextReader *)0x0) break;
    uVar2 = (*(pTVar4->klass->vtable).Read.methodPtr)(pTVar4,(pTVar4->klass->vtable).Read.method);
    if (uVar2 == 0xffffffff) {
      (this->fields)._end = 1;
      uVar2 = 0;
      bVar1 = 1;
    }
    else if (uVar2 == 10) {
      piVar5 = &(this->fields)._currentLineNumber;
      *piVar5 = *piVar5 + 1;
      bVar1 = 1;
      uVar2 = 10;
      (this->fields)._currentLinePosition = 0;
    }
    else if (uVar2 == 0xd) {
      pTVar4 = (this->fields)._reader;
      if (pTVar4 == (TextReader *)0x0) break;
      iVar6 = (*(pTVar4->klass->vtable).Peek.methodPtr)(pTVar4,(pTVar4->klass->vtable).Peek.method);
      if (iVar6 == 10) {
        pTVar4 = (this->fields)._reader;
        if (pTVar4 == (TextReader *)0x0) break;
        (*(pTVar4->klass->vtable).Read.methodPtr)(pTVar4,(pTVar4->klass->vtable).Read.method);
      }
      piVar5 = &(this->fields)._currentLineNumber;
      *piVar5 = *piVar5 + 1;
      bVar1 = 1;
      uVar2 = 0xd;
      (this->fields)._currentLinePosition = 0;
    }
    else {
      piVar5 = &(this->fields)._currentLinePosition;
      *piVar5 = *piVar5 + 1;
      uVar2 = uVar2 & 0xffff;
      bVar1 = 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Boolean HasNext() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_HasNext
               (JsonTextReader *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTStack_2 = (this->fields)._reader;
  if (pTStack_2 != (TextReader *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).Peek.method;
    iVar3 = (*(pTStack_2->klass->vtable).Peek.methodPtr)();
    return iVar3 != -1;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean IsSeperator(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_IsSeperator
               (JsonTextReader *this,uint16_t c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if (c < 0x2a) {
    switch(c) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
      goto code_?;
    default:
      if (c != 0x20) {
        if (c != 0x29) goto code_?;
        if (((this->fields)._._currentState != 10) && ((this->fields)._._currentState != 9)) {
          return 0;
        }
      }
    }
  }
  else if (c < 0x30) {
    if (c != 0x2c) {
      if (c == 0x2f) {
        bVar1 = JsonTextReader_HasNext(this,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 0;
        }
        pTVar2 = JsonValidatingReader::JsonValidatingReader_get_ValueType
                           ((JsonValidatingReader *)this,(MethodInfo *)0x0);
        return pTVar2 == (Type *)0x2a;
      }
      goto code_?;
    }
  }
  else if ((c != 0x5d) && (c != 0x7d)) {
code_?:
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Char);
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  return 1;
}


/* Boolean MatchValue(Char, String) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MatchValue
               (JsonTextReader *this,uint16_t firstChar,String *value,MethodInfo *method)

{
  index = 0;
  if (value == (String *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  do {
    uVar3 = mscorlib.dll::System::String::String_get_Chars(value,index,(MethodInfo *)0x0);
    if (firstChar != uVar3) break;
    index = index + 1;
    iVar4 = (value->fields)._stringLength;
    if (iVar4 <= index) {
      return index == iVar4;
    }
    firstChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  } while ((firstChar != 0) || ((this->fields)._end == 0));
  return index == (value->fields)._stringLength;
}


/* Boolean MatchValue(Char, String, Boolean) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MatchValue_1
               (JsonTextReader *this,uint16_t firstChar,String *value,
               bool noTrailingNonSeperatorCharacters,MethodInfo *method)

{
  index = 0;
  if (value == (String *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  do {
    uVar3 = mscorlib.dll::System::String::String_get_Chars(value,index,(MethodInfo *)0x0);
    if ((firstChar != uVar3) || (index = index + 1, (value->fields)._stringLength <= index)) break;
    firstChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  } while ((firstChar != 0) || ((this->fields)._end == 0));
  iVar4 = (value->fields)._stringLength;
  bVar5 = index == iVar4;
  if (noTrailingNonSeperatorCharacters != 0) {
    pTVar6 = (this->fields)._reader;
    if (pTVar6 == (TextReader *)0x0) goto code_?;
    iVar7 = (*(pTVar6->klass->vtable).Peek.methodPtr)(pTVar6,(pTVar6->klass->vtable).Peek.method);
    if (iVar7 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint16_t)iVar7;
    }
    if (index == iVar4) {
      if (uVar3 != 0) {
        bVar2 = JsonTextReader_IsSeperator(this,uVar3,(MethodInfo *)0x0);
        return bVar2;
      }
      return 1;
    }
    bVar5 = false;
  }
  return bVar5;
}


/* Char MoveNext() */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_MoveNext
                   (JsonTextReader *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._reader;
  if (pTVar1 != (TextReader *)0x0) {
    iVar2 = (*(pTVar1->klass->vtable).Read.methodPtr)(pTVar1,(pTVar1->klass->vtable).Read.method);
    if (iVar2 == -1) {
      (this->fields)._end = 1;
      return 0;
    }
    if (iVar2 != 10) {
      if (iVar2 != 0xd) {
        piVar3 = &(this->fields)._currentLinePosition;
        *piVar3 = *piVar3 + 1;
        return (uint16_t)iVar2;
      }
      pTVar1 = (this->fields)._reader;
      if (pTVar1 == (TextReader *)0x0) goto code_?;
      iVar4 = (*(pTVar1->klass->vtable).Peek.methodPtr)(pTVar1,(pTVar1->klass->vtable).Peek.method);
      if (iVar4 == 10) {
        pTVar1 = (this->fields)._reader;
        if (pTVar1 == (TextReader *)0x0) goto code_?;
        (*(pTVar1->klass->vtable).Read.methodPtr)(pTVar1,(pTVar1->klass->vtable).Read.method);
      }
    }
    piVar3 = &(this->fields)._currentLineNumber;
    *piVar3 = *piVar3 + 1;
    (this->fields)._currentLinePosition = 0;
    return (uint16_t)iVar2;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  uVar6 = (*pcVar5)();
  return uVar6;
}


/* Void ParseComment() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseComment
               (JsonTextReader *this,MethodInfo *method)

{
  this_00 = this;
  uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  pJVar2 = this;
  if (uVar1 == 0x2a) {
code_?:
    uVar1 = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
    pJVar2 = this_00;
    if ((uVar1 == 0) && ((this_00->fields)._end != 0)) goto code_?;
    if (uVar1 == 0x2a) goto code_?;
    if ((this_00->fields)._buffer != (StringBuffer *)0x0) goto code_?;
    goto code_?;
  }
code_?:
  uVar3 = func_?(&TypeInfo__System__Object,2);
  args = (Object__Array *)func_?(uVar3);
  uVar3 = func_?(&TypeInfo__System__Int32,&stack0xfffffff8);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(0,uVar3);
  uVar3 = func_?(&TypeInfo__System__Int32,&stack0xfffffff4);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(1,uVar3);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_comment__Expected_);
  pJVar4 = JsonTextReader_CreateJsonReaderException(pJVar2,format,args,method_00);
  uVar3 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseComment__);
  func_?(pJVar4,uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_?:
  uVar1 = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
  if ((uVar1 == 0) && ((this_00->fields)._end != 0)) goto code_?;
  if ((JsonTextReader *)(uint)uVar1 != (JsonTextReader *)0x2f) {
    pSVar6 = (this_00->fields)._buffer;
    if (pSVar6 == (StringBuffer *)0x0) goto code_?;
    Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,0x2a,(MethodInfo *)0x0);
    unaff_retaddr = (this_00->fields)._buffer;
    if (unaff_retaddr == (StringBuffer *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    this = (JsonTextReader *)(uint)uVar1;
code_?:
    Json::Utilities::StringBuffer::StringBuffer_Append(unaff_retaddr,(uint16_t)this,method);
    goto code_?;
  }
code_?:
  pSVar6 = (this_00->fields)._buffer;
  if (pSVar6 != (StringBuffer *)0x0) {
    pSVar7 = pSVar6->klass;
    pJVar2 = (JsonTextReader *)(pSVar7->vtable).ToString.method;
    (*(pSVar7->vtable).ToString.methodPtr)();
    (*(this_00->klass->vtable).SetToken.methodPtr)();
    pSVar6 = (this_00->fields)._buffer;
    if (pSVar6 != (StringBuffer *)0x0) {
      (pSVar6->fields)._position = 0;
      return;
    }
  }
code_?:
  func_?();
  goto code_?;
}


/* Void ParseConstructor() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseConstructor
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&StringLiteral_new);
    cRam_? = '\x01';
  }
  bVar1 = JsonTextReader_MatchValue_1(this,0x6e,StringLiteral_new,1,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)(uint)uVar2;
    bVar1 = JsonTextReader_EatWhitespace(this,uVar2,1,(uint16_t *)&stack0xfffffff8,pMVar3);
    if (bVar1 != 0) {
      while( true ) {
        c = (uint16_t)pMVar3;
        uVar2 = c;
        if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::Char::Char_IsLetter(c,(MethodInfo *)0x0);
        if (bVar1 == 0) break;
        pSVar4 = (this->fields)._buffer;
        if (pSVar4 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar4,c,(MethodInfo *)0x0);
        uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)(uint)uVar2;
      }
      JsonTextReader_EatWhitespace(this,c,0,(uint16_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (uVar2 == 0x28) {
        pSVar4 = (this->fields)._buffer;
        if (pSVar4 != (StringBuffer *)0x0) {
          pSVar5 = pSVar4->klass;
          pMStack6 = (pSVar5->vtable).ToString.method;
          (*(pSVar5->vtable).ToString.methodPtr)();
          pSVar4 = (this->fields)._buffer;
          if (pSVar4 != (StringBuffer *)0x0) {
            (pSVar4->fields)._position = 0;
            pMStack6 = (this->klass->vtable).SetToken.method;
            (*(this->klass->vtable).SetToken.methodPtr)();
            return;
          }
        }
      }
      else {
        func_?();
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
        func_?();
        pMVar3 = (MethodInfo *)0x0;
        format = (String *)func_?();
        JsonTextReader_CreateJsonReaderException(this,format,args,pMVar3);
        func_?();
        func_?();
      }
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
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
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if (text != (String *)0x0) {
    this_00 = mscorlib.dll::System::String::String_Substring_1
                        (text,6,(text->fields)._stringLength + -8,(MethodInfo *)0x0);
    pSVar1 = (String *)0x1;
    if (this_00 != (String *)0x0) {
      startIndex = mscorlib.dll::System::String::String_IndexOf_1(this_00,0x2b,1,(MethodInfo *)0x0);
      if (startIndex == -1) {
        startIndex = mscorlib.dll::System::String::String_IndexOf_1
                               (this_00,0x2d,1,(MethodInfo *)0x0);
      }
      iVar2 = startIndex;
      if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar3 = (undefined4)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks;
      text = *(String **)((int)&(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks + 4);
      if (startIndex != -1) {
        pSVar1 = (String *)0x2;
        this_01 = mscorlib.dll::System::String::String_Substring
                            (this_00,startIndex,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if (this_01 == (String *)0x0) goto code_?;
        uVar4 = mscorlib.dll::System::String::String_get_Chars(this_01,0,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Substring_1(this_01,1,2,(MethodInfo *)0x0);
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        pCVar6 = (CultureInfo *)
                 mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar5,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar6,
                            (MethodInfo *)0x0);
        if ((this_01->fields)._stringLength < 5) {
          uVar7 = (uint)(uVar4 == 0x2d);
        }
        else {
          iVar2 = 3;
          pSVar5 = mscorlib.dll::System::String::String_Substring_1(this_01,3,2,(MethodInfo *)0x0);
          pSVar1 = this_01;
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            pSVar1 = this_01;
          }
          pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          uVar7 = 7;
          mscorlib.dll::System::Int32::Int32_Parse_2
                    (pSVar5,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar6,(MethodInfo *)0x0);
        }
        if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        text = SUB84((double)(int)pCVar6,0);
        this = (JsonTextReader *)&UNK_?;
        TVar8 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours
                          ((double)(int)pCVar6,(MethodInfo *)0x0);
        TVar9 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                          ((double)(int)text,(MethodInfo *)0x0);
        TVar8 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar8,TVar9,(MethodInfo *)0x0);
        if (uVar7 != 0) {
          TVar8 = mscorlib.dll::System::TimeSpan::TimeSpan_Negate
                            ((TimeSpan *)&stack0xffffffd0,(MethodInfo *)0x0);
        }
        text = (String *)((ulonglong)TVar8._ticks >> 0x20);
        uVar3 = (undefined4)TVar8._ticks;
        this_00 = mscorlib.dll::System::String::String_Substring_1
                            (this_00,0,iVar2,(MethodInfo *)0x0);
      }
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar6 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      iVar10 = mscorlib.dll::System::Int64::Int64_Parse_1
                        (this_00,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar6,
                         (MethodInfo *)0x0);
      kind = (DateTimeKind__Enum)((ulonglong)iVar10 >> 0x20);
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar11 = TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->InitialJavaScriptDateTicks;
      iVar2 = *(int *)((int)&TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                              InitialJavaScriptDateTicks + 4);
      uVar12 = func_?();
      mscorlib.dll::System::DateTime::DateTime__ctor_2
                ((DateTime *)&stack0xfffffff0,
                 CONCAT44((int)iVar10,
                          (int)((ulonglong)uVar12 >> 0x20) + iVar2 +
                          (uint)CARRY4((uint)uVar12,(uint)iVar11)),kind,(MethodInfo *)0x2710);
      if ((this->fields)._readType != 3) {
        if (pSVar1 == (String *)0x2) {
          mscorlib.dll::System::DateTime::DateTime_ToLocalTime
                    ((DateTime *)&stack0xffffffd8,(MethodInfo *)0x0);
        }
        func_?();
        (*(this->klass->vtable).SetToken.methodPtr)();
        return;
      }
      TVar8._ticks._4_4_ = 0;
      TVar8._ticks._0_4_ = text;
      mscorlib.dll::System::DateTime::DateTime_Add
                ((DateTime *)&stack0xffffffd8,TVar8,in_stack_13);
      iVar10 = mscorlib.dll::System::DateTime::DateTime_get_Ticks
                        ((DateTime *)&stack0xffffffc0,(MethodInfo *)0x0);
      TVar9._ticks._4_4_ = 0;
      TVar9._ticks._0_4_ = text;
      mscorlib.dll::System::DateTimeOffset::DateTimeOffset__ctor
                ((DateTimeOffset *)&stack0xffffffc8,CONCAT44(uVar3,(int)((ulonglong)iVar10 >> 0x20))
                 ,TVar9,in_stack_14);
      func_?();
      (*(this->klass->vtable).SetToken.methodPtr)();
      return;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ParseFalse() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseFalse
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x66,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pppppuStack_c = (undefined4 *****)&uStack_2;
    uStack_2 = 0;
    pBStack_3 = TypeInfo__System__Boolean;
    uVar4 = func_?();
    (*(this->klass->vtable).SetToken.methodPtr)(this,10,uVar4,(this->klass->vtable).SetToken.method)
    ;
    return;
  }
  pppppuStack_c = (undefined4 *****)0x2;
  pBStack_3 = (Boolean__Class *)&TypeInfo__System__Object;
  pBStack_3 = (Boolean__Class *)func_?();
  args = (Object__Array *)func_?();
  pppppuStack_c = &pppppuStack_c;
  pBStack_3 = (Boolean__Class *)&TypeInfo__System__Int32;
  pBStack_3 = (Boolean__Class *)func_?();
  pppppuVar4 = (undefined4 *****)func_?();
  func_?(args);
  func_?(args,pppppuVar4);
  pBStack_3 = (Boolean__Class *)0x0;
  pppppuStack_c = pppppuVar4;
  func_?();
  pBStack_3 = (Boolean__Class *)(this->fields)._currentLinePosition;
  uVar4 = func_?(&TypeInfo__System__Int32,&pBStack_3);
  uVar4 = func_?(uVar4);
  func_?(args);
  func_?(args,uVar4);
  func_?(1,uVar4);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_boolean_value__Lin);
  pBVar5 = (Boolean__Class *)JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
  pppppuStack_c =
       (undefined4 *****)
       func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseFalse__);
  pBStack_3 = pBVar5;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ParseNull() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseNull
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x6e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (this->klass->vtable).SetToken.method;
    pJStack_3 = (JsonReaderException *)0x0;
    (*(this->klass->vtable).SetToken.methodPtr)(this,0xb);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pJStack_3 = (JsonReaderException *)&TypeInfo__System__Object;
  pJStack_3 = (JsonReaderException *)func_?();
  args = (Object__Array *)func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pJStack_3 = (JsonReaderException *)&TypeInfo__System__Int32;
  pJStack_3 = (JsonReaderException *)func_?();
  pMVar4 = (MethodInfo *)func_?();
  func_?(args);
  func_?(args,pMVar4);
  pJStack_3 = (JsonReaderException *)0x0;
  pMStack_2 = pMVar4;
  func_?();
  pJStack_3 = (JsonReaderException *)(this->fields)._currentLinePosition;
  uVar5 = func_?(&TypeInfo__System__Int32,&pJStack_3);
  uVar5 = func_?(uVar5);
  func_?(args);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pMVar4 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_null_value__Line__);
  pJVar6 = JsonTextReader_CreateJsonReaderException(this,format,args,pMVar4);
  pMStack_2 = (MethodInfo *)
              func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNull__);
  pJStack_3 = pJVar6;
  func_?();
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
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  c = firstChar;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__System__Int64);
    func_?(&MethodInfo__System__Nullable<wchar_t>__Nullable_wchar_t_);
    func_?(&StringLiteral_e);
    func_?(&StringLiteral__0_);
    func_?(&StringLiteral__0x);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  do {
    puStack_4 = puVar5;
    bVar6 = JsonTextReader_IsSeperator(this,c,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      uStack_7 = (double)((ulonglong)uStack_7 & 0xffffffff);
      mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16___ctor
                ((Nullable_1_UInt16_ *)((int)&uStack_7 + 4),c,
                 MethodInfo__System__Nullable<wchar_t>__Nullable_wchar_t_);
      (this->fields)._lastChar = uStack_7._4_4_;
      break;
    }
    pSVar8 = (this->fields)._buffer;
    if (pSVar8 == (StringBuffer *)0x0) goto code_?;
    Json::Utilities::StringBuffer::StringBuffer_Append(pSVar8,c,(MethodInfo *)0x0);
    c = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    puVar5 = puStack_4;
  } while ((c != 0) || ((this->fields)._end == 0));
  pSVar8 = (this->fields)._buffer;
  if (pSVar8 != (StringBuffer *)0x0) {
    this_00 = (String *)(*(pSVar8->klass->vtable).ToString.methodPtr)();
    uStack_7 = (double)CONCAT44(this_00,(undefined4)uStack_7);
    if (firstChar == 0x30) {
      if (this_00 == (String *)0x0) goto code_?;
      bVar6 = mscorlib.dll::System::String::String_StartsWith_1
                        (this_00,StringLiteral__0_,StringComparison__Enum_OrdinalIgnoreCase,
                         (MethodInfo *)0x0);
      bVar9 = bVar6 == 0;
    }
    else {
      bVar9 = false;
    }
    if ((this->fields)._readType == 2) {
      if (bVar9) {
        if (this_00 == (String *)0x0) goto code_?;
        bVar6 = mscorlib.dll::System::String::String_StartsWith_1
                          (this_00,StringLiteral__0x,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0);
        if (bVar6 == 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVar10 = 8;
        }
        else {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVar10 = 0x10;
        }
        uVar11 = mscorlib.dll::System::Convert::Convert_ToInt64_15(this_00,iVar10,(MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToDecimal_8
                  ((Decimal *)&stack0xffffffbc,uVar11 >> 0x20,in_stack_12);
        func_?();
      }
      else {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Decimal::Decimal_Parse_1
                  ((Decimal *)&stack0xffffffac,this_00,
                   NumberStyles__Enum_AllowExponent|NumberStyles__Enum_Number,
                   (IFormatProvider *)pCVar13,(MethodInfo *)0x0);
        func_?();
      }
    }
    else {
      if (this_00 == (String *)0x0) goto code_?;
      if (bVar9) {
        bVar6 = mscorlib.dll::System::String::String_StartsWith_1
                          (this_00,StringLiteral__0x,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0);
        if (bVar6 == 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVar10 = 8;
        }
        else {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          iVar10 = 0x10;
        }
        mscorlib.dll::System::Convert::Convert_ToInt64_15(this_00,iVar10,(MethodInfo *)0x0);
        func_?();
      }
      else {
        iVar10 = mscorlib.dll::System::String::String_IndexOf_4
                          (this_00,::StringLiteral__,StringComparison__Enum_OrdinalIgnoreCase,
                           (MethodInfo *)0x0);
        if ((iVar10 == -1) &&
           (iVar10 = mscorlib.dll::System::String::String_IndexOf_4
                              (this_00,StringLiteral_e,StringComparison__Enum_OrdinalIgnoreCase,
                               (MethodInfo *)0x0), iVar10 == -1)) {
          uStack_1 = 0;
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt64_14
                    (this_00,(IFormatProvider *)pCVar13,(MethodInfo *)0x0);
          uStack_7 = (double)CONCAT44(uStack_7._4_4_,&puStack_14);
          _puStack_24 = CONCAT44(TypeInfo__System__Int64,&UNK_?);
          func_?();
          uStack_1 = 0xffffffff;
        }
        else {
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar13 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          uStack_7 = mscorlib.dll::System::Convert::Convert_ToDouble_11
                                (this_00,(IFormatProvider *)pCVar13,(MethodInfo *)0x0);
          func_?();
        }
      }
    }
    pSVar8 = (this->fields)._buffer;
    if (pSVar8 != (StringBuffer *)0x0) {
      (pSVar8->fields)._position = 0;
      (*(this->klass->vtable).SetToken.methodPtr)();
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  return;
}


/* Void ParseNumberNaN() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseNumberNaN
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x4e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(this->klass->vtable).SetToken.methodPtr)(this,8,uVar3,(this->klass->vtable).SetToken.method);
    return;
  }
  uStack_2._4_4_ = (int32_t *)0x2;
  uStack_2._0_4_ = (Int32__Class **)&TypeInfo__System__Object;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  args = (Object__Array *)func_?();
  iStack_4 = (this->fields)._currentLineNumber;
  uStack_2._4_4_ = &iStack_4;
  uStack_2._0_4_ = &TypeInfo__System__Int32;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  uVar5 = func_?();
  func_?(args);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uStack_2 = CONCAT44((this->fields)._currentLinePosition,(Int32__Class **)uStack_2);
  uVar3 = func_?(&TypeInfo__System__Int32,(int)&uStack_2 + 4);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(1,uVar3);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_NaN_value__Line__0);
  pJVar6 = JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
  uVar3 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberNaN__);
  uStack_2 = CONCAT44(uVar3,pJVar6);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseNumberNegativeInfinity() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::
     JsonTextReader_ParseNumberNegativeInfinity(JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x2d,
                     TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NegativeInfinity,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(this->klass->vtable).SetToken.methodPtr)(this,8,uVar3,(this->klass->vtable).SetToken.method);
    return;
  }
  uStack_2._4_4_ = (int32_t *)0x2;
  uStack_2._0_4_ = (Int32__Class **)&TypeInfo__System__Object;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  args = (Object__Array *)func_?();
  iStack_4 = (this->fields)._currentLineNumber;
  uStack_2._4_4_ = &iStack_4;
  uStack_2._0_4_ = &TypeInfo__System__Int32;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  uVar5 = func_?();
  func_?(args);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uStack_2 = CONCAT44((this->fields)._currentLinePosition,(Int32__Class **)uStack_2);
  uVar3 = func_?(&TypeInfo__System__Int32,(int)&uStack_2 + 4);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(1,uVar3);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_negative_infinity_);
  pJVar6 = JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberNegativeInfinity__
                         );
  uStack_2 = CONCAT44(uVar3,pJVar6);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ParseNumberPositiveInfinity() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::
     JsonTextReader_ParseNumberPositiveInfinity(JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Double);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x49,
                     TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->PositiveInfinity,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    uStack_2 = _UNK_?;
    uVar3 = func_?();
    (*(this->klass->vtable).SetToken.methodPtr)(this,8,uVar3,(this->klass->vtable).SetToken.method);
    return;
  }
  uStack_2._4_4_ = (int32_t *)0x2;
  uStack_2._0_4_ = (Int32__Class **)&TypeInfo__System__Object;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  args = (Object__Array *)func_?();
  iStack_4 = (this->fields)._currentLineNumber;
  uStack_2._4_4_ = &iStack_4;
  uStack_2._0_4_ = &TypeInfo__System__Int32;
  uVar3 = func_?();
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  uVar5 = func_?();
  func_?(args);
  func_?(args,uVar5);
  uStack_2 = (ulonglong)uVar5 << 0x20;
  func_?();
  uStack_2 = CONCAT44((this->fields)._currentLinePosition,(Int32__Class **)uStack_2);
  uVar3 = func_?(&TypeInfo__System__Int32,(int)&uStack_2 + 4);
  uVar3 = func_?(uVar3);
  func_?(args);
  func_?(args,uVar3);
  func_?(1,uVar3);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_positive_infinity_);
  pJVar6 = JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
  uVar3 = func_?(&
                          MethodInfo__Newtonsoft__Json__JsonTextReader__ParseNumberPositiveInfinity__
                         );
  uStack_2 = CONCAT44(uVar3,pJVar6);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ParseObject(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseObject
               (JsonTextReader *this,uint16_t currentChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  do {
    if (currentChar < 0x21) {
      switch(currentChar) {
      case 9:
      case 10:
      case 0xd:
        break;
      case 0xb:
      case 0xc:
        goto code_?;
      default:
        if (currentChar != 0x20) goto code_?;
      }
    }
    else {
      if (currentChar == 0x2f) {
        JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
        return 1;
      }
      if (currentChar == 0x7d) {
        (*(this->klass->vtable).SetToken.methodPtr)
                  (this,0xd,0,(this->klass->vtable).SetToken.method);
        return 1;
      }
code_?:
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = JsonTextReader_ParseProperty(this,currentChar,(MethodInfo *)0x0);
        return bVar1;
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
  pJVar1 = _currentChar;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    pJVar1 = _currentChar;
  }
  while (c = (ushort)pJVar1, c < 0x2a) {
    switch((uint)pJVar1 & 0xffff) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
      goto code_?;
    default:
      if (c != 0x20) {
        if (c == 0x29) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
        goto code_?;
      }
    }
code_?:
    uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    pJVar1 = (JsonReaderException__Class *)(uint)uVar2;
    if ((uVar2 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  }
  if (c < 0x30) {
    if (c != 0x2c) {
      if (c == 0x2f) {
        JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
        return 1;
      }
      goto code_?;
    }
    pJVar1 = (JsonReaderException__Class *)(this->fields)._._currentTypeContext;
    switch(pJVar1) {
    case (JsonReaderException__Class *)0x0:
      (this->fields)._._currentState = 0xc;
      return 0;
    case (JsonReaderException__Class *)0x1:
      (this->fields)._._currentState = 4;
      return 0;
    case (JsonReaderException__Class *)0x2:
      (this->fields)._._currentState = 6;
      return 0;
    case (JsonReaderException__Class *)0x3:
      (this->fields)._._currentState = 10;
      return 0;
    default:
      func_?();
      func_?();
      this_00 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                          ((MethodInfo *)0x0);
      func_?();
      pOVar3 = (Object__Array *)func_?();
      _currentChar = pJVar1;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pMVar4 = (MethodInfo *)0x0;
      provider = this_00;
      pSVar5 = (String *)func_?();
      pJVar1 = (JsonReaderException__Class *)
                Json::Utilities::StringUtils::StringUtils_FormatWith
                          (pSVar5,(IFormatProvider *)provider,pOVar3,pMVar4);
      func_?();
      pJVar6 = (JsonReaderException *)func_?();
      func_?();
      JsonReaderException::JsonReaderException__ctor_1(pJVar6,(String *)pJVar1,(MethodInfo *)0x0);
      func_?();
      pJStack_7 = pJVar6;
      func_?();
    }
  }
  else {
    if (c == 0x5d) {
      (*(this->klass->vtable).SetToken.methodPtr)();
      return 1;
    }
    if (c == 0x7d) {
      (*(this->klass->vtable).SetToken.methodPtr)();
      return 1;
    }
code_?:
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
    this_00 = (CultureInfo *)this;
    if (bVar8 != 0) goto code_?;
  }
  func_?();
  pOVar3 = (Object__Array *)func_?();
  _currentChar = (JsonReaderException__Class *)((uint)pJVar1 & 0xffff);
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pJStack_7 = (JsonReaderException *)(this_00->fields).iso3lang;
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pSStack_9 = (this_00->fields).nativename;
  func_?();
  uVar10 = func_?();
  func_?();
  func_?(pOVar3,uVar10);
  func_?();
  pMVar4 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?(&StringLiteral_After_parsing_a_value_an_unexpec);
  JsonTextReader_CreateJsonReaderException((JsonTextReader *)this_00,pSVar5,pOVar3,pMVar4);
  func_?();
  bVar11 = (undefined1 *)0xffffffeb < &stack0xffffffcc;
  bVar12 = (POPCOUNT((uint)&stack0xffffffe0 & 0xff) & 1U) == 0;
  uVar13 = func_?();
  pJVar1 = _currentChar;
  iVar14 = (int)((ulonglong)uVar13 >> 0x20);
  if (!bVar12) {
    pbVar15 = (byte *)(iVar14 + 0x2e);
    bVar16 = (byte)((uint)this_00 >> 8);
    bVar12 = CARRY1(*pbVar15,bVar16) || CARRY1(*pbVar15 + bVar16,bVar11);
    *pbVar15 = *pbVar15 + bVar16 + bVar11;
    pbVar15 = (byte *)((int)&(this_00->fields).textInfo + 2);
    bVar11 = (byte)((ulonglong)uVar13 >> 0x20);
    bVar17 = CARRY1(*pbVar15,bVar11) || CARRY1(*pbVar15 + bVar11,bVar12);
    *pbVar15 = *pbVar15 + bVar11 + bVar12;
    pbVar15 = (byte *)((int)&(this_00->fields).textInfo + 2);
    bVar12 = CARRY1(*pbVar15,bVar11) || CARRY1(*pbVar15 + bVar11,bVar17);
    *pbVar15 = *pbVar15 + bVar11 + bVar17;
    pbVar15 = (byte *)(iVar14 + 0x2e);
    bVar17 = CARRY1(*pbVar15,bVar16) || CARRY1(*pbVar15 + bVar16,bVar12);
    *pbVar15 = *pbVar15 + bVar16 + bVar12;
    bVar12 = CARRY1(extraout_CH,bVar11) || CARRY1(extraout_CH + bVar11,bVar17);
    bVar18 = extraout_CH + bVar11 + bVar17;
    bVar16 = (byte)((ulonglong)uVar13 >> 8);
    bVar11 = bVar18 + bVar16;
    bVar19 = bVar11 + bVar12;
    bVar20 = (byte)((ulonglong)uVar13 >> 0x28);
    cRam_? = cRam_? + (char)uVar13 +
                   (CARRY1(bVar19,bVar20) ||
                   CARRY1(bVar19 + bVar20,CARRY1(bVar18,bVar16) || CARRY1(bVar11,bVar12)));
    pcVar21 = (code *)swi(3);
    bVar8 = (*pcVar21)();
    return bVar8;
  }
  bVar11 = in((short)((ulonglong)uVar13 >> 0x20));
  pcVar22 = (char *)CONCAT31((int3)((ulonglong)uVar13 >> 8),bVar11);
  pcVar22[-0xc7f20c3] = pcVar22[-0xc7f20c3] | bVar11;
  *pcVar22 = *pcVar22 + bVar11;
  uVar23 = (uint)_currentChar & 0xffff;
  if (*pcVar22 == '\0') {
    func_?(&TypeInfo__System__Char);
    uRam_? = 1;
  }
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Char);
  }
  uVar2 = (uint16_t)pJVar1;
  bVar8 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
  if (((bVar8 == 0) && (uVar2 != 0x5f)) && (uVar23 != 0x24)) {
    if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
      uVar23 = (uint)pJVar1 & 0xffff;
      JsonTextReader_ReadStringIntoBuffer(this,uVar2,(MethodInfo *)0x0);
      uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    uVar23 = 0;
    uVar2 = JsonTextReader_ParseUnquotedProperty(this,uVar2,(MethodInfo *)0x0);
code_?:
    if (uVar2 != 0x3a) {
      uVar2 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      _currentChar = (JsonReaderException__Class *)(uint)uVar2;
      JsonTextReader_EatWhitespace(this,uVar2,0,&currentChar,(MethodInfo *)0x0);
      pOVar3 = (Object__Array *)this;
      pJVar1 = _currentChar;
      if ((short)_currentChar != 0x3a) goto code_?;
    }
    pJVar24 = (JsonReaderException__Class *)(this->fields)._buffer;
    if (pJVar24 != (JsonReaderException__Class *)0x0) {
      (*(((JsonReaderException__Class *)(pJVar24->_0).image)->vtable).ToString.methodPtr)();
      (*(this->klass->vtable).SetToken.methodPtr)(this);
      pJVar1 = pJVar24;
      (*(this->klass->vtable).set_QuoteChar.methodPtr)
                (this,uVar23,(this->klass->vtable).set_QuoteChar.method);
      pSVar25 = (this->fields)._buffer;
      if (pSVar25 != (StringBuffer *)0x0) {
        (pSVar25->fields)._position = 0;
        return 1;
      }
    }
    func_?();
  }
  func_?();
  pOVar3 = (Object__Array *)func_?();
  _currentChar = (JsonReaderException__Class *)((uint)pJVar1 & 0xffff);
  func_?();
  uVar10 = func_?();
  func_?(pOVar3);
  func_?(pOVar3,uVar10);
  func_?();
  pJStack_7 = (JsonReaderException *)(this->fields)._currentLineNumber;
  uVar10 = func_?(&TypeInfo__System__Int32,&pJStack_7);
  uVar10 = func_?(uVar10);
  func_?(pOVar3);
  func_?(pOVar3,uVar10);
  func_?(1,uVar10);
  pSStack_9 = (String *)(this->fields)._currentLinePosition;
  uVar10 = func_?(&TypeInfo__System__Int32,&pSStack_9);
  uVar10 = func_?(uVar10);
  func_?(pOVar3);
  func_?(pOVar3,uVar10);
  func_?(2,uVar10);
  pMVar4 = (MethodInfo *)0x0;
  pOVar26 = pOVar3;
  pSVar5 = (String *)func_?(&StringLiteral_Invalid_property_identifier_char);
  pJVar1 = (JsonReaderException__Class *)
            JsonTextReader_CreateJsonReaderException(this,pSVar5,pOVar26,pMVar4);
  uVar10 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseProperty_wchar_t_);
  func_?(pJVar1,uVar10);
code_?:
  pJStack_7 = (JsonReaderException *)0x3;
  pSStack_9 = (String *)&TypeInfo__System__Object;
  pSStack_9 = (String *)func_?();
  pOVar26 = (Object__Array *)func_?();
  _currentChar = (JsonReaderException__Class *)((uint)pJVar1 & 0xffff);
  pJStack_7 = (JsonReaderException *)&currentChar;
  pSStack_9 = (String *)&TypeInfo__System__Char;
  pSStack_9 = (String *)func_?();
  pJVar6 = (JsonReaderException *)func_?();
  func_?();
  func_?();
  pSStack_9 = (String *)0x0;
  pJStack_7 = pJVar6;
  func_?();
  pSStack_9 = (String *)pOVar3->vector[0xb];
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pJStack_7 = (JsonReaderException *)pOVar3->vector[10];
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pMVar4 = (MethodInfo *)0x0;
  pSVar5 = (String *)func_?();
  JsonTextReader_CreateJsonReaderException((JsonTextReader *)pOVar3,pSVar5,pOVar26,pMVar4);
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  bVar8 = (*pcVar21)();
  return bVar8;
}


/* Boolean ParseProperty(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseProperty
               (JsonTextReader *this,uint16_t firstChar,MethodInfo *method)

{
  uVar1 = firstChar;
  pJVar2 = (JsonReaderException *)_firstChar;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Char);
  }
  bVar3 = mscorlib.dll::System::Char::Char_IsLetterOrDigit(uVar1,(MethodInfo *)0x0);
  if (((bVar3 == 0) && (uVar1 != 0x5f)) && (uVar1 != 0x24)) {
    if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
      uVar4 = (uint)uVar1;
      JsonTextReader_ReadStringIntoBuffer(this,uVar1,(MethodInfo *)0x0);
      uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    uVar4 = 0;
    uVar1 = JsonTextReader_ParseUnquotedProperty(this,uVar1,(MethodInfo *)0x0);
code_?:
    if (uVar1 != 0x3a) {
      uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      _firstChar = (Int32__Class **)(uint)uVar1;
      JsonTextReader_EatWhitespace(this,uVar1,0,&firstChar,(MethodInfo *)0x0);
      this_00 = (Object__Array *)this;
      pJVar2 = (JsonReaderException *)_firstChar;
      if ((short)_firstChar != 0x3a) goto code_?;
    }
    pJVar5 = (JsonReaderException *)(this->fields)._buffer;
    if (pJVar5 != (JsonReaderException *)0x0) {
      uVar6 = (*(pJVar5->klass->vtable).ToString.methodPtr)();
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,4,uVar6,(this->klass->vtable).SetToken.method);
      pJVar2 = pJVar5;
      (*(this->klass->vtable).set_QuoteChar.methodPtr)
                (this,uVar4,(this->klass->vtable).set_QuoteChar.method);
      pSVar7 = (this->fields)._buffer;
      if (pSVar7 != (StringBuffer *)0x0) {
        (pSVar7->fields)._position = 0;
        return 1;
      }
    }
    func_?();
  }
  uVar6 = func_?(&TypeInfo__System__Object,3);
  this_00 = (Object__Array *)func_?(uVar6);
  _firstChar = (Int32__Class **)((uint)pJVar2 & 0xffff);
  uVar6 = func_?(&TypeInfo__System__Char,&firstChar);
  uVar6 = func_?(uVar6);
  func_?(this_00);
  func_?(this_00,uVar6);
  func_?(0,uVar6);
  uVar6 = func_?(&TypeInfo__System__Int32,&stack0xfffffff8);
  uVar6 = func_?(uVar6);
  func_?(this_00);
  func_?(this_00,uVar6);
  func_?(1,uVar6);
  uVar6 = func_?(&TypeInfo__System__Int32,&stack0xfffffff4);
  uVar6 = func_?(uVar6);
  func_?(this_00);
  func_?(this_00,uVar6);
  func_?(2,uVar6);
  pMVar8 = (MethodInfo *)0x0;
  pOVar9 = this_00;
  pSVar10 = (String *)func_?(&StringLiteral_Invalid_property_identifier_char);
  pJVar2 = JsonTextReader_CreateJsonReaderException(this,pSVar10,pOVar9,pMVar8);
  uVar6 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseProperty_wchar_t_);
  func_?(pJVar2,uVar6);
code_?:
  puStack11 = (uint16_t *)0x3;
  ppCStack12 = (Char__Class **)&TypeInfo__System__Object;
  method = (MethodInfo *)&UNK_?;
  ppCStack12 = (Char__Class **)func_?();
  method = (MethodInfo *)&UNK_?;
  pOVar9 = (Object__Array *)func_?();
  _firstChar = (Int32__Class **)((uint)pJVar2 & 0xffff);
  puStack11 = &firstChar;
  ppCStack12 = &TypeInfo__System__Char;
  method = (MethodInfo *)&UNK_?;
  ppCStack12 = (Char__Class **)func_?();
  method = (MethodInfo *)&UNK_?;
  uVar6 = func_?();
  _firstChar = (Int32__Class **)&UNK_?;
  method = (MethodInfo *)pOVar9;
  func_?();
  _firstChar = (Int32__Class **)uVar6;
  func_?();
  ppCStack12 = (Char__Class **)0x0;
  method = (MethodInfo *)&UNK_?;
  puStack11 = (uint16_t *)uVar6;
  func_?();
  method = (MethodInfo *)&stack0xfffffff4;
  _firstChar = &TypeInfo__System__Int32;
  _firstChar = (Int32__Class **)func_?();
  pMVar8 = (MethodInfo *)func_?();
  func_?();
  func_?();
  _firstChar = (Int32__Class **)0x1;
  method = pMVar8;
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  pMVar8 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?();
  pJVar2 = JsonTextReader_CreateJsonReaderException((JsonTextReader *)this_00,pSVar10,pOVar9,pMVar8)
  ;
  method = (MethodInfo *)func_?();
  _firstChar = (Int32__Class **)pJVar2;
  func_?();
  pcVar13 = (code *)swi(3);
  bVar3 = (*pcVar13)();
  return bVar3;
}


/* Void ParseString(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseString
               (JsonTextReader *this,uint16_t quote,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__Date_);
    cRam_? = '\x01';
  }
  JsonTextReader_ReadStringIntoBuffer(this,quote,(MethodInfo *)0x0);
  pSVar1 = (this->fields)._buffer;
  if ((this->fields)._readType == 1) {
    if (pSVar1 != (StringBuffer *)0x0) {
      if ((pSVar1->fields)._position == 0) {
        pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,0);
      }
      else {
        inArray = (pSVar1->fields)._buffer;
        length = (pSVar1->fields)._position;
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pBVar2 = mscorlib.dll::System::Convert::Convert_FromBase64CharArray
                           (inArray,0,length,(MethodInfo *)0x0);
        pSVar1 = (this->fields)._buffer;
        if (pSVar1 == (StringBuffer *)0x0) goto code_?;
        (pSVar1->fields)._position = 0;
      }
      (*(this->klass->vtable).SetToken.methodPtr)
                (this,0x11,pBVar2,(this->klass->vtable).SetToken.method);
      return;
    }
  }
  else if (pSVar1 != (StringBuffer *)0x0) {
    this_00 = (String *)
              (*(pSVar1->klass->vtable).ToString.methodPtr)
                        (pSVar1,(pSVar1->klass->vtable).ToString.method);
    pSVar1 = (this->fields)._buffer;
    if ((pSVar1 != (StringBuffer *)0x0) &&
       ((pSVar1->fields)._position = 0, this_00 != (String *)0x0)) {
      bVar3 = mscorlib.dll::System::String::String_StartsWith_1
                        (this_00,StringLiteral__Date_,StringComparison__Enum_Ordinal,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        bVar3 = mscorlib.dll::System::String::String_EndsWith_1
                          (this_00,::StringLiteral___,StringComparison__Enum_Ordinal,
                           (MethodInfo *)0x0);
        if (bVar3 != 0) {
          JsonTextReader_ParseDate(this,this_00,(MethodInfo *)0x0);
          return;
        }
      }
      (*(this->klass->vtable).SetToken.methodPtr)();
      (*(this->klass->vtable).set_QuoteChar.methodPtr)();
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ParseTrue() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseTrue
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x74,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pppppuStack_c = (undefined4 *****)&uStack_2;
    uStack_2 = 1;
    pBStack_3 = TypeInfo__System__Boolean;
    uVar4 = func_?();
    (*(this->klass->vtable).SetToken.methodPtr)(this,10,uVar4,(this->klass->vtable).SetToken.method)
    ;
    return;
  }
  pppppuStack_c = (undefined4 *****)0x2;
  pBStack_3 = (Boolean__Class *)&TypeInfo__System__Object;
  pBStack_3 = (Boolean__Class *)func_?();
  args = (Object__Array *)func_?();
  pppppuStack_c = &pppppuStack_c;
  pBStack_3 = (Boolean__Class *)&TypeInfo__System__Int32;
  pBStack_3 = (Boolean__Class *)func_?();
  pppppuVar4 = (undefined4 *****)func_?();
  func_?(args);
  func_?(args,pppppuVar4);
  pBStack_3 = (Boolean__Class *)0x0;
  pppppuStack_c = pppppuVar4;
  func_?();
  pBStack_3 = (Boolean__Class *)(this->fields)._currentLinePosition;
  uVar4 = func_?(&TypeInfo__System__Int32,&pBStack_3);
  uVar4 = func_?(uVar4);
  func_?(args);
  func_?(args,uVar4);
  func_?(1,uVar4);
  method_00 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_boolean_value__Lin);
  pBVar5 = (Boolean__Class *)JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
  pppppuStack_c =
       (undefined4 *****)func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseTrue__)
  ;
  pBStack_3 = pBVar5;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ParseUndefined() */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseUndefined
               (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  bVar1 = JsonTextReader_MatchValue_1
                    (this,0x75,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined,1,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMStack_2 = (this->klass->vtable).SetToken.method;
    pJStack_3 = (JsonReaderException *)0x0;
    (*(this->klass->vtable).SetToken.methodPtr)(this,0xc);
    return;
  }
  pMStack_2 = (MethodInfo *)0x2;
  pJStack_3 = (JsonReaderException *)&TypeInfo__System__Object;
  pJStack_3 = (JsonReaderException *)func_?();
  args = (Object__Array *)func_?();
  pMStack_2 = (MethodInfo *)&pMStack_2;
  pJStack_3 = (JsonReaderException *)&TypeInfo__System__Int32;
  pJStack_3 = (JsonReaderException *)func_?();
  pMVar4 = (MethodInfo *)func_?();
  func_?(args);
  func_?(args,pMVar4);
  pJStack_3 = (JsonReaderException *)0x0;
  pMStack_2 = pMVar4;
  func_?();
  pJStack_3 = (JsonReaderException *)(this->fields)._currentLinePosition;
  uVar5 = func_?(&TypeInfo__System__Int32,&pJStack_3);
  uVar5 = func_?(uVar5);
  func_?(args);
  func_?(args,uVar5);
  func_?(1,uVar5);
  pMVar4 = (MethodInfo *)0x0;
  format = (String *)func_?(&StringLiteral_Error_parsing_undefined_value__L);
  pJVar6 = JsonTextReader_CreateJsonReaderException(this,format,args,pMVar4);
  pMStack_2 = (MethodInfo *)
              func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseUndefined__);
  pJStack_3 = pJVar6;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Char ParseUnquotedProperty(Char) */

uint16_t Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseUnquotedProperty
                   (JsonTextReader *this,uint16_t firstChar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  this_00 = this;
  this_01 = (this->fields)._buffer;
  if (this_01 != (StringBuffer *)0x0) {
    pMVar1 = (MethodInfo *)0x0;
    pJVar2 = (JsonTextReader *)_firstChar;
    while( true ) {
      Json::Utilities::StringBuffer::StringBuffer_Append(this_01,(uint16_t)pJVar2,pMVar1);
      uVar3 = JsonTextReader_MoveNext(this_00,(MethodInfo *)0x0);
      pJVar2 = (JsonTextReader *)(uint)uVar3;
      if ((uVar3 == 0) && ((this_00->fields)._end != 0)) goto code_?;
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar4 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar3,(MethodInfo *)0x0);
      if ((bVar4 != 0) || (pJVar2 == (JsonTextReader *)0x3a)) {
        return uVar3;
      }
      this = (JsonTextReader *)0x0;
      bVar4 = JsonTextReader_ValidIdentifierChar(this_00,uVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        in_stack_5 = (JsonTextReader *)0x3;
        method = (MethodInfo *)&TypeInfo__System__Object;
        _firstChar = (Object__Array *)&UNK_?;
        method = (MethodInfo *)func_?();
        _firstChar = (Object__Array *)&UNK_?;
        args = (Object__Array *)func_?();
        in_stack_5 = (JsonTextReader *)&this;
        method = (MethodInfo *)&TypeInfo__System__Char;
        _firstChar = (Object__Array *)&UNK_?;
        this = pJVar2;
        method = (MethodInfo *)func_?();
        _firstChar = (Object__Array *)&UNK_?;
        pJVar2 = (JsonTextReader *)func_?();
        this = (JsonTextReader *)&UNK_?;
        _firstChar = args;
        func_?();
        this = pJVar2;
        func_?();
        method = (MethodInfo *)0x0;
        _firstChar = (Object__Array *)&UNK_?;
        in_stack_5 = pJVar2;
        func_?();
        _firstChar = (Object__Array *)&firstChar;
        this = (JsonTextReader *)&TypeInfo__System__Int32;
        this = (JsonTextReader *)func_?();
        iVar6 = func_?();
        func_?();
        func_?();
        this = (JsonTextReader *)0x1;
        _firstChar = (Object__Array *)iVar6;
        func_?();
        func_?();
        uVar7 = func_?();
        func_?();
        func_?(args,uVar7);
        func_?();
        ppSVar8 = &StringLiteral_Invalid_JavaScript_property_iden;
        goto code_?;
      }
      this_01 = (this_00->fields)._buffer;
      if (this_01 == (StringBuffer *)0x0) break;
      in_stack_5 = (JsonTextReader *)0x0;
    }
  }
  in_stack_5 = (JsonTextReader *)&UNK_?;
  func_?();
code_?:
  func_?();
  args = (Object__Array *)func_?();
  this = (JsonTextReader *)(this_00->fields)._currentLineNumber;
  func_?();
  uVar7 = func_?();
  func_?(args);
  func_?(args,uVar7);
  func_?();
  _firstChar = (Object__Array *)(this_00->fields)._currentLinePosition;
  uVar7 = func_?(&TypeInfo__System__Int32,&firstChar);
  uVar7 = func_?(uVar7);
  func_?(args);
  func_?(args,uVar7);
  func_?(1,uVar7);
  ppSVar8 = &StringLiteral_Unexpected_end_when_parsing_unqu;
code_?:
  pMVar1 = (MethodInfo *)0x0;
  format = (String *)func_?(ppSVar8);
  pJVar9 = JsonTextReader_CreateJsonReaderException(this_00,format,args,pMVar1);
  _firstChar = (Object__Array *)func_?();
  this = (JsonTextReader *)pJVar9;
  func_?();
  pcVar10 = (code *)swi(3);
  uVar3 = (*pcVar10)();
  return uVar3;
}


/* Boolean ParseValue(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ParseValue
               (JsonTextReader *this,uint16_t currentChar,MethodInfo *method)

{
  this_00 = this;
  ppppuVar25 = _currentChar;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    ppppuVar25 = _currentChar;
  }
  do {
    quote = (ushort)ppppuVar25;
    if (0x5b < quote) {
      if (quote < 0x6f) {
        if (quote == 0x5d) {
          (*(this->klass->vtable).SetToken.methodPtr)
                    (this,0xe,0,(this->klass->vtable).SetToken.method);
          return 1;
        }
        if (quote == 0x66) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Boolean);
            func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar1 = JsonTextReader_MatchValue_1
                            (this,0x66,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False
                             ,1,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            _currentChar = (uint16_t ****)((uint)_currentChar & 0xffffff);
            goto code_?;
          }
          pppppuStack_c = (uint16_t *****)0x2;
          uVar2 = func_?();
          pOVar3 = (Object__Array *)func_?();
          _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
          pppppuStack_c = (uint16_t *****)&currentChar;
          uVar2 = func_?();
          uVar4 = func_?();
          func_?();
          func_?();
          uStack_5 = (ulonglong)uVar4 << 0x20;
          func_?();
          uStack_5 = CONCAT44((this->fields)._currentLinePosition,uVar2);
          func_?();
          uVar6 = func_?();
          func_?();
          func_?(pOVar3,uVar6);
          func_?();
          pMVar7 = (MethodInfo *)0x0;
          pSVar8 = (String *)func_?(&StringLiteral_Error_parsing_boolean_value__Lin);
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
        }
        else {
          if (quote != 0x6e) goto code_?;
          bVar1 = JsonTextReader_HasNext(this,(MethodInfo *)0x0);
          if (bVar1 == 0) goto code_?;
          pTVar10 = JsonValidatingReader::JsonValidatingReader_get_ValueType
                              ((JsonValidatingReader *)this,(MethodInfo *)0x0);
          if (((uint)pTVar10 & 0xffff) != 0x75) {
            if (((uint)pTVar10 & 0xffff) == 0x65) {
              uStack_5 = ZEXT48(pppppuStack_c) << 0x20;
              JsonTextReader_ParseConstructor(this,(MethodInfo *)0x0);
              return 1;
            }
            func_?();
            uVar11 = func_?();
            _currentChar = (uint16_t ****)0x6e;
            func_?();
            uVar2 = func_?();
            func_?();
            func_?(uVar11);
            func_?();
            pDStack_12 = (Double__Class *)(this->fields)._currentLineNumber;
            func_?();
            uVar6 = func_?();
            func_?(uVar11);
            func_?(uVar11,uVar6);
            pMVar7 = (MethodInfo *)0x1;
            func_?();
            uStack_5 = CONCAT44((this->fields)._currentLinePosition,uVar2);
            uVar6 = func_?(&TypeInfo__System__Int32,&pppppuStack_c);
            pOVar3 = (Object__Array *)func_?(uVar6);
            func_?(uVar11);
            func_?(uVar11,pOVar3);
            func_?(2);
            ppSVar13 = &StringLiteral_Unexpected_character_encountered;
            goto code_?;
          }
          if (cRam_? == '\0') {
            uStack_5 = CONCAT44(pppppuStack_c,&TypeInfo__Newtonsoft__Json__JsonConvert);
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            uStack_5 = CONCAT44(pppppuStack_c,TypeInfo__Newtonsoft__Json__JsonConvert);
            func_?();
          }
          uStack_5 = uStack_5 & 0xffffffff00000000;
          pMVar7 = (MethodInfo *)0x6e;
          pOVar3 = (Object__Array *)this;
          bVar1 = JsonTextReader_MatchValue_1
                            (this,0x6e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,
                             1,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            pDStack_12 = (Double__Class *)this;
            uStack_5 = CONCAT44(&UNK_?,uVar2);
            (*(this->klass->vtable).SetToken.methodPtr)();
            return 1;
          }
          func_?();
          pppppuVar11 = (uint16_t *****)func_?();
          _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
          func_?();
          pDVar14 = (Double__Class *)func_?();
          func_?();
          uStack_5 = CONCAT44(pppppuVar11,&UNK_?);
          pDStack_12 = pDVar14;
          func_?();
          func_?();
          pDStack_12 = (Double__Class *)&TypeInfo__System__Int32;
          uStack_5 = CONCAT44(&UNK_?,(int)uStack_5);
          pDStack_12 = (Double__Class *)func_?();
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          uVar2 = func_?();
          pppppuStack_c = pppppuVar11;
          func_?();
          func_?();
          pDStack_12 = (Double__Class *)0x1;
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          func_?();
          uStack_5 = ZEXT48(pppppuVar11);
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
          this = (JsonTextReader *)pDVar14;
        }
        goto code_?;
      }
      if (0x75 < quote) {
        if (quote == 0x7b) {
          (*(this->klass->vtable).SetToken.methodPtr)
                    (this,1,0,(this->klass->vtable).SetToken.method);
          return 1;
        }
        if (quote == 0x7d) {
          (*(this->klass->vtable).SetToken.methodPtr)
                    (this,0xd,0,(this->klass->vtable).SetToken.method);
          return 1;
        }
        goto code_?;
      }
      if (quote == 0x74) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Boolean);
          func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
          cRam_? = '\x01';
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        bVar1 = JsonTextReader_MatchValue_1
                          (this,0x74,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True,1,
                           (MethodInfo *)0x0);
        if (bVar1 == 0) goto code_?;
        _currentChar = (uint16_t ****)CONCAT13(1,_currentChar);
code_?:
        uStack_5 = CONCAT44((undefined1 *)((int)register0x00000010 + 0xb),TypeInfo__System__Boolean
                            );
        func_?();
        pJVar15 = this->klass;
code_?:
        (*(pJVar15->vtable).SetToken.methodPtr)(this);
        return 1;
      }
      if (quote != 0x75) goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
        cRam_? = '\x01';
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      bVar1 = JsonTextReader_MatchValue_1
                        (this,0x75,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined
                         ,1,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
      uVar6 = func_?(&TypeInfo__System__Object,2);
      pOVar3 = (Object__Array *)func_?(uVar6);
      _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
      uVar6 = func_?(&TypeInfo__System__Int32,&currentChar);
      uVar6 = func_?(uVar6);
      func_?(pOVar3);
      func_?(pOVar3,uVar6);
      func_?(0,uVar6);
      pDStack_12 = (Double__Class *)(this->fields)._currentLinePosition;
      uVar6 = func_?(&TypeInfo__System__Int32,&pDStack_12);
      uVar6 = func_?(uVar6);
      func_?(pOVar3);
      func_?(pOVar3,uVar6);
      func_?(1,uVar6);
      pMVar7 = (MethodInfo *)0x0;
      pSVar8 = (String *)func_?(&StringLiteral_Error_parsing_undefined_value__L);
      pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
      uVar6 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ParseUndefined__);
      func_?(pJVar9,uVar6);
code_?:
      func_?();
      uVar11 = func_?();
      _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
      func_?();
      uVar6 = func_?();
      func_?(uVar11);
      func_?(uVar11,uVar6);
      pMVar7 = (MethodInfo *)0x0;
      func_?();
      pDStack_12 = (Double__Class *)(this->fields)._currentLinePosition;
      uVar6 = func_?(&TypeInfo__System__Int32,&pDStack_12);
      pOVar3 = (Object__Array *)func_?(uVar6);
      func_?(uVar11);
      func_?(uVar11,pOVar3);
      func_?(1);
      ppSVar13 = &StringLiteral_Unexpected_end__Line__0___positi;
code_?:
      pSVar8 = (String *)func_?(ppSVar13,uVar11,0);
      pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
code_?:
      uVar2 = func_?();
      uStack_5 = CONCAT44(uVar2,pJVar9);
      func_?();
code_?:
      pppppuStack_c = (uint16_t *****)0x2;
      uVar2 = func_?();
      pOVar16 = (Object__Array *)func_?();
      _currentChar = (uint16_t ****)(this_00->fields)._currentLineNumber;
      pppppuStack_c = (uint16_t *****)&currentChar;
      uVar2 = func_?();
      uVar4 = func_?();
      func_?();
      func_?();
      uStack_5 = (ulonglong)uVar4 << 0x20;
      func_?();
      pDStack_12 = (Double__Class *)(this_00->fields)._currentLinePosition;
      func_?();
      uVar6 = func_?();
      func_?();
      func_?(pOVar16,uVar6);
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      pOVar3 = pOVar16;
      pSVar8 = (String *)func_?(&StringLiteral_Error_parsing_boolean_value__Lin);
      pJVar9 = JsonTextReader_CreateJsonReaderException(this_00,pSVar8,pOVar3,pMVar7);
      uVar2 = func_?();
      uStack_5 = CONCAT44(uVar2,pJVar9);
      uVar17 = func_?();
      iVar18 = (int)uVar17;
      uStack19 = 0x10;
      uVar4 = iVar18 + 1;
      pbVar20 = (byte *)(iVar18 + 0x3e);
      bVar21 = (byte)uVar4;
      bVar22 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,uVar4 < 0x42fb1047);
      *pbVar20 = *pbVar20 + bVar21 + (uVar4 < 0x42fb1047);
      pbVar20 = (byte *)(iVar18 + 0x3e);
      bVar23 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar22);
      *pbVar20 = *pbVar20 + bVar21 + bVar22;
      pbVar20 = (byte *)((int)&this_00[0x5e87ac].fields._reader + 1);
      bVar24 = (byte)((uint6)uVar17 >> 0x28);
      bVar25 = *pbVar20 + bVar24;
      bVar22 = CARRY1(*pbVar20,bVar24) || CARRY1(bVar25,bVar23);
      *pbVar20 = bVar25 + bVar23;
      pbVar20 = (byte *)(iVar18 + 0x3e);
      bVar23 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar22);
      *pbVar20 = *pbVar20 + bVar21 + bVar22;
      pbVar20 = (byte *)(extraout_ECX + 0x44);
      bVar24 = (byte)((uint)((int)&this_00->klass + 1) >> 8);
      bVar25 = *pbVar20 + bVar24;
      bVar22 = CARRY1(*pbVar20,bVar24) || CARRY1(bVar25,bVar23);
      *pbVar20 = bVar25 + bVar23;
      pbVar20 = (byte *)((int)pOVar16->vector + 0x33);
      bVar26 = (byte)(uVar4 >> 8);
      bVar23 = CARRY1(*pbVar20,bVar26) || CARRY1(*pbVar20 + bVar26,bVar22);
      *pbVar20 = *pbVar20 + bVar26 + bVar22;
      ppOVar27 = pOVar16->vector + 0xd;
      bVar22 = CARRY1(*(byte *)ppOVar27,bVar26) || CARRY1(*(byte *)ppOVar27 + bVar26,bVar23);
      *(byte *)ppOVar27 = *(byte *)ppOVar27 + bVar26 + bVar23;
      pbVar20 = (byte *)(iVar18 + 0x3e);
      bVar23 = CARRY1(*pbVar20,bVar21) || CARRY1(*pbVar20 + bVar21,bVar22);
      *pbVar20 = *pbVar20 + bVar21 + bVar22;
      pbVar20 = (byte *)(iVar18 + 0x3e);
      bVar25 = *pbVar20;
      bVar24 = *pbVar20;
      *pbVar20 = bVar24 + bVar21 + bVar23;
      pcVar28 = (char *)((int)pOVar16->vector + 0x37);
      *pcVar28 = *pcVar28 + bVar26 + (CARRY1(bVar25,bVar21) || CARRY1(bVar24 + bVar21,bVar23));
      in((short)((uint6)uVar17 >> 0x20));
      pTVar29 = (this->fields)._reader;
      if (pTVar29 == (TextReader *)0x0) {
        uVar6 = func_?(&stack0xffffffe4);
        func_?(uVar6);
        pcVar30 = (code *)swi(3);
        bVar1 = (*pcVar30)();
        return bVar1;
      }
      bVar1 = (*(pTVar29->klass->vtable).Peek.methodPtr)();
      return bVar1;
    }
    if (0x22 < quote) {
      if (quote < 0x4a) {
        switch((uint)ppppuVar25 & 0xffff) {
        case 0x27:
code_?:
          JsonTextReader_ParseString(this,quote,(MethodInfo *)0x0);
          return 1;
        case 0x28:
        case 0x2a:
        case 0x2b:
        case 0x2e:
          goto code_?;
        case 0x29:
          (*(this->klass->vtable).SetToken.methodPtr)
                    (this,0xf,0,(this->klass->vtable).SetToken.method);
          return 1;
        case 0x2c:
code_?:
          (*(this->klass->vtable).SetToken.methodPtr)
                    (this,0xc,0,(this->klass->vtable).SetToken.method);
          return 1;
        case 0x2d:
          pTVar10 = JsonValidatingReader::JsonValidatingReader_get_ValueType
                              ((JsonValidatingReader *)this,(MethodInfo *)0x0);
          if (pTVar10 != (Type *)0x49) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar1 = JsonTextReader_MatchValue_1
                            (this,0x2d,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                             NegativeInfinity,1,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            pDStack_12 = TypeInfo__System__Double;
            uVar2 = (undefined4)_UNK_?;
            uStack_5 = CONCAT44(&UNK_?,uVar2);
            func_?();
            pJVar15 = this->klass;
            goto code_?;
          }
          pDStack_12 = (Double__Class *)&TypeInfo__System__Object;
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          pDStack_12 = (Double__Class *)func_?();
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          pppppuVar11 = (uint16_t *****)func_?();
          _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
          pDStack_12 = (Double__Class *)&TypeInfo__System__Int32;
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          pDStack_12 = (Double__Class *)func_?();
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          uVar2 = func_?();
          pppppuStack_c = pppppuVar11;
          func_?();
          func_?();
          pDStack_12 = (Double__Class *)0x0;
          uStack_5 = CONCAT44(&UNK_?,uVar2);
          func_?();
          pppppuStack_c = (uint16_t *****)&pppppuStack_c;
          uVar2 = func_?();
          uVar6 = func_?();
          func_?();
          func_?();
          uStack_5 = CONCAT44(uVar6,1);
          func_?();
          ppSVar13 = &StringLiteral_Error_parsing_negative_infinity_;
          pOVar3 = (Object__Array *)&UNK_?;
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException
                              (this,pSVar8,pOVar3,(MethodInfo *)ppSVar13);
          break;
        case 0x2f:
          JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
          return 1;
        default:
          if (quote != 0x49) goto code_?;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__Double);
            func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
          }
          bVar1 = JsonTextReader_MatchValue_1
                            (this,0x49,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                             PositiveInfinity,1,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            uStack_5 = _UNK_?;
            func_?();
            pJVar15 = this->klass;
            goto code_?;
          }
          pppppuStack_c = (uint16_t *****)0x2;
          uVar2 = func_?();
          pOVar3 = (Object__Array *)func_?();
          _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
          pppppuStack_c = (uint16_t *****)&currentChar;
          uVar2 = func_?();
          uVar4 = func_?();
          func_?();
          func_?();
          uStack_5 = (ulonglong)uVar4 << 0x20;
          func_?();
          uStack_5 = CONCAT44((this->fields)._currentLinePosition,uVar2);
          func_?();
          uVar6 = func_?();
          func_?();
          func_?(pOVar3,uVar6);
          func_?();
          pMVar7 = (MethodInfo *)0x0;
          pSVar8 = (String *)func_?(&StringLiteral_Error_parsing_positive_infinity_);
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
        }
      }
      else {
        if (quote != 0x4e) {
          if (quote == 0x5b) {
            (*(this->klass->vtable).SetToken.methodPtr)
                      (this,2,0,(this->klass->vtable).SetToken.method);
            return 1;
          }
          goto code_?;
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Double);
          func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
          cRam_? = '\x01';
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        bVar1 = JsonTextReader_MatchValue_1
                          (this,0x4e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,1,
                           (MethodInfo *)0x0);
        if (bVar1 != 0) {
          uStack_5 = _UNK_?;
          func_?();
          pJVar15 = this->klass;
          goto code_?;
        }
        pppppuStack_c = (uint16_t *****)0x2;
        uVar2 = func_?();
        pOVar3 = (Object__Array *)func_?();
        _currentChar = (uint16_t ****)(this->fields)._currentLineNumber;
        pppppuStack_c = (uint16_t *****)&currentChar;
        uVar2 = func_?();
        uVar4 = func_?();
        func_?();
        func_?();
        uStack_5 = (ulonglong)uVar4 << 0x20;
        func_?();
        uStack_5 = CONCAT44((this->fields)._currentLinePosition,uVar2);
        func_?();
        uVar6 = func_?();
        func_?();
        func_?(pOVar3,uVar6);
        func_?();
        pMVar7 = (MethodInfo *)0x0;
        pSVar8 = (String *)func_?(&StringLiteral_Error_parsing_NaN_value__Line__0);
        pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar3,pMVar7);
      }
      goto code_?;
    }
    switch((uint)ppppuVar25 & 0xffff) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
code_?:
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Char);
      }
      bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(quote,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = mscorlib.dll::System::Char::Char_IsNumber(quote,(MethodInfo *)0x0);
        if (((bVar1 != 0) || (quote == 0x2d)) || (quote == 0x2e)) {
code_?:
          JsonTextReader_ParseNumber(this,quote,(MethodInfo *)0x0);
          return 1;
        }
        func_?();
        uVar11 = func_?();
        _currentChar = (uint16_t ****)((uint)ppppuVar25 & 0xffff);
        func_?();
        uVar6 = func_?();
        func_?(uVar11);
        func_?(uVar11,uVar6);
        pMVar7 = (MethodInfo *)0x0;
        func_?();
        uStack_5 = CONCAT44((this->fields)._currentLineNumber,uVar2);
        uVar6 = func_?(&TypeInfo__System__Int32,&pppppuStack_c);
        pOVar3 = (Object__Array *)func_?(uVar6);
        func_?(uVar11);
        func_?(uVar11,pOVar3);
        func_?(1);
        pDStack_12 = (Double__Class *)(this->fields)._currentLinePosition;
        uVar6 = func_?(&TypeInfo__System__Int32,&pDStack_12);
        uVar6 = func_?(uVar6);
        func_?(uVar11);
        func_?(uVar11,uVar6);
        func_?(2,uVar6);
        ppSVar13 = &StringLiteral_Unexpected_character_encountered;
        goto code_?;
      }
      break;
    default:
      if (quote != 0x20) {
        if (quote == 0x22) goto code_?;
        goto code_?;
      }
    }
    uVar31 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    ppppuVar25 = (uint16_t ****)(uint)uVar31;
    if ((uVar31 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean Read() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_Read
               (JsonTextReader *this,MethodInfo *method)

{
  (this->fields)._readType = 0;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = &(this->fields)._lastChar;
  do {
    if (this_00->hasValue == 0) {
      currentChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    }
    else {
      currentChar = mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16__get_Value
                              ((Nullable_1_UInt16_ *)this_00,
                               MethodInfo__System__Nullable<wchar_t>__get_Value__);
      this_00->hasValue = 0;
      this_00->field_0x1 = 0;
      this_00->value = 0;
    }
    if ((currentChar == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
    switch((this->fields)._._currentState) {
    case 0:
    case 2:
    case 5:
    case 6:
    case 9:
    case 10:
      bVar1 = JsonTextReader_ParseValue(this,currentChar,(MethodInfo *)0x0);
      return bVar1;
    case 1:
    case 7:
    case 0xb:
      break;
    case 3:
    case 4:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      goto code_?;
    case 8:
      bVar1 = JsonTextReader_ParsePostValue(this,currentChar,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return 1;
      }
      break;
    default:
      func_?();
      args = (Object__Array *)func_?();
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
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
      uVar2 = func_?();
      func_?();
      func_?(args,uVar2);
      func_?();
      method_00 = (MethodInfo *)0x0;
      format = (String *)func_?(&StringLiteral_Unexpected_state___0___Line__1__);
      pJVar3 = JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
      func_?();
      bVar4 = (undefined1 *)0xffffffeb < &stack0xffffffdc;
      bVar5 = &stack0x00000000 == (undefined1 *)0x10;
      uVar6 = func_?();
      puVar7 = (uint *)((ulonglong)uVar6 >> 0x20);
      piVar8 = (int *)uVar6;
      if (bVar5) {
        piVar8 = (int *)(((uint)this ^ 0x10) + 0x56);
        *piVar8 = (int)(*piVar8 + (int)puVar7);
      }
      else {
        bVar9 = (byte)((ulonglong)uVar6 >> 8);
        bVar10 = *(char *)&pJVar3->klass + bVar9;
        bVar5 = CARRY1(*(byte *)&pJVar3->klass,bVar9) || CARRY1(bVar10,bVar4);
        *(byte *)&pJVar3->klass = bVar10 + bVar4;
        pbVar11 = (byte *)((int)&pJVar3[0x1769a7d].fields._.caught_in_unmanaged + 1);
        bVar4 = *pbVar11;
        bVar10 = *pbVar11;
        *pbVar11 = bVar10 + extraout_CL + bVar5;
        *(char *)piVar8 =
             (char)*piVar8 + (char)uVar6 +
             (CARRY1(bVar4,extraout_CL) || CARRY1(bVar10 + extraout_CL,bVar5));
        *piVar8 = (int)(*piVar8 + (int)piVar8);
        cVar12 = (char)uVar6 + (byte)*puVar7;
        pcVar13 = (char *)CONCAT31((int3)((ulonglong)uVar6 >> 8),cVar12);
        *pcVar13 = *pcVar13 + cVar12;
        this->klass = (JsonTextReader__Class *)(pcVar13 + (int)this->klass);
        *pcVar13 = *pcVar13 + cVar12;
        uVar14 = *puVar7;
        *puVar7 = (uint)(&stack0xffffffe0 + *puVar7);
        bVar4 = (byte)*puVar7 + bVar9;
        bVar5 = CARRY1((byte)*puVar7,bVar9) ||
                 CARRY1(bVar4,CARRY4(uVar14,(uint)&stack0xffffffe0));
        *(byte *)puVar7 = bVar4 + CARRY4(uVar14,(uint)&stack0xffffffe0);
        bVar10 = (byte)((uint)this >> 8);
        bVar4 = bVar10 * '\x02' + bVar5;
        *(byte *)puVar7 =
             (byte)*puVar7 + bVar9 +
             (CARRY1(bVar4,bVar4) ||
             CARRY1(bVar4 * '\x02',CARRY1(bVar10,bVar10) || CARRY1(bVar10 * '\x02',bVar5)));
        in((short)((ulonglong)uVar6 >> 0x20));
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(&TypeInfo__System__TimeSpan);
          cRam_? = '\x01';
        }
      }
      func_?();
      pcVar15 = (code *)swi(3);
      bVar1 = (*pcVar15)();
      return bVar1;
    }
  } while( true );
code_?:
  if (currentChar < 0x21) {
    switch(currentChar) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
      goto code_?;
    default:
      if (currentChar != 0x20) goto code_?;
    }
  }
  else {
    if (currentChar == 0x2f) {
      JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
      return 1;
    }
    if (currentChar == 0x7d) {
      (*(this->klass->vtable).SetToken.methodPtr)(this);
      return 1;
    }
code_?:
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = JsonTextReader_ParseProperty(this,currentChar,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  currentChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  if ((currentChar == 0) && ((this->fields)._end != 0)) {
    return 0;
  }
  goto code_?;
}


/* Byte[] ReadAsBytes() */

Byte__Array *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsBytes
          (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<unsigned_char>);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields)._readType = 1;
  do {
    bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    iVar2 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                      (this_00,(this_00->klass->vtable).get_TokenType.method);
  } while (iVar2 == 5);
  iVar2 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                    (this_00,(this_00->klass->vtable).get_TokenType.method);
  if (iVar2 == 0xb) {
    return (Byte__Array *)0x0;
  }
  iVar2 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                    (this_00,(this_00->klass->vtable).get_TokenType.method);
  pJVar3 = this_00->klass;
  if (iVar2 == 0x11) {
    pJVar4 = (JsonReaderException *)
             (*(pJVar3->vtable).get_Value.methodPtr)(this_00,(pJVar3->vtable).get_Value.method);
    unaff_EDI = TypeInfo__System__Byte;
    if (pJVar4 == (JsonReaderException *)0x0) {
      return (Byte__Array *)0x0;
    }
    pBVar5 = (Byte__Array *)func_?(pJVar4,TypeInfo__System__Byte);
    if (pBVar5 != (Byte__Array *)0x0) {
      return pBVar5;
    }
    goto code_?;
  }
  iVar2 = (*(pJVar3->vtable).get_TokenType.methodPtr)(this_00,(pJVar3->vtable).get_TokenType.method)
  ;
  if (iVar2 == 2) {
    this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
              func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
    pJVar4 = (JsonReaderException *)0x0;
    pLStack_6 = this_01;
    if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__List__);
      bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
      while (bVar1 != 0) {
        iVar2 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                          (this_00,(this_00->klass->vtable).get_TokenType.method);
        if (iVar2 != 5) {
          if (iVar2 != 7) {
            if (iVar2 == 0xe) {
              pUVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                       UnitySynchronizationContext+WorkRequest]::
                       List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                                 (this_01,
                                  MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__
                                 );
              func_?(0xf,this_00,0x11,pUVar7);
              return (Byte__Array *)pUVar7;
            }
            goto code_?;
          }
          value = (Object *)func_?(8,this_00);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          provider = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          uVar8 = mscorlib.dll::System::Convert::Convert_ToByte
                            (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
          this_01 = pLStack_6;
          this = (JsonTextReader *)CONCAT31(this._1_3_,uVar8);
          func_?(pLStack_6,this,
                          MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_
                         );
        }
        bVar1 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
      }
code_?:
      uVar9 = func_?(&TypeInfo__System__Object,2);
      args = (Object__Array *)func_?(uVar9);
      this = (JsonTextReader *)(this_00->fields)._currentLineNumber;
      uVar9 = func_?(&TypeInfo__System__Int32,&this);
      uVar9 = func_?(uVar9);
      func_?(args);
      func_?(args,uVar9);
      func_?(0,uVar9);
      pLStack_6 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  (this_00->fields)._currentLinePosition;
      uVar9 = func_?(&TypeInfo__System__Int32,&pLStack_6);
      uVar9 = func_?(uVar9);
      func_?(args);
      func_?(args,uVar9);
      func_?(1,uVar9);
      ppSVar10 = &StringLiteral_Unexpected_end_when_reading_byte;
      goto code_?;
    }
  }
  else {
    uVar9 = func_?(&TypeInfo__System__Object,3);
    args = (Object__Array *)func_?(uVar9);
    this = (JsonTextReader *)func_?(7,this_00);
    uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
    uVar9 = func_?(uVar9);
    func_?(args);
    func_?(args,uVar9);
    func_?(0,uVar9);
    iStack_11 = (this_00->fields)._currentLineNumber;
    uVar9 = func_?(&TypeInfo__System__Int32,&iStack_11);
    uVar9 = func_?(uVar9);
    func_?(args);
    func_?(args,uVar9);
    func_?(1,uVar9);
    pLStack_6 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this_00->fields)._currentLinePosition;
    uVar9 = func_?(&TypeInfo__System__Int32,&pLStack_6);
    uVar9 = func_?(uVar9);
    func_?(args);
    func_?(args,uVar9);
    func_?(2,uVar9);
    ppSVar10 = &StringLiteral_Unexpected_token_when_reading_by;
code_?:
    pMVar12 = (MethodInfo *)0x0;
    pSVar13 = (String *)func_?(ppSVar10);
    pJVar4 = JsonTextReader_CreateJsonReaderException(this_00,pSVar13,args,pMVar12);
    uVar9 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsBytes__);
    func_?(pJVar4,uVar9);
code_?:
    uVar9 = func_?(&TypeInfo__System__Object,3);
    unaff_EDI = (Byte__Array__Class *)func_?(uVar9);
    this = (JsonTextReader *)func_?(7,this_00);
    uVar9 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&this);
    uVar9 = func_?(uVar9);
    func_?(unaff_EDI);
    func_?(unaff_EDI,uVar9);
    func_?(0,uVar9);
    pLStack_6 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                (this_00->fields)._currentLineNumber;
    uVar9 = func_?(&TypeInfo__System__Int32,&pLStack_6);
    uVar9 = func_?(uVar9);
    func_?(unaff_EDI);
    func_?(unaff_EDI,uVar9);
    func_?(1,uVar9);
    iStack_11 = (this_00->fields)._currentLinePosition;
    uVar9 = func_?(&TypeInfo__System__Int32,&iStack_11);
    uVar9 = func_?(uVar9);
    func_?(unaff_EDI);
    func_?(unaff_EDI,uVar9);
    func_?(2,uVar9);
    pMVar12 = (MethodInfo *)0x0;
    args_00 = unaff_EDI;
    pSVar13 = (String *)func_?(&StringLiteral_Unexpected_token_when_reading_by);
    pJVar4 = JsonTextReader_CreateJsonReaderException
                       (this_00,pSVar13,(Object__Array *)args_00,pMVar12);
    uVar9 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsBytes__);
    func_?(pJVar4,uVar9);
  }
  func_?();
code_?:
  func_?(pJVar4,unaff_EDI);
  pcVar14 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar14)();
  return pBVar5;
}


/* Nullable`1[DateTimeOffset] ReadAsDateTimeOffset() */

Nullable_1_DateTimeOffset_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsDateTimeOffset
          (Nullable_1_DateTimeOffset_ *__return_storage_ptr__,JsonTextReader *this,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&
                    MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  DStack_1._dateTime._dateData._0_4_ = 0;
  DStack_1._dateTime._dateData._4_4_ = 0;
  DStack_1._offsetMinutes = 0;
  DStack_1._10_2_ = 0;
  DStack_1._12_4_ = 0;
  (this->fields)._readType = 3;
  do {
    bVar2 = JsonTextReader_ReadInternal(this,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      uVar3 = func_?(&TypeInfo__System__Object,2);
      args = (Object__Array *)func_?(uVar3);
      iStack_4 = (this->fields)._currentLineNumber;
      uVar3 = func_?(&TypeInfo__System__Int32,&iStack_4);
      uVar3 = func_?(uVar3);
      func_?(args);
      func_?(args,uVar3);
      func_?(0,uVar3);
      iStack_5 = (this->fields)._currentLinePosition;
      uVar3 = func_?(&TypeInfo__System__Int32,&iStack_5);
      uVar3 = func_?(uVar3);
      func_?(args);
      func_?(args,uVar3);
      func_?(1,uVar3);
      ppSVar6 = &StringLiteral_Unexpected_end_when_reading_date;
      goto code_?;
    }
    pMVar7 = (this->klass->vtable).get_TokenType.method;
    pJVar8 = this;
    iVar9 = (*(this->klass->vtable).get_TokenType.methodPtr)();
  } while (iVar9 == 5);
  iVar9 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  if (iVar9 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    *(undefined4 *)&(__return_storage_ptr__->value)._dateTime._dateData = 0;
    *(undefined4 *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) = 0;
    *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = 0;
    return __return_storage_ptr__;
  }
  iVar9 = (*(this->klass->vtable).get_TokenType.methodPtr)
                    (this,(this->klass->vtable).get_TokenType.method);
  pJVar10 = this->klass;
  if (iVar9 == 0x10) {
    piVar11 = (int *)(*(pJVar10->vtable).get_Value.methodPtr)(this,(pJVar10->vtable).get_Value.method);
    pMVar12 = MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_
    ;
    NStack_13.hasValue = 0;
    NStack_13._1_3_ = 0;
    NStack_13._4_4_ = 0;
    NStack_13.value.flags = 0;
    NStack_13.value.hi = 0;
    NStack_13.value.lo = 0;
    NStack_13.value.mid = 0;
    if (piVar11 == (int *)0x0) goto code_?;
    pDVar14 = TypeInfo__System__DateTimeOffset;
    if (*(Il2CppClass **)(*piVar11 + 0x20) == (TypeInfo__System__DateTimeOffset->_0).element_class) {
      iVar9 = func_?(piVar11);
      uVar3 = *(undefined4 *)(iVar9 + 4);
      uVar15 = *(undefined4 *)(iVar9 + 8);
      uVar16 = *(undefined4 *)(iVar9 + 0xc);
      goto code_?;
    }
  }
  else {
    iVar9 = (*(pJVar10->vtable).get_TokenType.methodPtr)(this,(pJVar10->vtable).get_TokenType.method);
    if (iVar9 == 9) {
      pSVar17 = (String *)
               (*(this->klass->vtable).get_Value.methodPtr)
                         (this,(this->klass->vtable).get_Value.method);
      pCStack_18 = JsonTextReader_get_Culture(this,(MethodInfo *)0x0);
      if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__DateTimeOffset);
      }
      input = (String *)0x0;
      if (pSVar17 != (String *)0x0) {
        if (pSVar17->klass == TypeInfo__System__String) {
          input = pSVar17;
        }
        if (input == (String *)0x0) {
          func_?(pSVar17,TypeInfo__System__String);
          goto code_?;
        }
      }
      bVar2 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_TryParse
                        (input,(IFormatProvider *)pCStack_18,DateTimeStyles__Enum_None,&DStack_1,
                         (MethodInfo *)0x0);
      if (bVar2 != 0) {
        uStack_19 = (undefined4)DStack_1._dateTime._dateData;
        uStack_20 = DStack_1._dateTime._dateData._4_4_;
        iStack_21 = DStack_1._offsetMinutes;
        uStack_22 = DStack_1._10_2_;
        uStack_23 = DStack_1._12_4_;
        uVar3 = func_?(TypeInfo__System__DateTimeOffset,&uStack_19);
        func_?(0xf,this,0x10,uVar3);
        NStack_13.hasValue = 0;
        NStack_13._1_3_ = 0;
        NStack_13._4_4_ = 0;
        NStack_13.value.flags = 0;
        NStack_13.value.hi = 0;
        NStack_13.value.lo = 0;
        NStack_13.value.mid = 0;
        uVar3 = DStack_1._dateTime._dateData._4_4_;
        uVar15 = DStack_1._8_4_;
        uVar16 = DStack_1._12_4_;
        pMVar12 = 
        MethodInfo__System__Nullable<System::DateTimeOffset>__Nullable_System__DateTimeOffset_;
code_?:
        value.hi = uVar15;
        value.flags = uVar3;
        value.lo = uVar16;
        value.mid = (int32_t)pMVar12;
        value.ulomidLE._0_4_ = pJVar8;
        value.ulomidLE._4_4_ = pMVar7;
        mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                  (&NStack_13,value,in_stack_24);
        __return_storage_ptr__->hasValue = NStack_13.hasValue;
        *(undefined3 *)&__return_storage_ptr__->field_0x1 = NStack_13._1_3_;
        *(undefined4 *)&__return_storage_ptr__->field_0x4 = NStack_13._4_4_;
        *(int32_t *)&(__return_storage_ptr__->value)._dateTime._dateData = NStack_13.value.flags;
        *(int32_t *)((int)&(__return_storage_ptr__->value)._dateTime._dateData + 4) =
             NStack_13.value.hi;
        *(undefined8 *)&(__return_storage_ptr__->value)._offsetMinutes = NStack_13.value._8_8_;
        return __return_storage_ptr__;
      }
    }
code_?:
    uVar3 = func_?(&TypeInfo__System__Object,3);
    args = (Object__Array *)func_?(uVar3);
    pCStack_18 = (CultureInfo *)func_?(7,this);
    uVar3 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&pCStack_18);
    uVar3 = func_?(uVar3);
    func_?(args);
    func_?(args,uVar3);
    func_?(0,uVar3);
    iStack_5 = (this->fields)._currentLineNumber;
    uVar3 = func_?(&TypeInfo__System__Int32,&iStack_5);
    uVar3 = func_?(uVar3);
    func_?(args);
    func_?(args,uVar3);
    func_?(1,uVar3);
    iStack_4 = (this->fields)._currentLinePosition;
    uVar3 = func_?(&TypeInfo__System__Int32,&iStack_4);
    uVar3 = func_?(uVar3);
    func_?(args);
    func_?(args,uVar3);
    func_?(2,uVar3);
    ppSVar6 = &StringLiteral_Unexpected_token_when_reading_da;
code_?:
    pMVar7 = (MethodInfo *)0x0;
    pSVar17 = (String *)func_?(ppSVar6);
    pJVar25 = JsonTextReader_CreateJsonReaderException(this,pSVar17,args,pMVar7);
    uVar3 = func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsDateTimeOffset__);
    func_?(pJVar25,uVar3);
    piVar11 = extraout_ECX;
    pDVar14 = extraout_EDX;
  }
  func_?(piVar11,pDVar14);
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  pNVar27 = (Nullable_1_DateTimeOffset_ *)(*pcVar26)();
  return pNVar27;
}


/* Nullable`1[Decimal] ReadAsDecimal() */

Nullable_1_Decimal_ *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadAsDecimal
          (Nullable_1_Decimal_ *__return_storage_ptr__,JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Decimal);
    func_?(&MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_);
    func_?(&TypeInfo__System__Nullable<System::Decimal>);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = this;
  iStack_1 = 0;
  iStack_2 = 0;
  iStack_3 = 0;
  iStack_4 = 0;
  (this->fields)._readType = 2;
  do {
    bVar5 = JsonTextReader_ReadInternal(this_00,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      func_?();
      args = (Object__Array *)func_?();
      __return_storage_ptr__ = (Nullable_1_Decimal_ *)(this_00->fields)._currentLineNumber;
      func_?();
      uVar6 = func_?();
      func_?(args);
      func_?(args,uVar6);
      func_?();
      this = (JsonTextReader *)(this_00->fields)._currentLinePosition;
      uVar6 = func_?(&TypeInfo__System__Int32,&this);
      uVar6 = func_?(uVar6);
      func_?(args);
      func_?(args,uVar6);
      func_?(1,uVar6);
      ppSVar7 = &StringLiteral_Unexpected_end_when_reading_deci;
      goto code_?;
    }
    pMVar8 = (this_00->klass->vtable).get_TokenType.method;
    pJVar9 = this_00;
    iVar10 = (*(this_00->klass->vtable).get_TokenType.methodPtr)();
  } while (iVar10 == 5);
  iVar10 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                    (this_00,(this_00->klass->vtable).get_TokenType.method);
  if (iVar10 == 0xb) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0;
    (__return_storage_ptr__->value).flags = 0;
    (__return_storage_ptr__->value).hi = 0;
    (__return_storage_ptr__->value).lo = 0;
    (__return_storage_ptr__->value).mid = 0;
    return __return_storage_ptr__;
  }
  iVar10 = (*(this_00->klass->vtable).get_TokenType.methodPtr)
                    (this_00,(this_00->klass->vtable).get_TokenType.method);
  pJVar11 = this_00->klass;
  if (iVar10 == 8) {
    piVar12 = (int *)(*(pJVar11->vtable).get_Value.methodPtr)
                              (this_00,(pJVar11->vtable).get_Value.method);
    uVar13 = CONCAT44(TypeInfo__System__Nullable<System::Decimal>,piVar12);
    if ((piVar12 == (int *)0x0) ||
       ((Il2CppClass *)*piVar12 == (TypeInfo__System__Nullable<System::Decimal>->_0).element_class))
    {
      func_?(piVar12,TypeInfo__System__Nullable<System::Decimal>,&stack0xffffffb4);
      *(JsonTextReader **)__return_storage_ptr__ = pJVar9;
      *(MethodInfo **)&__return_storage_ptr__->field_0x4 = pMVar8;
      (__return_storage_ptr__->value).flags = (int32_t)unaff_EBX;
      (__return_storage_ptr__->value).hi = NStack_14._0_4_;
      (__return_storage_ptr__->value).lo = NStack_14._4_4_;
      (__return_storage_ptr__->value).mid = NStack_14.value.flags;
      return __return_storage_ptr__;
    }
    goto code_?;
  }
  iVar10 = (*(pJVar11->vtable).get_TokenType.methodPtr)(this_00,(pJVar11->vtable).get_TokenType.method)
  ;
  if (iVar10 == 9) {
    pSVar15 = (String *)
             (*(this_00->klass->vtable).get_Value.methodPtr)
                       (this_00,(this_00->klass->vtable).get_Value.method);
    provider = JsonTextReader_get_Culture(this_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Decimal);
    }
    s = (String *)0x0;
    if (pSVar15 != (String *)0x0) {
      if (pSVar15->klass == TypeInfo__System__String) {
        s = pSVar15;
      }
      if (s == (String *)0x0) {
        func_?(pSVar15,TypeInfo__System__String);
        goto code_?;
      }
    }
    bVar5 = mscorlib.dll::System::Decimal::Decimal_TryParse_1
                      (s,NumberStyles__Enum_Number,(IFormatProvider *)provider,(Decimal *)&iStack_1
                       ,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      NStack_14.value.ulomidLE._0_4_ = iStack_1;
      NStack_14.value.ulomidLE._4_4_ = iStack_2;
      iStack_16 = iStack_3;
      iStack_17 = iStack_4;
      uVar6 = func_?(TypeInfo__System__Decimal,&NStack_14.value.ulomidLE);
      func_?(0xf,this_00,8,uVar6);
      NStack_14.hasValue = 0;
      NStack_14._1_3_ = 0;
      NStack_14._4_4_ = 0;
      NStack_14.value.flags = 0;
      NStack_14.value.hi = 0;
      NStack_14.value.lo = 0;
      NStack_14.value.mid = 0;
      value.hi = iStack_3;
      value.flags = iStack_2;
      value.lo = iStack_4;
      value.mid = (int32_t)MethodInfo__System__Nullable<System::Decimal>__Nullable_System__Decimal_;
      value.ulomidLE._0_4_ = pJVar9;
      value.ulomidLE._4_4_ = pMVar8;
      mscorlib.dll::System::Nullable`1[Decimal]::Nullable_1_Decimal___ctor
                (&NStack_14,value,unaff_EBX);
      __return_storage_ptr__->hasValue = NStack_14.hasValue;
      *(undefined3 *)&__return_storage_ptr__->field_0x1 = NStack_14._1_3_;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = NStack_14._4_4_;
      (__return_storage_ptr__->value).flags = NStack_14.value.flags;
      (__return_storage_ptr__->value).hi = NStack_14.value.hi;
      (__return_storage_ptr__->value).lo = NStack_14.value.lo;
      (__return_storage_ptr__->value).mid = NStack_14.value.mid;
      return __return_storage_ptr__;
    }
  }
code_?:
  uVar6 = func_?(&TypeInfo__System__Object,3);
  args = (Object__Array *)func_?(uVar6);
  __return_storage_ptr__ = (Nullable_1_Decimal_ *)func_?(7,this_00);
  uVar6 = func_?(&TypeInfo__Newtonsoft__Json__JsonToken,&__return_storage_ptr__);
  uVar6 = func_?(uVar6);
  func_?(args);
  func_?(args,uVar6);
  func_?(0,uVar6);
  this = (JsonTextReader *)(this_00->fields)._currentLineNumber;
  uVar6 = func_?(&TypeInfo__System__Int32,&this);
  uVar6 = func_?(uVar6);
  func_?(args);
  func_?(args,uVar6);
  func_?(1,uVar6);
  iStack_18 = (this_00->fields)._currentLinePosition;
  uVar6 = func_?(&TypeInfo__System__Int32,&iStack_18);
  uVar6 = func_?(uVar6);
  func_?(args);
  func_?(args,uVar6);
  func_?(2,uVar6);
  ppSVar7 = &StringLiteral_Unexpected_token_when_reading_de;
code_?:
  pMVar8 = (MethodInfo *)0x0;
  pSVar15 = (String *)func_?(ppSVar7);
  JsonTextReader_CreateJsonReaderException(this_00,pSVar15,args,pMVar8);
  func_?(&MethodInfo__Newtonsoft__Json__JsonTextReader__ReadAsDecimal__);
  uVar13 = func_?();
code_?:
  func_?((int)uVar13,*(undefined4 *)((int)((ulonglong)uVar13 >> 0x20) + 0x20));
  pcVar19 = (code *)swi(3);
  pNVar20 = (Nullable_1_Decimal_ *)(*pcVar19)();
  return pNVar20;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean ReadInternal() */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadInternal
               (JsonTextReader *this,MethodInfo *method)

{
  this_01 = method;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = &(this->fields)._lastChar;
  do {
    if (this_00->hasValue == 0) {
      uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    }
    else {
      uVar1 = mscorlib.dll::System::Nullable`1[UInt16]::Nullable_1_UInt16__get_Value
                        ((Nullable_1_UInt16_ *)this_00,
                         MethodInfo__System__Nullable<wchar_t>__get_Value__);
      this_00->hasValue = 0;
      this_00->field_0x1 = 0;
      this_00->value = 0;
    }
    if ((uVar1 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
    switch((this->fields)._._currentState) {
    case 0:
    case 2:
    case 5:
    case 6:
    case 9:
    case 10:
      bVar2 = JsonTextReader_ParseValue(this,uVar1,(MethodInfo *)0x0);
      return bVar2;
    case 1:
    case 7:
    case 0xb:
      break;
    case 3:
    case 4:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      goto code_?;
    case 8:
      bVar2 = JsonTextReader_ParsePostValue(this,uVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
      break;
    default:
      func_?();
      args = (Object__Array *)func_?();
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
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
      uVar3 = func_?();
      func_?();
      func_?(args,uVar3);
      func_?();
      method_00 = (MethodInfo *)0x0;
      pSVar4 = (String *)func_?(&StringLiteral_Unexpected_state___0___Line__1__);
      pJVar5 = JsonTextReader_CreateJsonReaderException(this,pSVar4,args,method_00);
      func_?();
      bVar6 = (undefined1 *)0xffffffeb < &stack0xffffffdc;
      bVar7 = &stack0x00000000 == (undefined1 *)0x10;
      uVar8 = func_?();
      puVar9 = (uint *)((ulonglong)uVar8 >> 0x20);
      piVar10 = (int *)uVar8;
      if (bVar7) {
        piVar10 = (int *)(((uint)this ^ 0x10) + 0x56);
        *piVar10 = (int)(*piVar10 + (int)puVar9);
      }
      else {
        bVar11 = (byte)((ulonglong)uVar8 >> 8);
        bVar12 = *(char *)&pJVar5->klass + bVar11;
        bVar7 = CARRY1(*(byte *)&pJVar5->klass,bVar11) || CARRY1(bVar12,bVar6);
        *(byte *)&pJVar5->klass = bVar12 + bVar6;
        pbVar13 = (byte *)((int)&pJVar5[0x1769a7d].fields._.caught_in_unmanaged + 1);
        bVar6 = *pbVar13;
        bVar12 = *pbVar13;
        *pbVar13 = bVar12 + extraout_CL + bVar7;
        *(char *)piVar10 =
             (char)*piVar10 + (char)uVar8 +
             (CARRY1(bVar6,extraout_CL) || CARRY1(bVar12 + extraout_CL,bVar7));
        *piVar10 = (int)(*piVar10 + (int)piVar10);
        cVar14 = (char)uVar8 + (byte)*puVar9;
        pcVar15 = (char *)CONCAT31((int3)((ulonglong)uVar8 >> 8),cVar14);
        *pcVar15 = *pcVar15 + cVar14;
        this->klass = (JsonTextReader__Class *)(pcVar15 + (int)this->klass);
        *pcVar15 = *pcVar15 + cVar14;
        uVar16 = *puVar9;
        *puVar9 = (uint)(&stack0xffffffe0 + *puVar9);
        bVar6 = (byte)*puVar9 + bVar11;
        bVar7 = CARRY1((byte)*puVar9,bVar11) ||
                 CARRY1(bVar6,CARRY4(uVar16,(uint)&stack0xffffffe0));
        *(byte *)puVar9 = bVar6 + CARRY4(uVar16,(uint)&stack0xffffffe0);
        bVar12 = (byte)((uint)this >> 8);
        bVar6 = bVar12 * '\x02' + bVar7;
        *(byte *)puVar9 =
             (byte)*puVar9 + bVar11 +
             (CARRY1(bVar6,bVar6) ||
             CARRY1(bVar6 * '\x02',CARRY1(bVar12,bVar12) || CARRY1(bVar12 * '\x02',bVar7)));
        in((short)((ulonglong)uVar8 >> 0x20));
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Globalization__CultureInfo);
          func_?(&TypeInfo__System__TimeSpan);
          cRam_? = '\x01';
        }
      }
      if (method != (MethodInfo *)0x0) {
        uVar1 = mscorlib.dll::System::String::String_get_Chars((String *)method,0,(MethodInfo *)0x0)
        ;
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)method,1,2,(MethodInfo *)0x0);
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        iVar18 = mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar4,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar17,
                            (MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        if (4 < (int)this_01->invoker_method) {
          pSVar4 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)this_01,3,2,(MethodInfo *)0x0);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar17 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          method = (MethodInfo *)
                   mscorlib.dll::System::Int32::Int32_Parse_2
                             (pSVar4,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar17,
                              (MethodInfo *)0x0);
        }
        if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TVar19 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours
                           ((double)iVar18,(MethodInfo *)0x0);
        t2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                       ((double)(int)method,(MethodInfo *)0x0);
        TVar19 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar19,t2,(MethodInfo *)0x0);
        bVar2 = (bool)TVar19._ticks;
        if (uVar1 == 0x2d) {
          TVar19 = mscorlib.dll::System::TimeSpan::TimeSpan_Negate
                             ((TimeSpan *)&stack0xfffffff0,(MethodInfo *)0x0);
          bVar2 = (bool)TVar19._ticks;
        }
        return bVar2;
      }
      func_?();
      pcVar20 = (code *)swi(3);
      bVar2 = (*pcVar20)();
      return bVar2;
    }
  } while( true );
code_?:
  if (uVar1 < 0x21) {
    switch(uVar1) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
      goto code_?;
    default:
      if (uVar1 != 0x20) goto code_?;
    }
  }
  else {
    if (uVar1 == 0x2f) {
      JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
      return 1;
    }
    if (uVar1 == 0x7d) {
      (*(this->klass->vtable).SetToken.methodPtr)(this);
      return 1;
    }
code_?:
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = mscorlib.dll::System::Char::Char_IsWhiteSpace(uVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = JsonTextReader_ParseProperty(this,uVar1,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
  if ((uVar1 == 0) && ((this->fields)._end != 0)) {
    return 0;
  }
  goto code_?;
}


/* TimeSpan ReadOffset(String) */

TimeSpan Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadOffset
                   (JsonTextReader *this,String *offsetText,MethodInfo *method)

{
  pSVar1 = offsetText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if (offsetText == (String *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    TVar3._ticks = (*pcVar2)();
    return (TimeSpan)TVar3._ticks;
  }
  uVar4 = mscorlib.dll::System::String::String_get_Chars(offsetText,0,(MethodInfo *)0x0);
  s = mscorlib.dll::System::String::String_Substring_1(offsetText,1,2,(MethodInfo *)0x0);
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  iVar6 = mscorlib.dll::System::Int32::Int32_Parse_2
                    (s,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
  offsetText = (String *)0x0;
  if (4 < (pSVar1->fields)._stringLength) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1(pSVar1,3,2,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    offsetText = (String *)
                 mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar1,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar5,
                            (MethodInfo *)0x0);
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours((double)iVar6,(MethodInfo *)0x0);
  t2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                 ((double)(int)offsetText,(MethodInfo *)0x0);
  TVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar3,t2,(MethodInfo *)0x0);
  if (uVar4 == 0x2d) {
    TVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_Negate
                      ((TimeSpan *)&stack0xfffffff0,(MethodInfo *)0x0);
  }
  return (TimeSpan)TVar3._ticks;
}


/* Void ReadStringIntoBuffer(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ReadStringIntoBuffer
               (JsonTextReader *this,uint16_t quote,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
code_?:
  do {
    while( true ) {
      uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
      puStack_2 = (undefined *)(uint)uVar1;
      if (0x22 < puStack_2) break;
      if (uVar1 == 0) {
        if ((this->fields)._end != 0) {
          func_?();
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
code_?:
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          ppSVar3 = &StringLiteral_Unterminated_string__Expected_de;
code_?:
          pMVar4 = (MethodInfo *)0x0;
          pSVar5 = (String *)func_?(ppSVar3);
          JsonTextReader_CreateJsonReaderException(this,pSVar5,args,pMVar4);
          func_?();
          cVar6 = (undefined1 *)0xffffffeb < &stack0xffffffbc;
          func_?();
code_?:
          func_?();
code_?:
          func_?();
          cVar7 = func_?();
          cRam_? = cRam_? + cVar7 + cVar6;
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,0,(MethodInfo *)0x0);
      }
      else {
        if (puStack_2 == (undefined *)0x22) goto code_?;
code_?:
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,uVar1,(MethodInfo *)0x0);
      }
    }
    if (puStack_2 == (undefined *)0x27) {
code_?:
      if (uVar1 == quote) {
        return;
      }
      goto code_?;
    }
    if (puStack_2 != (undefined *)0x5c) goto code_?;
    uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    puStack_2 = (undefined *)(uint)uVar1;
    if ((uVar1 == 0) && ((this->fields)._end != 0)) {
      func_?();
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
      goto code_?;
    }
    if (puStack_2 < 0x5d) {
      if (puStack_2 < 0x28) {
        if ((puStack_2 == (undefined *)0x22) || (puStack_2 == (undefined *)0x27))
        goto code_?;
      }
      else {
        if (puStack_2 == (undefined *)0x2f) {
code_?:
          pSVar9 = (this->fields)._buffer;
          cVar6 = '\0';
          if (pSVar9 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,uVar1,(MethodInfo *)0x0);
          goto code_?;
        }
        if (puStack_2 == (undefined *)0x5c) {
          pSVar9 = (this->fields)._buffer;
          cVar6 = '\0';
          if (pSVar9 == (StringBuffer *)0x0) goto code_?;
          Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,uVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
code_?:
      func_?();
      args = (Object__Array *)func_?();
      pSVar5 = mscorlib.dll::System::Char::Char_ToString((Char *)&puStack_2,(MethodInfo *)0x0);
      pMVar4 = (MethodInfo *)0x0;
      str0 = (String *)func_?();
      mscorlib.dll::System::String::String_Concat_3(str0,pSVar5,pMVar4);
      func_?();
      func_?();
      func_?();
      puStack_2 = &stack0xffffffec;
      func_?();
      uVar10 = func_?();
      func_?();
      func_?();
      puStack_2 = (undefined *)uVar10;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      ppSVar3 = &StringLiteral_Bad_JSON_escape_sequence___0___L;
      goto code_?;
    }
    if (puStack_2 < 0x67) {
      if (puStack_2 == (undefined *)0x62) {
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,8,(MethodInfo *)0x0);
      }
      else {
        if (puStack_2 != (undefined *)0x66) goto code_?;
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,0xc,(MethodInfo *)0x0);
      }
    }
    else if (puStack_2 == (undefined *)0x6e) {
      pSVar9 = (this->fields)._buffer;
      cVar6 = '\0';
      if (pSVar9 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,10,(MethodInfo *)0x0);
    }
    else {
      switch(puStack_2) {
      case (undefined *)0x72:
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,0xd,(MethodInfo *)0x0);
        break;
      default:
        goto code_?;
      case (undefined *)0x74:
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,9,(MethodInfo *)0x0);
        break;
      case (undefined *)0x75:
        val = (Char__Array *)func_?();
        puVar11 = val->vector;
        uVar10 = 0;
        cVar6 = '\0';
        if (val == (Char__Array *)0x0) goto code_?;
        for (; (int)uVar10 < (int)val->max_length; uVar10 = uVar10 + 1) {
          uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
          puStack_2 = (undefined *)(uint)uVar1;
          if ((uVar1 == 0) && ((this->fields)._end != 0)) {
            func_?();
            args = (Object__Array *)func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            uVar12 = func_?();
            func_?();
            func_?(args,uVar12);
            func_?();
            ppSVar3 = &StringLiteral_Unexpected_end_while_parsing_uni;
            goto code_?;
          }
          cVar6 = uVar10 < val->max_length;
          if (!(bool)cVar6) goto code_?;
          *puVar11 = uVar1;
          puVar11 = puVar11 + 1;
        }
        pSVar5 = mscorlib.dll::System::String::String_CreateString_4
                           ((String *)0x0,val,(MethodInfo *)0x0);
        provider = mscorlib.dll::System::Globalization::NumberFormatInfo::
                   NumberFormatInfo_get_InvariantInfo((MethodInfo *)0x0);
        value = mscorlib.dll::System::Int32::Int32_Parse_2
                          (pSVar5,NumberStyles__Enum_HexNumber,(IFormatProvider *)provider,
                           (MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uVar1 = mscorlib.dll::System::Convert::Convert_ToChar_5(value,(MethodInfo *)0x0);
        pSVar9 = (this->fields)._buffer;
        cVar6 = '\0';
        if (pSVar9 == (StringBuffer *)0x0) goto code_?;
        Json::Utilities::StringBuffer::StringBuffer_Append(pSVar9,uVar1,(MethodInfo *)0x0);
      }
    }
  } while( true );
}


/* Boolean ValidIdentifierChar(Char) */

bool Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_ValidIdentifierChar
               (JsonTextReader *this,uint16_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._currentState = 0;
  this_00 = (List_1_Newtonsoft_Json_Linq_JTokenType_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>
                           );
  if (this_00 != (List_1_Newtonsoft_Json_Linq_JTokenType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<Newtonsoft::Json::Linq::JTokenType>__List__
              );
    (this->fields)._._stack = this_00;
    func_?(&(this->fields)._._stack,this_00);
    (this->fields)._._CloseInput_k__BackingField = 1;
    JsonReader::JsonReader_Push((JsonReader *)this,JTokenType__Enum_None,(MethodInfo *)0x0);
    if (reader == (TextReader *)0x0) goto code_?;
    (this->fields)._reader = reader;
    func_?();
    this_01 = (StringBuffer *)func_?();
    if (this_01 != (StringBuffer *)0x0) {
      Json::Utilities::StringBuffer::StringBuffer__ctor_1(this_01,0x1000,(MethodInfo *)0x0);
      (this->fields)._buffer = this_01;
      func_?(&(this->fields)._buffer,this_01);
      (this->fields)._currentLineNumber = 1;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  this_02 = (ArgumentNullException *)func_?();
  func_?();
  paramName = (String *)func_?();
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_02,paramName,(MethodInfo *)0x0);
  uStack1 = func_?();
  pAStack2 = this_02;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CultureInfo get_Culture() */

CultureInfo *
Assembly-CSharp.dll::Newtonsoft::Json::JsonTextReader::JsonTextReader_get_Culture
          (JsonTextReader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._culture;
  if (pCVar1 == (CultureInfo *)0x0) {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
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

