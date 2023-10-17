
/* Boolean AccessoryShouldBeSelecable(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_AccessoryShouldBeSelecable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AvatarAccessoryBackAccessories);
    func_?(&TypeRef__AvatarAccessoryHat);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryMoveOverride != 0) {
    if (accessory == (AvatarAccessory *)0x0) goto code_?;
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
    pIVar2 = TypeRef__AvatarAccessoryHat;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar1,(Object **)pTVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return 1;
    }
    if ((this->fields).accessoryMoveOverride != 0) {
      if (accessory == (AvatarAccessory *)0x0) goto code_?;
      pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
      pIVar2 = TypeRef__AvatarAccessoryBackAccessories;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)pTVar1,(Object **)pTVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
    }
  }
  MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar5 == MVGameMode__Enum_CharacterEditor) {
    if (accessory == (AvatarAccessory *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      bVar4 = (*pcVar6)();
      return bVar4;
    }
    pTVar1 = mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
    pIVar2 = TypeRef__AvatarAccessoryHat;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar2,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)pTVar1,(Object **)pTVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return 1;
    }
  }
  return 0;
}


/* Void ApplyAccessoryOffset(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
               (BodyAccessoriesController *this,float yOffset,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  key = slot;
  pBVar1 = this;
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Object,GUILoginHandler+PlanetData]::
             Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                       (this_00,(Object *)slot,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                       );
    unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)key;
    if (bVar2 == 0) {
code_?:
      this_02 = (pBVar1->fields).accessoryData;
      IStack_3.m_value = key;
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_02,(Object *)pSVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        this = (BodyAccessoriesController *)0x3;
        this_03 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                            (this_03,StringLiteral_d,(MethodInfo *)0x0);
        slot = (AccessorySlotType__Enum)yOffset;
        value_00 = (Object *)func_?(TypeInfo__System__Single,&slot);
        if (unaff_ESI != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar5 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
             ((Dictionary_2_System_Object_System_Object___Class *)
              (unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth - 1] ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (unaff_ESI,(Object *)pSVar4,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pDVar6 = (pBVar1->fields).accessoryMap;
      if (pDVar6 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        pAVar7 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if (pAVar7 != (AvatarAccessory *)0x0) {
          pTVar8 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar7,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar10._0_4_ = (pVVar9->zeroVector).x;
          uVar10._4_4_ = (pVVar9->zeroVector).y;
          fVar11 = (pVVar9->zeroVector).z;
          if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BodyAccessoriesController);
          }
          this_01 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
          if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
            pVVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,UnityEngine::Vector3]::
                      Dictionary_2_System_Int32Enum_UnityEngine_Vector3__get_Item
                                ((Vector3 *)&stack0xffffffd0,
                                 (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_01,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                                );
            uVar13 = pVVar12->x;
            uVar14 = pVVar12->y;
            this = (BodyAccessoriesController *)((float)uVar13 + (float)uVar10);
            slot = (AccessorySlotType__Enum)((float)uVar14 + (float)((ulonglong)uVar10 >> 0x20));
            fStack_15 = pVVar12->z + fVar11;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar16 = (pVVar9->upVector).x;
            uVar17 = (pVVar9->upVector).y;
            if (pTVar8 != (Transform *)0x0) {
              value.y = (float)uVar17 * yOffset + (float)slot;
              value.x = (float)uVar16 * yOffset + (float)this;
              value.z = (pVVar9->upVector).z * yOffset + fStack_15;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar8,value,(MethodInfo *)0x0);
              pDVar6 = (pBVar1->fields).accessoryMap;
              if (pDVar6 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
                pAVar7 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    );
                if (pAVar7 != (AvatarAccessory *)0x0) {
                  pTVar8 = AvatarAccessory::AvatarAccessory_get_Transform
                                      (pAVar7,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar8 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->
                                       identityQuaternion,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDVar5 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pDVar5);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ApplySizeChange(Single, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
               (BodyAccessoriesController *this,float size,AccessorySlotType__Enum slot,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  key = slot;
  this_04 = (Dictionary_2_System_Object_System_Object_ *)this;
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    if (bVar1 == 0) {
code_?:
      this_01 = (((BodyAccessoriesController *)this_04)->fields).accessoryData;
      IStack_2.m_value = key;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      this_04 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this_04 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_01,(Object *)pSVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        this = (BodyAccessoriesController *)0x5;
        this_05 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (this_05,StringLiteral_d,(MethodInfo *)0x0);
        slot = (AccessorySlotType__Enum)size;
        pOVar4 = (Object *)func_?(TypeInfo__System__Single,&slot);
        if (this_04 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar5 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth <= (this_04->klass->_1).typeHierarchyDepth) &&
             ((Dictionary_2_System_Object_System_Object___Class *)
              (this_04->klass->_1).typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth - 1] ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (this_04,(Object *)pSVar3,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pDVar6 = (((BodyAccessoriesController *)this_04)->fields).accessoryMap;
      if (pDVar6 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           );
        if (pOVar4 != (Object *)0x0) {
          pOVar4[2].monitor = (MonitorData *)size;
          pDVar6 = (((BodyAccessoriesController *)this_04)->fields).accessoryMap;
          if (pDVar6 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
            this_02 = (Component *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                );
            if (this_02 != (Component *)0x0) {
              this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_02,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                IStack_2.m_value = (int32_t)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar8 = (pVVar7->oneVector).x;
              uVar9 = (pVVar7->oneVector).y;
              if (this_03 != (Transform *)0x0) {
                value.y = (float)uVar9 * size;
                value.x = (float)uVar8 * size;
                value.z = (pVVar7->oneVector).z * size;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_03,value,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDVar5 = extraout_EDX;
code_?:
  func_?(this_04,pDVar5);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean AttachAccessory(AvatarAccessory, AccessorySlotType, Single, Single) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_AttachAccessory
               (BodyAccessoriesController *this,AvatarAccessory *acc,AccessorySlotType__Enum slot,
               float offset,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                   );
    func_?(&StringLiteral_Out_commented_return_false);
    func_?(&StringLiteral_Trying_to_add_accessory_a_second);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    if (bVar1 == 0) {
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).accessoryMap;
      if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_01,(Object *)slot,(Object *)acc,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                );
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Trying_to_add_accessory_a_second,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Out_commented_return_false,(MethodInfo *)0x0);
    }
    if (acc != (AvatarAccessory *)0x0) {
      pTVar2 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_04 = (this->fields).bodyData;
      if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BodyAccessoriesController,pTVar2);
      }
      this_02 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
      if (this_02 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
        part = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,slot,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                         );
        if (this_04 != (BodyData *)0x0) {
          pTVar2 = BodyData::BodyData_GetPartBone_1(this_04,part,(MethodInfo *)0x0);
          if (this_04 != (BodyData *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      ((Transform *)this_04,pTVar2,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplySizeChange(this,(float)slot,slot,(MethodInfo *)0x0);
            pCVar3 = AvatarAccessory::AvatarAccessory_get_Colliders(acc,(MethodInfo *)0x0);
            uVar4 = 0;
            if (pCVar3 != (Collider__Array *)0x0) {
              ppCVar5 = pCVar3->vector;
              for (; (int)uVar4 < (int)pCVar3->max_length; uVar4 = uVar4 + 1) {
                if (pCVar3->max_length <= uVar4) goto code_?;
                if (*ppCVar5 == (Collider *)0x0) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (*ppCVar5,0,(MethodInfo *)0x0);
                ppCVar5 = ppCVar5 + 1;
              }
              pTVar2 = AvatarAccessory::AvatarAccessory_get_Transform
                                 ((AvatarAccessory *)&UNK_?,(MethodInfo *)0x0);
              this_03 = (this_04->fields).PartConstraintsBoxMin;
              if (this_03 != (ObscuredFloat__Array__Array *)0x0) {
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0);
                if (pGVar6 != (GameObject *)0x0) {
                  layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    (pGVar6,(MethodInfo *)0x0);
                  LayerUtil::LayerUtil_SetLayerRecursively(pTVar2,layer,(MethodInfo *)0x0);
                  AvatarAccessory::AvatarAccessory_set_Visible
                            ((AvatarAccessory *)&UNK_?,1,(MethodInfo *)0x0);
                  pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)&UNK_?,(MethodInfo *)0x0);
                  if (pGVar6 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar6,
                               FadeableObject_MethodInfo__UnityEngine__GameObject__AddComponent<FadeableObject>__
                              );
                    return 1;
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
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_Destroy
               (BodyAccessoriesController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  if ((this->fields).accessoryLoader != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              ((this->fields).accessoryLoader,(MethodInfo *)0x0);
  }
  (this->fields).accessoryLoader = (AccessoryLoader *)0x0;
  func_?(&(this->fields).accessoryLoader,0);
  if ((this->fields).accessoryMap !=
      (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_System_Object_System_Object_ *)(this->fields).accessoryMap,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((Component *)DStack_6._current.value == (Component *)0x0) {
        func_?();
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pMStack_12 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)DStack_6._current.value,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_13 = pMStack_12;
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pMStack_12,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
               ,in_stack_13);
    uStack_1 = 0xffffffff;
    (this->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
    func_?();
    (this->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    func_?();
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void DestroyAccessory(AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_DestroyAccessory
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryMap;
  if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    this_00 = (AvatarAccessory *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,slot,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                        );
    if (this_00 != (AvatarAccessory *)0x0) {
      this_01 = AvatarAccessory::AvatarAccessory_get_Transform(this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_01,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar1 = (this->fields).accessoryMap;
        if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,slot,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                    );
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single GetOffset(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetOffset
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryData;
  IStack_2.m_value = accessorySlot;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar4 = func_?();
  }
  else {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar1,(Object *)pSVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this = (BodyAccessoriesController *)0x3;
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)&this;
    this_01 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,pDVar1);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((this_00->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_00->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this_00 = pDVar1;
    uVar4 = CONCAT44(TypeInfo__System__Single,pOVar6);
    if (pOVar6 == (Object *)0x0) goto code_?;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(pOVar6);
      return *pfVar7;
    }
  }
  func_?(uVar4);
  pDVar5 = extraout_EDX;
code_?:
  func_?(this_00,pDVar5);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Single GetScale(AccessorySlotType) */

float Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetScale
                (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlot,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accessoryData;
  IStack_2.m_value = accessorySlot;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar4 = func_?();
  }
  else {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar1,(Object *)pSVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this = (BodyAccessoriesController *)0x5;
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)&this;
    this_01 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,pDVar1);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(this_01,StringLiteral_d,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((this_00->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_00->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this_00 = pDVar1;
    uVar4 = CONCAT44(TypeInfo__System__Single,pOVar6);
    if (pOVar6 == (Object *)0x0) goto code_?;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(pOVar6);
      return *pfVar7;
    }
  }
  func_?(uVar4);
  pDVar5 = extraout_EDX;
code_?:
  func_?(this_00,pDVar5);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* Vector3 GetSlotPosition(AccessorySlotType, Vector3) */

Vector3 * Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotPosition
                    (Vector3 *__return_storage_ptr__,BodyAccessoriesController *this,
                    AccessorySlotType__Enum slot,Vector3 offset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessorySlotType);
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Accessory__Failed_to_get_bone__0);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BodyAccessoriesController);
  }
  AVar1 = slot;
  this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    pSVar2 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slot,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                       );
    this_01 = (this->fields).bodyData;
    if (this_01 != (BodyData *)0x0) {
      this_02 = BodyData::BodyData_GetPartBone_1(this_01,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        VStack_3.z = (float)TypeInfo__UnityEngine__Object;
        VStack_3.y = (float)&UNK_?;
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        slot = AVar1;
        arg1 = (Object *)func_?(TypeInfo__MV__Common__AccessorySlotType,&slot);
        pSVar2 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral_Accessory__Failed_to_get_bone__0,(Object *)pSVar2,arg1,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar2,(MethodInfo *)0x0);
      }
      if (this_02 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_6,this_02,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        VStack_6.x = pVVar5->x;
        VStack_6.y = pVVar5->y;
        VStack_6.z = pVVar5->z;
        slot = (AccessorySlotType__Enum)((float)uStack_7 + VStack_6.x * offset.x);
        fStack_9 = uStack_7._4_4_ + VStack_6.y * offset.x;
        fStack_10 = fStack_8 + VStack_6.z * offset.x;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        fStack_10 = fStack_8 * offset.y + fStack_10;
        slot = (AccessorySlotType__Enum)((float)slot + (float)uStack_7 * offset.y);
        fStack_9 = fStack_9 + uStack_7._4_4_ * offset.y;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        uVar11 = pVVar5->x;
        uVar12 = pVVar5->y;
        fVar13 = pVVar5->z;
        __return_storage_ptr__->x = (float)uVar11 * offset.z + (float)slot;
        __return_storage_ptr__->y = (float)uVar12 * offset.z + fStack_9;
        __return_storage_ptr__->z = fVar13 * offset.z + fStack_10;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar14)();
  return pVVar5;
}


/* Transform GetSlotTransform(AccessorySlotType) */

Transform *
Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_GetSlotTransform
          (BodyAccessoriesController *this,AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bodyData;
  if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BodyAccessoriesController);
  }
  this_01 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
  if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
    part = (String *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,slot,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                     );
    if (this_00 != (BodyData *)0x0) {
      pTVar1 = BodyData::BodyData_GetPartBone_1(this_00,part,(MethodInfo *)0x0);
      return pTVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pTVar1 = (Transform *)(*pcVar2)();
  return pTVar1;
}


/* Boolean IsAccessoryEquipped(Int32) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryEquipped
               (BodyAccessoriesController *this,int32_t streamingAssetId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  if ((this->fields).accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffac,(this->fields).accessoryData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar10 == 0) break;
      in_stack_11 = (MethodInfo *)DStack_6._current.value;
      this_00 = (Enum *)func_?();
      method_00 = (MethodInfo *)StringLiteral_d;
      pSStack_12 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (this_00,StringLiteral_d,(MethodInfo *)0x0);
      uVar13._4_4_ = DStack_6._version;
      uVar13._0_4_ = DStack_6._dictionary;
      if (in_stack_11 == (MethodInfo *)0x0) {
code_?:
        DStack_6._version = (int32_t)&UNK_?;
        uVar14 = func_?();
code_?:
        DStack_6._0_8_ = uVar14;
        func_?();
code_?:
        func_?();
        pcVar15 = (code *)swi(3);
        bVar10 = (*pcVar15)();
        return bVar10;
      }
      if (((byte)*(code *)((int)((Object *)in_stack_11)->klass + 0xb4) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         (DStack_6._0_8_ = uVar13,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)((int)((Object *)in_stack_11)->klass + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      DStack_6._version =
           (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              ((Dictionary_2_System_Object_System_Object_ *)in_stack_11,
                               (Object *)pSStack_12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
      uVar14._4_4_ = (int32_t)TypeInfo__System__Int32;
      uVar14._0_4_ = (Dictionary_2_System_Object_System_Object_ *)DStack_6._version;
      if ((Dictionary_2_System_Object_System_Object_ *)DStack_6._version ==
          (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      if ((((Dictionary_2_System_Object_System_Object_ *)DStack_6._version)->klass->_0).
          element_class != (TypeInfo__System__Int32->_0).element_class) goto code_?;
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      piVar16 = (int *)func_?();
      if (*piVar16 == streamingAssetId) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,in_stack_11);
  }
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Boolean IsAccessoryInWoData(AvatarAccessory) */

bool Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
               (BodyAccessoriesController *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).accessoryData;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_7,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      method_01 = (MethodInfo *)pDVar6->_version;
      this_01 = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&stack0xffffffc4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_01);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        method_00 = TypeInfo__MV__Common__AvatarAccessoryData;
        this_03 = (Enum *)func_?();
        pSStack_9 = mscorlib.dll::System::Enum::Enum_ToString_2
                               (this_03,StringLiteral_d,(MethodInfo *)0x0);
        unaff_EDI = this_01;
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        pDVar10 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (((this_01->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_01->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        pSVar11 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)pSStack_9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)avatarAccessory;
        if (avatarAccessory == (AvatarAccessory *)0x0) break;
        a = (String *)0x0;
        if (pSVar11 != (String *)0x0) {
          if (pSVar11->klass == TypeInfo__System__String) {
            a = pSVar11;
          }
          pSVar12 = TypeInfo__System__String;
          if (a == (String *)0x0) goto code_?;
        }
        bVar8 = mscorlib.dll::System::String::String_op_Equality
                          (a,(avatarAccessory->fields)._AssetPath_k__BackingField,(MethodInfo *)0x0)
        ;
        if (bVar8 != 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
  func_?();
  pSVar11 = extraout_ECX;
  pSVar12 = extraout_EDX;
code_?:
  func_?(pSVar11,pSVar12);
  pDVar10 = extraout_EDX_00;
code_?:
  func_?(unaff_EDI,pDVar10);
  pcVar13 = (code *)swi(3);
  bVar8 = (*pcVar13)();
  return bVar8;
}


/* Boolean IsAccessorySlotOccupied(AccessorySlotType) */

bool Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_IsAccessorySlotOccupied
               (BodyAccessoriesController *this,AccessorySlotType__Enum accessorySlotType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).accessoryData;
  key = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void LoadedAccessoryCallback(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_LoadedAccessoryCallback
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum slot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Failed_to_load_accessory_);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)accessory,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Failed_to_load_accessory_,(MethodInfo *)0x0);
    return;
  }
  pDVar2 = (this->fields).accessoryData;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pOVar4 = (Object *)func_?();
code_?:
    func_?(pOVar4);
    pSVar5 = extraout_ECX;
  }
  else {
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pEVar6 = (Enum *)func_?();
      mscorlib.dll::System::Enum::Enum_ToString_2(pEVar6,StringLiteral_d,(MethodInfo *)0x0);
      goto code_?;
    }
    if (((pDVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pEVar6 = (Enum *)func_?();
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar6,StringLiteral_d,(MethodInfo *)0x0);
    pSVar5 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)pSVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSVar3 = (String *)0x0;
    if (pSVar5 == (String *)0x0) {
code_?:
      if ((accessory == (AvatarAccessory *)0x0) ||
         (pSVar5 = (accessory->fields)._AssetPath_k__BackingField, pSVar5 == (String *)0x0))
      goto code_?;
      bVar1 = mscorlib.dll::System::String::String_Contains(pSVar5,pSVar3,(MethodInfo *)0x0);
      if (bVar1 == 0) goto code_?;
      pEVar6 = (Enum *)func_?();
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar6,StringLiteral_d,(MethodInfo *)0x0)
      ;
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)pSVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar7 = (undefined4 *)func_?();
        pEVar6 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,*puVar7);
        pSVar3 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar6,StringLiteral_d,(MethodInfo *)0x0);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar2,(Object *)pSVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar4 == (Object *)0x0) goto code_?;
        if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        offset = &UNK_?;
        pfVar8 = (float *)func_?();
        bVar1 = BodyAccessoriesController_AttachAccessory
                          (this,accessory,slot,(float)offset,*pfVar8,(MethodInfo *)0x0);
        if (bVar1 == 0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields).accessoryMoveOverride == 0) {
code_?:
          MVar9 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar9 != MVGameMode__Enum_CharacterEditor) goto code_?;
          mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
          pIVar10 = TypeRef__AvatarAccessoryHat;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)0x0,(Object **)pTVar11,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
        }
        else {
          pTVar11 = mscorlib.dll::System::Object::Object_GetType
                              ((Object *)accessory,(MethodInfo *)0x0);
          pIVar10 = TypeRef__AvatarAccessoryHat;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
          bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                            ((Object **)pTVar11,(Object **)pTVar12,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            if ((this->fields).accessoryMoveOverride != 0) {
              pTVar11 = mscorlib.dll::System::Object::Object_GetType
                                  ((Object *)accessory,(MethodInfo *)0x0);
              pIVar10 = TypeRef__AvatarAccessoryBackAccessories;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar10,(MethodInfo *)0x0);
              bVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                                ((Object **)pTVar11,(Object **)pTVar12,(MethodInfo *)0x0);
              if (bVar1 != 0) goto code_?;
            }
            goto code_?;
          }
        }
code_?:
        if ((this->fields).accessoryMoveOverride != 0) {
          BodyAccessoriesController_MakeAccessorySelectable(this,accessory,slot,(MethodInfo *)0x0);
        }
code_?:
        BodyAccessoriesController_UpdateAccessoryVisibility
                  (this,(this->fields).accessoriesVisible,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (pSVar5->klass == TypeInfo__System__String) {
      pSVar3 = pSVar5;
    }
    if (pSVar3 != (String *)0x0) goto code_?;
  }
  func_?(pSVar5);
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void MakeAccessorySelectable(AvatarAccessory, AccessorySlotType) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_MakeAccessorySelectable
               (BodyAccessoriesController *this,AvatarAccessory *accessory,
               AccessorySlotType__Enum accessorySlot,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  pGStack_2 = (GameObject__Class *)&DAT_?;
  puStack_3 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessorySlotType);
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                   );
    func_?(&
                    SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                   );
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral_SelectionHelper);
    func_?(&StringLiteral_d);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  OStack_6.klass = (Object__Class *)0x0;
  OStack_6.monitor = (MonitorData *)0x0;
  iStack_7 = 0;
  pOStack_8 = (Object *)0x0;
  pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
  if ((this->fields).accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)(this->fields).accessoryData;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa0,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    OStack_6.klass = (Object__Class *)pDVar10->_dictionary;
    OStack_6.monitor = (MonitorData *)pDVar10->_version;
    iStack_7 = pDVar10->_index;
    pOStack_8 = (pDVar10->_current).key;
    uVar11 = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
code_?:
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                       &OStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar12 != 0) {
      unaff_EDI = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)uVar11;
      if ((unaff_EDI == (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
         || (((pDVar13 = 
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
              (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth <= (unaff_EDI->klass->_1).typeHierarchyDepth &&
              ((Dictionary_2_System_Object_System_Object___Class *)
               (unaff_EDI->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] ==
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
             && (unaff_EDI !=
                 (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)))) {
        pIStack_14 = (IEnumerable_1_System_Object_ *)0x2;
        pEVar15 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&pIStack_14);
        pSVar16 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar15,StringLiteral_d,(MethodInfo *)0x0);
        if (unaff_EDI != (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0)
        {
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                              (Object *)pSVar16,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar17 != (Object *)0x0) {
            pIVar18 = (Int32__Class *)TypeInfo__MV__Common__AccessorySlotType;
            if ((pOVar17->klass->_0).element_class ==
                (TypeInfo__MV__Common__AccessorySlotType->_0).element_class) goto code_?;
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (&OStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
  }
  if (accessory != (AvatarAccessory *)0x0) {
    pTVar19 = AvatarAccessory::AvatarAccessory_get_Transform(accessory,(MethodInfo *)0x0);
    if (pTVar19 != (Transform *)0x0) {
      pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar19,(MethodInfo *)0x0);
      if (pGVar20 != (GameObject *)0x0) {
        pDVar21 = (Dictionary_2_System_Object_System_Object_ *)
                  Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                            ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar20,
                             UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                            );
        unaff_EDI = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0;
        if (pDVar21 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pIStack_14 = (IEnumerable_1_System_Object_ *)&(pDVar21->fields)._count;
          while( true ) {
            if ((int)(pDVar21->fields)._entries <= (int)unaff_EDI) {
              *unaff_FS_OFFSET = puStack_3;
              return;
            }
            if ((pDVar21->fields)._entries <= unaff_EDI) break;
            pIStack_22 = pIStack_14->klass;
            pGStack_2 = TypeInfo__UnityEngine__GameObject;
            pGVar20 = (GameObject *)func_?();
            if (pGVar20 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar20,StringLiteral_SelectionHelper,(MethodInfo *)0x0);
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0);
            if (pIStack_22 == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pIStack_22,(MethodInfo *)0x0);
            if (this_00 == (GameObject *)0x0) goto code_?;
            value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
            if (pTVar19 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar19,value,(MethodInfo *)0x0);
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            if (pTVar19 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar19,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar19 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar19,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar19 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar19,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                       (MethodInfo *)0x0);
            this_01 = (MeshCollider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar20,
                                 UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                                );
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                       MeshFilter_get_sharedMesh((MeshFilter *)pIStack_22,(MethodInfo *)0x0);
            if (this_01 == (MeshCollider *)0x0) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_sharedMesh
                      (this_01,value_00,(MethodInfo *)0x0);
            value_01 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                 (StringLiteral_Hidden,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (pGVar20,value_01,(MethodInfo *)0x0);
            this_02 = (SelectionHelperAvatarAccessory *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar20,
                                 SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                                );
            if (this_02 == (SelectionHelperAvatarAccessory *)0x0) goto code_?;
            pDVar21 = pDStack_9;
            SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
                      (this_02,accessory,accessorySlot,(this->fields).bodyWoId,(int32_t)pDStack_9,
                       (MethodInfo *)0x0);
            unaff_EDI = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                        ((int)&unaff_EDI->klass + 1);
            pIStack_14 = (IEnumerable_1_System_Object_ *)&pIStack_14->monitor;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pDVar13 = extraout_EDX;
code_?:
  uVar23 = func_?(unaff_EDI,pDVar13);
  func_?(uVar23);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  method_00 = (MethodInfo *)&UNK_?;
  pAVar25 = (AccessorySlotType__Enum *)func_?(pOVar17);
  if (accessorySlot == *pAVar25) {
    pIStack_22 = (IEnumerable_1_System_Object___Class *)0x1;
    pEVar15 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&pIStack_22);
    pSVar16 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar15,StringLiteral_d,(MethodInfo *)0x0);
    pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pSVar16,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar17 == (Object *)0x0) goto code_?;
    pIVar18 = TypeInfo__System__Int32;
    if ((pOVar17->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?(pOVar17,pIVar18);
      goto code_?;
    }
    method_00 = (MethodInfo *)&UNK_?;
    puVar26 = (undefined4 *)func_?(pOVar17);
    unaff_EDI = (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)*puVar26;
    pDStack_9 = (Dictionary_2_System_Object_System_Object_ *)unaff_EDI;
  }
  goto code_?;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
               (BodyAccessoriesController *this,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<AvatarAccessory>);
    func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&
                    MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                   );
    func_?(&TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
    func_?(&StringLiteral_Failed_to_parse_slot);
    func_?(&StringLiteral_d);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (this->fields).accessoryData = accessoryData;
  pMStack_6 = (MonoBehaviour *)0x0;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  func_?(&(this->fields).accessoryData,accessoryData);
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
              );
    pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).accessoryMap;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffb0,pDVar8,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      RVar10 = (RegexCharClass_SingleRange)(pDVar9->_current).key;
      uVar11 = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_
                                 *)&stack0xffffff88,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                               ), bVar12 != 0) {
        RStack_13 = RVar10;
        bVar12 = BodyAccessoriesController_IsAccessoryInWoData
                          (this,(AvatarAccessory *)uVar11,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          uVar7._4_2_ = RStack_13.First;
          uVar7._6_2_ = RStack_13.Last;
          uVar7._0_4_ = (Object *)this_01;
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Add
                    (this_01,RStack_13,
                     MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffff88,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,(MethodInfo *)uVar7);
      uStack_1 = 0xffffffff;
      pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffb8,this_01,
                          MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                         );
      RVar10 = pLVar14->_current;
      uStack_1 = 4;
      while( true ) {
        method_00 = SUB84(uVar11,4);
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                          );
        if (bVar12 == 0) break;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pDVar15 = (this->fields).accessoryMap;
        if (pDVar15 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        uVar11._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        uVar11._0_4_ = (Object *)RVar10;
        this_02 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                             (Int32Enum__Enum)RVar10,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if ((this_02 == (AvatarAccessory *)0x0) ||
           (this_03 = AvatarAccessory::AvatarAccessory_get_Transform(this_02,(MethodInfo *)0x0),
           this_03 == (Transform *)0x0)) goto code_?;
        RVar16.First = 0;
        RVar16.Last = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_03,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar15 = (this->fields).accessoryMap;
        if (pDVar15 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,(Int32Enum__Enum)RVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        in_stack_17 = RVar10;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_02,(MethodInfo *)0x0);
        RVar10 = RVar16;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          RVar10 = RVar16;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffa0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pDVar8 = (this->fields).accessoryData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffffb0,pDVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        pDVar18 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pDVar9->_current).key;
        uVar19 = *(ulonglong *)&(pDVar9->_current).value;
        uStack_1 = 7;
        while( true ) {
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff70,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar12 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffff70,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_17);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            RStack_13 = SUB84(uVar19,0);
            s = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0;
            pMStack_6 = (MonoBehaviour *)0xffffffff;
            if (pDVar18 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              if (pDVar18->klass ==
                  (Dictionary_2_System_Object_GUILoginHandler_PlanetData___Class *)
                  TypeInfo__System__String) {
                s = pDVar18;
              }
              if (s == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
              goto code_?;
            }
            bVar12 = mscorlib.dll::System::Int32::Int32_TryParse
                              ((String *)s,(int32_t *)&pMStack_6,(MethodInfo *)0x0);
            if (bVar12 != 0) break;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_17 = (RegexCharClass_SingleRange)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          this_04 = (TweenRunner_1_FloatTween_ *)func_?();
          if (this_04 == (TweenRunner_1_FloatTween_ *)0x0) break;
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor(this_04,(MethodInfo *)0x0);
          (this_04->fields).m_Tween = (IEnumerator *)this;
          func_?();
          (this_04->fields).m_CoroutineContainer = pMStack_6;
          if (RStack_13 == (RegexCharClass_SingleRange)0x0) {
            accessoryData = (Dictionary_2_System_Object_System_Object_ *)RStack_13;
          }
          else {
            accessoryData = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
          }
          pEVar20 = (Enum *)func_?();
          pSVar21 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (pEVar20,StringLiteral_d,(MethodInfo *)0x0);
          if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          RVar10 = (RegexCharClass_SingleRange)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (accessoryData,(Object *)pSVar21,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          RStack_13 = RVar10;
          if (RVar10 != (RegexCharClass_SingleRange)0x0) {
            RStack_13.First = 0;
            RStack_13.Last = 0;
            if (*(String__Class **)RVar10 == TypeInfo__System__String) {
              RStack_13 = RVar10;
            }
            if (RStack_13 == (RegexCharClass_SingleRange)0x0) goto code_?;
          }
          pDVar18 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (this->fields).accessoryMap;
          if (pDVar18 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            (pDVar18,(Object *)(this_04->fields).m_CoroutineContainer,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                            );
          if (bVar12 == 0) {
code_?:
            this_00 = (this->fields).accessoryLoader;
            this_05 = (Action_1_Object_ *)func_?();
            if (this_05 == (Action_1_Object_ *)0x0) break;
            uVar19 = CONCAT44(this_04,this_05);
            pDVar18 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
            mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                      (this_05,(Object *)this_04,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_00 == (AccessoryLoader *)0x0) break;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_00,(String *)RStack_13,(Action_1_AvatarAccessory_ *)this_05,
                       (MethodInfo *)0x0);
          }
          else {
            pDVar15 = (this->fields).accessoryMap;
            if ((pDVar15 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
               (pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                                     (Int32Enum__Enum)(this_04->fields).m_CoroutineContainer,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), pOVar22 == (Object *)0x0)) break;
            bVar12 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pOVar22[1].monitor,(String *)RStack_13,(MethodInfo *)0x0);
            if (bVar12 != 0) goto code_?;
            pDVar18 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                      (this->fields).accessoryMap;
            if (pDVar18 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
            key = (this_04->fields).m_CoroutineContainer;
            uVar19 = CONCAT44(MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              ,key);
            bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (pDVar18,(Object *)key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar12 != 0) {
              pDVar15 = (this->fields).accessoryMap;
              if (pDVar15 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
              uVar19 = uVar19 & 0xffffffff;
              pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                                   (Int32Enum__Enum)(this_04->fields).m_CoroutineContainer,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                  );
              if (pOVar22 == (Object *)0x0) break;
              bVar12 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)pOVar22[1].monitor,(String *)RStack_13,(MethodInfo *)0x0)
              ;
              if (bVar12 != 0) {
                RStack_13.First = 3;
                RStack_13.Last = 0;
                pEVar20 = (Enum *)func_?();
                pSVar21 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar20,StringLiteral_d,(MethodInfo *)0x0);
                pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (accessoryData,(Object *)pSVar21,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar22 == (Object *)0x0) break;
                if ((pOVar22->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController_ApplyAccessoryOffset
                          (this,*pfVar23,
                           (AccessorySlotType__Enum)(this_04->fields).m_CoroutineContainer,
                           (MethodInfo *)0x0);
                pDVar18 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                          func_?();
                pSVar21 = StringLiteral_d;
                key_00 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   ((Enum *)pDVar18,StringLiteral_d,(MethodInfo *)0x0);
                uVar19 = ZEXT48(pSVar21);
                pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (accessoryData,(Object *)key_00,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar22 == (Object *)0x0) break;
                if ((pOVar22->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController_ApplySizeChange
                          (this,*pfVar23,
                           (AccessorySlotType__Enum)(this_04->fields).m_CoroutineContainer,
                           (MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void UpdateAccessoryVisibility(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_UpdateAccessoryVisibility
               (BodyAccessoriesController *this,bool visible,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).accessoryMap;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     ,method_00);
          (this->fields).accessoriesVisible = visible;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((AvatarAccessory *)DStack_6._currentValue == (AvatarAccessory *)0x0) break;
        AvatarAccessory::AvatarAccessory_set_Visible
                  ((AvatarAccessory *)DStack_6._currentValue,visible,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateOffset(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateOffset
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float offset,
               MethodInfo *method)

{
  BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
  return;
}


/* Void UpdateScale(AccessorySlotType, Single) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_UpdateScale
               (BodyAccessoriesController *this,AccessorySlotType__Enum slot,float scale,
               MethodInfo *method)

{
  BodyAccessoriesController_ApplySizeChange(this,scale,slot,(MethodInfo *)0x0);
  return;
}


/* BodyAccessoriesController() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                   );
    func_?(&StringLiteral_Torso);
    func_?(&StringLiteral_Head);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x2,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x1,(Object *)StringLiteral_Head,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)0x3,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap =
         (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)this;
    func_?(TypeInfo__BodyAccessoriesController->static_fields,this);
    this_00 = (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>
                             );
    if (this_00 != (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
                );
      uVar1 = 0;
      value.BanDurationFormat = (String *)0x3d4ccccd;
      value.BanReason = (String *)(int)((ulonglong)_UNK_? << 0x20);
      value.BanDuration = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                (this_00,(Object *)0x1,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      value_00.BanDuration = (String *)uVar1;
      value_00.BanReason = (String *)uVar1;
      value_00.BanDurationFormat = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                (this_00,(Object *)0x2,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      value_01.BanDuration = (String *)_UNK_?;
      value_01.BanReason = (String *)uVar1;
      value_01.BanDurationFormat = (String *)0xbeb851ec;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                (this_00,(Object *)0x3,value_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset =
           (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)this_00;
      func_?(&TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* BodyAccessoriesController(Int32, BodyData, Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController__ctor
               (BodyAccessoriesController *this,int32_t bodyWoId,BodyData *bodyData,
               Dictionary_2_System_Object_System_Object_ *accessoryData,bool isVisible,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                           );
  if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
              );
    (this->fields).accessoryMap = this_00;
    func_?(&(this->fields).accessoryMap,this_00);
    this_01 = (AccessoryLoader *)
              func_?(
                             TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                             );
    if (this_01 != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
                (this_01,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&(this->fields).accessoryLoader;
      (this->fields).accessoryLoader = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields).bodyWoId = bodyWoId;
      (this->fields).bodyData = bodyData;
      func_?(&(this->fields).bodyData,bodyData);
      (this->fields).accessoryData = accessoryData;
      func_?(&(this->fields).accessoryData,accessoryData);
      (this->fields).accessoriesVisible = isVisible;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_AccessoryMoveOverride(Boolean) */

void Assembly-CSharp.dll::BodyAccessoriesController::
     BodyAccessoriesController_set_AccessoryMoveOverride
               (BodyAccessoriesController *this,bool value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                   );
    func_?(&
                    SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  (this->fields).accessoryMoveOverride = value;
  if (value == 0) {
    this_01 = (this->fields).bodyData;
    if (this_01 != (BodyData *)0x0) {
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_1
                           (pGVar7,1,
                            SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                           );
        uVar9 = 0;
        if (pOVar8 != (Object__Array *)0x0) {
          ppOVar10 = pOVar8->vector;
          for (; (int)uVar9 < (int)pOVar8->max_length; uVar9 = uVar9 + 1) {
            if (pOVar8->max_length <= uVar9) goto code_?;
            if ((Component *)*ppOVar10 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*ppOVar10,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar7,(MethodInfo *)0x0);
            ppOVar10 = ppOVar10 + 1;
          }
          goto code_?;
        }
      }
    }
  }
  else {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).accessoryMap;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      uStack_12 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11->_dictionary;
      DStack_6._version = pDVar11->_version;
      DStack_6._index = pDVar11->_index;
      DStack_6._current.key = (int32_t)(pDVar11->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
      uStack_1 = 1;
      pDStack_13 = &DStack_6;
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar14 == 0) break;
        BodyAccessoriesController_MakeAccessorySelectable
                  (this,(AvatarAccessory *)DStack_6._current.value,DStack_6._current.key,
                   (MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,in_stack_15);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

