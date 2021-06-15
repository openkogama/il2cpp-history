
/* Void Encode(Byte[], Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_Encode
               (Base64Encoder *this,Byte__Array *buffer,int32_t index,int32_t count,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (buffer == (Byte__Array *)0x0) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              ((ArgumentNullException *)this_00,StringLiteral_buffer,(MethodInfo *)0x0);
    goto code_?;
  }
  if (-1 < index) {
    if ((-1 < count) && (count <= (int)(buffer->max_length - index))) {
      uVar1 = (this->fields)._leftOverBytesCount;
      if ((int)uVar1 < 1) {
code_?:
        iVar2 = (count / 3) * 3;
        iVar3 = count % 3;
        (this->fields)._leftOverBytesCount = iVar3;
        if (0 < iVar3) {
          if ((this->fields)._leftOverBytes == (Byte__Array *)0x0) {
            pBVar4 = (Byte__Array *)func_?(TypeInfo__System__Byte,3);
            (this->fields)._leftOverBytes = pBVar4;
            iVar3 = (this->fields)._leftOverBytesCount;
          }
          uVar1 = 0;
          count = iVar2;
          if (0 < iVar3) {
            do {
              if (buffer->max_length <= index + iVar2 + uVar1) goto code_?;
              pBVar4 = (this->fields)._leftOverBytes;
              if (pBVar4 == (Byte__Array *)0x0) goto code_?;
              if (pBVar4->max_length <= uVar1) goto code_?;
              pBVar4->vector[uVar1] = buffer->vector[index + iVar2 + uVar1];
              uVar1 = uVar1 + 1;
            } while ((int)uVar1 < (this->fields)._leftOverBytesCount);
          }
        }
        iVar3 = index + count;
        iVar2 = 0x39;
        if (iVar3 <= index) {
          return;
        }
        do {
          pCVar5 = (this->fields)._charsLine;
          length = iVar3 - index;
          if (iVar2 + index <= iVar3) {
            length = iVar2;
          }
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          iVar6 = mscorlib.dll::System::Convert::Convert_ToBase64CharArray
                            (buffer,index,length,pCVar5,0,(MethodInfo *)0x0);
          Base64Encoder_WriteChars(this,(this->fields)._charsLine,0,iVar6,(MethodInfo *)0x0);
          index = index + length;
          iVar2 = length;
        } while (index < iVar3);
        return;
      }
      for (; ((int)uVar1 < 3 && (0 < count)); count = count + -1) {
        if (buffer->max_length <= (uint)index) goto code_?;
        pBVar4 = (this->fields)._leftOverBytes;
        if (pBVar4 == (Byte__Array *)0x0) goto code_?;
        if (pBVar4->max_length <= uVar1) goto code_?;
        pBVar4->vector[uVar1] = buffer->vector[index];
        uVar1 = uVar1 + 1;
        index = index + 1;
      }
      if ((count == 0) && ((int)uVar1 < 3)) {
        (this->fields)._leftOverBytesCount = uVar1;
        return;
      }
      pBVar4 = (this->fields)._leftOverBytes;
      pCVar5 = (this->fields)._charsLine;
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Convert);
      }
      iVar6 = mscorlib.dll::System::Convert::Convert_ToBase64CharArray
                        (pBVar4,0,3,pCVar5,0,(MethodInfo *)0x0);
      pTVar7 = (this->fields)._writer;
      if (pTVar7 != (TextWriter *)0x0) {
        (*(code *)(pTVar7->klass->vtable).Write_5.method)
                  (pTVar7,(this->fields)._charsLine,0,iVar6,
                   (pTVar7->klass->vtable).Write_6.methodPtr);
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  paramName = StringLiteral_index;
code_?:
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
code_?:
  func_?(this_00,0,
                  MethodInfo__Newtonsoft__Json__Utilities__Base64Encoder__Encode_System__Byte_____int__int_
                 );
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
code_?:
  func_?(0);
code_?:
  this_00 = (ArgumentOutOfRangeException *)
            func_?(TypeInfo__System__ArgumentOutOfRangeException);
  paramName = StringLiteral_count;
  goto code_?;
}


/* Void Flush() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_Flush
               (Base64Encoder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  length = (this->fields)._leftOverBytesCount;
  if (0 < length) {
    outArray = (this->fields)._charsLine;
    inArray = (this->fields)._leftOverBytes;
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
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
    (*(code *)(pTVar1->klass->vtable).Write_5.method)(pTVar1,(this->fields)._charsLine);
    (this->fields)._leftOverBytesCount = 0;
  }
  return;
}


/* Void WriteChars(Char[], Int32, Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder_WriteChars
               (Base64Encoder *this,Char__Array *chars,int32_t index,int32_t count,
               MethodInfo *method)

{
  pTVar1 = (this->fields)._writer;
  if (pTVar1 != (TextWriter *)0x0) {
    (*(code *)(pTVar1->klass->vtable).Write_5.method)
              (pTVar1,chars,index,count,(pTVar1->klass->vtable).Write_6.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Base64Encoder(TextWriter) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::Base64Encoder::Base64Encoder__ctor
               (Base64Encoder *this,TextWriter *writer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Char;
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,0x4c);
  (this->fields)._charsLine = pCVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  paramName = StringLiteral_writer;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (writer != (TextWriter *)0x0) {
    (this->fields)._writer = writer;
    return;
  }
  this_00 = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,paramName,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

