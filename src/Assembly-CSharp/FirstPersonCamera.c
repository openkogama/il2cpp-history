
/* Void ActivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ActivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    cVar4 = (*(pPVar3->klass->vtable).get_FirstPerson.methodPtr)
                       (pPVar3,(pPVar3->klass->vtable).get_FirstPerson.method);
    if (cVar4 != '\0') {
      PickupItem::PickupItem_EnterFirstPersonView(pPVar3,(MVCameraBase *)this,(MethodInfo *)0x0);
      pMVar1 = (this->fields).localAvatar;
      this_00 = (this->fields).weaponBob;
      if (((pMVar1 == (MVAvatarLocal *)0x0) ||
          (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 == (AvatarPickupOwner *)0x0)) ||
         ((pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 == (PickupItem *)0x0 ||
          (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar3,(MethodInfo *)0x0),
          this_00 == (FirstPersonWeaponBob *)0x0)))) goto code_?;
      FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize(this_00,pTVar5,(MethodInfo *)0x0);
    }
    FirstPersonCamera_HideBody(this,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields).localAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pMVar6 = (pMVar1->fields)._.body, pMVar6 != (MVBody *)0x0)) &&
       ((pMVar7 = (pMVar6->fields).bodyObject, pMVar7 != (MVBodyObject *)0x0 &&
        (pAVar8 = (pMVar7->fields).avatarBlinker, pAVar8 != (AvatarBlinker *)0x0)))) {
      (pAVar8->fields)._.visible = 0;
      if ((this->fields).haveHiddenVehicle != 0) {
        FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).localAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
        pMVar9 = (pAVar2->fields)._.onEquipItem;
        this_04 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_04,(Object *)this,
                   MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
                   (MethodInfo *)0x0);
        pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pMVar9,(Delegate *)this_04,(MethodInfo *)0x0);
        if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          (pAVar2->fields)._.onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        }
        else {
          pMVar10 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar9->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar10 = pMVar9;
          }
          if (pMVar10 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pAVar2->fields)._.onEquipItem = pMVar10;
          pMVar10 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar9->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar10 = pMVar9;
          }
          if (pMVar10 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)&(pAVar2->fields)._.onEquipItem >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
        pMVar1 = (this->fields).localAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pAVar17 = (pMVar1->fields).OnHealing;
          pHVar18 = (this->fields).healingIndicator;
          pDVar19 = (Delegate *)FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
          FUN_?(pDVar19,pHVar18);
          pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar17,pDVar19,(MethodInfo *)0x0);
          pAVar20 = TypeInfo__System__Action<float,_MVPlayer>;
          if (pDVar19 == (Delegate *)0x0) {
            (pMVar1->fields).OnHealing = (Action_2_Single_MVPlayer_ *)0x0;
          }
          else {
            pAVar17 = (Action_2_Single_MVPlayer_ *)
                      FUN_?(pDVar19,TypeInfo__System__Action<float,_MVPlayer>);
            if (pAVar17 == (Action_2_Single_MVPlayer_ *)0x0) {
              FUN_?(pDVar19,pAVar20);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (pMVar1->fields).OnHealing = pAVar17;
            pAVar20 = TypeInfo__System__Action<float,_MVPlayer>;
            lVar21 = FUN_?(pDVar19,TypeInfo__System__Action<float,_MVPlayer>);
            if (lVar21 == 0) {
              FUN_?(pDVar19,pAVar20);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar12 = (uint)((ulonglong)&(pMVar1->fields).OnHealing >> 0xc);
            uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar16 = uVar14 == *puVar15;
              if (bVar16) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          pMVar1 = (this->fields).localAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            pAVar22 = (pMVar1->fields).OnDamageTaken;
            pDVar23 = (this->fields).damageIndicator;
            pDVar19 = (Delegate *)
                      FUN_?(
                                   TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                   );
            FUN_?(pDVar19,pDVar23);
            pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar22,pDVar19,(MethodInfo *)0x0);
            pAVar24 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
            if (pDVar19 == (Delegate *)0x0) {
              (pMVar1->fields).OnDamageTaken =
                   (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
            }
            else {
              pAVar22 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                        FUN_?(pDVar19,
                                      TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                     );
              if (pAVar22 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                FUN_?(pDVar19,pAVar24);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (pMVar1->fields).OnDamageTaken = pAVar22;
              pAVar24 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
              lVar21 = FUN_?(pDVar19,
                                     TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                    );
              if (lVar21 == 0) {
                FUN_?(pDVar19,pAVar24);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)&(pMVar1->fields).OnDamageTaken >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            this_01 = (this->fields).modifierIndicator;
            if (this_01 != (ModifierIndicator *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_01,1,(MethodInfo *)0x0);
              pMVar25 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (pMVar25 != (MainCameraManager *)0x0) {
                pMVar26 = (pMVar25->fields).cameraController;
                this_02 = (pMVar25->fields).transitionCamera;
                if ((((pMVar26 != (MVCameraController *)0x0) &&
                     (this_03 = (pMVar26->fields).cameraStack,
                     this_03 != (MVCameraController_CameraStack *)0x0)) &&
                    (this_05 = MVCameraController+CameraStack::
                               MVCameraController_CameraStack_get_CurCamera
                                         (this_03,(MethodInfo *)0x0), this_05 != (MVCameraBase *)0x0
                    )) && (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_transform((Component *)this_05,(MethodInfo *)0x0)
                          , this_02 != (TransitionCamera *)0x0)) {
                  TransitionCamera::TransitionCamera_InitTransition
                            (this_02,pTVar5,_UNK_?,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DeactivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_DeactivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (this_00 = (pAVar2->fields)._.currentItem, this_00 != (PickupItem *)0x0)) {
    if ((this_00->fields)._IsHolstered_k__BackingField == 0) {
      PickupItem::PickupItem_RevertToOriginalTransform(this_00,(MethodInfo *)0x0);
    }
    FirstPersonCamera_HideBody(this,0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).localAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pMVar3 = (pMVar1->fields)._.body, pMVar3 != (MVBody *)0x0)) &&
       ((pMVar4 = (pMVar3->fields).bodyObject, pMVar4 != (MVBodyObject *)0x0 &&
        (pAVar5 = (pMVar4->fields).avatarBlinker, pAVar5 != (AvatarBlinker *)0x0)))) {
      (pAVar5->fields)._.visible = 1;
      if ((this->fields).haveHiddenVehicle != 0) {
        FirstPersonCamera_ShowVehicle(this,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).localAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
        pMVar6 = (pAVar2->fields)._.onEquipItem;
        this_04 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_04,(Object *)this,
                   MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
                   (MethodInfo *)0x0);
        pMVar6 = (MVPickupOwner_OnEquipItemDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pMVar6,(Delegate *)this_04,(MethodInfo *)0x0);
        if (pMVar6 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          (pAVar2->fields)._.onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        }
        else {
          pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pAVar2->fields)._.onEquipItem = pMVar7;
          pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(pAVar2->fields)._.onEquipItem >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        pMVar1 = (this->fields).localAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pAVar14 = (pMVar1->fields).OnHealing;
          pHVar15 = (this->fields).healingIndicator;
          pDVar16 = (Delegate *)FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
          FUN_?(pDVar16,pHVar15);
          pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar14,pDVar16,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<float,_MVPlayer>;
          if (pDVar16 == (Delegate *)0x0) {
            (pMVar1->fields).OnHealing = (Action_2_Single_MVPlayer_ *)0x0;
          }
          else {
            pAVar14 = (Action_2_Single_MVPlayer_ *)
                      FUN_?(pDVar16,TypeInfo__System__Action<float,_MVPlayer>);
            if (pAVar14 == (Action_2_Single_MVPlayer_ *)0x0) {
              FUN_?(pDVar16,pAVar17);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pMVar1->fields).OnHealing = pAVar14;
            pAVar17 = TypeInfo__System__Action<float,_MVPlayer>;
            lVar18 = FUN_?(pDVar16,TypeInfo__System__Action<float,_MVPlayer>);
            if (lVar18 == 0) {
              FUN_?(pDVar16,pAVar17);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&(pMVar1->fields).OnHealing >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          pMVar1 = (this->fields).localAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            pAVar19 = (pMVar1->fields).OnDamageTaken;
            pDVar20 = (this->fields).damageIndicator;
            pDVar16 = (Delegate *)
                      FUN_?(
                                   TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                   );
            FUN_?(pDVar16,pDVar20);
            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar19,pDVar16,(MethodInfo *)0x0);
            pAVar21 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
            if (pDVar16 == (Delegate *)0x0) {
              (pMVar1->fields).OnDamageTaken =
                   (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
            }
            else {
              pAVar19 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                        FUN_?(pDVar16,
                                      TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                     );
              if (pAVar19 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                FUN_?(pDVar16,pAVar21);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pMVar1->fields).OnDamageTaken = pAVar19;
              pAVar21 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
              lVar18 = FUN_?();
              if (lVar18 == 0) {
                FUN_?(pDVar16,pAVar21);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&(pMVar1->fields).OnDamageTaken >> 0xc);
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pDVar20 = (this->fields).damageIndicator;
            if (pDVar20 != (DamageIndicator *)0x0) {
              DamageIndicator::DamageIndicator_ResetIndicators(pDVar20,(MethodInfo *)0x0);
              pMVar22 = (this->fields).modifierIndicator;
              if (pMVar22 != (ModifierIndicator *)0x0) {
                uVar10 = 0;
                do {
                  pMVar23 = (pMVar22->fields).modifierIndicators;
                  if (pMVar23 == (ModifierIndicator_OverlayWrapper__Array *)0x0)
                  goto code_?;
                  if ((uint)pMVar23->max_length <= (uint)uVar10) {
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((pMVar23->vector[uVar10] == (ModifierIndicator_OverlayWrapper *)0x0) ||
                     (this_01 = (pMVar23->vector[uVar10]->fields).image.image,
                     this_01 == (Image *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this_01,0,(MethodInfo *)0x0);
                  bVar24 = (char)uVar10 + 1;
                  uVar10 = (ulonglong)bVar24;
                } while (bVar24 < 3);
                pMVar22 = (this->fields).modifierIndicator;
                if (pMVar22 != (ModifierIndicator *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pMVar22,0,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).localAvatar;
                  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                      (pAVar25 = (pMVar1->fields)._.avatar, pAVar25 != (Avatar *)0x0)) &&
                     (pAVar26 = (pAVar25->fields).avatarFader, pAVar26 != (AvatarFader *)0x0)) {
                    AvatarFader::AvatarFader_SetTransparency(pAVar26,0.0,(MethodInfo *)0x0);
                    pMVar1 = (this->fields).localAvatar;
                    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                        (pAVar25 = (pMVar1->fields)._.avatar, pAVar25 != (Avatar *)0x0)) &&
                       (pAVar26 = (pAVar25->fields).avatarFader, pAVar26 != (AvatarFader *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pAVar26,1,(MethodInfo *)0x0);
                      pMVar27 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                          ((MethodInfo *)0x0);
                      if (pMVar27 != (MainCameraManager *)0x0) {
                        pMVar28 = (pMVar27->fields).cameraController;
                        this_02 = (pMVar27->fields).transitionCamera;
                        if (((pMVar28 != (MVCameraController *)0x0) &&
                            (this_03 = (pMVar28->fields).cameraStack,
                            this_03 != (MVCameraController_CameraStack *)0x0)) &&
                           ((this_05 = MVCameraController+CameraStack::
                                       MVCameraController_CameraStack_get_CurCamera
                                                 (this_03,(MethodInfo *)0x0),
                            this_05 != (MVCameraBase *)0x0 &&
                            (targetCameraTransform =
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)this_05,(MethodInfo *)0x0),
                            this_02 != (TransitionCamera *)0x0)))) {
                          TransitionCamera::TransitionCamera_InitTransition
                                    (this_02,targetCameraTransform,_UNK_?,0,
                                     (MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Enter
               (FirstPersonCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  FirstPersonCamera_Initialize_1(this,(MethodInfo *)0x0);
  FirstPersonCamera_ActivateFirstPerson(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).UpdateCamera.methodPtr)
              (this,cameraController,(pMVar1->fields).protectedTransform,
               (this->klass->vtable).UpdateCamera.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideBlinking(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBlinking
               (FirstPersonCamera *this,bool shouldHideBlinking,MethodInfo *method)

{
  pMVar1 = (this->fields).localAvatar;
  if ((((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
      (pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0)) &&
     (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 != (AvatarBlinker *)0x0)) {
    (pAVar4->fields)._.visible = shouldHideBlinking ^ 1;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HideBody(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBody
               (FirstPersonCamera *this,bool shouldHideBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Renderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if ((((pMVar1 != (MVAvatarLocal *)0x0) &&
       (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
      (pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0)) &&
     ((pBVar4 = (pMVar3->fields).bodyData, pBVar4 != (BodyData *)0x0 &&
      (pTVar5 = (pBVar4->fields).PartBones, pTVar5 != (Transform__Array *)0x0)))) {
    if ((uint)pTVar5->max_length < 2) goto code_?;
    if (pTVar5->vector[1] != (Transform *)0x0) {
      pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)pTVar5->vector[1],
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      sVar7 = 0;
      if (shouldHideBody == 0) {
        if (pOVar6 != (Object__Array *)0x0) {
          while( true ) {
            if ((int)pOVar6->max_length <= (int)sVar7) {
              return;
            }
            if ((uint)pOVar6->max_length <= (uint)(int)sVar7) break;
            pOVar8 = pOVar6->vector[sVar7];
            if (pOVar8 == (Object *)0x0) goto code_?;
            bVar9 = (TypeInfo__UnityEngine__Renderer->_1).naturalAligment;
            if (((pOVar8->klass->_1).naturalAligment < bVar9) ||
               ((pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) {
              FUN_?(pOVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar11 = pOVar8[1].klass;
            if (pOVar11 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pOVar11,1);
            sVar7 = sVar7 + 1;
          }
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else if (pOVar6 != (Object__Array *)0x0) {
        while( true ) {
          if ((int)pOVar6->max_length <= (int)sVar7) {
            return;
          }
          if ((uint)pOVar6->max_length <= (uint)(int)sVar7) break;
          pOVar8 = pOVar6->vector[sVar7];
          if (pOVar8 == (Object *)0x0) goto code_?;
          bVar9 = (TypeInfo__UnityEngine__Renderer->_1).naturalAligment;
          if (((pOVar8->klass->_1).naturalAligment < bVar9) ||
             ((pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) {
            FUN_?(pOVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar11 = pOVar8[1].klass;
          if (pOVar11 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pOVar11,3);
          sVar7 = sVar7 + 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void HideVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
  if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
    length = (pLVar1->fields)._size;
    uVar2 = 0;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar5 = (this->fields).localAvatar;
    if ((pMVar5 != (MVAvatarLocal *)0x0) && (pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar4,(pMVar5->fields)._._._._.id,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
         ((pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar4,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObjectClient *)0x0 &&
          (this_00 = (pMVar6->fields).gameObject, this_00 != (GameObject *)0x0)))) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_7
                  (this_00,0,
                   (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          lVar7 = 0x20;
          do {
            if ((pLVar1->fields)._size <= (int)uVar2) {
              return;
            }
            pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
            if (pLVar1 == (List_1_UnityEngine_MeshRenderer_ *)0x0) break;
            if ((uint)(pLVar1->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pMVar9 = (pLVar1->fields)._items;
            if (pMVar9 == (MeshRenderer__Array *)0x0) break;
            if ((uint)pMVar9->max_length <= uVar2) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            obj = *(Object **)((longlong)pMVar9->vector + lVar7 + -0x20);
            if (obj == (Object *)0x0) break;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar10 = obj[1].klass;
            if (pOVar10 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pOVar10);
            pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
            uVar2 = uVar2 + 1;
            lVar7 = lVar7 + 8;
          } while (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Initialize_1
               (FirstPersonCamera *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_3.x = 0.0;
    QStack_3.y = 0.0;
    QStack_3.z = 0.0;
    QStack_3.w = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&QStack_3);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_8,&QStack_3,in_R8);
    (this->fields).targetRotation.x = pVVar7->x;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      QStack_3.w = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&QStack_3);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                         (&VStack_8,&QStack_3,in_R8);
      (this->fields).targetRotation.y = pVVar7->y;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_3.x = 0.0;
        QStack_3.y = 0.0;
        QStack_3.z = 0.0;
        QStack_3.w = 0.0;
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4);
        if (pTVar2 != (Transform *)0x0) {
          VStack_8.x = QStack_3.x;
          VStack_8.y = QStack_3.y;
          VStack_8.z = QStack_3.z;
          fStack_9 = QStack_3.w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4,&VStack_8);
          this_00 = (this->fields).modifierIndicator;
          if ((this_00 != (ModifierIndicator *)0x0) &&
             (pMVar10 = (this->fields).localAvatar, pMVar10 != (MVAvatarLocal *)0x0)) {
            bVar11 = iRam_? != 0;
            (this_00->fields).localInteractable =
                 (MVInteractableBase *)(pMVar10->fields).interactableLocal;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)&(this_00->fields).localInteractable >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_00,1,(MethodInfo *)0x0);
            pMVar10 = (this->fields).localAvatar;
            if (pMVar10 != (MVAvatarLocal *)0x0) {
              if ((pMVar10->fields)._.isHidden == 0) {
                pAVar16 = (pMVar10->fields)._.avatar;
                if ((pAVar16 == (Avatar *)0x0) ||
                   (this_01 = (pAVar16->fields).avatarFader, this_01 == (AvatarFader *)0x0))
                goto code_?;
                AvatarFader::AvatarFader_SetTransparency(this_01,_UNK_?,(MethodInfo *)0x0);
              }
              (this->fields).haveHiddenVehicle = 0;
              return;
            }
          }
        }
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void MoveItemToFirstpersonView(PickupItem) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_MoveItemToFirstpersonView
               (FirstPersonCamera *this,PickupItem *item,MethodInfo *method)

{
  if (item != (PickupItem *)0x0) {
    cVar1 = (*(item->klass->vtable).get_FirstPerson.methodPtr)
                      (item,(item->klass->vtable).get_FirstPerson.method);
    if (cVar1 == '\0') {
      return;
    }
    PickupItem::PickupItem_EnterFirstPersonView(item,(MVCameraBase *)this,(MethodInfo *)0x0);
    pMVar2 = (this->fields).localAvatar;
    this_00 = (this->fields).weaponBob;
    if ((((pMVar2 != (MVAvatarLocal *)0x0) &&
         (pAVar3 = (pMVar2->fields)._.avatarPickupOwner, pAVar3 != (AvatarPickupOwner *)0x0)) &&
        (this_01 = (pAVar3->fields)._.currentItem, this_01 != (PickupItem *)0x0)) &&
       (weapon = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0),
       this_00 != (FirstPersonWeaponBob *)0x0)) {
      FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize(this_00,weapon,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_OnDestroy
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).damageIndicator;
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
  if (pDVar1 != (DamageIndicator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pDVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pDVar1 = (this->fields).damageIndicator;
      if (pDVar1 == (DamageIndicator *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pDVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pHVar3 = (this->fields).healingIndicator;
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
  if (pHVar3 != (HealingIndicator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pHVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pHVar3 = (this->fields).healingIndicator;
      if (pHVar3 == (HealingIndicator *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pHVar3,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pMVar4 = (this->fields).modifierIndicator;
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
  if (pMVar4 != (ModifierIndicator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar4 = (this->fields).modifierIndicator;
      if (pMVar4 == (ModifierIndicator *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pMVar4,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Reset
               (FirstPersonCamera *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  (this->fields).cameraOffset.y = (this->fields).cameraHeight;
  fVar3 = (this->fields).maxLookAngleDownward;
  fVar4 = fVar2;
  if ((fVar2 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
    fVar4 = fVar1;
  }
  fVar3 = (this->fields).maxLookAngleUpward;
  (this->fields).maxLookAngleDownward = fVar4;
  if (fVar3 < fVar2) {
    (this->fields).maxLookAngleUpward = fVar2;
    return;
  }
  if (fVar3 <= fVar1) {
    (this->fields).maxLookAngleUpward = fVar3;
    return;
  }
  (this->fields).maxLookAngleUpward = fVar1;
  return;
}


/* Void Resume(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Resume
               (FirstPersonCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    cVar4 = (*(pPVar3->klass->vtable).get_FirstPerson.methodPtr)();
    if (cVar4 == '\0') {
      pMVar1 = (this->fields).localAvatar;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        pAVar5 = (pMVar1->fields)._.avatar;
        if (pAVar5 != (Avatar *)0x0) {
          bVar6 = (TypeInfo__AvatarLocal->_1).naturalAligment;
          if (((pAVar5->klass->_1).naturalAligment < bVar6) ||
             ((pAVar5->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLocal)) {
            FUN_?(pAVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pAVar8 = pAVar5[1].klass;
          uVar9 = (*(this->klass->vtable).get_CameraType.methodPtr)
                             (this,(this->klass->vtable).get_CameraType.method);
          if (pAVar8 != (Avatar__Class *)0x0) {
            uVar10 = 0;
            pIVar11 = (pAVar8->_0).image;
            uVar12 = *(ushort *)((longlong)&pIVar11[4].nameNoExt + 6);
            if (uVar12 != 0) {
              do {
                if (*(IAvatarCameraController__Class **)
                     (*(longlong *)&pIVar11[2].customAttributeCount + (ulonglong)uVar10 * 0x10) ==
                    TypeInfo__IAvatarCameraController) {
                  puVar13 = &pIVar11[4].typeCount +
                            (longlong)
                            (*(int *)(*(longlong *)&pIVar11[2].customAttributeCount + 8 +
                                     (ulonglong)uVar10 * 0x10) + 6) * 4;
                  goto code_?;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar12);
            }
            puVar13 = (uint32_t *)FUN_?(pAVar8);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)puVar13)(pAVar8,uVar9,*(undefined8 *)(puVar13 + 2),*(code **)puVar13);
            return;
          }
        }
      }
    }
    else {
      FirstPersonCamera_Initialize_1(this,(MethodInfo *)0x0);
      FirstPersonCamera_ActivateFirstPerson(this,(MethodInfo *)0x0);
      pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar14 != (MainCameraManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(this->klass->vtable).UpdateCamera.methodPtr)
                  (this,cameraController,(pMVar14->fields).protectedTransform,
                   (this->klass->vtable).UpdateCamera.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ShowVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
  if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
    length = (pLVar1->fields)._size;
    uVar2 = 0;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar5 = (this->fields).localAvatar;
    if ((pMVar5 != (MVAvatarLocal *)0x0) && (pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar4,(pMVar5->fields)._._._._.id,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
         ((pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar4,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObjectClient *)0x0 &&
          (this_00 = (pMVar6->fields).gameObject, this_00 != (GameObject *)0x0)))) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_7
                  (this_00,0,
                   (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          lVar7 = 0x20;
          do {
            if ((pLVar1->fields)._size <= (int)uVar2) {
              return;
            }
            pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
            if (pLVar1 == (List_1_UnityEngine_MeshRenderer_ *)0x0) break;
            if ((uint)(pLVar1->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pMVar9 = (pLVar1->fields)._items;
            if (pMVar9 == (MeshRenderer__Array *)0x0) break;
            if ((uint)pMVar9->max_length <= uVar2) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            obj = *(Object **)((longlong)pMVar9->vector + lVar7 + -0x20);
            if (obj == (Object *)0x0) break;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar10 = obj[1].klass;
            if (pOVar10 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pOVar10);
            pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
            uVar2 = uVar2 + 1;
            lVar7 = lVar7 + 8;
          } while (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Suspend(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Suspend
               (FirstPersonCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (this_00 = (pAVar2->fields)._.currentItem, this_00 != (PickupItem *)0x0)) {
    if ((this_00->fields)._IsHolstered_k__BackingField == 0) {
      PickupItem::PickupItem_RevertToOriginalTransform(this_00,(MethodInfo *)0x0);
    }
    FirstPersonCamera_HideBody(this,0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).localAvatar;
    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
        (pMVar3 = (pMVar1->fields)._.body, pMVar3 != (MVBody *)0x0)) &&
       ((pMVar4 = (pMVar3->fields).bodyObject, pMVar4 != (MVBodyObject *)0x0 &&
        (pAVar5 = (pMVar4->fields).avatarBlinker, pAVar5 != (AvatarBlinker *)0x0)))) {
      (pAVar5->fields)._.visible = 1;
      if ((this->fields).haveHiddenVehicle != 0) {
        FirstPersonCamera_ShowVehicle(this,(MethodInfo *)0x0);
      }
      pMVar1 = (this->fields).localAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pAVar2 = (pMVar1->fields).pickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) {
        pMVar6 = (pAVar2->fields)._.onEquipItem;
        this_04 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_04,(Object *)this,
                   MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
                   (MethodInfo *)0x0);
        pMVar6 = (MVPickupOwner_OnEquipItemDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pMVar6,(Delegate *)this_04,(MethodInfo *)0x0);
        if (pMVar6 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          (pAVar2->fields)._.onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
        }
        else {
          pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pAVar2->fields)._.onEquipItem = pMVar7;
          pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&(pAVar2->fields)._.onEquipItem >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        pMVar1 = (this->fields).localAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pAVar14 = (pMVar1->fields).OnHealing;
          pHVar15 = (this->fields).healingIndicator;
          pDVar16 = (Delegate *)FUN_?(TypeInfo__System__Action<float,_MVPlayer>);
          FUN_?(pDVar16,pHVar15);
          pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pAVar14,pDVar16,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<float,_MVPlayer>;
          if (pDVar16 == (Delegate *)0x0) {
            (pMVar1->fields).OnHealing = (Action_2_Single_MVPlayer_ *)0x0;
          }
          else {
            pAVar14 = (Action_2_Single_MVPlayer_ *)
                      FUN_?(pDVar16,TypeInfo__System__Action<float,_MVPlayer>);
            if (pAVar14 == (Action_2_Single_MVPlayer_ *)0x0) {
              FUN_?(pDVar16,pAVar17);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pMVar1->fields).OnHealing = pAVar14;
            pAVar17 = TypeInfo__System__Action<float,_MVPlayer>;
            lVar18 = FUN_?(pDVar16,TypeInfo__System__Action<float,_MVPlayer>);
            if (lVar18 == 0) {
              FUN_?(pDVar16,pAVar17);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&(pMVar1->fields).OnHealing >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          pMVar1 = (this->fields).localAvatar;
          if (pMVar1 != (MVAvatarLocal *)0x0) {
            pAVar19 = (pMVar1->fields).OnDamageTaken;
            pDVar20 = (this->fields).damageIndicator;
            pDVar16 = (Delegate *)
                      FUN_?(
                                   TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                   );
            FUN_?(pDVar16,pDVar20);
            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar19,pDVar16,(MethodInfo *)0x0);
            pAVar21 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
            if (pDVar16 == (Delegate *)0x0) {
              (pMVar1->fields).OnDamageTaken =
                   (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
            }
            else {
              pAVar19 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                        FUN_?(pDVar16,
                                      TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                                     );
              if (pAVar19 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                FUN_?(pDVar16,pAVar21);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (pMVar1->fields).OnDamageTaken = pAVar19;
              pAVar21 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
              lVar18 = FUN_?();
              if (lVar18 == 0) {
                FUN_?(pDVar16,pAVar21);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar9 = (uint)((ulonglong)&(pMVar1->fields).OnDamageTaken >> 0xc);
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar13 = uVar11 == *puVar12;
                if (bVar13) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pDVar20 = (this->fields).damageIndicator;
            if (pDVar20 != (DamageIndicator *)0x0) {
              DamageIndicator::DamageIndicator_ResetIndicators(pDVar20,(MethodInfo *)0x0);
              pMVar22 = (this->fields).modifierIndicator;
              if (pMVar22 != (ModifierIndicator *)0x0) {
                uVar10 = 0;
                do {
                  pMVar23 = (pMVar22->fields).modifierIndicators;
                  if (pMVar23 == (ModifierIndicator_OverlayWrapper__Array *)0x0)
                  goto code_?;
                  if ((uint)pMVar23->max_length <= (uint)uVar10) {
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if ((pMVar23->vector[uVar10] == (ModifierIndicator_OverlayWrapper *)0x0) ||
                     (this_01 = (pMVar23->vector[uVar10]->fields).image.image,
                     this_01 == (Image *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this_01,0,(MethodInfo *)0x0);
                  bVar24 = (char)uVar10 + 1;
                  uVar10 = (ulonglong)bVar24;
                } while (bVar24 < 3);
                pMVar22 = (this->fields).modifierIndicator;
                if (pMVar22 != (ModifierIndicator *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pMVar22,0,(MethodInfo *)0x0);
                  pMVar1 = (this->fields).localAvatar;
                  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                      (pAVar25 = (pMVar1->fields)._.avatar, pAVar25 != (Avatar *)0x0)) &&
                     (pAVar26 = (pAVar25->fields).avatarFader, pAVar26 != (AvatarFader *)0x0)) {
                    AvatarFader::AvatarFader_SetTransparency(pAVar26,0.0,(MethodInfo *)0x0);
                    pMVar1 = (this->fields).localAvatar;
                    if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                        (pAVar25 = (pMVar1->fields)._.avatar, pAVar25 != (Avatar *)0x0)) &&
                       (pAVar26 = (pAVar25->fields).avatarFader, pAVar26 != (AvatarFader *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pAVar26,1,(MethodInfo *)0x0);
                      pMVar27 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                          ((MethodInfo *)0x0);
                      if (pMVar27 != (MainCameraManager *)0x0) {
                        pMVar28 = (pMVar27->fields).cameraController;
                        this_02 = (pMVar27->fields).transitionCamera;
                        if (((pMVar28 != (MVCameraController *)0x0) &&
                            (this_03 = (pMVar28->fields).cameraStack,
                            this_03 != (MVCameraController_CameraStack *)0x0)) &&
                           ((this_05 = MVCameraController+CameraStack::
                                       MVCameraController_CameraStack_get_CurCamera
                                                 (this_03,(MethodInfo *)0x0),
                            this_05 != (MVCameraBase *)0x0 &&
                            (targetCameraTransform =
                                  UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)this_05,(MethodInfo *)0x0),
                            this_02 != (TransitionCamera *)0x0)))) {
                          TransitionCamera::TransitionCamera_InitTransition
                                    (this_02,targetCameraTransform,_UNK_?,0,
                                     (MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateAvatar() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateAvatar
               (FirstPersonCamera *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(pMVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((this->fields).haveHiddenVehicle != 0) {
        return;
      }
      FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
      (this->fields).haveHiddenVehicle = 1;
      return;
    }
    pMVar1 = (this->fields).localAvatar;
    (this->fields).haveHiddenVehicle = 0;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      obj = (pMVar1->fields)._._._.transform;
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (obj_00 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_3.x = 0.0;
        QStack_3.y = 0.0;
        QStack_3.z = 0.0;
        QStack_3.w = 0.0;
        pvVar4 = (obj_00->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,&QStack_3);
        aQStack_7[0].x = QStack_3.x;
        aQStack_7[0].y = QStack_3.y;
        aQStack_7[0].z = QStack_3.z;
        aQStack_7[0].w = QStack_3.w;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           ((Vector3 *)&QStack_3,aQStack_7,in_R8);
        lStack_9 = (ulonglong)(uint)(pVVar8->y * _UNK_?) << 0x20;
        uStack_10 = 0;
        aQStack_7[0].x = 0.0;
        aQStack_7[0].y = 0.0;
        aQStack_7[0].z = 0.0;
        aQStack_7[0].w = 0.0;
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(&lStack_9);
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        QStack_3.x = aQStack_7[0].x;
        QStack_3.y = aQStack_7[0].y;
        QStack_3.z = aQStack_7[0].z;
        QStack_3.w = aQStack_7[0].w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (obj->fields)._._.m_CachedPtr;
        if (pvVar4 != (void *)0x0) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4,&QStack_3);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateCamera
               (FirstPersonCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pAVar2 = (pMVar1->fields)._.avatarPickupOwner, pAVar2 != (AvatarPickupOwner *)0x0)) &&
     (pPVar3 = (pAVar2->fields)._.currentItem, pPVar3 != (PickupItem *)0x0)) {
    cVar4 = (*(pPVar3->klass->vtable).get_FirstPerson.methodPtr)(pPVar3);
    if ((cVar4 != '\0') && ((pPVar3->fields)._IsHolstered_k__BackingField == 0)) {
      FirstPersonCamera_UpdateAvatar(this,(MethodInfo *)0x0);
      FirstPersonCamera_UpdateCameraPosition(this,(MethodInfo *)0x0);
      (*(this->klass->vtable).__unknown.methodPtr)(this);
      this_00 = (this->fields).weaponBob;
      if (this_00 == (FirstPersonWeaponBob *)0x0) goto code_?;
      FirstPersonWeaponBob::FirstPersonWeaponBob_Update(this_00,(MethodInfo *)0x0);
      MVCameraBase::MVCameraBase_UpdateCamera
                ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateCameraPosition
               (FirstPersonCamera *this,MethodInfo *method)

{
  obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 == (MVAvatarLocal *)0x0) ||
      (pMVar2 = (pMVar1->fields)._.body, pMVar2 == (MVBody *)0x0)) ||
     (obj = (pMVar2->fields)._._._.transform, obj == (Transform *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar4);
  uStack_6._0_4_ = (this->fields).cameraOffset.x;
  uStack_6._4_4_ = (this->fields).cameraOffset.y;
  fStack_7 = (this->fields).cameraOffset.z + 0.0;
  if (obj_00 == (Transform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_6 = CONCAT44((float)uStack_6._4_4_ + 0.0,(float)(undefined4)uStack_6 + 0.0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj_00->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar4,&uStack_6);
  return;
}


/* FirstPersonCamera() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera__ctor
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)(uint)TypeRef__System__Activator__T;
  (this->fields).cameraOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).cameraOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).cameraOffset.z = 0.0;
  (this->fields).cameraHeight = 2.0;
  (this->fields).maxLookAngleDownward = 60.0;
  (this->fields).maxLookAngleUpward = 60.0;
  (this->fields).pitchSensitivity = 0.5;
  (this->fields).yawSensitivity = 0.5;
  pLVar2 = (List_1_UnityEngine_MeshRenderer_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
  pvVar3 = MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_->
           klass->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pMVar4 = (MeshRenderer__Array *)FUN_?(pvVar3,0x20);
  (pLVar2->fields)._items = pMVar4;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLVar2->fields >> 0xc);
    uVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar1 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields).vehiclesHiddenMeshRenderers = pLVar2;
  if (iVar9 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).vehiclesHiddenMeshRenderers >> 0xc);
    uVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar1 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  bVar8 = cRam_? == '\0';
  (this->fields)._.cameraRadius = 0.3;
  if (bVar8) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_get_FieldOfView
                (FirstPersonCamera *this,MethodInfo *method)

{
  return _UNK_?;
}

