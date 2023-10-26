
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* String FromCSharpFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    iVar1 = 0;
    unaff_EBX = text;
    if (text != (String *)0x0) {
      do {
        while( true ) {
          if ((text->fields)._stringLength <= iVar1) {
            pSVar2 = (String *)
                     (*(this->klass->vtable).ToString.methodPtr)
                               (this,(this->klass->vtable).ToString.method);
            return pSVar2;
          }
          uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar1,(MethodInfo *)0x0);
          iVar4 = iVar1;
          if (uVar3 == 0x5c) break;
code_?:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5(this,uVar3,method);
          iVar1 = iVar4 + 1;
        }
        iVar4 = iVar1 + 1;
        uVar3 = mscorlib.dll::System::String::String_get_Chars(text,iVar4,(MethodInfo *)0x0);
        if (uVar3 < 0x5d) {
          if (uVar3 < 0x28) {
            if (uVar3 != 0x22) {
              bVar5 = uVar3 == 0x27;
              goto code_?;
            }
          }
          else {
            if (uVar3 == 0x55) goto code_?;
            bVar5 = uVar3 == 0x5c;
code_?:
            if (!bVar5) goto code_?;
          }
          method = (MethodInfo *)0x0;
          goto code_?;
        }
        if (uVar3 < 99) {
          if (uVar3 == 0x61) {
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,7,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
          }
          else {
            if (uVar3 != 0x62) goto code_?;
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,8,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
          }
        }
        else if (uVar3 == 0x66) {
          method = (MethodInfo *)0x0;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,0xc,(MethodInfo *)0x0);
          iVar1 = iVar1 + 2;
        }
        else {
          switch(uVar3) {
          case 0x6e:
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,10,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
            break;
          default:
            goto code_?;
          case 0x72:
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0xd,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
            break;
          case 0x74:
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,9,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
            break;
          case 0x76:
            method = (MethodInfo *)0x0;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                      (this,0xb,(MethodInfo *)0x0);
            iVar1 = iVar1 + 2;
          }
        }
      } while( true );
    }
  }
  func_?();
  text = unaff_EBX;
code_?:
  pSVar2 = mscorlib.dll::System::Char::Char_ToString((Char *)&stack0xfffffff8,(MethodInfo *)0x0);
  str2 = (String *)func_?();
  str0 = (String *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar2,str2,(MethodInfo *)0x0);
  func_?();
  this_00 = (FormatException *)func_?();
  func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  uStack6 = func_?();
  bVar7 = (undefined1 *)0xffffffc3 < &stack0xfffffff4;
  pFStack8 = this_00;
  uVar9 = func_?();
  piVar10 = (int *)((ulonglong)uVar9 >> 0x20);
  pcVar11 = (char *)uVar9;
  pbVar12 = (byte *)((int)&this_00->klass + (int)pcVar11 * 2);
  bVar13 = (byte)((uint)text >> 8);
  bVar5 = CARRY1(*pbVar12,bVar13) || CARRY1(*pbVar12 + bVar13,bVar7);
  *pbVar12 = *pbVar12 + bVar13 + bVar7;
  pbVar12 = (byte *)((int)&pSVar2[4].fields._stringLength + (int)pcVar11 * 2 + 1);
  bVar14 = CARRY1(*pbVar12,bVar13) || CARRY1(*pbVar12 + bVar13,bVar5);
  *pbVar12 = *pbVar12 + bVar13 + bVar5;
  pbVar12 = (byte *)((int)extraout_ECX + -0x59efb9ba);
  bVar13 = *pbVar12;
  bVar15 = (byte)((ulonglong)uVar9 >> 0x20);
  bVar7 = *pbVar12 + bVar15;
  *pbVar12 = bVar7 + bVar14;
  *pcVar11 = *pcVar11 + (char)uVar9 + (CARRY1(bVar13,bVar15) || CARRY1(bVar7,bVar14));
  *extraout_ECX = (int)(pcVar11 + *extraout_ECX);
  *piVar10 = (int)(pcVar11 + *piVar10);
  text->klass = (String__Class *)(pcVar11 + (int)text->klass);
  *(int *)((int)extraout_ECX + (int)pcVar11) =
       (int)(pcVar11 + *(int *)((int)extraout_ECX + (int)pcVar11));
  *(undefined1 **)((int)&stack0x00000024 + (int)extraout_ECX) = &stack0xfffffffc;
  puVar16 = &stack0x00000020 + (int)extraout_ECX;
  *(int **)(&stack0x00000020 + (int)extraout_ECX) = extraout_ECX;
  if (cRam_? == '\0') {
    *(StringBuilder__Class ***)(&stack0x0000001c + (int)extraout_ECX) =
         &TypeInfo__System__Text__StringBuilder;
    puVar17 = &stack0x00000018 + (int)extraout_ECX;
    *(undefined **)(&stack0x00000018 + (int)extraout_ECX) = &UNK_?;
    func_?();
    puVar16 = puVar17 + 4;
    cRam_? = '\x01';
  }
  *(String **)(puVar16 + -4) = text;
  *(undefined1 **)(puVar16 + -8) = (undefined1 *)((int)&pSVar2->monitor + 1);
  *(FormatException **)(puVar16 + -0xc) = this_00;
  *(StringBuilder__Class **)(puVar16 + -0x10) = TypeInfo__System__Text__StringBuilder;
  puVar18 = (undefined4 *)(puVar16 + -0x14);
  *(undefined **)(puVar16 + -0x14) = &UNK_?;
  piVar10 = (int *)func_?();
  puVar19 = puVar18 + 1;
  *(int **)(&stack0x00000020 + (int)extraout_ECX) = piVar10;
  if (piVar10 != (int *)0x0) {
    *puVar18 = 0;
    puVar18[-1] = piVar10;
    puVar18[-2] = &UNK_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor
              ((StringBuilder *)puVar18[-1],(MethodInfo *)*puVar18);
    iVar1 = *(int *)((int)&stack0x0000002c + (int)extraout_ECX);
    piVar20 = puVar18 + 3;
    puVar19 = puVar18 + 3;
    iVar4 = 0;
    if (iVar1 != 0) {
      do {
        if (*(int *)(iVar1 + 8) <= iVar4) {
          iVar1 = *piVar10;
          piVar20[-1] = *(undefined4 *)(iVar1 + 0xd8);
          pcVar21 = *(code **)(iVar1 + 0xd4);
          piVar20[-2] = (int)piVar10;
          piVar20[-3] = (int)&UNK_?;
          pSVar2 = (String *)(*pcVar21)();
          return pSVar2;
        }
        piVar20[-1] = 0;
        piVar20[-2] = iVar4;
        piVar20[-3] = iVar1;
        piVar20[-4] = (int)&UNK_?;
        uVar3 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)piVar20[-3],piVar20[-2],(MethodInfo *)piVar20[-1]);
        piVar22 = piVar20 + 3;
        if (uVar3 == 0x22) {
          piVar20[2] = 0;
          iVar4 = iVar4 + 1;
          piVar20[1] = iVar4;
          *piVar20 = iVar1;
          piVar20[-1] = (int)&UNK_?;
          uVar23 = mscorlib.dll::System::String::String_get_Chars
                            ((String *)*piVar20,piVar20[1],(MethodInfo *)piVar20[2]);
          piVar22 = piVar20 + 6;
          piVar24 = piVar20 + 6;
          if (uVar23 != uVar3) goto code_?;
        }
        *(undefined4 *)((int)piVar22 + -4) = 0;
        *(uint *)((int)piVar22 + -8) = (uint)uVar3;
        piVar10 = *(int **)(&stack0x00000020 + (int)extraout_ECX);
        *(int **)((int)piVar22 + -0xc) = piVar10;
        *(undefined **)((int)piVar22 + -0x10) = &UNK_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (*(StringBuilder **)((int)piVar22 + -0xc),*(uint16_t *)((int)piVar22 + -8),
                   *(MethodInfo **)((int)piVar22 + -4));
        piVar20 = (int *)((int)piVar22 + 0xc);
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  piVar24 = (int *)((int)puVar19 + -4);
  *(undefined **)((int)puVar19 + -4) = &UNK_?;
  func_?();
code_?:
  *(FormatException__Class ***)((int)piVar24 + -4) = &TypeInfo__System__FormatException;
  puVar25 = (undefined1 *)((int)piVar24 + -8);
  *(undefined **)((int)piVar24 + -8) = &UNK_?;
  uVar26 = func_?();
  *(undefined4 *)(puVar25 + -4) = uVar26;
  puVar27 = puVar25 + -8;
  *(undefined **)(puVar25 + -8) = &UNK_?;
  uVar26 = func_?();
  *(undefined4 *)(puVar27 + -4) = uVar26;
  puVar28 = (undefined4 *)(puVar27 + -8);
  *(undefined **)(puVar27 + -8) = &UNK_?;
  func_?();
  puVar28[2] = 0;
  puVar28[1] = &StringLiteral_Unescaped___character_in_C__verb;
  *puVar28 = &UNK_?;
  uVar29 = func_?();
  *puVar28 = uVar29;
  puVar28[-1] = uVar26;
  puVar28[-2] = &UNK_?;
  mscorlib.dll::System::FormatException::FormatException__ctor_1
            ((FormatException *)puVar28[-1],(String *)*puVar28,(MethodInfo *)puVar28[1]);
  puVar28[1] = &MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_;
  *puVar28 = &UNK_?;
  uVar29 = func_?();
  *(undefined4 *)((int)puVar28 + 0xc) = uVar29;
  *(undefined4 *)((int)puVar28 + 8) = uVar26;
  *(undefined **)((int)puVar28 + 4) = &UNK_?;
  func_?();
  pcVar21 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar21)();
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
  if (this != (StringBuilder *)0x0) {
    pSVar1 = this;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    index = (StringBuilder *)0x0;
    if (text != (String *)0x0) {
      do {
        if ((text->fields)._stringLength <= (int)index) {
          pSVar2 = (String *)
                   (*(this->klass->vtable).ToString.methodPtr)
                             (this,(this->klass->vtable).ToString.method);
          return pSVar2;
        }
        value = mscorlib.dll::System::String::String_get_Chars
                          (text,(int32_t)index,(MethodInfo *)0x0);
        this = pSVar1;
        if (value == 0x22) {
          index = (StringBuilder *)((int)&index->klass + 1);
          this = index;
          uVar3 = mscorlib.dll::System::String::String_get_Chars
                            (text,(int32_t)index,(MethodInfo *)0x0);
          if (uVar3 != 0x22) goto code_?;
        }
        pSVar1 = this;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (this,value,(MethodInfo *)0x0);
        index = (StringBuilder *)((int)&index->klass + 1);
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (FormatException *)func_?();
  func_?();
  pSVar2 = (String *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  uStack4 = func_?();
  pFStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar6)();
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    index_00 = 0;
    unaff_EBX = text;
    if (text != (String *)0x0) {
      index = (StringBuilder *)0x1;
      do {
        if ((text->fields)._stringLength <= index_00) {
          pSVar1 = (String *)
                   (*(this->klass->vtable).ToString.methodPtr)
                             (this,(this->klass->vtable).ToString.method);
          return pSVar1;
        }
        value = mscorlib.dll::System::String::String_get_Chars(text,index_00,(MethodInfo *)0x0);
        if ((value == 0x5c) && ((int)index < (text->fields)._stringLength)) {
          this = index;
          value = mscorlib.dll::System::String::String_get_Chars
                            (text,(int32_t)index,(MethodInfo *)0x0);
          if ((value != 0x5c) && (value != 0x22)) {
            if (value == 0x6e) {
              value = 10;
            }
            else if (value == 0x74) {
              value = 9;
            }
            else {
              if (value != 0x72) goto code_?;
              value = 0xd;
            }
          }
          index_00 = index_00 + 1;
          index = (StringBuilder *)((int)&index->klass + 1);
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (this,value,(MethodInfo *)0x0);
        index_00 = index_00 + 1;
        index = (StringBuilder *)((int)&index->klass + 1);
      } while( true );
    }
  }
  func_?();
  text = unaff_EBX;
code_?:
  func_?();
  arg0 = (Object *)func_?();
  pSVar1 = (String *)func_?();
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (pSVar1,arg0,(Object *)text,(MethodInfo *)0x0);
  func_?();
  this_00 = (FormatException *)func_?();
  func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  uStack2 = func_?();
  pFStack3 = this_00;
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* String FromXml(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromXml
                   (String *text,MethodInfo *method)

{
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    index = (StringBuilder *)0x0;
    this_00 = this;
    if (text != (String *)0x0) {
      do {
        if ((text->fields)._stringLength <= (int)index) {
          pSVar1 = (String *)
                   (*(this_00->klass->vtable).ToString.methodPtr)
                             (this_00,(this_00->klass->vtable).ToString.method);
          return pSVar1;
        }
        value = mscorlib.dll::System::String::String_get_Chars
                          (text,(int32_t)index,(MethodInfo *)0x0);
        if (value == 0x26) {
          this_00 = index;
          iVar2 = mscorlib.dll::System::String::String_IndexOf_1
                            (text,0x3b,(int32_t)index,(MethodInfo *)0x0);
          if (iVar2 == -1) goto code_?;
          iVar3 = iVar2 - (int)index;
          ppSVar4 = &index->klass;
          index = (StringBuilder *)&UNK_?;
          this = (StringBuilder *)
                 mscorlib.dll::System::String::String_Substring_1
                           (text,(int32_t)((int)ppSVar4 + 1),iVar3 + -1,(MethodInfo *)0x0);
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)this,StringLiteral_lt,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            bVar5 = mscorlib.dll::System::String::String_op_Equality
                              ((String *)this,StringLiteral_gt,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              bVar5 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)this,StringLiteral_amp,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                bVar5 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)this,StringLiteral_apos,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  bVar5 = mscorlib.dll::System::String::String_op_Equality
                                    ((String *)this,StringLiteral_quot,(MethodInfo *)0x0);
                  if (bVar5 == 0) goto code_?;
                  value = 0x22;
                }
                else {
                  value = 0x27;
                }
              }
              else {
                value = 0x26;
              }
            }
            else {
              value = 0x3e;
            }
          }
          else {
            value = 0x3c;
          }
        }
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (this_00,value,(MethodInfo *)0x0);
        index = (StringBuilder *)((int)&index->klass + 1);
      } while( true );
    }
  }
  func_?();
code_?:
  pSVar1 = (String *)func_?();
  str0 = (String *)func_?();
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (str0,(String *)this,pSVar1,(MethodInfo *)0x0);
  func_?();
  pFVar6 = (FormatException *)func_?();
  func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(pFVar6,pSVar1,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pFVar6 = (FormatException *)func_?();
  func_?();
  pSVar1 = (String *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1(pFVar6,pSVar1,(MethodInfo *)0x0);
  uStack7 = func_?();
  pFStack8 = pFVar6;
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
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
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
    unaff_EBX = 0;
    if (text != (String *)0x0) {
      do {
        if ((text->fields)._stringLength <= unaff_EBX) {
          pSVar1 = (String *)
                   (*(this->klass->vtable).ToString.methodPtr)
                             (this,(this->klass->vtable).ToString.method);
          return pSVar1;
        }
        c = mscorlib.dll::System::String::String_get_Chars(text,unaff_EBX,(MethodInfo *)0x0);
        switch(c) {
        case 9:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,StringLiteral__t,(MethodInfo *)0x0);
          unaff_EBX = unaff_EBX + 1;
          break;
        case 10:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,StringLiteral__n,(MethodInfo *)0x0);
          unaff_EBX = unaff_EBX + 1;
          break;
        case 0xb:
        case 0xc:
code_?:
          if (c != 0x5f) {
            if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar2 = mscorlib.dll::System::Char::Char_IsControl(c,(MethodInfo *)0x0);
            if (bVar2 != 0) goto code_?;
          }
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,c,(MethodInfo *)0x0);
          unaff_EBX = unaff_EBX + 1;
          break;
        case 0xd:
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this,StringLiteral__r,(MethodInfo *)0x0);
          unaff_EBX = unaff_EBX + 1;
          break;
        default:
          if (c == 0x22) {
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            unaff_EBX = unaff_EBX + 1;
          }
          else {
            if (c != 0x5c) goto code_?;
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this,::StringLiteral___,(MethodInfo *)0x0);
            unaff_EBX = unaff_EBX + 1;
          }
        }
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  arg0 = (Object *)func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?(&StringLiteral_Invalid_character___0___in_trans);
  pSVar1 = mscorlib.dll::System::String::String_Format_1(pSVar1,arg0,(Object *)text,method_00);
  func_?();
  this_00 = (FormatException *)func_?();
  func_?(this_00);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  uStack3 =
       func_?(&MethodInfo__GNU__Gettext__StringEscaping__ToGettextFormat_System__String_);
  pFStack4 = this_00;
  bVar5 = func_?();
  pbVar6 = (byte *)(extraout_EDX + 0x4d);
  bVar7 = CARRY1(*pbVar6,bVar5) || CARRY1(*pbVar6 + bVar5,in_stack_8 < extraout_ECX);
  *pbVar6 = *pbVar6 + bVar5 + (in_stack_8 < extraout_ECX);
  puVar9 = &pSVar1[-0x49efb9c].fields.field_0x6;
  bVar5 = *puVar9;
  bVar10 = (byte)((uint)extraout_EDX >> 8);
  bVar11 = *puVar9 + bVar10;
  *puVar9 = bVar11 + bVar7;
  *(char *)(unaff_EBX + 0x4d) =
       *(char *)(unaff_EBX + 0x4d) + (char)unaff_EBX + (CARRY1(bVar5,bVar10) || CARRY1(bVar11,bVar7));
  pcVar12 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar12)();
  return pSVar1;
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
    bVar2 = 0;
    mode = (StringEscaping_EscapeMode__Enum)this;
    if (this != (StringBuilder *)0x0) {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
      pSVar1 = text;
      unaff_ESI = (FormatException *)0x0;
      bVar2 = 0;
      if (text != (String *)0x0) {
        do {
          if ((pSVar1->fields)._stringLength <= (int)unaff_ESI) {
            pSVar1 = (String *)
                     (*(this->klass->vtable).ToString.methodPtr)
                               (this,(this->klass->vtable).ToString.method);
            return pSVar1;
          }
          value = mscorlib.dll::System::String::String_get_Chars
                            (pSVar1,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          if (value == 0x22) {
            unaff_ESI = (FormatException *)((int)&unaff_ESI->klass + 1);
            uVar3 = mscorlib.dll::System::String::String_get_Chars
                              (pSVar1,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            if (uVar3 != 0x22) goto code_?;
          }
          this = (StringBuilder *)mode;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    ((StringBuilder *)mode,value,(MethodInfo *)0x0);
          unaff_ESI = (FormatException *)((int)&unaff_ESI->klass + 1);
        } while( true );
      }
    }
    break;
  case StringEscaping_EscapeMode__Enum_Xml:
    pSVar1 = StringEscaping_FromXml(text,(MethodInfo *)0x0);
    return pSVar1;
  default:
    uVar4 = func_?(&TypeInfo__GNU__Gettext__StringEscaping__EscapeMode,&mode);
    func_?(uVar4);
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    str2 = (String *)func_?(&::StringLiteral__);
    str0 = (String *)func_?(&StringLiteral_Unknown_string_escaping_mode__);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar4 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar4);
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__GNU__Gettext__StringEscaping__UnEscape_GNU__Gettext__StringEscaping__EscapeMode__System__String_
                   );
    func_?();
code_?:
    func_?();
    unaff_ESI = (FormatException *)func_?();
    func_?();
    method_00 = (MethodInfo *)0x0;
    pSVar1 = (String *)func_?();
    mscorlib.dll::System::FormatException::FormatException__ctor_1(unaff_ESI,pSVar1,method_00);
    method = (MethodInfo *)func_?();
    bVar2 = (undefined1 *)0xffffffef < &stack0x00000000;
    mode = (StringEscaping_EscapeMode__Enum)&UNK_?;
    text = (String *)unaff_ESI;
    func_?();
  }
  func_?();
  pcVar5 = (char *)((int)&unaff_ESI[-0xb8a9b1].fields._._._innerException + 3);
  *pcVar5 = *pcVar5 + extraout_CL + (0xb9 < extraout_DL || CARRY1(extraout_DL + 0x46,bVar2));
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}

