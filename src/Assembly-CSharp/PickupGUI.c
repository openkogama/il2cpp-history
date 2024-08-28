
/* Void AvatarLeftVehicle() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_AvatarLeftVehicle(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Pickup_GUI_LEAVE_);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Pickup_GUI_LEAVE_,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).pickupOwner;
    if (pMVar2 != (MVPickupOwner *)0x0) {
      pPVar3 = (pMVar2->fields).currentItem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar2 = (this->fields).pickupOwner;
        if ((pMVar2 == (MVPickupOwner *)0x0) ||
           (pPVar3 = (pMVar2->fields).currentItem, pPVar3 == (PickupItem *)0x0))
        goto code_?;
        iVar5 = (*(code *)(pPVar3->klass->vtable).__unknown.method)
                          (pPVar3,(pPVar3->klass->vtable).CanFire.methodPtr);
        if (iVar5 != 5) {
          pMVar2 = (this->fields).pickupOwner;
          if (pMVar2 != (MVPickupOwner *)0x0) {
            PickupGUI_OnEquipItem(this,(pMVar2->fields).currentItem,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__PickupGUI);
              cRam_? = '\x01';
            }
            uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__PickupGUI);
              cRam_? = '\x01';
            }
            TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField =
                 uVar6 & 0xffffffef;
            pMVar2 = (this->fields).pickupOwner;
            if ((pMVar2 != (MVPickupOwner *)0x0) &&
               (pIVar7 = (this->fields).crossHair, pIVar7 != (IGUICrossHair *)0x0)) {
              func_?(2,TypeInfo__IGUICrossHair,pIVar7,(pMVar2->fields).currentItem);
              PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
              return;
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
          func_?(&TypeInfo__PickupGUI);
          cRam_? = '\x01';
        }
        TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_Enter(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    x = (pMVar1->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
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
      PickupGUI_OnEquipItem(this,(pMVar1->fields).currentItem,(MethodInfo *)0x0);
      pMVar1 = (this->fields).pickupOwner;
      if ((pMVar1 != (MVPickupOwner *)0x0) &&
         (pPStack3 = (pMVar1->fields).currentItem, pPStack3 != (PickupItem *)0x0)) {
        pIStack4 = (pPStack3->klass->vtable).OnHolstered.methodPtr;
        (*(code *)(pPStack3->klass->vtable).OnEnterVehicleWithWeapon.method)();
        return;
      }
    }
  }
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
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    func_?(&TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
    func_?(&MethodInfo__PickupGUI__OnEquipItem_PickupItem_);
    func_?(&MethodInfo__PickupGUI__OnHolstered_bool_);
    func_?(&MethodInfo__PickupGUI__OnUnequipItem_PickupItem_);
    cRam_? = '\x01';
  }
  (this->fields).pickupOwner = pickupOwner;
  (this->fields).worldObjectId = worldObjectId;
  func_?(&(this->fields).pickupOwner,pickupOwner);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 == (IPlayModeUI *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pIVar2 = (IGUICrossHair *)func_?(2,TypeInfo__IPlayModeUI,pIVar1);
    ppIVar3 = &(this->fields).crossHair;
    *ppIVar3 = pIVar2;
    func_?(ppIVar3,pIVar2);
    if (*ppIVar3 == (IGUICrossHair *)0x0) goto code_?;
    func_?(1,TypeInfo__IGUICrossHair,*ppIVar3,0);
    if (pickupOwner == (MVPickupOwner *)0x0) goto code_?;
    pMVar4 = (pickupOwner->fields).onEquipItem;
    pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
             func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (pVVar5,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,
               (MethodInfo *)0x0);
    pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar4,(Delegate *)pVVar5,(MethodInfo *)0x0);
    if (pMVar4 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
      (pickupOwner->fields).onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
code_?:
      func_?();
      pMVar6 = (pickupOwner->fields).onUnequipItem;
      pVVar5 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (pVVar5,(Object *)&(pickupOwner->fields).onEquipItem,
                 MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,(MethodInfo *)0x0);
      pMVar6 = (MVPickupOwner_OnUnequipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar6,(Delegate *)pVVar5,(MethodInfo *)0x0);
      if (pMVar6 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        pMVar7 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar6->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          (pickupOwner->fields).onUnequipItem = pMVar7;
          pMVar7 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) goto code_?;
        }
        goto code_?;
      }
      (pickupOwner->fields).onUnequipItem = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
code_?:
      func_?();
      pAVar8 = (pickupOwner->fields).OnHolsteredChanged;
      ppAVar9 = &(pickupOwner->fields).OnHolsteredChanged;
      this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)&(pickupOwner->fields).onUnequipItem,
                 MethodInfo__PickupGUI__OnHolstered_bool_,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar10 == (Delegate *)0x0) {
        *ppAVar9 = (Action_1_Boolean_ *)0x0;
        func_?();
        return;
      }
      pAVar8 = (Action_1_Boolean_ *)func_?();
      if (pAVar8 != (Action_1_Boolean_ *)0x0) {
        *ppAVar9 = pAVar8;
        iVar11 = func_?();
        if (iVar11 != 0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
    pMVar12 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    if (pMVar4->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pMVar12 = pMVar4;
    }
    if (pMVar12 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
      (pickupOwner->fields).onEquipItem = pMVar12;
      pMVar12 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar4->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar12 = pMVar4;
      }
      if (pMVar12 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::PickupGUI::PickupGUI_IsInJetpack(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVJetPack);
    cRam_? = '\x01';
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
        if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVJetPack__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] == TypeInfo__MVJetPack)
           ) {
          return 1;
        }
      }
      return 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_LateUpdate(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pPVar2 = (pMVar1->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pPVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pPVar2 = (pMVar1->fields).currentItem;
      if (pPVar2 == (PickupItem *)0x0) goto code_?;
      if ((pPVar2->fields)._IsHolstered_k__BackingField == 0) {
        cVar4 = (*(code *)(pPVar2->klass->vtable).get_ActivateGunModeOnEquip.method)
                          (pPVar2,(pPVar2->klass->vtable).get_CanHolster.methodPtr);
        if (cVar4 != '\0') {
          pMVar1 = (this->fields).pickupOwner;
          if ((pMVar1 == (MVPickupOwner *)0x0) ||
             (pIVar5 = (this->fields).crossHair, pIVar5 == (IGUICrossHair *)0x0))
          goto code_?;
          func_?(2,TypeInfo__IGUICrossHair,pIVar5,(pMVar1->fields).currentItem);
          PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnDestroy(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    func_?(&TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
    func_?(&MethodInfo__PickupGUI__OnEquipItem_PickupItem_);
    func_?(&MethodInfo__PickupGUI__OnHolstered_bool_);
    func_?(&MethodInfo__PickupGUI__OnUnequipItem_PickupItem_);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  pMVar2 = (pMVar1->fields).onEquipItem;
  pVVar3 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
           func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
  VideoCapture+OnVideoCaptureResourceCreatedCallback::
  VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
            (pVVar3,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,(MethodInfo *)0x0)
  ;
  pMVar2 = (MVPickupOwner_OnEquipItemDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pMVar2,(Delegate *)pVVar3,(MethodInfo *)0x0);
  if (pMVar2 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
    (pMVar1->fields).onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
code_?:
    func_?();
    pMVar1 = (this->fields).pickupOwner;
    if (pMVar1 == (MVPickupOwner *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
    }
    else {
      pMVar4 = (pMVar1->fields).onUnequipItem;
      pVVar3 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
               func_?(TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (pVVar3,(Object *)this,MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVPickupOwner_OnUnequipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar4,(Delegate *)pVVar3,(MethodInfo *)0x0);
      if (pMVar4 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        (pMVar1->fields).onUnequipItem = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
      }
      else {
        pMVar5 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) goto code_?;
        (pMVar1->fields).onUnequipItem = pMVar5;
        pMVar5 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) goto code_?;
      }
      func_?();
      pMVar1 = (this->fields).pickupOwner;
      if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
      source = (pMVar1->fields).OnHolsteredChanged;
      this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,MethodInfo__PickupGUI__OnHolstered_bool_,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar1->fields).OnHolsteredChanged = (Action_1_Boolean_ *)0x0;
        func_?();
        return;
      }
      pvVar7 = (void *)func_?();
      if (pvVar7 != (void *)0x0) {
        pDVar6[1].fields.invoke_impl = pvVar7;
        iVar8 = func_?();
        if (iVar8 != 0) {
          func_?();
          return;
        }
        goto code_?;
      }
    }
    func_?();
  }
  else {
    pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
    (pMVar1->fields).onEquipItem = pMVar9;
    pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pMVar9 = pMVar2;
    }
    if (pMVar9 != (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnEquipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
  if (item == (PickupItem *)0x0) goto code_?;
  cVar1 = (*(code *)(item->klass->vtable).get_CanHolster.method)
                    (item,(item->klass->vtable).get_HasUnlimitedAmmo.methodPtr);
  if (cVar1 != '\0') {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
    BVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar2->fields).isSeated,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    if ((char)BVar3 == '\0') {
code_?:
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    else {
      bVar4 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0);
      if (bVar4 != 0) goto code_?;
    }
    if ((item->fields)._IsHolstered_k__BackingField != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 0x10;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 8;
  }
  (this->fields).canBeVisible = 0;
  cVar1 = (*(code *)(item->klass->vtable).get_ActivateGunModeOnEquip.method)();
  if (cVar1 != '\0') {
    (this->fields).canBeVisible = 1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PickupGUI);
      cRam_? = '\x01';
    }
    uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PickupGUI);
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 4;
  }
  PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
  pIVar6 = (this->fields).crossHair;
  if (pIVar6 != (IGUICrossHair *)0x0) {
    func_?(2,TypeInfo__IGUICrossHair,pIVar6,item);
    cVar1 = (*(code *)(item->klass->vtable).CanFire.method)
                      (item,(item->klass->vtable).TriggerBegin.methodPtr);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PickupGUI);
        cRam_? = '\x01';
      }
      uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PickupGUI);
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 1;
    }
    cVar1 = (*(code *)(item->klass->vtable).get_CanUnequip.method)
                      (item,(item->klass->vtable).__unknown.methodPtr);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PickupGUI);
        cRam_? = '\x01';
      }
      uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PickupGUI);
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 2;
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHolstered(Boolean) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnHolstered
               (PickupGUI *this,bool isHolstered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                   );
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    BVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[System::ByteEnum]::SpawnRoleVariable_1_System_ByteEnum__op_Implicit
                      ((SpawnRoleVariable_1_System_ByteEnum_ *)(pSVar1->fields).isSeated,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
                      );
    if (((char)BVar2 == '\0') || (bVar3 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0), bVar3 != 0)
       ) {
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    if (isHolstered == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar4 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar4 & 0xffffffef;
      pMVar5 = (this->fields).pickupOwner;
      if ((pMVar5 == (MVPickupOwner *)0x0) ||
         (pPVar6 = (pMVar5->fields).currentItem, pPVar6 == (PickupItem *)0x0))
      goto code_?;
      cVar7 = (*(code *)(pPVar6->klass->vtable).get_ActivateGunModeOnEquip.method)();
      if (cVar7 == '\0') {
        return;
      }
      pIVar8 = (this->fields).crossHair;
    }
    else {
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
      pIVar8 = (this->fields).crossHair;
    }
    if (pIVar8 != (IGUICrossHair *)0x0) {
      func_?(1,TypeInfo__IGUICrossHair);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUnequipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnUnequipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IGUICrossHair;
    func_?();
    cRam_? = '\x01';
  }
  (this->fields).canBeVisible = 0;
  pIVar2 = (this->fields).crossHair;
  if (pIVar2 != (IGUICrossHair *)0x0) {
    ppIStack_1 = (IGUICrossHair__Class **)0x0;
    pIStack_3 = TypeInfo__IGUICrossHair;
    pIStack_4 = pIVar2;
    func_?(1);
    if (cRam_? == '\0') {
      ppIStack_1 = (IGUICrossHair__Class **)&TypeInfo__PickupGUI;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
    return;
  }
  ppIStack_1 = (IGUICrossHair__Class **)&stack0xfffffffc;
  uVar5 = func_?(&pIStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateCrossHairVisibility() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_UpdateCrossHairVisibility
               (PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    cVar2 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
    if ((cVar2 == '\0') && ((this->fields).canBeVisible != 0)) {
      pMVar3 = (this->fields).pickupOwner;
      if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
      bVar4 = (pMVar3->fields)._IsLocal_k__BackingField;
    }
    else {
      bVar4 = 0;
    }
    pIVar5 = (this->fields).crossHair;
    if (pIVar5 != (IGUICrossHair *)0x0) {
      cVar2 = func_?(0,TypeInfo__IGUICrossHair,pIVar5);
      if ((bool)cVar2 != (bVar4 != 0)) {
        pIVar5 = (this->fields).crossHair;
        if (pIVar5 == (IGUICrossHair *)0x0) goto code_?;
        func_?(1,TypeInfo__IGUICrossHair,pIVar5,bVar4 != 0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PickupGUIFlags get_ShowEquipableUI() */

PickupGUIFlags__Enum
Assembly-CSharp.dll::PickupGUI::PickupGUI_get_ShowEquipableUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  return TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
}


/* Void set_ShowEquipableUI(PickupGUIFlags) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_set_ShowEquipableUI
               (PickupGUIFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = value;
  return;
}

