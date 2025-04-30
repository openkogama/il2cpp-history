
/* AvatarInteractable+DamageSource() */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarInteractable__DamageSource);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarInteractable__DamageSource;
  value = (AvatarInteractable_DamageSource *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).time = 0.0;
  TypeInfo__AvatarInteractable__DamageSource->static_fields->none = value;
  func_?(TypeInfo__AvatarInteractable__DamageSource->static_fields,value);
  return;
}


/* AvatarInteractable+DamageSource(MVPlayer, PlayerKilledByType, String) */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor
               (AvatarInteractable_DamageSource *this,MVPlayer *shooter,
               PlayerKilledByType__Enum damageType,String *weaponName,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).shooter = shooter;
  func_?(&this->fields,shooter);
  ppSVar1 = &(this->fields).weaponName;
  (this->fields).damageType = (undefined1)damageType;
  *ppSVar1 = weaponName;
  func_?(ppSVar1,weaponName);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).time = fVar2;
  return;
}


/* AvatarInteractable+DamageSource() */

void Assembly-CSharp.dll::AvatarInteractable+DamageSource::AvatarInteractable_DamageSource__ctor_1
               (AvatarInteractable_DamageSource *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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

