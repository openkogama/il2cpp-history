
/* Void SynchronizeEmoteUpdate(Int32) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizeEmoteUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,int32_t newEmote,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).limbRotationRuntimeData;
  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
    this_00 = (pLVar1->fields).Emote;
    this = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)newEmote;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SynchronizeHeadRotationUpdate(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizeHeadRotationUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,Quaternion newHeadRotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pLVar2 = (this->fields).limbRotationRuntimeData;
  if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
    pMVar3 = (pLVar2->fields).HeadRotationYaw;
    puVar4 = (undefined8 *)func_?(auStack_5,&newHeadRotation,0);
    uStack_6._4_4_ =
         (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)((ulonglong)*puVar4 >> 0x20);
    this = uStack_6._4_4_;
    uStack_6 = *puVar4;
    pOVar7 = (Object *)func_?(TypeInfo__System__Single,&this);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar7,(MethodInfo *)0x0);
      pLVar2 = (pAVar1->fields).limbRotationRuntimeData;
      if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
        pMVar3 = (pLVar2->fields).HeadRotationPitch;
        puVar4 = (undefined8 *)func_?(auStack_5,&newHeadRotation,0);
        uStack_6 = *puVar4;
        uStack_8 = (undefined4)uStack_6;
        pOVar7 = (Object *)func_?(TypeInfo__System__Single,&uStack_8);
        if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SynchronizePointRotationUpdate(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizePointRotationUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,Quaternion newPointRotation,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pLVar2 = (this->fields).limbRotationRuntimeData;
  if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
    pMVar3 = (pLVar2->fields).PointRotationYaw;
    puVar4 = (undefined8 *)func_?(auStack_5,&newPointRotation,0);
    uStack_6._4_4_ =
         (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)((ulonglong)*puVar4 >> 0x20);
    this = uStack_6._4_4_;
    uStack_6 = *puVar4;
    pOVar7 = (Object *)func_?(TypeInfo__System__Single,&this);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar7,(MethodInfo *)0x0);
      pLVar2 = (pAVar1->fields).limbRotationRuntimeData;
      if (pLVar2 != (LimbRotationRuntimeData *)0x0) {
        pMVar3 = (pLVar2->fields).PointRotationPitch;
        puVar4 = (undefined8 *)func_?(auStack_5,&newPointRotation,0);
        uStack_6 = *puVar4;
        uStack_8 = (undefined4)uStack_6;
        pOVar7 = (Object *)func_?(TypeInfo__System__Single,&uStack_8);
        if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

