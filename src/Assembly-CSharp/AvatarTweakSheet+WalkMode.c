
/* AvatarTweakSheet+WalkMode() */

void Assembly-CSharp.dll::AvatarTweakSheet+WalkMode::AvatarTweakSheet_WalkMode__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarTweakSheet__WalkMode);
    cRam_? = '\x01';
  }
  TypeInfo__AvatarTweakSheet__WalkMode->static_fields->walkSpeed = 8.0;
  TypeInfo__AvatarTweakSheet__WalkMode->static_fields->runSpeed = 8.0;
  TypeInfo__AvatarTweakSheet__WalkMode->static_fields->animationSpeedRatio = 0.38;
  TypeInfo__AvatarTweakSheet__WalkMode->static_fields->speedSmoothing = 10.0;
  return;
}

