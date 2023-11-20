
/* Void SetToEditMode() */

void Assembly-CSharp.dll::MVAvatarLocal+EditAvatarModeBase::
     MVAvatarLocal_EditAvatarModeBase_SetToEditMode
               (MVAvatarLocal_EditAvatarModeBase *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.mvAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarEquipable, pAVar2 != (AvatarEquipable *)0x0)) {
    (*(code *)(pAVar2->klass->vtable).Equip.method)
              (pAVar2,0,0,0,0,1,(pAVar2->klass->vtable).Unequip.methodPtr);
    pMVar1 = (this->fields)._.mvAvatar;
    if ((pMVar1 != (MVAvatarLocal *)0x0) &&
       (this_00 = (pMVar1->fields).triggerHandler, this_00 != (MVTriggerHandler *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,0,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if (pMVar3 != (MVLocalPlayer *)0x0) {
          *(undefined4 *)(unaff_retaddr + 8) = 0xffffffff;
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

