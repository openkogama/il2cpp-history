
/* String ToEscapedJavaScriptString(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::JavaScriptUtils::
         JavaScriptUtils_ToEscapedJavaScriptString(String *value,MethodInfo *method)

{
  pSVar1 = JavaScriptUtils_ToEscapedJavaScriptString_1(value,0x22,1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String ToEscapedJavaScriptString(String, Char, Boolean) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::JavaScriptUtils::
         JavaScriptUtils_ToEscapedJavaScriptString_1
                   (String *value,uint16_t delimiter,bool appendDelimiters,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffcc;
  puVar5 = &stack0xffffffcc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&MethodInfo__System__Nullable<int>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<int>__get_HasValue__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSStack_6 = (String *)0x0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<int>__Nullable_int_);
    cRam_? = '\x01';
  }
  NStack_7.hasValue = 0;
  NStack_7._1_3_ = 0;
  NStack_7.value = 0;
  if (value != (String *)0x0) {
    mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
              (&NStack_7,(value->fields)._stringLength,
               MethodInfo__System__Nullable<int>__Nullable_int_);
  }
  capacity = 0x10;
  if (NStack_7.hasValue != 0) {
    capacity = NStack_7.value;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__IO__StringWriter);
    cRam_? = '\x01';
  }
  this = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
  if (this != (StringBuilder *)0x0) {
    mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_1
              (this,capacity,(MethodInfo *)0x0);
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    formatProvider =
         mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                   ((MethodInfo *)0x0);
    this_00 = (StringWriter *)func_?();
    if (this_00 != (StringWriter *)0x0) {
      mscorlib.dll::System::IO::StringWriter::StringWriter__ctor_2
                (this_00,this,(IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      NStack_7 = (Nullable_1_UInt32_)(ZEXT48(&pSStack_8) << 0x20);
      uStack_1 = 1;
      pSStack_8 = this_00;
      JavaScriptUtils_WriteEscapedJavaScriptString
                ((TextWriter *)this_00,value,delimiter,appendDelimiters,(MethodInfo *)0x0);
      if (pSStack_8 != (StringWriter *)0x0) {
        pSVar9 = (String *)
                 (*(pSStack_8->klass->vtable).ToString.methodPtr)
                           (pSStack_8,(pSStack_8->klass->vtable).ToString.method);
        uStack_1 = 0xffffffff;
        if (pSStack_8 != (StringWriter *)0x0) {
          pSStack_6 = pSVar9;
          func_?(0,TypeInfo__System__IDisposable,pSStack_8);
          *unaff_FS_OFFSET = uStack_3;
          return pSVar9;
        }
        *unaff_FS_OFFSET = uStack_3;
        return pSVar9;
      }
    }
  }
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar11)();
  return pSVar9;
}


/* Void WriteEscapedJavaScriptString(TextWriter, String, Char, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::JavaScriptUtils::
     JavaScriptUtils_WriteEscapedJavaScriptString
               (TextWriter *writer,String *value,uint16_t delimiter,bool appendDelimiters,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__u2029);
    func_?(&StringLiteral__b);
    func_?(&StringLiteral__n);
    func_?(&StringLiteral__t);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__f);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral__r);
    func_?(&StringLiteral__u2028);
    func_?(&StringLiteral__u0085);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  if (appendDelimiters != 0) {
    if (writer == (TextWriter *)0x0) goto code_?;
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,_delimiter,(writer->klass->vtable).Write.method);
  }
  if (value != (String *)0x0) {
    index = 0;
    iStack_1 = 0;
    iVar2 = 0;
    pCStack_3 = (Char__Array *)0x0;
    uVar4 = 0x2029;
    while (index < (value->fields)._stringLength) {
      c = mscorlib.dll::System::String::String_get_Chars(value,index,(MethodInfo *)0x0);
      if (c < 0x28) {
        switch(c) {
        case 8:
          pSVar5 = StringLiteral__b;
          break;
        case 9:
          pSVar5 = StringLiteral__t;
          break;
        case 10:
          pSVar5 = StringLiteral__n;
          break;
        case 0xb:
code_?:
          if (0x1f < c) goto code_?;
          uVar4 = 0;
          unaff_ESI = &UNK_?;
          pSVar5 = StringUtils::StringUtils_ToCharAsUnicode(c,(MethodInfo *)0x0);
          break;
        case 0xc:
          pSVar5 = StringLiteral__f;
          break;
        case 0xd:
          pSVar5 = StringLiteral__r;
          break;
        default:
          if (c == 0x22) {
            pSVar5 = (String *)0x0;
            if (delimiter == 0x22) {
              pSVar5 = ::StringLiteral___;
            }
          }
          else {
            if (c != 0x27) goto code_?;
            pSVar5 = (String *)0x0;
            if (delimiter == 0x27) {
              pSVar5 = ::StringLiteral___;
            }
          }
        }
      }
      else if (c < 0x86) {
        pSVar5 = ::StringLiteral___;
        if ((c != 0x5c) && (pSVar5 = StringLiteral__u0085, c != 0x85)) goto code_?;
      }
      else {
        pSVar5 = StringLiteral__u2028;
        if ((c != 0x2028) && (pSVar5 = StringLiteral__u2029, c != (uint16_t)uVar4)) {
code_?:
          pSVar5 = (String *)0x0;
        }
      }
      if (pSVar5 == (String *)0x0) {
        iVar2 = iVar2 + 1;
        index = index + 1;
      }
      else {
        if (pCStack_3 == (Char__Array *)0x0) {
          pCStack_3 = mscorlib.dll::System::String::String_ToCharArray(value,(MethodInfo *)0x0);
        }
        unaff_EDI = unaff_ESI;
        if (iVar2 < 1) {
          if (writer == (TextWriter *)0x0) goto code_?;
        }
        else {
          if (writer == (TextWriter *)0x0) goto code_?;
          func_?(0xe,writer,pCStack_3,iStack_1,iVar2);
          iVar2 = 0;
        }
        func_?(0x11,writer,pSVar5);
        iStack_1 = index + 1;
        index = index + 1;
      }
    }
    unaff_EDI = unaff_ESI;
    if (0 < iVar2) {
      if (writer == (TextWriter *)0x0) goto code_?;
      pTVar6 = writer->klass;
      if (iStack_1 == 0) {
        (*(pTVar6->vtable).Write_5.methodPtr)(writer,value,(pTVar6->vtable).Write_5.method);
        unaff_EDI = unaff_ESI;
      }
      else {
        (*(pTVar6->vtable).Write_2.methodPtr)
                  (writer,pCStack_3,iStack_1,iVar2,(pTVar6->vtable).Write_2.method);
        unaff_EDI = unaff_ESI;
      }
    }
  }
  if (appendDelimiters != 0) {
    if (writer == (TextWriter *)0x0) {
code_?:
      bVar7 = 0;
      func_?();
      pbVar8 = unaff_EDI + -0x5f;
      bVar9 = *pbVar8;
      bVar10 = *pbVar8;
      *pbVar8 = bVar10 + extraout_CH + bVar7;
      unaff_EDI[0x731048a1] =
           unaff_EDI[0x731048a1] + extraout_CH +
           (CARRY1(bVar9,extraout_CH) || CARRY1(bVar10 + extraout_CH,bVar7));
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,_delimiter,(writer->klass->vtable).Write.method);
  }
  return;
}

