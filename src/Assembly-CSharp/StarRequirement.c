
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CalculatePosAroundPivot
               (StarRequirement *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
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
  pGVar13 = ((StarRequirement__Fields *)(uVar11 + 8))->displayGO;
  if (pGVar13 != (GameObject *)0x0) {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar13,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      value.z = fVar7;
      value.x = (float)uVar12;
      value.y = SUB84(uVar12,4);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar14,value,(MethodInfo *)0x0);
      pGVar13 = ((StarRequirement__Fields *)(uVar11 + 8))->displayGO;
      if (pGVar13 != (GameObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar13,(MethodInfo *)0x0);
        pGVar13 = ((StarRequirement__Fields *)(uVar11 + 8))->displayObjectRoot;
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
              this_00 = ((StarRequirement__Fields *)(uVar11 + 8))->displayObject;
              if (this_00 != (StarDisplayObject *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&pivot,pTVar14,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     (&pivot,*pVVar5,
                                      ((StarRequirement__Fields *)(uVar11 + 8))->displayObjectOffset,
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

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CreateDisplayObject
               (StarRequirement *this,MethodInfo *method)

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
    this_01 = MVAvatar::MVAvatar_GetHealRayAttachmentObject((MVAvatar *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      pXVar1 = (XpBoostParticlePreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
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
      (pMVar2->field7_0x1c).methodMetadataHandle = (Il2CppMetadataMethodDefinitionHandle)pXVar1;
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)pXVar1,(MethodInfo *)0x0);
        if ((GameObject *)pMVar2->token != (GameObject *)0x0) {
          value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)pMVar2->token,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar3,value_00,(MethodInfo *)0x0);
            if ((GameObject *)(pMVar2->field7_0x1c).methodMetadataHandle != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)(pMVar2->field7_0x1c).methodMetadataHandle,
                                  (MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                value.x = (float)pMVar2->klass;
                value.y = (float)pMVar2->return_type;
                value.z = (float)pMVar2->parameters;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar3,value,(MethodInfo *)0x0);
                if ((GameObject *)(pMVar2->field7_0x1c).methodMetadataHandle != (GameObject *)0x0) {
                  pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_GetComponent_47
                                     ((GameObject *)(pMVar2->field7_0x1c).methodMetadataHandle,
                                      StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                                     );
                  (pMVar2->field8_0x20).genericMethod = (Il2CppGenericMethod *)pUVar4;
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

void Assembly-CSharp.dll::StarRequirement::StarRequirement_DestroyRequirement
               (StarRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).displayObject;
    if (pSVar1 == (StarDisplayObject *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    obj = (pSVar1->fields).frontText;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(pSVar1->fields).backText,(MethodInfo *)0x0);
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


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::StarRequirement::StarRequirement_GetCanUseGUIResult
          (StarRequirement *this,MethodInfo *method)

{
  if ((this->fields).starAmount != 0) {
    iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
    if (iVar1 < (this->fields).starAmount) {
      iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
      return (uint)(iVar1 < (this->fields).starAmount) * 4 + UseGUIResult__Enum_CanAfford;
    }
  }
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* Int32 GetLocalPLayerStat() */

int32_t Assembly-CSharp.dll::StarRequirement::StarRequirement_GetLocalPLayerStat
                  (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (SkyParam *)0x0) {
      this_01 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)this_00,(MethodInfo *)0x0)
      ;
      if (this_01 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                           );
        if ((int)pOVar2 < 2) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if (pMVar3 != (MVLocalPlayer *)0x0) {
              iVar4 = MVPlayer::MVPlayer_GetGameStat
                                ((MVPlayer *)pMVar3,GameStatCounterType__Enum_Collectible,
                                 (MethodInfo *)0x0);
              return iVar4;
            }
          }
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            this_02 = (GameStatCounterManager *)
                      DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
              if (pMVar3 != (MVLocalPlayer *)0x0) {
                team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                 ((KogamaSettingNumericBase_1_System_Single_ *)pMVar3,
                                  (MethodInfo *)0x0);
                if (this_02 != (GameStatCounterManager *)0x0) {
                  iVar4 = MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_GetTeamCount
                                    (this_02,GameStatCounterType__Enum_Collectible,
                                     (MVTeam__Enum)team,(MethodInfo *)0x0);
                  return iVar4;
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
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::StarRequirement::StarRequirement_GetShowOption
          (StarRequirement *this,MethodInfo *method)

{
  if ((this->fields).starAmount == 0) {
    return ShowUseOption__Enum_Normal;
  }
  iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
  if (iVar1 < (this->fields).starAmount) {
    return ShowUseOption__Enum_StarsInsufficient|ShowUseOption__Enum_UsingStars;
  }
  return ShowUseOption__Enum_StarsEnough|ShowUseOption__Enum_UsingStars;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::StarRequirement::StarRequirement_IsActive
               (StarRequirement *this,MethodInfo *method)

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

void Assembly-CSharp.dll::StarRequirement::StarRequirement_OnDataUpdate
               (StarRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
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
                        *)data,StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)StringLiteral_starAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar3 != (Pool *)0x0) {
      if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar4 = (undefined4 *)func_?();
        pPVar5 = pPVar3[1].klass;
        (pPVar3->fields).prefab = (MonoBehaviour *)*puVar4;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pPVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
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
             (pGVar6 = MVAvatar::MVAvatar_GetHealRayAttachmentObject
                                 ((MVAvatar *)this_00,(MethodInfo *)0x0),
             pGVar6 == (GameObject *)0x0)) goto code_?;
          original = (XpBoostParticlePreviewer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pGVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pMVar7 = (MonoBehaviour__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             (original,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
          (pPVar3->fields).pool = pMVar7;
          if (pMVar7 == (MonoBehaviour__Array *)0x0) goto code_?;
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             ((GameObject *)pMVar7,(MethodInfo *)0x0);
          if (((GameObject *)pPVar3[1].monitor == (GameObject *)0x0) ||
             (value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform((GameObject *)pPVar3[1].monitor,(MethodInfo *)0x0)
             , pTVar8 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar8,value_00,(MethodInfo *)0x0);
          pMVar7 = (pPVar3->fields).pool;
          if ((pMVar7 == (MonoBehaviour__Array *)0x0) ||
             (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 ((GameObject *)pMVar7,(MethodInfo *)0x0),
             pTVar8 == (Transform *)0x0)) goto code_?;
          value.x = (float)(pPVar3->fields).poolEnum;
          value.y = (float)(pPVar3->fields).parent;
          value.z = (float)(pPVar3->fields).available;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar8,value,(MethodInfo *)0x0);
          pMVar7 = (pPVar3->fields).pool;
          if (pMVar7 == (MonoBehaviour__Array *)0x0) goto code_?;
          pPVar5 = (Pool__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                             ((GameObject *)pMVar7,
                              StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                             );
          pPVar3[1].klass = pPVar5;
        }
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(pPVar3->fields).prefab;
        if (0 < (int)pDVar1) {
          pPVar5 = pPVar3[1].klass;
          if (pPVar5 == (Pool__Class *)0x0) goto code_?;
          pTVar9 = (TextMesh *)(pPVar5->_0).namespaze;
          data = pDVar1;
          pSVar10 = (String *)func_?(&data,0);
          if (pTVar9 == (TextMesh *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar9,pSVar10,(MethodInfo *)0x0);
          pTVar9 = (TextMesh *)(pPVar5->_0).byval_arg.data.typeHandle;
          pSVar10 = (String *)func_?(&data,0);
          if (pTVar9 == (TextMesh *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar9,pSVar10,(MethodInfo *)0x0);
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(pPVar3->fields).prefab;
        }
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          return;
        }
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
        value_01 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32,&data);
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,StringLiteral_starAmount,value_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_01,ownerID,pDVar1,(MethodInfo *)0x0);
            if (pPVar3[1].klass != (Pool__Class *)0x0) {
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pPVar3[1].klass,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        func_?();
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_SetScale
               (StarRequirement *this,Vector3 scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                     ((Vector3 *)&puStack_2,scale,2.0,(MethodInfo *)0x0);
  value = *pVVar1;
  if (this_00 != (StarDisplayObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* StarRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor
               (StarRequirement *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).requirementType = 2;
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


/* StarRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor_1
               (StarRequirement *this,GameObject *root,Vector3 displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

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
Assembly-CSharp.dll::StarRequirement::StarRequirement_get_GameObject
          (StarRequirement *this,MethodInfo *method)

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

