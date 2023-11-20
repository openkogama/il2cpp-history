
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CalculatePosAroundPivot
               (StarRequirement *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
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
  pGVar6 = (this->fields).displayGO;
  if (pGVar6 != (GameObject *)0x0) {
    fVar2 = 0.0;
    puVar7 = &UNK_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar6,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      value_00.y = (float)pGVar6;
      value_00.x = (float)puVar7;
      value_00.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar8,value_00,(MethodInfo *)0x0);
      pGVar6 = (this->fields).displayGO;
      if (pGVar6 != (GameObject *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        pGVar6 = (this->fields).displayObjectRoot;
        if (pGVar6 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
            uVar10 = pVVar9->x;
            uVar11 = pVVar9->y;
            if (pTVar8 != (Transform *)0x0) {
              worldPosition.y = pivot.y + (float)uVar11;
              worldPosition.x = pivot.x + (float)uVar10;
              worldPosition.z = pivot.z + pVVar9->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (pTVar8,worldPosition,(MethodInfo *)0x0);
              this_00 = (this->fields).displayObject;
              if (this_00 != (StarDisplayObject *)0x0) {
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                if (pTVar8 != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)&puStack_5,pTVar8,(MethodInfo *)0x0)
                  ;
                  uVar12 = pVVar9->x;
                  uVar13 = pVVar9->y;
                  uVar14 = (this->fields).displayObjectOffset.x;
                  uVar15 = (this->fields).displayObjectOffset.y;
                  value.y = (float)uVar15 + (float)uVar13;
                  value.x = (float)uVar14 + (float)uVar12;
                  value.z = (this->fields).displayObjectOffset.z + pVVar9->z;
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

void Assembly-CSharp.dll::StarRequirement::StarRequirement_CreateDisplayObject
               (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
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
     (pSVar2 = (pPVar1->fields).starDisplayPrefab, pSVar2 != (StarDisplayObject *)0x0)) {
    original = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pSVar2,(MethodInfo *)0x0);
    pGVar3 = (this->fields).displayObjectRoot;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)original,pTVar4,1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      (this->fields).displayGO = pGVar3;
      func_?(&(this->fields).displayGO,pGVar3);
      pGVar3 = (this->fields).displayGO;
      if (pGVar3 != (GameObject *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,(this->fields).displayObjectOffset,(MethodInfo *)0x0);
          pGVar3 = (this->fields).displayGO;
          if (pGVar3 != (GameObject *)0x0) {
            pSVar2 = (StarDisplayObject *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                               (pGVar3,
                                StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                               );
            (this->fields).displayObject = pSVar2;
            func_?(&(this->fields).displayObject,pSVar2);
            return;
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).displayObject;
    if (pSVar1 == (StarDisplayObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    obj = (pSVar1->fields).frontText;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(pSVar1->fields).backText,(MethodInfo *)0x0);
    obj_00 = (this->fields).displayGO;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar2 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar2->fields)._size < 2) {
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
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          this_01 = (pMVar1->fields).gameStatCounterManager;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
            if ((pMVar3 != (MVLocalPlayer *)0x0) && (this_01 != (GameStatCounterManager *)0x0)) {
              iVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                                (this_01,GameStatCounterType__Enum_Collectible,
                                 (pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
              return iVar4;
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
  if ((this->fields).starAmount != 0) {
    iVar1 = StarRequirement_GetLocalPLayerStat(this,(MethodInfo *)0x0);
    SVar2 = ShowUseOption__Enum_StarsEnough|ShowUseOption__Enum_UsingStars;
    if (iVar1 < (this->fields).starAmount) {
      SVar2 = ShowUseOption__Enum_StarsInsufficient|ShowUseOption__Enum_UsingStars;
    }
    return SVar2;
  }
  return ShowUseOption__Enum_Normal;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::StarRequirement::StarRequirement_IsActive
               (StarRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).displayGO;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&StringLiteral_starAmount);
    cRam_? = '\x01';
  }
  this_01 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        puVar3 = (undefined4 *)func_?();
        x = *(Object_1 **)(TVar2.m_Index + 0x20);
        *(undefined4 *)(TVar2.m_Index + 0xc) = *puVar3;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (cRam_? == '\0') {
            func_?(&
                            StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                           );
            func_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                           );
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar4 == (PrefabPool *)0x0) ||
             (this_00 = (pPVar4->fields).starDisplayPrefab, this_00 == (StarDisplayObject *)0x0))
          goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          if (*(GameObject **)(TVar2.m_Index + 0x24) == (GameObject *)0x0) goto code_?;
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (*(GameObject **)(TVar2.m_Index + 0x24),(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                              ((Object *)pGVar5,pTVar6,1,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                              );
          *(Object **)(TVar2.m_Index + 0x1c) = pOVar7;
          func_?(TVar2.m_Index + 0x1c,pOVar7);
          if ((*(GameObject **)(TVar2.m_Index + 0x1c) == (GameObject *)0x0) ||
             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (*(GameObject **)(TVar2.m_Index + 0x1c),(MethodInfo *)0x0),
             pTVar6 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar6,*(Vector3 *)(TVar2.m_Index + 0x10),(MethodInfo *)0x0);
          if (*(GameObject **)(TVar2.m_Index + 0x1c) == (GameObject *)0x0) goto code_?;
          pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (*(GameObject **)(TVar2.m_Index + 0x1c),
                               StarDisplayObject_MethodInfo__UnityEngine__GameObject__GetComponent<StarDisplayObject>__
                              );
          *(Object **)(TVar2.m_Index + 0x20) = pOVar7;
          func_?(TVar2.m_Index + 0x20,pOVar7);
        }
        iVar8 = *(int *)(TVar2.m_Index + 0xc);
        if (0 < iVar8) {
          iVar8 = *(int *)(TVar2.m_Index + 0x20);
          if (iVar8 == 0) goto code_?;
          data = *(Dictionary_2_System_Object_System_Object_ **)(TVar2.m_Index + 0xc);
          pTVar9 = *(TextMesh **)(iVar8 + 0x10);
          pSVar10 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&data,(MethodInfo *)0x0);
          if (pTVar9 == (TextMesh *)0x0) goto code_?;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar9,pSVar10,(MethodInfo *)0x0);
          pTVar9 = *(TextMesh **)(iVar8 + 0x14);
          pSVar10 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&data,(MethodInfo *)0x0);
          if (pTVar9 == (TextMesh *)0x0) goto code_?;
          data = (Dictionary_2_System_Object_System_Object_ *)0x0;
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    (pTVar9,pSVar10,(MethodInfo *)0x0);
          iVar8 = *(int *)(TVar2.m_Index + 0xc);
        }
        if (iVar8 != 0) {
          return;
        }
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        data = (Dictionary_2_System_Object_System_Object_ *)0x0;
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&data);
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,
                     (Object *)StringLiteral_starAmount,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_03,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_02,
                       (MethodInfo *)0x0);
            if (*(Component **)(TVar2.m_Index + 0x20) != (Component *)0x0) {
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (*(Component **)(TVar2.m_Index + 0x20),(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)pGVar5,(MethodInfo *)0x0);
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
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* StarRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor
               (StarRequirement *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).hasUseWhenFree = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).displayObjectRoot = root;
  func_?(&(this->fields).displayObjectRoot,root);
  return;
}


/* StarRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::StarRequirement::StarRequirement__ctor_1
               (StarRequirement *this,GameObject *root,Vector3 displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).hasUseWhenFree = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  uVar1 = (this->fields).displayObjectOffset.x;
  uVar2 = (this->fields).displayObjectOffset.y;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  fVar3 = (this->fields).displayObjectOffset.z;
  (this->fields).displayObjectOffset.x = displayOffset.x + (float)uVar1;
  (this->fields).displayObjectOffset.y = displayOffset.y + (float)uVar2;
  (this->fields).displayObjectOffset.z = displayOffset.z + fVar3;
  (this->fields).displayObjectRoot = root;
  func_?(&(this->fields).displayObjectRoot,root);
  return;
}

