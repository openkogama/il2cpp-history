
/* String FromCSharpFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  pSVar1 = (String *)0x0;
  if (text != (String *)0x0) {
    for (; pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0), pSVar3 = text,
        (int)pSVar1 < (int)pIVar2; pSVar1 = (String *)((int)&pSVar1->klass + 1)) {
      value = mscorlib.dll::System::String::String_get_Chars(text,(int32_t)pSVar1,(MethodInfo *)0x0)
      ;
      if (value != 0x5c) goto code_?;
      method = (MethodInfo *)0x0;
      pSVar1 = (String *)((int)&pSVar1->klass + 1);
      text = pSVar1;
      value = mscorlib.dll::System::String::String_get_Chars
                        (pSVar3,(int32_t)pSVar1,(MethodInfo *)0x0);
      pSVar3 = (String *)(uint)value;
      switch(pSVar3) {
      case (String *)0x72:
        if (this == (StringBuilder *)0x0) goto code_?;
        value = 0xd;
        break;
      default:
        switch(pSVar3) {
        case (String *)0x61:
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 7;
          break;
        case (String *)0x62:
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 8;
          break;
        default:
          if ((pSVar3 != (String *)0x22) && (pSVar3 != (String *)0x27)) {
            if (pSVar3 == (String *)0x55) goto code_?;
            if (pSVar3 != (String *)0x5c) {
              if (pSVar3 == (String *)0x6e) {
                if (this != (StringBuilder *)0x0) {
                  value = 10;
                  break;
                }
                goto code_?;
              }
              goto code_?;
            }
          }
code_?:
          if (this == (StringBuilder *)0x0) goto code_?;
          break;
        case (String *)0x66:
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0xc;
        }
        break;
      case (String *)0x74:
        if (this == (StringBuilder *)0x0) goto code_?;
        value = 9;
        break;
      case (String *)0x75:
      case (String *)0x78:
        goto code_?;
      case (String *)0x76:
        if (this == (StringBuilder *)0x0) goto code_?;
        value = 0xb;
      }
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
  pSVar3 = (String *)func_?(0);
code_?:
  text = pSVar3;
  arg1 = (Object *)func_?(TypeInfo__System__Char,&text);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_1
                     ((Object *)StringLiteral_Invalid_escape___,arg1,
                      (Object *)StringLiteral___in_translatable_string_,(MethodInfo *)0x0);
  this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  pMStack4 = MethodInfo__GNU__Gettext__StringEscaping__FromCSharpFormat_System__String_;
  uStack5 = 0;
  text = (String *)&UNK_?;
  method = (MethodInfo *)this_00;
  pSVar1 = (String *)func_?();
  return pSVar1;
}


/* String FromCSharpVerbatimFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromCSharpVerbatimFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  index = 0;
  if (text != (String *)0x0) {
    while( true ) {
      iVar1 = index;
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0);
      if ((int)pIVar2 <= iVar1) break;
      uVar3 = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
      if (uVar3 == 0x22) {
        index = index + 1;
        uVar3 = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
        if (uVar3 != 0x22) goto code_?;
        uVar3 = 0;
      }
      if (this == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                (this,uVar3,(MethodInfo *)0x0);
      index = index + 1;
    }
    if (this != (StringBuilder *)0x0) {
      pSVar4 = (String *)
               (*(code *)(this->klass->vtable).ToString.method)
                         (this,(this->klass->vtable).
                               System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      return pSVar4;
    }
  }
code_?:
  func_?(0);
code_?:
  this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1
            (this_00,StringLiteral_Unescaped___character_in_C__verb,(MethodInfo *)0x0);
  func_?(this_00,0,
                  MethodInfo__GNU__Gettext__StringEscaping__FromCSharpVerbatimFormat_System__String_
                 );
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* String FromGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  arg1 = (MethodInfo *)0x0;
  pMVar1 = (MethodInfo *)0x0;
  if (text != (String *)0x0) {
    while (arg1 = pMVar1, pSVar2 = text, pMVar1 = arg1,
          pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0),
          (int)pMVar1 < (int)pIVar3) {
      value = mscorlib.dll::System::String::String_get_Chars(pSVar2,(int32_t)arg1,(MethodInfo *)0x0)
      ;
      pMVar1 = arg1;
      if (value == 0x5c) {
        text = (String *)0x0;
        index = (MethodInfo *)((int)&arg1->methodPointer + 1);
        pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)0x0,(MethodInfo *)0x0);
        pSVar2 = text;
        if ((int)pIVar3 <= (int)index) goto joined_?;
        method = index;
        value = mscorlib.dll::System::String::String_get_Chars
                          (text,(int32_t)index,(MethodInfo *)0x0);
        pSVar4 = (String *)(uint)value;
        pMVar1 = index;
        arg1 = (MethodInfo *)pSVar2;
        if ((pSVar4 == (String *)0x5c) || (pSVar4 == (String *)0x22)) goto joined_?;
        if (pSVar4 == (String *)0x6e) {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 10;
        }
        else if (pSVar4 == (String *)0x74) {
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 9;
        }
        else {
          if (pSVar4 != (String *)0x72) goto code_?;
          if (this == (StringBuilder *)0x0) goto code_?;
          value = 0xd;
        }
      }
      else {
joined_?:
        index = pMVar1;
        if (this == (StringBuilder *)0x0) goto code_?;
      }
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                (this,value,(MethodInfo *)0x0);
      pMVar1 = (MethodInfo *)((int)&index->methodPointer + 1);
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
  pSVar4 = (String *)func_?(0);
code_?:
  text = pSVar4;
  arg0 = (Object *)func_?(TypeInfo__System__Char,&text);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Invalid_escape_sequence___0___in,arg0,(Object *)arg1,
                      (MethodInfo *)0x0);
  this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar2,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  text = (String *)this_00;
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}


/* String FromXml(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_FromXml
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this_00,(MethodInfo *)0x0);
  index = (String *)0x0;
  pSVar1 = index;
  if (text != (String *)0x0) {
    for (; this = text,
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0),
        pSVar1 = index, (int)index < (int)pIVar2; index = (String *)((int)&index->klass + 1)) {
      value = mscorlib.dll::System::String::String_get_Chars(text,(int32_t)index,(MethodInfo *)0x0);
      if (value == 0x26) {
        pSVar3 = (String *)
                 mscorlib.dll::System::String::String_IndexOf_3
                           (text,0x3b,(int32_t)index,(MethodInfo *)0x0);
        if (pSVar3 == (String *)0xffffffff) goto code_?;
        text = (String *)&UNK_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (this,(int32_t)((int)&index->klass + 1),
                            (int32_t)((int)pSVar3 + (-1 - (int)index)),(MethodInfo *)0x0);
        if (pSVar1 == (String *)0x0) goto code_?;
        index = pSVar3;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
          index = pSVar3;
        }
        bVar4 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_lt,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            index = (String *)&UNK_?;
            func_?(TypeInfo__System__String);
          }
          bVar4 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_gt,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            bVar4 = mscorlib.dll::System::String::String_op_Equality
                              (pSVar1,StringLiteral_amp,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              bVar4 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar1,StringLiteral_apos,(MethodInfo *)0x0);
              if (bVar4 == 0) {
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__String);
                }
                bVar4 = mscorlib.dll::System::String::String_op_Equality
                                  (pSVar1,StringLiteral_quot,(MethodInfo *)0x0);
                if (bVar4 == 0) goto code_?;
                if (this_00 == (StringBuilder *)0x0) goto code_?;
                value = 0x22;
              }
              else {
                if (this_00 == (StringBuilder *)0x0) goto code_?;
                value = 0x27;
              }
            }
            else {
              if (this_00 == (StringBuilder *)0x0) goto code_?;
              value = 0x26;
            }
          }
          else {
            if (this_00 == (StringBuilder *)0x0) goto code_?;
            value = 0x3e;
          }
        }
        else {
          if (this_00 == (StringBuilder *)0x0) goto code_?;
          value = 0x3c;
        }
      }
      else if (this_00 == (StringBuilder *)0x0) goto code_?;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                (this_00,value,(MethodInfo *)0x0);
    }
    if (this_00 != (StringBuilder *)0x0) {
      pSVar1 = (String *)
               (*(code *)(this_00->klass->vtable).ToString.method)
                         (this_00,(this_00->klass->vtable).
                                  System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr
                         );
      return pSVar1;
    }
  }
code_?:
  func_?(0);
code_?:
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Unrecogised_XML_entity___,pSVar1,StringLiteral____,
                      (MethodInfo *)0x0);
  pFVar5 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(pFVar5,pSVar1,(MethodInfo *)0x0);
  func_?();
code_?:
  pFVar5 = (FormatException *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1
            (pFVar5,StringLiteral_Unterminated_XML_entity_,(MethodInfo *)0x0);
  uStack6 = 0;
  pFStack7 = pFVar5;
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar8)();
  return pSVar1;
}


/* String ToGettextFormat(String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_ToGettextFormat
                   (String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  index = 0;
  iVar1 = 0;
  if (text != (String *)0x0) {
    while (index = iVar1,
          pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)text,(MethodInfo *)0x0), index < (int)pIVar2
          ) {
      c = mscorlib.dll::System::String::String_get_Chars(text,index,(MethodInfo *)0x0);
      switch(c) {
      case 9:
        if (this == (StringBuilder *)0x0) goto code_?;
        text = (String *)0x0;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,StringLiteral__t,(MethodInfo *)0x0);
        iVar1 = index + 1;
        break;
      case 10:
        if (this == (StringBuilder *)0x0) goto code_?;
        text = (String *)0x0;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,StringLiteral__n,(MethodInfo *)0x0);
        iVar1 = index + 1;
        break;
      default:
        if (c == 0x22) {
          if (this == (StringBuilder *)0x0) goto code_?;
          text = (String *)0x0;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,::StringLiteral___,(MethodInfo *)0x0);
          iVar1 = index + 1;
        }
        else if (c == 0x5c) {
          if (this == (StringBuilder *)0x0) goto code_?;
          text = (String *)0x0;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                    (this,::StringLiteral___,(MethodInfo *)0x0);
          iVar1 = index + 1;
        }
        else {
          if (c != 0x5f) {
            if ((((uint)(TypeInfo__System__Char->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Char->_1).cctor_started == 0)) {
              text = (String *)TypeInfo__System__Char;
              func_?();
            }
            bVar3 = mscorlib.dll::System::Char::Char_IsControl(c,(MethodInfo *)0x0);
            if (bVar3 != 0) goto code_?;
          }
          if (this == (StringBuilder *)0x0) goto code_?;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                    (this,c,(MethodInfo *)0x0);
          iVar1 = index + 1;
        }
        break;
      case 0xd:
        if (this == (StringBuilder *)0x0) goto code_?;
        text = (String *)0x0;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                  (this,StringLiteral__r,(MethodInfo *)0x0);
        iVar1 = index + 1;
      }
    }
    if (this != (StringBuilder *)0x0) {
      pSVar4 = (String *)(*(code *)(this->klass->vtable).ToString.method)(this);
      return pSVar4;
    }
  }
code_?:
  func_?(0);
code_?:
  arg0 = (Object *)func_?(TypeInfo__System__Char,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Invalid_character___0___in_trans,arg0,(Object *)text,
                      (MethodInfo *)0x0);
  this_00 = (FormatException *)func_?(TypeInfo__System__FormatException);
  mscorlib.dll::System::FormatException::FormatException__ctor_1(this_00,pSVar4,(MethodInfo *)0x0);
  pMStack5 = MethodInfo__GNU__Gettext__StringEscaping__ToGettextFormat_System__String_;
  method = (MethodInfo *)0x0;
  text = (String *)this_00;
  func_?();
  pbVar6 = &stack0x00000051 + (extraout_ECX ^ (uint)&text) * 8;
  bVar7 = *pbVar6;
  *pbVar6 = *pbVar6 + extraout_DL;
  pcVar8 = (char *)((extraout_ECX ^ (uint)&text) + 0x99104dcc);
  *pcVar8 = *pcVar8 + (char)index + CARRY1(bVar7,extraout_DL);
  pcVar9 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar9)();
  return pSVar4;
}


/* String UnEscape(StringEscaping+EscapeMode, String) */

String * Assembly-CSharp.dll::GNU::Gettext::StringEscaping::StringEscaping_UnEscape
                   (StringEscaping_EscapeMode__Enum mode,String *text,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(mode) {
  case StringEscaping_EscapeMode__Enum_None:
    return text;
  case StringEscaping_EscapeMode__Enum_CSharp:
    pSVar1 = StringEscaping_FromCSharpFormat(text,(MethodInfo *)0x0);
    return pSVar1;
  case StringEscaping_EscapeMode__Enum_CSharpVerbatim:
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    unaff_EBX = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(unaff_EBX,(MethodInfo *)0x0);
    pSVar1 = text;
    index = 0;
    if (text != (String *)0x0) {
      while (iVar2 = index,
            pIVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pSVar1,(MethodInfo *)0x0),
            iVar2 < (int)pIVar3) {
        value = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
        if (value == 0x22) {
          mode = StringEscaping_EscapeMode__Enum_None;
          index = index + 1;
          value = 0xcec1;
          uVar4 = mscorlib.dll::System::String::String_get_Chars(pSVar1,index,(MethodInfo *)0x0);
          if (uVar4 != 0x22) goto code_?;
        }
        if (unaff_EBX == (StringBuilder *)0x0) goto code_?;
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_5
                  (unaff_EBX,value,(MethodInfo *)0x0);
        index = index + 1;
      }
      if (unaff_EBX != (StringBuilder *)0x0) {
        pSVar1 = (String *)(*(code *)(unaff_EBX->klass->vtable).ToString.method)();
        return pSVar1;
      }
    }
    break;
  case StringEscaping_EscapeMode__Enum_Xml:
    pSVar1 = StringEscaping_FromXml(text,(MethodInfo *)0x0);
    return pSVar1;
  default:
    this = (FormatException *)
           func_?(TypeInfo__GNU__Gettext__StringEscaping__EscapeMode,&mode);
    if (this != (FormatException *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  this = (FormatException *)func_?();
  mscorlib.dll::System::FormatException::FormatException__ctor_1
            (this,StringLiteral_Unescaped___character_in_C__verb,(MethodInfo *)0x0);
  func_?();
code_?:
  pSVar1 = (String *)(*(code *)(this->klass->vtable).ToString.method)(this);
  pSVar5 = (StringEscaping_EscapeMode__Enum *)func_?(this);
  mode = *pSVar5;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Unknown_string_escaping_mode__,pSVar1,::StringLiteral__,
                      (MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
  bVar6 = (undefined1 *)0xffffffdf < &stack0xfffffff0;
  cVar7 = SCARRY4((int)&stack0xfffffff0,0x20);
  method = 
  MethodInfo__GNU__Gettext__StringEscaping__UnEscape_GNU__Gettext__StringEscaping__EscapeMode__System__String_
  ;
  text = (String *)0x0;
  mode = (StringEscaping_EscapeMode__Enum)this_00;
  uVar8 = func_?();
  bVar9 = (byte)uVar8;
  bVar6 = 0x99 < bVar9 | bVar6;
  uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),
                    CONCAT31((int3)((ulonglong)uVar8 >> 8),
                             bVar9 + (9 < (bVar9 & 0xf) | in_AF) * '\x06' + bVar6 * '`'));
  pcVar10 = (code *)swi(4);
  if (cVar7 == '\x01') {
    uVar8 = (*pcVar10)();
  }
  pbVar11 = (byte *)uVar8;
  bVar12 = (byte)((ulonglong)uVar8 >> 0x28);
  bVar9 = *pbVar11;
  bVar13 = *pbVar11 + bVar12;
  bVar14 = CARRY1(*pbVar11,bVar12) || CARRY1(bVar13,bVar6);
  *pbVar11 = bVar13 + bVar6;
  pcVar10 = (code *)swi(4);
  if (SCARRY1(bVar9,bVar12) != SCARRY1(bVar13,bVar6)) {
    uVar8 = (*pcVar10)();
  }
  pcVar15 = (char *)((ulonglong)uVar8 >> 0x20);
  pbVar11 = (byte *)((int)&unaff_EBX[-3].fields._maxCapacity + 2);
  bVar6 = *pbVar11;
  bVar13 = (byte)uVar8;
  bVar9 = *pbVar11;
  *pbVar11 = bVar9 + bVar13 + bVar14;
  *pcVar15 = *pcVar15 + bVar13 + (CARRY1(bVar6,bVar13) || CARRY1(bVar9 + bVar13,bVar14));
  return (String *)uVar8;
}

