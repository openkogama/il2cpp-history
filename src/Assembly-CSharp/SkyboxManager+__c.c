
/* Boolean <ComputeSkyboxSettings>b__30_0(MVSkybox) */

bool Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_0
               (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    bVar1 = MVSkybox::MVSkybox_get_SkyboxActive(s,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Single <ComputeSkyboxSettings>b__30_1(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_1
                (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    fVar1 = MVSkybox::MVSkybox_get_SunAngle(s,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single <ComputeSkyboxSettings>b__30_2(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_2
                (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    fVar1 = MVSkybox::MVSkybox_get_FogDensity(s,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* SkyboxManager+<>c() */

void Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SkyboxManager____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SkyboxManager____c;
  value = (SkyboxManager_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__SkyboxManager____c->static_fields->__9 = value;
  func_?(TypeInfo__SkyboxManager____c->static_fields,value);
  return;
}

