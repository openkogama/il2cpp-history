
/* Void CalculateRemoteAvatarUIVisibility(Boolean, MVAvatarRemote) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_CalculateRemoteAvatarUIVisibility
               (PickupItemCostume *this,bool isInvisible,MVAvatarRemote *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_IsOnSameTeam_1
                        ((MVPlayer *)this_02,(MVWorldObjectClient *)avatar,(MethodInfo *)0x0);
      if ((avatar != (MVAvatarRemote *)0x0) &&
         (pAVar2 = (avatar->fields)._.avatar, pAVar2 != (Avatar *)0x0)) {
        this_00 = (AvatarUIHandlerRemote *)(pAVar2->fields).avatarUIHandler;
        if (this_00 != (AvatarUIHandlerRemote *)0x0) {
          bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
          if ((bVar3 <= (this_00->klass->_1).naturalAligment) &&
             ((this_00->klass->_1).typeHierarchy[bVar3 - 1] ==
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            value = 0;
            if (bVar1 == 0) {
              value = isInvisible;
            }
            bVar1 = 0x56;
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                      (this_00,value,(MethodInfo *)0x0);
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                      (this_00,bVar1,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_GetDefaultConfiguration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           func_?(TypeInfo__PickupItemCostume__CostumeConfiguration);
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pPVar2 = &pPVar1->fields;
  pPVar2->name = ::StringLiteral__;
  method_00 = (MethodInfo *)pPVar2;
  func_?(pPVar2,::StringLiteral__);
  (pPVar1->fields).cubeModelId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pPVar1,ExceptionArgument__Enum_obj,method_00);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
  }
  pSVar3 = (String *)
           Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                     (StringLiteral_Name,(MethodInfo *)0x0);
  if (pSVar3 == (String *)0x0) {
    pPVar2->name = (String *)0x0;
  }
  else {
    pSVar4 = (String *)0x0;
    if (pSVar3->klass == TypeInfo__System__String) {
      pSVar4 = pSVar3;
    }
    if (pSVar4 == (String *)0x0) goto code_?;
    pPVar2->name = pSVar4;
    pSVar4 = (String *)0x0;
    if (pSVar3->klass == TypeInfo__System__String) {
      pSVar4 = pSVar3;
    }
    if (pSVar4 == (String *)0x0) goto code_?;
  }
  func_?();
  pOVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                     (StringLiteral_Health,(MethodInfo *)0x0);
  if (pOVar5 != (Object *)0x0) {
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    puVar6 = (undefined4 *)func_?();
    pPVar1[1].klass = (PickupItemEditable_EditableItemConfiguration__Class *)*puVar6;
    pOVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                       (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      puVar6 = (undefined4 *)func_?();
      pPVar1[1].monitor = (MonitorData *)*puVar6;
      pOVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                         (StringLiteral_TrailLength,(MethodInfo *)0x0);
      if (pOVar5 != (Object *)0x0) {
        if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        puVar6 = (undefined4 *)func_?();
        pPVar1[1].fields.name = (String *)*puVar6;
        pOVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                           (StringLiteral_PlayerInvisible,(MethodInfo *)0x0);
        if (pOVar5 != (Object *)0x0) {
          if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          puVar7 = (undefined1 *)func_?();
          *(undefined1 *)&pPVar1[1].fields.cubeModelId = *puVar7;
          pOVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                             (StringLiteral_TrailEnabled,(MethodInfo *)0x0);
          if (pOVar5 != (Object *)0x0) {
            if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)
            {
              puVar7 = (undefined1 *)func_?();
              *(undefined1 *)((int)&pPVar1[1].fields.cubeModelId + 2) = *puVar7;
              pCVar8 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::
                        CostumeData_DefaultColor
                                  ((Color *)&stack0xffffffec,StringLiteral_TrailColor,
                                   (MethodInfo *)0x0);
              fVar9 = pCVar8->g;
              fVar10 = pCVar8->b;
              fVar11 = pCVar8->a;
              pPVar1[1].fields.maxAmmo = (int32_t)pCVar8->r;
              pPVar1[1].fields.damage = fVar9;
              pPVar1[1].fields.impulseStrength = fVar10;
              pPVar1[1].fields.recoilStrength = fVar11;
              return pPVar1;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar12)();
  return pPVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_Initialize
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnLocalPlayerTeamChanged;
      ppAVar4 = &(pMVar2->fields).OnLocalPlayerTeamChanged;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar3 == (Action *)0x0) {
        *ppAVar4 = (Action *)0x0;
      }
      else {
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
        *ppAVar4 = pAVar5;
        pAVar5 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar3;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      func_?();
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(&StringLiteral_Default);
        func_?(&StringLiteral_Player);
        cRam_? = '\x01';
      }
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      (in_stack_8->fields).hitLayerMask = 1 << ((byte)iVar6 & 0x1f) | 1 << (uVar7 & 0x1f);
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
        ppTVar9 = &(in_stack_8->fields)._._.firstPersonTransform;
        pTVar10 = *ppTVar9;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          this_01 = (GameObject *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                    (this_01,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_01,(MethodInfo *)0x0);
            p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)in_stack_8,(MethodInfo *)0x0);
            if (pTVar10 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (pTVar10,p,(MethodInfo *)0x0);
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar10 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar10,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_01,(MethodInfo *)0x0);
                *ppTVar9 = pTVar10;
                func_?();
                goto code_?;
              }
            }
          }
          func_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
code_?:
      pPVar13 = (PickupItemEditable_EditableItemConfiguration *)
                (*(code *)(in_stack_8->klass->vtable).__unknown_3.method)();
      (in_stack_8->fields)._Configuration_k__BackingField = pPVar13;
      func_?();
      PickupItemEditable::PickupItemEditable_SetValuesBasedOnConfiguration
                (in_stack_8,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_InterruptFire
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  this_06 = (MVAvatarLocal__Class *)0x0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    this_06 = (MVAvatarLocal__Class *)(pMVar1->fields)._.worldObjectParent;
    if (this_06 == (MVAvatarLocal__Class *)0x0) {
      return;
    }
    pMVar2 = (MVAvatarLocal__Class *)(this_06->_0).image;
    bVar3 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((pMVar2->_1).naturalAligment < bVar3) {
      return;
    }
    if ((MVAvatar__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatar) {
      return;
    }
    pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      if ((pPVar4->fields).isPlayerInvisible == 0) {
code_?:
        pMVar2 = (MVAvatarLocal__Class *)(this_06->_0).image;
        bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if ((pMVar2->_1).naturalAligment < bVar3) {
          return;
        }
        if ((MVAvatarLocal__Class *)(pMVar2->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVAvatarLocal
           ) {
          return;
        }
        pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          if ((int)(pPVar4->fields).health != 100) {
            MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                      ((MVAvatarLocal *)this_06,100,(MethodInfo *)0x0);
          }
          pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if ((float)(int)(pPVar4->fields).movementSpeed != _UNK_?) {
              this_00 = (AvatarMotor *)(this_06->vtable).IsSingletonObject.methodPtr;
              if (this_00 == (AvatarMotor *)0x0) goto code_?;
              AvatarMotor::AvatarMotor_set_WalkSpeedBase(this_00,8.0,(MethodInfo *)0x0);
            }
            pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              if ((pPVar4->fields).playersCanCollide == 0) {
                return;
              }
              this_01 = (this->fields)._.cubeModelObject;
              if (this_01 != (GameObject *)0x0) {
                pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponentsInChildren
                                   (this_01,
                                    UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                                   );
                this_06 = (MVAvatarLocal__Class *)0x0;
                if (pOVar5 != (Object__Array *)0x0) {
                  ppOVar6 = pOVar5->vector;
                  for (; (int)this_06 < (int)pOVar5->max_length;
                      this_06 = (MVAvatarLocal__Class *)((int)&(this_06->_0).image + 1)) {
                    if ((MVAvatarLocal__Class *)pOVar5->max_length <= this_06)
                    goto code_?;
                    if ((Collider *)*ppOVar6 == (Collider *)0x0) goto code_?;
                    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                              ((Collider *)*ppOVar6,0,(MethodInfo *)0x0);
                    ppOVar6 = ppOVar6 + 1;
                  }
                  this_06 = (MVAvatarLocal__Class *)(this->fields).costumeTriggerCollider;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)this_06,(Object_1 *)0x0,(MethodInfo *)0x0);
                  pMVar2 = TypeInfo__MVAvatarLocal;
                  if (bVar7 == 0) {
                    return;
                  }
                  pMVar1 = (this->fields)._._._.owner;
                  if ((pMVar1 != (MVPickupOwner *)0x0) &&
                     (this_05 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent,
                     this_06 = pMVar2, this_05 != (MVAvatarLocal *)0x0)) {
                    bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                    if (((this_05->klass->_1).naturalAligment < bVar3) ||
                       ((MVAvatarLocal__Class *)(this_05->klass->_1).typeHierarchy[bVar3 - 1] !=
                        TypeInfo__MVAvatarLocal)) goto code_?;
                    this_04 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                        (this_05,(MethodInfo *)0x0);
                    if (this_04 != (ColliderCollection *)0x0) {
                      Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                                (this_04,(Collider *)(this->fields).costumeTriggerCollider,
                                 (MethodInfo *)0x0);
                      this_02 = (this->fields).costumeTriggerCollider;
                      if (this_02 != (BoxCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                  ((Collider *)this_02,0,(MethodInfo *)0x0);
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
      else {
        if (cRam_? == '\0') {
          func_?(&
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
          func_?(&TypeInfo__MVAvatarRemote);
          func_?(&StringLiteral_Default);
          cRam_? = '\x01';
        }
        pMVar8 = (MVBody *)(this_06->vtable).OnInputStateChanged.methodPtr;
        if (pMVar8 != (MVBody *)0x0) {
          MVBody::MVBody_set_ForceHidden(pMVar8,0,(MethodInfo *)0x0);
          pMVar8 = (MVBody *)(this_06->vtable).OnInputStateChanged.methodPtr;
          if ((pMVar8 != (MVBody *)0x0) &&
             (this_03 = MVBody::MVBody_get_BlobShadow(pMVar8,(MethodInfo *)0x0),
             this_03 != (AvatarBlobShadowController *)0x0)) {
            AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
                      (this_03,0,(MethodInfo *)0x0);
            pMVar2 = (MVAvatarLocal__Class *)(this_06->_0).image;
            bVar3 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
            if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
               (ppIVar9 = (pMVar2->_1).typeHierarchy,
               (MVAvatarRemote__Class *)ppIVar9[bVar3 - 1] == TypeInfo__MVAvatarRemote)) {
              pMVar2 = (MVAvatarLocal__Class *)0x0;
              if ((MVAvatarRemote__Class *)ppIVar9[bVar3 - 1] == TypeInfo__MVAvatarRemote) {
                pMVar2 = this_06;
              }
              PickupItemCostume_CalculateRemoteAvatarUIVisibility
                        (this,0,(MVAvatarRemote *)pMVar2,(MethodInfo *)0x0);
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  this_05 = extraout_EDX;
code_?:
  func_?(this_05,this_06);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_IsSameItemData
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    a = (pPVar1->fields)._.name;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    b = (String *)
        Extensions::Extensions_GetValueOrDefault_3
                  (itemData,StringLiteral_Name,(Object *)StringLiteral_error,
                   System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                  );
    bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    CStack_3.a = (float)&UNK_?;
    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      fVar4 = (pPVar1->fields).health;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                        (itemData,StringLiteral_Health,-1.0,
                         float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                        );
      if (fVar4 != fVar5) {
        return 0;
      }
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar4 = (pPVar1->fields).movementSpeed;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                          (itemData,StringLiteral_MovementSpeed,-1.0,
                           float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                          );
        if (fVar4 != fVar5) {
          return 0;
        }
        pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          fVar4 = (pPVar1->fields).trailLength;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                            (itemData,StringLiteral_TrailLength,-1.0,
                             float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                            );
          if (fVar4 != fVar5) {
            return 0;
          }
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            bVar2 = (pPVar1->fields).isPlayerInvisible;
            pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              bVar6 = (pPVar1->fields).isPlayerInvisible;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              bVar6 = Extensions::Extensions_GetValueOrDefault
                                (itemData,StringLiteral_PlayerInvisible,bVar6 == 0,
                                 bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                );
              if (bVar2 != bVar6) {
                return 0;
              }
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                bVar2 = (pPVar1->fields).playersCanCollide;
                pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  bVar6 = (pPVar1->fields).playersCanCollide;
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  bVar6 = Extensions::Extensions_GetValueOrDefault
                                    (itemData,StringLiteral_PlayersCanCollide,bVar6 == 0,
                                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                    );
                  if (bVar2 != bVar6) {
                    return 0;
                  }
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    bVar2 = (pPVar1->fields).isTrailEnabled;
                    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      bVar6 = (pPVar1->fields).isTrailEnabled;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Extensions);
                      }
                      bVar6 = Extensions::Extensions_GetValueOrDefault
                                        (itemData,StringLiteral_TrailEnabled,bVar6 == 0,
                                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                        );
                      if (bVar2 != bVar6) {
                        return 0;
                      }
                      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        fVar4 = (pPVar1->fields).trailColor.r;
                        fVar5 = (pPVar1->fields).trailColor.g;
                        fVar7 = (pPVar1->fields).trailColor.b;
                        fVar8 = (pPVar1->fields).trailColor.a;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        defaultColor.g = (float)_UNK_?;
                        defaultColor.r = (float)_UNK_?;
                        defaultColor.b = (float)_UNK_?;
                        defaultColor.a = _UNK_?;
                        pCVar9 = Extensions::Extensions_GetColorOrDefault
                                           (&CStack_3,itemData,StringLiteral_TrailColor,
                                            defaultColor,(MethodInfo *)0x0);
                        fVar4 = fVar4 - pCVar9->r;
                        fVar5 = fVar5 - pCVar9->g;
                        fVar7 = fVar7 - pCVar9->b;
                        fVar8 = fVar8 - pCVar9->a;
                        return fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8 <
                               _UNK_?;
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
  func_?();
  pcVar10 = (code *)swi(3);
  bVar2 = (*pcVar10)();
  return bVar2;
}


/* Void OnArcTrailStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnArcTrailStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    func_?(&TypeInfo__UnityEngine__GradientColorKey);
    func_?(&TypeInfo__UnityEngine__Gradient);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailRenderer;
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) && (pTVar1 != (TrailRenderer *)0x0))
  {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pTVar1,(pPVar2->fields).isTrailEnabled,(MethodInfo *)0x0);
    pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      if ((pPVar2->fields).isTrailEnabled == 0) {
        return;
      }
      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar3 = (pPVar2->fields).trailLength;
        if (fVar3 <= _UNK_?) {
          fVar3 = _UNK_?;
        }
        fVar3 = _UNK_? / fVar3;
        this_00 = (Gradient *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor(this_00,(MethodInfo *)0x0)
        ;
        value = (GradientAlphaKey__Array *)func_?();
        VStack_4.Item1 = 0.0;
        VStack_4.Item2 = 0.0;
        mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                  (&VStack_4,0.0,fVar3 * _UNK_?,(MethodInfo *)0x0);
        if (value != (GradientAlphaKey__Array *)0x0) {
          if (value->max_length == 0) goto code_?;
          value->vector[0].alpha = VStack_4.Item1;
          value->vector[0].time = VStack_4.Item2;
          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            VStack_5.Item1 = 0.0;
            VStack_5.Item2 = 0.0;
            mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                      (&VStack_5,(pPVar2->fields).trailColor.a,fVar3 * _UNK_?,
                       (MethodInfo *)0x0);
            if (value->max_length < 2) goto code_?;
            value->vector[1].alpha = VStack_5.Item1;
            value->vector[1].time = VStack_5.Item2;
            VStack_6.Item1 = 0.0;
            VStack_6.Item2 = 0.0;
            mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                      (&VStack_6,0.0,1.0,(MethodInfo *)0x0);
            if (value->max_length < 3) goto code_?;
            value->vector[2].alpha = VStack_6.Item1;
            value->vector[2].time = VStack_6.Item2;
            if (this_00 != (Gradient *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                        (this_00,value,(MethodInfo *)0x0);
              value_00 = (GradientColorKey__Array *)func_?();
              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                fVar3 = 0.0;
                UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::GradientColorKey__ctor
                          ((GradientColorKey *)&stack0xffffffc8,(pPVar2->fields).trailColor,0.0,
                           (MethodInfo *)0x0);
                if (value_00 != (GradientColorKey__Array *)0x0) {
                  if (value_00->max_length == 0) goto code_?;
                  value_00->vector[0].color.r = fVar3;
                  value_00->vector[0].color.g = 0.0;
                  value_00->vector[0].color.b = 0.0;
                  value_00->vector[0].color.a = 0.0;
                  value_00->vector[0].time = 0.0;
                  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    fVar7 = 0.0;
                    fVar3 = 0.0;
                    fVar8 = 0.0;
                    fVar9 = 0.0;
                    fVar10 = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::
                    GradientColorKey__ctor
                              ((GradientColorKey *)&stack0xffffffb4,(pPVar2->fields).trailColor,1.0,
                               (MethodInfo *)0x0);
                    if (value_00->max_length < 2) goto code_?;
                    value_00->vector[1].color.r = fVar3;
                    value_00->vector[1].color.g = fVar8;
                    value_00->vector[1].color.b = fVar9;
                    value_00->vector[1].color.a = fVar10;
                    value_00->vector[1].time = fVar7;
                    UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                              (this_00,value_00,(MethodInfo *)0x0);
                    pTVar1 = (this->fields).trailRenderer;
                    if (pTVar1 != (TrailRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                      TrailRenderer_SetColorGradient(pTVar1,this_00,(MethodInfo *)0x0);
                      pTVar1 = (this->fields).trailRenderer;
                      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
                         (pTVar1 != (TrailRenderer *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                        TrailRenderer_set_time
                                  (pTVar1,(pPVar2->fields).trailLength,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnAvatarInvisibleStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnAvatarInvisibleStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._._._.owner;
  pMVar3 = (MVAvatarRemote *)0x0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    pMVar3 = (MVAvatarRemote *)(pMVar2->fields)._.worldObjectParent;
    if (pMVar3 == (MVAvatarRemote *)0x0) {
      return;
    }
    pIVar4 = ((Il2CppClass_0 *)&pMVar3->klass)->image;
    bVar5 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if (*(byte *)&pIVar4[4].assembly < bVar5) {
      return;
    }
    if (*(MVAvatar__Class **)((pIVar4[2].typeCount - 4) + (uint)bVar5 * 4) != TypeInfo__MVAvatar) {
      return;
    }
    pPVar6 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar6 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      value = (pPVar6->fields).isPlayerInvisible;
      if (cRam_? == '\0') {
        func_?(&
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
        func_?(&TypeInfo__MVAvatarRemote);
        func_?(&StringLiteral_Default);
        cRam_? = '\x01';
      }
      pMVar7 = (pMVar3->fields)._.body;
      if (pMVar7 != (MVBody *)0x0) {
        MVBody::MVBody_set_ForceHidden(pMVar7,value,(MethodInfo *)0x0);
        pMVar7 = (pMVar3->fields)._.body;
        if ((pMVar7 != (MVBody *)0x0) &&
           (this_03 = MVBody::MVBody_get_BlobShadow(pMVar7,(MethodInfo *)0x0),
           this_03 != (AvatarBlobShadowController *)0x0)) {
          this = (PickupItemCostume *)&UNK_?;
          AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
                    (this_03,99,(MethodInfo *)0x0);
          pIVar4 = ((Il2CppClass_0 *)&pMVar3->klass)->image;
          bVar5 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
          if (bVar5 <= *(byte *)&pIVar4[4].assembly) {
            uVar8 = pIVar4[2].typeCount;
            pPVar1 = (PickupItemCostume *)&UNK_?;
            if (*(MVAvatarRemote__Class **)((uVar8 - 4) + (uint)bVar5 * 4) ==
                TypeInfo__MVAvatarRemote) {
              avatar = (MVAvatarRemote *)0x0;
              if (*(MVAvatarRemote__Class **)((uVar8 - 4) + (uint)bVar5 * 4) ==
                  TypeInfo__MVAvatarRemote) {
                avatar = pMVar3;
              }
              this = (PickupItemCostume *)&UNK_?;
              PickupItemCostume_CalculateRemoteAvatarUIVisibility
                        ((PickupItemCostume *)&UNK_?,99,avatar,(MethodInfo *)0x0);
            }
          }
          if (value == 0) {
            return;
          }
          this_00 = (pPVar1->fields)._.cubeModelParent;
          if (this_00 != (Transform *)0x0) {
            pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                     Component_GetComponentsInChildren
                               ((Component *)this_00,
                                UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                               );
            pMVar3 = (MVAvatarRemote *)0x0;
            if (pOVar9 != (Object__Array *)0x0) {
              ppOVar10 = pOVar9->vector;
              for (; (int)pMVar3 < (int)pOVar9->max_length;
                  pMVar3 = (MVAvatarRemote *)((int)&((Il2CppClass_0 *)&pMVar3->klass)->image + 1))
              {
                if ((MVAvatarRemote *)pOVar9->max_length <= pMVar3) goto code_?;
                this_01 = (Renderer *)*ppOVar10;
                if (this_01 == (Renderer *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          (this_01,1,(MethodInfo *)0x0);
                this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                value_00 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                     (StringLiteral_Default,(MethodInfo *)0x0);
                if (this_04 == (GameObject *)0x0) goto code_?;
                this = (PickupItemCostume *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                          (this_04,value_00,(MethodInfo *)0x0);
                ppOVar10 = ppOVar10 + 1;
              }
              this_02 = (this->fields).trailRenderer;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
                cRam_? = '\x01';
              }
              pPVar11 = (this->fields)._._Configuration_k__BackingField;
              pMVar3 = (MVAvatarRemote *)TypeInfo__PickupItemCostume__CostumeConfiguration;
              if (pPVar11 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
                bVar5 = (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment;
                if (((pPVar11->klass->_1).naturalAligment < bVar5) ||
                   ((pPVar11->klass->_1).typeHierarchy[bVar5 - 1] !=
                    (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
                goto code_?;
                if (this_02 != (TrailRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                            ((Renderer *)this_02,*(bool *)((int)&pPVar11[1].fields.cubeModelId + 2),
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
code_?:
  func_?();
code_?:
  func_?();
  pPVar11 = extraout_EDX;
code_?:
  func_?(pPVar11,pMVar3);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnCollisionStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnCollisionStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                   );
    func_?(&
                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                   );
    func_?(&
                    UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                   );
    func_?(&
                    UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMStack_1 = (MeshCollider *)0x0;
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    pGVar3 = (this->fields)._.cubeModelObject;
    fStack_4 = _UNK_?;
    fStack_5 = _UNK_?;
    fStack_6 = _UNK_?;
    fStack_7 = _UNK_?;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    fStack_11 = _UNK_?;
    fStack_12 = _UNK_?;
    if ((pPVar2->fields).playersCanCollide == 0) {
      if (pGVar3 != (GameObject *)0x0) {
        pMStack_13 = (MVAvatarLocal *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren
                               (pGVar3,
                                UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                               );
        uVar14 = 0;
        if (pMStack_13 != (MVAvatarLocal *)0x0) {
          ppOVar15 = (Object **)&(pMStack_13->fields)._._._._.itemId;
          for (; uVar16 = (pMStack_13->fields)._._._._.groupId, (int)uVar14 < (int)uVar16;
              uVar14 = uVar14 + 1) {
            if (uVar16 <= uVar14) goto code_?;
            if ((Collider *)*ppOVar15 == (Collider *)0x0) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      ((Collider *)*ppOVar15,0,(MethodInfo *)0x0);
            ppOVar15 = ppOVar15 + 1;
          }
          pBVar17 = (this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pBVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar18 == 0) {
            return;
          }
          pMVar19 = (this->fields)._._._.owner;
          if ((pMVar19 != (MVPickupOwner *)0x0) &&
             (this_00 = (MVAvatarLocal *)(pMVar19->fields)._.worldObjectParent,
             this_00 != (MVAvatarLocal *)0x0)) {
            bVar20 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
            if (((this_00->klass->_1).naturalAligment < bVar20) ||
               ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[bVar20 - 1] !=
                TypeInfo__MVAvatarLocal)) goto code_?;
            pCVar21 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders(this_00,(MethodInfo *)0x0);
            if (pCVar21 != (ColliderCollection *)0x0) {
              Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                        (pCVar21,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0)
              ;
              pBVar17 = (this->fields).costumeTriggerCollider;
              if (pBVar17 != (BoxCollider *)0x0) {
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          ((Collider *)pBVar17,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else if (pGVar3 != (GameObject *)0x0) {
      pOStack_22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             (pGVar3,
                              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                             );
      uVar14 = 0;
      if (pOStack_22 != (Object__Array *)0x0) {
        pMStack_13 = (MVAvatarLocal *)pOStack_22->vector;
        for (; (int)uVar14 < (int)pOStack_22->max_length; uVar14 = uVar14 + 1) {
          if (pOStack_22->max_length <= uVar14) goto code_?;
          this_01 = pMStack_13->klass;
          if (this_01 == (MVAvatarLocal__Class *)0x0) goto code_?;
          bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_TryGetComponent_1
                            ((Component *)this_01,(Object **)&pMStack_1,
                             bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                            );
          if (bVar18 == 0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_01,(MethodInfo *)0x0);
            if ((pGVar3 == (GameObject *)0x0) ||
               (pMStack_1 = (MeshCollider *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_AddComponent_1
                                       (pGVar3,
                                        UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                                       ), pMStack_1 == (MeshCollider *)0x0)) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_convex
                      (pMStack_1,0,(MethodInfo *)0x0);
          }
          if (pMStack_1 == (MeshCollider *)0x0) goto code_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    ((Collider *)pMStack_1,1,(MethodInfo *)0x0);
          pBVar17 = (BoxCollider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this_01,
                               UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                              );
          if (pBVar17 == (BoxCollider *)0x0) goto code_?;
          pVVar23 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                              ((Vector3 *)&stack0xffffff18,pBVar17,(MethodInfo *)0x0);
          uStack_24._0_4_ = pVVar23->x;
          uStack_24._4_4_ = pVVar23->y;
          fStack_25 = pVVar23->z;
          fStack_26 = fStack_25 * _UNK_?;
          fStack_27 = (float)(undefined4)uStack_24 * _UNK_?;
          fStack_28 = (float)uStack_24._4_4_ * _UNK_?;
          value_00.y = fStack_28;
          value_00.x = fStack_27;
          value_00.z = fStack_26;
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                    (pBVar17,value_00,(MethodInfo *)0x0);
          pVVar23 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              ((Vector3 *)&stack0xffffff08,pBVar17,(MethodInfo *)0x0);
          uStack_29._0_4_ = pVVar23->x;
          uStack_29._4_4_ = pVVar23->y;
          fStack_30 = pVVar23->z;
          if ((float)(undefined4)uStack_29 - fStack_27 <= fStack_5) {
            fStack_5 = (float)(undefined4)uStack_29 - fStack_27;
          }
          fVar31 = fStack_4;
          if ((float)uStack_29._4_4_ - fStack_28 <= fStack_4) {
            fVar31 = (float)uStack_29._4_4_ - fStack_28;
          }
          fStack_32 = fStack_6;
          if (fStack_30 - fStack_26 <= fStack_6) {
            fStack_32 = fStack_30 - fStack_26;
          }
          uStack_33 = CONCAT44(fVar31,fStack_5);
          pVVar23 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              (&VStack_34,pBVar17,(MethodInfo *)0x0);
          uStack_35._0_4_ = pVVar23->x;
          uStack_35._4_4_ = pVVar23->y;
          fStack_36 = pVVar23->z;
          if (fStack_7 <= (float)(undefined4)uStack_35 + fStack_27) {
            fStack_7 = (float)(undefined4)uStack_35 + fStack_27;
          }
          if (fStack_11 <= (float)uStack_35._4_4_ + fStack_28) {
            fStack_11 = (float)uStack_35._4_4_ + fStack_28;
          }
          fStack_37 = fStack_12;
          if (fStack_12 <= fStack_36 + fStack_26) {
            fStack_37 = fStack_36 + fStack_26;
          }
          uStack_38 = CONCAT44(fStack_11,fStack_7);
          pMStack_13 = (MVAvatarLocal *)&pMStack_13->monitor;
          fStack_6 = fStack_32;
          fStack_4 = uStack_33._4_4_;
          fStack_5 = (float)uStack_33;
          uStack_8 = 0;
          uStack_9 = 0;
          uStack_10 = 0;
          fStack_12 = fStack_37;
        }
        pMVar19 = (this->fields)._._._.owner;
        if (pMVar19 != (MVPickupOwner *)0x0) {
          pMStack_13 = (MVAvatarLocal *)(pMVar19->fields)._.worldObjectParent;
          if (pMStack_13 == (MVAvatarLocal *)0x0) {
            return;
          }
          bVar20 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if ((pMStack_13->klass->_1).naturalAligment < bVar20) {
            return;
          }
          if ((MVAvatarLocal__Class *)(pMStack_13->klass->_1).typeHierarchy[bVar20 - 1] !=
              TypeInfo__MVAvatarLocal) {
            return;
          }
          pOStack_22 = (Object__Array *)(this->fields).costumeTriggerCollider;
          ppBVar39 = &(this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pOStack_22,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            pCVar21 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                               (pMStack_13,(MethodInfo *)0x0);
            if (pCVar21 == (ColliderCollection *)0x0) goto code_?;
            Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                      (pCVar21,(Collider *)*ppBVar39,(MethodInfo *)0x0);
            pOStack_22 = (Object__Array *)*ppBVar39;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pOStack_22,(MethodInfo *)0x0);
          }
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            pBVar17 = (BoxCollider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar3,
                                 UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                                );
            *ppBVar39 = pBVar17;
            func_?();
            pGVar3 = (this->fields)._.cubeModelObject;
            if ((pGVar3 != (GameObject *)0x0) &&
               (pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
               pTVar40 != (Transform *)0x0)) {
              pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  (&VStack_34,pTVar40,(MethodInfo *)0x0);
              pOStack_22 = (Object__Array *)pVVar23->x;
              pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar40 != (Transform *)0x0) {
                fStack_7 = fStack_7 - fStack_5;
                fStack_11 = fStack_11 - fStack_4;
                fStack_12 = fStack_12 - fStack_6;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale(&VStack_34,pTVar40,(MethodInfo *)0x0);
                fVar31 = (float)pOStack_22 / pVVar23->x;
                uStack_38 = CONCAT44(fStack_11 * fVar31,fStack_7 * fVar31);
                fStack_37 = fStack_12 * fVar31;
                if (*ppBVar39 != (BoxCollider *)0x0) {
                  value.y = fStack_11 * fVar31;
                  value.x = fStack_7 * fVar31;
                  value.z = fStack_37;
                  UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                            (*ppBVar39,value,(MethodInfo *)0x0);
                  pBVar17 = *ppBVar39;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pBVar17 != (BoxCollider *)0x0) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                              (pBVar17,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    if (*ppBVar39 != (BoxCollider *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                                ((Collider *)*ppBVar39,1,(MethodInfo *)0x0);
                      if (*ppBVar39 != (BoxCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                  ((Collider *)*ppBVar39,1,(MethodInfo *)0x0);
                        pCVar21 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                           (pMStack_13,(MethodInfo *)0x0);
                        if (pCVar21 != (ColliderCollection *)0x0) {
                          Assets::Scripts::Tools::ColliderCollection::
                          ColliderCollection_SetActiveCollider
                                    (pCVar21,(Collider *)*ppBVar39,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnDestroy
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      pAVar3 = (pMVar2->fields).OnLocalPlayerTeamChanged;
      ppAVar4 = &(pMVar2->fields).OnLocalPlayerTeamChanged;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pAVar3 == (Action *)0x0) {
        *ppAVar4 = (Action *)0x0;
code_?:
        func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__UpdateController____c__DisplayClass6_0;
        pOStack5 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (pOStack5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        if (pOStack5 != (Object *)0x0) {
          pOStack5[1].klass = in_stack_6;
          func_?();
          iVar7 = 0x10;
          uVar8 = 0;
          while( true ) {
            pOVar9 = pOStack5;
            if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar10 = TypeInfo__UpdateController->static_fields->updateBuckets;
            if (pLVar10 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
            if ((int)pLVar10->max_length <= (int)uVar8) {
              return;
            }
            if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pLVar10 = TypeInfo__UpdateController->static_fields->updateBuckets;
            if (pLVar10 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
            if (pLVar10->max_length <= uVar8) break;
            this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                      pOVar9[1].monitor;
            this_00 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                       ((int)pLVar10->vector + iVar7 + -0x10);
            if (this_01 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
              this_01 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                        func_?();
              mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]
              ::Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                        (this_01,pOStack5,
                         MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                         ,(MethodInfo *)0x0);
              pOStack5[1].monitor = (MonitorData *)this_01;
              func_?();
            }
            if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            VisualTreeAsset+UsingEntry]::
            List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                      (this_00,this_01,
                       MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                      );
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 4;
          }
          func_?();
        }
code_?:
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pAVar12 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar3;
      }
      if (pAVar12 != (Action *)0x0) {
        *ppAVar4 = pAVar12;
        pAVar12 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar12 = pAVar3;
        }
        if (pAVar12 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnFire
               (PickupItemCostume *this,bool isLocal,MethodInfo *method)

{
  (this->fields)._._.isFiring = 0;
  return;
}


/* Void OnHealthStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnHealthStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  this_00 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
  if (this_00 != (MVAvatarLocal *)0x0) {
    bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVAvatarLocal)) {
      iVar3 = (this_00->fields).defaultBaseMaxHealth;
      pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iVar3 != (int)(pPVar4->fields).health) {
        pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                  (this_00,(int)(pPVar4->fields).health,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnLocalPlayerTeamChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnLocalPlayerTeamChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarRemote);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  wo = (MVWorldObjectClient *)0x0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    wo = (pMVar1->fields)._.worldObjectParent;
    if (wo == (MVWorldObjectClient *)0x0) {
      return;
    }
    bVar2 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
    if ((wo->klass->_1).naturalAligment < bVar2) {
      return;
    }
    if ((MVAvatarRemote__Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVAvatarRemote) {
      return;
    }
    pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      bVar2 = (pPVar3->fields).isPlayerInvisible;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__AvatarUIHandlerRemote);
        cRam_? = '\x01';
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_00 != (MVNetworkGame *)0x0) &&
         (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         this_01 != (MVLocalPlayer *)0x0)) {
        isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_01,wo,(MethodInfo *)0x0);
        iVar4 = wo[1].fields._.id;
        wo = (MVWorldObjectClient *)0x0;
        if ((iVar4 != 0) &&
           (wo = *(MVWorldObjectClient **)(iVar4 + 0x44), wo != (MVWorldObjectClient *)0x0)) {
          bVar5 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
          pAVar6 = TypeInfo__AvatarUIHandlerRemote;
          if ((bVar5 <= (wo->klass->_1).naturalAligment) &&
             ((wo->klass->_1).typeHierarchy[bVar5 - 1] ==
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                      ((AvatarUIHandlerRemote *)wo,isFriendly == 0 & bVar2,(MethodInfo *)0x0);
            AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                      ((AvatarUIHandlerRemote *)wo,isFriendly,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pAVar6 = extraout_EDX;
code_?:
  func_?(wo,pAVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSpeedStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnSpeedStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pSVar4 = pMVar2[1].fields.name;
        if (pSVar4 != (String *)0x0) {
          pSVar5 = pSVar4[3].klass;
          pPVar6 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar6 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if ((float)pSVar5 == (float)(int)(pPVar6->fields).movementSpeed) {
              return;
            }
            this_00 = (AvatarMotor *)pMVar2[1].fields.name;
            pPVar6 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar6 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
               (this_00 != (AvatarMotor *)0x0)) {
              AvatarMotor::AvatarMotor_set_WalkSpeedBase
                        (this_00,(float)(int)(pPVar6->fields).movementSpeed,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnStateChanged
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  itemData = (Dictionary_2_System_Object_System_Object_ *)
             Extensions::Extensions_GetValueOrDefault_3
                       (newState,StringLiteral_itemData,(Object *)0x0,
                        System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       );
  if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (bVar1 = PickupItemEditable::PickupItemEditable_IsSamePickupItem
                        ((PickupItemEditable *)unaff_ESI,itemData,(MethodInfo *)0x0), bVar1 == 0)) {
    (*(code *)(unaff_ESI->klass->vtable).SetConfiguration.method)();
    PickupItemEditable::PickupItemEditable_OnCubeModelStateChanged
              ((PickupItemEditable *)unaff_ESI,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar2 = (unaff_ESI->fields)._._._.owner;
    if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
    this_00 = (MVAvatarLocal *)(pMVar2->fields)._.worldObjectParent;
    if (this_00 != (MVAvatarLocal *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (this_00->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        iVar4 = (this_00->fields).defaultBaseMaxHealth;
        pPVar5 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
        if (pPVar5 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        if (iVar4 != (int)(pPVar5->fields).health) {
          pPVar5 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
          if (pPVar5 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
          MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                    (this_00,(int)(pPVar5->fields).health,(MethodInfo *)0x0);
        }
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar2 = (unaff_ESI->fields)._._._.owner;
    if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
    pMVar6 = (pMVar2->fields)._.worldObjectParent;
    if (pMVar6 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar6->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pSVar7 = pMVar6[1].fields.name;
        if (pSVar7 == (String *)0x0) {
code_?:
          func_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pSVar9 = pSVar7[3].klass;
        pPVar5 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
        if (pPVar5 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        if ((float)pSVar9 != (float)(int)(pPVar5->fields).movementSpeed) {
          this_01 = (AvatarMotor *)pMVar6[1].fields.name;
          pPVar5 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
          if ((pPVar5 == (PickupItemCostume_CostumeConfiguration *)0x0) ||
             (this_01 == (AvatarMotor *)0x0)) goto code_?;
          AvatarMotor::AvatarMotor_set_WalkSpeedBase
                    (this_01,(float)(int)(pPVar5->fields).movementSpeed,(MethodInfo *)0x0);
        }
      }
    }
    PickupItemCostume_OnArcTrailStateChanged(unaff_ESI,(MethodInfo *)0x0);
    PickupItemCostume_OnCollisionStateChanged(unaff_ESI,(MethodInfo *)0x0);
    PickupItemCostume_OnAvatarInvisibleStateChanged(unaff_ESI,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetAvatarInvisibility(Boolean, MVAvatar) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetAvatarInvisibility
               (PickupItemCostume *this,bool isInvisible,MVAvatar *avatar,MethodInfo *method)

{
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&TypeInfo__MVAvatarRemote);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  if ((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) {
    MVBody::MVBody_set_ForceHidden(pMVar1,isInvisible,(MethodInfo *)0x0);
    pMVar1 = (avatar->fields).body;
    if ((pMVar1 != (MVBody *)0x0) &&
       (this_04 = MVBody::MVBody_get_BlobShadow(pMVar1,(MethodInfo *)0x0),
       this_04 != (AvatarBlobShadowController *)0x0)) {
      AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
                (this_04,isInvisible,(MethodInfo *)0x0);
      bVar2 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
      if ((bVar2 <= (avatar->klass->_1).naturalAligment) &&
         (ppIVar3 = (avatar->klass->_1).typeHierarchy,
         (MVAvatarRemote__Class *)ppIVar3[bVar2 - 1] == TypeInfo__MVAvatarRemote)) {
        avatar_00 = (MVAvatarRemote *)0x0;
        if ((MVAvatarRemote__Class *)ppIVar3[bVar2 - 1] == TypeInfo__MVAvatarRemote) {
          avatar_00 = (MVAvatarRemote *)avatar;
        }
        this = _isInvisible;
        PickupItemCostume_CalculateRemoteAvatarUIVisibility
                  (this_03,isInvisible,avatar_00,(MethodInfo *)0x0);
      }
      if (isInvisible == 0) {
        return;
      }
      this_00 = (this_03->fields)._.cubeModelParent;
      if (this_00 != (Transform *)0x0) {
        this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                  Component_GetComponentsInChildren
                            ((Component *)this_00,
                             UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                            );
        avatar = (MVAvatar *)0x0;
        if (this_05 != (Object__Array *)0x0) {
          ppOVar4 = this_05->vector;
          for (; (int)avatar < (int)this_05->max_length;
              avatar = (MVAvatar *)((int)&((Il2CppClass_0 *)&avatar->klass)->image + 1)) {
            if ((MVAvatar *)this_05->max_length <= avatar) goto code_?;
            this_01 = (Renderer *)*ppOVar4;
            if (this_01 == (Renderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (this_01,1,(MethodInfo *)0x0);
            this_05 = (Object__Array *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (this_05 == (Object__Array *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      ((GameObject *)this_05,value,(MethodInfo *)0x0);
            ppOVar4 = ppOVar4 + 1;
          }
          this_02 = (this->fields).trailRenderer;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
            cRam_? = '\x01';
          }
          pPVar5 = (this->fields)._._Configuration_k__BackingField;
          avatar = (MVAvatar *)TypeInfo__PickupItemCostume__CostumeConfiguration;
          if (pPVar5 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
            bVar2 = (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment;
            if (((pPVar5->klass->_1).naturalAligment < bVar2) ||
               ((pPVar5->klass->_1).typeHierarchy[bVar2 - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
            goto code_?;
            if (this_02 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_02,*(bool *)((int)&pPVar5[1].fields.cubeModelId + 2),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pPVar5 = extraout_EDX;
code_?:
  func_?(pPVar5,avatar);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetConfiguration
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        pSVar4 = (String *)
                 Extensions::Extensions_GetValueOrDefault_3
                           (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          (pPVar1->fields)._.name = pSVar4;
          func_?();
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Health,(pPVar2->fields).health,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              (pPVar1->fields).health = fVar5;
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_MovementSpeed,
                                    (pPVar2->fields).movementSpeed,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  (pPVar1->fields).movementSpeed = fVar5;
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                       (itemData,StringLiteral_TrailLength,
                                        (pPVar2->fields).trailLength,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       );
                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      (pPVar1->fields).trailLength = fVar5;
                      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        bVar6 = Extensions::Extensions_GetValueOrDefault
                                          (itemData,StringLiteral_PlayerInvisible,
                                           (pPVar2->fields).isPlayerInvisible,
                                           bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                          );
                        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                          (pPVar1->fields).isPlayerInvisible = bVar6;
                          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                            bVar6 = Extensions::Extensions_GetValueOrDefault
                                              (itemData,StringLiteral_PlayersCanCollide,
                                               (pPVar2->fields).playersCanCollide,
                                               bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                              );
                            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                              (pPVar1->fields).playersCanCollide = bVar6;
                              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                bVar6 = Extensions::Extensions_GetValueOrDefault
                                                  (itemData,StringLiteral_TrailEnabled,
                                                   (pPVar2->fields).isTrailEnabled,
                                                                                                      
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                  (pPVar1->fields).isTrailEnabled = bVar6;
                                  pPVar1 = PickupItemCostume_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemCostume_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                    pCVar7 = Extensions::Extensions_GetColorOrDefault
                                                       ((Color *)&stack0xffffffec,itemData,
                                                        StringLiteral_TrailColor,
                                                        (pPVar2->fields).trailColor,
                                                        (MethodInfo *)0x0);
                                    fVar5 = pCVar7->g;
                                    fVar8 = pCVar7->b;
                                    fVar9 = pCVar7->a;
                                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                      (pPVar1->fields).trailColor.r = pCVar7->r;
                                      (pPVar1->fields).trailColor.g = fVar5;
                                      (pPVar1->fields).trailColor.b = fVar8;
                                      (pPVar1->fields).trailColor.a = fVar9;
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
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* PickupItemCostume+CostumeConfiguration get_Configuration() */

PickupItemCostume_CostumeConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_get_Configuration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemCostume_CostumeConfiguration *)(this->fields)._._Configuration_k__BackingField
  ;
  if (pPVar1 == (PickupItemCostume_CostumeConfiguration *)0x0) {
    return pPVar1;
  }
  bVar2 = (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment;
  if ((bVar2 <= (pPVar1->klass->_1).naturalAligment) &&
     ((pPVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
      (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration)) {
    return pPVar1;
  }
  func_?(pPVar1,TypeInfo__PickupItemCostume__CostumeConfiguration);
  pcVar3 = (code *)swi(3);
  pPVar1 = (PickupItemCostume_CostumeConfiguration *)(*pcVar3)();
  return pPVar1;
}


/* Color get_TrailColor() */

Color * Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_get_TrailColor
                  (Color *__return_storage_ptr__,PickupItemCostume *this,MethodInfo *method)

{
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).trailColor.g;
    fVar3 = (pPVar1->fields).trailColor.b;
    fVar4 = (pPVar1->fields).trailColor.a;
    __return_storage_ptr__->r = (pPVar1->fields).trailColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}

