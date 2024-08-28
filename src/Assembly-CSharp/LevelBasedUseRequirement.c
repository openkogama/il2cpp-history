
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CalculatePosAroundPivot
               (LevelBasedUseRequirement *this,Vector3 pivot,float spacingAngle,
               float distanceFromPivot,MethodInfo *method)

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
  pGVar6 = (this->fields).go;
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
      pGVar6 = (this->fields).go;
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
              if (this_00 != (LevelDisplayCube *)0x0) {
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

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CreateDisplayObject
               (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    LevelDisplayCube_MethodInfo__UnityEngine__GameObject__GetComponent<LevelDisplayCube>__
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
     (pLVar2 = (pPVar1->fields).levelDisplayPrefab, pLVar2 != (LevelDisplayCube *)0x0)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pLVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    ppGVar4 = &(this->fields).go;
    *ppGVar4 = pGVar3;
    func_?(ppGVar4,pGVar3);
    if (*ppGVar4 != (GameObject *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (*ppGVar4,(MethodInfo *)0x0);
      pGVar3 = (this->fields).displayObjectRoot;
      if (pGVar3 != (GameObject *)0x0) {
        value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar3,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar5,value,(MethodInfo *)0x0);
          if (*ppGVar4 != (GameObject *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (*ppGVar4,(MethodInfo *)0x0);
            if (pTVar5 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar5,(this->fields).displayObjectOffset,(MethodInfo *)0x0);
              if (*ppGVar4 != (GameObject *)0x0) {
                pLVar2 = (LevelDisplayCube *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   (*ppGVar4,
                                    LevelDisplayCube_MethodInfo__UnityEngine__GameObject__GetComponent<LevelDisplayCube>__
                                   );
                ppLVar6 = &(this->fields).displayObject;
                *ppLVar6 = pLVar2;
                func_?(ppLVar6,pLVar2);
                if (*ppLVar6 != (LevelDisplayCube *)0x0) {
                  pRVar7 = LevelDisplayCube::LevelDisplayCube_get_Renderers
                                     (*ppLVar6,(MethodInfo *)0x0);
                  uVar8 = 0;
                  if (pRVar7 != (Renderer__Array *)0x0) {
                    ppRVar9 = pRVar7->vector;
                    while( true ) {
                      if ((int)pRVar7->max_length <= (int)uVar8) {
                        return;
                      }
                      if (pRVar7->max_length <= uVar8) break;
                      if (*ppRVar9 == (Renderer *)0x0) goto code_?;
                      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_material(*ppRVar9,(MethodInfo *)0x0);
                      if (this_00 == (Material *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                                (this_00,(Texture *)0x0,(MethodInfo *)0x0);
                      uVar8 = uVar8 + 1;
                      ppRVar9 = ppRVar9 + 1;
                    }
                    func_?();
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_DestroyRequirement
               (LevelBasedUseRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).displayObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pLVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pLVar1 = (this->fields).displayObject;
    if (pLVar1 == (LevelDisplayCube *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LevelDisplayCube::LevelDisplayCube_Destroy(pLVar1,(MethodInfo *)0x0);
    obj = (this->fields).go;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_GetCanUseGUIResult
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if ((this->fields).levelAmount != 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        if ((this->fields).levelAmount <= (pMVar2->fields)._.level) goto code_?;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            return (uint)((pMVar2->fields)._.level < (this->fields).levelAmount) * 4 +
                   UseGUIResult__Enum_CanAfford;
          }
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    UVar4 = (*pcVar3)();
    return UVar4;
  }
code_?:
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_GetShowOption
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if ((this->fields).levelAmount == 0) {
    return ShowUseOption__Enum_Normal;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      SVar2 = ShowUseOption__Enum_LevelEnough|ShowUseOption__Enum_UsingLevels;
      if ((pMVar1->fields)._.level < (this->fields).levelAmount) {
        SVar2 = ShowUseOption__Enum_LevelInsufficient|ShowUseOption__Enum_UsingLevels;
      }
      return SVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  SVar2 = (*pcVar3)();
  return SVar2;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_IsActive
               (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).go;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_OnDataUpdate
               (LevelBasedUseRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
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
    func_?(&StringLiteral_levelAmount);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_levelAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                       (Object *)StringLiteral_levelAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int *)func_?();
      x = _UNK_?;
      _UNK_? = *piVar3;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        LevelBasedUseRequirement_CreateDisplayObject
                  ((LevelBasedUseRequirement *)&UNK_?,(MethodInfo *)0x0);
      }
      if (0 < _UNK_?) {
        if (_UNK_? == (LevelDisplayCube *)0x0) goto code_?;
        LevelDisplayCube::LevelDisplayCube_SetAmount(_UNK_?,_UNK_?,(MethodInfo *)0x0);
      }
      if (_UNK_? != 0) {
        return;
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_levelAmount,(Object *)0x0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if ((this_01 != (MVNetworkGame_OperationRequests *)0x0) &&
           (MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_01,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_00,
                       (MethodInfo *)0x0), _UNK_? != (LevelDisplayCube *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)_UNK_?,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_SetScale
               (LevelBasedUseRequirement *this,Vector3 scale,MethodInfo *method)

{
  fVar1 = scale.x * _UNK_?;
  this_00 = (this->fields).displayObject;
  fVar2 = scale.y * _UNK_?;
  fVar3 = scale.z * _UNK_?;
  if (this_00 != (LevelDisplayCube *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      value.y = fVar2;
      value.x = fVar1;
      value.z = fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* LevelBasedUseRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
               (LevelBasedUseRequirement *this,GameObject *root,bool hasUseButtonWhenFree,
               MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).hasUseWhenFree = 1;
  (this->fields).displayObjectOffset.z = 0.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppGVar1 = &(this->fields).displayObjectRoot;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  *ppGVar1 = root;
  func_?(ppGVar1,root);
  return;
}


/* LevelBasedUseRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor_1
               (LevelBasedUseRequirement *this,GameObject *root,Vector3 displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  (this->fields).displayObjectOffset.x = 0.0;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).hasUseWhenFree = 1;
  (this->fields).displayObjectOffset.z = 0.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  uVar1 = (this->fields).displayObjectOffset.x;
  uVar2 = (this->fields).displayObjectOffset.y;
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  fVar3 = (this->fields).displayObjectOffset.z;
  ppGVar4 = &(this->fields).displayObjectRoot;
  (this->fields).displayObjectOffset.x = displayOffset.x + (float)uVar1;
  (this->fields).displayObjectOffset.y = displayOffset.y + (float)uVar2;
  (this->fields).displayObjectOffset.z = displayOffset.z + fVar3;
  *ppGVar4 = root;
  func_?(ppGVar4,root);
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_get_GameObject
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  pLStack_1 = (LevelDisplayCube *)&stack0xfffffffc;
  pLVar2 = (this->fields).displayObject;
  if (pLVar2 != (LevelDisplayCube *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pLStack_1 = pLVar2;
    pGVar3 = (GameObject *)(*pcRam_?)();
    return pGVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar6)();
  return pGVar3;
}

