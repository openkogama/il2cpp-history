
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CalculatePosAroundPivot
               (GameCoinLogic *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  func_?(&stack0xffffffe4,0,0,distanceFromPivot,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar2 = pivot.z;
  a_00.z = 0.0;
  uStack_3 = (undefined4)(uVar1 >> 0x20);
  a_00.x = (float)uVar4;
  a_00.y = (float)uStack_3;
  b_00.y = pivot.y;
  b_00.x = pivot.x;
  b_00.z = pivot.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&puStack_6,a_00,b_00,(MethodInfo *)0x0);
  a_01.y = pivot.y;
  a_01.x = pivot.x;
  a_01.z = fVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffd8,a_01,*pVVar5,(MethodInfo *)0x0);
  fVar7 = pVVar5->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar8 = (Quaternion *)&stack0xffffffd4;
  fVar9 = 0.0;
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffd4,0.0,spacingAngle,0.0,(MethodInfo *)0x0);
  pivot.z = fVar9;
  pivot.y = (float)pQVar8;
  uVar11 = pQVar10->z;
  pivot.x = pQVar10->w;
  point.y = pivot.z;
  point.x = pivot.y;
  point.z = fVar7;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffd8,*pQVar10,point,(MethodInfo *)0x0);
  b.y = pivot.y;
  b.x = pivot.x;
  b.z = fVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd8,*pVVar5,b,(MethodInfo *)0x0);
  uVar12._0_4_ = pVVar5->x;
  uVar12._4_4_ = pVVar5->y;
  fVar7 = pVVar5->z;
  pGVar13 = ((GameCoinLogic__Fields *)(uVar11 + 8))->displayObject;
  if (pGVar13 != (GameCoinDisplayObject *)0x0) {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pGVar13,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      value.z = fVar7;
      value.x = (float)uVar12;
      value.y = SUB84(uVar12,4);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar14,value,(MethodInfo *)0x0);
      pGVar13 = ((GameCoinLogic__Fields *)(uVar11 + 8))->displayObject;
      if (pGVar13 != (GameCoinDisplayObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pGVar13,(MethodInfo *)0x0);
        this_00 = ((GameCoinLogic__Fields *)(uVar11 + 8))->displayObjectRoot;
        if (this_00 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
            a.y = pivot.y;
            a.x = pivot.x;
            a.z = fVar2;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               (&pivot,a,*pVVar5,(MethodInfo *)0x0);
            if (pTVar14 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (pTVar14,*pVVar5,(MethodInfo *)0x0);
              pGVar13 = ((GameCoinLogic__Fields *)(uVar11 + 8))->displayObject;
              if (pGVar13 != (GameCoinDisplayObject *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pGVar13,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&pivot,pTVar14,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     (&pivot,*pVVar5,
                                      ((GameCoinLogic__Fields *)(uVar11 + 8))->displayObjectOffset,
                                      (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar14,*pVVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CreateDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pXVar1 = (XpBoostParticlePreviewer *)
             PrefabPool::PrefabPool_get_GameCoinDisplayPrefab(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                       );
    (this->fields).displayObject = (GameCoinDisplayObject *)pXVar1;
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pXVar1,(MethodInfo *)0x0);
      (this->fields).displayGO = pGVar2;
      if (pGVar2 != (GameObject *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar2,(MethodInfo *)0x0);
        pGVar2 = (this->fields).displayObjectRoot;
        if (pGVar2 != (GameObject *)0x0) {
          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar2,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).displayObject;
    if (pGVar1 == (GameCoinDisplayObject *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    obj = (pGVar1->fields).textMesh1;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(pGVar1->fields).textMesh2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(pGVar1->fields).coinMesh,(MethodInfo *)0x0);
    obj_00 = (this->fields).displayGO;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyRequirement
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).displayObject;
    if (pGVar1 == (GameCoinDisplayObject *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,StringLiteral_gameCoinAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (this_01 = (MVGameCoinManager *)
                  TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                  TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                            ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,
                             (MethodInfo *)0x0), this_01 != (MVGameCoinManager *)0x0)) {
      MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
                (this_01,-(this->fields).purchaseAmount,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetCanUseGUIResult
          (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).purchaseAmount != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = (MVGameCoinManager *)
                TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,
                           (MethodInfo *)0x0);
      if (this_01 != (MVGameCoinManager *)0x0) {
        iVar1 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_01,(MethodInfo *)0x0);
        return (uint)(iVar1 < (this->fields).purchaseAmount) * 4 + UseGUIResult__Enum_CanAfford;
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    UVar3 = (*pcVar2)();
    return UVar3;
  }
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetShowOption
          (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).purchaseAmount != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = (MVGameCoinManager *)
                TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,
                           (MethodInfo *)0x0);
      if (this_01 != (MVGameCoinManager *)0x0) {
        iVar1 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_01,(MethodInfo *)0x0);
        if (iVar1 < (this->fields).purchaseAmount) {
          return ShowUseOption__Enum_GameCoinsInsufficient|ShowUseOption__Enum_UsingGameCoins;
        }
        return ShowUseOption__Enum_GameCoinsEnough|ShowUseOption__Enum_UsingGameCoins;
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    SVar3 = (*pcVar2)();
    return SVar3;
  }
  return ShowUseOption__Enum_Normal;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_IsActive
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).displayGO;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_OnDataUpdate
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)data,StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 != 0) {
    iVar3 = (this->fields).purchaseAmount;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar1,
                        (Type *)StringLiteral_gameCoinAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      goto code_?;
    }
    piVar5 = (int32_t *)func_?();
    (this->fields).purchaseAmount = *piVar5;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (this_01 = (MVGameCoinManager *)
                  TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                  TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                            ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,
                             (MethodInfo *)0x0), this_01 == (MVGameCoinManager *)0x0))
    goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_01,(this->fields).purchaseAmount - iVar3,(MethodInfo *)0x0);
    iVar3 = (this->fields).purchaseAmount;
    if (0 < iVar3) {
      pGVar6 = (this->fields).displayObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 == (PrefabPool *)0x0) goto code_?;
        pXVar7 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_GameCoinDisplayPrefab(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar7,
                            GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                           );
        (this->fields).displayObject = (GameCoinDisplayObject *)pXVar7;
        if (pXVar7 == (XpBoostParticlePreviewer *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pXVar7,(MethodInfo *)0x0);
        (this->fields).displayGO = pGVar8;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        pGVar8 = (this->fields).displayObjectRoot;
        if ((pGVar8 == (GameObject *)0x0) ||
           (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar8,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_03,value,(MethodInfo *)0x0);
      }
      iVar3 = (this->fields).purchaseAmount;
    }
    if (iVar3 == 0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
      value_00 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&data);
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,StringLiteral_gameCoinAmount,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_04,ownerID,pDVar1,(MethodInfo *)0x0);
      pGVar6 = (this->fields).displayObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pGVar6 = (this->fields).displayObject;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pGVar6 = (this->fields).displayObject;
          if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pTVar9 = (pGVar6->fields).textMesh1;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar9,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(pGVar6->fields).textMesh2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(pGVar6->fields).coinMesh,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar6 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pGVar6 = (this->fields).displayObject;
  if (pGVar6 != (GameCoinDisplayObject *)0x0) {
    data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).purchaseAmount;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value_01 = TypeInfo__System__String->static_fields->Empty;
    if (0 < (int)data) {
      value_01 = (String *)func_?();
    }
    pTVar9 = (pGVar6->fields).textMesh1;
    if (pTVar9 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar9,value_01,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(pGVar6->fields).textMesh2;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method = (MethodInfo *)0x0;
        data = pDVar1;
        ownerID = (int32_t)value_01;
        UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                  ((TextMesh *)pDVar1,value_01,(MethodInfo *)0x0);
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


/* Void PayUseCost() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_PayUseCost
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (MVGameCoinManager *)
              TierOnDeathProgress+<DoTierProgress>c__Iterator0::
              TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,(MethodInfo *)0x0
                        );
    if (this_01 != (MVGameCoinManager *)0x0) {
      MVGameCoinManager::MVGameCoinManager_Consume(this_01,(GameCoinLogic *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAmount(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetAmount
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                      *)data,StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 != 0) {
    iVar3 = (this->fields).purchaseAmount;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar1,
                        (Type *)StringLiteral_gameCoinAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      goto code_?;
    }
    piVar5 = (int32_t *)func_?();
    (this->fields).purchaseAmount = *piVar5;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (this_01 = (MVGameCoinManager *)
                  TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                  TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                            ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,
                             (MethodInfo *)0x0), this_01 == (MVGameCoinManager *)0x0))
    goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_01,(this->fields).purchaseAmount - iVar3,(MethodInfo *)0x0);
    iVar3 = (this->fields).purchaseAmount;
    if (0 < iVar3) {
      pGVar6 = (this->fields).displayObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 == (PrefabPool *)0x0) goto code_?;
        pXVar7 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_GameCoinDisplayPrefab(this_02,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar7,
                            GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                           );
        (this->fields).displayObject = (GameCoinDisplayObject *)pXVar7;
        if (pXVar7 == (XpBoostParticlePreviewer *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pXVar7,(MethodInfo *)0x0);
        (this->fields).displayGO = pGVar8;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        pGVar8 = (this->fields).displayObjectRoot;
        if ((pGVar8 == (GameObject *)0x0) ||
           (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar8,(MethodInfo *)0x0), this_03 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_03,value,(MethodInfo *)0x0);
      }
      iVar3 = (this->fields).purchaseAmount;
    }
    if (iVar3 == 0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
      value_00 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&data);
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)pDVar1,StringLiteral_gameCoinAmount,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_04,ownerID,pDVar1,(MethodInfo *)0x0);
      pGVar6 = (this->fields).displayObject;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pGVar6 = (this->fields).displayObject;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pGVar6 = (this->fields).displayObject;
          if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pTVar9 = (pGVar6->fields).textMesh1;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar9,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(pGVar6->fields).textMesh2,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(pGVar6->fields).coinMesh,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar6 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pGVar6 = (this->fields).displayObject;
  if (pGVar6 != (GameCoinDisplayObject *)0x0) {
    data = (Dictionary_2_System_Object_System_Object_ *)(this->fields).purchaseAmount;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value_01 = TypeInfo__System__String->static_fields->Empty;
    if (0 < (int)data) {
      value_01 = (String *)func_?();
    }
    pTVar9 = (pGVar6->fields).textMesh1;
    if (pTVar9 != (TextMesh *)0x0) {
      UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                (pTVar9,value_01,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(pGVar6->fields).textMesh2;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method = (MethodInfo *)0x0;
        data = pDVar1;
        ownerID = (int32_t)value_01;
        UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                  ((TextMesh *)pDVar1,value_01,(MethodInfo *)0x0);
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


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetScale
               (GameCoinLogic *this,Vector3 scale,MethodInfo *method)

{
  this_00 = (this->fields).displayObject;
  if (this_00 != (GameCoinDisplayObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,scale,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GameCoinLogic(GameObject, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor
               (GameCoinLogic *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).requirementType = 1;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
  (this->fields).hasUseWhenFree = 1;
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).displayObjectRoot = root;
  return;
}


/* GameCoinLogic(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor_1
               (GameCoinLogic *this,GameObject *root,Vector3 displayObjectOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).requirementType = 1;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
  (this->fields).hasUseWhenFree = 1;
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = (this->fields).displayObjectOffset.x;
  uStack_3._4_4_ = (this->fields).displayObjectOffset.y;
  fVar4 = (this->fields).displayObjectOffset.z;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar4;
  a.x = (float)(undefined4)uStack_3;
  a.y = (float)uStack_3._4_4_;
  b.z = displayObjectOffset.z;
  b.x = displayObjectOffset.x;
  b.y = displayObjectOffset.y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&displayObjectOffset,a,b,(MethodInfo *)0x0);
  fVar6 = pVVar5->y;
  fVar4 = pVVar5->z;
  (this->fields).displayObjectOffset.x = pVVar5->x;
  (this->fields).displayObjectOffset.y = fVar6;
  (this->fields).displayObjectOffset.z = fVar4;
  (this->fields).displayObjectRoot = root;
  return;
}

