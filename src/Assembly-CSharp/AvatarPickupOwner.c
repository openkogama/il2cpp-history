
/* Void Equip(AvatarItemType, Int32) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_Equip
               (AvatarPickupOwner *this,AvatarItemType__Enum type,int32_t variantId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                     ((MVPickupOwner *)this,type,variantId,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    pPVar1 = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                       ((MVPickupOwner *)this,AvatarItemType__Enum_Hand,variantId,(MethodInfo *)0x0)
    ;
  }
  pMVar3 = (this->fields).mvAvatar;
  if (pMVar3 != (MVAvatar *)0x0) {
    pMVar4 = MVAvatar::MVAvatar_get_Body(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVBody *)0x0) {
      if (pPVar1 != (PickupItem *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if ((this_01 != (GameObject *)0x0) &&
           (value_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this_01,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar5,value_01,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pPVar1,(MethodInfo *)0x0);
          fVar6 = 0.0;
          uVar7 = 0;
          func_?();
          if (pTVar5 != (Transform *)0x0) {
            value.z = fVar6;
            value.x = (float)(int)uVar7;
            value.y = (float)(int)((ulonglong)uVar7 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,value,(MethodInfo *)0x0);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pPVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
joined_?:
            if (pTVar5 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar5,*pQVar8,(MethodInfo *)0x0);
              MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
                        ((MVPickupOwner *)this,pPVar1,(MethodInfo *)0x0);
              pPVar1 = (this->fields)._.currentItem;
              if (pPVar1 != (PickupItem *)0x0) {
                (*(code *)(pPVar1->klass->vtable).OnEquip.method)();
                this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                          (this->fields)._.onEquipItem;
                if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
                  SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                            (this_00,(Object *)(this->fields)._.currentItem,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
    else if (pPVar1 != (PickupItem *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      pMVar3 = (this->fields).mvAvatar;
      if ((((pMVar3 != (MVAvatar *)0x0) &&
           (pMVar4 = MVAvatar::MVAvatar_get_Body(pMVar3,(MethodInfo *)0x0), pMVar4 != (MVBody *)0x0)
           ) && (pBVar9 = MVBody::MVBody_get_BodyData(pMVar4,(MethodInfo *)0x0),
                pBVar9 != (BodyData *)0x0)) &&
         (pTVar10 = (pBVar9->fields).PartBones, pTVar10 != (Transform__Array *)0x0)) {
        if (pTVar10->max_length < 2) goto code_?;
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar5,pTVar10->vector[1],0,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pPVar1,(MethodInfo *)0x0);
          fVar6 = 0.0;
          uVar7 = 0;
          func_?();
          if (pTVar5 != (Transform *)0x0) {
            value_00.z = fVar6;
            value_00.x = (float)(int)uVar7;
            value_00.y = (float)(int)((ulonglong)uVar7 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,value_00,(MethodInfo *)0x0);
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pPVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
            goto joined_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HandlePointing(Boolean) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_HandlePointing
               (AvatarPickupOwner *this,bool inputFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      this_00 = (MvCharacterController *)(this->fields)._.currentItem;
      if (this_00 == (MvCharacterController *)0x0) goto code_?;
      bVar3 = MvCharacterController::MvCharacterController_get_IsGrounded(this_00,(MethodInfo *)0x0)
      ;
      if (bVar3 == 0) {
        return;
      }
    }
    this_01 = (this->fields).mvAvatar;
    if (this_01 != (MVAvatar *)0x0) {
      iVar4 = MVMovable::MVMovable_get_ParentMoverID((MVMovable *)this_01,(MethodInfo *)0x0);
      iVar2 = func_?(iVar4,TypeInfo__AvatarLimbManagerLocal);
      if (iVar2 != 0) {
        method_00 = (MethodInfo *)0x0;
        this_02 = (AvatarLimbManagerLocal *)func_?(iVar4,TypeInfo__AvatarLimbManagerLocal);
        AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing(this_02,method_00);
        return;
      }
    }
  }
code_?:
  func_?(0);
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
  (this->fields).mvAvatar = mvAvatar;
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
  MVBuildModeAvatarLocal+EditMode::MVBuildModeAvatarLocal_EditMode_set_MovementConstrained
            ((MVBuildModeAvatarLocal_EditMode *)this,(this->fields).hasUnlimitedAmmo,
             (MethodInfo *)0x0);
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_InitSkills
               (AvatarPickupOwner *this,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
                        (pPVar1,(pPVar1->klass->vtable).CanFire.methodPtr);
      if (iVar3 != 0) {
        pPVar1 = (this->fields)._.currentItem;
        if (pPVar1 == (PickupItem *)0x0) goto code_?;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields)._.onUnequipItem;
      (this->fields)._.currentItem = (PickupItem *)0x0;
      if (this_00 == (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
        return;
      }
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                (this_00,(Object *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* HashSet`1[System.Int32] get_IgnoreWOIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_get_IgnoreWOIDs
          (AvatarPickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = MVPickupOwner::MVPickupOwner_get_IgnoreWOIDs((MVPickupOwner *)this,(MethodInfo *)0x0);
  pHVar1 = (this->fields)._AdditionalIgnoreWOIDS_k__BackingField;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (this_00 == (HashSet_1_System_Int32_ *)0x0) {
      func_?(0);
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


/* Void set_AdditionalIgnoreWOIDS(HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
               (AvatarPickupOwner *this,HashSet_1_System_Int32_ *value,MethodInfo *method)

{
  (this->fields)._AdditionalIgnoreWOIDS_k__BackingField = value;
  return;
}

