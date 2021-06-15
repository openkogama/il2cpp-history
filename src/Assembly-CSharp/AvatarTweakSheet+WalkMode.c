
/* AvatarTweakSheet+WalkMode() */

void Assembly-CSharp.dll::AvatarTweakSheet+WalkMode::AvatarTweakSheet_WalkMode__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarTweakSheet__WalkMode->static_fields;
  pAVar1->walkSpeed = 8.0;
  pAVar1->runSpeed = 8.0;
  pAVar1->animationSpeedRatio = 0.38;
  pAVar1->speedSmoothing = 10.0;
  return;
}

