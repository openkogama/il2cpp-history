
/* AvatarInteractable+DamageSource() */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarInteractable__DamageSource;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).originalScale.x = 0.0;
  TypeInfo__AvatarInteractable__DamageSource->static_fields->none =
       (AvatarInteractable_DamageSource *)this;
  return;
}


/* AvatarInteractable+DamageSource(MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
               (AvatarInteractable_DamageSource *this,MVPlayer *shooter,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).shooter = shooter;
  (this->fields).damageType = (undefined1)damageType;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).time = fVar1;
  return;
}


/* AvatarInteractable+DamageSource() */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor_1
               (AvatarInteractable_DamageSource *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).time = 0.0;
  return;
}


/* Boolean get_Outdated() */

bool Assembly-CSharp.dll::AvatarInteractable+DamageSource::
     AvatarInteractable_DamageSource_get_Outdated
               (AvatarInteractable_DamageSource *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return _UNK_? < fVar1 - (this->fields).time;
}

