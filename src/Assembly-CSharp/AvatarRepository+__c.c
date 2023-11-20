
/* AvatarRepository+<>c() */

void Assembly-CSharp.dll::AvatarRepository+<>c::AvatarRepository_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarRepository____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarRepository____c;
  value = (AvatarRepository_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarRepository____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarRepository____c->static_fields,value);
  return;
}

