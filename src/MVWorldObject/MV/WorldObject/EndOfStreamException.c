
/* EndOfStreamException() */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor
               (EndOfStreamException_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Exception);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Exception);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  *(undefined4 *)(in_stack_1 + 0xc) = 0;
  func_?(in_stack_1 + 0xc,0);
  *(undefined4 *)(in_stack_1 + 0x1c) = 0;
  func_?(in_stack_1 + 0x1c,0);
  *(undefined4 *)(in_stack_1 + 0x2c) = 0;
  func_?(in_stack_1 + 0x2c,0);
  *(undefined4 *)(in_stack_1 + 0x30) = 0x80131500;
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__System__Runtime__Serialization__SafeSerializationManager);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    *(TweenRunner_1_FloatTween_ **)(in_stack_1 + 0x38) = this_00;
    func_?(in_stack_1 + 0x38,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EndOfStreamException(String) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_1
               (EndOfStreamException_1 *this,String *message,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Exception);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Exception);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  mscorlib.dll::System::Exception::Exception_Init((Exception *)this,(MethodInfo *)0x0);
  (this->fields)._._message = message;
  func_?(&(this->fields)._._message,message);
  return;
}


/* EndOfStreamException(String, Exception) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_2
               (EndOfStreamException_1 *this,String *message,Exception *innerException,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Exception);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Exception);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  mscorlib.dll::System::Exception::Exception_Init((Exception *)this,(MethodInfo *)0x0);
  (this->fields)._._message = message;
  func_?(&(this->fields)._._message,message);
  (this->fields)._._innerException = innerException;
  func_?(&(this->fields)._._innerException,innerException);
  return;
}


/* EndOfStreamException(SerializationInfo, StreamingContext) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_3
               (EndOfStreamException_1 *this,SerializationInfo *info,StreamingContext context,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Exception);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Exception);
  }
  mscorlib.dll::System::Exception::Exception__ctor_3
            ((Exception *)this,info,context,(MethodInfo *)0x0);
  return;
}

