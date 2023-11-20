
/* Int32 <ComputeModifierEffectGroupedById>b__29_0(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages+<>c::
        AvatarModifierPackages_c__ComputeModifierEffectGroupedById_b__29_0
                  (AvatarModifierPackages_c *this,AvatarModifierPackage_AvatarModifier x,
                  AvatarModifierPackage_AvatarModifier y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierType);
    cRam_? = '\x01';
  }
  y.value = (Func_1_Single_ *)y.avatarModifierType;
  target = (Object *)func_?(TypeInfo__AvatarModifierType,&y.value);
  EStack_1.klass = (Enum__Class *)TypeInfo__AvatarModifierType;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  iStack_2 = x.avatarModifierType;
  iVar3 = mscorlib.dll::System::Enum::Enum_CompareTo(&EStack_1,target,(MethodInfo *)0x0);
  return iVar3;
}


/* Int32 <HandleModifierEffect>b__27_0(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages+<>c::
        AvatarModifierPackages_c__HandleModifierEffect_b__27_0
                  (AvatarModifierPackages_c *this,AvatarModifierPackage_AvatarModifier x,
                  AvatarModifierPackage_AvatarModifier y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierType);
    cRam_? = '\x01';
  }
  y.value = (Func_1_Single_ *)y.avatarModifierType;
  target = (Object *)func_?(TypeInfo__AvatarModifierType,&y.value);
  EStack_1.klass = (Enum__Class *)TypeInfo__AvatarModifierType;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  iStack_2 = x.avatarModifierType;
  iVar3 = mscorlib.dll::System::Enum::Enum_CompareTo(&EStack_1,target,(MethodInfo *)0x0);
  return iVar3;
}


/* AvatarModifierPackages+<>c() */

void Assembly-CSharp.dll::AvatarModifierPackages+<>c::AvatarModifierPackages_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackages____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarModifierPackages____c;
  value = (AvatarModifierPackages_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarModifierPackages____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarModifierPackages____c->static_fields,value);
  return;
}

