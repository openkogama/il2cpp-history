
/* Int32 <ComputeModifierEffectGroupedById>b__29_0(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages+<>c::
        AvatarModifierPackages_c__ComputeModifierEffectGroupedById_b__29_0
                  (AvatarModifierPackages_c *this,AvatarModifierPackage_AvatarModifier *x,
                  AvatarModifierPackage_AvatarModifier *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = y->avatarModifierType;
  target = (Object *)FUN_?(TypeInfo__AvatarModifierType,aiStackX_10);
  EStack_1.klass = (Enum__Class *)TypeInfo__AvatarModifierType;
  iStack_2 = x->avatarModifierType;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  iVar3 = mscorlib.dll::System::Enum::Enum_CompareTo(&EStack_1,target,(MethodInfo *)0x0);
  return iVar3;
}


/* Int32 <HandleModifierEffect>b__27_0(AvatarModifierPackage+AvatarModifier,
   AvatarModifierPackage+AvatarModifier) */

int32_t Assembly-CSharp.dll::AvatarModifierPackages+<>c::
        AvatarModifierPackages_c__HandleModifierEffect_b__27_0
                  (AvatarModifierPackages_c *this,AvatarModifierPackage_AvatarModifier *x,
                  AvatarModifierPackage_AvatarModifier *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = y->avatarModifierType;
  target = (Object *)FUN_?(TypeInfo__AvatarModifierType,aiStackX_10);
  EStack_1.klass = (Enum__Class *)TypeInfo__AvatarModifierType;
  iStack_2 = x->avatarModifierType;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  iVar3 = mscorlib.dll::System::Enum::Enum_CompareTo(&EStack_1,target,(MethodInfo *)0x0);
  return iVar3;
}


/* AvatarModifierPackages+<>c() */

void Assembly-CSharp.dll::AvatarModifierPackages+<>c::AvatarModifierPackages_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackages____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarModifierPackages_c *)FUN_?(TypeInfo__AvatarModifierPackages____c);
  TypeInfo__AvatarModifierPackages____c->static_fields->__9 = pAVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarModifierPackages____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

