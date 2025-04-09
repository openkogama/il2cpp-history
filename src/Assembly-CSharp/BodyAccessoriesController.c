
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
    bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)pTVar1,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
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
      bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals
                        ((Int32Enum__Enum)pTVar1,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
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
    bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)pTVar1,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
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
  pDVar2 = (this->fields).accessoryMap;
  if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                       ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,slot,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                       );
    unaff_ESI.m_Index = key;
    if (bVar3 == 0) {
code_?:
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (pBVar1->fields).accessoryData;
      IStack_4.m_value = key;
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_01,(Object *)pSVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        this = (BodyAccessoriesController *)0x3;
        this_02 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                            (this_02,StringLiteral_d,(MethodInfo *)0x0);
        slot = (AccessorySlotType__Enum)yOffset;
        value_00 = (Object *)func_?(TypeInfo__System__Single,&slot);
        if (unaff_ESI.m_Index != 0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          pDVar7 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((bVar6 <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 + (uint)bVar6 * 4) ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI.m_Index,
                       (Object *)pSVar5,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pDVar2 = (pBVar1->fields).accessoryMap;
      if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        pAVar8 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if (pAVar8 != (AvatarAccessory *)0x0) {
          pTVar9 = AvatarAccessory::AvatarAccessory_get_Transform(pAVar8,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar11._0_4_ = (pVVar10->zeroVector).x;
          uVar11._4_4_ = (pVVar10->zeroVector).y;
          fVar12 = (pVVar10->zeroVector).z;
          if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__BodyAccessoriesController);
          }
          this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
          if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
            pVVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,UnityEngine::Vector3]::
                      Dictionary_2_System_Int32Enum_UnityEngine_Vector3__get_Item
                                ((Vector3 *)&stack0xffffffd0,
                                 (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__get_Item_MV__Common__AccessorySlotType_
                                );
            uVar14 = pVVar13->x;
            uVar15 = pVVar13->y;
            this = (BodyAccessoriesController *)((float)uVar14 + (float)uVar11);
            slot = (AccessorySlotType__Enum)((float)uVar15 + (float)((ulonglong)uVar11 >> 0x20));
            fStack_16 = pVVar13->z + fVar12;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar17 = (pVVar10->upVector).x;
            uVar18 = (pVVar10->upVector).y;
            if (pTVar9 != (Transform *)0x0) {
              value.y = (float)uVar18 * yOffset + (float)slot;
              value.x = (float)uVar17 * yOffset + (float)this;
              value.z = (pVVar10->upVector).z * yOffset + fStack_16;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar9,value,(MethodInfo *)0x0);
              pDVar2 = (pBVar1->fields).accessoryMap;
              if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
                pAVar8 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    );
                if (pAVar8 != (AvatarAccessory *)0x0) {
                  pTVar9 = AvatarAccessory::AvatarAccessory_get_Transform
                                      (pAVar8,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pTVar9 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                              (pTVar9,TypeInfo__UnityEngine__Quaternion->static_fields->
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
  pDVar7 = extraout_EDX;
code_?:
  func_?(unaff_ESI.m_Index,pDVar7);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  this_03.m_Index = (int32_t)this;
  pDVar1 = (this->fields).accessoryMap;
  if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    if (bVar2 == 0) {
code_?:
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (((BodyAccessoriesController *)this_03.m_Index)->fields).accessoryData;
      IStack_3.m_value = key;
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      this_03.m_Index = 0;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)pSVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        this = (BodyAccessoriesController *)0x5;
        this_04 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&this);
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (this_04,StringLiteral_d,(MethodInfo *)0x0);
        slot = (AccessorySlotType__Enum)size;
        pOVar5 = (Object *)func_?(TypeInfo__System__Single,&slot);
        if (this_03.m_Index != 0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          pDVar7 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((bVar6 <= *(byte *)(*(int *)this_03.m_Index + 0xb8)) &&
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)this_03.m_Index + 100) + -4 + (uint)bVar6 * 4) ==
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03.m_Index,(Object *)pSVar4
                       ,pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            return;
          }
          goto code_?;
        }
      }
    }
    else {
      pDVar1 = (((BodyAccessoriesController *)this_03.m_Index)->fields).accessoryMap;
      if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                           );
        if (pOVar5 != (Object *)0x0) {
          pOVar5[3].klass = (Object__Class *)size;
          pDVar1 = (((BodyAccessoriesController *)this_03.m_Index)->fields).accessoryMap;
          if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
            this_01 = (Component *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                );
            if (this_01 != (Component *)0x0) {
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                IStack_3.m_value = (int32_t)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar9 = (pVVar8->oneVector).x;
              uVar10 = (pVVar8->oneVector).y;
              if (this_02 != (Transform *)0x0) {
                value.y = (float)uVar10 * size;
                value.x = (float)uVar9 * size;
                value.z = (pVVar8->oneVector).z * size;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_02,value,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pDVar7 = extraout_EDX;
code_?:
  func_?(this_03.m_Index,pDVar7);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  pDVar1 = (this->fields).accessoryMap;
  if (pDVar1 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,slot,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).accessoryMap;
      if (pDVar1 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,slot,(Object *)acc,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Add_MV__Common__AccessorySlotType__AvatarAccessory_
                );
    }
    else {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Trying_to_add_accessory_a_second,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Out_commented_return_false,(MethodInfo *)0x0);
    }
    if (acc != (AvatarAccessory *)0x0) {
      pTVar3 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this->fields).bodyData;
      if ((TypeInfo__BodyAccessoriesController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BodyAccessoriesController,pTVar3);
      }
      this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap;
      if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)0x0) {
        part = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,slot,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__get_Item_MV__Common__AccessorySlotType_
                         );
        if (this_02 != (BodyData *)0x0) {
          pTVar3 = BodyData::BodyData_GetPartBone_1(this_02,part,(MethodInfo *)0x0);
          if (this_02 != (BodyData *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      ((Transform *)this_02,pTVar3,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplyAccessoryOffset(this,offset,slot,(MethodInfo *)0x0);
            BodyAccessoriesController_ApplySizeChange(this,(float)slot,slot,(MethodInfo *)0x0);
            pCVar4 = AvatarAccessory::AvatarAccessory_get_Colliders(acc,(MethodInfo *)0x0);
            uVar5 = 0;
            if (pCVar4 != (Collider__Array *)0x0) {
              ppCVar6 = pCVar4->vector;
              while( true ) {
                if ((int)pCVar4->max_length <= (int)uVar5) break;
                if (pCVar4->max_length <= uVar5) goto code_?;
                if (*ppCVar6 == (Collider *)0x0) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (*ppCVar6,0,(MethodInfo *)0x0);
                uVar5 = uVar5 + 1;
                ppCVar6 = ppCVar6 + 1;
              }
              pTVar3 = AvatarAccessory::AvatarAccessory_get_Transform(acc,(MethodInfo *)0x0);
              this_01 = (this_02->fields).PartBoneSpacePosition;
              if (this_01 != (Vector3__Array *)0x0) {
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                if (pGVar7 != (GameObject *)0x0) {
                  layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    (pGVar7,(MethodInfo *)0x0);
                  LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
                  AvatarAccessory::AvatarAccessory_set_Visible(acc,1,(MethodInfo *)0x0);
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)acc,(MethodInfo *)0x0);
                  if (pGVar7 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar7,
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
  pcVar8 = (code *)swi(3);
  bVar2 = (*pcVar8)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::BodyAccessoriesController::BodyAccessoriesController_Destroy
               (BodyAccessoriesController *this,MethodInfo *method)

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
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).accessoryLoader;
  ppAVar6 = &(this->fields).accessoryLoader;
  if (this_00 != (AccessoryLoader *)0x0) {
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  *ppAVar6 = (AccessoryLoader *)0x0;
  func_?(ppAVar6,0);
  this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
  if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar7->_dictionary;
    DStack_9._version = pDVar7->_version;
    DStack_9._index = pDVar7->_index;
    DStack_9._current.key = (pDVar7->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((Component *)DStack_9._current.value == (Component *)0x0) {
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      in_stack_13 =
           (MethodInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)DStack_9._current.value,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)in_stack_13,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_9,
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).accessoryData;
  IStack_1.m_value = accessorySlot;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  this_01.m_Index = 0;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar3 = func_?();
  }
  else {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this = (BodyAccessoriesController *)0x3;
    ppBVar4 = &this;
    this_02 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,ppBVar4);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
    if (this_01.m_Index == 0) goto code_?;
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) < bVar5) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar5 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_01.m_Index = (int32_t)ppBVar4;
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
    if (TVar7.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?(TVar7.m_Index);
      return *pfVar8;
    }
  }
  func_?(uVar3);
  pDVar6 = extraout_EDX;
code_?:
  func_?(this_01.m_Index,pDVar6);
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).accessoryData;
  IStack_1.m_value = accessorySlot;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  this_01.m_Index = 0;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    uVar3 = func_?();
  }
  else {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this = (BodyAccessoriesController *)0x5;
    ppBVar4 = &this;
    this_02 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,ppBVar4);
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2(this_02,StringLiteral_d,(MethodInfo *)0x0);
    if (this_01.m_Index == 0) goto code_?;
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) < bVar5) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar5 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_01.m_Index = (int32_t)ppBVar4;
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar7.m_Index);
    if (TVar7.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?(TVar7.m_Index);
      return *pfVar8;
    }
  }
  func_?(uVar3);
  pDVar6 = extraout_EDX;
code_?:
  func_?(this_01.m_Index,pDVar6);
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
        fStack_9 = (float)uStack_7 + VStack_6.x * offset.x;
        slot = (AccessorySlotType__Enum)(uStack_7._4_4_ + VStack_6.y * offset.x);
        fStack_10 = fStack_8 + VStack_6.z * offset.x;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        fStack_9 = (float)uStack_7 * offset.y + fStack_9;
        slot = (AccessorySlotType__Enum)((float)slot + uStack_7._4_4_ * offset.y);
        fStack_10 = fStack_10 + fStack_8 * offset.y;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        uVar11 = pVVar5->x;
        uVar12 = pVVar5->y;
        fVar13 = pVVar5->z;
        __return_storage_ptr__->x = (float)uVar11 * offset.z + fStack_9;
        __return_storage_ptr__->y = (float)uVar12 * offset.z + (float)slot;
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
  this_00 = (this->fields).accessoryData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (Object *)(pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar10 == 0) break;
      in_stack_11 = (MethodInfo *)DStack_8._current.value;
      this_01 = (Enum *)func_?();
      method_00 = (MethodInfo *)StringLiteral_d;
      pSStack_12 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (this_01,StringLiteral_d,(MethodInfo *)0x0);
      uVar13._4_4_ = DStack_8._version;
      uVar13._0_4_ = DStack_8._dictionary;
      if (in_stack_11 == (MethodInfo *)0x0) {
code_?:
        DStack_8._version = (int32_t)&UNK_?;
        uVar14 = func_?();
code_?:
        DStack_8._0_8_ = uVar14;
        func_?();
code_?:
        func_?();
        pcVar15 = (code *)swi(3);
        bVar10 = (*pcVar15)();
        return bVar10;
      }
      cVar16 = (code)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
      if (((byte)*(code *)((int)((Object *)in_stack_11)->klass + 0xb8) < (byte)cVar16) ||
         (DStack_8._0_8_ = uVar13,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)((int)((Object *)in_stack_11)->klass + 100) + -4 + (uint)(byte)cVar16 * 4)
         != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      DStack_8._version =
           (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               in_stack_11,(Object *)pSStack_12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
      uVar14._4_4_ = (int32_t)TypeInfo__System__Int32;
      uVar14._0_4_ = (Dictionary_2_System_Object_System_Object_ *)DStack_8._version;
      if (DStack_8._version == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)DStack_8._version + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      piVar17 = (int *)func_?();
      if (*piVar17 == streamingAssetId) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_8,
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).accessoryData;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::Object,_System::Object>__GetEnumerator__
                         );
      method_01 = (MethodInfo *)pDVar6->_version;
      this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&stack0xffffffc4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
        bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        pDVar11 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (((this_01->klass->_1).naturalAligment < bVar10) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_01->klass->_1).typeHierarchy[bVar10 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)pSStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        unaff_EDI = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)avatarAccessory;
        if (avatarAccessory == (AvatarAccessory *)0x0) break;
        a.m_Index = 0;
        if (TVar12.m_Index != 0) {
          if (*(String__Class **)TVar12.m_Index == TypeInfo__System__String) {
            a = TVar12;
          }
          pSVar13 = TypeInfo__System__String;
          if ((String *)a.m_Index == (String *)0x0) goto code_?;
        }
        bVar8 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)a.m_Index,(avatarAccessory->fields)._AssetPath_k__BackingField,
                           (MethodInfo *)0x0);
        if (bVar8 != 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  TVar12.m_Index = extraout_ECX;
  pSVar13 = extraout_EDX;
code_?:
  func_?(TVar12.m_Index,pSVar13);
  pDVar11 = extraout_EDX_00;
code_?:
  func_?(unaff_EDI,pDVar11);
  pcVar14 = (code *)swi(3);
  bVar8 = (*pcVar14)();
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).accessoryData;
  key = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Failed_to_load_accessory_,(MethodInfo *)0x0);
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields).accessoryData;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    TVar3.m_Index = func_?();
code_?:
    func_?(TVar3.m_Index);
    TVar4.m_Index = extraout_ECX;
  }
  else {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_01.m_Index == 0) {
      pEVar5 = (Enum *)func_?();
      mscorlib.dll::System::Enum::Enum_ToString_2(pEVar5,StringLiteral_d,(MethodInfo *)0x0);
      goto code_?;
    }
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) < bVar6) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 + (uint)bVar6 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pEVar5 = (Enum *)func_?();
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar5,StringLiteral_d,(MethodInfo *)0x0);
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    TVar3.m_Index = 0;
    if (TVar4.m_Index == 0) {
code_?:
      if ((accessory == (AvatarAccessory *)0x0) ||
         (pSVar2 = (accessory->fields)._AssetPath_k__BackingField, pSVar2 == (String *)0x0))
      goto code_?;
      bVar1 = mscorlib.dll::System::String::String_Contains
                        (pSVar2,(String *)TVar3.m_Index,(MethodInfo *)0x0);
      if (bVar1 == 0) goto code_?;
      pEVar5 = (Enum *)func_?();
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar5,StringLiteral_d,(MethodInfo *)0x0)
      ;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_01.m_Index,(Object *)pSVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        puVar7 = (undefined4 *)func_?();
        pEVar5 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,*puVar7);
        pSVar2 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar5,StringLiteral_d,(MethodInfo *)0x0);
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01.m_Index,(Object *)pSVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar3.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
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
          bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals(0,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
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
          bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)pTVar11,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0);
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
              bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_EnumEquals
                                ((Int32Enum__Enum)pTVar11,(Int32Enum__Enum)pTVar12,(MethodInfo *)0x0
                                );
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
    if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
      TVar3 = TVar4;
    }
    if ((String *)TVar3.m_Index != (String *)0x0) goto code_?;
  }
  func_?(TVar4.m_Index);
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
  pOStack_9 = (Object__Array *)0xffffffff;
  method_00 = (MethodInfo *)(this->fields).accessoryData;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    OStack_6.klass = (Object__Class *)pDVar10->_dictionary;
    OStack_6.monitor = (MonitorData *)pDVar10->_version;
    iStack_7 = pDVar10->_index;
    pOStack_8 = (Object *)(pDVar10->_current).key;
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
      this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)uVar11;
      if (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0;
      }
      else {
        bVar13 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((((this_03->klass->_1).naturalAligment < bVar13) ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (this_03->klass->_1).typeHierarchy[bVar13 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
           (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
        goto code_?;
      }
      ppOStack_14 = (Object **)0x2;
      pEVar15 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&ppOStack_14);
      pSVar16 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar15,StringLiteral_d,(MethodInfo *)0x0)
      ;
      if ((this_03 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
         (TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_03,(Object *)pSVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), TVar17.m_Index != 0)) {
        pIVar18 = (Int32__Class *)TypeInfo__MV__Common__AccessorySlotType;
        if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
            (TypeInfo__MV__Common__AccessorySlotType->_0).element_class) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (&OStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
  }
  if (((accessory != (AvatarAccessory *)0x0) &&
      (pTVar19 = AvatarAccessory::AvatarAccessory_get_Transform(accessory,(MethodInfo *)0x0),
      pTVar19 != (Transform *)0x0)) &&
     (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar19,(MethodInfo *)0x0), pGVar20 != (GameObject *)0x0)) {
    pOVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren
                        (pGVar20,
                         UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                        );
    uVar22 = 0;
    if (pOVar21 != (Object__Array *)0x0) {
      ppOStack_14 = pOVar21->vector;
      while( true ) {
        if ((int)pOVar21->max_length <= (int)uVar22) {
          *unaff_FS_OFFSET = puStack_3;
          return;
        }
        if (pOVar21->max_length <= uVar22) break;
        pMStack_23 = (MeshFilter *)*ppOStack_14;
        pGStack_2 = TypeInfo__UnityEngine__GameObject;
        pGVar20 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar20,StringLiteral_SelectionHelper,(MethodInfo *)0x0);
        if ((((pGVar20 == (GameObject *)0x0) ||
             (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar20,(MethodInfo *)0x0),
             pMStack_23 == (MeshFilter *)0x0)) ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMStack_23,(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)) ||
           (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), pTVar19 == (Transform *)0x0))
        goto code_?;
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
        value_00 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (pMStack_23,(MethodInfo *)0x0);
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
        pOVar21 = pOStack_9;
        SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
                  (this_02,accessory,accessorySlot,(this->fields).bodyWoId,(int32_t)pOStack_9,
                   (MethodInfo *)0x0);
        uVar22 = uVar22 + 1;
        ppOStack_14 = ppOStack_14 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  this_03 = extraout_EDX;
code_?:
  uVar24 = func_?(this_03,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  func_?(uVar24);
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
code_?:
  method_00 = (MethodInfo *)&UNK_?;
  pAVar26 = (AccessorySlotType__Enum *)func_?(TVar17.m_Index);
  if (accessorySlot == *pAVar26) {
    pMStack_23 = (MeshFilter *)0x1;
    pEVar15 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&pMStack_23);
    pSVar16 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar15,StringLiteral_d,(MethodInfo *)0x0);
    TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_03,(Object *)pSVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar17.m_Index == 0) goto code_?;
    pIVar18 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?(TVar17.m_Index,pIVar18);
      goto code_?;
    }
    method_00 = (MethodInfo *)&UNK_?;
    puVar27 = (undefined4 *)func_?(TVar17.m_Index);
    pOStack_9 = (Object__Array *)*puVar27;
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
  ppDVar6 = &(this->fields).accessoryData;
  pOStack_7 = (Object__Class *)0x0;
  *ppDVar6 = accessoryData;
  uVar8._0_4_ = (Object *)0x0;
  uVar8._4_4_ = 0;
  func_?(ppDVar6,accessoryData);
  pMVar9 = (MethodInfo *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                          );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar9,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)(pDVar10->_current).value;
    uStack_1 = 1;
    pOVar11 = (Object__Class *)(pDVar10->_current).key;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffff70,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             ), bVar12 != 0) {
      pOVar13 = (Object__Class *)0x0;
      pOStack_14 = pOVar11;
      bVar12 = BodyAccessoriesController_IsAccessoryInWoData
                        (this,(AvatarAccessory *)method_00,(MethodInfo *)0x0);
      pOVar11 = pOVar13;
      if (bVar12 == 0) {
        if (pMVar9 == (MethodInfo *)0x0) goto code_?;
        pOVar11 = (Object__Class *)&UNK_?;
        method_00 = pMVar9;
        func_?();
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff70,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    if (pMVar9 != (MethodInfo *)0x0) {
      pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffb8,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          pMVar9,
                          MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                         );
      key = pLVar15->_current;
      uStack_1 = 4;
      while( true ) {
        pMVar9 = SUB84(uVar8,4);
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
        pDVar16 = (this->fields).accessoryMap;
        if (pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        uVar8._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        uVar8._0_4_ = (Object *)key;
        this_03 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar16,
                             (Int32Enum__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if ((this_03 == (AvatarAccessory *)0x0) ||
           (this_04 = AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0),
           this_04 == (Transform *)0x0)) goto code_?;
        RVar17.First = 0;
        RVar17.Last = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_04,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar16 = (this->fields).accessoryMap;
        if (pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar16,(Int32Enum__Enum)key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        in_stack_18 = key;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_03,(MethodInfo *)0x0);
        key = RVar17;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          key = RVar17;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffa0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 ,pMVar9);
      uStack_1 = 0xffffffff;
      this_01 = (this->fields).accessoryData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffb0,(Dictionary_2_System_UInt32_System_Object_ *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        pOVar11 = (Object__Class *)(pDVar10->_current).key;
        uVar19 = *(ulonglong *)&(pDVar10->_current).value;
        uStack_1 = 7;
        while( true ) {
          while( true ) {
            bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff88,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar12 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffff88,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_18);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_06 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)uVar19;
            pOVar13 = (Object__Class *)0x0;
            pOStack_7 = (Object__Class *)0xffffffff;
            if (pOVar11 != (Object__Class *)0x0) {
              if ((String__Class *)(pOVar11->_0).image == TypeInfo__System__String) {
                pOVar13 = pOVar11;
              }
              if (pOVar13 == (Object__Class *)0x0) goto code_?;
            }
            bVar12 = mscorlib.dll::System::Int32::Int32_TryParse
                              ((String *)pOVar13,(int32_t *)&pOStack_7,(MethodInfo *)0x0);
            pMVar9 = (MethodInfo *)uVar19;
            if (bVar12 != 0) break;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_18 = (RegexCharClass_SingleRange)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value,ExceptionArgument__Enum_obj,pMVar9);
          if (value == (Object *)0x0) break;
          value[1].monitor = (MonitorData *)this;
          func_?();
          value[1].klass = pOStack_7;
          if ((this_06 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
             (((bVar20 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment, (this_06->klass->_1).naturalAligment < bVar20 ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (this_06->klass->_1).typeHierarchy[bVar20 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
              || (this_06 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))))
          goto code_?;
          uVar19 = ZEXT48(TypeInfo__MV__Common__AvatarAccessoryData);
          pOVar11 = (Object__Class *)&UNK_?;
          pEVar21 = (Enum *)func_?();
          pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2
                              (pEVar21,StringLiteral_d,(MethodInfo *)0x0);
          if (this_06 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          TVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (this_06,(Object *)pSVar22,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          pOStack_14 = (Object__Class *)TVar23;
          if (TVar23.m_Index != 0) {
            pOStack_14 = (Object__Class *)0x0;
            if (*(String__Class **)TVar23.m_Index == TypeInfo__System__String) {
              pOStack_14 = (Object__Class *)TVar23;
            }
            if (pOStack_14 == (Object__Class *)0x0) goto code_?;
          }
          pDVar16 = (this->fields).accessoryMap;
          if (pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar16,
                             (Int32Enum__Enum)value[1].klass,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                            );
          if (bVar12 == 0) {
code_?:
            this_02 = (this->fields).accessoryLoader;
            this_05 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (this_05,value,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_02 == (AccessoryLoader *)0x0) break;
            uVar19 = ZEXT48(this_05);
            pOVar11 = pOStack_14;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_02,(String *)pOStack_14,(Action_1_AvatarAccessory_ *)this_05,
                       (MethodInfo *)0x0);
          }
          else {
            pDVar16 = (this->fields).accessoryMap;
            if ((pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
               (pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar16,
                                     (Int32Enum__Enum)value[1].klass,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), pOVar24 == (Object *)0x0)) break;
            bVar12 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pOVar24[2].klass,(String *)pOStack_14,(MethodInfo *)0x0);
            if (bVar12 != 0) goto code_?;
            pDVar16 = (this->fields).accessoryMap;
            if (pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
            bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar16,
                               (Int32Enum__Enum)value[1].klass,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar12 != 0) {
              pDVar16 = (this->fields).accessoryMap;
              if ((pDVar16 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                 (pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar16,
                                       (Int32Enum__Enum)value[1].klass,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ), pOVar24 == (Object *)0x0)) break;
              uVar19 = ZEXT48(pOStack_14);
              pOVar11 = pOVar24[2].klass;
              bVar12 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)pOVar11,(String *)pOStack_14,(MethodInfo *)0x0);
              if (bVar12 != 0) {
                pOStack_14 = (Object__Class *)0x3;
                pEVar21 = (Enum *)func_?();
                pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    (pEVar21,StringLiteral_d,(MethodInfo *)0x0);
                TVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_06,(Object *)pSVar22,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (TVar23.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar23.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar25 = (float *)func_?();
                BodyAccessoriesController_ApplyAccessoryOffset
                          (this,*pfVar25,(AccessorySlotType__Enum)value[1].klass,(MethodInfo *)0x0);
                pEVar21 = (Enum *)func_?();
                pSVar22 = mscorlib.dll::System::Enum::Enum_ToString_2
                                    (pEVar21,StringLiteral_d,(MethodInfo *)0x0);
                TVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_06,(Object *)pSVar22,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (TVar23.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar23.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                puVar26 = (undefined4 *)func_?();
                pOVar11 = (Object__Class *)*puVar26;
                uVar19 = ZEXT48(value[1].klass);
                BodyAccessoriesController_ApplySizeChange
                          (this,(float)pOVar11,(AccessorySlotType__Enum)value[1].klass,
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
  func_?();
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).accessoryMap;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      DStack_8._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar6->_dictionary;
      DStack_8._index = pDVar6->_index;
      DStack_8._version = pDVar6->_version;
      DStack_8._currentValue = pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&DStack_8;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     ,method_00);
          (this->fields).accessoriesVisible = visible;
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((AvatarAccessory *)DStack_8._currentValue == (AvatarAccessory *)0x0) break;
        AvatarAccessory::AvatarAccessory_set_Visible
                  ((AvatarAccessory *)DStack_8._currentValue,visible,(MethodInfo *)0x0);
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
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Dictionary__
            );
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)StringLiteral_Head,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)StringLiteral_Torso,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_System::String>__Add_MV__Common__AccessorySlotType__System__String_
              );
    TypeInfo__BodyAccessoriesController->static_fields->slotBoneNameMap =
         (Dictionary_2_MV_Common_AccessorySlotType_System_String_ *)this;
    func_?(TypeInfo__BodyAccessoriesController->static_fields,this);
    this_00 = (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Dictionary__
              );
    uVar1 = 0;
    if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
      value.z = 0.05;
      value.x = 0.0;
      value.y = 0.6;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__Add
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,1,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      value_00.y = (float)uVar1;
      value_00.x = (float)uVar1;
      value_00.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__Add
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,2,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      value_01.y = (float)_UNK_?;
      value_01.x = (float)uVar1;
      value_01.z = -0.36;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
      Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__Add
                ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,3,value_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_UnityEngine::Vector3>__Add_MV__Common__AccessorySlotType__UnityEngine__Vector3_
                );
      TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset = this_00;
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
            );
  ppDVar1 = &(this->fields).accessoryMap;
  *ppDVar1 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)this_00;
  func_?(ppDVar1,this_00);
  this_01 = (AccessoryLoader *)
            func_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                           );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).accessoryLoader;
  *(AccessoryLoader **)method_00 = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppBVar2 = &(this->fields).bodyData;
  (this->fields).bodyWoId = bodyWoId;
  *ppBVar2 = bodyData;
  func_?(ppBVar2,bodyData);
  ppDVar3 = &(this->fields).accessoryData;
  *ppDVar3 = accessoryData;
  func_?(ppDVar3,accessoryData);
  (this->fields).accessoriesVisible = isVisible;
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
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
        p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (pGVar7,1,
                            SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                           );
        uVar8 = 0;
        if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
          pp_Var9 = p_Var6->vector;
          while( true ) {
            if ((int)p_Var6->max_length <= (int)uVar8) break;
            if (p_Var6->max_length <= uVar8) goto code_?;
            if ((Component *)*pp_Var9 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*pp_Var9,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar7,(MethodInfo *)0x0);
            uVar8 = uVar8 + 1;
            pp_Var9 = pp_Var9 + 1;
          }
          goto code_?;
        }
      }
    }
  }
  else {
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = pDVar9->_dictionary;
      DStack_6._version = pDVar9->_version;
      DStack_6._index = pDVar9->_index;
      DStack_6._current.key = (pDVar9->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar12 == 0) break;
        BodyAccessoriesController_MakeAccessorySelectable
                  (this,(AvatarAccessory *)DStack_6._current.value,DStack_6._current.key,
                   (MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,in_stack_13);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

