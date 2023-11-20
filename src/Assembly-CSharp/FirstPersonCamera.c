
/* Void ActivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ActivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_);
    func_?(&
                    MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (pMVar1 == (MVAvatarLocal *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pPVar2 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    bVar3 = PickupItem::PickupItem_get_FirstPersonCapable(pPVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      PickupItem::PickupItem_EnterFirstPersonView(pPVar2,(MVCameraBase *)this,(MethodInfo *)0x0);
      pMVar1 = (this->fields).localAvatar;
      pFVar4 = (this->fields).weaponBob;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        pPVar2 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
        if (pPVar2 != (PickupItem *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar2,(MethodInfo *)0x0);
          if (pFVar4 != (FirstPersonWeaponBob *)0x0) {
            (pFVar4->fields).weapon = this_02;
            func_?();
            if (this_02 != (Transform *)0x0) {
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition
                                  ((Vector3 *)&stack0xffffffec,this_02,(MethodInfo *)0x0);
              fVar6 = pVVar5->y;
              fVar7 = pVVar5->z;
              (pFVar4->fields).weaponPosition.x = pVVar5->x;
              (pFVar4->fields).weaponPosition.y = fVar6;
              (pFVar4->fields).weaponPosition.z = fVar7;
              pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  ((Quaternion *)&stack0xffffffe8,this_02,(MethodInfo *)0x0);
              fVar7 = pQVar8->y;
              fVar6 = pQVar8->z;
              fVar9 = pQVar8->w;
              (pFVar4->fields).weaponRotation.x = pQVar8->x;
              (pFVar4->fields).weaponRotation.y = fVar7;
              (pFVar4->fields).weaponRotation.z = fVar6;
              (pFVar4->fields).weaponRotation.w = fVar9;
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    FirstPersonCamera_HideBody(this,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields).localAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (this_00 = (pMVar1->fields)._.body, this_00 == (MVBody *)0x0)) goto code_?;
    MVBody::MVBody_ToggleBlinking(this_00,0,(MethodInfo *)0x0);
    if ((this->fields).haveHiddenVehicle != 0) {
      FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
    }
    pMVar10 = TypeInfo__MVPickupOwner__OnEquipItemDelegate;
    pMVar1 = (this->fields).localAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar11 = (pMVar1->fields).pickupOwner;
    if (pAVar11 == (AvatarPickupOwner *)0x0) goto code_?;
    a = (pAVar11->fields)._.onEquipItem;
    this_03 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_03,(Object *)this,
               MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
               (MethodInfo *)0x0);
    pDVar12 = (Delegate__Array *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate__Array *)0x0) {
      (a->fields)._.delegates = (Delegate__Array *)0x0;
code_?:
      func_?();
      pAVar13 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
      pMVar1 = (this->fields).localAvatar;
      if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
      a_00 = (pMVar1->fields).OnDamageTaken;
      object = (pMVar10->_0).properties;
      pAVar14 = (Action_3_Single_Object_ByteEnum_ *)func_?();
      mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
                (pAVar14,(Object *)object,
                 MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
                 ,(MethodInfo *)0x0);
      pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a_00,(Delegate *)pAVar14,(MethodInfo *)0x0);
      if (pDVar15 == (Delegate *)0x0) {
        a_00[5].fields._._.m_target = (Object *)0x0;
code_?:
        func_?();
        pAVar16 = TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>;
        pIVar17 = pAVar13->interfaceOffsets;
        if (pIVar17 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto code_?;
        a_01 = pIVar17[0x2a].interfaceType;
        object_00 = (pAVar13->_0).fields;
        pAVar14 = (Action_3_Single_Object_ByteEnum_ *)func_?();
        mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::
        Action_3_Single_Object_ByteEnum___ctor
                  (pAVar14,(Object *)object_00,
                   MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   ,(MethodInfo *)0x0);
        pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a_01,(Delegate *)pAVar14,(MethodInfo *)0x0);
        if (pDVar15 == (Delegate *)0x0) {
          a_01->vtable[0x12].method = (MethodInfo *)0x0;
code_?:
          func_?();
          this_01 = (pAVar16->_0).events;
          if (this_01 != (EventInfo *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_01,1,(MethodInfo *)0x0);
            this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_04 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_StartTransitionCam
                        (this_04,0.3,0,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        pMVar18 = (MethodInfo *)func_?();
        if (pMVar18 != (MethodInfo *)0x0) {
          a_01->vtable[0x12].method = pMVar18;
          iVar19 = func_?();
          if (iVar19 != 0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      pOVar20 = (Object *)func_?();
      if (pOVar20 != (Object *)0x0) {
        a_00[5].fields._._.m_target = pOVar20;
        iVar19 = func_?();
        if (iVar19 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pDVar21 = (Delegate__Array *)0x0;
    if ((MVPickupOwner_OnEquipItemDelegate__Class *)pDVar12->klass ==
        TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pDVar21 = pDVar12;
    }
    if (pDVar21 == (Delegate__Array *)0x0) goto code_?;
    (a->fields)._.delegates = pDVar21;
    pDVar21 = (Delegate__Array *)0x0;
    if ((MVPickupOwner_OnEquipItemDelegate__Class *)pDVar12->klass ==
        TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
      pDVar21 = pDVar12;
    }
    if (pDVar21 != (Delegate__Array *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void DeactivateFirstPerson() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_DeactivateFirstPerson
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&
                    MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_);
    func_?(&
                    MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if ((pMVar1 == (MVAvatarLocal *)0x0) ||
     (this_05 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0),
     this_05 == (PickupItem *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    PickupItem::PickupItem_LeaveFirstPersonView(this_05,(MethodInfo *)0x0);
    FirstPersonCamera_HideBody(this,0,(MethodInfo *)0x0);
    pMVar1 = (this->fields).localAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (this_00 = (pMVar1->fields)._.body, this_00 == (MVBody *)0x0)) goto code_?;
    MVBody::MVBody_ToggleBlinking(this_00,1,(MethodInfo *)0x0);
    if ((this->fields).haveHiddenVehicle != 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
      if (pLVar2 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
        iVar3 = (pLVar2->fields)._size;
        piVar4 = &(pLVar2->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar2->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pMVar1 = (this->fields).localAvatar;
        if ((pMVar1 != (MVAvatarLocal *)0x0) && (pMVar5 != (MVWorldObjectClientManager *)0x0)) {
          id = MVWorldObjectClientManager::
               MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                         (pMVar5,(pMVar1->fields)._._._._.id,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar5 != (MVWorldObjectClientManager *)0x0) &&
             ((pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar5,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObject *)0x0 &&
              (this_01 = pMVar6[1].fields.inputLinkRefs,
              this_01 != (List_1_MV_WorldObject_Link_ *)0x0)))) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
            GameObject_GetComponentsInChildren_5
                      ((GameObject *)this_01,0,
                       (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                       (this->fields).vehiclesHiddenMeshRenderers,
                       void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                      );
            iVar3 = 0;
            pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
            while (pLVar2 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
              if ((pLVar2->fields)._size <= iVar3) goto code_?;
              this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (this->fields).vehiclesHiddenMeshRenderers;
              if ((this_02 ==
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                 (this_06 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (this_02,iVar3,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                      ), this_06 == (RegexCharClass_SingleRange)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                        ((Renderer *)this_06,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
              iVar3 = iVar3 + 1;
              pLVar2 = (this->fields).vehiclesHiddenMeshRenderers;
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    pMVar1 = (this->fields).localAvatar;
    if ((pMVar1 == (MVAvatarLocal *)0x0) ||
       (pAVar7 = (pMVar1->fields).pickupOwner, pAVar7 == (AvatarPickupOwner *)0x0))
    goto code_?;
    pMVar8 = (pAVar7->fields)._.onEquipItem;
    this_07 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVPickupOwner__OnEquipItemDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_07,(Object *)this,
               MethodInfo__FirstPersonCamera__MoveItemToFirstpersonView_PickupItem_,
               (MethodInfo *)0x0);
    pMVar8 = (MVPickupOwner_OnEquipItemDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar8,(Delegate *)this_07,(MethodInfo *)0x0);
    if (pMVar8 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
      (pAVar7->fields)._.onEquipItem = (MVPickupOwner_OnEquipItemDelegate *)0x0;
    }
    else {
      pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) {
        func_?();
        goto code_?;
      }
      (pAVar7->fields)._.onEquipItem = pMVar9;
      pMVar9 = (MVPickupOwner_OnEquipItemDelegate *)0x0;
      if (pMVar8->klass == TypeInfo__MVPickupOwner__OnEquipItemDelegate) {
        pMVar9 = pMVar8;
      }
      if (pMVar9 == (MVPickupOwner_OnEquipItemDelegate *)0x0) goto code_?;
    }
    func_?();
    object_00 = _UNK_?;
    pMVar1 = (this->fields).localAvatar;
    if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
    pAVar10 = (pMVar1->fields).OnDamageTaken;
    pAVar11 = (Action_3_Single_Object_ByteEnum_ *)
              func_?(
                             TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                             );
    mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
              (pAVar11,object_00,
               MethodInfo__HealingIndicator__ShowHealing_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar10,(Delegate *)pAVar11,(MethodInfo *)0x0);
    if (pDVar12 == (Delegate *)0x0) {
      (pMVar1->fields).OnDamageTaken =
           (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0;
code_?:
      func_?();
      object = _UNK_?;
      if (_UNK_? == 0) goto code_?;
      pDVar12 = *(Delegate **)(_UNK_? + 0x150);
      iVar3 = _UNK_?;
      pAVar11 = (Action_3_Single_Object_ByteEnum_ *)
                func_?(
                               TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>
                               );
      mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
                (pAVar11,(Object *)object,
                 MethodInfo__DamageIndicator__ShowDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                 ,(MethodInfo *)0x0);
      pDVar12 = mscorlib.dll::System::Delegate::Delegate_Remove
                          (pDVar12,(Delegate *)pAVar11,(MethodInfo *)0x0);
      if (pDVar12 == (Delegate *)0x0) {
        *(undefined4 *)(iVar3 + 0x150) = 0;
code_?:
        func_?();
        if ((_UNK_? != (DamageIndicator *)0x0) &&
           (DamageIndicator::DamageIndicator_ResetIndicators(_UNK_?,(MethodInfo *)0x0),
           pBVar13 = _UNK_?, _UNK_? != (Behaviour *)0x0)) {
          bVar14 = 0;
          this = (FirstPersonCamera *)0x0;
          do {
            pvVar15 = pBVar13[5].fields._._.m_CachedPtr;
            if (pvVar15 == (void *)0x0) goto code_?;
            if (*(uint *)((int)pvVar15 + 0xc) <= (uint)bVar14) goto code_?;
            iVar3 = *(int *)((int)pvVar15 + (uint)bVar14 * 4 + 0x10);
            if ((iVar3 == 0) ||
               (this_03 = *(Behaviour **)(iVar3 + 0xc), this_03 == (Behaviour *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (this_03,0,(MethodInfo *)0x0);
            bVar14 = this._3_1_ + 1;
            this = (FirstPersonCamera *)((uint)bVar14 << 0x18);
          } while (bVar14 < 3);
          if ((((_UNK_? != (Behaviour *)0x0) &&
               (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (_UNK_?,0,(MethodInfo *)0x0), _UNK_? != 0)) &&
              (*(int *)(_UNK_? + 0xe0) != 0)) &&
             (((this_04 = *(AvatarFader **)(*(int *)(_UNK_? + 0xe0) + 0x30),
               this_04 != (AvatarFader *)0x0 &&
               (AvatarFader::AvatarFader_SetTransparency(this_04,0.0,(MethodInfo *)0x0),
               _UNK_? != 0)) &&
              ((*(int *)(_UNK_? + 0xe0) != 0 &&
               (pBVar13 = *(Behaviour **)(*(int *)(_UNK_? + 0xe0) + 0x30),
               pBVar13 != (Behaviour *)0x0)))))) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar13,1,(MethodInfo *)0x0);
            this_08 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (this_08 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_StartTransitionCam
                        (this_08,0.25,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      iVar16 = func_?();
      if (iVar16 != 0) {
        *(int *)(iVar3 + 0x150) = iVar16;
        iVar3 = func_?();
        if (iVar3 != 0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pAVar10 = (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)func_?();
    if (pAVar10 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
      (pMVar1->fields).OnDamageTaken = pAVar10;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    (*(code *)(this->klass->vtable).UpdateCamera.method)(this);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideBlinking(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBlinking
               (FirstPersonCamera *this,bool shouldHideBlinking,MethodInfo *method)

{
  pMVar1 = (this->fields).localAvatar;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) {
    pMVar3 = (pMVar2->fields).bodyObject;
    if ((pMVar3 != (MVBodyObject *)0x0) &&
       (pAVar4 = (pMVar3->fields).avatarBlinker, pAVar4 != (AvatarBlinker *)0x0)) {
      (pAVar4->fields)._.visible = shouldHideBlinking ^ 1;
      return;
    }
  }
  puStack_5 = &stack0xfffffffc;
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HideBody(Boolean) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideBody
               (FirstPersonCamera *this,bool shouldHideBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&TypeInfo__UnityEngine__Renderer);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if ((((pMVar1 == (MVAvatarLocal *)0x0) ||
       (this_00 = (pMVar1->fields)._.body, this_00 == (MVBody *)0x0)) ||
      (this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
      this_01 == (MethodCall *)0x0)) ||
     (this_02 = (Component *)
                mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                          (this_01,1,(MethodInfo *)0x0), this_02 == (Component *)0x0))
  goto code_?;
  pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     (this_02,
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
  sVar3 = 0;
  if (unaff_SI == '\0') {
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pOVar2->max_length <= (int)sVar3) {
        return;
      }
      if (pOVar2->max_length <= (uint)(int)sVar3) break;
      this_03 = (Renderer *)pOVar2->vector[sVar3];
      if (this_03 == (Renderer *)0x0) goto code_?;
      if (((this_03->klass->_1).naturalAligment <
           (TypeInfo__UnityEngine__Renderer->_1).naturalAligment) ||
         ((this_03->klass->_1).typeHierarchy
          [(TypeInfo__UnityEngine__Renderer->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                (this_03,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
      sVar3 = sVar3 + 1;
    }
  }
  else {
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    while( true ) {
      if ((int)pOVar2->max_length <= (int)sVar3) {
        return;
      }
      if (pOVar2->max_length <= (uint)(int)sVar3) break;
      this_03 = (Renderer *)pOVar2->vector[sVar3];
      if (this_03 == (Renderer *)0x0) goto code_?;
      if (((this_03->klass->_1).naturalAligment <
           (TypeInfo__UnityEngine__Renderer->_1).naturalAligment) ||
         ((this_03->klass->_1).typeHierarchy
          [(TypeInfo__UnityEngine__Renderer->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__Renderer)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                (this_03,ShadowCastingMode__Enum_ShadowsOnly,(MethodInfo *)0x0);
      sVar3 = sVar3 + 1;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  func_?(this_03,TypeInfo__UnityEngine__Renderer);
  goto code_?;
}


/* Void HideVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_HideVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
  if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < iVar2) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar5 = (this->fields).localAvatar;
    if ((pMVar5 != (MVAvatarLocal *)0x0) && (pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar4,(pMVar5->fields)._._._._.id,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
         ((pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar4,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObject *)0x0 &&
          (this_00 = pMVar6[1].fields.inputLinkRefs, this_00 != (List_1_MV_WorldObject_Link_ *)0x0))
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_5
                  ((GameObject *)this_00,0,
                   (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        iVar2 = 0;
        pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        while (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          if ((pLVar1->fields)._size <= iVar2) {
            return;
          }
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).vehiclesHiddenMeshRenderers;
          if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (this_01,iVar2,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                     ), this_02 == (RegexCharClass_SingleRange)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    ((Renderer *)this_02,ShadowCastingMode__Enum_ShadowsOnly,(MethodInfo *)0x0);
          iVar2 = iVar2 + 1;
          pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Initialize_1
               (FirstPersonCamera *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
      pfVar3 = (float *)func_?(auStack_4,&stack0xffffffe0);
      (this->fields).targetRotation.x = *pfVar3;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                    ((Quaternion *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
          iVar5 = func_?(auStack_4,&stack0xffffffe0);
          (this->fields).targetRotation.y = *(float *)(iVar5 + 4);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar1 != (MainCameraManager *)0x0) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pMVar1,(MethodInfo *)0x0);
            if (this_01 != (Transform *)0x0) {
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localRotation
                                 ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar2,*pQVar6,(MethodInfo *)0x0);
                this_00 = (this->fields).modifierIndicator;
                if ((this_00 != (ModifierIndicator *)0x0) &&
                   (pMVar7 = (this->fields).localAvatar, pMVar7 != (MVAvatarLocal *)0x0)) {
                  (this_00->fields).localInteractable =
                       (MVInteractableBase *)(pMVar7->fields).interactableLocal;
                  func_?(&(this_00->fields).localInteractable);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this_00,1,(MethodInfo *)0x0);
                  pMVar7 = (this->fields).localAvatar;
                  if (pMVar7 != (MVAvatarLocal *)0x0) {
                    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar7,1.0,(MethodInfo *)0x0)
                    ;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    pFVar2 = (this->fields).weaponBob;
    if (((this_00 != (MVAvatarLocal *)0x0) &&
        (this_01 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)this_00,(MethodInfo *)0x0),
        this_01 != (PickupItem *)0x0)) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0),
       pFVar2 != (FirstPersonWeaponBob *)0x0)) {
      (pFVar2->fields).weapon = this_02;
      func_?();
      if (this_02 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        (pFVar2->fields).weaponPosition.x = pVVar3->x;
        (pFVar2->fields).weaponPosition.y = fVar4;
        (pFVar2->fields).weaponPosition.z = fVar5;
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffec,this_02,(MethodInfo *)0x0);
        fVar5 = pQVar6->y;
        fVar4 = pQVar6->z;
        fVar7 = pQVar6->w;
        (pFVar2->fields).weaponRotation.x = pQVar6->x;
        (pFVar2->fields).weaponRotation.y = fVar5;
        (pFVar2->fields).weaponRotation.z = fVar4;
        (pFVar2->fields).weaponRotation.w = fVar7;
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_OnDestroy
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).damageIndicator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pDVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (this->fields).damageIndicator;
    if (pDVar1 == (DamageIndicator *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pDVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pHVar4 = (this->fields).healingIndicator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pHVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pHVar4 = (this->fields).healingIndicator;
    if (pHVar4 == (HealingIndicator *)0x0) goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pHVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  pMVar5 = (this->fields).modifierIndicator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pMVar5,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  (this->fields).cameraOffset.y = (this->fields).cameraHeight;
  fVar3 = (this->fields).maxLookAngleDownward;
  fVar4 = fVar2;
  if ((fVar2 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
    fVar4 = fVar1;
  }
  (this->fields).maxLookAngleDownward = fVar4;
  fVar3 = (this->fields).maxLookAngleUpward;
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
    func_?(&TypeInfo__AvatarLocal);
    func_?(&TypeInfo__IAvatarCameraController);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).localAvatar;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_00 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (PickupItem *)0x0) {
      bVar2 = PickupItem::PickupItem_get_FirstPersonCapable(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pMVar1 = (this->fields).localAvatar;
        unaff_EDI = (Avatar *)0x0;
        if (pMVar1 != (MVAvatarLocal *)0x0) {
          unaff_EDI = (pMVar1->fields)._.avatar;
          if (unaff_EDI != (Avatar *)0x0) {
            pAVar3 = TypeInfo__AvatarLocal;
            if (((unaff_EDI->klass->_1).naturalAligment <
                 (TypeInfo__AvatarLocal->_1).naturalAligment) ||
               ((unaff_EDI->klass->_1).typeHierarchy
                [(TypeInfo__AvatarLocal->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__AvatarLocal)) goto code_?;
            pAVar4 = unaff_EDI[1].klass;
            uVar5 = (*(code *)(this->klass->vtable).get_CameraType.method)
                              (this,(this->klass->vtable).Awake.methodPtr);
            if (pAVar4 != (Avatar__Class *)0x0) {
              pIVar6 = (pAVar4->_0).image;
              uVar7 = 0;
              uVar8 = *(ushort *)((int)&pIVar6[4].nameNoExt + 2);
              pAStack9 = pAVar4;
              if (uVar8 != 0) {
                do {
                  if (*(IAvatarCameraController__Class **)(pIVar6[2].name + (uint)uVar7 * 8) ==
                      TypeInfo__IAvatarCameraController) {
                    pIVar6 = (pAVar4->_0).image;
                    pIStack10 = (IAvatarCameraController__Class *)uVar5;
                    (*(code *)(&pIVar6[5].customAttributeCount)
                              [*(int *)(pIVar6[2].name + (uint)uVar7 * 8 + 4) * 2])();
                    return;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar8);
              }
              pIStack10 = TypeInfo__IAvatarCameraController;
              puVar11 = (undefined4 *)func_?();
              pAStack9 = pAVar4;
              pIStack10 = (IAvatarCameraController__Class *)uVar5;
              (*(code *)*puVar11)();
              return;
            }
          }
        }
      }
      else {
        FirstPersonCamera_Initialize_1(this,(MethodInfo *)0x0);
        FirstPersonCamera_ActivateFirstPerson(this,(MethodInfo *)0x0);
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar12 != (MainCameraManager *)0x0) {
          pIStack10 = (IAvatarCameraController__Class *)(pMVar12->fields).protectedTransform;
          pAStack9 = (Avatar__Class *)cameraController;
          (*(code *)(this->klass->vtable).UpdateCamera.method)();
          return;
        }
      }
    }
  }
  func_?();
  pAVar3 = extraout_EDX;
code_?:
  func_?(unaff_EDI,pAVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowVehicle() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_ShowVehicle
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
  if (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    piVar3 = &(pLVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < iVar2) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar5 = (this->fields).localAvatar;
    if ((pMVar5 != (MVAvatarLocal *)0x0) && (pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (pMVar4,(pMVar5->fields)._._._._.id,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar4 != (MVWorldObjectClientManager *)0x0) &&
         ((pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar4,id,(MethodInfo *)0x0), pMVar6 != (MVWorldObject *)0x0 &&
          (this_00 = pMVar6[1].fields.inputLinkRefs, this_00 != (List_1_MV_WorldObject_Link_ *)0x0))
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_5
                  ((GameObject *)this_00,0,
                   (List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                   (this->fields).vehiclesHiddenMeshRenderers,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool__System__Collections__Generic__List<UnityEngine::MeshRenderer>_
                  );
        iVar2 = 0;
        pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        while (pLVar1 != (List_1_UnityEngine_MeshRenderer_ *)0x0) {
          if ((pLVar1->fields)._size <= iVar2) {
            return;
          }
          this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).vehiclesHiddenMeshRenderers;
          if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (this_01,iVar2,
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                     ), this_02 == (RegexCharClass_SingleRange)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                    ((Renderer *)this_02,ShadowCastingMode__Enum_On,(MethodInfo *)0x0);
          iVar2 = iVar2 + 1;
          pLVar1 = (this->fields).vehiclesHiddenMeshRenderers;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Suspend(MVCameraController) */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_Suspend
               (FirstPersonCamera *this,MVCameraController *camController,MethodInfo *method)

{
  FirstPersonCamera_DeactivateFirstPerson(this,(MethodInfo *)0x0);
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
      if ((this->fields).haveHiddenVehicle == 0) {
        FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
        (this->fields).haveHiddenVehicle = 1;
      }
      return;
    }
    pMVar1 = (this->fields).localAvatar;
    (this->fields).haveHiddenVehicle = 0;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      this_00 = (pMVar1->fields)._._._.transform;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                  ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
        iVar3 = func_?(auStack_4);
        uStack_5 = 0;
        auVar6._4_8_ = 0;
        auVar6._0_4_ = *(float *)(iVar3 + 4) * _UNK_?;
        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                 Quaternion_Internal_FromEulerRad
                           ((Quaternion *)&stack0xffffffe0,(Vector3)(auVar6 << 0x20),
                            (MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (this_00,*pQVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    pMVar1 = (this->fields).localAvatar;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      bVar2 = MVAvatarLocal::MVAvatarLocal_get_IsInVehicle(pMVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pMVar1 = (this->fields).localAvatar;
        (this->fields).haveHiddenVehicle = 0;
        if (pMVar1 == (MVAvatarLocal *)0x0) goto code_?;
        pTVar3 = (pMVar1->fields)._._._.transform;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar4 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                  ((Quaternion *)&stack0xffffffd0,pTVar4,(MethodInfo *)0x0);
        iVar5 = func_?();
        auVar6._4_8_ = 0;
        auVar6._0_4_ = *(float *)(iVar5 + 4) * _UNK_?;
        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffd0,(Vector3)(auVar6 << 0x20),
                             (MethodInfo *)0x0);
        if (pTVar3 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar3,*pQVar7,(MethodInfo *)0x0);
      }
      else if ((this->fields).haveHiddenVehicle == 0) {
        FirstPersonCamera_HideVehicle(this,(MethodInfo *)0x0);
        (this->fields).haveHiddenVehicle = 1;
      }
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pMVar1 = (this->fields).localAvatar;
      if (((pMVar1 != (MVAvatarLocal *)0x0) &&
          (pMVar8 = (pMVar1->fields)._.body, pMVar8 != (MVBody *)0x0)) &&
         (pTVar4 = (pMVar8->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
        uVar10 = pVVar9->x;
        uVar11 = pVVar9->y;
        uVar12 = (this->fields).cameraOffset.x;
        uVar13 = (this->fields).cameraOffset.y;
        if (pTVar3 != (Transform *)0x0) {
          value.y = (float)uVar13 + (float)uVar11;
          value.x = (float)uVar12 + (float)uVar10;
          value.z = (this->fields).cameraOffset.z + pVVar9->z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar3,value,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).__unknown.method)();
          this_00 = (this->fields).weaponBob;
          if (this_00 != (FirstPersonWeaponBob *)0x0) {
            FirstPersonWeaponBob::FirstPersonWeaponBob_Update(this_00,(MethodInfo *)0x0);
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this,(MVCameraController *)&UNK_?,
                       (ProtectedTransform *)this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_UpdateCameraPosition
               (FirstPersonCamera *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).localAvatar;
  if (((pMVar1 != (MVAvatarLocal *)0x0) &&
      (pMVar2 = (pMVar1->fields)._.body, pMVar2 != (MVBody *)0x0)) &&
     (this_00 = (pMVar2->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    uVar6 = (this->fields).cameraOffset.x;
    uVar7 = (this->fields).cameraOffset.y;
    if (this_01 != (Transform *)0x0) {
      value.y = (float)uVar5 + (float)uVar7;
      value.x = (float)uVar6 + (float)uVar4;
      value.z = (this->fields).cameraOffset.z + pVVar3->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FirstPersonCamera() */

void Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera__ctor
               (FirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).cameraOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).cameraOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).cameraHeight = 2.0;
  (this->fields).maxLookAngleDownward = 60.0;
  (this->fields).maxLookAngleUpward = 60.0;
  (this->fields).cameraOffset.z = 0.0;
  (this->fields).pitchSensitivity = 0.5;
  (this->fields).yawSensitivity = 0.5;
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x20,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_);
  (this->fields).vehiclesHiddenMeshRenderers = (List_1_UnityEngine_MeshRenderer_ *)this_00;
  func_?(&(this->fields).vehiclesHiddenMeshRenderers,this_00);
  (this->fields)._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::FirstPersonCamera::FirstPersonCamera_get_FieldOfView
                (FirstPersonCamera *this,MethodInfo *method)

{
  return _UNK_?;
}

