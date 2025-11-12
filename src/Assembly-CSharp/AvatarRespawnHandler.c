
/* Void Respawn() */

void Assembly-CSharp.dll::AvatarRespawnHandler::AvatarRespawnHandler_Respawn
               (AvatarRespawnHandler *this,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if ((this->fields).shouldRespawnAsGhost == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,uVar1);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0))
       && (pMVar4 = (this->fields).mvAvatar, pMVar4 != (MVAvatarLocal *)0x0)) {
      pMVar5 = (pMVar4->fields).avatarLocalModes;
      uVar6 = (undefined3)((uint)uVar1 >> 8);
      if ((pFVar3->fields).IsInFlagDebriefing == 0) {
        if (pMVar5 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
          MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                    (pMVar5,CONCAT31(uVar6,1),(MethodInfo *)0x0);
          (this->fields).shouldRespawnAsGhost = 1;
          return;
        }
      }
      else if (pMVar5 != (MVAvatarLocal_AvatarLocalModes *)0x0) {
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar5,CONCAT31(uVar6,7),(MethodInfo *)0x0);
        (this->fields).shouldRespawnAsGhost = 1;
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,uVar1);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar3->fields).IsInFlagDebriefing == 0) {
        pMVar4 = (this->fields).mvAvatar;
        if ((pMVar4 == (MVAvatarLocal *)0x0) ||
           (pMVar5 = (pMVar4->fields).avatarLocalModes,
           pMVar5 == (MVAvatarLocal_AvatarLocalModes *)0x0)) goto code_?;
        MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
                  (pMVar5,CONCAT31((int3)((uint)uVar1 >> 8),9),(MethodInfo *)0x0);
        (this->fields).shouldRespawnAsGhost = 1;
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

