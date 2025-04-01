
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  *(undefined4 *)(in_stack_1 + 0xc) = 0;
  func_?((undefined4 *)(in_stack_1 + 0xc),0);
  *(undefined4 *)(in_stack_1 + 0x1c) = 0;
  func_?((undefined4 *)(in_stack_1 + 0x1c),0);
  *(undefined4 *)(in_stack_1 + 0x2c) = 0;
  func_?((undefined4 *)(in_stack_1 + 0x2c),0);
  *(undefined4 *)(in_stack_1 + 0x30) = 0x80131500;
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__System__Runtime__Serialization__SafeSerializationManager);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  *(undefined4 *)(in_stack_1 + 0x38) = this_00;
  func_?((undefined4 *)(in_stack_1 + 0x38),this_00);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  mscorlib.dll::System::Exception::Exception_Init((Exception *)this,(MethodInfo *)0x0);
  ppSVar1 = &(this->fields)._._message;
  *ppSVar1 = message;
  func_?(ppSVar1,message);
  return;
}


/* EndOfStreamException(SerializationInfo, StreamingContext) */

void MVWorldObject.dll::MV::WorldObject::EndOfStreamException::EndOfStreamException_1__ctor_2
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

