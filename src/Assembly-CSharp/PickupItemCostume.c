
/* Void CalculateRemoteAvatarUIVisibility(Boolean, MVAvatarRemote) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_CalculateRemoteAvatarUIVisibility
               (PickupItemCostume *this,bool isInvisible,MVAvatarRemote *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
      ((this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_02 == (MVLocalPlayer *)0x0 ||
       (bVar3 = MVPlayer::MVPlayer_IsOnSameTeam_1
                          ((MVPlayer *)this_02,(MVWorldObjectClient *)avatar,(MethodInfo *)0x0),
       avatar == (MVAvatarRemote *)0x0)))) ||
     ((pAVar4 = (avatar->fields)._.avatar, pAVar4 == (Avatar *)0x0 ||
      (this_01 = (AvatarUIHandlerRemote *)(pAVar4->fields).avatarUIHandler,
      this_01 == (AvatarUIHandlerRemote *)0x0)))) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pAVar6 = this_01->klass;
  bVar7 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
  if (((pAVar6->_1).naturalAligment < bVar7) ||
     ((pAVar6->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
    FUN_?(this_01);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar7 = (bVar3 ^ 1) & isInvisible;
  (this_01->fields).forceHideUI = bVar7;
  (*(pAVar6->vtable).SetShouldShowUI.methodPtr)(this_01,(ulonglong)(bVar7 ^ 1));
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = (this_01->fields).avatarShieldMaterial;
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
  if (pMVar8 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar8->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar8 = (this_01->fields).avatarShieldMaterial;
      if (pMVar8 == (Material *)0x0) goto code_?;
      CStack_9.r = _UNK_?;
      CStack_9.g = _UNK_?;
      CStack_9.b = _UNK_?;
      CStack_9.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar8,&CStack_9,(MethodInfo *)0x0);
      pMVar8 = (this_01->fields).avatarHealthMaterial;
      if (bVar3 == 0) {
        if (pMVar8 == (Material *)0x0) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        CStack_9.r = _UNK_?;
        CStack_9.g = _UNK_?;
        CStack_9.b = _UNK_?;
        CStack_9.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar8,&CStack_9,(MethodInfo *)0x0);
        pMVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_EnemyIconMaterial
                           (this_01,(MethodInfo *)0x0);
        if (pMVar8 == (Material *)0x0) goto code_?;
        CStack_9.r = _UNK_?;
        CStack_9.g = _UNK_?;
        CStack_9.b = _UNK_?;
        CStack_9.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar8,&CStack_9,(MethodInfo *)0x0);
        this_03 = (this_01->fields).teamIconRenderer;
        pMVar8 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_EnemyIconMaterial
                           (this_01,(MethodInfo *)0x0);
        if (this_03 == (Renderer *)0x0) goto code_?;
      }
      else {
        if (pMVar8 == (Material *)0x0) goto code_?;
        CStack_9.r = _UNK_?;
        CStack_9.g = _UNK_?;
        CStack_9.b = _UNK_?;
        CStack_9.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar8,&CStack_9,(MethodInfo *)0x0);
        this_03 = (this_01->fields).teamIconRenderer;
        if (this_03 == (Renderer *)0x0) goto code_?;
        pMVar8 = (this_01->fields).teamIconMaterial;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                (this_03,pMVar8,(MethodInfo *)0x0);
    }
  }
  return;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_GetDefaultConfiguration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           FUN_?(TypeInfo__PickupItemCostume__CostumeConfiguration);
  PickupItemEditable+EditableItemConfiguration::PickupItemEditable_EditableItemConfiguration__ctor
            (pPVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pSVar2 = (String *)
           Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                     (StringLiteral_Name,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    if (pSVar2 == (String *)0x0) {
      (pPVar1->fields).name = (String *)0x0;
    }
    else {
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dbdde0) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2,pSRam0000000182dbdde0);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      (pPVar1->fields).name = pSVar3;
      pSVar3 = (String *)0x0;
      if (pSVar2->klass == pSRam0000000182dbdde0) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 == (String *)0x0) {
        FUN_?(pSVar2);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pOVar10 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                       (StringLiteral_Health,(MethodInfo *)0x0);
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10,lRam_?);
        pcVar4 = (code *)swi(3);
        pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
        return pPVar1;
      }
      *(undefined4 *)&pPVar1[1].klass = *(undefined4 *)&pOVar10[1].klass;
      pOVar10 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                         (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10,lRam_?);
          pcVar4 = (code *)swi(3);
          pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
          return pPVar1;
        }
        *(undefined4 *)((longlong)&pPVar1[1].klass + 4) = *(undefined4 *)&pOVar10[1].klass;
        pOVar10 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                           (StringLiteral_TrailLength,(MethodInfo *)0x0);
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar10,lRam_?);
            pcVar4 = (code *)swi(3);
            pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
            return pPVar1;
          }
          *(undefined4 *)&pPVar1[1].monitor = *(undefined4 *)&pOVar10[1].klass;
          pOVar10 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                             (StringLiteral_PlayerInvisible,(MethodInfo *)0x0);
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar10,lRam_?);
              pcVar4 = (code *)swi(3);
              pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
              return pPVar1;
            }
            *(undefined1 *)((longlong)&pPVar1[1].monitor + 4) = *(undefined1 *)&pOVar10[1].klass;
            pOVar10 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::
                     CostumeData_DefaultValue(StringLiteral_TrailEnabled,(MethodInfo *)0x0);
            if (pOVar10 != (Object *)0x0) {
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar4 = (code *)swi(3);
                pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
                return pPVar1;
              }
              *(undefined1 *)((longlong)&pPVar1[1].monitor + 6) = *(undefined1 *)&pOVar10[1].klass;
              pCVar11 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::
                       CostumeData_DefaultColor
                                 (&CStack_12,StringLiteral_TrailColor,(MethodInfo *)0x0);
              fVar13 = pCVar11->b;
              fVar14 = pCVar11->a;
              pPVar1[1].fields.name = *(String **)pCVar11;
              pPVar1[1].fields.cubeModelId = (int32_t)fVar13;
              pPVar1[1].fields.maxAmmo = fVar14;
              return pPVar1;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar4)();
  return pPVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_Initialize
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnLocalPlayerTeamChanged;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
    (pMVar3->fields).OnLocalPlayerTeamChanged = (Action *)0x0;
  }
  else {
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?(pAVar5,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnLocalPlayerTeamChanged = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerTeamChanged >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstPersonTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields)._.hitLayerMask = 1 << ((byte)iVar11 & 0x1f) | 1 << (uVar7 & 0x1f);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0) {
code_?:
    (*(this->klass->vtable).InitializeAudioPlayers.methodPtr)
              (this,(this->klass->vtable).InitializeAudioPlayers.method);
    pPVar12 = (PickupItemEditable_EditableItemConfiguration *)
              (*(this->klass->vtable).GetDefaultConfiguration.methodPtr)
                        (this,(this->klass->vtable).GetDefaultConfiguration.method);
    bVar13 = iRam_? != 0;
    (this->fields)._._Configuration_k__BackingField = pPVar12;
    if (bVar13) {
      uVar7 = (uint)((ulonglong)&(this->fields)._._Configuration_k__BackingField >> 0xc);
      lVar14 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar8 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar13 = uVar10 == *puVar8;
        if (bVar13) {
          *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).SetValuesBasedOnConfiguration.methodPtr)
              (this,(this->klass->vtable).SetValuesBasedOnConfiguration.method);
    return;
  }
  pTVar15 = (this->fields)._._._.firstPersonTransform;
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
  if (pTVar15 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar15->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_01 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_01,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_01,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar15 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar15,parent,1,(MethodInfo *)0x0);
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar15 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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
      pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar16);
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      bVar13 = iRam_? != 0;
      (this->fields)._._._.firstPersonTransform = pTVar15;
      if (bVar13) {
        uVar7 = (uint)((ulonglong)&(this->fields)._._._.firstPersonTransform >> 0xc);
        lVar14 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar14 + 0xADDR);
          puVar8 = (ulonglong *)(lVar14 + 0xADDR);
          LOCK();
          bVar13 = uVar10 == *puVar8;
          if (bVar13) {
            *puVar8 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_InterruptFire
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  this_00 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
  if (this_00 != (MVAvatarLocal *)0x0) {
    bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatar__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatar)) {
      pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        if ((pPVar3->fields).isPlayerInvisible != 0) {
          PickupItemCostume_SetAvatarInvisibility(this,0,(MVAvatar *)this_00,(MethodInfo *)0x0);
        }
        bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if ((this_00->klass->_1).naturalAligment < bVar2) {
          return;
        }
        if ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__MVAvatarLocal) {
          return;
        }
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          if ((int)(pPVar3->fields).health != 100) {
            MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth(this_00,100,(MethodInfo *)0x0);
          }
          pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if ((float)(int)(pPVar3->fields).movementSpeed != _UNK_?) {
              this_01 = (this_00->fields).avatarMotor;
              if (this_01 == (AvatarMotor *)0x0) goto code_?;
              (this_01->fields).walkSpeedBase = 8.0;
              AvatarMotor::AvatarMotor_HandleMovementBoost(this_01,(MethodInfo *)0x0);
            }
            pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              if ((pPVar3->fields).playersCanCollide == 0) {
                return;
              }
              if ((this->fields)._.cubeModelObject != (GameObject *)0x0) {
                lVar4 = FUN_?();
                uVar5 = 0;
                if (lVar4 != 0) {
                  puVar6 = (undefined8 *)(lVar4 + 0x20);
                  for (; (int)uVar5 < *(int *)(lVar4 + 0x18); uVar5 = uVar5 + 1) {
                    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                      FUN_?();
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    obj = (Object *)*puVar6;
                    if (obj == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar8 = obj[1].klass;
                    if (pOVar8 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar9 = func_?(&UNK_?);
                      FUN_?(uVar9,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pOVar8);
                    puVar6 = puVar6 + 1;
                  }
                  pBVar10 = (this->fields).costumeTriggerCollider;
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
                  if (pBVar10 == (BoxCollider *)0x0) {
                    return;
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if ((pBVar10->fields)._._._.m_CachedPtr == (void *)0x0) {
                    return;
                  }
                  pMVar1 = (this->fields)._._._.owner;
                  if ((pMVar1 != (MVPickupOwner *)0x0) &&
                     (pMVar11 = (pMVar1->fields)._.worldObjectParent,
                     pMVar11 != (MVWorldObjectClient *)0x0)) {
                    bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                    if (((pMVar11->klass->_1).naturalAligment < bVar2) ||
                       ((MVAvatarLocal__Class *)
                        (pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
                        TypeInfo__MVAvatarLocal)) {
                      FUN_?(pMVar11);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pMVar12 = pMVar11[1].fields.group;
                    if ((pMVar12 != (MVGroup *)0x0) &&
                       (this_02 = *(ColliderCollection **)&(pMVar12->fields)._._.position,
                       this_02 != (ColliderCollection *)0x0)) {
                      Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                                (this_02,(Collider *)(this->fields).costumeTriggerCollider,
                                 (MethodInfo *)0x0);
                      pBVar10 = (this->fields).costumeTriggerCollider;
                      if (pBVar10 != (BoxCollider *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar13 = (pBVar10->fields)._._._.m_CachedPtr;
                        if (pvVar13 != (void *)0x0) {
                          pcVar7 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar7 = (code *)FUN_?(&UNK_?),
                             pcVar7 == (code *)0x0)) {
                            uVar9 = func_?(&UNK_?);
                            FUN_?(uVar9,0);
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          pcRam_? = pcVar7;
                          (*pcRam_?)(pvVar13,0);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pBVar10,(MethodInfo *)0x0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
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
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_IsSameItemData
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    pSVar2 = (pPVar1->fields)._.name;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = (String *)
             Extensions::Extensions_GetValueOrDefault_3
                       (itemData,StringLiteral_Name,(Object *)StringLiteral_error,
                        System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                       );
    if ((pSVar2 != pSVar3) &&
       ((((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
         ((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength)) ||
        (bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar2->fields)._firstChar,
                            (uint8_t *)&(pSVar3->fields)._firstChar,
                            (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar4 == 0)))) {
      return 0;
    }
    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      fVar5 = (pPVar1->fields).health;
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar6 = _UNK_?;
      fVar7 = Extensions::Extensions_GetValueOrDefault_4
                        (itemData,StringLiteral_Health,_UNK_?,
                         float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                        );
      if (fVar5 != fVar7) {
        return 0;
      }
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar5 = (pPVar1->fields).movementSpeed;
        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar7 = Extensions::Extensions_GetValueOrDefault_4
                          (itemData,StringLiteral_MovementSpeed,fVar6,
                           float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                          );
        if (fVar5 != fVar7) {
          return 0;
        }
        pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          fVar5 = (pPVar1->fields).trailLength;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar6 = Extensions::Extensions_GetValueOrDefault_4
                            (itemData,StringLiteral_TrailLength,fVar6,
                             float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                            );
          if (fVar5 != fVar6) {
            return 0;
          }
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            bVar4 = (pPVar1->fields).isPlayerInvisible;
            pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              bVar8 = (pPVar1->fields).isPlayerInvisible;
              if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar8 = Extensions::Extensions_GetValueOrDefault
                                (itemData,StringLiteral_PlayerInvisible,bVar8 == 0,
                                 bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                );
              if (bVar4 != bVar8) {
                return 0;
              }
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                bVar4 = (pPVar1->fields).playersCanCollide;
                pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  bVar8 = (pPVar1->fields).playersCanCollide;
                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar8 = Extensions::Extensions_GetValueOrDefault
                                    (itemData,StringLiteral_PlayersCanCollide,bVar8 == 0,
                                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                    );
                  if (bVar4 != bVar8) {
                    return 0;
                  }
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    bVar4 = (pPVar1->fields).isTrailEnabled;
                    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      bVar8 = (pPVar1->fields).isTrailEnabled;
                      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      bVar8 = Extensions::Extensions_GetValueOrDefault
                                        (itemData,StringLiteral_TrailEnabled,bVar8 == 0,
                                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                        );
                      if (bVar4 != bVar8) {
                        return 0;
                      }
                      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        fVar5 = (pPVar1->fields).trailColor.r;
                        fVar6 = (pPVar1->fields).trailColor.g;
                        fVar7 = (pPVar1->fields).trailColor.b;
                        fVar9 = (pPVar1->fields).trailColor.a;
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        CStack_10.r = _UNK_?;
                        CStack_10.g = _UNK_?;
                        CStack_10.b = _UNK_?;
                        CStack_10.a = _UNK_?;
                        pCVar11 = Extensions::Extensions_GetColorOrDefault
                                           (aCStack_12,itemData,StringLiteral_TrailColor,&CStack_10,
                                            (MethodInfo *)0x0);
                        fVar5 = fVar5 - pCVar11->r;
                        fVar6 = fVar6 - pCVar11->g;
                        fVar7 = fVar7 - pCVar11->b;
                        fVar9 = fVar9 - pCVar11->a;
                        return fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9 <
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar4 = (*pcVar13)();
  return bVar4;
}


/* Void OnArcTrailStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnArcTrailStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GradientColorKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Gradient);
    LOCK();
    UNLOCK();
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
      fVar3 = _UNK_?;
      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar4 = (pPVar2->fields).trailLength;
        if (fVar4 <= _UNK_?) {
          fVar4 = _UNK_?;
        }
        fVar4 = _UNK_? / fVar4;
        this_00 = (Gradient *)FUN_?(TypeInfo__UnityEngine__Gradient);
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
        pvVar7 = (void *)(*pcRam_?)();
        (this_00->fields).m_Ptr = pvVar7;
        (this_00->fields).m_RequiresNativeCleanup = 1;
        value = (GradientAlphaKey__Array *)FUN_?(TypeInfo__UnityEngine__GradientAlphaKey);
        if (value != (GradientAlphaKey__Array *)0x0) {
          if ((int)value->max_length != 0) {
            value->vector[0].time = fVar4 * _UNK_?;
            value->vector[0].alpha = 0.0;
            pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar2 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
            fVar4 = fVar4 * _UNK_?;
            if (1 < (uint)value->max_length) {
              value->vector[1].alpha = (pPVar2->fields).trailColor.a;
              value->vector[1].time = fVar4;
              if (2 < (uint)value->max_length) {
                value->vector[2].alpha = 0.0;
                value->vector[2].time = 1.0;
                UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                          (this_00,value,(MethodInfo *)0x0);
                value_00 = (GradientColorKey__Array *)
                           FUN_?(TypeInfo__UnityEngine__GradientColorKey);
                pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  fVar4 = (pPVar2->fields).trailColor.g;
                  fVar8 = (pPVar2->fields).trailColor.b;
                  fVar9 = (pPVar2->fields).trailColor.a;
                  if (value_00 != (GradientColorKey__Array *)0x0) {
                    if ((int)value_00->max_length == 0) goto code_?;
                    value_00->vector[0].color.r = (pPVar2->fields).trailColor.r;
                    value_00->vector[0].color.g = fVar4;
                    value_00->vector[0].color.b = fVar8;
                    value_00->vector[0].color.a = fVar9;
                    value_00->vector[0].time = 0.0;
                    pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      fVar4 = (pPVar2->fields).trailColor.g;
                      fVar8 = (pPVar2->fields).trailColor.b;
                      fVar9 = (pPVar2->fields).trailColor.a;
                      if ((uint)value_00->max_length < 2) goto code_?;
                      value_00->vector[1].color.r = (pPVar2->fields).trailColor.r;
                      value_00->vector[1].color.g = fVar4;
                      value_00->vector[1].color.b = fVar8;
                      value_00->vector[1].color.a = fVar9;
                      value_00->vector[1].time = fVar3;
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
                goto code_?;
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
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAvatarInvisibleStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnAvatarInvisibleStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    avatar = (MVAvatar *)(pMVar1->fields)._.worldObjectParent;
    if (avatar != (MVAvatar *)0x0) {
      bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if ((bVar2 <= (avatar->klass->_1).naturalAligment) &&
         ((MVAvatar__Class *)(avatar->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVAvatar)) {
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        PickupItemCostume_SetAvatarInvisibility
                  (this,(pPVar3->fields).isPlayerInvisible,avatar,(MethodInfo *)0x0);
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


/* Void OnCollisionStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnCollisionStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  apMStackX_18[0] = (MeshCollider *)0x0;
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  pMVar3 = 
  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
  ;
  pMVar4 = 
  UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
  ;
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    pGVar7 = (this->fields)._.cubeModelObject;
    if ((pPVar2->fields).playersCanCollide == 0) {
      if (pGVar7 != (GameObject *)0x0) {
        if ((
            UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                       );
        }
        p_Var21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_4
                            (pGVar7,0,((pMVar4->field7_0x38).rgctx_data)->method);
        if (p_Var21 != (_Il2CppFullySharedGenericType__Array *)0x0) {
          pp_Var31 = p_Var21->vector;
          for (; (int)uVar1 < (int)p_Var21->max_length; uVar1 = uVar1 + 1) {
            if ((uint)p_Var21->max_length <= uVar1) {
code_?:
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pOVar9 = (Object *)*pp_Var31;
            if (pOVar9 == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar10 = pOVar9[1].klass;
            if (pOVar10 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
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
            pp_Var31 = pp_Var31 + 1;
          }
          pBVar12 = (this->fields).costumeTriggerCollider;
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
          if (pBVar12 != (BoxCollider *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pBVar12->fields)._._._.m_CachedPtr != (void *)0x0) {
              pMVar13 = (this->fields)._._._.owner;
              if ((pMVar13 != (MVPickupOwner *)0x0) &&
                 (pMVar14 = (pMVar13->fields)._.worldObjectParent,
                 pMVar14 != (MVWorldObjectClient *)0x0)) {
                bVar15 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                if (((pMVar14->klass->_1).naturalAligment < bVar15) ||
                   ((MVAvatarLocal__Class *)(pMVar14->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1]
                    != TypeInfo__MVAvatarLocal)) {
                  FUN_?(pMVar14);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pMVar16 = pMVar14[1].fields.group;
                if ((pMVar16 != (MVGroup *)0x0) &&
                   (pCVar17 = *(ColliderCollection **)&(pMVar16->fields)._._.position,
                   pCVar17 != (ColliderCollection *)0x0)) {
                  Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                            (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,
                             (MethodInfo *)0x0);
                  pBVar12 = (this->fields).costumeTriggerCollider;
                  if (pBVar12 != (BoxCollider *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
                    if (pvVar18 != (void *)0x0) {
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      {
                        uVar11 = func_?(&UNK_?);
                        FUN_?(uVar11,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pvVar18,0);
                      return;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pBVar12,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
    else if (pGVar7 != (GameObject *)0x0) {
      if ((
          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
      }
      p_Var21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren_4
                          (pGVar7,0,((pMVar3->field7_0x38).rgctx_data)->method);
      fVar19 = _UNK_?;
      if (p_Var21 != (_Il2CppFullySharedGenericType__Array *)0x0) {
        pp_Var31 = p_Var21->vector;
        fVar20 = fVar5;
        fVar21 = fVar5;
        fVar22 = fVar6;
        fVar23 = fVar6;
        for (; pMVar4 = 
               bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
            , (int)uVar1 < (int)p_Var21->max_length; uVar1 = uVar1 + 1) {
          if ((uint)p_Var21->max_length <= uVar1) goto code_?;
          this_00 = (Component *)*pp_Var31;
          if (this_00 == (Component *)0x0) goto code_?;
          if ((
              bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                         );
          }
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_00,(MethodInfo *)0x0);
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          bVar24 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_TryGetComponent_1
                             (pGVar7,(Object **)apMStackX_18,
                              (pMVar4->field7_0x38).rgctx_data[1].method);
          if (bVar24 == 0) {
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            if ((pGVar7 == (GameObject *)0x0) ||
               (apMStackX_18[0] =
                     (MeshCollider *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (pGVar7,
                                UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                               ), apMStackX_18[0] == (MeshCollider *)0x0))
            goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_convex
                      (apMStackX_18[0],0,(MethodInfo *)0x0);
          }
          if (apMStackX_18[0] == (MeshCollider *)0x0) goto code_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    ((Collider *)apMStackX_18[0],1,(MethodInfo *)0x0);
          pBVar12 = (BoxCollider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              (this_00,
                               UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                              );
          if (pBVar12 == (BoxCollider *)0x0) goto code_?;
          pVVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                              (&VStack_26,pBVar12,(MethodInfo *)0x0);
          uVar27 = pVVar25->x;
          fVar28 = (float)uVar27 * fVar19;
          fVar29 = pVVar25->y * fVar19;
          fVar30 = pVVar25->z * fVar19;
          uStack_31 = CONCAT44(fVar29,fVar28);
          fStack_32 = fVar30;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
          if (pvVar18 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pBVar12,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar18,&uStack_31);
          pVVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              (&VStack_33,pBVar12,(MethodInfo *)0x0);
          uVar34 = pVVar25->y;
          uVar35 = pVVar25->x;
          fVar36 = pVVar25->z - fVar30;
          if ((float)uVar35 - fVar28 <= fVar23) {
            fVar23 = (float)uVar35 - fVar28;
          }
          if ((float)uVar34 - fVar29 <= fVar22) {
            fVar22 = (float)uVar34 - fVar29;
          }
          if (fVar36 <= fVar6) {
            fVar6 = fVar36;
          }
          pVVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              (aVStack_37,pBVar12,(MethodInfo *)0x0);
          uVar38 = pVVar25->y;
          uVar39 = pVVar25->x;
          fVar30 = pVVar25->z + fVar30;
          if (fVar21 <= (float)uVar39 + fVar28) {
            fVar21 = (float)uVar39 + fVar28;
          }
          if (fVar20 <= (float)uVar38 + fVar29) {
            fVar20 = (float)uVar38 + fVar29;
          }
          if (fVar5 <= fVar30) {
            fVar5 = fVar30;
          }
          pp_Var31 = pp_Var31 + 1;
        }
        pMVar13 = (this->fields)._._._.owner;
        if (pMVar13 != (MVPickupOwner *)0x0) {
          pMVar14 = (pMVar13->fields)._.worldObjectParent;
          if (pMVar14 == (MVWorldObjectClient *)0x0) {
            return;
          }
          bVar15 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if ((pMVar14->klass->_1).naturalAligment < bVar15) {
            return;
          }
          if ((MVAvatarLocal__Class *)(pMVar14->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
              TypeInfo__MVAvatarLocal) {
            return;
          }
          pBVar12 = (this->fields).costumeTriggerCollider;
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
          if (pBVar12 != (BoxCollider *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pBVar12->fields)._._._.m_CachedPtr != (void *)0x0) {
              pMVar16 = pMVar14[1].fields.group;
              if ((pMVar16 == (MVGroup *)0x0) ||
                 (pCVar17 = *(ColliderCollection **)&(pMVar16->fields)._._.position,
                 pCVar17 == (ColliderCollection *)0x0)) goto code_?;
              Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                        (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0
                        );
              pBVar12 = (this->fields).costumeTriggerCollider;
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
                        ((Object_1 *)pBVar12,0.0,(MethodInfo *)0x0);
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CVar40._.m_CachedPtr = (this->fields)._._._._._._._;
          if (CVar40._.m_CachedPtr == (void *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
          pvVar18 = (void *)(*pcRam_?)(CVar40._.m_CachedPtr);
          pGVar7 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar18,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                              );
          if (pGVar7 != (GameObject *)0x0) {
            pBVar12 = (BoxCollider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar7,
                                 UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                                );
            bVar41 = iRam_? != 0;
            (this->fields).costumeTriggerCollider = pBVar12;
            if (bVar41) {
              uVar1 = (uint)((ulonglong)&(this->fields).costumeTriggerCollider >> 0xc);
              uVar42 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
              do {
                uVar43 = *(ulonglong *)(uVar42 * 8 + 0xADDR);
                puVar44 = (ulonglong *)(uVar42 * 8 + 0xADDR);
                LOCK();
                bVar41 = uVar43 == *puVar44;
                if (bVar41) {
                  *puVar44 = uVar43 | 1L << (uVar1 & 0x3f);
                }
                UNLOCK();
              } while (!bVar41);
            }
            pGVar7 = (this->fields)._.cubeModelObject;
            if (pGVar7 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar18 = (pGVar7->fields)._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar7,(MethodInfo *)0x0);
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
              pvVar18 = (void *)(*pcRam_?)(pvVar18);
              pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar18,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pOVar9 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_26.x = 0.0;
                VStack_26.y = 0.0;
                VStack_26.z = 0.0;
                pOVar10 = pOVar9[1].klass;
                if (pOVar10 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
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
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                CVar40._.m_CachedPtr = (this->fields)._._._._._._._;
                if (CVar40._.m_CachedPtr == (void *)0x0) goto code_?;
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
                pvVar18 = (void *)(*pcRam_?)(CVar40._.m_CachedPtr);
                pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar18,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                if (pOVar9 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_31 = 0;
                  fStack_32 = 0.0;
                  pOVar10 = pOVar9[1].klass;
                  if (pOVar10 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
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
                  fVar19 = VStack_26.x / (float)uStack_31;
                  pBVar12 = (this->fields).costumeTriggerCollider;
                  fVar6 = (fVar5 - fVar6) * fVar19;
                  if (pBVar12 == (BoxCollider *)0x0) {
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  VStack_26.y = (fVar20 - fVar22) * fVar19;
                  VStack_26.x = (fVar21 - fVar23) * fVar19;
                  VStack_26.z = fVar6;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
                  if (pvVar18 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pBVar12,(MethodInfo *)0x0);
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
                  (*pcRam_?)(pvVar18);
                  pBVar12 = (this->fields).costumeTriggerCollider;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar45 = TypeInfo__UnityEngine__Vector3->static_fields;
                  if (pBVar12 != (BoxCollider *)0x0) {
                    uStack_31._0_4_ = (pVVar45->zeroVector).x;
                    uStack_31._4_4_ = (pVVar45->zeroVector).y;
                    fStack_32 = (pVVar45->zeroVector).z;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::BoxCollider>_UnityEngine__BoxCollider_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
                    if (pvVar18 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pBVar12,(MethodInfo *)0x0)
                      ;
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
                    (*pcRam_?)(pvVar18);
                    pBVar12 = (this->fields).costumeTriggerCollider;
                    if (pBVar12 != (BoxCollider *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
                      if (pvVar18 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pBVar12,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      {
                        uVar11 = func_?(&UNK_?);
                        FUN_?(uVar11,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pvVar18);
                      pBVar12 = (this->fields).costumeTriggerCollider;
                      if (pBVar12 != (BoxCollider *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar18 = (pBVar12->fields)._._._.m_CachedPtr;
                        if (pvVar18 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pBVar12,(MethodInfo *)0x0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcVar8 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)
                           ) {
                          uVar11 = func_?(&UNK_?);
                          FUN_?(uVar11,0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcRam_? = pcVar8;
                        (*pcRam_?)(pvVar18,1);
                        pMVar16 = pMVar14[1].fields.group;
                        if ((pMVar16 != (MVGroup *)0x0) &&
                           (pCVar17 = *(ColliderCollection **)&(pMVar16->fields)._._.position,
                           pCVar17 != (ColliderCollection *)0x0)) {
                          Assets::Scripts::Tools::ColliderCollection::
                          ColliderCollection_SetActiveCollider
                                    (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,
                                     (MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          CVar40._.m_CachedPtr = (this->fields)._._._._._._._;
                          if (CVar40._.m_CachedPtr != (void *)0x0) {
                            pcVar8 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar8 = (code *)FUN_?(&UNK_?),
                               pcVar8 == (code *)0x0)) {
                              uVar11 = func_?(&UNK_?);
                              FUN_?(uVar11,0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pcRam_? = pcVar8;
                            pvVar18 = (void *)(*pcRam_?)(CVar40._.m_CachedPtr);
                            transfrom = (Transform *)
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal
                                        ::Unmarshal_UnmarshalUnityObject
                                                  (pvVar18,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                            layerName = StringLiteral_Player;
                            iVar46 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                     LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                            layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                    LayerMask_NameToLayer(layerName,(MethodInfo *)0x0);
                            LayerUtil::LayerUtil_SetLayerRecursively_2
                                      (transfrom,(LayerMask)(1 << ((byte)iVar46 & 0x1f)),layer,
                                       (MethodInfo *)0x0);
                            return;
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)this,(MethodInfo *)0x0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                    }
                  }
                  FUN_?();
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnDestroy
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnLocalPlayerTeamChanged;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__PickupItemCostume__OnLocalPlayerTeamChanged__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
    (pMVar3->fields).OnLocalPlayerTeamChanged = (Action *)0x0;
  }
  else {
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?(pAVar5,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnLocalPlayerTeamChanged = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerTeamChanged >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar11 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar11 != 0) {
    bVar12 = iRam_? != 0;
    *(PickupItemCostume **)(lVar11 + 0x10) = this;
    if (bVar12) {
      uVar7 = (uint)(lVar11 + 0x10U >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    uVar7 = 0;
    lVar13 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar14 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar14 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar14->max_length <= (int)uVar7) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar14 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar14 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar14->max_length <= uVar7) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar11 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar14->vector + lVar13 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar11);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar11 + 0x18)
             = match;
        func_?(lVar11 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 8;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  this_00 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
  if (this_00 != (MVAvatarLocal *)0x0) {
    bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatarLocal)) {
      iVar3 = (this_00->fields).defaultBaseMaxHealth;
      pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) {
code_?:
        FUN_?();
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
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    avatar = (MVAvatarRemote *)(pMVar1->fields)._.worldObjectParent;
    if (avatar != (MVAvatarRemote *)0x0) {
      bVar2 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
      if ((bVar2 <= (avatar->klass->_1).naturalAligment) &&
         ((MVAvatarRemote__Class *)(avatar->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVAvatarRemote)) {
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        PickupItemCostume_CalculateRemoteAvatarUIVisibility
                  (this,(pPVar3->fields).isPlayerInvisible,avatar,(MethodInfo *)0x0);
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


/* Void OnPickupNewEditableItem() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnPickupNewEditableItem
               (PickupItemCostume *this,MethodInfo *method)

{
  PickupItemEditable::PickupItemEditable_OnCubeModelStateChanged
            ((PickupItemEditable *)this,(MethodInfo *)0x0);
  PickupItemCostume_OnArcTrailStateChanged(this,(MethodInfo *)0x0);
  PickupItemCostume_OnCollisionStateChanged(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    avatar = (MVAvatar *)(pMVar1->fields)._.worldObjectParent;
    if (avatar != (MVAvatar *)0x0) {
      bVar2 = (TypeInfo__MVAvatar->_1).naturalAligment;
      if ((bVar2 <= (avatar->klass->_1).naturalAligment) &&
         ((MVAvatar__Class *)(avatar->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVAvatar)) {
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        PickupItemCostume_SetAvatarInvisibility
                  (this,(pPVar3->fields).isPlayerInvisible,avatar,(MethodInfo *)0x0);
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


/* Void OnSpeedStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnSpeedStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pIVar4 = pMVar2[1].fields.interactionDataHandlerBase;
        if (pIVar4 != (InteractionDataHandlerBase *)0x0) {
          fVar5 = *(float *)((longlong)&pIVar4[1].fields._._.m_CancellationTokenSource + 4);
          pPVar6 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar6 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if (fVar5 == (float)(int)(pPVar6->fields).movementSpeed) {
              return;
            }
            this_00 = (AvatarMotor *)pMVar2[1].fields.interactionDataHandlerBase;
            pPVar6 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar6 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
               (this_00 != (AvatarMotor *)0x0)) {
              (this_00->fields).walkSpeedBase = (float)(int)(pPVar6->fields).movementSpeed;
              AvatarMotor::AvatarMotor_HandleMovementBoost(this_00,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnStateChanged
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  PickupItemEditable::PickupItemEditable_OnStateChanged
            ((PickupItemEditable *)this,newState,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  this_00 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
  if (this_00 != (MVAvatarLocal *)0x0) {
    bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatarLocal__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVAvatarLocal)) {
      iVar3 = (this_00->fields).defaultBaseMaxHealth;
      pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
      if (iVar3 != (int)(pPVar4->fields).health) {
        pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                  (this_00,(int)(pPVar4->fields).health,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar5 = (pMVar1->fields)._.worldObjectParent;
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
      if ((bVar2 <= (pMVar5->klass->_1).naturalAligment) &&
         ((MVAvatarLocal__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVAvatarLocal)) {
        pIVar6 = pMVar5[1].fields.interactionDataHandlerBase;
        if (pIVar6 != (InteractionDataHandlerBase *)0x0) {
          fVar7 = *(float *)((longlong)&pIVar6[1].fields._._.m_CancellationTokenSource + 4);
          pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if (fVar7 == (float)(int)(pPVar4->fields).movementSpeed) {
              return;
            }
            this_01 = (AvatarMotor *)pMVar5[1].fields.interactionDataHandlerBase;
            pPVar4 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
               (this_01 != (AvatarMotor *)0x0)) {
              (this_01->fields).walkSpeedBase = (float)(int)(pPVar4->fields).movementSpeed;
              AvatarMotor::AvatarMotor_HandleMovementBoost(this_01,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetAvatarInvisibility(Boolean, MVAvatar) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetAvatarInvisibility
               (PickupItemCostume *this,bool isInvisible,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) {
    if ((pMVar1->fields).forceHidden != isInvisible) {
      (pMVar1->fields).forceHidden = isInvisible;
      (pMVar1->fields).visible = isInvisible ^ 1;
      (pMVar1->fields).shadowVisible = isInvisible ^ 1;
      MVBody::MVBody_UpdateVisibility(pMVar1,(MethodInfo *)0x0);
    }
    pMVar1 = (avatar->fields).body;
    if (((pMVar1 != (MVBody *)0x0) &&
        (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
       (this_00 = (pMVar2->fields).avatarBlobShadowController,
       this_00 != (AvatarBlobShadowController *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this_00->fields).forceHidden = isInvisible;
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      aiStackX_18[0] =
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           _LightQualityLevel_k__BackingField;
      pOVar3 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_18);
      AvatarBlobShadowController::AvatarBlobShadowController_OnQualityLevelChanged
                (this_00,pOVar3,(MethodInfo *)0x0);
      bVar4 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
      if (((avatar->klass->_1).naturalAligment < bVar4) ||
         ((MVAvatarRemote__Class *)(avatar->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVAvatarRemote)) {
        avatar = (MVAvatar *)0x0;
      }
      else {
        avatar_00 = (MVAvatarRemote *)0x0;
        if ((MVAvatarRemote__Class *)
            (avatar->klass->_1).typeHierarchy
            [(ulonglong)(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] ==
            TypeInfo__MVAvatarRemote) {
          avatar_00 = (MVAvatarRemote *)avatar;
        }
        PickupItemCostume_CalculateRemoteAvatarUIVisibility
                  (this,isInvisible,avatar_00,(MethodInfo *)0x0);
      }
      uVar5 = 0;
      if (isInvisible == 0) {
        return;
      }
      this_01 = (this->fields)._.cubeModelParent;
      if ((this_01 != (Transform *)0x0) &&
         (pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                   Component_GetComponentsInChildren
                             ((Component *)this_01,
                              UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                             ), pOVar6 != (Object__Array *)0x0)) {
        ppOVar7 = pOVar6->vector;
        for (; (int)uVar5 < (int)pOVar6->max_length; uVar5 = uVar5 + 1) {
          if ((uint)pOVar6->max_length <= uVar5) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pOVar3 = *ppOVar7;
          if (pOVar3 == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar9 = pOVar3[1].klass;
          if (pOVar9 == (Object__Class *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar3,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pOVar9);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar9 = pOVar3[1].klass;
          if (pOVar9 == (Object__Class *)0x0) goto code_?;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          pvVar11 = (void *)(*pcRam_?)(pOVar9);
          this_02 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar11,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                              );
          layerName = StringLiteral_Player;
          if (avatar != (MVAvatar *)0x0) {
            layerName = StringLiteral_Default;
          }
          value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (layerName,(MethodInfo *)0x0);
          if (this_02 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (this_02,value,(MethodInfo *)0x0);
          ppOVar7 = ppOVar7 + 1;
        }
        obj = (this->fields).trailRenderer;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar12 = (this->fields)._._Configuration_k__BackingField;
        if (pPVar12 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
          bVar4 = (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment;
          if (((pPVar12->klass->_1).naturalAligment < bVar4) ||
             ((pPVar12->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration)) {
            FUN_?(pPVar12,TypeInfo__PickupItemCostume__CostumeConfiguration);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar13 = *(undefined1 *)((longlong)&pPVar12[1].monitor + 6);
          if (obj != (TrailRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar11 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar11 != (void *)0x0) {
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcRam_? = pcVar8;
              (*pcRam_?)(pvVar11,uVar13);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
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


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetConfiguration
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
         (pSVar4 = (String *)
                    Extensions::Extensions_GetValueOrDefault_3
                              (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                               System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                              ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
        bVar5 = iRam_? != 0;
        (pPVar1->fields)._.name = pSVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
           (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Health,(pPVar2->fields).health,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
          (pPVar1->fields).health = fVar10;
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
             (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_MovementSpeed,
                                  (pPVar2->fields).movementSpeed,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
            (pPVar1->fields).movementSpeed = fVar10;
            pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
               (fVar10 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_TrailLength,(pPVar2->fields).trailLength,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
              (pPVar1->fields).trailLength = fVar10;
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
                 (bVar11 = Extensions::Extensions_GetValueOrDefault
                                    (itemData,StringLiteral_PlayerInvisible,
                                     (pPVar2->fields).isPlayerInvisible,
                                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                    ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
                (pPVar1->fields).isPlayerInvisible = bVar11;
                pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
                   (bVar11 = Extensions::Extensions_GetValueOrDefault
                                      (itemData,StringLiteral_PlayersCanCollide,
                                       (pPVar2->fields).playersCanCollide,
                                       bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                      ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0)) {
                  (pPVar1->fields).playersCanCollide = bVar11;
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
                     (bVar11 = Extensions::Extensions_GetValueOrDefault
                                        (itemData,StringLiteral_TrailEnabled,
                                         (pPVar2->fields).isTrailEnabled,
                                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                        ), pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0))
                  {
                    (pPVar1->fields).isTrailEnabled = bVar11;
                    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      CStack_12.r = (pPVar2->fields).trailColor.r;
                      CStack_12.g = (pPVar2->fields).trailColor.g;
                      CStack_12.b = (pPVar2->fields).trailColor.b;
                      CStack_12.a = (pPVar2->fields).trailColor.a;
                      pCVar13 = Extensions::Extensions_GetColorOrDefault
                                          (&CStack_14,itemData,StringLiteral_TrailColor,&CStack_12,
                                           (MethodInfo *)0x0);
                      fVar10 = pCVar13->g;
                      fVar15 = pCVar13->b;
                      fVar16 = pCVar13->a;
                      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        (pPVar1->fields).trailColor.r = pCVar13->r;
                        (pPVar1->fields).trailColor.g = fVar10;
                        (pPVar1->fields).trailColor.b = fVar15;
                        (pPVar1->fields).trailColor.a = fVar16;
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
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* PickupItemCostume+CostumeConfiguration get_Configuration() */

PickupItemCostume_CostumeConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_get_Configuration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemCostume_CostumeConfiguration *)(this->fields)._._Configuration_k__BackingField
  ;
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    bVar2 = (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar2) ||
       ((pPVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration)) {
      FUN_?(pPVar1,TypeInfo__PickupItemCostume__CostumeConfiguration);
      pcVar3 = (code *)swi(3);
      pPVar1 = (PickupItemCostume_CostumeConfiguration *)(*pcVar3)();
      return pPVar1;
    }
  }
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  pCVar6 = (Color *)(*pcVar5)();
  return pCVar6;
}

