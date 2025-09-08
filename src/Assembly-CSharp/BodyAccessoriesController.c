
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
          pDVar6 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) ==
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
        pAVar7 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,key,
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
          this_00 = TypeInfo__BodyAccessoriesController->static_fields->slotBoneOffset;
          if (this_00 != (Dictionary_2_MV_Common_AccessorySlotType_UnityEngine_Vector3_ *)0x0) {
            pVVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,UnityEngine::Vector3]::
                      Dictionary_2_System_Int32Enum_UnityEngine_Vector3__get_Item
                                ((Vector3 *)&stack0xffffffd0,
                                 (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)this_00,key,
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
              value.y = (float)slot + (float)uVar17 * yOffset;
              value.x = (float)this + (float)uVar16 * yOffset;
              value.z = fStack_15 + (pVVar9->upVector).z * yOffset;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar8,value,(MethodInfo *)0x0);
              pDVar2 = (pBVar1->fields).accessoryMap;
              if (pDVar2 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
                pAVar7 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,key,
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
  pDVar6 = extraout_EDX;
code_?:
  func_?(unaff_ESI.m_Index,pDVar6);
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
          pDVar6 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment <= *(byte *)(*(int *)this_03.m_Index + 0xb8)) &&
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)this_03.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) ==
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
              IStack_3.m_value = (int32_t)&UNK_?;
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                size = (float)&TypeInfo__UnityEngine__Vector3;
                this = (BodyAccessoriesController *)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar8 = (pVVar7->oneVector).x;
              uVar9 = (pVVar7->oneVector).y;
              if (this_02 != (Transform *)0x0) {
                value.y = (float)uVar9 * size;
                value.x = (float)uVar8 * size;
                value.z = (pVVar7->oneVector).z * size;
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
  pDVar6 = extraout_EDX;
code_?:
  func_?(this_03.m_Index,pDVar6);
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
              for (; (int)uVar5 < (int)pCVar4->max_length; uVar5 = uVar5 + 1) {
                if (pCVar4->max_length <= uVar5) goto code_?;
                if (*ppCVar6 == (Collider *)0x0) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          (*ppCVar6,0,(MethodInfo *)0x0);
                ppCVar6 = ppCVar6 + 1;
              }
              pTVar3 = AvatarAccessory::AvatarAccessory_get_Transform
                                 ((AvatarAccessory *)&UNK_?,(MethodInfo *)0x0);
              this_01 = (this_02->fields).PartBoneSpacePosition;
              if (this_01 != (Vector3__Array *)0x0) {
                pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                if (pGVar7 != (GameObject *)0x0) {
                  layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    (pGVar7,(MethodInfo *)0x0);
                  LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
                  AvatarAccessory::AvatarAccessory_set_Visible
                            ((AvatarAccessory *)&UNK_?,1,(MethodInfo *)0x0);
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)&UNK_?,(MethodInfo *)0x0);
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
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
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
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
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_01.m_Index = (int32_t)ppBVar4;
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar6.m_Index);
    if (TVar6.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(TVar6.m_Index);
      return *pfVar7;
    }
  }
  func_?(uVar3);
  pDVar5 = extraout_EDX;
code_?:
  func_?(this_01.m_Index,pDVar5);
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
    pDVar5 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01.m_Index,(Object *)pSVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    this_01.m_Index = (int32_t)ppBVar4;
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar6.m_Index);
    if (TVar6.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(TVar6.m_Index);
      return *pfVar7;
    }
  }
  func_?(uVar3);
  pDVar5 = extraout_EDX;
code_?:
  func_?(this_01.m_Index,pDVar5);
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
        slot = (AccessorySlotType__Enum)((float)uStack_7 + VStack_6.x * offset.x);
        fStack_9 = uStack_7._4_4_ + VStack_6.y * offset.x;
        fStack_10 = fStack_8 + VStack_6.z * offset.x;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (&VStack_3,this_02,(MethodInfo *)0x0);
        uStack_7._0_4_ = pVVar5->x;
        uStack_7._4_4_ = pVVar5->y;
        fStack_8 = pVVar5->z;
        slot = (AccessorySlotType__Enum)((float)uStack_7 * offset.y + (float)slot);
        fStack_9 = uStack_7._4_4_ * offset.y + fStack_9;
        fStack_10 = fStack_8 * offset.y + fStack_10;
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
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (Object *)(pDVar7->_current).key;
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
      if (((byte)*(code *)((int)((Object *)in_stack_11)->klass + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (DStack_6._0_8_ = uVar13,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)((int)((Object *)in_stack_11)->klass + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      DStack_6._version =
           (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               in_stack_11,(Object *)pSStack_12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
      uVar14._4_4_ = (int32_t)TypeInfo__System__Int32;
      uVar14._0_4_ = (Dictionary_2_System_Object_System_Object_ *)DStack_6._version;
      if (DStack_6._version == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)DStack_6._version + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      piVar16 = (int *)func_?();
      if (*piVar16 == streamingAssetId) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        pDVar10 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (((this_01->klass->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_01->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)pSStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        unaff_EDI = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)avatarAccessory;
        if (avatarAccessory == (AvatarAccessory *)0x0) break;
        a.m_Index = 0;
        if (TVar11.m_Index != 0) {
          if (*(String__Class **)TVar11.m_Index == TypeInfo__System__String) {
            a = TVar11;
          }
          pSVar12 = TypeInfo__System__String;
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
  TVar11.m_Index = extraout_ECX;
  pSVar12 = extraout_EDX;
code_?:
  func_?(TVar11.m_Index,pSVar12);
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
    if ((*(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
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
        puVar6 = (undefined4 *)func_?();
        pEVar5 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,*puVar6);
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
        pfVar7 = (float *)func_?();
        bVar1 = BodyAccessoriesController_AttachAccessory
                          (this,accessory,slot,(float)offset,*pfVar7,(MethodInfo *)0x0);
        if (bVar1 == 0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        if ((this->fields).accessoryMoveOverride == 0) {
code_?:
          MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar8 != MVGameMode__Enum_CharacterEditor) goto code_?;
          mscorlib.dll::System::Object::Object_GetType((Object *)accessory,(MethodInfo *)0x0);
          pIVar9 = TypeRef__AvatarAccessoryHat;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
          bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals(0,(Int32Enum__Enum)pTVar10,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
        }
        else {
          pTVar10 = mscorlib.dll::System::Object::Object_GetType
                              ((Object *)accessory,(MethodInfo *)0x0);
          pIVar9 = TypeRef__AvatarAccessoryHat;
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
          bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)pTVar10,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            if ((this->fields).accessoryMoveOverride != 0) {
              pTVar10 = mscorlib.dll::System::Object::Object_GetType
                                  ((Object *)accessory,(MethodInfo *)0x0);
              pIVar9 = TypeRef__AvatarAccessoryBackAccessories;
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar11 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
              bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_EnumEquals
                                ((Int32Enum__Enum)pTVar10,(Int32Enum__Enum)pTVar11,(MethodInfo *)0x0
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if ((this->fields).accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)(this->fields).accessoryData;
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
      else if ((((this_03->klass->_1).naturalAligment <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (this_03->klass->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
              || (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
      goto code_?;
      ppOStack_13 = (Object **)0x2;
      pEVar14 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&ppOStack_13);
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar14,StringLiteral_d,(MethodInfo *)0x0)
      ;
      if ((this_03 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
         (TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_03,(Object *)pSVar15,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), TVar16.m_Index != 0)) {
        pIVar17 = (Int32__Class *)TypeInfo__MV__Common__AccessorySlotType;
        if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) ==
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
      (pTVar18 = AvatarAccessory::AvatarAccessory_get_Transform(accessory,(MethodInfo *)0x0),
      pTVar18 != (Transform *)0x0)) &&
     (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar18,(MethodInfo *)0x0), pGVar19 != (GameObject *)0x0)) {
    pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren
                        (pGVar19,
                         UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                        );
    uVar21 = 0;
    if (pOVar20 != (Object__Array *)0x0) {
      ppOStack_13 = pOVar20->vector;
      while( true ) {
        if ((int)pOVar20->max_length <= (int)uVar21) {
          *unaff_FS_OFFSET = puStack_3;
          return;
        }
        if (pOVar20->max_length <= uVar21) break;
        pMStack_22 = (MeshFilter *)*ppOStack_13;
        pGStack_2 = TypeInfo__UnityEngine__GameObject;
        pGVar19 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar19,StringLiteral_SelectionHelper,(MethodInfo *)0x0);
        if ((((pGVar19 == (GameObject *)0x0) ||
             (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar19,(MethodInfo *)0x0),
             pMStack_22 == (MeshFilter *)0x0)) ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMStack_22,(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)) ||
           (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), pTVar18 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar18,value,(MethodInfo *)0x0);
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar19,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector3);
          cRam_? = '\x01';
        }
        if (pTVar18 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar18,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar19,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar18 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar18,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar19,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar18 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar18,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                   (MethodInfo *)0x0);
        this_01 = (MeshCollider *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar19,
                             UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                            );
        value_00 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (pMStack_22,(MethodInfo *)0x0);
        if (this_01 == (MeshCollider *)0x0) goto code_?;
        UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_sharedMesh
                  (this_01,value_00,(MethodInfo *)0x0);
        value_01 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Hidden,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar19,value_01,(MethodInfo *)0x0);
        this_02 = (SelectionHelperAvatarAccessory *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar19,
                             SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionHelperAvatarAccessory>__
                            );
        if (this_02 == (SelectionHelperAvatarAccessory *)0x0) goto code_?;
        pOVar20 = pOStack_9;
        SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
                  (this_02,accessory,accessorySlot,(this->fields).bodyWoId,(int32_t)pOStack_9,
                   (MethodInfo *)0x0);
        uVar21 = uVar21 + 1;
        ppOStack_13 = ppOStack_13 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  this_03 = extraout_EDX;
code_?:
  uVar23 = func_?(this_03,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  func_?(uVar23);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  method_00 = (MethodInfo *)&UNK_?;
  pAVar25 = (AccessorySlotType__Enum *)func_?(TVar16.m_Index);
  if (accessorySlot == *pAVar25) {
    pMStack_22 = (MeshFilter *)0x1;
    pEVar14 = (Enum *)func_?(TypeInfo__MV__Common__AvatarAccessoryData,&pMStack_22);
    pSVar15 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar14,StringLiteral_d,(MethodInfo *)0x0);
    TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_03,(Object *)pSVar15,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar16.m_Index == 0) goto code_?;
    pIVar17 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?(TVar16.m_Index,pIVar17);
      goto code_?;
    }
    method_00 = (MethodInfo *)&UNK_?;
    puVar26 = (undefined4 *)func_?(TVar16.m_Index);
    pOStack_9 = (Object__Array *)*puVar26;
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
  UStack_6._._defaultValue_k__BackingField =
       (UxmlObjectAttributeDescription_1_System_Collections_Generic_List_1_System_Object___Fields)
       (List_1_System_Object_ *)0x0;
  uVar7._0_4_ = (Object *)0x0;
  uVar7._4_4_ = 0;
  func_?(&(this->fields).accessoryData,accessoryData);
  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).accessoryMap;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(pDVar8->_current).key;
    uVar10 = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffff88,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             ), bVar11 != 0) {
      pDStack_12 = pDVar9;
      bVar11 = BodyAccessoriesController_IsAccessoryInWoData
                        (this,(AvatarAccessory *)uVar10,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        uVar7._4_4_ = (int32_t)pDStack_12;
        uVar7._0_4_ = (Object *)this_02;
        func_?();
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff88,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
               ,(MethodInfo *)uVar7);
    uStack_1 = 0xffffffff;
    if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffb8,this_02,
                          MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                         );
      key_01 = pLVar13->_current;
      uStack_1 = 4;
      while( true ) {
        method_00 = SUB84(uVar10,4);
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                          );
        if (bVar11 == 0) break;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pDVar14 = (this->fields).accessoryMap;
        if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        uVar10._4_4_ = (int32_t)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
        ;
        uVar10._0_4_ = (Object *)key_01;
        this_03 = (AvatarAccessory *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                             (Int32Enum__Enum)key_01,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                            );
        if ((this_03 == (AvatarAccessory *)0x0) ||
           (this_04 = AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0),
           this_04 == (Transform *)0x0)) goto code_?;
        RVar15.First = 0;
        RVar15.Last = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_04,(Transform *)0x0,(MethodInfo *)0x0);
        pDVar14 = (this->fields).accessoryMap;
        if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,(Int32Enum__Enum)key_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                  );
        in_stack_16 = key_01;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_03,(MethodInfo *)0x0);
        key_01 = RVar15;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          key_01 = RVar15;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffa0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pDVar9 = (this->fields).accessoryData;
      if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffb0,(Dictionary_2_System_UInt32_System_Object_ *)pDVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        pDVar14 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)
                  (pDVar8->_current).key;
        uVar17 = *(ulonglong *)&(pDVar8->_current).value;
        uStack_1 = 7;
        while( true ) {
          while( true ) {
            bVar11 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff70,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar11 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffff70,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,(MethodInfo *)in_stack_16);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)uVar17;
            pDVar18 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
            UStack_6._._defaultValue_k__BackingField =
                 (UxmlObjectAttributeDescription_1_System_Collections_Generic_List_1_System_Object___Fields
                  )(List_1_System_Object_ *)0xffffffff;
            if (pDVar14 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
              if ((Dictionary_2_System_Int32Enum_System_Single___Class *)pDVar14->klass ==
                  (Dictionary_2_System_Int32Enum_System_Single___Class *)TypeInfo__System__String) {
                pDVar18 = pDVar14;
              }
              if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
            }
            bVar11 = mscorlib.dll::System::Int32::Int32_TryParse
                              ((String *)pDVar18,(int32_t *)&UStack_6,(MethodInfo *)0x0);
            if (bVar11 != 0) break;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            in_stack_16 = (RegexCharClass_SingleRange)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          this_05 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(this_05,(MethodInfo *)0x0);
          if (this_05 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) break;
          this_05[1].klass = (UxmlObjectListAttributeDescription_1_System_Object___Class *)this;
          func_?();
          (this_05->fields)._._defaultValue_k__BackingField =
               (List_1_System_Object_ *)UStack_6._._defaultValue_k__BackingField;
          if (pDStack_12 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
            accessoryData = pDStack_12;
          }
          else {
            accessoryData = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
          }
          pEVar19 = (Enum *)func_?();
          pSVar20 = mscorlib.dll::System::Enum::Enum_ToString_2
                             (pEVar19,StringLiteral_d,(MethodInfo *)0x0);
          if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          TVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             accessoryData,(Object *)pSVar20,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)TVar21;
          if (TVar21.m_Index != 0) {
            pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (*(String__Class **)TVar21.m_Index == TypeInfo__System__String) {
              pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)TVar21;
            }
            if (pDStack_12 == (Dictionary_2_System_Object_System_Object_ *)0x0)
            goto code_?;
          }
          pDVar14 = (this->fields).accessoryMap;
          if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar14,
                             (Int32Enum__Enum)(this_05->fields)._._defaultValue_k__BackingField,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                            );
          if (bVar11 == 0) {
code_?:
            this_01 = (this->fields).accessoryLoader;
            this_06 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                       *)func_?();
            uVar17 = CONCAT44(this_05,this_06);
            pDVar14 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)&UNK_?;
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (this_06,(Object *)this_05,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_01 == (AccessoryLoader *)0x0) break;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_01,(String *)pDStack_12,(Action_1_AvatarAccessory_ *)this_06,
                       (MethodInfo *)0x0);
          }
          else {
            pDVar14 = (this->fields).accessoryMap;
            if ((pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
               (pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                     (Int32Enum__Enum)
                                     (this_05->fields)._._defaultValue_k__BackingField,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), pOVar22 == (Object *)0x0)) break;
            bVar11 = mscorlib.dll::System::String::String_op_Inequality
                              ((String *)pOVar22[2].klass,(String *)pDStack_12,(MethodInfo *)0x0);
            if (bVar11 != 0) goto code_?;
            pDVar14 = (this->fields).accessoryMap;
            if (pDVar14 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
            key = (this_05->fields)._._defaultValue_k__BackingField;
            uVar17 = CONCAT44(MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              ,key);
            bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar14,
                               (Int32Enum__Enum)key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar11 != 0) {
              pDVar18 = (this->fields).accessoryMap;
              if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) break;
              uVar17 = uVar17 & 0xffffffff;
              pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,
                                   (Int32Enum__Enum)
                                   (this_05->fields)._._defaultValue_k__BackingField,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                  );
              if (pOVar22 == (Object *)0x0) break;
              bVar11 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)pOVar22[2].klass,(String *)pDStack_12,(MethodInfo *)0x0);
              if (bVar11 != 0) {
                pDStack_12 = (Dictionary_2_System_Object_System_Object_ *)0x3;
                pEVar19 = (Enum *)func_?();
                pSVar20 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar19,StringLiteral_d,(MethodInfo *)0x0);
                TVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   accessoryData,(Object *)pSVar20,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if (TVar21.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar21.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController_ApplyAccessoryOffset
                          (this,*pfVar23,
                           (AccessorySlotType__Enum)
                           (this_05->fields)._._defaultValue_k__BackingField,(MethodInfo *)0x0);
                pDVar14 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)
                          func_?();
                pSVar20 = StringLiteral_d;
                key_00 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   ((Enum *)pDVar14,StringLiteral_d,(MethodInfo *)0x0);
                uVar17 = ZEXT48(pSVar20);
                TVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   accessoryData,(Object *)key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if (TVar21.m_Index == 0) break;
                if (*(Il2CppClass **)(*(int *)TVar21.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar23 = (float *)func_?();
                BodyAccessoriesController_ApplySizeChange
                          (this,*pfVar23,
                           (AccessorySlotType__Enum)
                           (this_05->fields)._._defaultValue_k__BackingField,(MethodInfo *)0x0);
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
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
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  (this->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)this_00
  ;
  func_?(&(this->fields).accessoryMap,this_00);
  this_01 = (AccessoryLoader *)
            func_?(
                           TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                           );
  Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
            (this_01,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).accessoryLoader;
  (this->fields).accessoryLoader = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).bodyWoId = bodyWoId;
  (this->fields).bodyData = bodyData;
  func_?(&(this->fields).bodyData,bodyData);
  (this->fields).accessoryData = accessoryData;
  func_?(&(this->fields).accessoryData,accessoryData);
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
          for (; (int)uVar8 < (int)p_Var6->max_length; uVar8 = uVar8 + 1) {
            if (p_Var6->max_length <= uVar8) goto code_?;
            if ((Component *)*pp_Var9 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)*pp_Var9,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pGVar7,(MethodInfo *)0x0);
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

