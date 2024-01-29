
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CalculatePosAroundPivot
               (GameCoinLogic *this,Vector3 pivot,float spacingAngle,float distanceFromPivot,
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
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&puStack_5,*pQVar4,point,(MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  uVar8 = pVVar6->y;
  fVar2 = pVVar6->z;
  fVar9 = pivot.x + (float)uVar7;
  fVar1 = pivot.y + (float)uVar8;
  pGVar10 = (this->fields).displayObject;
  if (pGVar10 != (GameCoinDisplayObject *)0x0) {
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pGVar10,(MethodInfo *)0x0);
    if (pTVar11 != (Transform *)0x0) {
      value_00.y = fVar1;
      value_00.x = fVar9;
      value_00.z = pivot.z + fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar11,value_00,(MethodInfo *)0x0);
      pGVar10 = (this->fields).displayObject;
      if (pGVar10 != (GameCoinDisplayObject *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pGVar10,(MethodInfo *)0x0);
        this_00 = (this->fields).displayObjectRoot;
        if (this_00 != (GameObject *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&puStack_5,this_01,(MethodInfo *)0x0);
            uVar12 = pVVar6->x;
            uVar13 = pVVar6->y;
            if (pTVar11 != (Transform *)0x0) {
              worldPosition.y = pivot.y + (float)uVar13;
              worldPosition.x = pivot.x + (float)uVar12;
              worldPosition.z = pivot.z + pVVar6->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                        (pTVar11,worldPosition,(MethodInfo *)0x0);
              pGVar10 = (this->fields).displayObject;
              if (pGVar10 != (GameCoinDisplayObject *)0x0) {
                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pGVar10,(MethodInfo *)0x0);
                if (pTVar11 != (Transform *)0x0) {
                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffd8,pTVar11,(MethodInfo *)0x0);
                  uVar14 = pVVar6->x;
                  uVar15 = pVVar6->y;
                  uVar16 = (this->fields).displayObjectOffset.x;
                  uVar17 = (this->fields).displayObjectOffset.y;
                  value.y = (float)uVar17 + (float)uVar15;
                  value.x = (float)uVar16 + (float)uVar14;
                  value.z = (this->fields).displayObjectOffset.z + pVVar6->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar11,value,(MethodInfo *)0x0);
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CreateDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pGVar2 = (pPVar1->fields).gameCoinDisplayPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar2 = (GameCoinDisplayObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                       );
    (this->fields).displayObject = pGVar2;
    func_?(&(this->fields).displayObject,pGVar2);
    pGVar2 = (this->fields).displayObject;
    if (pGVar2 != (GameCoinDisplayObject *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pGVar2,(MethodInfo *)0x0);
      (this->fields).displayGO = pGVar3;
      func_?(&(this->fields).displayGO,pGVar3);
      pGVar3 = (this->fields).displayGO;
      if (pGVar3 != (GameObject *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
        pGVar3 = (this->fields).displayObjectRoot;
        if (pGVar3 != (GameObject *)0x0) {
          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).displayObject;
    if (pGVar1 == (GameCoinDisplayObject *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GameCoinDisplayObject::GameCoinDisplayObject_Destroy(pGVar1,(MethodInfo *)0x0);
    obj = (this->fields).displayGO;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyRequirement
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_gameCoinAmount);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = (this->fields).displayObject;
    if (pGVar1 == (GameCoinDisplayObject *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_gameCoinAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 != 0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar3->fields)._GameCoinManager_k__BackingField,
         this_00 == (MVGameCoinManager *)0x0)) goto code_?;
      MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
                (this_00,-(this->fields).purchaseAmount,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetCanUseGUIResult
          (GameCoinLogic *this,MethodInfo *method)

{
  if ((this->fields).purchaseAmount == 0) {
    return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    iVar2 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
    return (uint)(iVar2 < (this->fields).purchaseAmount) * 4 + UseGUIResult__Enum_CanAfford;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  UVar4 = (*pcVar3)();
  return UVar4;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetShowOption
          (GameCoinLogic *this,MethodInfo *method)

{
  if ((this->fields).purchaseAmount == 0) {
    return ShowUseOption__Enum_Normal;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    iVar2 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
    return (uint)(iVar2 < (this->fields).purchaseAmount) * 2 +
           (ShowUseOption__Enum_GameCoinsEnough|ShowUseOption__Enum_UsingGameCoins);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  SVar4 = (*pcVar3)();
  return SVar4;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_IsActive
               (GameCoinLogic *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_OnDataUpdate
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

{
  method = (MethodInfo *)0x0;
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
    func_?(&StringLiteral_gameCoinAmount);
    cRam_? = '\x01';
  }
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                     (Object *)StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar1 != 0) {
    iVar2 = (this->fields).purchaseAmount;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_gameCoinAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      goto code_?;
    }
    piVar4 = (int32_t *)func_?();
    (this->fields).purchaseAmount = *piVar4;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar5->fields)._GameCoinManager_k__BackingField,
       this_00 == (MVGameCoinManager *)0x0)) goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_00,(this->fields).purchaseAmount - iVar2,(MethodInfo *)0x0);
    iVar2 = (this->fields).purchaseAmount;
    if (0 < iVar2) {
      pGVar6 = (this->fields).displayObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?(&
                          GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar7 == (PrefabPool *)0x0) goto code_?;
        pGVar6 = (pPVar7->fields).gameCoinDisplayPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pGVar6 = (GameCoinDisplayObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar6,
                            GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                           );
        (this->fields).displayObject = pGVar6;
        func_?();
        pGVar6 = (this->fields).displayObject;
        if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar6,(MethodInfo *)0x0);
        (this->fields).displayGO = pGVar8;
        func_?();
        pGVar8 = (this->fields).displayGO;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        pGVar8 = (this->fields).displayObjectRoot;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar8,(MethodInfo *)0x0);
        if (this_02 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,value,(MethodInfo *)0x0);
      }
      iVar2 = (this->fields).purchaseAmount;
    }
    if (iVar2 == 0) {
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
      value_00 = (Object *)func_?(TypeInfo__System__Int32,&data);
      if (this_03 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_03,
                 (Object *)StringLiteral_gameCoinAmount,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_04,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_03,
                 (MethodInfo *)0x0);
      pGVar6 = (this->fields).displayObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pGVar6 = (this->fields).displayObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pGVar6 = (this->fields).displayObject;
          if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
          GameCoinDisplayObject::GameCoinDisplayObject_Destroy(pGVar6,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar6 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar6 = (this->fields).displayObject;
    if (pGVar6 == (GameCoinDisplayObject *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    GameCoinDisplayObject::GameCoinDisplayObject_SetAmount
              (pGVar6,(this->fields).purchaseAmount,(MethodInfo *)0x0);
  }
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_PayUseCost
               (GameCoinLogic *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    MVGameCoinManager::MVGameCoinManager_Consume(this_00,this,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAmount(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetAmount
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

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
    func_?(&StringLiteral_gameCoinAmount);
    cRam_? = '\x01';
  }
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                     (Object *)StringLiteral_gameCoinAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar1 != 0) {
    iVar2 = (this->fields).purchaseAmount;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_gameCoinAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      goto code_?;
    }
    piVar4 = (int32_t *)func_?();
    (this->fields).purchaseAmount = *piVar4;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (this_00 = (pMVar5->fields)._GameCoinManager_k__BackingField,
       this_00 == (MVGameCoinManager *)0x0)) goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_00,(this->fields).purchaseAmount - iVar2,(MethodInfo *)0x0);
    iVar2 = (this->fields).purchaseAmount;
    if (0 < iVar2) {
      pGVar6 = (this->fields).displayObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?(&
                          GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar7 == (PrefabPool *)0x0) goto code_?;
        pGVar6 = (pPVar7->fields).gameCoinDisplayPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pGVar6 = (GameCoinDisplayObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar6,
                            GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                           );
        (this->fields).displayObject = pGVar6;
        func_?();
        pGVar6 = (this->fields).displayObject;
        if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar6,(MethodInfo *)0x0);
        (this->fields).displayGO = pGVar8;
        func_?();
        pGVar8 = (this->fields).displayGO;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar8,(MethodInfo *)0x0);
        pGVar8 = (this->fields).displayObjectRoot;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar8,(MethodInfo *)0x0);
        if (this_02 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,value,(MethodInfo *)0x0);
      }
      iVar2 = (this->fields).purchaseAmount;
    }
    if (iVar2 == 0) {
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
      value_00 = (Object *)func_?(TypeInfo__System__Int32,&data);
      if (this_03 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_03,
                 (Object *)StringLiteral_gameCoinAmount,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_04,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_03,
                 (MethodInfo *)0x0);
      pGVar6 = (this->fields).displayObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pGVar6 = (this->fields).displayObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pGVar6 = (this->fields).displayObject;
          if (pGVar6 == (GameCoinDisplayObject *)0x0) goto code_?;
          GameCoinDisplayObject::GameCoinDisplayObject_Destroy(pGVar6,(MethodInfo *)0x0);
          pGVar8 = (this->fields).displayGO;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar6 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pGVar6 = (this->fields).displayObject;
    if (pGVar6 == (GameCoinDisplayObject *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    GameCoinDisplayObject::GameCoinDisplayObject_SetAmount
              (pGVar6,(this->fields).purchaseAmount,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetScale
               (GameCoinLogic *this,Vector3 scale,MethodInfo *method)

{
  this_00 = (this->fields).displayObject;
  if (this_00 != (GameCoinDisplayObject *)0x0) {
    WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject::
    RewardedAdDisplayObject_SetScale((RewardedAdDisplayObject *)this_00,scale,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameCoinLogic(GameObject, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor
               (GameCoinLogic *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).requirementType = 1;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).hasUseWhenFree = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).displayObjectRoot = root;
  func_?(&(this->fields).displayObjectRoot,root);
  return;
}


/* GameCoinLogic(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor_1
               (GameCoinLogic *this,GameObject *root,Vector3 displayObjectOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).requirementType = 1;
  (this->fields).displayObjectOffset.z = 0.0;
  (this->fields).hasUseWhenFree = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  uVar1 = (this->fields).displayObjectOffset.x;
  uVar2 = (this->fields).displayObjectOffset.y;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  fVar3 = (this->fields).displayObjectOffset.z;
  (this->fields).displayObjectOffset.x = displayObjectOffset.x + (float)uVar1;
  (this->fields).displayObjectOffset.y = displayObjectOffset.y + (float)uVar2;
  (this->fields).displayObjectOffset.z = displayObjectOffset.z + fVar3;
  (this->fields).displayObjectRoot = root;
  func_?(&(this->fields).displayObjectRoot,root);
  return;
}

