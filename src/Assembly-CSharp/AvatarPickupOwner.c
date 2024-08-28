
/* Void Equip(AvatarItemType, Int32) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Equip
               (AvatarPickupOwner *this,AvatarItemType__Enum type,int32_t variantId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    cRam_? = '\x01';
  }
  avatarItem = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                         ((MVPickupOwner *)this,type,variantId,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)avatarItem,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    avatarItem = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                           ((MVPickupOwner *)this,AvatarItemType__Enum_Hand,variantId,
                            (MethodInfo *)0x0);
  }
  pMVar2 = (this->fields).mvAvatar;
  if ((pMVar2 != (MVAvatar *)0x0) && (avatarItem != (PickupItem *)0x0)) {
    if ((pMVar2->fields).body == (MVBody *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)avatarItem,(MethodInfo *)0x0);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar3,value,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)avatarItem,(MethodInfo *)0x0);
          uVar4 = 0x3f19999a;
code_?:
          if (pTVar3 != (Transform *)0x0) {
            auVar5._4_8_ = 0;
            auVar5._0_4_ = uVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)avatarItem,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->
                                 identityQuaternion,(MethodInfo *)0x0);
              MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
                        ((MVPickupOwner *)this,avatarItem,(MethodInfo *)0x0);
              pPStack6 = (this->fields)._.currentItem;
              if (pPStack6 != (PickupItem *)0x0) {
                pIStack7 = (pPStack6->klass->vtable).OnUnequip.methodPtr;
                (*(code *)(pPStack6->klass->vtable).OnEquip.method)();
                pMVar8 = (this->fields)._.onEquipItem;
                if (pMVar8 != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
                  pIStack7 = (pMVar8->fields)._._.method;
                  pPStack6 = (this->fields)._.currentItem;
                  (*(pMVar8->fields)._._.invoke_impl)();
                }
                return;
              }
            }
          }
        }
      }
    }
    else {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)avatarItem,(MethodInfo *)0x0);
      pMVar2 = (this->fields).mvAvatar;
      if ((((pMVar2 != (MVAvatar *)0x0) && (pMVar9 = (pMVar2->fields).body, pMVar9 != (MVBody *)0x0)
           ) && (pMVar10 = (pMVar9->fields).bodyObject, pMVar10 != (MVBodyObject *)0x0)) &&
         ((pBVar11 = (pMVar10->fields).bodyData, pBVar11 != (BodyData *)0x0 &&
          (pTVar12 = (pBVar11->fields).PartBones, pTVar12 != (Transform__Array *)0x0)))) {
        if (pTVar12->max_length < 2) goto code_?;
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar3,pTVar12->vector[1],0,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)avatarItem,(MethodInfo *)0x0);
          uVar4 = 0x3e800000;
          goto code_?;
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


/* Void HandlePointing(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointing
               (AvatarPickupOwner *this,bool inputFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManagerLocal);
    cRam_? = '\x01';
  }
  if (inputFire == 0) {
    return;
  }
  pPVar1 = (this->fields)._.currentItem;
  if (pPVar1 != (PickupItem *)0x0) {
    iVar2 = (*(code *)(pPVar1->klass->vtable).__unknown.method)
                      (pPVar1,(pPVar1->klass->vtable).CanFire.methodPtr);
    if (iVar2 != 5) {
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 == (PickupItem *)0x0) goto code_?;
      if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
        return;
      }
    }
    pMVar3 = (this->fields).mvAvatar;
    if ((pMVar3 != (MVAvatar *)0x0) &&
       (this_00 = (AvatarLimbManagerLocal *)(pMVar3->fields).limbManager,
       this = (AvatarPickupOwner *)TypeInfo__AvatarLimbManagerLocal,
       this_00 != (AvatarLimbManagerLocal *)0x0)) {
      bVar4 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
      if ((bVar4 <= (this_00->klass->_1).naturalAligment) &&
         ((this_00->klass->_1).typeHierarchy[bVar4 - 1] ==
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
        AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing(this_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  this_00 = extraout_EDX;
code_?:
  func_?(this_00,this);
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

