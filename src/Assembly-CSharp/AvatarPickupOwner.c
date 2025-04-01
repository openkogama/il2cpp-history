
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
  if ((pMVar2 == (MVAvatar *)0x0) ||
     (this_01 = (AvatarLimbManagerLocal *)(pMVar2->fields).limbManager, unaff_EDI = pAVar1,
     this_01 == (AvatarLimbManagerLocal *)0x0)) goto code_?;
  bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
  if (((this_01->klass->_1).naturalAligment < bVar3) ||
     ((this_01->klass->_1).typeHierarchy[bVar3 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
  AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointingWeapon(this_01,(MethodInfo *)0x0);
  pMVar2 = (this->fields).mvAvatar;
  if ((((pMVar2 == (MVAvatar *)0x0) || (this_00 = (pMVar2->fields).body, this_00 == (MVBody *)0x0))
      || (pBVar4 = MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0), pBVar4 == (BodyData *)0x0
         )) || (pTVar5 = (pBVar4->fields).PartBones, pTVar5 == (Transform__Array *)0x0)) {
code_?:
    func_?();
  }
  else if (2 < pTVar5->max_length) {
    unaff_EDI = (AvatarLimbManagerLocal__Class *)pTVar5->vector[2];
    pPVar6 = (this->fields)._.currentItem;
    if ((pPVar6 != (PickupItem *)0x0) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (pTVar7,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar7,(Object_1 *)unaff_EDI,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        return;
      }
      pPVar6 = (this->fields)._.currentItem;
      if ((pPVar6 != (PickupItem *)0x0) &&
         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pPVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar7,(Transform *)unaff_EDI,0,(MethodInfo *)0x0);
        pPVar6 = (this->fields)._.currentItem;
        if ((pPVar6 != (PickupItem *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0))
        {
          value.z = 0.7;
          value.x = -0.1;
          value.y = 0.3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar7,value,(MethodInfo *)0x0);
          pPVar6 = (this->fields)._.currentItem;
          if (pPVar6 != (PickupItem *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar6,(MethodInfo *)0x0);
            euler.y = (float)_UNK_?;
            euler.x = (float)_UNK_?;
            euler.z = 1.7802358;
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar7,*pQVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto code_?;
  }
  func_?();
  this_01 = extraout_EDX;
code_?:
  func_?(this_01,unaff_EDI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
     (pAStack_2 = (pMVar1->fields).limbManager, pAStack_2 != (AvatarLimbManager *)0x0)) {
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAStack_2->klass->_1).naturalAligment < bVar3) ||
       ((pAStack_2->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      pAStack_4 = TypeInfo__AvatarLimbManagerLocal;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = pAStack_2[1].fields.OnAvatarRotate;
    if (pAVar6 != (Action *)0x0) {
      if (*(char *)&(pAVar6->fields)._._.data != '\0') {
        pvVar7 = (pAVar6->fields)._._.method_ptr;
        pvVar8 = (pAVar6->fields)._._.invoke_impl;
        (pAVar6->fields)._._.method_code = (pAVar6->fields)._._.extra_arg;
        pMVar9 = (MethodInfo_1 *)(pAVar6->fields)._._.m_target;
        (pAVar6->fields)._._.interp_method = pvVar7;
        (pAVar6->fields)._._.interp_invoke_impl = pvVar8;
        pAVar6[1].fields._._.extra_arg = (void *)0x3;
        (pAVar6->fields)._._.method_info = pMVar9;
      }
      return;
    }
  }
  uVar10 = func_?(&pAStack_2);
  func_?(uVar10);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    else {
      bVar2 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
         ((this_00->klass->_1).typeHierarchy[bVar2 - 1] ==
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
        AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing(this_00,(MethodInfo *)0x0);
        return;
      }
    }
    func_?(this_00,unaff_ESI);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
     (pAStack_2 = (pMVar1->fields).limbManager, pAStack_2 != (AvatarLimbManager *)0x0)) {
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAStack_2->klass->_1).naturalAligment < bVar3) ||
       ((pAStack_2->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      pAStack_4 = TypeInfo__AvatarLimbManagerLocal;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = pAStack_2[1].fields.OnAvatarRotate;
    if (pAVar6 != (Action *)0x0) {
      pvVar7 = pAVar6[1].fields._._.interp_method;
      if (pvVar7 != (void *)0x0) {
        pAStack_4 = (AvatarLimbManagerLocal__Class *)_value;
        pAStack_2 = *(AvatarLimbManager **)((int)pvVar7 + 0x20);
        (**(code **)((int)pvVar7 + 0xc))();
      }
      return;
    }
  }
  uVar8 = func_?(&pAStack_2);
  func_?(uVar8);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, MVAvatar, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Init
               (AvatarPickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeDataVariable,
               MVRuntimeDataVariable *isFiringRuntimeDataVariable,MVAvatar *mvAvatar,
               WorldObjectSkillDataManager *skillsDataManager,MethodInfo *method)

{
  ppMVar1 = &(this->fields).mvAvatar;
  *ppMVar1 = mvAvatar;
  func_?(ppMVar1,mvAvatar);
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeDataVariable,isFiringRuntimeDataVariable,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (skillsDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_EndlessAmmo,(MethodInfo *)0x0);
    if (bVar2 != 0) {
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
    if (pPVar2 != (PickupItem *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pPVar2,(MethodInfo *)0x0);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if ((this_00 != (GameObject *)0x0) &&
         (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_00,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,value,(MethodInfo *)0x0);
        pPVar2 = (this->fields)._.currentItem;
        if ((pPVar2 != (PickupItem *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar3,(Vector3)ZEXT812(0x3f19999a00000000),(MethodInfo *)0x0);
          pPVar2 = (this->fields)._.currentItem;
          if (pPVar2 != (PickupItem *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar2,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion
                         ,(MethodInfo *)0x0);
code_?:
              pPVar2 = (this->fields)._.currentItem;
              if (pPVar2 != (PickupItem *)0x0) {
                (*(code *)(pPVar2->klass->vtable).OnEquip.method)
                          (pPVar2,(pPVar2->klass->vtable).OnUnequip.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  else if (pPVar2 != (PickupItem *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).mvAvatar;
    if ((((pMVar1 != (MVAvatar *)0x0) && (pMVar4 = (pMVar1->fields).body, pMVar4 != (MVBody *)0x0)
         ) && (pBVar5 = MVBody::MVBody_get_BodyData(pMVar4,(MethodInfo *)0x0),
              pBVar5 != (BodyData *)0x0)) &&
       (pTVar6 = (pBVar5->fields).PartBones, pTVar6 != (Transform__Array *)0x0)) {
      if (pTVar6->max_length < 2) goto code_?;
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar3,pTVar6->vector[1],0,(MethodInfo *)0x0);
        pPVar2 = (this->fields)._.currentItem;
        if ((pPVar2 != (PickupItem *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar3,(Vector3)ZEXT812(0x3e80000000000000),(MethodInfo *)0x0);
          pPVar2 = (this->fields)._.currentItem;
          if (pPVar2 != (PickupItem *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar2,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion
                         ,(MethodInfo *)0x0);
              pMVar1 = (this->fields).mvAvatar;
              if (pMVar1 == (MVAvatar *)0x0) {
code_?:
                pPVar2 = (this->fields)._.currentItem;
                pMVar1 = (MVAvatar *)0x0;
                if (pPVar2 == (PickupItem *)0x0) goto code_?;
                (*(code *)(pPVar2->klass->vtable).OnEquip.method)
                          (pPVar2,(pPVar2->klass->vtable).OnUnequip.methodPtr);
              }
              else {
                bVar7 = (TypeInfo__MVAvatarRemote->_1).naturalAligment;
                if (((pMVar1->klass->_1).naturalAligment < bVar7) ||
                   ((MVAvatarRemote__Class *)(pMVar1->klass->_1).typeHierarchy[bVar7 - 1] !=
                    TypeInfo__MVAvatarRemote)) goto code_?;
              }
              pPVar2 = (this->fields)._.currentItem;
              if (pPVar2 != (PickupItem *)0x0) {
                cVar8 = (*(code *)(pPVar2->klass->vtable).get_ThirdPersonGunMode.method)
                                  (pPVar2,(pPVar2->klass->vtable).get_CanHolster.methodPtr);
                if (cVar8 == '\0') {
                  if (pMVar1 == (MVAvatar *)0x0) {
                    return;
                  }
                  pPVar2 = (this->fields)._.currentItem;
                  if (pPVar2 == (PickupItem *)0x0) goto code_?;
                  cVar8 = (*(code *)(pPVar2->klass->vtable).get_IsHandEquippable.method)
                                    (pPVar2,(pPVar2->klass->vtable).get_ThirdPersonGunMode.methodPtr
                                    );
                  if (cVar8 == '\0') goto code_?;
                }
                pMVar9 = (this->fields).mvAvatar;
                if ((((pMVar9 != (MVAvatar *)0x0) &&
                     (pMVar4 = (pMVar9->fields).body, pMVar4 != (MVBody *)0x0)) &&
                    (pBVar5 = MVBody::MVBody_get_BodyData(pMVar4,(MethodInfo *)0x0),
                    pBVar5 != (BodyData *)0x0)) &&
                   (pTVar6 = (pBVar5->fields).PartBones, pTVar6 != (Transform__Array *)0x0)) {
                  if (pTVar6->max_length < 3) goto code_?;
                  pPVar2 = (this->fields)._.currentItem;
                  if (pPVar2 != (PickupItem *)0x0) {
                    PickupItem::PickupItem_EquipToHand(pPVar2,pTVar6->vector[2],(MethodInfo *)0x0);
                    if (pMVar1 == (MVAvatar *)0x0) {
                      return;
                    }
                    goto code_?;
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
  ppPVar2 = &(this->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  pPVar1 = *ppPVar2;
  if (pPVar1 != (PickupItem *)0x0) {
    (*(code *)(pPVar1->klass->vtable).OnUnequip.method)
              (pPVar1,(pPVar1->klass->vtable).ResetAmmo.methodPtr);
    pPVar1 = *ppPVar2;
    if (pPVar1 != (PickupItem *)0x0) {
      iVar4 = (*(code *)(pPVar1->klass->vtable).__unknown.method)
                        (pPVar1,(pPVar1->klass->vtable).CanFire.methodPtr);
      if (iVar4 != 0) {
        if (*ppPVar2 == (PickupItem *)0x0) goto code_?;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)*ppPVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      *ppPVar2 = (PickupItem *)0x0;
      func_?(ppPVar2,0);
      pMVar5 = (this->fields)._.onUnequipItem;
      if (pMVar5 == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        return;
      }
      (*(pMVar5->fields)._._.invoke_impl)
                ((pMVar5->fields)._._.method_code,0,(pMVar5->fields)._._.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs((MVPickupOwner *)this,(MethodInfo *)0x0);
  pHVar1 = (this->fields)._AdditionalIgnoreWOIDS_k__BackingField;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (this_00 == (HashSet_1_System_Int32_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar2)();
      return pHVar1;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__UnionWith
              (this_00,(IEnumerable_1_System_Int32_ *)pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
              );
  }
  return this_00;
}

