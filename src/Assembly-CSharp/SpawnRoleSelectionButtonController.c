
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
    func_?(&StringLiteral_Unlock_Tier_);
    func_?(&StringLiteral_Tier_);
    func_?(&StringLiteral__Locked);
    cRam_? = '\x01';
  }
  (this->fields).currentSpawnRoleGamePassTier = (undefined1)spawnRoleTier;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
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
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Unlock_Tier_,pSVar6,(MethodInfo *)0x0);
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
            pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            pSVar6 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_Tier_,pSVar6,StringLiteral__Locked,(MethodInfo *)0x0);
          }
          if (pTVar5 != (Text *)0x0) {
            (*(code *)(pTVar5->klass->vtable).set_text.method)
                      (pTVar5,pSVar6,
                       (pTVar5->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
        else {
          pGVar4 = (this->fields).selectButton;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            pGVar4 = (this->fields).buyTierButton;
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              pGVar4 = (this->fields).lockedTierButton;
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

