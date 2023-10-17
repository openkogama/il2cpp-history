
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CalculatePosAroundPivot
               (GameRankRequirement *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
               MethodInfo *method)

{
  fVar1 = pivot.x - (pivot.x + 0.0);
  fVar2 = pivot.y - (pivot.y + 0.0);
  auVar3._4_8_ = 0;
  auVar3._0_4_ = spacingAngle * _UNK_?;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&puStack_5,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
  point.y = fVar2;
  point.x = fVar1;
  point.z = pivot.z - (pivot.z + distanceFromPivot);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&puStack_5,*pQVar4,point,(MethodInfo *)0x0);
  pGVar6 = (this->fields).displayObject;
  if (pGVar6 != (GameRankDisplayObject *)0x0) {
    fVar2 = 0.0;
    puVar7 = &UNK_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)pGVar6,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      value_00.y = (float)pGVar6;
      value_00.x = (float)puVar7;
      value_00.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar8,value_00,(MethodInfo *)0x0);
      pGVar6 = (this->fields).displayObject;
      if (pGVar6 != (GameRankDisplayObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)pGVar6,(MethodInfo *)0x0);
        this_00 = *(GameObject **)&(this->fields).hasUseWhenFree;
        if (this_00 != (GameObject *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,this_02,(MethodInfo *)0x0);
            uVar10 = pVVar9->x;
            uVar11 = pVVar9->y;
            if (pTVar8 != (Transform *)0x0) {
              worldPosition.y = pivot.y + (float)uVar11;
              worldPosition.x = pivot.x + (float)uVar10;
              worldPosition.z = pivot.z + pVVar9->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (pTVar8,worldPosition,(MethodInfo *)0x0);
              this_01 = (Component *)(this->fields).displayObjectRoot;
              if (this_01 != (Component *)0x0) {
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_01,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)&puStack_5,pTVar8,(MethodInfo *)0x0)
                  ;
                  uVar12 = pVVar9->x;
                  uVar13 = pVVar9->y;
                  uVar14 = (this->fields).displayObjectOffset.y;
                  uVar15 = (this->fields).displayObjectOffset.z;
                  value.y = (float)uVar15 + (float)uVar13;
                  value.x = (float)uVar14 + (float)uVar12;
                  value.z = (float)(this->fields).displayGO + pVVar9->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar8,value,(MethodInfo *)0x0);
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_CreateDisplayObject
               (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (pGVar2 = (pPVar1->fields).gameRankDisplayPrefab, pGVar2 != (GameRankDisplayObject *)0x0)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pGVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar2 = (GameRankDisplayObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    (this->fields).displayObject = pGVar2;
    func_?(&(this->fields).displayObject,pGVar2);
    pGVar2 = (this->fields).displayObject;
    if (pGVar2 != (GameRankDisplayObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pGVar2,(MethodInfo *)0x0);
      pGVar3 = *(GameObject **)&(this->fields).hasUseWhenFree;
      if (pGVar3 != (GameObject *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar3,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar4,value,(MethodInfo *)0x0);
          pGVar2 = (this->fields).displayObject;
          if (pGVar2 != (GameRankDisplayObject *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)pGVar2,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar4,*(Vector3 *)&(this->fields).displayObjectOffset.y,(MethodInfo *)0x0)
              ;
              pGVar2 = (this->fields).displayObject;
              if (pGVar2 != (GameRankDisplayObject *)0x0) {
                pGVar3 = (GameObject *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   ((GameObject *)pGVar2,
                                    GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                                   );
                (this->fields).displayObjectRoot = pGVar3;
                func_?(&(this->fields).displayObjectRoot,pGVar3);
                return;
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields).displayObjectRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  pGVar2 = (this->fields).displayObjectRoot;
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    obj = pGVar2[1].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2[1].monitor,(MethodInfo *)0x0);
    obj_00 = (this->fields).displayObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj_00,(MethodInfo *)0x0);
    bVar3 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar4->fields)._GameTierShopRepository_k__BackingField;
      piVar5 = (int *)(this->fields).displayObjectOffset.x;
      this = (GameRankRequirement *)CONCAT31(this._1_3_,(char)(this->fields).requirementType);
      if (piVar5 != (int *)0x0) {
        documentationType = (**(code **)(*piVar5 + 0x21c))(piVar5,*(undefined4 *)(*piVar5 + 0x220));
        fVar6 = (pGVar1->fields).displayObjectOffset.x;
        if ((fVar6 != 0.0) && (this_00 != (GameTierShopRepository *)0x0)) {
          GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                    (this_00,(GamePassTier__Enum)this,documentationType,*(int32_t *)((int)fVar6 + 8)
                     ,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetCanUseGUIResult
          (GameRankRequirement *this,MethodInfo *method)

{
  if ((char)(this->fields).requirementType != '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      UVar3 = (*pcVar2)();
      return UVar3;
    }
    if ((pPVar1->fields).gamePassTier < (byte)(this->fields).requirementType) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
      if ((pPVar1->fields).previewGamePassTier < (byte)(this->fields).requirementType) {
        GVar4 = GameRankRequirement_GetLocalPLayerRank(this,(MethodInfo *)0x0);
        if ((byte)GVar4 < (byte)(this->fields).requirementType) {
          GVar4 = GameRankRequirement_GetLocalPlayerTempRank(this,(MethodInfo *)0x0);
          return (-(uint)((byte)GVar4 < (byte)(this->fields).requirementType) & 4) +
                 UseGUIResult__Enum_CanAfford;
        }
        return UseGUIResult__Enum_CanAfford;
      }
    }
  }
  return ((char)(this->fields).worldObjectType != '\0') + UseGUIResult__Enum_NoUseButton;
}


/* GamePassTier GetLocalPLayerRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPLayerRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).gamePassTier);
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* GamePassTier GetLocalPlayerTempRank() */

GamePassTier__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetLocalPlayerTempRank
          (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).previewGamePassTier);
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Int32 GetRequirementValue() */

int32_t Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetRequirementValue
                  (GameRankRequirement *this,MethodInfo *method)

{
  return (uint)(byte)(this->fields).requirementType;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_GetShowOption
          (GameRankRequirement *this,MethodInfo *method)

{
  if ((char)(this->fields).requirementType == '\0') {
    return ShowUseOption__Enum_Normal;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (-(uint)((pPVar1->fields).gamePassTier < (byte)(this->fields).requirementType) & 0x2000)
           + (ShowUseOption__Enum_GameRankEnough|ShowUseOption__Enum_UsingGameRank);
  }
  func_?();
  pcVar2 = (code *)swi(3);
  SVar3 = (*pcVar2)();
  return SVar3;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_IsActive
               (GameRankRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  IStack_1.m_value = (int32_t)in_ECX;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RequiredRank);
    cRam_? = '\x01';
  }
  pDVar2 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)data,
                       (Object *)StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      return;
    }
    cVar4 = (char)(this->fields).requirementType;
    IStack_1.m_value._0_1_ = cVar4;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)StringLiteral_RequiredRank,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar6 = (undefined1 *)func_?();
        pGVar7 = (this->fields).displayObjectRoot;
        *(undefined1 *)&(this->fields).requirementType = *puVar6;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pGVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          if (cRam_? == '\0') {
            func_?(&
                            GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                           );
            func_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar8 == (PrefabPool *)0x0) ||
             (pGVar9 = (pPVar8->fields).gameRankDisplayPrefab,
             pGVar9 == (GameRankDisplayObject *)0x0)) goto code_?;
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pGVar9,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pGVar9 = (GameRankDisplayObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pGVar7,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          (this->fields).displayObject = pGVar9;
          func_?(&(this->fields).displayObject,pGVar9);
          pGVar9 = (this->fields).displayObject;
          if (pGVar9 == (GameRankDisplayObject *)0x0) goto code_?;
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              ((GameObject *)pGVar9,(MethodInfo *)0x0);
          pGVar7 = *(GameObject **)&(this->fields).hasUseWhenFree;
          if ((pGVar7 == (GameObject *)0x0) ||
             (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar7,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar10,value,(MethodInfo *)0x0);
          pGVar9 = (this->fields).displayObject;
          if ((pGVar9 == (GameRankDisplayObject *)0x0) ||
             (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform((GameObject *)pGVar9,(MethodInfo *)0x0),
             pTVar10 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar10,*(Vector3 *)&(this->fields).displayObjectOffset.y,(MethodInfo *)0x0);
          pGVar9 = (this->fields).displayObject;
          if (pGVar9 == (GameRankDisplayObject *)0x0) goto code_?;
          pGVar7 = (GameObject *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              ((GameObject *)pGVar9,
                               GameRankDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<GameRankDisplayObject>__
                              );
          (this->fields).displayObjectRoot = pGVar7;
          func_?(&(this->fields).displayObjectRoot,pGVar7);
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          pGVar12 = (pMVar11->fields)._GameTierShopRepository_k__BackingField;
          piVar13 = (int *)(this->fields).displayObjectOffset.x;
          data = (Dictionary_2_System_Object_System_Object_ *)
                 CONCAT31(data._1_3_,(char)(this->fields).requirementType);
          if ((piVar13 == (int *)0x0) ||
             (MVar14 = (**(code **)(*piVar13 + 0x21c))(piVar13,*(undefined4 *)(*piVar13 + 0x220)),
             pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
                    (pGVar12,(GamePassTier__Enum)data,MVar14,
                     (MVWorldObjectClient *)(this->fields).displayObjectOffset.x,(MethodInfo *)0x0);
        }
        if ((cVar4 != '\0') && (cVar4 != (char)(this->fields).requirementType)) {
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          piVar13 = (int *)(this->fields).displayObjectOffset.x;
          pGVar12 = (pMVar11->fields)._GameTierShopRepository_k__BackingField;
          if (piVar13 == (int *)0x0) goto code_?;
          MVar14 = (**(code **)(*piVar13 + 0x21c))(piVar13,*(undefined4 *)(*piVar13 + 0x220));
          fVar15 = (this->fields).displayObjectOffset.x;
          if ((fVar15 == 0.0) || (pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                    (pGVar12,IStack_1.m_value,MVar14,*(int32_t *)((int)fVar15 + 8),(MethodInfo *)0x0);
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          pGVar12 = (pMVar11->fields)._GameTierShopRepository_k__BackingField;
          piVar13 = (int *)(this->fields).displayObjectOffset.x;
          data = (Dictionary_2_System_Object_System_Object_ *)
                 CONCAT31(data._1_3_,(char)(this->fields).requirementType);
          if ((piVar13 == (int *)0x0) ||
             (MVar14 = (**(code **)(*piVar13 + 0x21c))(piVar13,*(undefined4 *)(*piVar13 + 0x220)),
             pGVar12 == (GameTierShopRepository *)0x0)) goto code_?;
          GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
                    (pGVar12,(GamePassTier__Enum)data,MVar14,
                     (MVWorldObjectClient *)(this->fields).displayObjectOffset.x,(MethodInfo *)0x0);
        }
        bVar16 = (char)(this->fields).requirementType == '\0';
        if (!bVar16) {
          pGVar7 = (this->fields).displayObjectRoot;
          if (pGVar7 == (GameObject *)0x0) goto code_?;
          bVar17 = (byte)(this->fields).requirementType;
          this_00 = pGVar7[1].klass;
          data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(bVar17,data._0_3_);
          IStack_1.m_value = (int32_t)bVar17;
          pSVar18 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
          if (this_00 == (GameObject__Class *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    ((TextMesh *)this_00,pSVar18,(MethodInfo *)0x0);
          IStack_1.m_value = (uint)data >> 0x18;
          this_01 = (TextMesh *)pGVar7[1].monitor;
          pSVar18 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
          if (this_01 == (TextMesh *)0x0) goto code_?;
          IStack_1.m_value = (int32_t)&UNK_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (this_01,pSVar18,(MethodInfo *)0x0);
          bVar16 = (char)(this->fields).requirementType == '\0';
        }
        if (!bVar16) {
          return;
        }
        if (*(char *)((int)&(this->fields).worldObjectType + 1) != '\0') {
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
          if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&data);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar2,(Object *)StringLiteral_RequiredRank,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                    (this_03,ownerID,pDVar2,(MethodInfo *)0x0);
        }
        this_02 = (Component *)(this->fields).displayObjectRoot;
        if (this_02 != (Component *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_02,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar7,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        IStack_1.m_value = (int32_t)&UNK_?;
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnDelete() */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_OnDelete
               (GameRankRequirement *this,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar2->fields)._GameTierShopRepository_k__BackingField;
    piVar3 = (int *)(this->fields).displayObjectOffset.x;
    if (piVar3 != (int *)0x0) {
      documentationType =
           (**(code **)(*piVar3 + 0x21c))
                     (piVar3,*(undefined4 *)(*piVar3 + 0x220),(char)(this->fields).requirementType);
      fVar4 = (this->fields).displayObjectOffset.x;
      if ((fVar4 != 0.0) && (this_00 != (GameTierShopRepository *)0x0)) {
        tier = *(GamePassTier__Enum *)((int)fVar4 + 8);
        GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
                  (this_00,tier,documentationType,tier,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_SetScale
               (GameRankRequirement *this,Vector3 scale,MethodInfo *method)

{
  this_00 = (Component *)(this->fields).displayObjectRoot;
  if (this_00 != (Component *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,scale,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameRankRequirement(GameObject, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor
               (GameRankRequirement *this,GameObject *root,MVWorldObjectClient *worldObject,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObject = (MVWorldObjectClient *)0x2;
  (this->fields).displayGO = (GameObject *)0x0;
  *(undefined2 *)&(this->fields).worldObjectType = 0x101;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  *(bool *)&(this->fields).worldObjectType = hasUseButtonWhenFree;
  (this->fields).displayObjectOffset.x = (float)worldObject;
  func_?(&(this->fields).displayObjectOffset,worldObject);
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  func_?(&(this->fields).hasUseWhenFree,root);
  return;
}


/* GameRankRequirement(GameObject, Vector3, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement__ctor_1
               (GameRankRequirement *this,GameObject *root,Vector3 displayOffset,
               MVWorldObjectClient *worldObject,bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).worldObject = (MVWorldObjectClient *)0x2;
  (this->fields).displayGO = (GameObject *)0x0;
  *(undefined2 *)&(this->fields).worldObjectType = 0x101;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  *(bool *)&(this->fields).worldObjectType = hasUseButtonWhenFree;
  (this->fields).displayObjectOffset.x = (float)worldObject;
  func_?(&(this->fields).displayObjectOffset,worldObject);
  uVar1 = (this->fields).displayObjectOffset.y;
  uVar2 = (this->fields).displayObjectOffset.z;
  pGVar3 = (this->fields).displayGO;
  (this->fields).displayObjectOffset.y = displayOffset.x + (float)uVar1;
  (this->fields).displayObjectOffset.z = displayOffset.y + (float)uVar2;
  (this->fields).displayGO = (GameObject *)(displayOffset.z + (float)pGVar3);
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  func_?(&(this->fields).hasUseWhenFree,root);
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::GameRankRequirement::GameRankRequirement_get_GameObject
          (GameRankRequirement *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).displayObject;
  if (pGVar2 != (GameRankDisplayObject *)0x0) {
    return (GameObject *)pGVar2;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pGVar6 = (GameObject *)(*pcVar5)();
  return pGVar6;
}

