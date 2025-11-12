
/* Void HandleFireVisibility() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleFireVisibility
               (InGameButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((uVar1 & 1) == 0) ||
     ((TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 0x10U) != 0)) {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
       ((pSVar3 = (pSVar2->fields).pickupItemIsInHand,
        pSVar3 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0 ||
        (pSVar4 = (pSVar3->fields)._.subscribableVariable,
        pSVar4 == (SubscribableVariable_1_System_Boolean_ *)0x0)))) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    pRVar5 = (this->fields).fire;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    if ((pSVar4->fields)._.value == 0) {
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar5,(MethodInfo *)0x0);
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
      pRVar5 = (this->fields).point;
      if ((pRVar5 == (RectTransform *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
      goto code_?;
      uVar7 = 1;
      goto code_?;
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar5,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    value = 0;
  }
  else {
    pRVar5 = (this->fields).fire;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    value = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,value,(MethodInfo *)0x0);
  pRVar5 = (this->fields).point;
  if ((pRVar5 != (RectTransform *)0x0) &&
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
    uVar7 = 0;
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,uVar7,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar6 == (GameObject *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pvVar9 = (pGVar6->fields)._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar9,uVar7);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pGVar1 = (this->fields).respawnButton;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 == '\0') {
      pGVar1 = (this->fields).respawnButton;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
    pRVar6 = (this->fields).jumpButton;
    if ((pRVar6 != (RectTransform *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar6,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      cVar5 = (*pcRam_?)(pvVar2);
      if (cVar5 == '\0') {
        pRVar6 = (this->fields).jumpButton;
        if ((pRVar6 == (RectTransform *)0x0) ||
           (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar6,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleNotInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleNotInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pRVar1 = (this->fields).fire;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    cVar6 = (*pcRam_?)(pvVar3);
    if (cVar6 != '\0') {
      pRVar1 = (this->fields).fire;
      if ((pRVar1 == (RectTransform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    pRVar1 = (this->fields).point;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      cVar6 = (*pcRam_?)(pvVar3);
      if (cVar6 != '\0') {
        pRVar1 = (this->fields).point;
        if ((pRVar1 == (RectTransform *)0x0) ||
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pRVar1 = (this->fields).dropWeapon;
      if ((pRVar1 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar6 = (*pcRam_?)(pvVar3);
        if (cVar6 != '\0') {
          pRVar1 = (this->fields).dropWeapon;
          if ((pRVar1 == (RectTransform *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pRVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
        }
        pRVar1 = (this->fields).leaveVehicle;
        if ((pRVar1 != (RectTransform *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
           ) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pGVar2->fields)._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          cVar6 = (*pcRam_?)(pvVar3);
          if (cVar6 != '\0') {
            pRVar1 = (this->fields).leaveVehicle;
            if ((pRVar1 == (RectTransform *)0x0) ||
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               pGVar2 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
          pGVar2 = (this->fields).respawnButton;
          if (pGVar2 != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pGVar2->fields)._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            cVar6 = (*pcRam_?)(pvVar3);
            if (cVar6 != '\0') {
              pGVar2 = (this->fields).respawnButton;
              if (pGVar2 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
            }
            pRVar1 = (this->fields).holsterButton;
            if ((pRVar1 != (RectTransform *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar3 = (pGVar2->fields)._.m_CachedPtr;
              if (pvVar3 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              cVar6 = (*pcRam_?)(pvVar3);
              if (cVar6 != '\0') {
                pRVar1 = (this->fields).holsterButton;
                if ((pRVar1 == (RectTransform *)0x0) ||
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                   pGVar2 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
              }
              pRVar1 = (this->fields).jumpButton;
              if ((pRVar1 != (RectTransform *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar3 = (pGVar2->fields)._.m_CachedPtr;
                if (pvVar3 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                cVar6 = (*pcRam_?)(pvVar3);
                if (cVar6 != '\0') {
                  pRVar1 = (this->fields).jumpButton;
                  if ((pRVar1 == (RectTransform *)0x0) ||
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                }
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_Update
               (InGameButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  InGameButtons_HandleFireVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField !=
      (this->fields).showingEquipableUI) {
    pRVar1 = (this->fields).holsterButton;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pRVar1 != (RectTransform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pRVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
        pRVar1 = (this->fields).holsterButton;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PickupGUI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 8
                           ) != 0,(MethodInfo *)0x0);
      }
    }
    pRVar1 = (this->fields).dropWeapon;
    if (pRVar1 == (RectTransform *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 2) !=
                       0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (this->fields).showingEquipableUI =
         TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  }
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar3 == (SpawnRoleDataMediator *)0x0) goto code_?;
  pRVar1 = (this->fields).leaveVehicle;
  pSVar4 = (pSVar3->fields).isSeated;
  if ((pRVar1 == (RectTransform *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pGVar2->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  cVar8 = (*pcRam_?)(pvVar5);
  pMVar9 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
  ;
  if ((pSVar4 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) ||
     (pSVar10 = (pSVar4->fields)._.subscribableVariable,
     pSVar10 == (SubscribableVariable_1_System_Boolean_ *)0x0)) goto code_?;
  if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
       ->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  abStackX_8[0] = (pSVar10->fields)._.value;
  pIVar11 = pMVar9->klass;
  if ((pIVar11->field_0x135 & 1) == 0) {
    pIVar11 = (Il2CppClass *)FUN_?(pIVar11);
  }
  plVar12 = (longlong *)FUN_?(pIVar11->rgctx_data[9].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((pMVar9->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar12 == (longlong *)0x0) {
code_?:
    pRVar1 = (this->fields).leaveVehicle;
    if (pRVar1 == (RectTransform *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar1,(MethodInfo *)0x0);
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (((pSVar3 == (SpawnRoleDataMediator *)0x0) ||
        (pSVar4 = (pSVar3->fields).isSeated,
        pSVar4 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0)) ||
       (pSVar10 = (pSVar4->fields)._.subscribableVariable,
       pSVar10 == (SubscribableVariable_1_System_Boolean_ *)0x0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,(pSVar10->fields)._.value,(MethodInfo *)0x0);
  }
  else {
    plVar13 = (longlong *)0x0;
    if (*plVar12 == lRam_?) {
      plVar13 = plVar12;
    }
    if (plVar13 == (longlong *)0x0) goto code_?;
    if (*(longlong *)(*plVar12 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
      FUN_?(plVar12);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (cVar8 != (char)plVar12[2]) goto code_?;
  }
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar14 = (pSVar3->fields).SpawnRoleModeTypeWrapper, pSVar14 != (SpawnRoleModeTypeWrapper *)0x0
     )) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar15 = (pSVar14->fields).spawnRoleType;
    if ((pSVar15 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar16 = (pSVar15->fields).subscribableVariable,
       pSVar16 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
      if (((pSVar16->fields)._.value & 1) != 0) {
        InGameButtons_HandleInPlayMode(this,(MethodInfo *)0x0);
        return;
      }
      pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar14 = (pSVar3->fields).SpawnRoleModeTypeWrapper,
         pSVar14 != (SpawnRoleModeTypeWrapper *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar15 = (pSVar14->fields).spawnRoleType;
        if ((pSVar15 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
           (pSVar16 = (pSVar15->fields).subscribableVariable,
           pSVar16 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          if (((pSVar16->fields)._.value & 1) != 0) {
            return;
          }
          InGameButtons_HandleNotInPlayMode(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

