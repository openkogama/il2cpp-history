
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CalculatePosAroundPivot
               (GameRankRequirement *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
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
  pGVar13 = ((GameRankRequirement__Fields *)(uVar11 + 8))->displayGO;
  if (pGVar13 != (GameObject *)0x0) {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar13,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      value.z = fVar7;
      value.x = (float)uVar12;
      value.y = SUB84(uVar12,4);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar14,value,(MethodInfo *)0x0);
      pGVar13 = ((GameRankRequirement__Fields *)(uVar11 + 8))->displayGO;
      if (pGVar13 != (GameObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar13,(MethodInfo *)0x0);
        pGVar13 = ((GameRankRequirement__Fields *)(uVar11 + 8))->displayObjectRoot;
        if (pGVar13 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar13,(MethodInfo *)0x0);
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
              this_00 = ((GameRankRequirement__Fields *)(uVar11 + 8))->displayObject;
              if (this_00 != (GameRankDisplayObject *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&pivot,pTVar14,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     (&pivot,*pVVar5,
                                      ((GameRankRequirement__Fields *)(uVar11 + 8))->
                                      displayObjectOffset,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CreateDisplayObject
               (GameRankRequirement *this,MethodInfo *method)

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
    this_01 = (Component_1 *)
              MVMovable::MVMovable_get_ParentMoverID((MVMovable *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Component_1 *)0x0) {
      pXVar1 = (XpBoostParticlePreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
      ;
      pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (pMVar2->field8_0x20).genericMethod = (Il2CppGenericMethod *)pXVar1;
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)pXVar1,(MethodInfo *)0x0);
        if (*(GameObject **)&pMVar2->flags != (GameObject *)0x0) {
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (*(GameObject **)&pMVar2->flags,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar3,value_00,(MethodInfo *)0x0);
            if ((GameObject *)(pMVar2->field8_0x20).genericMethod != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)(pMVar2->field8_0x20).genericMethod,
                                  (MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                value.x = (float)pMVar2->return_type;
                value.y = (float)pMVar2->parameters;
                value.z = *(float *)&pMVar2->field7_0x1c;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar3,value,(MethodInfo *)0x0);
                if ((GameObject *)(pMVar2->field8_0x20).genericMethod != (GameObject *)0x0) {
                  pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_GetComponent_47
                                     ((GameObject *)(pMVar2->field8_0x20).genericMethod,
                                      GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                                     );
                  pMVar2->token = (uint32_t)pUVar4;
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_DestroyRequirement
               (GameRankRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pGVar2 = (this->fields).displayObject;
  if (pGVar2 != (GameRankDisplayObject *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    obj = (pGVar2->fields).frontText;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(pGVar2->fields).backText,(MethodInfo *)0x0);
    obj_00 = (this->fields).displayGO;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = (GameTierShopRepository *)
                HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                          ((HoverCraftMotor *)this_00,(MethodInfo *)0x0);
      this = (GameRankRequirement *)CONCAT31(this._1_3_,(this->fields).requiredRank);
      pMVar4 = (pGVar1->fields).worldObject;
      if (pMVar4 != (MVWorldObjectClient *)0x0) {
        documentationType =
             (*(code *)(pMVar4->klass->vtable).get_DocumentationType.method)
                       (pMVar4,(pMVar4->klass->vtable).TraverseRecursiveTail.methodPtr);
        pMVar4 = (pGVar1->fields).worldObject;
        if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
           (woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)pMVar4,(MethodInfo *)0x0),
           this_01 != (GameTierShopRepository *)0x0)) {
          GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                    (this_01,(GamePassTier__Enum)this,documentationType,(int32_t)woid,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetCanUseGUIResult
          (GameRankRequirement *this,MethodInfo *method)

{
  if ((this->fields).requiredRank != 0) {
    GVar1 = GameRankRequirement_GetLocalPLayerRank(this,(MethodInfo *)0x0);
    if ((byte)GVar1 < (this->fields).requiredRank) {
      GVar1 = GameRankRequirement_GetLocalPlayerTempRank(this,(MethodInfo *)0x0);
      if ((byte)GVar1 < (this->fields).requiredRank) {
        GVar1 = GameRankRequirement_GetLocalPLayerRank(this,(MethodInfo *)0x0);
        if ((byte)GVar1 < (this->fields).requiredRank) {
          GVar1 = GameRankRequirement_GetLocalPlayerTempRank(this,(MethodInfo *)0x0);
          if ((byte)GVar1 < (this->fields).requiredRank) {
            return UseGUIResult__Enum_CannotAfford;
          }
        }
        return UseGUIResult__Enum_CanAfford;
      }
    }
  }
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* GamePassTier GetLocalPLayerRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPLayerRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).gamePassTier);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* GamePassTier GetLocalPlayerTempRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPlayerTempRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).previewGamePassTier);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Int32 GetRequirementValue() */

int32_t Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetRequirementValue
                  (GameRankRequirement *this,MethodInfo *method)

{
  return (uint)(this->fields).requiredRank;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetShowOption
          (GameRankRequirement *this,MethodInfo *method)

{
  if ((this->fields).requiredRank == 0) {
    return ShowUseOption__Enum_Normal;
  }
  GVar1 = GameRankRequirement_GetLocalPLayerRank(this,(MethodInfo *)0x0);
  if ((byte)GVar1 < (this->fields).requiredRank) {
    return ShowUseOption__Enum_GameRankInsufficient|ShowUseOption__Enum_UsingGameRank;
  }
  return ShowUseOption__Enum_GameRankEnough|ShowUseOption__Enum_UsingGameRank;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_IsActive
               (GameRankRequirement *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_OnDataUpdate
               (GameRankRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    uVar3 = (this->fields).requiredRank;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)StringLiteral_RequiredRank
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 != (Pool *)0x0) {
      if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        tier = &UNK_?;
        puVar5 = (uint8_t *)func_?();
        pGVar6 = (this->fields).displayObject;
        (this->fields).requiredRank = *puVar5;
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
          this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if ((this_00 == (PrefabPool *)0x0) ||
             (this_01 = (Component_1 *)
                        MVMovable::MVMovable_get_ParentMoverID
                                  ((MVMovable *)this_00,(MethodInfo *)0x0),
             this_01 == (Component_1 *)0x0)) goto code_?;
          pXVar7 = (XpBoostParticlePreviewer *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (pXVar7,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          (this->fields).displayGO = (GameObject *)pXVar7;
          if (pXVar7 == (XpBoostParticlePreviewer *)0x0) goto code_?;
          tier = &UNK_?;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)pXVar7,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayObjectRoot;
          if (pGVar8 == (GameObject *)0x0) goto code_?;
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar8,(MethodInfo *)0x0);
          if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          method = (MethodInfo *)0x0;
          data = pDVar1;
          ownerID = (int32_t)pTVar9;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    ((Transform *)pDVar1,pTVar9,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if ((pGVar8 == (GameObject *)0x0) ||
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar8,(MethodInfo *)0x0),
             pTVar9 == (Transform *)0x0)) goto code_?;
          method = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar9,(this->fields).displayObjectOffset,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if (pGVar8 == (GameObject *)0x0) goto code_?;
          pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                              (pGVar8,
                               GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                              );
          (this->fields).displayObject = (GameRankDisplayObject *)pUVar10;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          pGVar12 = (GameTierShopRepository *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                              ((HoverCraftMotor *)pMVar11,(MethodInfo *)0x0);
          data = (Dictionary_2_System_Object_System_Object_ *)
                 CONCAT31(data._1_3_,(this->fields).requiredRank);
          pMVar13 = (this->fields).worldObject;
          if ((pMVar13 == (MVWorldObjectClient *)0x0) ||
             (MVar14 = (*(code *)(pMVar13->klass->vtable).get_DocumentationType.method)(),
             pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
                    (pGVar12,(GamePassTier__Enum)data,MVar14,(this->fields).worldObject,
                     (MethodInfo *)0x0);
        }
        if ((uVar3 != 0) && (uVar3 != (this->fields).requiredRank)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          pGVar12 = (GameTierShopRepository *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                              ((HoverCraftMotor *)pMVar11,(MethodInfo *)0x0);
          pMVar13 = (this->fields).worldObject;
          if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
          MVar14 = (*(code *)(pMVar13->klass->vtable).get_DocumentationType.method)
                             (pMVar13,(pMVar13->klass->vtable).TraverseRecursiveTail.methodPtr);
          pMVar13 = (this->fields).worldObject;
          if ((pMVar13 == (MVWorldObjectClient *)0x0) ||
             (woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)pMVar13,(MethodInfo *)0x0),
             pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                    (pGVar12,(GamePassTier__Enum)tier,MVar14,(int32_t)woid,(MethodInfo *)0x0);
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          pGVar12 = (GameTierShopRepository *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                              ((HoverCraftMotor *)pMVar11,(MethodInfo *)0x0);
          data = (Dictionary_2_System_Object_System_Object_ *)
                 CONCAT31(data._1_3_,(this->fields).requiredRank);
          pMVar13 = (this->fields).worldObject;
          if ((pMVar13 == (MVWorldObjectClient *)0x0) ||
             (MVar14 = (*(code *)(pMVar13->klass->vtable).get_DocumentationType.method)
                                 (pMVar13,(pMVar13->klass->vtable).TraverseRecursiveTail.methodPtr),
             pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
                    (pGVar12,(GamePassTier__Enum)data,MVar14,(this->fields).worldObject,
                     (MethodInfo *)0x0);
        }
        bVar15 = (this->fields).requiredRank;
        if (bVar15 != 0) {
          pGVar6 = (this->fields).displayObject;
          if (pGVar6 == (GameRankDisplayObject *)0x0) goto code_?;
          pTVar16 = (pGVar6->fields).frontText;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(uint)bVar15;
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          pSVar17 = (String *)func_?(&stack0xfffffff8,0);
          if (pTVar16 == (TextMesh *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar16,pSVar17,(MethodInfo *)0x0);
          data = pDVar1;
          pTVar16 = (pGVar6->fields).backText;
          pSVar17 = (String *)func_?(&data,0);
          if (pTVar16 == (TextMesh *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar16,pSVar17,(MethodInfo *)0x0);
          if ((this->fields).requiredRank != 0) {
            return;
          }
        }
        if ((this->fields).shouldDeleteWhenTier0 != 0) {
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          value = (CrossPlatformInputManager_VirtualButton *)
                  func_?(TypeInfo__System__Int32,&data);
          if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,StringLiteral_RequiredRank,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                    (this_02,ownerID,pDVar1,(MethodInfo *)0x0);
        }
        pGVar6 = (this->fields).displayObject;
        if (pGVar6 != (GameRankDisplayObject *)0x0) {
          pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pGVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        func_?();
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDelete() */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_OnDelete
               (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (GameTierShopRepository *)
              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                        ((HoverCraftMotor *)this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).worldObject;
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      documentationType =
           (*(code *)(pMVar2->klass->vtable).get_DocumentationType.method)
                     (pMVar2,(pMVar2->klass->vtable).TraverseRecursiveTail.methodPtr);
      pMVar2 = (this->fields).worldObject;
      if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
         (woid = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0),
         this_01 != (GameTierShopRepository *)0x0)) {
        GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                  (this_01,GamePassTier__Enum_Tier0,documentationType,(int32_t)woid,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_SetScale
               (GameRankRequirement *this,Vector3 scale,MethodInfo *method)

{
  this_00 = (this->fields).displayObject;
  if (this_00 != (GameRankDisplayObject *)0x0) {
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


/* GameRankRequirement(GameObject, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor
               (GameRankRequirement *this,GameObject *root,MVWorldObjectClient *worldObject,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).requirementType = 2;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
  (this->fields).hasUseWhenFree = 1;
  (this->fields).shouldDeleteWhenTier0 = 1;
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).worldObject = worldObject;
  (this->fields).displayObjectRoot = root;
  return;
}


/* GameRankRequirement(GameObject, Vector3, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor_1
               (GameRankRequirement *this,GameObject *root,Vector3 displayOffset,
               MVWorldObjectClient *worldObject,bool hasUseButtonWhenFree,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).requirementType = 2;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
  (this->fields).hasUseWhenFree = 1;
  (this->fields).shouldDeleteWhenTier0 = 1;
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  uStack_3._0_4_ = (this->fields).displayObjectOffset.x;
  uStack_3._4_4_ = (this->fields).displayObjectOffset.y;
  fVar4 = (this->fields).displayObjectOffset.z;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).worldObject = worldObject;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar4;
  a.x = (float)(undefined4)uStack_3;
  a.y = (float)uStack_3._4_4_;
  b.z = displayOffset.z;
  b.x = displayOffset.x;
  b.y = displayOffset.y;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&displayOffset,a,b,(MethodInfo *)0x0);
  fVar6 = pVVar5->y;
  fVar4 = pVVar5->z;
  (this->fields).displayObjectOffset.x = pVVar5->x;
  (this->fields).displayObjectOffset.y = fVar6;
  (this->fields).displayObjectOffset.z = fVar4;
  (this->fields).displayObjectRoot = root;
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_get_GameObject
          (GameRankRequirement *this,MethodInfo *method)

{
  pGVar1 = (this->fields).displayGO;
  if (pGVar1 != (GameObject *)0x0) {
    return pGVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar2)();
  return pGVar1;
}

