
/* Void Append(Char) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_Append
               (StringBuffer *this,uint16_t value,MethodInfo *method)

{
  pCVar1 = (this->fields)._buffer;
  if (pCVar1 != (Char__Array *)0x0) {
    if ((this->fields)._position == pCVar1->max_length) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Char);
        cRam_? = '\x01';
      }
      pCVar1 = (Char__Array *)
               func_?(TypeInfo__System__Char,(this->fields)._position * 2 + 2);
      mscorlib.dll::System::Array::Array_Copy_2
                ((Array *)(this->fields)._buffer,(Array *)pCVar1,(this->fields)._position,
                 (MethodInfo *)0x0);
      (this->fields)._buffer = pCVar1;
      func_?(&this->fields,pCVar1);
    }
    uVar2 = (this->fields)._position;
    pCVar1 = (this->fields)._buffer;
    (this->fields)._position = uVar2 + 1;
    if (pCVar1 != (Char__Array *)0x0) {
      if (uVar2 < pCVar1->max_length) {
        pCVar1->vector[uVar2] = value;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_Clear
               (StringBuffer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
  }
  pCVar1 = TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer;
  (this->fields)._buffer = pCVar1;
  func_?(&this->fields,pCVar1);
  (this->fields)._position = 0;
  return;
}


/* Void EnsureSize(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_EnsureSize
               (StringBuffer *this,int32_t appendLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  destinationArray =
       (Char__Array *)
       func_?(TypeInfo__System__Char,((this->fields)._position + appendLength) * 2);
  mscorlib.dll::System::Array::Array_Copy_2
            ((Array *)(this->fields)._buffer,(Array *)destinationArray,(this->fields)._position,
             (MethodInfo *)0x0);
  (this->fields)._buffer = destinationArray;
  func_?(&this->fields,destinationArray);
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_ToString
                   (StringBuffer *this,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::String::String_CreateString_3
                     ((String *)0x0,(this->fields)._buffer,0,(this->fields)._position,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* String ToString(Int32, Int32) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer_ToString_1
                   (StringBuffer *this,int32_t start,int32_t length,MethodInfo *method)

{
  pSVar1 = mscorlib.dll::System::String::String_CreateString_3
                     ((String *)0x0,(this->fields)._buffer,start,length,(MethodInfo *)0x0);
  return pSVar1;
}


/* StringBuffer() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    cRam_? = '\x01';
  }
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,0);
  TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer = pCVar1;
  func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields,pCVar1);
  return;
}


/* StringBuffer() */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__ctor
               (StringBuffer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Utilities__StringBuffer);
  }
  pCVar1 = TypeInfo__Newtonsoft__Json__Utilities__StringBuffer->static_fields->_emptyBuffer;
  (this->fields)._buffer = pCVar1;
  func_?(&this->fields,pCVar1);
  return;
}


/* StringBuffer(Int32) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer__ctor_1
               (StringBuffer *this,int32_t initalSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pCVar1 = (Char__Array *)func_?(TypeInfo__System__Char,initalSize);
  (this->fields)._buffer = pCVar1;
  func_?(&this->fields,pCVar1);
  return;
}

