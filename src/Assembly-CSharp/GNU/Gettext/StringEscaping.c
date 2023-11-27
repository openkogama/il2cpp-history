
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  index = (FormatException *)0x0;
  if (text == (String *)0x0) goto code_?;
code_?:
  do {
    while( true ) {
      if ((text->fields)._stringLength <= (int)index) {
        if (this != (StringBuilder *)0x0) {
          pSVar1 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
          return pSVar1;
        }
        goto code_?;
      }
      value = mscorlib.dll::System::String::String_get_Chars(text,(int32_t)index,(MethodInfo *)0x0);
      this_00 = index;
      if (value == 0x5c) break;
code_?:
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                (this,value,(MethodInfo *)0x0);
code_?:
      index = (FormatException *)((int)&this_00->klass + 1);
    }
    this_00 = (FormatException *)((int)&index->klass + 1);
    value = mscorlib.dll::System::String::String_get_Chars(text,(int32_t)this_00,(MethodInfo *)0x0);
    if (value < 0x5d) {
      if (value < 0x28) {
        if (value == 0x22) goto code_?;
        bVar2 = value == 0x27;
      }
      else {
        if (value == 0x55) goto code_?;
        bVar2 = value == 0x5c;
      }
      if (bVar2) goto code_?;
code_?:
      while( true ) {
        func_?();
        func_?();
        pSVar1 = mscorlib.dll::System::Char::Char_ToString
                           ((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
        str2 = (String *)func_?();
        str0 = (String *)func_?();
        this = (StringBuilder *)
               mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,str2,(MethodInfo *)0x0);
        func_?();
        this_00 = (FormatException *)func_?();
        mscorlib.dll::System::FormatException::FormatException__ctor_1
                  (this_00,(String *)this,(MethodInfo *)0x0);
        func_?();
        bVar3 = (undefined1 *)0xffffffbf < &stack0xffffffd8;
        bVar2 = SCARRY4((int)&stack0xffffffd8,0x40);
        uVar4 = func_?();
        piVar5 = (int *)((ulonglong)uVar4 >> 0x20);
        pcVar6 = (char *)uVar4;
        if (bVar2) {
          pbVar7 = (byte *)((int)piVar5 + -0x6e);
          bVar8 = (byte)((uint)text >> 8);
          bVar9 = *pbVar7 + bVar8;
          bVar2 = CARRY1(*pbVar7,bVar8) || CARRY1(bVar9,bVar3);
          *pbVar7 = bVar9 + bVar3;
          pbVar7 = (byte *)((int)&this[-0x3088f7b].klass + 3);
          bVar3 = (byte)extraout_ECX;
          bVar10 = CARRY1(*pbVar7,bVar3) || CARRY1(*pbVar7 + bVar3,bVar2);
          *pbVar7 = *pbVar7 + bVar3 + bVar2;
          bVar9 = (byte)uVar4;
          piVar11 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar3 + bVar9 + bVar10);
          *pcVar6 = *pcVar6 + bVar9 + (CARRY1(bVar3,bVar9) || CARRY1(bVar3 + bVar9,bVar10));
          *piVar11 = (int)(pcVar6 + *piVar11);
          *piVar5 = (int)(pcVar6 + *piVar5);
          text->klass = (String__Class *)(pcVar6 + (int)text->klass);
          *(int *)((int)piVar11 + (int)pcVar6) = (int)(pcVar6 + *(int *)((int)piVar11 + (int)pcVar6));
          pcVar12 = (code *)swi(3);
          pSVar1 = (String *)(*pcVar12)();
          return pSVar1;
        }
        bVar2 = bStack_13 < (byte)text;
        bVar9 = bStack_13 - (byte)text;
        bStack_13 = bVar9 - bVar3;
        if (-1 < (int)&stack0xfffffff4) break;
        (**(code **)(pcVar6 + (int)register0x00000010 + ((bVar2 || bVar9 < bVar3) - 0x1c)))();
      }
      goto code_?;
    }
    if (0x62 < value) {
      if (value == 0x66) {
        if (this != (StringBuilder *)0x0) {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,0xc,(MethodInfo *)0x0);
          index = (FormatException *)((int)&index->klass + 2);
          goto code_?;
        }
      }
      else {
        switch(value) {
        case 0x6e:
          if (this != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,10,(MethodInfo *)0x0);
            index = (FormatException *)((int)&index->klass + 2);
            goto code_?;
          }
          break;
        default:
          goto code_?;
        case 0x72:
          if (this != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0xd,(MethodInfo *)0x0);
            index = (FormatException *)((int)&index->klass + 2);
            goto code_?;
          }
          break;
        case 0x74:
          if (this != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,9,(MethodInfo *)0x0);
            index = (FormatException *)((int)&index->klass + 2);
            goto code_?;
          }
          break;
        case 0x76:
          if (this != (StringBuilder *)0x0) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0xb,(MethodInfo *)0x0);
            index = (FormatException *)((int)&index->klass + 2);
            goto code_?;
          }
        }
      }
code_?:
      func_?();
      goto code_?;
    }
    if (value == 0x61) {
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,7,(MethodInfo *)0x0);
      index = (FormatException *)((int)&index->klass + 2);
    }
    else {
      if (value != 0x62) goto code_?;
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,8,(MethodInfo *)0x0);
      index = (FormatException *)((int)&index->klass + 2);
    }
  } while( true );
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
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
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
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
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
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__r);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?();
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
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,c,(MethodInfo *)0x0);
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
      pSVar2 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
      return pSVar2;
    }
  }
code_?:
  func_?();
code_?:
  do {
    func_?();
    arg0 = (Object *)func_?();
    method_00 = (MethodInfo *)0x0;
    pSVar2 = (String *)func_?(&StringLiteral_Invalid_character___0___in_trans);
    pSVar2 = mscorlib.dll::System::String::String_Format_1(pSVar2,arg0,(Object *)text,method_00);
    func_?();
    this_00 = (FormatException *)func_?();
    mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0)
    ;
    func_?();
    bVar3 = (undefined1 *)0xffffffd7 < &stack0xffffffe8;
    cVar4 = SCARRY4((int)&stack0xffffffe8,0x28);
    cVar5 = (int)&stack0x00000010 < 0;
    bVar6 = &stack0x00000000 == (undefined1 *)0xfffffff0;
    text = (String *)&UNK_?;
    iVar7 = func_?();
  } while (bVar6 || cVar4 != cVar5);
  ppSVar8 = &this_00[0xb20117].fields._._._stackTraceString;
  bVar9 = *(byte *)ppSVar8;
  bVar10 = *(char *)ppSVar8 + (byte)index;
  *(byte *)ppSVar8 = bVar10 + bVar3;
  *(char *)(iVar7 >> 0x1f) =
       *(char *)(iVar7 >> 0x1f) + (char)(iVar7 >> 0x1f) +
       (CARRY1(bVar9,(byte)index) || CARRY1(bVar10,bVar3));
  pcVar11 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar11)();
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
    unaff_EBX = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(unaff_EBX,(MethodInfo *)0x0);
    this = (Exception *)text;
    index = 0;
    if (text != (String *)0x0) {
      for (; index < (((String *)this)->fields)._stringLength; index = index + 1) {
        uVar2 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)this,index,(MethodInfo *)0x0);
        mode = (StringEscaping_EscapeMode__Enum)uVar2;
        if (mode == 0x22) {
          index = index + 1;
          uVar2 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)this,index,(MethodInfo *)0x0);
          if (uVar2 != 0x22) goto code_?;
        }
        if (unaff_EBX == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (unaff_EBX,(uint16_t)mode,(MethodInfo *)0x0);
      }
      if (unaff_EBX != (StringBuilder *)0x0) {
        pSVar1 = (String *)
                 (*(code *)(unaff_EBX->klass->vtable).ToString.method)
                           (unaff_EBX,
                            (unaff_EBX->klass->vtable).
                            System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    this = (Exception *)func_?(uVar3);
    mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar1,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__GNU__Gettext__StringEscaping__UnEscape_GNU__Gettext__StringEscaping__EscapeMode__System__String_
                   );
    func_?();
code_?:
    uVar3 = func_?(&TypeInfo__System__FormatException);
    this_00 = (FormatException *)func_?(uVar3);
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?(&StringLiteral_Unescaped___character_in_C__verb);
    mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar1,method_00);
    func_?(&
                    MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_
                   );
    func_?();
  }
code_?:
  func_?();
  pSVar4 = *(StringBuilder **)(extraout_EDX + -0x65bbefb2);
  pbVar5 = (byte *)((int)&this[-2].fields._remoteStackIndex + 2);
  bVar6 = *pbVar5;
  bVar7 = (byte)extraout_EDX;
  bVar8 = *pbVar5;
  *pbVar5 = bVar8 + bVar7 + (unaff_EBX < pSVar4);
  *extraout_EDX =
       *extraout_EDX + bVar7 + (CARRY1(bVar6,bVar7) || CARRY1(bVar8 + bVar7,unaff_EBX < pSVar4));
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
  return pSVar1;
}

