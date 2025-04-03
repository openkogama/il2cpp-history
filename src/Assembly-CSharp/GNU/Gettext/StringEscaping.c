
/* String FromCSharpFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?();
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  index = 0;
  if (text != (String *)0x0) {
    while (index < (text->fields)._stringLength) {
      value = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
      index_00 = index;
      if (value == 0x5c) {
        index_00 = index + 1;
        value = mscorlib.dll::System::String::String_get_Chars(text,index_00,(MethodInfo *)0x0);
        if (value < 0x5d) {
          if (value < 0x28) {
            if (value == 0x22) goto code_?;
            bVar1 = value == 0x27;
          }
          else {
            if (value == 0x55) goto code_?;
            bVar1 = value == 0x5c;
          }
          if (bVar1) goto code_?;
          goto code_?;
        }
        if (value < 99) {
          if (value == 0x61) {
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,7,(MethodInfo *)0x0);
            index = index + 2;
          }
          else {
            if (value != 0x62) goto code_?;
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,8,(MethodInfo *)0x0);
            index = index + 2;
          }
        }
        else if (value == 0x66) {
          if (this == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                    (this,0xc,(MethodInfo *)0x0);
          index = index + 2;
        }
        else {
          switch(value) {
          case 0x6e:
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,10,(MethodInfo *)0x0);
            index = index + 2;
            break;
          default:
            goto code_?;
          case 0x72:
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,0xd,(MethodInfo *)0x0);
            index = index + 2;
            break;
          case 0x74:
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,9,(MethodInfo *)0x0);
            index = index + 2;
            break;
          case 0x76:
            if (this == (StringBuilder *)0x0) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                      (this,0xb,(MethodInfo *)0x0);
            index = index + 2;
          }
        }
      }
      else {
code_?:
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (this,value,(MethodInfo *)0x0);
        index = index_00 + 1;
      }
    }
    if (this != (StringBuilder *)0x0) {
      pSVar2 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
      return pSVar2;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pSVar2 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
  str2 = (String *)func_?();
  str0 = (String *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar2,str2,(MethodInfo *)0x0);
  func_?();
  this_00 = (FormatException *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  uStack3 = func_?();
  bVar4 = (undefined1 *)0xffffffbf < &stack0xffffffd8;
  pFStack5 = this_00;
  uVar6 = func_?();
  piVar7 = (int *)((ulonglong)uVar6 >> 0x20);
  pcVar8 = (char *)uVar6;
  bVar1 = CARRY4(in_stack_9,(uint)this_00) ||
           CARRY4((int)&this_00->klass + in_stack_9,(uint)bVar4);
  puVar10 = &pSVar2[-1].fields.field_0x7;
  bVar11 = (byte)((uint)extraout_ECX >> 8);
  bVar12 = CARRY1(*puVar10,bVar11) || CARRY1(*puVar10 + bVar11,bVar1);
  *puVar10 = *puVar10 + bVar11 + bVar1;
  pbVar13 = (byte *)(pcVar8 + -0x43);
  bVar4 = *pbVar13;
  bVar14 = *pbVar13;
  *pbVar13 = bVar14 + bVar11 + bVar12;
  *pcVar8 = *pcVar8 + (char)uVar6 + (CARRY1(bVar4,bVar11) || CARRY1(bVar14 + bVar11,bVar12));
  *extraout_ECX = (int)(pcVar8 + *extraout_ECX);
  *piVar7 = (int)(pcVar8 + *piVar7);
  text->klass = (String__Class *)(pcVar8 + (int)text->klass);
  *(int *)((int)extraout_ECX + (int)pcVar8) =
       (int)(pcVar8 + *(int *)((int)extraout_ECX + (int)pcVar8));
  pcVar15 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar15)();
  return pSVar2;
}


/* String FromCSharpVerbatimFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpVerbatimFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  index = 0;
  if (text != (String *)0x0) {
    for (; index < (text->fields)._stringLength; index = index + 1) {
      value = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
      if (value == 0x22) {
        index = index + 1;
        uVar1 = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
        if (uVar1 != 0x22) goto code_?;
      }
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,value,(MethodInfo *)0x0);
    }
    if (this != (StringBuilder *)0x0) {
      pSVar2 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar2;
    }
  }
code_?:
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__FormatException);
  this_00 = (FormatException *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  pSVar2 = (String *)func_?(&StringLiteral_Unescaped___character_in_C__verb);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,method_00);
  func_?(&
                  MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_
                 );
  func_?(this_00);
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
}


/* String FromGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  index_00 = 0;
  if (text != (String *)0x0) {
    index = 1;
    for (; index_00 < (text->fields)._stringLength; index_00 = index_00 + 1) {
      uVar1 = mscorlib.dll::System::String::String_get_Chars(text,index_00,(MethodInfo *)0x0);
      pSVar2 = (String *)(uint)uVar1;
      if ((pSVar2 == (String *)0x5c) && (index < (text->fields)._stringLength)) {
        uVar1 = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
        pSVar2 = (String *)(uint)uVar1;
        if ((pSVar2 == (String *)0x5c) || (pSVar2 == (String *)0x22)) {
          if (this == (StringBuilder *)0x0) goto code_?;
          index_00 = index_00 + 1;
          index = index + 1;
        }
        else if (pSVar2 == (String *)0x6e) {
          if (this == (StringBuilder *)0x0) goto code_?;
          index_00 = index_00 + 1;
          pSVar2 = (String *)0xa;
          index = index + 1;
        }
        else if (pSVar2 == (String *)0x74) {
          if (this == (StringBuilder *)0x0) goto code_?;
          index_00 = index_00 + 1;
          pSVar2 = (String *)0x9;
          index = index + 1;
        }
        else {
          if (pSVar2 != (String *)0x72) goto code_?;
          if (this == (StringBuilder *)0x0) goto code_?;
          index_00 = index_00 + 1;
          pSVar2 = (String *)0xd;
          index = index + 1;
        }
      }
      else if (this == (StringBuilder *)0x0) goto code_?;
      text._0_2_ = (uint16_t)pSVar2;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,(uint16_t)text,(MethodInfo *)0x0);
      index = index + 1;
      text = pSVar2;
    }
    if (this != (StringBuilder *)0x0) {
      pSVar2 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar2;
    }
  }
code_?:
  func_?();
code_?:
  arg1 = (Object *)func_?();
  arg0 = (Object *)func_?();
  pSVar2 = (String *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Format_1(pSVar2,arg0,arg1,(MethodInfo *)0x0);
  func_?();
  this_00 = (FormatException *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  uStack3 = func_?();
  pFStack4 = this_00;
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String FromXml(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromXml
                   (String *text,MethodInfo *method)

{
  pSVar1 = text;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral_gt);
    func_?(&StringLiteral_lt);
    func_?(&StringLiteral_apos);
    func_?(&StringLiteral_quot);
    func_?(&StringLiteral_amp);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  bVar2 = text != (String *)0x0;
  pSVar3 = (String *)0x0;
  text = (String *)0x0;
  if (bVar2) {
    for (; pSVar3 = text, (int)text < (pSVar1->fields)._stringLength;
        text = (String *)((int)&text->klass + 1)) {
      value = mscorlib.dll::System::String::String_get_Chars(pSVar1,(int32_t)text,(MethodInfo *)0x0)
      ;
      if (value == 0x26) {
        iVar4 = mscorlib.dll::System::String::String_IndexOf_1
                          (pSVar1,0x3b,(int32_t)text,(MethodInfo *)0x0);
        if (iVar4 == -1) goto code_?;
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,(int32_t)((int)&text->klass + 1),(iVar4 - (int)text) + -1,
                            (MethodInfo *)0x0);
        text = (String *)&UNK_?;
        bVar5 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar3,StringLiteral_lt,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar3,StringLiteral_gt,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            bVar5 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar3,StringLiteral_amp,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              bVar5 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar3,StringLiteral_apos,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                bVar5 = mscorlib.dll::System::String::String_op_Equality
                                  (pSVar3,StringLiteral_quot,(MethodInfo *)0x0);
                if (bVar5 == 0) goto code_?;
                if (this == (StringBuilder *)0x0) goto code_?;
                value = 0x22;
              }
              else {
                if (this == (StringBuilder *)0x0) goto code_?;
                value = 0x27;
              }
            }
            else {
              if (this == (StringBuilder *)0x0) goto code_?;
              value = 0x26;
            }
          }
          else {
            if (this == (StringBuilder *)0x0) goto code_?;
            value = 0x3e;
          }
        }
        else {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0x3c;
        }
      }
      else if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                (this,value,(MethodInfo *)0x0);
    }
    if (this != (StringBuilder *)0x0) {
      pSVar1 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar1;
    }
  }
code_?:
  func_?();
code_?:
  pSVar1 = (String *)func_?(&::StringLiteral____);
  str0 = (String *)func_?(&StringLiteral_Unrecogised_XML_entity___);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar3,pSVar1,(MethodInfo *)0x0);
  uVar6 = func_?(&TypeInfo__System__FormatException);
  pFVar7 = (FormatException *)func_?(uVar6);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(pFVar7,pSVar1,(MethodInfo *)0x0);
  func_?(&MethodInfo__GNU__Gettext__StringEscaping__FromXml_System__String_);
  func_?();
code_?:
  func_?();
  pFVar7 = (FormatException *)func_?();
  pSVar1 = (String *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(pFVar7,pSVar1,(MethodInfo *)0x0);
  uStack8 = func_?();
  pFStack9 = pFVar7;
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar10)();
  return pSVar1;
}


/* String ToGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_ToGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral__n);
    func_?(&StringLiteral__t);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__r);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  index = 0;
  if (text != (String *)0x0) {
    while (index < (text->fields)._stringLength) {
      c = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
      switch(c) {
      case 9:
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,StringLiteral__t,(MethodInfo *)0x0);
        index = index + 1;
        break;
      case 10:
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,StringLiteral__n,(MethodInfo *)0x0);
        index = index + 1;
        break;
      case 0xb:
      case 0xc:
code_?:
        if (c != 0x5f) {
          if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar1 = mscorlib.dll::System::Char::Char_IsControl(c,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
        }
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6(this,c,(MethodInfo *)0x0);
        index = index + 1;
        break;
      case 0xd:
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                  (this,StringLiteral__r,(MethodInfo *)0x0);
        index = index + 1;
        break;
      default:
        if (c == 0x22) {
          if (this == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,::StringLiteral___,(MethodInfo *)0x0);
          index = index + 1;
        }
        else {
          if (c != 0x5c) goto code_?;
          if (this == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,::StringLiteral___,(MethodInfo *)0x0);
          index = index + 1;
        }
      }
    }
    if (this != (StringBuilder *)0x0) {
      pSVar2 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar2;
    }
  }
code_?:
  func_?();
code_?:
  uVar3 = func_?(&TypeInfo__System__Char,&stack0xfffffff8);
  arg0 = (Object *)func_?(uVar3);
  method_00 = (MethodInfo *)0x0;
  pSVar2 = text;
  format = (String *)func_?(&StringLiteral_Invalid_character___0___in_trans);
  pSVar2 = mscorlib.dll::System::String::String_Format_1(format,arg0,(Object *)pSVar2,method_00);
  uVar3 = func_?(&TypeInfo__System__FormatException);
  this_00 = (FormatException *)func_?(uVar3);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  uStack4 =
       func_?(&MethodInfo__GNU__Gettext__StringEscaping__ToGettextFormat_System__String_);
  text = (String *)&UNK_?;
  method = (MethodInfo *)this_00;
  func_?();
  text = (String *)CONCAT22(text._2_2_,in_DS);
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)(&pSVar2[-1].fields.field_0x7,&stack0xfffffffc,&text,index);
  return pSVar2;
}


/* String UnEscape(StringEscaping+EscapeMode, String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_UnEscape
                   (StringEscaping_EscapeMode__Enum mode,String *text,MethodInfo *method)

{
  switch(mode) {
  case StringEscaping_EscapeMode__Enum_None:
    return text;
  case StringEscaping_EscapeMode__Enum_CSharp:
    pSVar1 = StringEscaping_FromCSharpFormat(text,(MethodInfo *)0x0);
    return pSVar1;
  case StringEscaping_EscapeMode__Enum_CSharpVerbatim:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Text__StringBuilder);
      cRam_? = '\x01';
    }
    this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    pSVar1 = text;
    index = 0;
    if (text != (String *)0x0) {
      for (; index < (pSVar1->fields)._stringLength; index = index + 1) {
        uVar2 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
        mode = (StringEscaping_EscapeMode__Enum)uVar2;
        if (mode == 0x22) {
          index = index + 1;
          uVar2 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
          if (uVar2 != 0x22) goto code_?;
        }
        if (this == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_6
                  (this,(uint16_t)mode,(MethodInfo *)0x0);
      }
      if (this != (StringBuilder *)0x0) {
        pSVar1 = (String *)(*(code *)(this->klass->vtable).ToString.method)(this);
        return pSVar1;
      }
    }
    break;
  case StringEscaping_EscapeMode__Enum_Xml:
    pSVar1 = StringEscaping_FromXml(text,(MethodInfo *)0x0);
    return pSVar1;
  default:
    uVar3 = func_?(&TypeInfo__GNU__Gettext__StringEscaping__EscapeMode,&mode);
    func_?(uVar3);
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    str2 = (String *)func_?(&::StringLiteral__);
    str0 = (String *)func_?(&StringLiteral_Unknown_string_escaping_mode__);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar3 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar3);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__GNU__Gettext__StringEscaping__UnEscape_GNU__Gettext__StringEscaping__EscapeMode__System__String_
                   );
    func_?();
code_?:
    uVar3 = func_?();
    this_01 = (FormatException *)func_?(uVar3);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_Unescaped___character_in_C__verb);
    mscorlib.dll::System::FormatException::FormatException__ctor_1(this_01,pSVar1,method_00);
    func_?();
    func_?();
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}

