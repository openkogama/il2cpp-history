
/* Void ActivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ActivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    pPVar2 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItem *)0x0) {
      bVar3 = PickupItem::PickupItem_get_FirstPersonCapable(pPVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
code_?:
        FirstPersonCamera_HideBody(this_02,1,(MethodInfo *)0x0);
        pMVar1 = (this_02->fields).localAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          this_03 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0);
          if (this_03 != (MVBody *)0x0) {
            MVBody::MVBody_ToggleBlinking(this_03,0,(MethodInfo *)0x0);
            if ((this_02->fields).haveHiddenVehicle != 0) {
              FirstPersonCamera_HideVehicle(this_02,(MethodInfo *)0x0);
            }
            pMVar1 = (this_02->fields).localAvatar;
            if (pMVar1 != (MVAvatarLocal *)0x0) {
              pAVar4 = MVAvatarLocal::MVAvatarLocal_get_PickupOwner(pMVar1,(MethodInfo *)0x0);
              if (pAVar4 != (AvatarPickupOwner *)0x0) {
                pMVar5 = (pAVar4->fields)._.onEquipItem;
                pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar6,(Object *)this_02,
                           MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
                           (MethodInfo *)0x0);
                pMVar7 = (MVPickupOwner_OnEquipItemDelegate *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pMVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
                pMVar5 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
                if (pMVar7 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                  if (pMVar7->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
                    pMVar5 = pMVar7;
                  }
                  if (pMVar5 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
                }
                (pAVar4->fields)._.onEquipItem = pMVar5;
                pMVar1 = (this_02->fields).localAvatar;
                if (pMVar1 != (MVAvatarLocal *)0x0) {
                  pAVar8 = (pMVar1->fields).OnDamageTaken;
                  object = (this->fields).healingIndicator;
                  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar6,(Object *)object,
                             MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
                             ,
                             MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
                            );
                  pAVar9 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
                           mscorlib.dll::System::Delegate::Delegate_Combine
                                     ((Delegate *)pAVar8,(Delegate *)pUVar6,(MethodInfo *)0x0);
                  pAVar8 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
                  if (pAVar9 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
                    if (pAVar9->klass ==
                        TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>) {
                      pAVar8 = pAVar9;
                    }
                    if (pAVar8 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0)
                    goto code_?;
                  }
                  (pMVar1->fields).OnDamageTaken = pAVar8;
                  pMVar1 = (this->fields).localAvatar;
                  if (pMVar1 != (MVAvatarLocal *)0x0) {
                    pAVar8 = (pMVar1->fields).OnDamageTaken;
                    pDVar10 = (this->fields).damageIndicator;
                    pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar6,(Object *)pDVar10,
                               MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                               ,
                               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
                              );
                    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar8,(Delegate *)pUVar6,(MethodInfo *)0x0);
                    pDVar12 = (Delegate *)0x0;
                    if (pDVar11 != (Delegate *)0x0) {
                      if ((Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType___Class *)
                          pDVar11->klass ==
                          TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>)
                      {
                        pDVar12 = pDVar11;
                      }
                      if (pDVar12 == (Delegate *)0x0) goto code_?;
                    }
                    pAVar8[7].fields._._.method_info = (MethodInfo_1 *)pDVar12;
                    pDVar10 = (this->fields).damageIndicator;
                    if (pDVar10 != (DamageIndicator *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pDVar10,1,(MethodInfo *)0x0);
                      this_01 = (this->fields).modifierIndicator;
                      if (this_01 != (ModifierIndicator *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)this_01,1,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                          func_?();
                        }
                        this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                            ((MethodInfo *)0x0);
                        if (this_04 != (MainCameraManager *)0x0) {
                          MainCameraManager::MainCameraManager_StartTransitionCam
                                    (this_04,0.3,0,(MethodInfo *)0x0);
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
      else {
        PickupItem::PickupItem_EnterFirstPersonView(pPVar2,(MVCameraBase *)this,(MethodInfo *)0x0);
        pMVar1 = (this->fields).localAvatar;
        this_00 = (this->fields).weaponBob;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pPVar2 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItem *)0x0) {
            this = (FirstPersonCamera *)&UNK_?;
            weapon = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pPVar2,(MethodInfo *)0x0);
            if (this_00 != (FirstPersonWeaponBob *)0x0) {
              FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize
                        (this_00,weapon,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void DeactivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_DeactivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  object_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_01 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0),
     this_01 == (PickupItem *)0x0)) goto code_?;
  PickupItem::PickupItem_LeaveFirstPersonView(this_01,(MethodInfo *)0x0);
  FirstPersonCamera_HideBody(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).localAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_02 = MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
     this_02 == (MVBody *)0x0)) goto code_?;
  MVBody::MVBody_ToggleBlinking(this_02,1,(MethodInfo *)0x0);
  if ((this->fields).haveHiddenVehicle != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).vehiclesHiddenMeshRenderers;
    if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__)
      ;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar1 = (this->fields).localAvatar;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
         pMVar2 != (MVWorldObjectClientManager *)0x0)) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                       (pMVar2,(int32_t)woID,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
           ((this_03 = (DayNightCycle *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar2,id,(MethodInfo *)0x0), this_03 != (DayNightCycle *)0x0 &&
            (this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_03,(MethodInfo *)0x0),
            this_04 != (CelestialParam *)0x0)))) {
          this_02 = (MVBody *)(this->fields).vehiclesHiddenMeshRenderers;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_22
                    ((GameObject *)this_04,0,(List_1_UnityEngine_MeshRenderer_ *)this_02,
                     void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                    );
          iVar3 = 0;
          pLVar4 = (this->fields).vehiclesHiddenMeshRenderers;
          while (pLVar4 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
            pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                               );
            if ((int)pOVar5 <= iVar3) goto code_?;
            pLVar4 = (this->fields).vehiclesHiddenMeshRenderers;
            if ((pLVar4 == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
               (this_02 = (MVBody *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,
                                     iVar3,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                    ), this_02 == (MVBody *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                      ((Renderer *)this_02,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
            iVar3 = iVar3 + 1;
            pLVar4 = (this->fields).vehiclesHiddenMeshRenderers;
          }
        }
      }
    }
    goto code_?;
  }
code_?:
  this = (FirstPersonCamera *)this_02;
  pMVar1 = (object_00->fields).localAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (pAVar6 = MVAvatarLocal::MVAvatarLocal_get_PickupOwner(pMVar1,(MethodInfo *)0x0),
     pAVar6 == (AvatarPickupOwner *)0x0)) goto code_?;
  source = (pAVar6->fields)._.onEquipItem;
  pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar7,(Object *)object_00,
             MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,(MethodInfo *)0x0)
  ;
  iVar3 = 0;
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)source,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pDVar9 = (Delegate *)0x0;
  if (pDVar8 == (Delegate *)0x0) {
code_?:
    *(Delegate **)(iVar3 + 0x38) = pDVar9;
    pMVar1 = (object_00->fields).localAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar10 = (pMVar1->fields).OnDamageTaken;
    object = (this->fields).healingIndicator;
    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar7,(Object *)object,
               MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    iVar3 = 0;
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar10,(Delegate *)pUVar7,(MethodInfo *)0x0);
    pDVar9 = (Delegate *)0x0;
    if (pDVar8 != (Delegate *)0x0) {
      if ((Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType___Class *)pDVar8->klass ==
          TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>) {
        pDVar9 = pDVar8;
      }
      if (pDVar9 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)(iVar3 + 0x18c) = pDVar9;
    pMVar1 = (this->fields).localAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar10 = (pMVar1->fields).OnDamageTaken;
    pDVar11 = (this->fields).damageIndicator;
    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar7,(Object *)pDVar11,
               MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    pAVar12 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar10,(Delegate *)pUVar7,(MethodInfo *)0x0);
    pAVar10 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
    if (pAVar12 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
      if (pAVar12->klass ==
          TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>) {
        pAVar10 = pAVar12;
      }
      if (pAVar10 == (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0)
      goto code_?;
    }
    (pMVar1->fields).OnDamageTaken = pAVar10;
    pDVar11 = (this->fields).damageIndicator;
    if (pDVar11 != (DamageIndicator *)0x0) {
      DamageIndicator::DamageIndicator_ResetIndicators(pDVar11,(MethodInfo *)0x0);
      pDVar11 = (this->fields).damageIndicator;
      if (pDVar11 != (DamageIndicator *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar11,0,(MethodInfo *)0x0);
        pMVar13 = (this->fields).modifierIndicator;
        if (pMVar13 != (ModifierIndicator *)0x0) {
          ModifierIndicator::ModifierIndicator_ResetIndicators(pMVar13,(MethodInfo *)0x0);
          pMVar13 = (this->fields).modifierIndicator;
          if (pMVar13 != (ModifierIndicator *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pMVar13,0,(MethodInfo *)0x0);
            pMVar1 = (this->fields).localAvatar;
            if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                (pEVar14 = (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                           MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                                     ((MVCubeModelBase *)pMVar1,(MethodInfo *)0x0),
                pEVar14 != (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)0x0)) &&
               (this_05 = (AvatarFader *)
                          System.Core.dll::System::Linq::
                          Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                          Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                    (pEVar14,(MethodInfo *)0x0), this_05 != (AvatarFader *)0x0)) {
              AvatarFader::AvatarFader_SetTransparency(this_05,0.0,(MethodInfo *)0x0);
              pMVar1 = (this->fields).localAvatar;
              if (((pMVar1 != (MVAvatarLocal *)0x0) &&
                  (pEVar14 = (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)
                             MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                                       ((MVCubeModelBase *)pMVar1,(MethodInfo *)0x0),
                  pEVar14 != (Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)0x0))
                 && (this_06 = (Behaviour *)
                               System.Core.dll::System::Linq::
                               Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                               Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                                         (pEVar14,(MethodInfo *)0x0), this_06 != (Behaviour *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (this_06,1,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                this_07 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_07 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_StartTransitionCam
                            (this_07,0.25,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((MVPickupOwner_OnEquipItemDelegate__Class *)pDVar8->klass ==
        TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pDVar9 = pDVar8;
    }
    if (pDVar9 != (Delegate *)0x0) goto code_?;
code_?:
    func_?();
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Enter
               (FirstPersonCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)cameraController,(MethodInfo *)0x0);
  FirstPersonCamera_Initialize_1(this,(MethodInfo *)0x0);
  FirstPersonCamera_ActivateFirstPerson(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
            MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
              (this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).UpdateCamera.method)();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HideBlinking(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBlinking
               (FirstPersonCamera *this,bool shouldHideBlinking,MethodInfo *method)

{
  this_00 = (this->fields).localAvatar;
  if (this_00 != (MVAvatarLocal *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Body((MVAvatar *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVBody *)0x0) {
      if ((iRam_? != 0) && (*(int *)(iRam_? + 0x1c) != 0)) {
        *(undefined1 *)(*(int *)(iRam_? + 0x1c) + 0x14) = in_stack_2;
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideBody(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBody
               (FirstPersonCamera *this,bool shouldHideBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).localAvatar;
  if ((((this_00 == (MVAvatarLocal *)0x0) ||
       (this_01 = MVAvatar::MVAvatar_get_Body((MVAvatar *)this_00,(MethodInfo *)0x0),
       this_01 == (MVBody *)0x0)) ||
      (this_02 = MVBody::MVBody_get_BodyData(this_01,(MethodInfo *)0x0), this_02 == (BodyData *)0x0)
      ) || (this_03 = BodyData::BodyData_GetPartBone
                                (this_02,BodyData_PartIndex__Enum_Torso,(MethodInfo *)0x0),
           pMVar1 = 
           UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
           , this_03 == (Transform *)0x0)) goto code_?;
  pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this_03,
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
  sVar3 = 0;
  shouldHideBody = (bool)pMVar1;
  if (shouldHideBody == 0) {
    if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)sVar3) {
        return;
      }
      if (pUVar2->max_length <= (uint)(int)sVar3) break;
      pUVar4 = pUVar2->vector[sVar3];
      if (pUVar4 == (UseInteratorVisualization *)0x0) goto code_?;
      bVar5 = (TypeInfo__UnityEngine__Renderer->_1).naturalAligment;
      if (((pUVar4->klass->_1).naturalAligment < bVar5) ||
         ((pUVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pUVar7 = (UseInteratorVisualization *)0x0;
      if (bVar6) {
        pUVar7 = pUVar4;
      }
      if (pUVar7 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                ((Renderer *)pUVar7,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
      sVar3 = sVar3 + 1;
    }
  }
  else {
    if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pUVar2->max_length <= (int)sVar3) {
        return;
      }
      if (pUVar2->max_length <= (uint)(int)sVar3) break;
      pUVar4 = pUVar2->vector[sVar3];
      if (pUVar4 == (UseInteratorVisualization *)0x0) goto code_?;
      bVar5 = (TypeInfo__UnityEngine__Renderer->_1).naturalAligment;
      if (((pUVar4->klass->_1).naturalAligment < bVar5) ||
         ((pUVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pUVar7 = (UseInteratorVisualization *)0x0;
      if (bVar6) {
        pUVar7 = pUVar4;
      }
      if (pUVar7 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                ((Renderer *)pUVar7,ShadowCastingMode__Enum_ShadowsOnly,(MethodInfo *)0x0);
      sVar3 = sVar3 + 1;
    }
  }
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
code_?:
  func_?(pUVar4,TypeInfo__UnityEngine__Renderer);
  goto code_?;
}


/* Void HideVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).vehiclesHiddenMeshRenderers;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_01 = (this->fields).localAvatar;
    if ((this_01 != (MVAvatarLocal *)0x0) &&
       (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
       , pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar1,(int32_t)woID,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         ((this_02 = (DayNightCycle *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar1,id,(MethodInfo *)0x0), this_02 != (DayNightCycle *)0x0 &&
          (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0),
          this_03 != (CelestialParam *)0x0)))) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_22
                  ((GameObject *)this_03,0,(this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        index = 0;
        pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
        while (pLVar2 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                             );
          if ((int)pOVar3 <= index) {
            return;
          }
          pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
          if ((pLVar2 == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
             (this_04 = (Renderer *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                  ), this_04 == (Renderer *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    (this_04,ShadowCastingMode__Enum_ShadowsOnly,(MethodInfo *)0x0);
          index = index + 1;
          pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Initialize_1
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar5 != (MainCameraManager *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pMVar5,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&QStack_8,pTVar6,(MethodInfo *)0x0);
      fStack_1 = pQVar7->x;
      fStack_2 = pQVar7->y;
      fStack_3 = pQVar7->z;
      fStack_4 = pQVar7->w;
      puVar9 = (undefined8 *)func_?(&QStack_8.y,&fStack_1);
      uStack_10 = *puVar9;
      (this->fields).targetRotation.x = (float)uStack_10;
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar5 != (MainCameraManager *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar5,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                    (&QStack_8,pTVar6,(MethodInfo *)0x0);
          puVar9 = (undefined8 *)func_?(&QStack_8.y,&stack0xffffffc0);
          uVar11 = *puVar9;
          uStack_10._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
          (this->fields).targetRotation.y = uStack_10._4_4_;
          uStack_10 = uVar11;
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar5 != (MainCameraManager *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pMVar5,(MethodInfo *)0x0);
            if (this_02 != (Transform *)0x0) {
              pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localRotation(&QStack_8,this_02,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar6,*pQVar7,(MethodInfo *)0x0);
                this_00 = (this->fields).modifierIndicator;
                if (this_00 != (ModifierIndicator *)0x0) {
                  ModifierIndicator::ModifierIndicator_Initialize
                            (this_00,(this->fields).localAvatar,(MethodInfo *)0x0);
                  this_01 = (this->fields).localAvatar;
                  if (this_01 != (MVAvatarLocal *)0x0) {
                    MVAvatar::MVAvatar_set_SetTransparency
                              ((MVAvatar *)this_01,1.0,(MethodInfo *)0x0);
                    (this->fields).haveHiddenVehicle = 0;
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
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void MoveItemToFirstpersonView(PickupItem) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_MoveItemToFirstpersonView
               (FirstPersonCamera *this,PickupItem *item,MethodInfo *method)

{
  if (item != (PickupItem *)0x0) {
    bVar1 = PickupItem::PickupItem_get_FirstPersonCapable(item,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    PickupItem::PickupItem_EnterFirstPersonView(item,(MVCameraBase *)this,(MethodInfo *)0x0);
    this_00 = (this->fields).localAvatar;
    this_01 = (this->fields).weaponBob;
    if (((this_00 != (MVAvatarLocal *)0x0) &&
        (this_02 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)this_00,(MethodInfo *)0x0),
        this_02 != (PickupItem *)0x0)) &&
       (weapon = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_02,(MethodInfo *)0x0),
       this_01 != (FirstPersonWeaponBob *)0x0)) {
      FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize(this_01,weapon,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_OnDestroy
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).damageIndicator;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pDVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (this->fields).damageIndicator;
    if (pDVar1 == (DamageIndicator *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pDVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pHVar4 = (this->fields).healingIndicator;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pHVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pHVar4 = (this->fields).healingIndicator;
    if (pHVar4 == (HealingIndicator *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pHVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pMVar5 = (this->fields).modifierIndicator;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar5 = (this->fields).modifierIndicator;
    if (pMVar5 == (ModifierIndicator *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pMVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Reset
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).cameraOffset.y = (this->fields).cameraHeight;
  fVar1 = (this->fields).maxLookAngleDownward;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,0.1,89.0,(MethodInfo *)0x0);
  (this->fields).maxLookAngleDownward = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    ((this->fields).maxLookAngleUpward,0.1,89.0,(MethodInfo *)0x0);
  (this->fields).maxLookAngleUpward = fVar1;
  return;
}


/* Void Resume(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Resume
               (FirstPersonCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (PickupItem *)0x0) {
      bVar2 = PickupItem::PickupItem_get_FirstPersonCapable(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pMVar1 = (this->fields).localAvatar;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          pAVar3 = (AvatarUIHandlerRemote *)
                   MVCubeModelBase::MVCubeModelBase_get_ModelingConstraintBuilder
                             ((MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
          if (pAVar3 != (AvatarUIHandlerRemote *)0x0) {
            bVar4 = (TypeInfo__AvatarLocal->_1).naturalAligment;
            pFVar5 = (Func_1_IModelingConstraint___Class *)pAVar3->klass;
            if (((pFVar5->_1).naturalAligment < bVar4) ||
               (bVar6 = true,
               (pFVar5->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
              bVar6 = false;
            }
            pAVar7 = (AvatarUIHandlerRemote *)0x0;
            if (bVar6) {
              pAVar7 = pAVar3;
            }
            if (pAVar7 == (AvatarUIHandlerRemote *)0x0) goto code_?;
            if (((pFVar5->_1).naturalAligment < bVar4) ||
               ((pFVar5->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__AvatarLocal)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            pAVar7 = (AvatarUIHandlerRemote *)0x0;
            if (bVar6) {
              pAVar7 = pAVar3;
            }
            if (pAVar7 == (AvatarUIHandlerRemote *)0x0) goto code_?;
            pSVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                               (pAVar7,(MethodInfo *)0x0);
            uVar9 = (*(code *)(this->klass->vtable).get_CameraType.method)();
            if (pSVar8 != (ShieldBar *)0x0) {
              func_?(6,TypeInfo__IAvatarCameraController,pSVar8,uVar9);
              return;
            }
          }
        }
      }
      else {
        ScaleAnimationBase::ScaleAnimationBase_Play
                  ((ScaleAnimationBase *)this,(float)cameraController,(MethodInfo *)0x0);
        FirstPersonCamera_Initialize_1(this,(MethodInfo *)0x0);
        FirstPersonCamera_ActivateFirstPerson(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)
                  MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)0x0) {
          pOVar10 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                    TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                              (this_01,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).UpdateCamera.method)
                    (this,cameraController,pOVar10,(this->klass->vtable).Enter.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
code_?:
  func_?(pAVar3);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ShowVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ShowVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).vehiclesHiddenMeshRenderers;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    this_01 = (this->fields).localAvatar;
    if ((this_01 != (MVAvatarLocal *)0x0) &&
       (woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
       , pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar1,(int32_t)woID,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         ((this_02 = (DayNightCycle *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar1,id,(MethodInfo *)0x0), this_02 != (DayNightCycle *)0x0 &&
          (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0),
          this_03 != (CelestialParam *)0x0)))) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_22
                  ((GameObject *)this_03,0,(this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        index = 0;
        pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
        while (pLVar2 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                             );
          if ((int)pOVar3 <= index) {
            return;
          }
          pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
          if ((pLVar2 == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
             (this_04 = (Renderer *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                   index,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                  ), this_04 == (Renderer *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    (this_04,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
          index = index + 1;
          pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Suspend(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Suspend
               (FirstPersonCamera *this,MVCameraController *camController,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)camController,(MethodInfo *)0x0);
  FirstPersonCamera_DeactivateFirstPerson(this,(MethodInfo *)0x0);
  return;
}


/* Void UpdateAvatar() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateAvatar
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).localAvatar;
  if (this_00 != (MVAvatarLocal *)0x0) {
    bVar1 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).haveHiddenVehicle == 0) {
        FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
        (this->fields).haveHiddenVehicle = 1;
      }
      return;
    }
    this_01 = (PrefabPool *)(this->fields).localAvatar;
    (this->fields).haveHiddenVehicle = 0;
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0);
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_03 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                  (&QStack_2,this_03,(MethodInfo *)0x0);
        puVar3 = (undefined8 *)func_?();
        uStack_4 = *puVar3;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                           (&QStack_2,0.0,uStack_4._4_4_,0.0,(MethodInfo *)0x0);
        if (this_02 != (MVPointLightObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    ((Transform *)this_02,*pQVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateCamera
               (FirstPersonCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pMVar1 = (this->fields).localAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_01 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0),
     this_01 != (PickupItem *)0x0)) {
    bVar2 = PickupItem::PickupItem_get_IsInFirstPersonMode(this_01,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields).localAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(pMVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar3 = (PrefabPool *)(this->fields).localAvatar;
        (this->fields).haveHiddenVehicle = 0;
        if (pPVar3 == (PrefabPool *)0x0) goto code_?;
        pMVar4 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar3,(MethodInfo *)0x0);
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                  ((Quaternion *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
        puVar6 = (undefined8 *)func_?();
        uVar7._0_4_ = (float)((ulonglong)*puVar6 >> 0x20);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                           ((Quaternion *)&stack0xffffffe0,0.0,(float)uVar7,0.0,(MethodInfo *)0x0);
        if (pMVar4 == (MVPointLightObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  ((Transform *)pMVar4,*pQVar8,(MethodInfo *)0x0);
      }
      else if ((this->fields).haveHiddenVehicle == 0) {
        FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
        (this->fields).haveHiddenVehicle = 1;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pMVar1 = (this->fields).localAvatar;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pPVar3 = (PrefabPool *)MVAvatar::MVAvatar_get_Body((MVAvatar *)pMVar1,(MethodInfo *)0x0),
          pPVar3 != (PrefabPool *)0x0)) &&
         (pMVar4 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar3,(MethodInfo *)0x0),
         pMVar4 != (MVPointLightObject *)0x0)) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe4,(Transform *)pMVar4,(MethodInfo *)0x0);
        uVar7._0_4_ = (this->fields).cameraOffset.x;
        uVar7._4_4_ = (this->fields).cameraOffset.y;
        uVar10._0_4_ = pVVar9->x;
        uVar10._4_4_ = pVVar9->y;
        fVar11 = pVVar9->z;
        camController_00 = (MVCameraController *)(this->fields).cameraOffset.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar11;
        a.x = (float)(int)uVar10;
        a.y = (float)(int)((ulonglong)uVar10 >> 0x20);
        b.z = (float)camController_00;
        b.x = (float)(int)uVar7;
        b.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffe4,a,b,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar5,*pVVar9,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).__unknown.method)();
          this_00 = (this->fields).weaponBob;
          if (this_00 != (FirstPersonWeaponBob *)0x0) {
            FirstPersonWeaponBob::FirstPersonWeaponBob_Update(this_00,(MethodInfo *)0x0);
            ScaleAnimationBase::ScaleAnimationBase_Play
                      ((ScaleAnimationBase *)this,0.0,(MethodInfo *)0x0);
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this,camController_00,(ProtectedTransform *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateCameraPosition
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).localAvatar;
  if (this_00 != (MVAvatarLocal *)0x0) {
    this_02 = (PrefabPool *)MVAvatar::MVAvatar_get_Body((MVAvatar *)this_00,(MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      this_03 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
      if (this_03 != (MVPointLightObject *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,(Transform *)this_03,(MethodInfo *)0x0);
        uVar2._0_4_ = (this->fields).cameraOffset.x;
        uVar2._4_4_ = (this->fields).cameraOffset.y;
        fVar3 = (this->fields).cameraOffset.z;
        uVar4._0_4_ = pVVar1->x;
        uVar4._4_4_ = pVVar1->y;
        fVar5 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          puVar6 = &UNK_?;
          func_?();
          uVar4 = CONCAT44(puVar6,(undefined4)uVar4);
        }
        a.z = fVar5;
        a.x = (float)(int)uVar4;
        a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        b.z = fVar3;
        b.x = (float)(int)uVar2;
        b.y = (float)(int)((ulonglong)uVar2 >> 0x20);
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_01,*pVVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* FirstPersonCamera() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera__ctor
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).cameraHeight = 2.0;
  (this->fields).maxLookAngleDownward = 60.0;
  (this->fields).maxLookAngleUpward = 60.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x40000000,0,0);
  (this->fields).cameraOffset.x = (float)(undefined4)uStack_2;
  (this->fields).cameraOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraOffset.z = fStack_1;
  (this->fields).pitchSensitivity = 0.5;
  (this->fields).yawSensitivity = 0.5;
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,0x20,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_);
  (this->fields).vehiclesHiddenMeshRenderers = (List_1_UnityEngine_MeshRenderer_ *)this_00;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_get_FieldOfView
                (FirstPersonCamera *this,MethodInfo *method)

{
  return _UNK_?;
}

