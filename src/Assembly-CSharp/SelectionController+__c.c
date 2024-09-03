
/* SelectionController+<>c() */

void Assembly-CSharp.dll::SelectionController+<>c::SelectionController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SelectionController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SelectionController____c;
  value = (SelectionController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__SelectionController____c->static_fields->__9 = value;
  func_?(TypeInfo__SelectionController____c->static_fields,value);
  return;
}

