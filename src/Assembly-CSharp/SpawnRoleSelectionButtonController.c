
/* Void OnEnable() */

void Assembly-CSharp.dll::SpawnRoleSelectionButtonController::
     SpawnRoleSelectionButtonController_OnEnable
               (SpawnRoleSelectionButtonController *this,MethodInfo *method)

{
  SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
            (this,(uint)(this->fields).currentSpawnRoleGamePassTier,(MethodInfo *)0x0);
  return;
}


/* Void OnNewSelectedSpawnRole(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionButtonController::
     SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
               (SpawnRoleSelectionButtonController *this,GamePassTier__Enum spawnRoleTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentSpawnRoleGamePassTier = (undefined1)spawnRoleTier;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 == (PlayerPlanetData *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).previewGamePassTier;
      pGVar4 = (this->fields).FreeTryUI;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,(undefined1)spawnRoleTier == uVar3 &&
                          (undefined1)spawnRoleTier != GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
        if (((byte)uVar2 < (byte)(undefined1)spawnRoleTier) &&
           ((byte)uVar3 < (byte)(undefined1)spawnRoleTier)) {
          pGVar4 = (this->fields).selectButton;
          if ((undefined1)spawnRoleTier == (undefined1)(uVar2 + GamePassTier__Enum_Tier1)) {
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pGVar4 = (this->fields).buyTierButton;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields).lockedTierButton;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pTVar5 = (this->fields).buyTierButtonText;
            pOVar6 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Unlock_Tier_,pOVar6,(MethodInfo *)0x0);
          }
          else {
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pGVar4 = (this->fields).buyTierButton;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            pGVar4 = (this->fields).lockedTierButton;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pTVar5 = (this->fields).lockedTierButtonText;
            pOVar6 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            mscorlib.dll::System::String::String_Concat_1
                      ((Object *)StringLiteral_Tier_,pOVar6,(Object *)StringLiteral__Locked,
                       (MethodInfo *)0x0);
          }
          if (pTVar5 != (Text *)0x0) {
            pIStack7 = (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTVar5->klass->vtable).set_text.method)();
            return;
          }
        }
        else {
          pGVar4 = (this->fields).selectButton;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields).buyTierButton;
            if ((pGVar4 != (GameObject *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0),
               (this->fields).lockedTierButton != (GameObject *)0x0)) {
              pcVar8 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                pcVar8 = (code *)func_?();
                if (pcVar8 == (code *)0x0) {
                  puStack9 = (undefined *)0x0;
                  puStack10 = (undefined *)0x0;
                  pIStack7 = (Il2CppMethodPointer)func_?();
                  func_?();
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pcRam_? = pcVar8;
              (*pcRam_?)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  pIStack7 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

