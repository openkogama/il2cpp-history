
/* Void HandlePointWeapon() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointWeapon
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarLimbManagerLocal;
  pMVar2 = (this->fields).mvAvatar;
  if ((pMVar2 != (MVAvatar *)0x0) &&
     (this_02 = (AvatarLimbManagerLocal *)(pMVar2->fields).limbManager, unaff_EDI = pAVar1,
     this_02 != (AvatarLimbManagerLocal *)0x0)) {
    if (((this_02->klass->_1).naturalAligment <
         (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
       ((this_02->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
    AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointingWeapon(this_02,(MethodInfo *)0x0);
    pMVar2 = (this->fields).mvAvatar;
    if (((pMVar2 != (MVAvatar *)0x0) && (this_00 = (pMVar2->fields).body, this_00 != (MVBody *)0x0))
       && (this_01 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0),
          this_01 != (MethodCall *)0x0)) {
      unaff_EDI = (AvatarLimbManagerLocal__Class *)
                  mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                            (this_01,2,(MethodInfo *)0x0);
      pPVar3 = (this->fields)._.currentItem;
      if ((pPVar3 != (PickupItem *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pPVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar4,(Object_1 *)unaff_EDI,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          return;
        }
        pPVar3 = (this->fields)._.currentItem;
        if ((pPVar3 != (PickupItem *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar4,(Transform *)unaff_EDI,0,(MethodInfo *)0x0);
          pPVar3 = (this->fields)._.currentItem;
          if ((pPVar3 != (PickupItem *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pPVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0
             )) {
            value.z = 0.7;
            value.x = -0.1;
            value.y = 0.3;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,value,(MethodInfo *)0x0);
            pPVar3 = (this->fields)._.currentItem;
            if (pPVar3 != (PickupItem *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pPVar3,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = (float)_UNK_?;
              euler.z = 1.7802358;
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                       Quaternion_Internal_FromEulerRad
                                 ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                          (pTVar4,*pQVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02,unaff_EDI);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandlePointWeaponOnlyNetworked() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointWeaponOnlyNetworked
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if ((pMVar1 != (MVAvatar *)0x0) &&
     (pAVar2 = (pMVar1->fields).limbManager, pAVar2 != (AvatarLimbManager *)0x0)) {
    if (((pAVar2->klass->_1).naturalAligment <
         (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
       ((pAVar2->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      pAStack_3 = TypeInfo__AvatarLimbManagerLocal;
      func_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = pAVar2[1].fields.OnAvatarRotate;
    if (pAVar5 != (Action *)0x0) {
      if (*(char *)&(pAVar5->fields)._._.data != '\0') {
        pvVar6 = (pAVar5->fields)._._.method_ptr;
        pvVar7 = (pAVar5->fields)._._.invoke_impl;
        (pAVar5->fields)._._.method_code = (pAVar5->fields)._._.extra_arg;
        pMVar8 = (MethodInfo_1 *)(pAVar5->fields)._._.m_target;
        (pAVar5->fields)._._.interp_method = pvVar6;
        (pAVar5->fields)._._.interp_invoke_impl = pvVar7;
        pAVar5[1].fields._._.extra_arg = (void *)0x3;
        (pAVar5->fields)._._.method_info = pMVar8;
      }
      return;
    }
  }
  uVar9 = func_?(&pAStack_3);
  func_?(uVar9);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandlePointing(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointing
               (AvatarPickupOwner *this,bool inputFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    cRam_? = '\x01';
  }
  if (inputFire != 0) {
    pMVar1 = (this->fields).mvAvatar;
    if ((pMVar1 == (MVAvatar *)0x0) ||
       (this_00 = (AvatarLimbManagerLocal *)(pMVar1->fields).limbManager,
       unaff_ESI = TypeInfo__AvatarLimbManagerLocal, this_00 == (AvatarLimbManagerLocal *)0x0)) {
      func_?();
      this_00 = extraout_EDX;
    }
    else if (((TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment <=
              (this_00->klass->_1).naturalAligment) &&
            ((this_00->klass->_1).typeHierarchy
             [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] ==
             (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing(this_00,(MethodInfo *)0x0);
      return;
    }
    func_?(this_00,unaff_ESI);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void HandleSetHandEquippableItem(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandleSetHandEquippableItem
               (AvatarPickupOwner *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if ((pMVar1 != (MVAvatar *)0x0) &&
     (pAVar2 = (pMVar1->fields).limbManager, pAVar2 != (AvatarLimbManager *)0x0)) {
    if (((pAVar2->klass->_1).naturalAligment <
         (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
       ((pAVar2->klass->_1).typeHierarchy
        [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      pAStack_3 = TypeInfo__AvatarLimbManagerLocal;
      func_?(pAVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = pAVar2[1].fields.OnAvatarRotate;
    if (pAVar5 != (Action *)0x0) {
      pvVar6 = pAVar5[1].fields._._.interp_method;
      if (pvVar6 != (void *)0x0) {
        pAStack_3 = *(AvatarLimbManagerLocal__Class **)((int)pvVar6 + 0x20);
        (**(code **)((int)pvVar6 + 0xc))();
      }
      return;
    }
  }
  uVar7 = func_?(&pAStack_3);
  func_?(uVar7);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, MVAvatar, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Init
               (AvatarPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeDataVariable,
               MVRuntimeDataVariable *isFiringRuntimeDataVariable,MVAvatar *mvAvatar,
               WorldObjectSkillDataManager *skillsDataManager,MethodInfo *method)

{
  (this->fields).mvAvatar = mvAvatar;
  func_?(&(this->fields).mvAvatar,mvAvatar);
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeDataVariable,isFiringRuntimeDataVariable,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (skillsDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_EndlessAmmo,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).hasUnlimitedAmmo = 1;
    }
  }
  (this->fields)._.hasUnlimitedAmmoSetting = (this->fields).hasUnlimitedAmmo;
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_InitSkills
               (AvatarPickupOwner *this,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_EndlessAmmo);
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_EndlessAmmo,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).hasUnlimitedAmmo = 1;
    }
  }
  return;
}


/* Void SetupItemTransform() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_SetupItemTransform
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarRemote);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).mvAvatar;
  if (pMVar1 == (MVAvatar *)0x0) goto code_?;
  pPVar2 = (this->fields)._.currentItem;
  if ((pMVar1->fields).body == (MVBody *)0x0) {
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (GameObject *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar3,pTVar4,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if ((pPVar2 == (PickupItem *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar3,(Vector3)ZEXT812(0x3f19999a00000000),(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
  }
  else {
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).mvAvatar;
    if ((((pMVar1 == (MVAvatar *)0x0) || (pMVar5 = (pMVar1->fields).body, pMVar5 == (MVBody *)0x0))
        || (pMVar6 = (MethodCall *)MVBody::MVBody_get_BodyData(pMVar5,(MethodInfo *)0x0),
           pMVar6 == (MethodCall *)0x0)) ||
       (pTVar4 = (Transform *)
                 mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                           (pMVar6,1,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,pTVar4,0,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if ((pPVar2 == (PickupItem *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar3,(Vector3)ZEXT812(0x3e80000000000000),(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    pMVar1 = (this->fields).mvAvatar;
    if (pMVar1 == (MVAvatar *)0x0) {
      pMVar7 = (MVAvatar *)0x0;
code_?:
      pPVar2 = (this->fields)._.currentItem;
      if (pPVar2 == (PickupItem *)0x0) goto code_?;
      (*(code *)(pPVar2->klass->vtable).OnEquip.method)
                (pPVar2,(pPVar2->klass->vtable).OnUnequip.methodPtr);
    }
    else {
      if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
         ((MVAvatarRemote__Class *)
          (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarRemote)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pMVar7 = (MVAvatar *)0x0;
      if (bVar8) {
        pMVar7 = pMVar1;
      }
      if (pMVar7 == (MVAvatar *)0x0) goto code_?;
    }
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    cVar9 = (*(code *)(pPVar2->klass->vtable).get_ThirdPersonGunMode.method)
                      (pPVar2,(pPVar2->klass->vtable).get_CanHolster.methodPtr);
    if (cVar9 == '\0') {
      if (pMVar7 == (MVAvatar *)0x0) {
        return;
      }
      pPVar2 = (this->fields)._.currentItem;
      if (pPVar2 == (PickupItem *)0x0) goto code_?;
      cVar9 = (*(code *)(pPVar2->klass->vtable).get_IsHandEquippable.method)
                        (pPVar2,(pPVar2->klass->vtable).get_ThirdPersonGunMode.methodPtr);
      if (cVar9 == '\0') goto code_?;
    }
    pMVar1 = (this->fields).mvAvatar;
    if (((pMVar1 == (MVAvatar *)0x0) || (pMVar5 = (pMVar1->fields).body, pMVar5 == (MVBody *)0x0))
       || (pMVar6 = (MethodCall *)MVBody::MVBody_get_BodyData(pMVar5,(MethodInfo *)0x0),
          pMVar6 == (MethodCall *)0x0)) goto code_?;
    pTVar3 = (Transform *)
             mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                       (pMVar6,2,(MethodInfo *)0x0);
    pPVar2 = (this->fields)._.currentItem;
    if (pPVar2 == (PickupItem *)0x0) goto code_?;
    PickupItem::PickupItem_EquipToHand(pPVar2,pTVar3,(MethodInfo *)0x0);
    if (pMVar7 == (MVAvatar *)0x0) {
      return;
    }
  }
code_?:
  pPVar2 = (this->fields)._.currentItem;
  if (pPVar2 != (PickupItem *)0x0) {
    (*(code *)(pPVar2->klass->vtable).OnEquip.method)
              (pPVar2,(pPVar2->klass->vtable).OnUnequip.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Unequip
               (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pPVar1 = (this->fields)._.currentItem;
  if (pPVar1 != (PickupItem *)0x0) {
    (*(code *)(pPVar1->klass->vtable).OnUnequip.method)
              (pPVar1,(pPVar1->klass->vtable).ResetAmmo.methodPtr);
    pPVar1 = (this->fields)._.currentItem;
    if (pPVar1 != (PickupItem *)0x0) {
      iVar3 = (*(code *)(pPVar1->klass->vtable).__unknown.method)
                        (pPVar1,(pPVar1->klass->vtable).__unknown_1.methodPtr);
      if (iVar3 != 0) {
        pPVar1 = (this->fields)._.currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pPVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      (this->fields)._.currentItem = (PickupItem *)0x0;
      func_?(&(this->fields)._.currentItem,0);
      pMVar4 = (this->fields)._.onUnequipItem;
      if (pMVar4 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        return;
      }
      (*(pMVar4->fields)._._.invoke_impl)
                ((pMVar4->fields)._._.method_code,0,(pMVar4->fields)._._.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_get_IgnoreWOIDs
          (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                   );
    cRam_? = '\x01';
  }
  pHVar1 = MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs((MVPickupOwner *)this,(MethodInfo *)0x0);
  if ((this->fields)._AdditionalIgnoreWOIDS_k__BackingField != (HashSet_1_System_Int32_ *)0x0) {
    if (pHVar1 == (HashSet_1_System_Int32_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar2)();
      return pHVar1;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__UnionWith
              (pHVar1,(IEnumerable_1_System_Int32_ *)
                      (this->fields)._AdditionalIgnoreWOIDS_k__BackingField,
               MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
              );
  }
  return pHVar1;
}

