
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
  if ((pMVar2 == (MVAvatar *)0x0) || (avatarItem == (PickupItem *)0x0)) goto code_?;
  if ((pMVar2->fields).body == (MVBody *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar3,pTVar4,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    uVar5 = 0x3f19999a;
  }
  else {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    pMVar2 = (this->fields).mvAvatar;
    if ((pMVar2 == (MVAvatar *)0x0) || (this_00 = (pMVar2->fields).body, this_00 == (MVBody *)0x0))
    goto code_?;
    this_02 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0);
    if (this_02 == (MethodCall *)0x0) goto code_?;
    pTVar4 = (Transform *)
             mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                       (this_02,1,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,pTVar4,0,(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    uVar5 = 0x3e800000;
  }
  if (pTVar3 != (Transform *)0x0) {
    auVar6._4_8_ = 0;
    auVar6._0_4_ = uVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar3,(Vector3)(auVar6 << 0x20),(MethodInfo *)0x0);
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
                ((MVPickupOwner *)this,avatarItem,(MethodInfo *)0x0);
      pPStack7 = (this->fields)._.currentItem;
      if (pPStack7 != (PickupItem *)0x0) {
        pIStack8 = (pPStack7->klass->vtable).OnUnequip.methodPtr;
        (*(code *)(pPStack7->klass->vtable).OnEquip.method)();
        if ((this->fields)._.onEquipItem != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
          pMVar9 = (this->fields)._.onEquipItem;
          pIStack8 = (pMVar9->fields)._._.method;
          pPStack7 = (this->fields)._.currentItem;
          (*(pMVar9->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
       (pAVar4 = (pMVar3->fields).limbManager,
       this = (AvatarPickupOwner *)TypeInfo__AvatarLimbManagerLocal,
       pAVar4 != (AvatarLimbManager *)0x0)) {
      if (((pAVar4->klass->_1).naturalAligment <
           (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment) ||
         ((pAVar4->klass->_1).typeHierarchy
          [(TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) goto code_?;
      pAVar5 = pAVar4[1].fields.OnAvatarRotate;
      if (pAVar5 != (Action *)0x0) {
        if (*(char *)((int)&(pAVar5->fields)._._.original_method_info + 1) != '\0') {
          pvVar6 = pAVar5[1].fields._._.delegate_trampoline;
          pvVar7 = (pAVar5->fields)._._.method_ptr;
          pvVar8 = (pAVar5->fields)._._.invoke_impl;
          (pAVar5->fields)._._.method_code = (pAVar5->fields)._._.extra_arg;
          pMVar9 = (MethodInfo_1 *)(pAVar5->fields)._._.m_target;
          (pAVar5->fields)._._.interp_method = pvVar7;
          (pAVar5->fields)._._.interp_invoke_impl = pvVar8;
          (pAVar5->fields)._._.method_info = pMVar9;
          if (pvVar6 != (void *)0x0) {
            pvVar6 = pAVar5[1].fields._._.delegate_trampoline;
            (**(code **)((int)pvVar6 + 0xc))
                      (*(undefined4 *)((int)pvVar6 + 0x20),1,*(undefined4 *)((int)pvVar6 + 0x14));
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar4,this);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
                        (pPVar1,(pPVar1->klass->vtable).CanFire.methodPtr);
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
      if ((this->fields)._.onUnequipItem == (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        return;
      }
      pMVar4 = (this->fields)._.onUnequipItem;
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

