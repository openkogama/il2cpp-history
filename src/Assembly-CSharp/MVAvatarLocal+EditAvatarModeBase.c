
/* Void SetToEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+EditAvatarModeBase::
     MVAvatarLocal_EditAvatarModeBase_SetToEditMode
               (MVAvatarLocal_EditAvatarModeBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarEquipable, pAVar2 != (AvatarEquipable *)0x0)) {
    (*(pAVar2->klass->vtable).Equip.methodPtr)();
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (this_00 = (pMVar1->fields).triggerHandler, this_00 != (MVTriggerHandler *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (this_01 = (pMVar4->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
        pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (pMVar5 != (MVLocalPlayer *)0x0) {
          (pMVar5->fields)._.checkpointWOID = -1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

