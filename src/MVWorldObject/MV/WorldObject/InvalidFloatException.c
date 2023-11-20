
/* InvalidFloatException() */

void MVWorldObject.dll::MV::WorldObject::InvalidFloatException::InvalidFloatException__ctor
               (InvalidFloatException *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Exception);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Exception->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Exception);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__System__Runtime__Serialization__SafeSerializationManager);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  *(UxmlObjectListAttributeDescription_1_System_Object_ **)(in_stack_1 + 0x38) = this_00;
  func_?(in_stack_1 + 0x38,this_00);
  return;
}

