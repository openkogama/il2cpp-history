
/* Void Indent() */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer_Indent
               (RecursiveTracer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if (0 < (this->fields)._Level_k__BackingField) {
    do {
      pSVar2 = StringLiteral_u0009;
      this_00 = (this->fields)._Text_k__BackingField;
      if (this_00 == (StringBuilder *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (StringLiteral_u0009 != (String *)0x0) {
        uVar4 = (this_00->fields).m_ChunkLength;
        valueCount = (StringLiteral_u0009->fields)._stringLength;
        pCVar5 = (this_00->fields).m_ChunkChars;
        if (pCVar5 == (Char__Array *)0x0) goto DAT_?;
        if ((int)(valueCount + uVar4) < (int)pCVar5->max_length) {
          if (valueCount < 3) {
            if (0 < valueCount) {
              if (valueCount < 1) goto code_?;
              if ((uint)pCVar5->max_length <= uVar4) goto code_?;
              pCVar5->vector[(int)uVar4] = (StringLiteral_u0009->fields)._firstChar;
            }
            if (1 < valueCount) {
              if ((pSVar2->fields)._stringLength < 2) {
code_?:
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                          ((MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((uint)pCVar5->max_length <= uVar4 + 1) goto code_?;
              pCVar5->vector[(longlong)(int)uVar4 + 1] = *(uint16_t *)&(pSVar2->fields).field_0x6;
            }
          }
          else {
            src = &(StringLiteral_u0009->fields)._firstChar;
            if ((uint)pCVar5->max_length <= uVar4) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            len = valueCount * 2;
            dest = pCVar5->vector + (int)uVar4;
            if (((ulonglong)((longlong)dest - (longlong)src) < (ulonglong)len) ||
               ((ulonglong)((longlong)src - (longlong)dest) < (ulonglong)len)) {
              FUN_?(dest,src,len);
            }
            else {
              mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                        ((uint8_t *)dest,(uint8_t *)src,len,(MethodInfo *)0x0);
            }
          }
          (this_00->fields).m_ChunkLength = valueCount + uVar4;
        }
        else {
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_13
                    (this_00,&(StringLiteral_u0009->fields)._firstChar,valueCount,(MethodInfo *)0x0)
          ;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->fields)._Level_k__BackingField);
  }
  return;
}


/* Void SaveToFile(String) */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
               (RecursiveTracer *this,String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StreamWriter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StreamWriter *)FUN_?(TypeInfo__System__IO__StreamWriter);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IO__StreamWriter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__IO__StreamWriter->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__EncodingHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Text__EncodingHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  encoding = mscorlib.dll::System::Text::EncodingHelper::EncodingHelper_get_UTF8Unmarked
                       ((MethodInfo *)0x0);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_6
            (this_00,fileName,0,encoding,0x400,(MethodInfo *)0x0);
  pSVar1 = (this->fields)._Text_k__BackingField;
  if (pSVar1 != (StringBuilder *)0x0) {
    uVar2 = (*(pSVar1->klass->vtable).ToString.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable).ToString.method);
    if (this_00 != (StreamWriter *)0x0) {
      (*(this_00->klass->vtable).Write_3.methodPtr)
                (this_00,uVar2,(this_00->klass->vtable).Write_3.method);
      if (this_00 != (StreamWriter *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable);
      }
      return;
    }
    FUN_?();
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RecursiveTracer() */

void Assembly-CSharp.dll::GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor
               (RecursiveTracer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._Text_k__BackingField = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Text_k__BackingField >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  (this->fields)._Level_k__BackingField = 0;
  return;
}

