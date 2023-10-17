
/* Void Encode(Byte[], Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_Encode
               (Base64Encoder *this,Byte__Array *buffer,int32_t index,int32_t count,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
  if (buffer == (Byte__Array *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar1);
    func_?(this_00);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_buffer);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar3,pMVar2);
    uVar1 = func_?(&
                            MethodInfo__Newtonsoft__Json__Utilities__Base64Encoder__Encode_System__Byte_____int__int_
                           );
    func_?(this_00,uVar1);
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    if (index < 0) goto code_?;
    if ((-1 < count) && (count <= (int)(buffer->max_length - index))) {
      if ((this->fields)._leftOverBytesCount < 1) {
code_?:
        iVar4 = (count / 3) * 3;
        (this->fields)._leftOverBytesCount = count % 3;
        if (0 < count % 3) {
          if ((this->fields)._leftOverBytes == (Byte__Array *)0x0) {
            pBVar5 = (Byte__Array *)func_?(TypeInfo__System__Byte,3);
            (this->fields)._leftOverBytes = pBVar5;
            func_?(&(this->fields)._leftOverBytes,pBVar5);
          }
          uVar6 = 0;
          count = iVar4;
          if (0 < (this->fields)._leftOverBytesCount) {
            do {
              if (buffer->max_length <= index + iVar4 + uVar6) goto code_?;
              pBVar5 = (this->fields)._leftOverBytes;
              if (pBVar5 == (Byte__Array *)0x0) goto code_?;
              if (pBVar5->max_length <= uVar6) goto code_?;
              pBVar5->vector[uVar6] = buffer->vector[uVar6 + index + iVar4];
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < (this->fields)._leftOverBytesCount);
          }
        }
        iVar4 = index + count;
        iVar7 = 0x39;
        if (iVar4 <= index) {
          return;
        }
        do {
          pCVar8 = (this->fields)._charsLine;
          length = iVar4 - index;
          if (iVar7 + index <= iVar4) {
            length = iVar7;
          }
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          iVar9 = mscorlib.dll::System::Convert::Convert_ToBase64CharArray
                            (buffer,index,length,pCVar8,0,(MethodInfo *)0x0);
          Base64Encoder_WriteChars(this,(this->fields)._charsLine,0,iVar9,(MethodInfo *)0x0);
          index = index + length;
          iVar7 = length;
        } while (index < iVar4);
        return;
      }
      uVar6 = (this->fields)._leftOverBytesCount;
      uVar10 = uVar6;
      uVar11 = index;
      if (uVar6 < 3) {
        do {
          uVar6 = uVar10;
          index = uVar11;
          if (count < 1) break;
          uVar6 = uVar10 + 1;
          index = uVar11 + 1;
          if (buffer->max_length <= uVar11) goto code_?;
          pBVar5 = (this->fields)._leftOverBytes;
          if (pBVar5 == (Byte__Array *)0x0) goto code_?;
          if (pBVar5->max_length <= uVar10) goto code_?;
          count = count + -1;
          pBVar5->vector[uVar10] = buffer->vector[uVar11];
          uVar10 = uVar6;
          uVar11 = index;
        } while ((int)uVar6 < 3);
      }
      if ((count == 0) && ((int)uVar6 < 3)) {
        (this->fields)._leftOverBytesCount = uVar6;
        return;
      }
      pBVar5 = (this->fields)._leftOverBytes;
      pCVar8 = (this->fields)._charsLine;
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      iVar9 = mscorlib.dll::System::Convert::Convert_ToBase64CharArray
                        (pBVar5,0,3,pCVar8,0,(MethodInfo *)0x0);
      pTVar12 = (this->fields)._writer;
      if (pTVar12 != (TextWriter *)0x0) {
        (*(pTVar12->klass->vtable).Write_2.methodPtr)
                  (pTVar12,(this->fields)._charsLine,0,iVar9,(pTVar12->klass->vtable).Write_2.method);
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar13 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar13);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_count);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (pAVar13,pSVar3,pMVar2);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__Base64Encoder__Encode_System__Byte_____int__int_
                         );
  func_?(pAVar13,uVar1);
code_?:
  uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  pAVar13 = (ArgumentOutOfRangeException *)func_?(uVar1);
  func_?(pAVar13);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_index);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (pAVar13,pSVar3,pMVar2);
  uVar1 = func_?(&
                          MethodInfo__Newtonsoft__Json__Utilities__Base64Encoder__Encode_System__Byte_____int__int_
                         );
  func_?(pAVar13,uVar1);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_Flush
               (Base64Encoder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    cRam_? = '\x01';
  }
  if (0 < (this->fields)._leftOverBytesCount) {
    outArray = (this->fields)._charsLine;
    length = (this->fields)._leftOverBytesCount;
    inArray = (this->fields)._leftOverBytes;
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    mscorlib.dll::System::Convert::Convert_ToBase64CharArray
              (inArray,0,length,outArray,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._writer;
    if (pTVar1 == (TextWriter *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMStack3 = (pTVar1->klass->vtable).Write_2.method;
    (*(pTVar1->klass->vtable).Write_2.methodPtr)(pTVar1);
    (this->fields)._leftOverBytesCount = 0;
  }
  return;
}


/* Void WriteChars(Char[], Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_WriteChars
               (Base64Encoder *this,Char__Array *chars,int32_t index,int32_t count,
               MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pTVar2 = (this->fields)._writer;
  if (pTVar2 != (TextWriter *)0x0) {
    pMStack_1 = (pTVar2->klass->vtable).Write_2.method;
    iStack_3 = count;
    iStack_4 = index;
    (*(pTVar2->klass->vtable).Write_2.methodPtr)(pTVar2,chars);
    return;
  }
  uVar5 = func_?(&iStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Base64Encoder(TextWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder__ctor
               (Base64Encoder *this,TextWriter *writer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&StringLiteral_writer);
    cRam_? = '\x01';
  }
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,0x4c);
  (this->fields)._charsLine = pCVar1;
  method_00 = (MethodInfo *)&this->fields;
  func_?(method_00,pCVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  paramName = StringLiteral_writer;
  if (writer != (TextWriter *)0x0) {
    (this->fields)._writer = writer;
    func_?(&(this->fields)._writer,writer);
    return;
  }
  uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar2);
  func_?(this_00);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Newtonsoft__Json__Utilities__ValidationUtils__ArgumentNotNull_System__Object__System__String_
                 );
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

