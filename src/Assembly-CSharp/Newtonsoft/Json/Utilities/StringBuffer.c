
/* Void Append(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_Append
               (StringBuffer *this,uint16_t value,MethodInfo *method)

{
  destinationArray = (this->fields)._buffer;
  if (destinationArray != (Char__Array *)0x0) {
    uVar1 = (this->fields)._position;
    if (uVar1 == destinationArray->max_length) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        uVar1 = (this->fields)._position;
        cRam_? = '\x01';
      }
      destinationArray = (Char__Array *)func_?(TypeInfo__System__Char,uVar1 * 2 + 2);
      mscorlib.dll::System::Array::Array_Copy
                ((Array *)(this->fields)._buffer,(Array *)destinationArray,(this->fields)._position,
                 (MethodInfo *)0x0);
      uVar1 = (this->fields)._position;
      (this->fields)._buffer = destinationArray;
    }
    (this->fields)._position = uVar1 + 1;
    if (destinationArray != (Char__Array *)0x0) {
      if (uVar1 < destinationArray->max_length) {
        destinationArray->vector[uVar1] = value;
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_Clear
               (StringBuffer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
  }
  (this->fields)._buffer =
       TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer;
  (this->fields)._position = 0;
  return;
}


/* Void EnsureSize(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_EnsureSize
               (StringBuffer *this,int32_t appendLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  destinationArray =
       (Char__Array *)
       func_?(TypeInfo__System__Char,(appendLength + (this->fields)._position) * 2);
  mscorlib.dll::System::Array::Array_Copy
            ((Array *)(this->fields)._buffer,(Array *)destinationArray,(this->fields)._position,
             (MethodInfo *)0x0);
  (this->fields)._buffer = destinationArray;
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_ToString
                   (StringBuffer *this,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::String::String_CreateString_5
                     ((String *)0x0,(this->fields)._buffer,0,(this->fields)._position,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Int32, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_ToString_1
                   (StringBuffer *this,int32_t start,int32_t length,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::String::String_CreateString_5
                     ((String *)0x0,(this->fields)._buffer,start,length,(MethodInfo *)0x0);
  return pSVar1;
}


/* StringBuffer() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,0);
  TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer = pCVar1;
  return;
}


/* StringBuffer() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__ctor
               (StringBuffer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
  }
  (this->fields)._buffer =
       TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer;
  return;
}


/* StringBuffer(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__ctor_1
               (StringBuffer *this,int32_t initalSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,initalSize);
  (this->fields)._buffer = pCVar1;
  return;
}

