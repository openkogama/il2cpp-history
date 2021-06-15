
/* Void HandleFireVisibility() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleFireVisibility
               (InGameButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PVar1 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
  PVar2 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
  if (((PVar1 & PickupGUIFlags__Enum_CanFire) == PickupGUIFlags__Enum_None) ||
     ((PVar2 >> 4 & 1) != 0)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_00 == (PrefabPool *)0x0) goto code_?;
    s = PrefabPool::PrefabPool_get_MVJetPackPrefab(this_00,(MethodInfo *)0x0);
    pMVar3 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
    ;
    SVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
            SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                      ((SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)s,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    value = (bool)pMVar3;
    pRVar5 = (this->fields).fire;
    if ((char)SVar4 == '\0') {
      if ((pRVar5 != (RectTransform *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pRVar5 = (this->fields).point;
        if ((pRVar5 != (RectTransform *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pRVar5,(MethodInfo *)0x0),
           pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
  }
  else {
    pRVar5 = (this->fields).fire;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    unaff_retaddr = (MethodInfo *)0x0;
    value = 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,value,unaff_retaddr);
  pRVar5 = (this->fields).point;
  if ((pRVar5 != (RectTransform *)0x0) &&
     (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).respawnButton;
  if ((pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0) &&
     (pGVar2 = (GameObject *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         (pDVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).respawnButton;
      if ((pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) ||
         (pGVar2 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    pRVar4 = (this->fields).jumpButton;
    if ((pRVar4 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar4,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      pRVar4 = (this->fields).jumpButton;
      if ((pRVar4 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar4,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleNotInPlayMode() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HandleNotInPlayMode
               (InGameButtons *this,MethodInfo *method)

{
  pRVar1 = (this->fields).use;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pRVar1 = (this->fields).use;
      if ((pRVar1 == (RectTransform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    pRVar1 = (this->fields).fire;
    if ((pRVar1 != (RectTransform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pRVar1 = (this->fields).fire;
        if ((pRVar1 == (RectTransform *)0x0) ||
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pRVar1,(MethodInfo *)0x0),
           pGVar2 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pRVar1 = (this->fields).point;
      if ((pRVar1 != (RectTransform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pRVar1 = (this->fields).point;
          if ((pRVar1 == (RectTransform *)0x0) ||
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
             pGVar2 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
        }
        pRVar1 = (this->fields).dropWeapon;
        if ((pRVar1 != (RectTransform *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pRVar1,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pRVar1 = (this->fields).dropWeapon;
            if ((pRVar1 == (RectTransform *)0x0) ||
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
               pGVar2 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
          pRVar1 = (this->fields).leaveVehicle;
          if ((pRVar1 != (RectTransform *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar2,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pRVar1 = (this->fields).leaveVehicle;
              if ((pRVar1 == (RectTransform *)0x0) ||
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
                 pGVar2 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
            }
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this->fields).respawnButton;
            if ((pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) &&
               (pGVar2 = (GameObject *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                   (pDVar4,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar2,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).respawnButton;
                if ((pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) ||
                   (pGVar2 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar4,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
                goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
              }
              pRVar1 = (this->fields).holsterButton;
              if ((pRVar1 != (RectTransform *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar2,(MethodInfo *)0x0);
                if (bVar3 != 0) {
                  pRVar1 = (this->fields).holsterButton;
                  if ((pRVar1 == (RectTransform *)0x0) ||
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                }
                pRVar1 = (this->fields).jumpButton;
                if ((pRVar1 != (RectTransform *)0x0) &&
                   (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
                   pGVar2 != (GameObject *)0x0)) {
                  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar2,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    return;
                  }
                  pRVar1 = (this->fields).jumpButton;
                  if ((pRVar1 != (RectTransform *)0x0) &&
                     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)pRVar1,(MethodInfo *)0x0),
                     pGVar2 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_HideEUseIcon
               (InGameButtons *this,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if (this_00 != (RectTransform *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_ShowEUseIcon
               (InGameButtons *this,ShowUseOption__Enum option,MethodInfo *method)

{
  this_00 = (this->fields).use;
  if ((this_00 == (RectTransform *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InGameButtons::InGameButtons_Update
               (InGameButtons *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  InGameButtons_HandleFireVisibility(this,(MethodInfo *)0x0);
  PVar1 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
  if (PVar1 != (this->fields).showingEquipableUI) {
    pRVar2 = (this->fields).holsterButton;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pRVar2 = (this->fields).holsterButton;
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pRVar2,(MethodInfo *)0x0);
      PVar1 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,(byte)(PVar1 >> 3) & 1,(MethodInfo *)0x0);
    }
    pRVar2 = (this->fields).dropWeapon;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar2,(MethodInfo *)0x0);
    PVar1 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,(byte)(PVar1 >> 1) & 1,(MethodInfo *)0x0);
    PVar1 = PickupGUI::PickupGUI_get_ShowEquipableUI((MethodInfo *)0x0);
    (this->fields).showingEquipableUI = PVar1;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar5 != (SpawnRoleDataMediator *)0x0) {
    a = (SpawnRoleVariable_1_System_Boolean_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
        Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                    *)pSVar5,(MethodInfo *)0x0);
    pRVar2 = (this->fields).leaveVehicle;
    if ((pRVar2 != (RectTransform *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar4,(MethodInfo *)0x0);
      bVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Boolean]::
              SpawnRoleVariable_1_System_Boolean__op_Inequality
                        (a,bVar3,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__bool_
                        );
      if (bVar3 != 0) {
        pRVar2 = (this->fields).leaveVehicle;
        if (pRVar2 == (RectTransform *)0x0) goto code_?;
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if (pSVar5 == (SpawnRoleDataMediator *)0x0) goto code_?;
        s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
            System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
            Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
            Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                        *)pSVar5,(MethodInfo *)0x0);
        SVar6 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                          (s,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                          );
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,(bool)SVar6,(MethodInfo *)0x0);
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar7 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
         pSVar7 != (SpawnRoleModeTypeWrapper *)0x0)) {
        bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                          (pSVar7,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar7 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
             pSVar7 != (SpawnRoleModeTypeWrapper *)0x0)) {
            bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                              (pSVar7,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              InGameButtons_HandleNotInPlayMode(this,(MethodInfo *)0x0);
            }
            return;
          }
        }
        else {
          pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).respawnButton;
          if ((pDVar8 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) &&
             (pGVar4 = (GameObject *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                 (pDVar8,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar4,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              pDVar8 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(this->fields).respawnButton;
              if ((pDVar8 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)0x0) ||
                 (pGVar4 = (GameObject *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                     (pDVar8,(MethodInfo *)0x0), pGVar4 == (GameObject *)0x0))
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
            }
            pRVar2 = (this->fields).jumpButton;
            if ((pRVar2 != (RectTransform *)0x0) &&
               (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pRVar2,(MethodInfo *)0x0),
               pGVar4 != (GameObject *)0x0)) {
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar4,(MethodInfo *)0x0);
              if (bVar3 != 0) {
                return;
              }
              pRVar2 = (this->fields).jumpButton;
              if ((pRVar2 != (RectTransform *)0x0) &&
                 (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)pRVar2,(MethodInfo *)0x0),
                 pGVar4 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,1,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

