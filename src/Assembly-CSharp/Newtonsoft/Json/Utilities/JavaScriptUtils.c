
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
    in_stack_1 = &StringLiteral__u2029;
    func_?();
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
    pbVar2 = _delimiter;
    if (writer == (TextWriter *)0x0) goto code_?;
    in_stack_1 = (String **)(writer->klass->vtable).Write.method;
    (*(writer->klass->vtable).Write.methodPtr)(writer,_delimiter);
  }
  if (value != (String *)0x0) {
    iVar3 = 0;
    pMStack_4 = (MethodInfo *)0x0;
    pbVar2 = (byte *)0x0;
    pCStack_5 = (Char__Array *)0x0;
    uVar6 = 0x2029;
    unaff_ESI = (MethodInfo *)in_stack_1;
    while (iVar3 < (value->fields)._stringLength) {
      pMVar7 = (MethodInfo *)0x0;
      c = mscorlib.dll::System::String::String_get_Chars(value,iVar3,(MethodInfo *)0x0);
      if (c < 0x28) {
        switch(c) {
        case 8:
          unaff_ESI = (MethodInfo *)StringLiteral__b;
          break;
        case 9:
          unaff_ESI = (MethodInfo *)StringLiteral__t;
          break;
        case 10:
          unaff_ESI = (MethodInfo *)StringLiteral__n;
          break;
        case 0xb:
code_?:
          if (0x1f < c) goto code_?;
          uVar6 = 0;
          unaff_ESI = (MethodInfo *)StringUtils::StringUtils_ToCharAsUnicode(c,(MethodInfo *)0x0);
          break;
        case 0xc:
          unaff_ESI = (MethodInfo *)StringLiteral__f;
          break;
        case 0xd:
          unaff_ESI = (MethodInfo *)StringLiteral__r;
          break;
        default:
          if (c == 0x22) {
            unaff_ESI = (MethodInfo *)0x0;
            if (delimiter == 0x22) {
              unaff_ESI = (MethodInfo *)::StringLiteral___;
            }
          }
          else {
            if (c != 0x27) goto code_?;
            unaff_ESI = (MethodInfo *)0x0;
            if (delimiter == 0x27) {
              unaff_ESI = (MethodInfo *)::StringLiteral___;
            }
          }
        }
      }
      else if (c < 0x86) {
        unaff_ESI = (MethodInfo *)::StringLiteral___;
        if ((c != 0x5c) && (unaff_ESI = (MethodInfo *)StringLiteral__u0085, c != 0x85))
        goto code_?;
      }
      else {
        unaff_ESI = (MethodInfo *)StringLiteral__u2028;
        if ((c != 0x2028) && (unaff_ESI = (MethodInfo *)StringLiteral__u2029, c != (uint16_t)uVar6)
           ) {
code_?:
          unaff_ESI = (MethodInfo *)0x0;
        }
      }
      if (unaff_ESI == (MethodInfo *)0x0) {
        pbVar2 = pbVar2 + 1;
        iVar3 = iVar3 + 1;
        unaff_ESI = pMVar7;
      }
      else {
        if (pCStack_5 == (Char__Array *)0x0) {
          pCStack_5 = mscorlib.dll::System::String::String_ToCharArray(value,(MethodInfo *)0x0);
        }
        if ((int)pbVar2 < 1) {
          if (writer == (TextWriter *)0x0) goto code_?;
        }
        else {
          if (writer == (TextWriter *)0x0) goto code_?;
          func_?(0xe,writer,pCStack_5,pMStack_4,pbVar2);
          pbVar2 = (byte *)0x0;
        }
        func_?(0x11,writer);
        pMStack_4 = (MethodInfo *)(iVar3 + 1);
        iVar3 = iVar3 + 1;
      }
    }
    if (0 < (int)pbVar2) {
      unaff_ESI = pMStack_4;
      if (writer == (TextWriter *)0x0) goto code_?;
      pTVar8 = writer->klass;
      if (pMStack_4 == (MethodInfo *)0x0) {
        unaff_ESI = (pTVar8->vtable).Write_5.method;
        (*(pTVar8->vtable).Write_5.methodPtr)(writer,value);
      }
      else {
        unaff_ESI = (pTVar8->vtable).Write_2.method;
        (*(pTVar8->vtable).Write_2.methodPtr)(writer,pCStack_5,pMStack_4,pbVar2);
      }
    }
  }
  if (appendDelimiters != 0) {
    pbVar2 = _delimiter;
    if (writer == (TextWriter *)0x0) {
code_?:
      iVar3 = func_?();
      bVar9 = &stack0xffffffdc < *(undefined1 **)(iVar3 + 0x48a43310 + extraout_ECX * 2);
      bVar10 = (byte)((uint)pbVar2 >> 8);
      bVar11 = CARRY1(*pbVar2,bVar10) || CARRY1(*pbVar2 + bVar10,bVar9);
      *pbVar2 = *pbVar2 + bVar10 + bVar9;
      *(undefined1 *)&writer->klass = *(undefined1 *)&unaff_ESI->methodPointer;
      pbVar12 = pbVar2 + -0x5c;
      bVar9 = CARRY1(*pbVar12,bVar10) || CARRY1(*pbVar12 + bVar10,bVar11);
      *pbVar12 = *pbVar12 + bVar10 + bVar11;
      bVar13 = (char)iVar3 - 2;
      pbVar12 = pbVar2 + -0x5c;
      bVar10 = *pbVar12;
      bVar14 = *pbVar12 + bVar13;
      *pbVar12 = bVar14 + bVar9;
      pbVar2[-0x5c] =
           pbVar2[-0x5c] + (char)extraout_ECX + (CARRY1(bVar10,bVar13) || CARRY1(bVar14,bVar9));
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    (*(writer->klass->vtable).Write.methodPtr)
              (writer,_delimiter,(writer->klass->vtable).Write.method);
  }
  return;
}

