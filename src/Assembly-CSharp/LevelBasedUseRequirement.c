
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CalculatePosAroundPivot
               (LevelBasedUseRequirement *this,Vector3 pivot,float spacingAngle,
               float distanceFromPivot,MethodInfo *method)

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
  pGVar13 = ((LevelBasedUseRequirement__Fields *)(uVar11 + 8))->go;
  if (pGVar13 != (GameObject *)0x0) {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar13,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      value.z = fVar7;
      value.x = (float)uVar12;
      value.y = SUB84(uVar12,4);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar14,value,(MethodInfo *)0x0);
      pGVar13 = ((LevelBasedUseRequirement__Fields *)(uVar11 + 8))->go;
      if (pGVar13 != (GameObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar13,(MethodInfo *)0x0);
        pGVar13 = ((LevelBasedUseRequirement__Fields *)(uVar11 + 8))->displayObjectRoot;
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
              this_00 = ((LevelBasedUseRequirement__Fields *)(uVar11 + 8))->displayObject;
              if (this_00 != (LevelDisplayCube *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&pivot,pTVar14,(MethodInfo *)0x0);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                     (&pivot,*pVVar5,
                                      ((LevelBasedUseRequirement__Fields *)(uVar11 + 8))->
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

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_CreateDisplayObject
               (LevelBasedUseRequirement *this,MethodInfo *method)

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
    this_01 = PrefabPool::PrefabPool_get_LevelDisplayPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (LevelDisplayCube *)0x0) {
      pXVar1 = (XpBoostParticlePreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar1,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      (this->fields).go = (GameObject *)pXVar1;
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           ((GameObject *)pXVar1,(MethodInfo *)0x0);
        pGVar3 = (this->fields).displayObjectRoot;
        if (pGVar3 != (GameObject *)0x0) {
          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar2,value,(MethodInfo *)0x0);
            pGVar3 = (this->fields).go;
            if (pGVar3 != (GameObject *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar2,(this->fields).displayObjectOffset,(MethodInfo *)0x0);
                pGVar3 = (this->fields).go;
                if (pGVar3 != (GameObject *)0x0) {
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponent_47
                                      (pGVar3,
                                       LevelDisplayCube_MethodInfo__UnityEngine__GameObject__GetComponent<LevelDisplayCube>__
                                      );
                  (this->fields).displayObject = (LevelDisplayCube *)this_02;
                  if (this_02 != (UseInteractorHandler *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    pUVar4 = (UseInteratorVisualization__Array *)(this_02->fields).removeList;
                    if (pUVar4 == (UseInteratorVisualization__Array *)0x0) {
                      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0);
                      if (pGVar3 == (GameObject *)0x0) goto code_?;
                      pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponentsInChildren_29
                                         (pGVar3,
                                          UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                                         );
                      (this_02->fields).removeList = (List_1_System_Int32_ *)pUVar4;
                    }
                    uVar5 = 0;
                    if (pUVar4 != (UseInteratorVisualization__Array *)0x0) {
                      ppUVar6 = pUVar4->vector;
                      while( true ) {
                        if ((int)pUVar4->max_length <= (int)uVar5) {
                          return;
                        }
                        if (pUVar4->max_length <= uVar5) break;
                        if (*ppUVar6 == (UseInteratorVisualization *)0x0) goto code_?;
                        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                  Renderer_get_material((Renderer *)*ppUVar6,(MethodInfo *)0x0);
                        if (this_03 == (Material *)0x0) goto code_?;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                                  (this_03,(Texture *)0x0,(MethodInfo *)0x0);
                        uVar5 = uVar5 + 1;
                        ppUVar6 = ppUVar6 + 1;
                      }
                      func_?();
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
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_DestroyRequirement
               (LevelBasedUseRequirement *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).displayObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).levelAmount != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        pOVar3 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar2,(MethodInfo *)0x0);
        if ((this->fields).levelAmount <= (int)pOVar3) goto code_?;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            pOVar3 = System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)pMVar2,(MethodInfo *)0x0);
            return (uint)((int)pOVar3 < (this->fields).levelAmount) * 4 +
                   UseGUIResult__Enum_CanAfford;
          }
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    UVar5 = (*pcVar4)();
    return UVar5;
  }
code_?:
  return ((this->fields).hasUseWhenFree != 0) + UseGUIResult__Enum_NoUseButton;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_GetShowOption
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).levelAmount != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        pOVar1 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)this_01,(MethodInfo *)0x0);
        if ((int)pOVar1 < (this->fields).levelAmount) {
          return ShowUseOption__Enum_LevelInsufficient|ShowUseOption__Enum_UsingLevels;
        }
        return ShowUseOption__Enum_LevelEnough|ShowUseOption__Enum_UsingLevels;
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

bool Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_IsActive
               (LevelBasedUseRequirement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).go;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,StringLiteral_levelAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    data = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)StringLiteral_levelAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if ((data->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int *)func_?();
        pDVar1 = _UNK_?;
        _UNK_? = (Dictionary_2_System_Object_System_Object_ *)*piVar3;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pDVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          LevelBasedUseRequirement_CreateDisplayObject
                    ((LevelBasedUseRequirement *)&UNK_?,(MethodInfo *)0x0);
        }
        data = _UNK_?;
        if (0 < (int)_UNK_?) {
          if (_UNK_? == (Dictionary_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          ownerID = 0;
          LevelDisplayCube::LevelDisplayCube_SetAmount
                    ((LevelDisplayCube *)_UNK_?,(int32_t)_UNK_?,(MethodInfo *)0x0);
        }
        if (_UNK_? != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          return;
        }
        ownerID = (int32_t)
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        data = (Dictionary_2_System_Object_System_Object_ *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
        ;
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        data = (Dictionary_2_System_Object_System_Object_ *)&data;
        value = (CrossPlatformInputManager_VirtualButton *)func_?();
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)pDVar1,StringLiteral_levelAmount,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_00,ownerID,pDVar1,(MethodInfo *)0x0);
            data = _UNK_?;
            if (_UNK_? != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              ownerID = 0;
              obj = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)_UNK_?,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                method = (MethodInfo *)&UNK_?;
                func_?();
              }
              ownerID = (int32_t)&UNK_?;
              method = obj;
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                        ((Object_1 *)obj,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        ownerID = (int32_t)TypeInfo__System__Int32;
        func_?();
      }
    }
  }
code_?:
  ownerID = 0;
  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_SetScale
               (LevelBasedUseRequirement *this,Vector3 scale,MethodInfo *method)

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
  if (this_00 != (LevelDisplayCube *)0x0) {
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


/* LevelBasedUseRequirement(GameObject, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
               (LevelBasedUseRequirement *this,GameObject *root,bool hasUseButtonWhenFree,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).hasUseWhenFree = 1;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).hasUseWhenFree = hasUseButtonWhenFree;
  (this->fields).displayObjectRoot = root;
  return;
}


/* LevelBasedUseRequirement(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement__ctor_1
               (LevelBasedUseRequirement *this,GameObject *root,Vector3 displayOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).hasUseWhenFree = 1;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).displayObjectOffset.x = (float)(undefined4)uStack_2;
  (this->fields).displayObjectOffset.y = (float)uStack_2._4_4_;
  (this->fields).displayObjectOffset.z = fStack_1;
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
Assembly-CSharp.dll::LevelBasedUseRequirement::LevelBasedUseRequirement_get_GameObject
          (LevelBasedUseRequirement *this,MethodInfo *method)

{
  pLVar1 = (this->fields).displayObject;
  if (pLVar1 == (LevelDisplayCube *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GameObject *)(*pcVar2)();
    return pGVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    pGVar3 = (GameObject *)(*pcVar2)();
    return pGVar3;
  }
  pcRam_? = pcVar2;
  pGVar3 = (GameObject *)(*pcRam_?)(pLVar1);
  return pGVar3;
}

