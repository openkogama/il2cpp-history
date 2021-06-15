
/* Void AvatarLeftVehicle() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_AvatarLeftVehicle(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_Pickup_GUI_LEAVE_,pSVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).pickupOwner;
    if (pMVar2 != (MVPickupOwner *)0x0) {
      x = (Object_1 *)
          GamePointGainEffect::GamePointGainEffect_get_ID
                    ((GamePointGainEffect *)pMVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar2 = (this->fields).pickupOwner;
        if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
        piVar4 = (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                                  ((GamePointGainEffect *)pMVar2,(MethodInfo *)0x0);
        if (piVar4 == (int *)0x0) goto code_?;
        iVar5 = (**(code **)(*piVar4 + 0x120))(piVar4,*(undefined4 *)(*piVar4 + 0x124));
        if (iVar5 != 5) {
          pMVar2 = (this->fields).pickupOwner;
          if (pMVar2 != (MVPickupOwner *)0x0) {
            item = (PickupItem *)
                   GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)pMVar2,(MethodInfo *)0x0);
            PickupGUI_OnEquipItem(this,item,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField =
                 uVar6 & 0xffffffef;
            pMVar2 = (this->fields).pickupOwner;
            pIVar7 = (this->fields).crossHair;
            if (pMVar2 != (MVPickupOwner *)0x0) {
              GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)pMVar2,(MethodInfo *)0x0);
              if (pIVar7 != (IGUICrossHair *)0x0) {
                func_?(2,TypeInfo__IGUICrossHair,pIVar7);
                PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
      }
      (this->fields).canBeVisible = 0;
      PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
      pIVar7 = (this->fields).crossHair;
      if (pIVar7 != (IGUICrossHair *)0x0) {
        func_?(1,TypeInfo__IGUICrossHair,pIVar7,0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_Enter(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    x = (Object_1 *)
        GamePointGainEffect::GamePointGainEffect_get_ID
                  ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
      return;
    }
    pMVar1 = (this->fields).pickupOwner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      item = (PickupItem *)
             GamePointGainEffect::GamePointGainEffect_get_ID
                       ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0);
      PickupGUI_OnEquipItem(this,item,(MethodInfo *)0x0);
      pMVar1 = (this->fields).pickupOwner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        piStack3 =
             (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0);
        if (piStack3 != (int *)0x0) {
          uStack4 = *(undefined4 *)(*piStack3 + 0x16c);
          (**(code **)(*piStack3 + 0x168))();
          return;
        }
      }
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(Int32, MVPickupOwner) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_Initialize
               (PickupGUI *this,int32_t worldObjectId,MVPickupOwner *pickupOwner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).worldObjectId = worldObjectId;
  (this->fields).pickupOwner = pickupOwner;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pIVar2 = (IGUICrossHair *)func_?(2,TypeInfo__IPlayModeUI,pIVar1);
    (this->fields).crossHair = pIVar2;
    if (pIVar2 != (IGUICrossHair *)0x0) {
      func_?(1,TypeInfo__IGUICrossHair,pIVar2,0);
      if (pickupOwner != (MVPickupOwner *)0x0) {
        pMVar3 = (pickupOwner->fields).onEquipItem;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVPickupOwner_OnEquipItemDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pMVar3 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        if (pMVar5 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          if (pMVar5->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar3 = pMVar5;
          }
          if (pMVar3 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
        }
        (pickupOwner->fields).onEquipItem = pMVar3;
        pMVar6 = (pickupOwner->fields).onUnequipItem;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,
                   (MethodInfo *)0x0);
        pMVar7 = (MVPickupOwner_OnUnequipItemDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pMVar6 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar7 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          if (pMVar7->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
            pMVar6 = pMVar7;
          }
          if (pMVar6 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) goto code_?;
        }
        (pickupOwner->fields).onUnequipItem = pMVar6;
        pAVar8 = (pickupOwner->fields).OnHolsteredChanged;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__PickupGUI__OnHolstered_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        pAVar9 = (Action_1_Boolean_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar8,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pAVar8 = (Action_1_Boolean_ *)0x0;
        if (pAVar9 == (Action_1_Boolean_ *)0x0) {
code_?:
          (pickupOwner->fields).OnHolsteredChanged = pAVar8;
          return;
        }
        if (pAVar9->klass == TypeInfo__System__Action<bool>) {
          pAVar8 = pAVar9;
        }
        if (pAVar8 != (Action_1_Boolean_ *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::PickupGUI::PickupGUI_IsInJetpack(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar1,(this->fields).worldObjectId,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObject *)0x0) {
        bVar3 = (TypeInfo__MVJetPack->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
           ((MVJetPack__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVJetPack)
           ) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar5 = (MVWorldObject *)0x0;
        if (bVar4) {
          pMVar5 = pMVar2;
        }
        if (pMVar5 != (MVWorldObject *)0x0) {
          return 1;
        }
      }
      return 0;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_LateUpdate(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    bVar2 = MVPickupOwner::MVPickupOwner_get_InGunMode(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pMVar1 = (this->fields).pickupOwner;
    pIVar3 = (this->fields).crossHair;
    if ((pMVar1 != (MVPickupOwner *)0x0) &&
       (GamePointGainEffect::GamePointGainEffect_get_ID
                  ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0), pIVar3 != (IGUICrossHair *)0x0)
       ) {
      func_?(2,TypeInfo__IGUICrossHair,pIVar3);
      PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnDestroy(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields).onEquipItem;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,
               (MethodInfo *)0x0);
    pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pMVar2 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    if (pMVar4 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
      if (pMVar4->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar2 = pMVar4;
      }
      pMVar5 = (MVPickupOwner_OnUnequipItemDelegate__Class *)
               TypeInfo__MVPickupOwner__OnEquipItemDelegate;
      if (pMVar2 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
    }
    (pMVar1->fields).onEquipItem = pMVar2;
    pMVar1 = (this->fields).pickupOwner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      source = (pMVar1->fields).onUnequipItem;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pMVar2 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar4 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        if ((MVPickupOwner_OnUnequipItemDelegate__Class *)pMVar4->klass ==
            TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar2 = pMVar4;
        }
        pMVar5 = TypeInfo__MVPickupOwner__OnUnequipItemDelegate;
        if (pMVar2 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
      }
      (pMVar1->fields).onUnequipItem = (MVPickupOwner_OnUnequipItemDelegate *)pMVar2;
      pMVar1 = (this->fields).pickupOwner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        source_00 = (pMVar1->fields).OnHolsteredChanged;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action<bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this,MethodInfo__PickupGUI__OnHolstered_bool_,
                   MethodInfo__System__Action<bool>__Action_System__Object__void__);
        pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source_00,(Delegate *)pUVar3,(MethodInfo *)0x0);
        pMVar2 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        if (pMVar4 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
code_?:
          (pMVar1->fields).OnHolsteredChanged = (Action_1_Boolean_ *)pMVar2;
          return;
        }
        if ((Action_1_Boolean___Class *)pMVar4->klass == TypeInfo__System__Action<bool>) {
          pMVar2 = pMVar4;
        }
        pMVar5 = (MVPickupOwner_OnUnequipItemDelegate__Class *)TypeInfo__System__Action<bool>;
        if (pMVar2 != (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
  pMVar4 = extraout_ECX;
  pMVar5 = (MVPickupOwner_OnUnequipItemDelegate__Class *)extraout_EDX;
code_?:
  func_?(pMVar4,pMVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnEquipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
  if (item == (PickupItem *)0x0) goto code_?;
  cVar1 = (*(code *)(item->klass->vtable).get_CanHolster.method)
                    (item,(item->klass->vtable).get_HasUnlimitedAmmo.methodPtr);
  if (cVar1 != '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (this_00 == (SpawnRoleDataMediator *)0x0) goto code_?;
    s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
        Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                    *)this_00,(MethodInfo *)0x0);
    SVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
            SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                      (s,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    if ((char)SVar2 == '\0') {
code_?:
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    else {
      bVar3 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
    }
    if ((item->fields)._IsHolstered_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 | 0x10;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 | 8;
  }
  (this->fields).canBeVisible = 0;
  cVar1 = (*(code *)(item->klass->vtable).get_ActivateGunModeOnEquip.method)();
  if (cVar1 != '\0') {
    bVar5 = cRam_? == '\0';
    (this->fields).canBeVisible = 1;
    if (bVar5) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 | 4;
  }
  PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
  pIVar6 = (this->fields).crossHair;
  if (pIVar6 != (IGUICrossHair *)0x0) {
    func_?(2,TypeInfo__IGUICrossHair,pIVar6,item);
    cVar1 = (*(code *)(item->klass->vtable).CanFire.method)
                      (item,(item->klass->vtable).TriggerBegin.methodPtr);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 | 1;
    }
    cVar1 = (*(code *)(item->klass->vtable).get_CanUnequip.method)
                      (item,(item->klass->vtable).__unknown.methodPtr);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 | 2;
    }
    return;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHolstered(Boolean) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnHolstered
               (PickupGUI *this,bool isHolstered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_01 != (SpawnRoleDataMediator *)0x0) {
    s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
        Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                    *)this_01,(MethodInfo *)0x0);
    SVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
            SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                      (s,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    if (((char)SVar1 == '\0') || (bVar2 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0), bVar2 != 0)
       ) {
      isHolstered = 0x46;
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    if (isHolstered == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar3 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar3 & 0xffffffef;
      this_00 = (this->fields).pickupOwner;
      if ((this_00 == (MVPickupOwner *)0x0) ||
         (piVar4 = (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                                    ((GamePointGainEffect *)this_00,(MethodInfo *)0x0),
         piVar4 == (int *)0x0)) goto code_?;
      cVar5 = (**(code **)(*piVar4 + 0x100))();
      if (cVar5 == '\0') {
        return;
      }
      pIVar6 = (this->fields).crossHair;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar3 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar3 | 0x10;
      pIVar6 = (this->fields).crossHair;
    }
    if (pIVar6 != (IGUICrossHair *)0x0) {
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnUnequipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnUnequipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).canBeVisible = 0;
  pIVar1 = (this->fields).crossHair;
  if (pIVar1 != (IGUICrossHair *)0x0) {
    func_?(1,TypeInfo__IGUICrossHair,pIVar1);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCrossHairVisibility() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_UpdateCrossHairVisibility
               (PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    cVar2 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
    if ((cVar2 == '\0') && ((this->fields).canBeVisible != 0)) {
      this_00 = (this->fields).pickupOwner;
      if (this_00 == (MVPickupOwner *)0x0) goto code_?;
      bVar3 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
    }
    else {
      bVar3 = 0;
    }
    uVar4 = (uint)bVar3;
    pIVar5 = (this->fields).crossHair;
    if (pIVar5 != (IGUICrossHair *)0x0) {
      bVar6 = func_?(0,TypeInfo__IGUICrossHair,pIVar5,uVar4);
      if (bVar6 != bVar3) {
        pIVar5 = (this->fields).crossHair;
        if (pIVar5 == (IGUICrossHair *)0x0) goto code_?;
        func_?(1,TypeInfo__IGUICrossHair,pIVar5,uVar4);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* PickupGUIFlags get_ShowEquipableUI() */

PickupGUIFlags__Enum
Assembly-CSharp.dll::PickupGUI::PickupGUI_get_ShowEquipableUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
}


/* Void set_ShowEquipableUI(PickupGUIFlags) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_set_ShowEquipableUI
               (PickupGUIFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = value;
  return;
}

