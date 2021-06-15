
/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_Initialize
               (AvatarLimbManager_AvatarEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields).limbRotator = limbRotator;
  (this->fields).lifeTime = lifeTime;
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_StartEmote
               (AvatarLimbManager_AvatarEmote *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  (this->fields).duration = (this->fields).lifeTime;
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarEmote::AvatarLimbManager_AvatarEmote_StopEmote
               (AvatarLimbManager_AvatarEmote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnEmoteEnd;
  (this->fields).duration = 0.0;
  (this->fields).isActive = 0;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(this->fields).emote,
               MethodInfo__System__Action<EmoteTypes>__Invoke_EmoteTypes_);
  }
  return;
}

