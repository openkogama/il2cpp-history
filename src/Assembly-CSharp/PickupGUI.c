
/* Void AvatarLeftVehicle() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_AvatarLeftVehicle(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pickup_GUI_LEAVE_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this_00,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Pickup_GUI_LEAVE_,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pMVar2 = (this->fields).pickupOwner;
    if (pMVar2 != (MVPickupOwner *)0x0) {
      pPVar3 = (pMVar2->fields).currentItem;
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
      if (pPVar3 != (PickupItem *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pMVar2 = (this->fields).pickupOwner;
          if ((pMVar2 == (MVPickupOwner *)0x0) ||
             (pPVar3 = (pMVar2->fields).currentItem, pPVar3 == (PickupItem *)0x0))
          goto code_?;
          iVar4 = (*(pPVar3->klass->vtable).__unknown.methodPtr)();
          if (iVar4 != 5) {
            pMVar2 = (this->fields).pickupOwner;
            if (pMVar2 != (MVPickupOwner *)0x0) {
              PickupGUI_OnEquipItem(this,(pMVar2->fields).currentItem,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__PickupGUI);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__PickupGUI);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField =
                   uVar5 & 0xffffffef;
              if (((this->fields).pickupOwner != (MVPickupOwner *)0x0) &&
                 ((this->fields).crossHair != (IGUICrossHair *)0x0)) {
                FUN_?();
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__IGUICrossHair,0);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__IPlayModeUI);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                    (IPlayModeUI *)0x0) {
                  cVar6 = FUN_?(7,TypeInfo__IPlayModeUI);
                  if ((cVar6 == '\0') && ((this->fields).canBeVisible != 0)) {
                    pMVar2 = (this->fields).pickupOwner;
                    if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
                    bVar7 = (pMVar2->fields)._IsLocal_k__BackingField;
                  }
                  else {
                    bVar7 = 0;
                  }
                  if ((this->fields).crossHair != (IGUICrossHair *)0x0) {
                    cVar6 = FUN_?(0,TypeInfo__IGUICrossHair);
                    if ((bool)cVar6 != (bVar7 != 0)) {
                      pIVar8 = (this->fields).crossHair;
                      if (pIVar8 == (IGUICrossHair *)0x0) goto code_?;
                      FUN_?(1,TypeInfo__IGUICrossHair,pIVar8,bVar7 != 0,unaff_RBX);
                    }
                    return;
                  }
                }
code_?:
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            goto code_?;
          }
        }
      }
      (this->fields).canBeVisible = 0;
      PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
      pIVar8 = (this->fields).crossHair;
      if (pIVar8 != (IGUICrossHair *)0x0) {
        FUN_?(1,TypeInfo__IGUICrossHair,pIVar8,0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PickupGUI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_Enter(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 == (MVPickupOwner *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pPVar3 = (pMVar1->fields).currentItem;
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
  if (pPVar3 != (PickupItem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).pickupOwner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        PickupGUI_OnEquipItem(this,(pMVar1->fields).currentItem,(MethodInfo *)0x0);
        pMVar1 = (this->fields).pickupOwner;
        if ((pMVar1 != (MVPickupOwner *)0x0) &&
           (pPVar3 = (pMVar1->fields).currentItem, pPVar3 != (PickupItem *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar3->klass->vtable).OnEnterVehicleWithWeapon.methodPtr)
                    (pPVar3,(pPVar3->klass->vtable).OnEnterVehicleWithWeapon.method);
          return;
        }
      }
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
  return;
}


/* Void Initialize(Int32, MVPickupOwner) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_Initialize
               (PickupGUI *this,int32_t worldObjectId,MVPickupOwner *pickupOwner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnEquipItem_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnHolstered_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnUnequipItem_PickupItem_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).worldObjectId = worldObjectId;
  (this->fields).pickupOwner = pickupOwner;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pickupOwner >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    pIVar6 = (IGUICrossHair *)FUN_?(2,TypeInfo__IPlayModeUI);
    bVar1 = iRam_? != 0;
    (this->fields).crossHair = pIVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).crossHair >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (((this->fields).crossHair != (IGUICrossHair *)0x0) &&
       (FUN_?(1,TypeInfo__IGUICrossHair), pickupOwner != (MVPickupOwner *)0x0)) {
      pMVar7 = (pickupOwner->fields).onEquipItem;
      pUVar8 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar8,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
      if (pMVar7 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        (pickupOwner->fields).onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      }
      else {
        pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        if (pMVar7->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
          pMVar9 = pMVar7;
        }
        if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pickupOwner->fields).onEquipItem = pMVar9;
        pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        if (pMVar7->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
          pMVar9 = pMVar7;
        }
        if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pickupOwner->fields).onEquipItem >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pMVar11 = (pickupOwner->fields).onUnequipItem;
      pUVar8 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar8,(Object *)this,MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar11 = (MVPickupOwner_OnUnequipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar11,(Delegate *)pUVar8,(MethodInfo *)0x0);
      if (pMVar11 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        (pickupOwner->fields).onUnequipItem = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
      }
      else {
        pMVar12 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar11->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar12 = pMVar11;
        }
        if (pMVar12 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pickupOwner->fields).onUnequipItem = pMVar12;
        pMVar12 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar11->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar12 = pMVar11;
        }
        if (pMVar12 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pickupOwner->fields).onUnequipItem >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pAVar13 = (pickupOwner->fields).OnHolsteredChanged;
      pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
      FUN_?(pDVar14,this);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
      pAVar15 = TypeInfo__System__Action<bool>;
      if (pDVar14 == (Delegate *)0x0) {
        (pickupOwner->fields).OnHolsteredChanged = (Action_1_Boolean_ *)0x0;
      }
      else {
        pAVar13 = (Action_1_Boolean_ *)FUN_?(pDVar14,TypeInfo__System__Action<bool>);
        if (pAVar13 == (Action_1_Boolean_ *)0x0) {
          FUN_?(pDVar14,pAVar15);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pickupOwner->fields).OnHolsteredChanged = pAVar13;
        pAVar15 = TypeInfo__System__Action<bool>;
        lVar3 = FUN_?(pDVar14,TypeInfo__System__Action<bool>);
        if (lVar3 == 0) {
          FUN_?(pDVar14,pAVar15);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pickupOwner->fields).OnHolsteredChanged >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsInJetpack() */

bool Assembly-CSharp.dll::PickupGUI::PickupGUI_IsInJetpack(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar1,(this->fields).worldObjectId,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,id,(MethodInfo *)0x0);
      pMVar3 = (MVWorldObjectClient *)0x0;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        bVar4 = (TypeInfo__MVJetPack->_1).naturalAligment;
        if (((pMVar2->klass->_1).naturalAligment < bVar4) ||
           (bVar5 = true,
           (MVJetPack__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
           TypeInfo__MVJetPack)) {
          bVar5 = false;
        }
        if (bVar5) {
          pMVar3 = pMVar2;
        }
      }
      return pMVar3 != (MVWorldObjectClient *)0x0;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_LateUpdate(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = (pMVar1->fields).currentItem;
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
    if (pPVar2 != (PickupItem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pPVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pPVar2 = (pMVar1->fields).currentItem;
        if (pPVar2 == (PickupItem *)0x0) goto code_?;
        if ((pPVar2->fields)._IsHolstered_k__BackingField == 0) {
          cVar3 = (*(pPVar2->klass->vtable).get_GunMode.methodPtr)(pPVar2);
          if (cVar3 != '\0') {
            if (((this->fields).pickupOwner == (MVPickupOwner *)0x0) ||
               ((this->fields).crossHair == (IGUICrossHair *)0x0)) goto code_?;
            FUN_?();
            PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnDestroy(PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnEquipItem_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnHolstered_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__OnUnequipItem_PickupItem_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pickupOwner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields).onEquipItem;
    pUVar3 = (UnityAction_1_System_Object_ *)
             FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar3,(Object *)this,MethodInfo__PickupGUI__OnEquipItem_PickupItem_,
               (MethodInfo *)0x0);
    pMVar2 = (MVPickupOwner_OnEquipItemDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pMVar2 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
      (pMVar1->fields).onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    }
    else {
      pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar4 = pMVar2;
      }
      if (pMVar4 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields).onEquipItem = pMVar4;
      pMVar4 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar2->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar4 = pMVar2;
      }
      if (pMVar4 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar1->fields).onEquipItem >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pMVar1 = (this->fields).pickupOwner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      pMVar11 = (pMVar1->fields).onUnequipItem;
      pUVar3 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVPickupOwner__OnUnequipItemDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar3,(Object *)this,MethodInfo__PickupGUI__OnUnequipItem_PickupItem_,
                 (MethodInfo *)0x0);
      pMVar11 = (MVPickupOwner_OnUnequipItemDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar11,(Delegate *)pUVar3,(MethodInfo *)0x0);
      if (pMVar11 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        (pMVar1->fields).onUnequipItem = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
      }
      else {
        pMVar12 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar11->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar12 = pMVar11;
        }
        if (pMVar12 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pMVar1->fields).onUnequipItem = pMVar12;
        pMVar12 = (MVPickupOwner_OnUnequipItemDelegate *)0x0;
        if (pMVar11->klass == TypeInfo__MVPickupOwner__OnUnequipItemDelegate) {
          pMVar12 = pMVar11;
        }
        if (pMVar12 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pMVar1->fields).onUnequipItem >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pMVar1 = (this->fields).pickupOwner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        pAVar13 = (pMVar1->fields).OnHolsteredChanged;
        pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
        FUN_?(pDVar14,this);
        pDVar14 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
        pAVar15 = TypeInfo__System__Action<bool>;
        if (pDVar14 == (Delegate *)0x0) {
          (pMVar1->fields).OnHolsteredChanged = (Action_1_Boolean_ *)0x0;
        }
        else {
          pAVar13 = (Action_1_Boolean_ *)FUN_?(pDVar14,TypeInfo__System__Action<bool>);
          if (pAVar13 == (Action_1_Boolean_ *)0x0) {
            FUN_?(pDVar14,pAVar15);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (pMVar1->fields).OnHolsteredChanged = pAVar13;
          pAVar15 = TypeInfo__System__Action<bool>;
          lVar7 = FUN_?(pDVar14,TypeInfo__System__Action<bool>);
          if (lVar7 == 0) {
            FUN_?(pDVar14,pAVar15);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&(pMVar1->fields).OnHolsteredChanged >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEquipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnEquipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
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
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
  if (item == (PickupItem *)0x0) goto code_?;
  cVar1 = (*(item->klass->vtable).get_CanHolster.methodPtr)();
  if (cVar1 != '\0') {
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
        (pSVar3 = (pSVar2->fields).isSeated,
        pSVar3 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0)) ||
       (pSVar4 = (pSVar3->fields)._.subscribableVariable,
       pSVar4 == (SubscribableVariable_1_System_Boolean_ *)0x0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if ((pSVar4->fields)._.value == 0) {
code_?:
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    else {
      bVar5 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0);
      if (bVar5 != 0) goto code_?;
    }
    if ((item->fields)._IsHolstered_k__BackingField != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar6 | 0x10;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar6 | 8;
  }
  (this->fields).canBeVisible = 0;
  cVar1 = (*(item->klass->vtable).get_GunMode.methodPtr)(item);
  if (cVar1 != '\0') {
    bVar7 = cRam_? == '\0';
    (this->fields).canBeVisible = 1;
    if (bVar7) {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar6 | 4;
  }
  PickupGUI_UpdateCrossHairVisibility(this,(MethodInfo *)0x0);
  if ((this->fields).crossHair != (IGUICrossHair *)0x0) {
    FUN_?();
    cVar1 = (*(item->klass->vtable).CanFire.methodPtr)(item,(item->klass->vtable).CanFire.method);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar6 | 1;
    }
    cVar1 = (*(item->klass->vtable).get_CanUnequip.methodPtr)
                      (item,(item->klass->vtable).get_CanUnequip.method);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar6 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar6 | 2;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnHolstered(Boolean) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnHolstered
               (PickupGUI *this,bool isHolstered,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
      (pSVar2 = (pSVar1->fields).isSeated,
      pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0)) &&
     (pSVar3 = (pSVar2->fields)._.subscribableVariable,
     pSVar3 != (SubscribableVariable_1_System_Boolean_ *)0x0)) {
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (((pSVar3->fields)._.value == 0) ||
       (bVar4 = PickupGUI_IsInJetpack(this,(MethodInfo *)0x0), bVar4 != 0)) {
      HolsterTip::HolsterTip_Show((MethodInfo *)0x0);
    }
    if (isHolstered == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 & 0xffffffef;
      pMVar6 = (this->fields).pickupOwner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         (pPVar7 = (pMVar6->fields).currentItem, pPVar7 != (PickupItem *)0x0)) {
        cVar8 = (*(pPVar7->klass->vtable).get_GunMode.methodPtr)
                          (pPVar7,(pPVar7->klass->vtable).get_GunMode.method);
        if (cVar8 == '\0') {
          return;
        }
        pIVar9 = (this->fields).crossHair;
        if (pIVar9 != (IGUICrossHair *)0x0) {
          uVar10 = 1;
          goto code_?;
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar5 = TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PickupGUI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = uVar5 | 0x10;
      pIVar9 = (this->fields).crossHair;
      if (pIVar9 != (IGUICrossHair *)0x0) {
        uVar10 = 0;
code_?:
        FUN_?(1,TypeInfo__IGUICrossHair,pIVar9,uVar10);
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnUnequipItem(PickupItem) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_OnUnequipItem
               (PickupGUI *this,PickupItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).crossHair;
  (this->fields).canBeVisible = 0;
  if (pIVar1 != (IGUICrossHair *)0x0) {
    FUN_?(1,TypeInfo__IGUICrossHair,pIVar1,0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCrossHairVisibility() */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_UpdateCrossHairVisibility
               (PickupGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGUICrossHair);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    cVar1 = FUN_?(7,TypeInfo__IPlayModeUI);
    if ((cVar1 == '\0') && ((this->fields).canBeVisible != 0)) {
      pMVar2 = (this->fields).pickupOwner;
      if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
      bVar3 = (pMVar2->fields)._IsLocal_k__BackingField;
    }
    else {
      bVar3 = 0;
    }
    if ((this->fields).crossHair != (IGUICrossHair *)0x0) {
      cVar1 = FUN_?(0,TypeInfo__IGUICrossHair);
      if ((bool)cVar1 != (bVar3 != 0)) {
        pIVar4 = (this->fields).crossHair;
        if (pIVar4 == (IGUICrossHair *)0x0) goto code_?;
        FUN_?(1,TypeInfo__IGUICrossHair,pIVar4,bVar3 != 0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PickupGUIFlags get_ShowEquipableUI() */

PickupGUIFlags__Enum
Assembly-CSharp.dll::PickupGUI::PickupGUI_get_ShowEquipableUI(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
}


/* Void set_ShowEquipableUI(PickupGUIFlags) */

void Assembly-CSharp.dll::PickupGUI::PickupGUI_set_ShowEquipableUI
               (PickupGUIFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField = value;
  return;
}

