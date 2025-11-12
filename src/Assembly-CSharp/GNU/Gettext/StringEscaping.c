
/* String FromCSharpFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if (text != (String *)0x0) {
    puVar2 = &(text->fields)._firstChar;
    for (; (int)uVar1 < (text->fields)._stringLength; uVar1 = uVar1 + 1) {
      if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      value = *puVar2;
      if (*puVar2 == 0x5c) {
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1)
        goto code_?;
        aCStackX_8[0].m_value = *puVar2;
        if (aCStackX_8[0].m_value < 0x5d) {
          if ((0x3a < (ushort)(aCStackX_8[0].m_value - 0x22)) ||
             (value = aCStackX_8[0].m_value,
             (0x400000000000021U >> ((ulonglong)(aCStackX_8[0].m_value - 0x22) & 0x3f) & 1) == 0)) {
code_?:
            func_?(uRam_?);
            pSVar4 = mscorlib.dll::System::Char::Char_ToString_1
                               (aCStackX_8,(IFormatProvider *)0x0,in_R8);
            str2 = (String *)func_?(&StringLiteral___in_translatable_string_);
            str0 = (String *)func_?(&StringLiteral_Invalid_escape___);
            pSVar4 = mscorlib.dll::System::String::String_Concat_5
                               (str0,pSVar4,str2,(MethodInfo *)0x0);
            uVar5 = func_?(&TypeInfo__System__FormatException);
            this_00 = (CookieException *)func_?(uVar5);
            System.dll::System::Net::CookieException::CookieException__ctor_1
                      (this_00,pSVar4,(MethodInfo *)0x0);
            uVar5 = func_?(&
                                        MethodInfo__GNU__Gettext__StringEscaping__FromCSharpFormat_System__String_
                                       );
            FUN_?(this_00,uVar5);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
          goto code_?;
        }
        if (aCStackX_8[0].m_value < 99) {
          if (aCStackX_8[0].m_value == 0x61) {
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 7;
          }
          else {
            if (aCStackX_8[0].m_value != 0x62) goto code_?;
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 8;
          }
        }
        else if (aCStackX_8[0].m_value == 0x66) {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0xc;
        }
        else {
          switch(aCStackX_8[0].m_value) {
          case 0x6e:
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 10;
            break;
          default:
            goto code_?;
          case 0x72:
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 0xd;
            break;
          case 0x74:
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 9;
            break;
          case 0x76:
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 0xb;
          }
        }
      }
      else {
code_?:
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      in_R8 = (MethodInfo *)0x0;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,value,(MethodInfo *)0x0);
      puVar2 = puVar2 + 1;
    }
    if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar4;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* String FromCSharpVerbatimFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpVerbatimFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if (text != (String *)0x0) {
    puVar2 = &(text->fields)._firstChar;
    for (; (int)uVar1 < (text->fields)._stringLength; uVar1 = uVar1 + 1) {
      if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      value = *puVar2;
      if (value == 0x22) {
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1)
        goto code_?;
        if (*puVar2 != 0x22) {
          uVar5 = func_?(&TypeInfo__System__FormatException);
          this_00 = (CookieException *)func_?(uVar5);
          pSVar4 = (String *)func_?(&StringLiteral_Unescaped___character_in_C__verb);
          System.dll::System::Net::CookieException::CookieException__ctor_1
                    (this_00,pSVar4,(MethodInfo *)0x0);
          uVar5 = func_?(&
                                      MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_
                                     );
          FUN_?(this_00,uVar5);
          pcVar3 = (code *)swi(3);
          pSVar4 = (String *)(*pcVar3)();
          return pSVar4;
        }
      }
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,value,(MethodInfo *)0x0);
      puVar2 = puVar2 + 1;
    }
    if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar4;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* String FromGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if (text != (String *)0x0) {
    uVar2 = 1;
    puVar3 = (uint16_t *)&(text->fields).field_0x6;
    puVar4 = &(text->fields)._firstChar;
    for (; (int)uVar1 < (text->fields)._stringLength; uVar1 = uVar1 + 1) {
      if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar6 = (String *)(*pcVar5)();
        return pSVar6;
      }
      auStackX_8[0] = *puVar4;
      if ((auStackX_8[0] == 0x5c) && ((int)uVar2 < (text->fields)._stringLength)) {
        if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2)
        goto code_?;
        auStackX_8[0] = *puVar3;
        if ((auStackX_8[0] == 0x5c) || (auStackX_8[0] == 0x22)) {
          if (this == (StringBuilder *)0x0) goto code_?;
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        else if (auStackX_8[0] == 0x6e) {
          if (this == (StringBuilder *)0x0) goto code_?;
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
          auStackX_8[0] = 10;
          puVar3 = puVar3 + 1;
        }
        else if (auStackX_8[0] == 0x74) {
          if (this == (StringBuilder *)0x0) goto code_?;
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
          auStackX_8[0] = 9;
          puVar3 = puVar3 + 1;
        }
        else {
          if (auStackX_8[0] != 0x72) {
            arg0 = (Object *)func_?(uRam_?,auStackX_8);
            pSVar6 = (String *)func_?(&StringLiteral_Invalid_escape_sequence___0___in);
            pSVar6 = mscorlib.dll::System::String::String_Format_1
                               (pSVar6,arg0,(Object *)text,(MethodInfo *)0x0);
            uVar7 = func_?(&TypeInfo__System__FormatException);
            this_00 = (CookieException *)func_?(uVar7);
            System.dll::System::Net::CookieException::CookieException__ctor_1
                      (this_00,pSVar6,(MethodInfo *)0x0);
            uVar7 = func_?(&
                                        MethodInfo__GNU__Gettext__StringEscaping__FromGettextFormat_System__String_
                                       );
            FUN_?(this_00,uVar7);
            pcVar5 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar5)();
            return pSVar6;
          }
          if (this == (StringBuilder *)0x0) goto code_?;
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
          auStackX_8[0] = 0xd;
          puVar3 = puVar3 + 1;
        }
      }
      else if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,auStackX_8[0],(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar6 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar6;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}


/* String FromXml(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromXml
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_apos);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_quot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_amp);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if (text != (String *)0x0) {
    while (startIndex = (int32_t)uVar1, startIndex < (text->fields)._stringLength) {
      if ((longlong)(text->fields)._stringLength <= (longlong)uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      value = (&(text->fields)._firstChar)[startIndex];
      iVar4 = startIndex;
      if (value == 0x26) {
        iVar4 = mscorlib.dll::System::String::String_IndexOf_2
                          (text,0x3b,startIndex,(text->fields)._stringLength - startIndex,
                           (MethodInfo *)0x0);
        if (iVar4 == -1) {
          uVar5 = func_?(&TypeInfo__System__FormatException);
          pCVar6 = (CookieException *)func_?(uVar5);
          pSVar3 = (String *)func_?(&StringLiteral_Unterminated_XML_entity_);
          System.dll::System::Net::CookieException::CookieException__ctor_1
                    (pCVar6,pSVar3,(MethodInfo *)0x0);
          uVar5 = func_?(&
                                      MethodInfo__GNU__Gettext__StringEscaping__FromXml_System__String_
                                     );
          FUN_?(pCVar6,uVar5);
          pcVar2 = (code *)swi(3);
          pSVar3 = (String *)(*pcVar2)();
          return pSVar3;
        }
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (text,startIndex + 1,(iVar4 - startIndex) + -1,(MethodInfo *)0x0);
        if ((pSVar3 == StringLiteral_lt) ||
           ((((pSVar3 != (String *)0x0 && (StringLiteral_lt != (String *)0x0)) &&
             ((pSVar3->fields)._stringLength == (StringLiteral_lt->fields)._stringLength)) &&
            (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar3->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_lt->fields)._firstChar,
                                (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar7 != 0)))) {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0x3c;
        }
        else if ((pSVar3 == StringLiteral_gt) ||
                (((pSVar3 != (String *)0x0 && (StringLiteral_gt != (String *)0x0)) &&
                 (((pSVar3->fields)._stringLength == (StringLiteral_gt->fields)._stringLength &&
                  (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)&(pSVar3->fields)._firstChar,
                                      (uint8_t *)&(StringLiteral_gt->fields)._firstChar,
                                      (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0
                                     ), bVar7 != 0)))))) {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0x3e;
        }
        else {
          value = 0x26;
          if ((pSVar3 == StringLiteral_amp) ||
             (((pSVar3 != (String *)0x0 && (StringLiteral_amp != (String *)0x0)) &&
              (((pSVar3->fields)._stringLength == (StringLiteral_amp->fields)._stringLength &&
               (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar3->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_amp->fields)._firstChar,
                                   (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar7 != 0)))))) goto joined_?;
          if ((pSVar3 == StringLiteral_apos) ||
             ((((pSVar3 != (String *)0x0 && (StringLiteral_apos != (String *)0x0)) &&
               ((pSVar3->fields)._stringLength == (StringLiteral_apos->fields)._stringLength)) &&
              (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar3->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_apos->fields)._firstChar,
                                  (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar7 != 0)))) {
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 0x27;
          }
          else {
            if ((pSVar3 != StringLiteral_quot) &&
               (((pSVar3 == (String *)0x0 || (StringLiteral_quot == (String *)0x0)) ||
                (((pSVar3->fields)._stringLength != (StringLiteral_quot->fields)._stringLength ||
                 (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar3->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral_quot->fields)._firstChar,
                                     (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0)
                 , bVar7 == 0)))))) {
              str2 = (String *)func_?(&::StringLiteral____);
              str0 = (String *)func_?(&StringLiteral_Unrecogised_XML_entity___);
              pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                 (str0,pSVar3,str2,(MethodInfo *)0x0);
              uVar5 = func_?(&TypeInfo__System__FormatException);
              pCVar6 = (CookieException *)func_?(uVar5);
              System.dll::System::Net::CookieException::CookieException__ctor_1
                        (pCVar6,pSVar3,(MethodInfo *)0x0);
              uVar5 = func_?(&
                                          MethodInfo__GNU__Gettext__StringEscaping__FromXml_System__String_
                                         );
              FUN_?(pCVar6,uVar5);
              pcVar2 = (code *)swi(3);
              pSVar3 = (String *)(*pcVar2)();
              return pSVar3;
            }
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 0x22;
          }
        }
      }
      else {
joined_?:
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,value,(MethodInfo *)0x0);
      uVar1 = (ulonglong)(iVar4 + 1);
    }
    if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar3;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String ToGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_ToGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__n);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__t);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__r);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  uVar1 = 0;
  if (text != (String *)0x0) {
    puVar2 = &(text->fields)._firstChar;
    while ((int)uVar1 < (text->fields)._stringLength) {
      if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      c = *puVar2;
      pSVar4 = StringLiteral__t;
      if (((c == 9) || (pSVar4 = StringLiteral__n, c == 10)) ||
         (((c != 0xb && (c != 0xc)) &&
          (((pSVar4 = StringLiteral__r, c == 0xd || (pSVar4 = ::StringLiteral___, c == 0x22)) ||
           (pSVar4 = ::StringLiteral___, c == 0x5c)))))) {
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,pSVar4,(MethodInfo *)0x0);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      else {
        if (c != 0x5f) {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          bVar5 = mscorlib.dll::System::Char::Char_IsControl(c,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            auStackX_8[0] = c;
            arg0 = (Object *)func_?(lRam_?,auStackX_8);
            pSVar4 = (String *)func_?(&StringLiteral_Invalid_character___0___in_trans);
            pSVar4 = mscorlib.dll::System::String::String_Format_1
                               (pSVar4,arg0,(Object *)text,(MethodInfo *)0x0);
            uVar6 = func_?(&TypeInfo__System__FormatException);
            this_00 = (CookieException *)func_?(uVar6);
            System.dll::System::Net::CookieException::CookieException__ctor_1
                      (this_00,pSVar4,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__GNU__Gettext__StringEscaping__ToGettextFormat_System__String_
                                       );
            FUN_?(this_00,uVar6);
            pcVar3 = (code *)swi(3);
            pSVar4 = (String *)(*pcVar3)();
            return pSVar4;
          }
        }
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6(this,c,(MethodInfo *)0x0);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    if (this != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      return pSVar4;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* String UnEscape(StringEscaping+EscapeMode, String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_UnEscape
                   (StringEscaping_EscapeMode__Enum mode,String *text,MethodInfo *method)

{
  if (mode == StringEscaping_EscapeMode__Enum_None) {
    return text;
  }
  if (mode == StringEscaping_EscapeMode__Enum_CSharp) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Text__StringBuilder);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(pSVar1,(MethodInfo *)0x0);
    uVar2 = 0;
    if (text != (String *)0x0) {
      puVar3 = &(text->fields)._firstChar;
      for (; (int)uVar2 < (text->fields)._stringLength; uVar2 = uVar2 + 1) {
        if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pSVar5 = (String *)(*pcVar4)();
          return pSVar5;
        }
        value = *puVar3;
        if (value == 0x5c) {
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
          if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2)
          goto code_?;
          value = *puVar3;
          if (value < 0x5d) {
            if ((0x3a < (ushort)(value - 0x22)) ||
               ((0x400000000000021U >> ((ulonglong)(value - 0x22) & 0x3f) & 1) == 0)) {
code_?:
              func_?(uRam_?);
              pSVar5 = mscorlib.dll::System::Char::Char_ToString_1
                                 ((Char *)&stack0x00000008,(IFormatProvider *)0x0,method);
              pSVar6 = (String *)func_?(&StringLiteral___in_translatable_string_);
              pSVar7 = (String *)func_?(&StringLiteral_Invalid_escape___);
              pSVar5 = mscorlib.dll::System::String::String_Concat_5
                                 (pSVar7,pSVar5,pSVar6,(MethodInfo *)0x0);
              uVar8 = func_?(&TypeInfo__System__FormatException);
              pCVar9 = (CookieException *)func_?(uVar8);
              System.dll::System::Net::CookieException::CookieException__ctor_1
                        (pCVar9,pSVar5,(MethodInfo *)0x0);
              uVar8 = func_?(&
                                          MethodInfo__GNU__Gettext__StringEscaping__FromCSharpFormat_System__String_
                                         );
              FUN_?(pCVar9,uVar8);
              pcVar4 = (code *)swi(3);
              pSVar5 = (String *)(*pcVar4)();
              return pSVar5;
            }
            goto code_?;
          }
          if (value < 99) {
            if (value == 0x61) {
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 7;
            }
            else {
              if (value != 0x62) goto code_?;
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 8;
            }
          }
          else if (value == 0x66) {
            if (pSVar1 == (StringBuilder *)0x0) goto code_?;
            value = 0xc;
          }
          else {
            switch(value) {
            case 0x6e:
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 10;
              break;
            default:
              goto code_?;
            case 0x72:
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 0xd;
              break;
            case 0x74:
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 9;
              break;
            case 0x76:
              if (pSVar1 == (StringBuilder *)0x0) goto code_?;
              value = 0xb;
            }
          }
        }
        else {
code_?:
          if (pSVar1 == (StringBuilder *)0x0) goto code_?;
        }
        method = (MethodInfo *)0x0;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (pSVar1,value,(MethodInfo *)0x0);
        puVar3 = puVar3 + 1;
      }
      if (pSVar1 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar5 = (String *)
                 (*(pSVar1->klass->vtable).ToString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable).ToString.method);
        return pSVar5;
      }
    }
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  if (mode == StringEscaping_EscapeMode__Enum_CSharpVerbatim) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Text__StringBuilder);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(pSVar1,(MethodInfo *)0x0);
    uVar2 = 0;
    if (text != (String *)0x0) {
      puVar3 = &(text->fields)._firstChar;
      for (; (int)uVar2 < (text->fields)._stringLength; uVar2 = uVar2 + 1) {
        if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pSVar5 = (String *)(*pcVar4)();
          return pSVar5;
        }
        uVar10 = *puVar3;
        if (uVar10 == 0x22) {
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
          if ((longlong)(text->fields)._stringLength <= (longlong)(ulonglong)uVar2)
          goto code_?;
          if (*puVar3 != 0x22) {
            uVar8 = func_?(&TypeInfo__System__FormatException);
            pCVar9 = (CookieException *)func_?(uVar8);
            pSVar5 = (String *)func_?(&StringLiteral_Unescaped___character_in_C__verb);
            System.dll::System::Net::CookieException::CookieException__ctor_1
                      (pCVar9,pSVar5,(MethodInfo *)0x0);
            uVar8 = func_?(&
                                        MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_
                                       );
            FUN_?(pCVar9,uVar8);
            pcVar4 = (code *)swi(3);
            pSVar5 = (String *)(*pcVar4)();
            return pSVar5;
          }
        }
        if (pSVar1 == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (pSVar1,uVar10,(MethodInfo *)0x0);
        puVar3 = puVar3 + 1;
      }
      if (pSVar1 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar5 = (String *)
                 (*(pSVar1->klass->vtable).ToString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable).ToString.method);
        return pSVar5;
      }
    }
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  if (mode != StringEscaping_EscapeMode__Enum_Xml) {
    uVar8 = func_?(&TypeInfo__GNU__Gettext__StringEscaping__EscapeMode);
    func_?(&stack0xffffffffffffffd8,uVar8,&stack0x00000008);
    pSVar5 = mscorlib.dll::System::Enum::Enum_ToString
                       ((Enum *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    pSVar6 = (String *)func_?(&::StringLiteral__);
    pSVar7 = (String *)func_?(&StringLiteral_Unknown_string_escaping_mode__);
    pSVar5 = mscorlib.dll::System::String::String_Concat_5(pSVar7,pSVar5,pSVar6,(MethodInfo *)0x0);
    uVar8 = func_?(&TypeInfo__System__Exception);
    this = (Exception *)func_?(uVar8);
    mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar5,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__GNU__Gettext__StringEscaping__UnEscape_GNU__Gettext__StringEscaping__EscapeMode__System__String_
                               );
    FUN_?(this,uVar8);
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_apos);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_quot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_amp);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(pSVar1,(MethodInfo *)0x0);
  uVar11 = 0;
  if (text != (String *)0x0) {
    while (startIndex = (int32_t)uVar11, startIndex < (text->fields)._stringLength) {
      if ((longlong)(text->fields)._stringLength <= (longlong)uVar11) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
      uVar10 = (&(text->fields)._firstChar)[startIndex];
      iVar12 = startIndex;
      if (uVar10 == 0x26) {
        iVar12 = mscorlib.dll::System::String::String_IndexOf_2
                          (text,0x3b,startIndex,(text->fields)._stringLength - startIndex,
                           (MethodInfo *)0x0);
        if (iVar12 == -1) {
          uVar8 = func_?(&TypeInfo__System__FormatException);
          pCVar9 = (CookieException *)func_?(uVar8);
          pSVar5 = (String *)func_?(&StringLiteral_Unterminated_XML_entity_);
          System.dll::System::Net::CookieException::CookieException__ctor_1
                    (pCVar9,pSVar5,(MethodInfo *)0x0);
          uVar8 = func_?(&
                                      MethodInfo__GNU__Gettext__StringEscaping__FromXml_System__String_
                                     );
          FUN_?(pCVar9,uVar8);
          pcVar4 = (code *)swi(3);
          pSVar5 = (String *)(*pcVar4)();
          return pSVar5;
        }
        pSVar5 = mscorlib.dll::System::String::String_Substring_1
                           (text,startIndex + 1,(iVar12 - startIndex) + -1,(MethodInfo *)0x0);
        if ((pSVar5 == StringLiteral_lt) ||
           ((((pSVar5 != (String *)0x0 && (StringLiteral_lt != (String *)0x0)) &&
             ((pSVar5->fields)._stringLength == (StringLiteral_lt->fields)._stringLength)) &&
            (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar5->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_lt->fields)._firstChar,
                                (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar13 != 0)))) {
          if (pSVar1 == (StringBuilder *)0x0) goto code_?;
          uVar10 = 0x3c;
        }
        else if ((pSVar5 == StringLiteral_gt) ||
                (((pSVar5 != (String *)0x0 && (StringLiteral_gt != (String *)0x0)) &&
                 (((pSVar5->fields)._stringLength == (StringLiteral_gt->fields)._stringLength &&
                  (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)&(pSVar5->fields)._firstChar,
                                      (uint8_t *)&(StringLiteral_gt->fields)._firstChar,
                                      (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0
                                     ), bVar13 != 0)))))) {
          if (pSVar1 == (StringBuilder *)0x0) goto code_?;
          uVar10 = 0x3e;
        }
        else {
          uVar10 = 0x26;
          if ((pSVar5 == StringLiteral_amp) ||
             (((pSVar5 != (String *)0x0 && (StringLiteral_amp != (String *)0x0)) &&
              (((pSVar5->fields)._stringLength == (StringLiteral_amp->fields)._stringLength &&
               (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar5->fields)._firstChar,
                                   (uint8_t *)&(StringLiteral_amp->fields)._firstChar,
                                   (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar13 != 0)))))) goto joined_?;
          if ((pSVar5 == StringLiteral_apos) ||
             ((((pSVar5 != (String *)0x0 && (StringLiteral_apos != (String *)0x0)) &&
               ((pSVar5->fields)._stringLength == (StringLiteral_apos->fields)._stringLength)) &&
              (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar5->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_apos->fields)._firstChar,
                                  (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar13 != 0)))) {
            if (pSVar1 == (StringBuilder *)0x0) goto code_?;
            uVar10 = 0x27;
          }
          else {
            if ((pSVar5 != StringLiteral_quot) &&
               (((pSVar5 == (String *)0x0 || (StringLiteral_quot == (String *)0x0)) ||
                (((pSVar5->fields)._stringLength != (StringLiteral_quot->fields)._stringLength ||
                 (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar5->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral_quot->fields)._firstChar,
                                     (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0)
                 , bVar13 == 0)))))) {
              pSVar6 = (String *)func_?(&::StringLiteral____);
              pSVar7 = (String *)func_?(&StringLiteral_Unrecogised_XML_entity___);
              pSVar5 = mscorlib.dll::System::String::String_Concat_5
                                 (pSVar7,pSVar5,pSVar6,(MethodInfo *)0x0);
              uVar8 = func_?(&TypeInfo__System__FormatException);
              pCVar9 = (CookieException *)func_?(uVar8);
              System.dll::System::Net::CookieException::CookieException__ctor_1
                        (pCVar9,pSVar5,(MethodInfo *)0x0);
              uVar8 = func_?(&
                                          MethodInfo__GNU__Gettext__StringEscaping__FromXml_System__String_
                                         );
              FUN_?(pCVar9,uVar8);
              pcVar4 = (code *)swi(3);
              pSVar5 = (String *)(*pcVar4)();
              return pSVar5;
            }
            if (pSVar1 == (StringBuilder *)0x0) goto code_?;
            uVar10 = 0x22;
          }
        }
      }
      else {
joined_?:
        if (pSVar1 == (StringBuilder *)0x0) goto code_?;
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (pSVar1,uVar10,(MethodInfo *)0x0);
      uVar11 = (ulonglong)(iVar12 + 1);
    }
    if (pSVar1 != (StringBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar5 = (String *)
               (*(pSVar1->klass->vtable).ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable).ToString.method);
      return pSVar5;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}

