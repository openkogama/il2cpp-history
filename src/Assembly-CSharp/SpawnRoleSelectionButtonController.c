
/* Void OnEnable() */

void Assembly-CSharp.dll::SpawnRoleSelectionButtonController::
     SpawnRoleSelectionButtonController_OnEnable
               (SpawnRoleSelectionButtonController *this,MethodInfo *method)

{
  bVar1 = (this->fields).currentSpawnRoleGamePassTier;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Unlock_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Locked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = cRam_?;
  (this->fields).currentSpawnRoleGamePassTier = bVar1;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
    return;
  }
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 != (PlayerPlanetData *)0x0) {
    bVar4 = (pPVar3->fields).gamePassTier;
    if (cVar2 == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      bVar5 = (pPVar3->fields).previewGamePassTier;
      pGVar6 = (this->fields).FreeTryUI;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,bVar1 == bVar5 && bVar1 != 0,(MethodInfo *)0x0);
        if ((bVar4 < bVar1) && (bVar5 < bVar1)) {
          pGVar6 = (this->fields).selectButton;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,0,(MethodInfo *)0x0);
            pGVar6 = (this->fields).buyTierButton;
            if (bVar1 == (byte)(bVar4 + 1)) {
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,1,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pTVar7 = (this->fields).buyTierButtonText;
              aIStackX_10[0].m_value = (uint)bVar1;
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral_Unlock_Tier_,pSVar8,(MethodInfo *)0x0);
            }
            else {
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,1,(MethodInfo *)0x0);
              pTVar7 = (this->fields).lockedTierButtonText;
              aIStackX_10[0].m_value = (uint)bVar1;
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                 (StringLiteral_Tier_,pSVar8,StringLiteral__Locked,(MethodInfo *)0x0
                                 );
            }
            if (pTVar7 != (Text *)0x0) {
              (*(pTVar7->klass->vtable).set_text.methodPtr)
                        (pTVar7,pSVar8,(pTVar7->klass->vtable).set_text.method);
              return;
            }
          }
        }
        else {
          pGVar6 = (this->fields).selectButton;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,1,(MethodInfo *)0x0);
            pGVar6 = (this->fields).buyTierButton;
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnNewSelectedSpawnRole(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionButtonController::
     SpawnRoleSelectionButtonController_OnNewSelectedSpawnRole
               (SpawnRoleSelectionButtonController *this,GamePassTier__Enum spawnRoleTier,
               MethodInfo *method)

{
  bVar1 = (byte)spawnRoleTier;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Unlock_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Locked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = cRam_?;
  (this->fields).currentSpawnRoleGamePassTier = bVar1;
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
    return;
  }
  if (cVar2 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cVar2 = '\x01';
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 != (PlayerPlanetData *)0x0) {
    bVar4 = (pPVar3->fields).gamePassTier;
    if (cVar2 == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      bVar5 = (pPVar3->fields).previewGamePassTier;
      pGVar6 = (this->fields).FreeTryUI;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,bVar1 == bVar5 && bVar1 != 0,(MethodInfo *)0x0);
        if ((bVar4 < bVar1) && (bVar5 < bVar1)) {
          pGVar6 = (this->fields).selectButton;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,0,(MethodInfo *)0x0);
            pGVar6 = (this->fields).buyTierButton;
            if (bVar1 == (byte)(bVar4 + 1)) {
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,1,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pTVar7 = (this->fields).buyTierButtonText;
              aIStackX_10[0].m_value = spawnRoleTier & 0xff;
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral_Unlock_Tier_,pSVar8,(MethodInfo *)0x0);
            }
            else {
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,1,(MethodInfo *)0x0);
              pTVar7 = (this->fields).lockedTierButtonText;
              aIStackX_10[0].m_value = spawnRoleTier & 0xff;
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_5
                                 (StringLiteral_Tier_,pSVar8,StringLiteral__Locked,(MethodInfo *)0x0
                                 );
            }
            if (pTVar7 != (Text *)0x0) {
              (*(pTVar7->klass->vtable).set_text.methodPtr)
                        (pTVar7,pSVar8,(pTVar7->klass->vtable).set_text.method);
              return;
            }
          }
        }
        else {
          pGVar6 = (this->fields).selectButton;
          if (pGVar6 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar6,1,(MethodInfo *)0x0);
            pGVar6 = (this->fields).buyTierButton;
            if (pGVar6 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pGVar6 = (this->fields).lockedTierButton;
              if (pGVar6 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

