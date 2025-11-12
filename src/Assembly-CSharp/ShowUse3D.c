
/* Void CalculateUseGraphics(ShowUseOption, Int32) */

void Assembly-CSharp.dll::ShowUse3D::ShowUse3D_CalculateUseGraphics
               (ShowUse3D *this,ShowUseOption__Enum useOption,int32_t woID,MethodInfo *method)

{
  pGVar1 = (this->fields).canAfford;
  if (pGVar1 != (GameObject *)0x0) {
    if ((useOption &
        (ShowUseOption__Enum_TeamRestricted|ShowUseOption__Enum_StarsInsufficient|
         ShowUseOption__Enum_LevelInsufficient|ShowUseOption__Enum_GameCoinsInsufficient)) ==
        ShowUseOption__Enum_Normal) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).canNotAfford;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pTVar2 = (this->fields).textWithIcon;
        if ((pTVar2 != (TextWithIcon *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          bVar3 = (useOption & ShowUseOption__Enum_RewardedAdPossible) != ShowUseOption__Enum_Normal
          ;
          goto code_?;
        }
      }
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).canNotAfford;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).textWithIcon;
        if ((pTVar2 != (TextWithIcon *)0x0) &&
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)
           ) {
          bVar3 = false;
code_?:
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,bVar3,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar1 == (GameObject *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (pGVar1->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,bVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::ShowUse3D::ShowUse3D_Hide(ShowUse3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields).canAfford;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).canNotAfford;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).textWithIcon;
      if ((this_00 != (TextWithIcon *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::ShowUse3D::ShowUse3D_Show(ShowUse3D *this,MethodInfo *method)

{
  pGVar1 = (this->fields).canAfford;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).canNotAfford;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      this_00 = (this->fields).textWithIcon;
      if ((this_00 != (TextWithIcon *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

