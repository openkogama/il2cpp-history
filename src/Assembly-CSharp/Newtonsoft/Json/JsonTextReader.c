
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  do {
    if (currentChar < 0x2a) {
      switch(currentChar) {
      case 9:
      case 10:
      case 0xd:
        break;
      case 0xb:
      case 0xc:
        goto code_?;
      default:
        if (currentChar != 0x20) {
          if (currentChar == 0x29) {
            (*(this->klass->vtable).SetToken.methodPtr)();
            return 1;
          }
          goto code_?;
        }
      }
    }
    else {
      if (currentChar < 0x30) {
        if (currentChar == 0x2c) {
          switch((this->fields)._._currentTypeContext) {
          case 0:
            (this->fields)._._currentState = 0xc;
            return 0;
          case 1:
            (this->fields)._._currentState = 4;
            return 0;
          case 2:
            (this->fields)._._currentState = 6;
            return 0;
          case 3:
            (this->fields)._._currentState = 10;
            return 0;
          default:
            func_?();
            func_?();
            this = (JsonTextReader *)
                   mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            func_?();
            pOVar1 = (Object__Array *)func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            pMVar2 = (MethodInfo *)0x0;
            provider = (CultureInfo *)this;
            pSVar3 = (String *)func_?();
            pSVar3 = Json::Utilities::StringUtils::StringUtils_FormatWith
                               (pSVar3,(IFormatProvider *)provider,pOVar1,pMVar2);
            func_?();
            pJVar4 = (JsonReaderException *)func_?();
            func_?();
            JsonReaderException::JsonReaderException__ctor_1(pJVar4,pSVar3,(MethodInfo *)0x0);
            func_?();
            func_?();
          }
          goto code_?;
        }
        if (currentChar == 0x2f) {
          JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
          return 1;
        }
      }
      else {
        if (currentChar == 0x5d) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
        if (currentChar == 0x7d) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
      }
code_?:
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = mscorlib.dll::System::Char::Char_IsWhiteSpace(currentChar,(MethodInfo *)0x0);
      if (bVar5 == 0) {
code_?:
        func_?();
        pOVar6 = (Object__Array *)func_?();
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
        uVar7 = func_?();
        func_?();
        func_?(pOVar6,uVar7);
        func_?();
        pMVar2 = (MethodInfo *)0x0;
        pOVar1 = pOVar6;
        pSVar3 = (String *)func_?(&StringLiteral_After_parsing_a_value_an_unexpec);
        pJVar4 = JsonTextReader_CreateJsonReaderException(this,pSVar3,pOVar1,pMVar2);
        func_?();
        bVar8 = (undefined1 *)0xffffffeb < &stack0xffffffcc;
        uVar9 = func_?();
        uVar10 = (uint)uVar9;
        bVar11 = (byte)((ulonglong)uVar9 >> 0x28);
        bVar12 = bVar11 - *extraout_ECX;
        pcVar13 = (char *)CONCAT22((short)((ulonglong)uVar9 >> 0x30),
                                   CONCAT11(bVar12 - bVar8,(char)((ulonglong)uVar9 >> 0x20)));
        *pcVar13 = *pcVar13 + (char)this + (bVar11 < *extraout_ECX || bVar12 < bVar8);
        puVar14 = (uint *)((int)pOVar6->vector + 1);
        *puVar14 = *puVar14 ^ uVar10;
        pbVar15 = (byte *)((int)pOVar6->vector + 1);
        *pbVar15 = *pbVar15 ^ (byte)uVar9;
        pbVar15 = (byte *)((int)pOVar6->vector + 1);
        *pbVar15 = *pbVar15 ^ (byte)uVar9;
        puVar14 = (uint *)((int)pOVar6->vector + 3);
        *puVar14 = *puVar14 ^ uVar10;
        *(JsonReaderException__Class **)((int)&pOVar6->klass + 3) = pJVar4->klass;
        puVar14 = (uint *)((int)pOVar6->vector + 7);
        *puVar14 = *puVar14 ^ uVar10;
        pcVar16 = (code *)swi(3);
        bVar5 = (*pcVar16)();
        return bVar5;
      }
    }
    currentChar = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    if ((currentChar == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
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
  pppuVar1 = _currentChar;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    pppuVar1 = _currentChar;
  }
  do {
    quote = (ushort)pppuVar1;
    if (0x5b < quote) {
      if (quote < 0x6f) {
        if (quote == 0x5d) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
        if (quote == 0x66) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = JsonTextReader_MatchValue_1
                            (this,0x66,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->False
                             ,1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            _currentChar = (uint16_t ***)((uint)_currentChar & 0xffffff);
            goto code_?;
          }
          ppppuStack_c = (uint16_t ****)0x2;
          uVar3 = func_?();
          pOVar4 = (Object__Array *)func_?();
          _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
          ppppuStack_c = (uint16_t ****)&currentChar;
          uVar3 = func_?();
          uVar5 = func_?();
          func_?();
          func_?();
          uStack_6 = (ulonglong)uVar5 << 0x20;
          func_?();
          uStack_6 = CONCAT44((this->fields)._currentLinePosition,uVar3);
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          pMVar7 = (MethodInfo *)0x0;
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
        }
        else {
          if (quote != 0x6e) goto code_?;
          bVar2 = JsonTextReader_HasNext(this,(MethodInfo *)0x0);
          if (bVar2 == 0) goto code_?;
          pTVar10 = JsonValidatingReader::JsonValidatingReader_get_ValueType
                              ((JsonValidatingReader *)this,(MethodInfo *)0x0);
          if (((uint)pTVar10 & 0xffff) != 0x75) {
            if (((uint)pTVar10 & 0xffff) == 0x65) {
              uStack_6 = ZEXT48(ppppuStack_c) << 0x20;
              JsonTextReader_ParseConstructor(this,(MethodInfo *)0x0);
              return 1;
            }
            func_?();
            func_?();
            _currentChar = (uint16_t ***)0x6e;
            func_?();
            uVar3 = func_?();
            func_?();
            func_?();
            func_?();
            pDStack_11 = (Double__Class *)(this->fields)._currentLineNumber;
            func_?();
            func_?();
            func_?();
            func_?();
            pMVar7 = (MethodInfo *)0x1;
            func_?();
            uStack_6 = CONCAT44((this->fields)._currentLinePosition,uVar3);
            func_?();
            pOVar4 = (Object__Array *)func_?();
            func_?();
            func_?();
            func_?();
            goto code_?;
          }
          if (cRam_? == '\0') {
            uStack_6 = CONCAT44(ppppuStack_c,&TypeInfo__Newtonsoft__Json__JsonConvert);
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            uStack_6 = CONCAT44(ppppuStack_c,TypeInfo__Newtonsoft__Json__JsonConvert);
            func_?();
          }
          uStack_6 = uStack_6 & 0xffffffff00000000;
          pMVar7 = (MethodInfo *)0x6e;
          pOVar4 = (Object__Array *)this;
          bVar2 = JsonTextReader_MatchValue_1
                            (this,0x6e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Null,
                             1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pDStack_11 = (Double__Class *)this;
            uStack_6 = CONCAT44(&UNK_?,uVar3);
            (*(this->klass->vtable).SetToken.methodPtr)();
            return 1;
          }
          func_?();
          ppppuVar12 = (uint16_t ****)func_?();
          _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
          func_?();
          pJVar12 = (JsonTextReader *)func_?();
          func_?();
          uStack_6 = CONCAT44(ppppuVar12,&UNK_?);
          pDStack_11 = (Double__Class *)pJVar12;
          func_?();
          func_?();
          pDStack_11 = (Double__Class *)&TypeInfo__System__Int32;
          uStack_6 = CONCAT44(&UNK_?,(int)uStack_6);
          pDStack_11 = (Double__Class *)func_?();
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          uVar3 = func_?();
          ppppuStack_c = ppppuVar12;
          func_?();
          func_?();
          pDStack_11 = (Double__Class *)0x1;
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          func_?();
          uStack_6 = ZEXT48(ppppuVar12);
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
          this = pJVar12;
        }
        goto code_?;
      }
      if (0x75 < quote) {
        if (quote == 0x7b) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
        if (quote == 0x7d) {
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        }
        goto code_?;
      }
      if (quote == 0x74) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = JsonTextReader_MatchValue_1
                          (this,0x74,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->True,1,
                           (MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
        _currentChar = (uint16_t ***)CONCAT13(1,_currentChar);
code_?:
        uStack_6 = CONCAT44((undefined1 *)((int)register0x00000010 + 0xb),TypeInfo__System__Boolean
                            );
        func_?();
        pJVar13 = this->klass;
code_?:
        (*(pJVar13->vtable).SetToken.methodPtr)();
        return 1;
      }
      if (quote != 0x75) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = JsonTextReader_MatchValue_1
                        (this,0x75,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->Undefined
                         ,1,(MethodInfo *)0x0);
      if (bVar2 != 0) goto code_?;
      func_?();
      pOVar4 = (Object__Array *)func_?();
      _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pDStack_11 = (Double__Class *)(this->fields)._currentLinePosition;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      pSVar8 = (String *)func_?();
      JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
      func_?();
      func_?();
code_?:
      func_?();
      func_?();
      _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
      func_?();
      func_?();
      func_?();
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      func_?();
      pDStack_11 = (Double__Class *)(this->fields)._currentLinePosition;
      func_?();
      pOVar4 = (Object__Array *)func_?();
      func_?();
      func_?();
      func_?();
code_?:
      pSVar8 = (String *)func_?();
      pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
code_?:
      uVar3 = func_?();
      uStack_6 = CONCAT44(uVar3,pJVar9);
      func_?();
code_?:
      ppppuStack_c = (uint16_t ****)0x2;
      uVar3 = func_?();
      pOVar14 = (Object__Array *)func_?();
      _currentChar = (uint16_t ***)(this_00->fields)._currentLineNumber;
      ppppuStack_c = (uint16_t ****)&currentChar;
      uVar3 = func_?();
      uVar5 = func_?();
      func_?();
      func_?();
      uStack_6 = (ulonglong)uVar5 << 0x20;
      func_?();
      pDStack_11 = (Double__Class *)(this_00->fields)._currentLinePosition;
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      pMVar7 = (MethodInfo *)0x0;
      pOVar4 = pOVar14;
      pSVar8 = (String *)func_?();
      pJVar9 = JsonTextReader_CreateJsonReaderException(this_00,pSVar8,pOVar4,pMVar7);
      uVar3 = func_?();
      cVar15 = (undefined1 *)0xffffffeb < &stack0xffffffe4;
      uStack_6 = CONCAT44(uVar3,pJVar9);
      uVar16 = func_?();
      sVar17 = (short)uVar16 + -1;
      cVar18 = (char)((ushort)sVar17 >> 8);
      bVar19 = (char)sVar17 + cVar18 + cVar15;
      in_AF = 9 < (bVar19 & 0xf) | in_AF;
      bVar19 = bVar19 + in_AF * -6 & 0xf;
      pcVar20 = (char *)((int)&this_00[-0x6b9346].fields._._value + 1);
      bVar21 = (byte)this_00;
      *pcVar20 = *pcVar20 + bVar21 + in_AF;
      bVar22 = 9 < bVar19 | in_AF;
      cVar18 = (cVar18 - in_AF) - bVar22;
      bVar19 = (bVar19 + bVar22 * -6 & 0xf) + cVar18 + bVar22;
      bVar22 = 9 < (bVar19 & 0xf) | bVar22;
      uVar5 = CONCAT31((int3)((uint6)uVar16 >> 8),bVar19 + bVar22 * -6) & 0xffff000f;
      bVar23 = (byte)uVar5;
      iVar24 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar18 - bVar22,bVar23));
      pbVar25 = &(this_00->fields)._end;
      bVar26 = (byte)((uint6)uVar16 >> 0x20);
      bVar19 = *pbVar25 + bVar26;
      bVar27 = CARRY1(*pbVar25,bVar26) || CARRY1(bVar19,bVar22);
      *pbVar25 = bVar19 + bVar22;
      pbVar28 = &stack0x3fe01043 + iVar24 * 2;
      bVar26 = (byte)((uint)this_00 >> 8);
      bVar19 = *pbVar28 + bVar26;
      bVar29 = CARRY1(*pbVar28,bVar26) || CARRY1(bVar19,bVar27);
      *pbVar28 = bVar19 + bVar27;
      bVar27 = CARRY1(*extraout_ECX,bVar21) || CARRY1(*extraout_ECX + bVar21,bVar29);
      *extraout_ECX = *extraout_ECX + bVar21 + bVar29;
      ppIVar30 = &pOVar14->bounds;
      bVar29 = CARRY1(*(byte *)ppIVar30,bVar23) || CARRY1(*(char *)ppIVar30 + bVar23,bVar27);
      *(byte *)ppIVar30 = *(char *)ppIVar30 + bVar23 + bVar27;
      pbVar28 = (byte *)((int)&pOVar14->bounds + 1);
      bVar19 = *pbVar28;
      bVar26 = *pbVar28 + bVar23 + 1;
      *pbVar28 = bVar26 + bVar29;
      iVar24 = iVar24 + 2;
      cVar18 = (char)((uint)iVar24 >> 8);
      bVar19 = (char)iVar24 + cVar18 + (CARRY1(bVar19,bVar23 + 1) || CARRY1(bVar26,bVar29));
      bVar22 = 9 < (bVar19 & 0xf) | bVar22;
      bVar19 = (bVar19 + bVar22 * -6 & 0xf) + cVar18;
      bVar22 = 9 < (bVar19 & 0xf) | bVar22;
      *(byte *)&pOVar14->max_length = (char)pOVar14->max_length + (bVar19 + bVar22 * -6 & 0xf) + bVar22
      ;
      in((short)((uint6)uVar16 >> 0x20));
      pTVar31 = (this->fields)._reader;
      if (pTVar31 == (TextReader *)0x0) {
        func_?();
        func_?();
        pcVar32 = (code *)swi(3);
        bVar2 = (*pcVar32)();
        return bVar2;
      }
      bVar2 = (*(pTVar31->klass->vtable).Peek.methodPtr)();
      return bVar2;
    }
    if (0x22 < quote) {
      if (quote < 0x4a) {
        switch((uint)pppuVar1 & 0xffff) {
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
          (*(this->klass->vtable).SetToken.methodPtr)();
          return 1;
        case 0x2c:
code_?:
          (*(this->klass->vtable).SetToken.methodPtr)();
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
          bVar2 = JsonTextReader_MatchValue_1
                            (this,0x2d,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                             NegativeInfinity,1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pDStack_11 = TypeInfo__System__Double;
            uVar3 = (undefined4)_UNK_?;
            uStack_6 = CONCAT44(&UNK_?,uVar3);
            func_?();
            pJVar13 = this->klass;
            goto code_?;
          }
          pDStack_11 = (Double__Class *)&TypeInfo__System__Object;
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          pDStack_11 = (Double__Class *)func_?();
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          ppppuVar12 = (uint16_t ****)func_?();
          _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
          pDStack_11 = (Double__Class *)&TypeInfo__System__Int32;
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          pDStack_11 = (Double__Class *)func_?();
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          uVar3 = func_?();
          ppppuStack_c = ppppuVar12;
          func_?();
          func_?();
          pDStack_11 = (Double__Class *)0x0;
          uStack_6 = CONCAT44(&UNK_?,uVar3);
          func_?();
          ppppuStack_c = (uint16_t ****)&ppppuStack_c;
          uVar3 = func_?();
          uVar33 = func_?();
          func_?();
          func_?();
          uStack_6 = CONCAT44(uVar33,1);
          func_?();
          method_00 = &StringLiteral_Error_parsing_negative_infinity_;
          pOVar4 = (Object__Array *)&UNK_?;
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException
                              (this,pSVar8,pOVar4,(MethodInfo *)method_00);
          break;
        case 0x2f:
          JsonTextReader_ParseComment(this,(MethodInfo *)0x0);
          return 1;
        default:
          if (quote != 0x49) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = JsonTextReader_MatchValue_1
                            (this,0x49,
                             TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->
                             PositiveInfinity,1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            uStack_6 = _UNK_?;
            func_?();
            pJVar13 = this->klass;
            goto code_?;
          }
          ppppuStack_c = (uint16_t ****)0x2;
          uVar3 = func_?();
          pOVar4 = (Object__Array *)func_?();
          _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
          ppppuStack_c = (uint16_t ****)&currentChar;
          uVar3 = func_?();
          uVar5 = func_?();
          func_?();
          func_?();
          uStack_6 = (ulonglong)uVar5 << 0x20;
          func_?();
          uStack_6 = CONCAT44((this->fields)._currentLinePosition,uVar3);
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          pMVar7 = (MethodInfo *)0x0;
          pSVar8 = (String *)func_?();
          pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
        }
      }
      else {
        if (quote != 0x4e) {
          if (quote == 0x5b) {
            (*(this->klass->vtable).SetToken.methodPtr)();
            return 1;
          }
          goto code_?;
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = JsonTextReader_MatchValue_1
                          (this,0x4e,TypeInfo__Newtonsoft__Json__JsonConvert->static_fields->NaN,1,
                           (MethodInfo *)0x0);
        if (bVar2 != 0) {
          uStack_6 = _UNK_?;
          func_?();
          pJVar13 = this->klass;
          goto code_?;
        }
        ppppuStack_c = (uint16_t ****)0x2;
        uVar3 = func_?();
        pOVar4 = (Object__Array *)func_?();
        _currentChar = (uint16_t ***)(this->fields)._currentLineNumber;
        ppppuStack_c = (uint16_t ****)&currentChar;
        uVar3 = func_?();
        uVar5 = func_?();
        func_?();
        func_?();
        uStack_6 = (ulonglong)uVar5 << 0x20;
        func_?();
        uStack_6 = CONCAT44((this->fields)._currentLinePosition,uVar3);
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        pMVar7 = (MethodInfo *)0x0;
        pSVar8 = (String *)func_?();
        pJVar9 = JsonTextReader_CreateJsonReaderException(this,pSVar8,pOVar4,pMVar7);
      }
      goto code_?;
    }
    switch((uint)pppuVar1 & 0xffff) {
    case 9:
    case 10:
    case 0xd:
      break;
    case 0xb:
    case 0xc:
code_?:
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::Char::Char_IsWhiteSpace(quote,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::Char::Char_IsNumber(quote,(MethodInfo *)0x0);
        if (((bVar2 != 0) || (quote == 0x2d)) || (quote == 0x2e)) {
code_?:
          JsonTextReader_ParseNumber(this,quote,(MethodInfo *)0x0);
          return 1;
        }
        func_?();
        func_?();
        _currentChar = (uint16_t ***)((uint)pppuVar1 & 0xffff);
        func_?();
        func_?();
        func_?();
        func_?();
        pMVar7 = (MethodInfo *)0x0;
        func_?();
        uStack_6 = CONCAT44((this->fields)._currentLineNumber,uVar3);
        func_?();
        pOVar4 = (Object__Array *)func_?();
        func_?();
        func_?();
        func_?();
        pDStack_11 = (Double__Class *)(this->fields)._currentLinePosition;
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        goto code_?;
      }
      break;
    default:
      if (quote != 0x20) {
        if (quote == 0x22) goto code_?;
        goto code_?;
      }
    }
    uVar34 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    pppuVar1 = (uint16_t ***)(uint)uVar34;
    if ((uVar34 == 0) && ((this->fields)._end != 0)) {
      return 0;
    }
  } while( true );
}


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
      pOVar2 = (Object__Array *)func_?();
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
      func_?();
      func_?();
      func_?();
      func_?();
      cVar3 = '\0';
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      uVar4 = func_?();
      func_?();
      func_?(pOVar2,uVar4);
      func_?();
      method_00 = (MethodInfo *)0x0;
      args = pOVar2;
      format = (String *)func_?(&StringLiteral_Unexpected_state___0___Line__1__);
      pJVar5 = JsonTextReader_CreateJsonReaderException(this,format,args,method_00);
      func_?();
      bVar6 = (undefined1 *)0xffffffeb < &stack0xffffffdc;
      pJVar7 = pJVar5;
      bVar8 = func_?();
      bVar9 = 0xa6 < bVar8 || CARRY1(bVar8 + 0x59,bVar6);
      bVar6 = bVar8 + 0x59 + bVar6;
      piVar10 = (int *)((int)&pOVar2->klass + 1);
      bVar11 = (byte)((uint)extraout_EDX >> 8);
      bVar8 = bVar11 + bVar6;
      bVar12 = CARRY1(bVar11,bVar6) || CARRY1(bVar8,bVar9);
      pcVar13 = (char *)CONCAT22((short)((uint)extraout_EDX >> 0x10),
                                 CONCAT11(bVar8 + bVar9,(char)extraout_EDX));
      bVar8 = *(byte *)&pJVar5->klass;
      bVar6 = *(char *)&pJVar5->klass + extraout_CH;
      *(byte *)&pJVar5->klass = bVar6 + bVar12;
      cRam_? = cRam_? + (char)extraout_EDX +
                     (CARRY1(bVar8,extraout_CH) || CARRY1(bVar6,bVar12));
      *piVar10 = *piVar10 + (int)piVar10;
      cVar14 = (char)piVar10 + *pcVar13;
      pcVar15 = (char *)CONCAT31((int3)((uint)piVar10 >> 8),cVar14);
      *pcVar15 = *pcVar15 + cVar14;
      this->klass = (JsonTextReader__Class *)(pcVar15 + (int)this->klass);
      *pcVar15 = *pcVar15 + cVar14;
      bVar8 = (byte)(pcVar13 + (int)pcVar15);
      bVar6 = bVar8 + (byte)pJVar7;
      bVar9 = CARRY1(bVar8,(byte)pJVar7) || CARRY1(bVar6,CARRY4((uint)pcVar13,(uint)pcVar15));
      pbVar16 = (byte *)((int)pOVar2[-0xac54d7].vector + 0x3d);
      bVar8 = *pbVar16;
      bVar11 = *pbVar16 + (byte)this;
      *pbVar16 = bVar11 + bVar9;
      in((short)CONCAT31((int3)((uint)(pcVar13 + (int)pcVar15) >> 8),
                         bVar6 + CARRY4((uint)pcVar13,(uint)pcVar15) + cVar3 +
                         (CARRY1(bVar8,(byte)this) || CARRY1(bVar11,bVar9))));
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      func_?();
      pcVar17 = (code *)swi(3);
      bVar1 = (*pcVar17)();
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
      pOVar3 = (Object__Array *)func_?();
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__get_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,(MethodInfo *)0x0);
      func_?();
      func_?();
      func_?();
      func_?();
      cVar4 = '\0';
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      uVar5 = func_?();
      func_?();
      func_?(pOVar3,uVar5);
      func_?();
      method_00 = (MethodInfo *)0x0;
      args = pOVar3;
      pSVar6 = (String *)func_?(&StringLiteral_Unexpected_state___0___Line__1__);
      pJVar7 = JsonTextReader_CreateJsonReaderException(this,pSVar6,args,method_00);
      func_?();
      bVar8 = (undefined1 *)0xffffffeb < &stack0xffffffdc;
      pJVar9 = pJVar7;
      bVar10 = func_?();
      bVar11 = 0xa6 < bVar10 || CARRY1(bVar10 + 0x59,bVar8);
      bVar8 = bVar10 + 0x59 + bVar8;
      piVar12 = (int *)((int)&pOVar3->klass + 1);
      bVar13 = (byte)((uint)extraout_EDX >> 8);
      bVar10 = bVar13 + bVar8;
      bVar14 = CARRY1(bVar13,bVar8) || CARRY1(bVar10,bVar11);
      pcVar15 = (char *)CONCAT22((short)((uint)extraout_EDX >> 0x10),
                                 CONCAT11(bVar10 + bVar11,(char)extraout_EDX));
      bVar10 = *(byte *)&pJVar7->klass;
      bVar8 = *(char *)&pJVar7->klass + extraout_CH;
      *(byte *)&pJVar7->klass = bVar8 + bVar14;
      cRam_? = cRam_? + (char)extraout_EDX +
                     (CARRY1(bVar10,extraout_CH) || CARRY1(bVar8,bVar14));
      *piVar12 = *piVar12 + (int)piVar12;
      cVar16 = (char)piVar12 + *pcVar15;
      pcVar17 = (char *)CONCAT31((int3)((uint)piVar12 >> 8),cVar16);
      *pcVar17 = *pcVar17 + cVar16;
      this->klass = (JsonTextReader__Class *)(pcVar17 + (int)this->klass);
      *pcVar17 = *pcVar17 + cVar16;
      bVar10 = (byte)(pcVar15 + (int)pcVar17);
      bVar8 = bVar10 + (byte)pJVar9;
      bVar11 = CARRY1(bVar10,(byte)pJVar9) || CARRY1(bVar8,CARRY4((uint)pcVar15,(uint)pcVar17));
      pbVar18 = (byte *)((int)pOVar3[-0xac54d7].vector + 0x3d);
      bVar10 = *pbVar18;
      bVar13 = *pbVar18 + (byte)this;
      *pbVar18 = bVar13 + bVar11;
      in((short)CONCAT31((int3)((uint)(pcVar15 + (int)pcVar17) >> 8),
                         bVar8 + CARRY4((uint)pcVar15,(uint)pcVar17) + cVar4 +
                         (CARRY1(bVar10,(byte)this) || CARRY1(bVar13,bVar11))));
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (method != (MethodInfo *)0x0) {
        uVar1 = mscorlib.dll::System::String::String_get_Chars((String *)method,0,(MethodInfo *)0x0)
        ;
        pSVar6 = mscorlib.dll::System::String::String_Substring_1
                           ((String *)method,1,2,(MethodInfo *)0x0);
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                            ((MethodInfo *)0x0);
        iVar20 = mscorlib.dll::System::Int32::Int32_Parse_2
                           (pSVar6,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar19,
                            (MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        if (4 < (int)this_01->invoker_method) {
          pSVar6 = mscorlib.dll::System::String::String_Substring_1
                             ((String *)this_01,3,2,(MethodInfo *)0x0);
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar19 = mscorlib.dll::System::Globalization::CultureInfo::
                    CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          method = (MethodInfo *)
                   mscorlib.dll::System::Int32::Int32_Parse_2
                             (pSVar6,NumberStyles__Enum_Integer,(IFormatProvider *)pCVar19,
                              (MethodInfo *)0x0);
        }
        if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        TVar21 = mscorlib.dll::System::TimeSpan::TimeSpan_FromHours
                           ((double)iVar20,(MethodInfo *)0x0);
        t2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                       ((double)(int)method,(MethodInfo *)0x0);
        TVar21 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar21,t2,(MethodInfo *)0x0);
        bVar2 = (bool)TVar21._ticks;
        if (uVar1 == 0x2d) {
          TVar21 = mscorlib.dll::System::TimeSpan::TimeSpan_Negate
                             ((TimeSpan *)&stack0xfffffff0,(MethodInfo *)0x0);
          bVar2 = (bool)TVar21._ticks;
        }
        return bVar2;
      }
      func_?();
      pcVar22 = (code *)swi(3);
      bVar2 = (*pcVar22)();
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
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
code_?:
  unaff_EDI = (undefined4 *)CONCAT22((short)((uint)unaff_EDI >> 0x10),quote);
code_?:
  while( true ) {
    uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    puStack_2 = (undefined *)(uint)uVar1;
    if (0x22 < puStack_2) break;
    if (uVar1 == 0) {
      if ((this->fields)._end != 0) {
        uVar3 = func_?(&TypeInfo__System__Object,3);
        unaff_EBX = (Object__Array *)func_?(uVar3);
        uVar3 = func_?(&TypeInfo__System__Char,&stack0xffffffec);
        uVar3 = func_?(uVar3);
        func_?(unaff_EBX);
        func_?(unaff_EBX,uVar3);
        func_?(0,uVar3);
        uVar3 = func_?(&TypeInfo__System__Int32,&stack0xfffffff0);
        uVar3 = func_?(uVar3);
        func_?(unaff_EBX);
        func_?(unaff_EBX,uVar3);
        func_?(1,uVar3);
        puVar4 = &stack0xfffffff4;
code_?:
        uVar3 = func_?(&TypeInfo__System__Int32,puVar4);
        unaff_EDI = (undefined4 *)func_?(uVar3);
        func_?(unaff_EBX);
        func_?(unaff_EBX,unaff_EDI);
        func_?(2,unaff_EDI);
        ppSVar5 = &StringLiteral_Unterminated_string__Expected_de;
        goto code_?;
      }
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,0,(MethodInfo *)0x0);
    }
    else {
      if (puStack_2 == (undefined *)0x22) goto code_?;
code_?:
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,uVar1,(MethodInfo *)0x0);
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
    uVar3 = func_?(&TypeInfo__System__Object);
    unaff_EBX = (Object__Array *)func_?(uVar3);
    uVar3 = func_?(&TypeInfo__System__Char);
    uVar3 = func_?(uVar3);
    func_?(unaff_EBX);
    func_?(unaff_EBX,uVar3);
    func_?(0);
    uVar3 = func_?(&TypeInfo__System__Int32,&stack0xfffffff0);
    uVar3 = func_?(uVar3);
    func_?(unaff_EBX);
    func_?(unaff_EBX,uVar3);
    func_?(1,uVar3);
    puVar4 = &stack0xffffffec;
    goto code_?;
  }
  if (puStack_2 < 0x5d) {
    if (puStack_2 < 0x28) {
      if ((puStack_2 == (undefined *)0x22) || (puStack_2 == (undefined *)0x27))
      goto code_?;
      goto code_?;
    }
    if (puStack_2 == (undefined *)0x2f) {
code_?:
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,uVar1,(MethodInfo *)0x0);
    }
    else {
      if (puStack_2 != (undefined *)0x5c) goto code_?;
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,uVar1,(MethodInfo *)0x0);
    }
    goto code_?;
  }
  if (puStack_2 < 0x67) {
    if (puStack_2 == (undefined *)0x62) {
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,8,(MethodInfo *)0x0);
      goto code_?;
    }
    if (puStack_2 == (undefined *)0x66) {
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,0xc,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    if (puStack_2 == (undefined *)0x6e) {
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,10,(MethodInfo *)0x0);
      goto code_?;
    }
    switch(puStack_2) {
    case (undefined *)0x72:
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,0xd,(MethodInfo *)0x0);
      goto code_?;
    case (undefined *)0x74:
      pSVar6 = (this->fields)._buffer;
      if (pSVar6 == (StringBuffer *)0x0) goto code_?;
      Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,9,(MethodInfo *)0x0);
      goto code_?;
    case (undefined *)0x75:
      goto code_?;
    }
  }
code_?:
  uVar3 = func_?(&TypeInfo__System__Object);
  unaff_EBX = (Object__Array *)func_?(uVar3);
  pSVar7 = mscorlib.dll::System::Char::Char_ToString((Char *)&puStack_2,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)0x0;
  str0 = (String *)func_?();
  mscorlib.dll::System::String::String_Concat_3(str0,pSVar7,pMVar8);
  func_?();
  func_?();
  func_?();
  puStack_2 = &stack0xffffffec;
  func_?();
  uVar9 = func_?();
  func_?();
  func_?(unaff_EBX);
  puStack_2 = (undefined *)uVar9;
  func_?();
  func_?();
  unaff_EDI = (undefined4 *)func_?();
  func_?(unaff_EBX);
  func_?(unaff_EBX,unaff_EDI);
  func_?();
  ppSVar5 = &StringLiteral_Bad_JSON_escape_sequence___0___L;
  goto code_?;
code_?:
  val = (Char__Array *)func_?(TypeInfo__System__Char);
  unaff_EBX = (Object__Array *)val->vector;
  unaff_EDI = (undefined4 *)0x0;
  if (val == (Char__Array *)0x0) {
code_?:
    iVar10 = func_?();
    *(char *)((int)unaff_EDI + iVar10 * 2 + 0x10) = (char)unaff_EBX;
    maxps(in_XMM0,*(undefined1 (*) [16])(unaff_EDI + 4));
    *unaff_EDI = ((JsonReaderException *)this)->klass;
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  for (; (int)unaff_EDI < (int)val->max_length; unaff_EDI = (undefined4 *)((int)unaff_EDI + 1)) {
    uVar1 = JsonTextReader_MoveNext(this,(MethodInfo *)0x0);
    puStack_2 = (undefined *)(uint)uVar1;
    if ((uVar1 == 0) && ((this->fields)._end != 0)) {
      uVar3 = func_?(&TypeInfo__System__Object,2);
      unaff_EBX = (Object__Array *)func_?(uVar3);
      uVar3 = func_?(&TypeInfo__System__Int32,&stack0xffffffec);
      uVar3 = func_?(uVar3);
      func_?(unaff_EBX);
      func_?(unaff_EBX,uVar3);
      func_?(0,uVar3);
      uVar3 = func_?(&TypeInfo__System__Int32,&stack0xfffffff0);
      unaff_EDI = (undefined4 *)func_?(uVar3);
      func_?(unaff_EBX);
      func_?(unaff_EBX,unaff_EDI);
      func_?(1,unaff_EDI);
      ppSVar5 = &StringLiteral_Unexpected_end_while_parsing_uni;
code_?:
      pMVar8 = (MethodInfo *)0x0;
      args = unaff_EBX;
      pSVar7 = (String *)func_?(ppSVar5);
      this = (JsonTextReader *)JsonTextReader_CreateJsonReaderException(this,pSVar7,args,pMVar8);
      uVar3 = func_?(&
                              MethodInfo__Newtonsoft__Json__JsonTextReader__ReadStringIntoBuffer_wchar_t_
                             );
      func_?(this,uVar3);
code_?:
      func_?();
      goto code_?;
    }
    if ((undefined4 *)val->max_length <= unaff_EDI) goto code_?;
    *(uint16_t *)&unaff_EBX->klass = uVar1;
    unaff_EBX = (Object__Array *)((int)&unaff_EBX->klass + 2);
  }
  pSVar7 = mscorlib.dll::System::String::String_CreateString_4((String *)0x0,val,(MethodInfo *)0x0);
  provider = mscorlib.dll::System::Globalization::NumberFormatInfo::
             NumberFormatInfo_get_InvariantInfo((MethodInfo *)0x0);
  unaff_EDI = (undefined4 *)
              mscorlib.dll::System::Int32::Int32_Parse_2
                        (pSVar7,NumberStyles__Enum_HexNumber,(IFormatProvider *)provider,
                         (MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  uVar1 = mscorlib.dll::System::Convert::Convert_ToChar_5((int32_t)unaff_EDI,(MethodInfo *)0x0);
  pSVar6 = (this->fields)._buffer;
  if (pSVar6 == (StringBuffer *)0x0) goto code_?;
  Json::Utilities::StringBuffer::StringBuffer_Append(pSVar6,uVar1,(MethodInfo *)0x0);
  goto code_?;
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

